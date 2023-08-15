//simulation of a simple calculator

//Include necessary headers
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

    //Declare all variables
    char operator;
    float num1,num2,result;

//Get operator and numbers as inputs
    printf("Enter an operator(+ - * /):");
    scanf("%c",&operator);

    printf("Enter the number of num1 and num2:");
    scanf("%f%f",&num1,&num2);


 //check the condition for operator
 
    switch (operator){
    case '+' : result = num1 + num2;
        break;
    case '-' : result = num1 - num2;
       break;
    case '*' : result = num1 * num2;
       break;
    case '/' : result = num1 / num2;
    break;
    case '$' : result = pow(num1,num2);
    break;
    case '^' : result = pow(num1,num2);
    break;
    default : printf("your enter the wrong operator\n");
        
        exit(0);
    }

    //print input numbers and output result in the screen
   printf("In the result of %.2f%c%.2f is = %.2f\n",num1,operator,num2,result);
return 0;
}
/*

#include<stdio.h>
#include<stdlib.h>
void main()
{
    char operator;
    float num1,num2,result;

    printf("Enter an operator(+ - * /):");
    scanf("%c",&operator);

    printf("Enter the number of num1 and num2:");
    scanf("%f%f",&num1,&num2);
    
    if(operator == '+'){
        result = num1 + num2;
        printf("The result = %.2f\n",result);
    }
    else if(operator == '-'){
        result = num1 - num2;
        printf("The result = %.2f\n",result);
    }
    else if(operator == '*'){
        result = num1 * num2;
        printf("The result = %.2f\n",result);
    }
    else if(operator == '/'){
        result = num1 / num2;
        printf("The result = %.2f\n",result);
    }
    else {
        printf("Enter the wroing operator\n");
    }


}
*/

