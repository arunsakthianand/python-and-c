#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ptc.h"



int  main() //main function begins
{
double i;
double A[2][2],B[2];
double z;
    for(i=-10;i<10;i++)
    {
		z=i*i*i - i*i + 2;
		if(z==0)
		{
          int x=1,y=1;
          A[0][0]=1;
          A[0][1]=i-1;
          A[1][0]=2;
          A[1][1]=pow(i,2);
          B[0]=(A[1][1]*x-A[0][1]*y)/(A[0][0]*A[1][1]-A[0][1]*A[1][0]);
          B[1]=(A[0][0]*y-A[1][0]*x)/(A[0][0]*A[1][1]-A[0][1]*A[1][0]);
          printf("\nThe point P is \n %lf ",B[0]);
          printf("%lf ",B[1]);
          double k=(pow(B[0],2))+(pow(B[1],2));
          double l=sqrt(k);
          printf("\nThe distance from origin is %lf ",l);
        }
    }
    return 0;

ptc("ptc.dat", 2, B);



}