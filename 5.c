#include <stdio.h>
#include <stdlib.h>

long getFileSize(char *fileName){
    FILE *file_pointer;
    long length;
    if((file_pointer = fopen(fileName, "rb")) == NULL){
        printf("Cannot open file");
        return -1;
    } else {
        fseek(file_pointer, 0, SEEK_END);
        length = ftell(file_pointer);
        if(length < 0){
            return -1;
        } else{
            return length;
        }
    }
}

int main() {
    long size;
    size = getFileSize("text.txt");
    printf("%ld", size);
    return 0;
}