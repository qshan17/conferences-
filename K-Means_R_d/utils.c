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

    for (int i =