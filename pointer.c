#include <stdio.h>
#include <stdlib.h>

int main(void){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int *x = malloc(sizeof(int)*size);
    for(int i=0;i<size;i++) x[i] =2*i;
    for(int i=0;i<size;i++) printf("x[%d]: %d \n",i,x[i]);
    printf("\n");

    x = realloc(x,sizeof(int)*(size+4));
    for(int i=size;i<size+4;i++) x[i] = 2*i;
    for(int i=0;i<size+4;i++) printf("x[%d]: %d\n",i,x[i]);
    printf("\n");
    free(x);

    return 0;
}