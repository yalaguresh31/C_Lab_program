/* An electricity board charges the following rates for the use of electricity:for the 
first 200 units 80 paise per unit: for the next 100 units 90 paise per unit: beyond 300
units Rs 1 per unit.
All users are charged a minimum of Rs 100 meter charge.If the total billAmount is more than Rs 400,
than an additional surcharge of 15% of total billAmount is charged.
Write a program to read the name of the user,number of units consumed and print out the cbarges
*/

//Include necessary headers
#include<stdio.h>
void main(){

//Declare all variables 
    char name[20];
    int units;
    float billAmount;

//Get name and units as inputs
    printf("Enter the consumer name\n");
    scanf("%s",name);
    printf("Enter consumed units\n");
    scanf("%d",&units);

//check the condition for units
    billAmount = 100;
    if(units<=200)
        billAmount = billAmount + (units*0.8);
                         
    else if(units<=300)
        billAmount = billAmount + (200*0.8)+((units-200)*0.9);
    else    
        billAmount = billAmount + (200*0.8)+(100*0.9)+((units-300)*1);

    
    if(billAmount>400)
        billAmount = billAmount + (0.15*billAmount);
    

//print output name,units and billAmount in the screen
    printf("customer name is %s\n",name);
    printf("Total unts consumed is %d\n",units);
    printf("Total Bill billAmount is Rs %.2f\n",billAmount);
}


/*
#include<stdio.h>
void main(){

    char name[20];
    int units;
    float billAmount;

    printf("Enter the consumer name\n");
    scanf("%s",&name);
    printf("Enter consumed units\n");
    scanf("%d",&units);
    
    if(units<=200)
        billAmount = units*0.80;
        

    else if(units<=300)
        billAmount = (units-200)*0.90+160;
    
    else
    billAmount = units-50;
    billAmount = billAmount + 100;

    if(billAmount>400)
        billAmount = 1.15*billAmount;

   printf("In Electricity Bill of %s is %f\n",name,billAmount);

}
*/



