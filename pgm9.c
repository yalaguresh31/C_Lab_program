//structures to read,write and compute average marks
#include<stdio.h>
struct student{
    char name[50];
    float marks;
};

void main(){
    struct student s[50];
    int n,i;
    float avg,sum = 0;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    for(i = 0; i<n; i++){
        printf("Enter %d student record\n",i+1);
        printf("Enter the name and marks\n");
        scanf("%s\t %f\n",s[i].name,&s[i].marks);
    }
    printf("students details are\n");
   printf("name\t marks\n");
    for(i = 0; i<n; i++)
        printf("%s\t %f\n",s[i].name,s[i].marks);
    for(i = 0; i<n; i++)
        sum = sum + s[i].marks;
    avg = sum/n;
    printf("Avarage marks = %f\n",avg);
    printf("list of students scored above average marks\n");
    for(i = 0; i<n; i++){
        if(s[i].marks > avg)
        printf("%s\n",s[i].name);
    }
    printf("list of students scored below average marks\n");
    for(i = 0; i < n; i++){
        if(s[i].marks < avg)
        printf("%s\n",s[i].name);
    }
}


