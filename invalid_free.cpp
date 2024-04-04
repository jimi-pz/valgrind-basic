
#include <stdlib.h>

int *f1() {
    int *ip = (int*)malloc(sizeof(int));
    *ip = 42;

    return ip;
}

int f2() {
    int *temp = f1();
    
    void *other = (void*)temp;

    int result = *temp;
    int *result2 = &result;

    free(temp);
    free(other);
    free(result2);

    return result;
}

int main() {
    int i = f2();
    return i;
}

