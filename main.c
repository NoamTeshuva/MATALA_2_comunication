#include <stdio.h>
#include "my_mat.h"
#define COUNT 10

int main ()
{
int mat [10][10]={ 0 };
char ch;
printf("please start the program (choose A,B,C,D): ");
scanf ("%c", &ch);
while ((ch!='D'))
{
    if ((ch='A'))
    {
        inPut(mat);
        floydWarshall(mat);
        printf("want to choose another progrma?");
        scanf ("%c", &ch);
    }

    if ((ch='B'))
    {
        int a,b;
        printf("please enter two numbers");
        scanf ("%d", &a);
        scanf ("%d", &b);
        pathExistence(a,b,mat);
        printf("want to choose another progrma?");
        scanf ("%c", &ch);
    }
   if ((ch='C'))
    {
        int c,d;
        printf("please enter two numbers");
        scanf ("%d", &c);
        scanf ("%d", &d);
        shortestPath(c,d,mat);
        printf("want to choose another progrma?");
        scanf ("%c", &ch);
    }
    if ((ch='D'))
    {
        break;
    }
}
}
