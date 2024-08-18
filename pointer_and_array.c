#include <stdio.h>
#include <stdlib.h>

int main(void){
    int matrix [3][5]= 
    {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    // this points to memory address of an element
    printf("matrix[1]: %zu\n",matrix[1]);
    printf("matrix[1]+1: %zu\n",matrix[1]+1);
    printf("*(matrix[1]+1): %zu\n",*(matrix[1]+1));
    
    printf("\n");
    // this points to memory address of whole row 
    printf("&matrix[1]: %zu\n",&matrix[1]);
    printf("&matrix[1]+1: %zu\n",&matrix[1]+1);

    //this does not work because &matrix is a pointer
    //for the whole row address
    printf("*(&matrix[1]+1): %zu\n",*(&matrix[1]+1));

    printf("*(*(matrix[1]+1)): %zu\n",*(*(&matrix[1]+1)));
    return 0;
}