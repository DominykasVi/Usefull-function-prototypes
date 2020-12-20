#include <stdio.h>
int getPositiveNumber(char *msg) {//in conditions it is not required to get positive int, but because function name is get positive number i look for positive number;
    int number = -1;
    while(number < 0){
        printf("%s", msg);
        while ((scanf("%9d", &number) == 0) || (getchar() != '\n')) {
            scanf("%*[^\n]");
            printf("%s", msg);
        }
    }
    return number;
}

int main() {
    char msg[28] = "Please enter positive int: ";
    int number;
    number = getPositiveNumber(msg);
    printf("%d", number);
    return 0;
}