//Taylor series sin(x)
#include<stdio.h>
#include<math.h>
void main()
{
    float i = 2,x,sum,term;
    printf("Enter the degree\n");
    scanf("%f",&x);

    term = sum = x = x * (3.142/180);

    while(fabs(term)>0.000001){
        term = -term * x * x /(i*(i+1));
        sum = sum + term;
        i = i + 2;
    }

    printf("value is %f\n and using built in function is %f\n",sum,sin(x));
}

          