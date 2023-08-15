//Binary search

//Include necessary headers
#include<stdio.h>
void main(){

    //Declare all variables 
    int a[50];
    int key,size,low,high,mid;
    int found = 0;

//Get array vlues as inputs
printf("Enter the array size\n");
scanf("%d",&size);


printf("Enter the array Elements\n");
for(int i=0; i<size; i++){
    scanf("%d",&a[i]);
}


printf("Enter the Key Element\n");
scanf("%d",&key);


//check the condition 
low = 0;
high = size-1;

while(low<=high){
    mid = (low + high)/2;

    if(a[mid]==key){
        found = 1;
        break;
    }
    else if(a[mid]>key){
        high = mid-1;
    }
    else{
        low = mid+1;

    }
}


//check the condition print loction for key in the screen
if(found){
    printf("Position of the key element is %d\n",mid+1);
}


else{
    printf("Key not found\n");
}

}