//Function declaration
void ptc(char *str, int len,double H[]);
//End function declaration
#include<math.h>
#include<stdio.h>
#include<stdlib.h>



void ptc(char *str, int len,double H[])
{
int i;
FILE *fp;
fp = fopen(str,"w");

for (i = 0; i < len; i++)
{
    fprintf(fp,"%lf\n",H[i]);
}

fclose(fp);
}
