//string operations

//Include necessary headers
#include<stdio.h>
void length(char str1[],char str[]);
void compare(char str1[],char str2[]);
void concat(char str1[],char str2[]);

void main(){

    char str1[20],str2[20];
    printf("Enter string 1:\n");
    scanf("%s",str1);
    printf("Enter string 2:\n");
    scanf("%s",str2);

    length(str1,str2);
    compare(str1,str2);
    concat(str1,str2);

}


                 


void length(char str1[],char str2[]){

int i=0,j=0;
while(str1[i]!='\0'){
    i++;
}
printf("Length of the first string is %d\n",i);

while(str2[j] != '\0')
j++;

printf("length of the second string is %d\n",j);
}






void compare(char str1[],char str2[]){
    
     int i;
    for(i=0; str1[i] != '\0'; i++){

        if(str1[i] != str2[i])
        break;
    }
if(str1[i] == str2[i])
printf("string1 and string2 are same\n");

else
printf("string1 and string2 are not same\n");


}






void concat(char str1[],char str2[]){
int i=0,j=0;
while(str1[i]!='\0'){
    i++;
}

while(str2[j]!='\0'){
str1[i++] = str2[j++];
}

str1[i++] = '\0';

printf("The concatenation of string1 and strin2 is : %s\n",str1);
}


