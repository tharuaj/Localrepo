#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student 
{
    char name[50];
    char id[10];
    char program[20];
    int age;

};
typedef struct {
    int *array;
}Data;

int main ()
{
    struct Student jung ;
    strcpy (jung.name,"Jung bahadur Tharu");
    strcpy (jung.id,"18001678");
    strcpy (jung.program,"BCSP");
    jung.age = 21;

    printf("Name: %s\n",jung.name);
    printf("ID: %s\n",jung.id);
    printf("Program: %s\n",jung.program);
    printf("Age: %d\n",jung.age);

    Data a;
    Data b;

    a.array = malloc(sizeof(int)*5);
    b.array = malloc(sizeof(int)*5);

    a.array[0] = 0;
    a.array[1] = 1;
    a.array[2] = 4;
    a.array[3] = 9;
    a.array[4] = 16;

    b.array[0] = 0;
    b.array[1] = 0;
    b.array[2] = 0;
    b.array[3] = 0;
    b.array[4] = 0;

    printf("\n");
    printf("-----------Before------------\n");
    for (int i = 0; i<5; i++){
        printf("a[%d] : %d\n",i,a.array[i]);
    }
    printf("\n");
    for (int i = 0; i<5; i++){
        printf("b[%d] : %d\n",i,b.array[i]);
    }
//the pointers in array a are now pointing the address in b
    a = b;

    printf("\n");
    printf("-----------After------------\n");
    for (int i = 0; i<5; i++){
        printf("a[%d] : %d\n",i,a.array[i]);
    }
    printf("\n");
    for (int i = 0; i<5; i++){
        printf("b[%d] : %d\n",i,b.array[i]);
    }
    return 0;

}