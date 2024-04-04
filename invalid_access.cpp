
#include <stdlib.h>

int *f1() {
    int *ip = (int*)malloc(sizeof(int));
    *ip = 42;

    return ip;
}

int f2() {
    int *temp = f1();
    int left = temp[0];
    int right = temp[2];
    free(temp);

    return (left + right) / 2;
}

int main() {
    int i = f2();
    return i;
}

