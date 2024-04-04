
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* f1() {
    char* temp = "Tot ziens!";
    return temp;
}


int main() {
    char* temp = f1();
    printf("Received string: %s\n", temp);

    // SEG FAULT: since the string temp points resides in read-only memory.
    temp[0] = 'G';
    printf("Modified string: %s\n", temp);
    return 0;
}

