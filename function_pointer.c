#include <stdio.h>
#include <stdbool.h>
void function(int x){
    printf("%d\n", x);
}

int add(int x, int y){
    return x + y;
}
int subtract(int x, int y){
    return x - y;
}
int multiply(int x, int y){
    return x * y;
}
int divide(int x, int y){
    return x / y;
}

//a function that is a pointer to another function
int (*select_operation())(int, int){
    int choice;
    printf("Enter your choice:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Choice: ");
    scanf("%d", &choice);
    if (choice == 1) return add;
    else if (choice == 2) return subtract;
    else if (choice == 3) return multiply;
    else if (choice == 4) return divide;
    else return NULL;
    
}
bool freeze_C(int temperature){
    if (temperature <= 0) return true;
    else return false;
}
bool freeze_F(int temperature){
    if (temperature <= 32) return true;
    else return false;
}

//callback function
void is_freezing(bool (*freeze_check)(int)){
    int temp;
    printf("Enter temperature: ");
    scanf("%d", &temp);

    if (freeze_check(temp))
        printf("It's freezing!\n");
    else
        printf("It's not freezing!\n");
}

int main()
{
//return type   pointer name    argument type = function name
    void (*function_pointer)(int) = function;
    function_pointer(5);

//creating an array of pointer pointing multiple functions
    int (*arr[])(int,int) = {add, subtract, multiply, divide};
    int sum = (arr[0]) (5,7);
    printf("sum: %d\n", sum);

//declaring a variable "operation" that returns a pointer to a function 
//that takes two int arguments and returns an int 
//the return value of "select_operation" is assigned to it
    int(*operation) (int, int) = select_operation();
    printf("The answer is: %d\n", operation(40,5));
    printf("\n");

    printf("Let's check if it's freezing ? \n");
    printf("Celsius Temperature......\n");
    is_freezing(freeze_C);
    is_freezing(freeze_C);
    printf("\n");
    printf("Fahrenheit Temperature......\n");
    is_freezing(freeze_F);
    is_freezing(freeze_F);

    return 0;

}