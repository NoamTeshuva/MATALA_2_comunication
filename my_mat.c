#include<stdio.h>
#include<stdbool.h>
#define COUNT 10

void inPut(int mat[COUNT][COUNT])
{
int j,k,i=0;
int input;
while (i<100)
{
    printf("please anter a number:");
    scanf("%d",&input);
    for (  j = 0; j < COUNT; j++)
    {
        for ( k = 0; k < COUNT; k++)
        {   
            if (k==j)
        {
            mat[j][k]=0;
        }
        else
        {
            mat[j][k]=input;
            mat[k][j]=input;
        }
        }
    i++;
    }
}
}

void floydWarshall(int mat [COUNT][COUNT])
{
int i,j,k;
for (i = 0;i<COUNT;i++)
{   
    for (j=0;i<COUNT;j++)
    {
        for(k=0;k<COUNT;k++)
        {
            if (mat[i][k] + mat[k][j] < mat[i][j])
            {
                mat[i][j] = mat[i][k] + mat[k][j];            
            }
        }   
    } 
}
}


bool pathExistence(int a, int b, int mat[COUNT][COUNT])
{
    if(mat[a][b]!=0)
    {
    return true;
    }
    else return false;
}


int shortestPath(int a, int b, int mat[COUNT][COUNT])
{
    return mat[a][b];
}
