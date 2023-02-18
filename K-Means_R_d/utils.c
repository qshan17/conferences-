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
int get_Random(int number_Of_Poi