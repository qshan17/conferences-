
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