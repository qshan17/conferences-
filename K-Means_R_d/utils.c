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
void write_Last_Centroids_To_File(struct Point* centroids,