#include<stdio.h>
#include<stdbool.h>
#define COUNT 10

void inPut(int mat[COUNT][COUNT])
{
    
    for ( int j = 0; j < COUNT; j++)
    {
        for ( int k = 0; k < COUNT; k++)
        {   
            scanf("%d",&mat[j][k]);
            if (k==j)
        {
            mat[j][k]=0;
        }
       
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


void pathExistence(int a, int b, int mat[COUNT][COUNT])
{
    if(mat[a][b]!=0)
    {
    printf ("%s","true");
    }
    else
    {
    printf ("%s","false");
    }
    
}


void shortestPath(int a, int b, int mat[COUNT][COUNT])
{
        printf ("%d",mat[a][b]); 
}
