//Function declaration
void ptc(char *str, int len);
//End function declaration
#include<math.h>
#include<stdio.h>
#include<stdlib.h>



void ptc(char *str, int len)
{
int i;
FILE *fp;
fp = fopen(str,"w");
double B[2];
B[0]=0.6;
B[1]=-0.2;

if(fp == NULL)
    {
        /* File not created hence exit */
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }

for (i = 0; i < len; i++)
{
    fprintf(fp,"%lf\n",(double)B[i]);
}

fclose(fp);
}



double fun0(double K[2][2])
{
	    int x=1,y=1;
   	    double B[2];
        B[0]=(K[1][1]*x-K[0][1]*y)/(K[0][0]*K[1][1]-K[0][1]*K[1][0]);
        B[1]=(K[0][0]*y-K[1][0]*x)/(K[0][0]*K[1][1]-K[0][1]*K[1][0]);   
        return B[0];  
}


double fun1(double K[2][2])
{
	    int x=1,y=1;
   	    double B[2];
        B[0]=(K[1][1]*x-K[0][1]*y)/(K[0][0]*K[1][1]-K[0][1]*K[1][0]);
        B[1]=(K[0][0]*y-K[1][0]*x)/(K[0][0]*K[1][1]-K[0][1]*K[1][0]);   
        return B[1];  
}
