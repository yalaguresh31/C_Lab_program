//bubble sort

//Include necessary headers
#include<stdio.h>
void main(){

//Declare all variables 
int i,j,n,num[20],temp;

//Get array vlues as inputs
printf("Enter the number of elements\t");
scanf("%d",&n);
printf("Enter the number\n");
for(i=0; i<n; i++){
scanf("%d",&num[i]);
}

//check the condition 
for(i=0; i<n; i++){
for(j=0; j<n-i-1; j++){
if(num[j]>num[j+1]){
    temp = num[j];
    num[j] = num[j+1];
    num[j+1] = temp;
}
}
}

//print output poduct array in the screen
printf("the sorted array is :\n");
for(i=0; i<n; i++){
printf("%d\t",num[i]);
}
}      

            