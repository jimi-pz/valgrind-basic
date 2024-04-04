
#include <stdlib.h>

void leak_mem();

int main() {

    leak_mem();
    return 0;
}

void leak_mem() {
    int* numbers = (int*)malloc(sizeof(int)*4);

    for (int i=0; i < 4; i++) {
        numbers[i] = i*i;
    }
}