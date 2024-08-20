#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[30];
    int age;
    int salary;
} Employee;

void print_employee(Employee details){
    printf("Name: %s\n", details.name);
    printf("Age: %d\n", details.age);
    printf("Salary: %d\n", details.salary);
    printf("\n");

}

typedef struct {
    int x;
    int y;
}Tuple;
void print_tuples(Tuple tuples[])
{
    for (int i = 0; i<7; i++)
    {
        printf("Squared (%d, %d)\n", tuples[i].x,tuples[i].y);
    }
    
    
}

int main ()
{
    //different methods to assign value to struct members
    //1.    Employee e1 = {"Shiv", 25, 50000};

    //2.    strcpy(shiv.name,"Shiv Kumar Dangoriya");
    //      shiv.age = 25;
    //      shiv.salary = 50000;
    
    //in this method we can change the order 
    Employee e1 = {.name = "Shiv", .age = 25, .salary = 50000};
    Employee e2 = {"ajay", 22, 37500};    
    
    print_employee(e1);
    print_employee(e2);

    //this is a memory copy
    //contents of memory e1 is replaced my the contents of e2
    e1 = e2;
    print_employee(e1);

    Tuple square_tuples[7];
    for (int i = 1; i<=7; i++)
    {
        square_tuples[i-1].x = i;
        square_tuples[i-1].y = i*i;
    }
    print_tuples(square_tuples);
    

    return 0;
}