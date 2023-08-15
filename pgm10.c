//pointers
#include<stdio.h>
#include<math.h>
void main(){

float a[10],*ptr,mean,std,sumstd =0,sum = 0;
int n,i;
ptr = a; 
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter array elements :\n");
for(i=0; i<n; i++){
    scanf("%f",&a[i]);
    sum = sum + *ptr;
    ptr++;
}
mean = sum/n;
ptr = a;        
for(i=0; i<n; i++){
   sumstd = sumstd + pow(*ptr-mean,2);
    ptr++;

}
std = sqrt(sumstd/n);
printf("sum = %f\n",sum);
printf("mean = %f\n",mean);
printf("standard deviation = %f\n",std);
}
 