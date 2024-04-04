
#include <iostream>

using namespace std;

int main() {

    int* arr = new int[5];

    for (int i = 0; i <= 5; i++) {
        std::cout << arr[i] << " ";
    }

    //delete[] arr;

    return 0;
}