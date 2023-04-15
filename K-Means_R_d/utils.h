
//
// Created by Marius on 1/2/2017.
//

#ifndef K_MEANS_R_D_UTILS_H
#define K_MEANS_R_D_UTILS_H

struct Point{
    float *coordinates;
};

struct Map{

    struct Point points[10000];
    int current_Count;
};

struct States{