
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#include"utils.h"

short int number_of_points = -1; //global used for input points and then for centroids

/*Getting the points from dataset in Point array*/
struct Point* get_Points(char *path){

  char line[256];
  FILE* file = fopen(path, "r");

  if(file == NULL) {
      printf("Error opening input file! %s \n", path);
      exit(1);
  }

    else{

      struct Point* my_Points = malloc(sizeof(struct Point) * 100);

      while (fgets(line, sizeof(line), file)) {

          number_of_points++;
          my_Points[number_of_points] = get_Point_From_Line(line);
      }
      fclose(file);


      return my_Points;
  }

}

/*Choosing randomly k centroids, and write them to file*/
void get_Random_Centroids(int number_Of_Centroids,int d, struct Point* points, char const *centroids_file){

    struct Point centroids[20];

    short int count = -1;
    FILE *file_to_write = fopen(centroids_file, "w");

    if(file_to_write == NULL){
        printf("Error opening centroids file!\n");
        exit(1);
    }

    else{

        for (int i = 0; i < number_Of_Centroids; i++){

            count++;
            int random = get_Random(number_of_points);
            centroids[count] = points[random];
            printf("Centroid %d chosen : \n ", i+1);

            printf("Coordinates :  ( ");
            for (int j = 0; j < d; j++) {

                printf("%.4f", centroids[count].coordinates[j]);
                fprintf(file_to_write, "%.4f", centroids[count].coordinates[j]);

                if (j != d-1){
                    printf(", ");
                    fprintf(file_to_write,",");
                }
            }
            printf(" ); ");

            printf("\n");
            fprintf(file_to_write,"\n");
        }

    }
    printf("\n\n");
    fclose(file_to_write);
}

void k_Means(int k,int d, char const* centroids_file, int number_of_points, struct Point* my_Points){

    /*First step -> put centroid data in buffer, and set up stopping condition*/
    int configuration_Updated, state_Counter = 0;
    char* configuration = malloc(sizeof(char) * 255);
    strcpy(configuration,"\0");
    struct Point* centroids = get_Points((char *) centroids_file);
    struct States my_States;

    my_States.states = malloc(sizeof(char) * 10000);

    char* temp_config = malloc(sizeof(char) * 255);

    for(int i = 0 ; i < k; i++){
        strcat(configuration,"(");
        for(int j = 0 ; j < d; j++) {

            sprintf(temp_config, " %.4f ", centroids[i].coordinates[j]);
            temp_config[strlen(temp_config)] = '\0';
            strcat(configuration, temp_config);
        }
        strcat(configuration, "); ");
    }

    my_States.states[state_Counter] = malloc(sizeof(char) * strlen(configuration));
    strcpy(my_States.states[state_Counter],configuration);

    free(temp_config);

    /*Second step -> apply K-means*/
    do{
        printf("Current centroids : \n");

        for(int i = 0 ; i < k; i++) {
            printf("(");
            for(int j = 0 ; j < d; j++) {
                printf(" %.4f ", centroids[i].coordinates[j]);
            }

            printf(");\n");
        }

        struct Map *my_Map = malloc(sizeof(struct Map) * k);
        initialize_Map(my_Map, k);

        /*Assign points to each centroid*/
        for(int i = 0 ; i <= number_of_points; i++){

            if (is_Point_One_Of_Centroids(centroids, my_Points[i], k, d) == 0) {

                int current = nearest_Centroid_From_Point(my_Points[i], centroids, k, d);
                memcpy(&my_Map[current].points[my_Map[current].current_Count], &my_Points[i], sizeof(my_Points[i]));
