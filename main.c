#include "linear.h"
#include "./mean_module/mean_module.h"
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE* fp=fopen("file.txt","r");
    int j=0,i=0;
    double** arr=(double**)malloc(sizeof(double*)*4);
    double** regression;
    for(int i=0;i<4;i++)
        *(arr+i)=(double*)malloc(sizeof(double)*12);
    while(!feof(fp)){
        if(j==12){
            j=0;
            i++;
        }
        fscanf(fp,"%lf",*(arr+i)+j);
        j++;
    }
    sum_of_squares_of_deviations(arr,4,12);
    //print(regression,3,1);
    return 0;
}
