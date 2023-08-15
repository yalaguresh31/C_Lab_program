//metris multipication

//Include necessary headers
#include<stdio.h>
void main(){

    int m,n,p,q,a[50][50],b[50][50];
    //Declare all variablesa
            
    int c[50][50] = {0};
    int i,j,k;
                        
    //Get Matrix 1 and matrix 2 as inputs
    printf("Enter the matrix 1 dimensions\n");  
    scanf("%d%d",&m,&n);

    printf("Enter the matrix 2 dimensions\n");
    scanf("%d%d",&p,&q);

//check the condition for matrix multiplication 

if(n == p){

//first matrix elements
    printf("Enter the matrix 1 elements\n");
    for(i=0; i<m; i++){
    for(j=0; j<n; j++){
        scanf("%d",&a[i][j]);
    }
    }

// second matrix elements
     printf("Enter the matrix 2 elements\n");
    for(i=0; i<p; i++){
    for(j=0; j<q; j++){
        scanf("%d",&b[i][j]);
    }
    }
    //perform matrix multiplication
    for(i=0; i<m; i++){
    for(j=0; j<q; j++){
    for(k=0; k<n; k++){
        c[i][j] = c[i][j] + a[i][k] * b[k][j];
    }
    }
    }

    //print input matrices and output matrix print the screen
    printf("First matrix\n");
    for(i=0; i<m; i++){
    for(j=0; j<n; j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
    }

        printf("second matrix\n");
    for(i=0; i<p; i++){
    for(j=0; j<q; j++){
        printf("%d\t",b[i][j]);
    }
    printf("\n");
    }


        printf("product matrix\n");
    for(i=0; i<m; i++){
    for(j=0; j<q; j++){
        printf("%d\t",c[i][j]);
    }
    printf("\n");
    }
}

else{
    printf("metris multipication is not possible\n");
}

}                  