#include <stdio.h>
#include<stdbool.h>
#define COUNT 10

void inPut(int mat[COUNT][COUNT]);
void floydWarshall(int mat [COUNT][COUNT]);
bool pathExistence(int a, int b, int mat[COUNT][COUNT]);
int shortestPath(int a, int b, int mat[COUNT][COUNT]);