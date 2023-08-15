//quadratic equation

//Include necessary headers
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
//Declare all variables
float a,b,c;
float disc,root1,root2,rp,ip;

//Get coefficients as inputs
printf("Eter the values for coefficients(a b c)\n");
scanf("%f%f%f",&a,&b,&c);
if(a == 0){
    printf("your enter the inviled number\n");
    exit(0);
}
disc = b*b-4*a*c;

//check the condition for disc
if(disc == 0){
    printf("Roots are real and equal\n");
    root1 = -b/(2*a);
    root2 = root1;
    
    printf("Root1 = %f\n",root1);
    printf("Root2 = %f\n",root2);

}
else if(disc>0){
    printf("Roots are real and distinst\n");
    root1 = (-b+sqrt(disc))/(2*a);
    root2 = (-b-sqrt(disc))/(2*a);

     printf("Root1 = %f\n",root1);
    printf("Root2 = %f\n",root2);
}
else if(disc<0){
    printf("Roots are complex\n");
    rp = -b/(2*a);
    ip = sqrt(fabs(disc))/(2*a);

    printf("Root1 = %f + i%f\n",rp,ip);
    printf("Root2 = %f - i%f\n",rp,ip);
}
else
printf("Enter the wrong number\n");
} 