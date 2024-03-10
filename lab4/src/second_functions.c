#include "../include/second_functions.h"



int GCF(int first_number, int second_number){
    
    first_number = abs(first_number);

    second_number = abs(second_number);

    int min_number = (first_number < second_number) ? first_number : second_number;

    for(int current_number = min_number; current_number > 0; --current_number){

        if(((first_number % current_number) + (second_number % current_number)) == 0){

            return current_number;
        }
    }
    return 1;
}

double calculating_e(int x){

    double number_e = 1.0;
    for(int i = 1;i <= x; ++i){

        number_e += 1.0/(factorial(i));
    }
    return (-number_e);
}



