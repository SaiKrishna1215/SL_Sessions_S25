#include <iostream>

const int SIZE = 10;
int main()
{
    float* arr = new float[10];

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = i*10;
    }

    for (int i = 0; i < sizeof(arr); i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    delete[] arr;

    return 0;
}