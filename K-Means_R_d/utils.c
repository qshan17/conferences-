//
// Created by Marius on 1/2/2017.
//
#include "utils.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include<string.h>

float euclidian_Distance(struct Point p1, struct Point p2, int dimension){

    float sum = 0;

    for (int i = 0; i < dimension; i++) {
        sum += pow((p2.coordinates[i] - p1.coordinates[i]),2);
    }

    return (float) sqrt(sum);
}

/*Random algorithm for centroids configuration*/
int get_Random(int number_Of_Points){

    return rand() % number_Of_Points;
}

/*Assign the current point to the centroid whose distance between him and the current point is the smallest*/
int nearest_Centroid_From_Point(struct Point p1, struct Point* centroids, int k, int d){

    int centroid = -1;
    float min = 1000;

    for (int j = 0 ; j < k; j++){
        float current_Distance = euclidian_Distance(p1, centroids[j], d);

        if (min > current_Distance){

            min = current_Distance;
            centroid = j;
        }
    }

    return centroid;

}

/*Calculate center of mass between centroid and all points assigned to it*/
struct Point get_Centre_Of_Mass(struct Point centroid, struct Point* points, int length, int d){

    struct Point my_Point;
    float s = 0;

    my_Point.coordinates = malloc(sizeof(float) *d);

    if(length == 0){
        return centroid;
    }

    for (int i = 0 ; i < length; i++) {
        for(int j = 0 ; j < d; j++) {
        }
    }
    for (int j = 0 ; j < d; j++) {
        for(int i = 0 ; i < length; i++){
            s += points[i].coordinates[j];
        }
        my_Point.coordinates[j] = s / length;
        s = 0;
    }

    return my_Point;
}

/*Writing the last state (centroids) to output file*/
void write_Last_Centroids_To_File(struct Point* centroids, const char* path, int number_Of_Centroids, int d){

    FILE *file_to_write = fopen(path, "w");

    if(file_to_write == NULL){
        printf("Error opening centroids file (last centroids)!\n");
        exit(1);
    }

    else{

        for(int i = 0 ; i < number_Of_Centroids; i++){

            for(int j = 0 ; j < d; j++) {
                fprintf(file_to_write, "%.4f", centroids[i].coordinates[j]);

                if(j != d -1){
                    fprintf(file_to_write,",");
                }
            }

            fprintf(file_to_write,"\n");
        }

    }

    fclose(file_to_write);
}

/*Parse line into coordinates for current Point*/
struct Point get_Point_From_Line(char line[256]){

    char* token;
    float current;
    short int i = -1;

    struct Point m_Point;
    m_Point.coordinates = malloc(sizeof(float) * 100); //maximum d - dimension : 100, convention

    token = strtok (line, ",");

    while (token != NULL){

        i++;
        sscanf (token, "%f", &current);
        m_Point.coordinates[i] = current;

        token = strtok (NULL, ",");
    }

    return m_Point;
}

/*We want to assign to a centroid, only points which are not the centroids themselves.*/
short int is_Point_One_Of_Centroids(struct Point *centroids, struct Point point, int c_Length, int d){

    int counter = 0;

    for(int i = 0 ; i < c_Length; i++){
        for(int j = 0 ; j < d; j++)
            if(centroids[i].coordinates[j] == point.coordinates[j]) {
                counter++;
            }
     