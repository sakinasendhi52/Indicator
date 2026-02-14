// Q2. Cubes Generator
// Develop a program to find cubes of all elements from a given 2D array using Pointer with UDF.

#include<stdio.h>

//UDF for finding cubes using pointers
void cubesGenerate(int *ptr, int row, int col){
    //Storing total number of elements
    int total=row*col;

    //Loop to generate cubes using pointer
    for(int i=0; i<total; i++){
        *(ptr+i) = (*(ptr+i)) * (*(ptr+i)) * (*(ptr+i));
    }
}

int main(){
    int row,col;

    //Input number of rows
    printf("Enter array's row : ");
    scanf("%d",&row);

    //Input number of columns
    printf("\nEnter array's column : ");
    scanf("%d",&col);

    int arr[row][col];

    //Input Array's elements
    printf("\nEnter array's elements : \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    //Calling UDF to generate cubes of array elements
    cubesGenerate(&arr[0][0], row, col);

    //Printing Cubes of array elements
    printf("\nCubes of all elements : \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}