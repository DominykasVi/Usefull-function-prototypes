#include <stdio.h>
int getFactorial(int number){
    if(number < 0 || number > 16){//if number is more than 16 it wont fit into int
        return 0;
    }
    if (number>=1){
        return number*getFactorial(number-1);
    }
    else {
        return 1;
    }
}

int getFactorialNoRecursion(int number){
    if(number < 0 || number > 16){//if number is more than 16 it wont fit into int
        return 0;
    }
    int factorial = 1;
    while(number > 0){
        factorial = factorial * number;
        --number;
    }
    return factorial;
}

int main() {
    int number;
    number = getFactorial(17);
    printf("%d\n", number);
    number = getFactorialNoRecursion(6);
    printf("%d", number);
    return 0;
}