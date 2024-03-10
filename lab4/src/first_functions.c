#include "../include/first_functions.h"


int GCF(int first_number, int second_number){

    first_number = abs(first_number);

    second_number = abs(second_number);
    
    if(first_number < second_number){

        swap(&first_number, &second_number);
    }

    while(second_number != 0){

        first_number %= second_number;

        swap(&first_number, &second_number);
    }
   
    return first_number;
}

float calculating_e(int x){
    
    return -pow((1 + 1.0/x), x); 
}



