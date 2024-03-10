#include "../include/support_functions.h"

int abs(int x){
    return (x > 0) ? x : -x;
}

int factorial(int n)
{   
    int rezult = 1; 
    for(int i = 1; i <= n; ++i){
        rezult *= i;
    }
    return rezult;

}

void swap(int *first_number, int *second_number)
{
    int buffer = *first_number;

    *first_number = *second_number;

    *second_number = buffer;
}