
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
    char **states;
};

struct Point get_Centre_Of_Mass(struct Point centroid, struct Point* points, int length, int d);
struct Point get_Point_From_Line(char line[256]);

float euclidian_Distance(struct Point p1, struct Point p2, int dimension);

int get_Random(int number_Of_Points);
int nearest_Centroid_From_Point(struct Point p1, struct Point* centroids, int k, int d);

short int is_Point_One_Of_Centroids(struct Point *centroids, struct Point point, int c_Length, int d);

void write_Last_Centroids_To_File(struct Point* centroids, const char* path, int number_Of_Centroids, int d);
void initialize_Map(struct Map* map, int number_Of_Centroids);
#endif //K_MEANS_R_D_UTILS_H