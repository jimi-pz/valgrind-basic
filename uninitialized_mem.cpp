
#include <stdlib.h>

int *f1() {
    int *ip = (int*)malloc(sizeof(int));
    return ip;
}

int f2() {
    int *temp = f1();
    int other = 3;

    if (*temp < 5) {
        other = *temp;
    }

    free(temp);
    return other;
}

int main() {
    int i = f2();
    return i;
}

