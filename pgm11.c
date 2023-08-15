//Binary to Decimal conversion
#include<stdio.h>
int bintodec(int n);
void main(){
    int n,res;
    printf("Enter binary number\n");
    scanf("%d",&n);
    res = bintodec(n);
    printf("dec = %d\n",res);
}
          
int bintodec(int n){
    if(n == 0)
    return 0;
    else
    return (n % 10 + 2 * bintodec(n/10));
}


