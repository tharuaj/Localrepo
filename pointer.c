#include <stdio.h>
#include <stdlib.h>

int stringLen(char *str){
    int length = 0;
    while( *str != '\0'){
        length++;
        str++;
    }
    return length;
}
int stringlength(char str[]{
    int length = 0;
    while( str[length] != '\0'){
        length++;
    }
    return length;
})

int main(void){
/*  
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
*/
    char s1[10] = "Hallo";
    char s2[]   = "Hallo";
    char *s3 = "Hallo";
    for ( int i = 0; i<10;i++) printf("s1[%d]: %c\n", i,s1[i] );
    for ( int i = 0; i<10;i++) printf("s2[%d]: %c\n", i, s2[i]);

    int length = stringLen(s2);
    printf("length of s2: %d\n",length);

    for ( int i = 0; i<10;i++) printf("s3[%d]: %c\n", i, s3[i]);

    return 0;
}