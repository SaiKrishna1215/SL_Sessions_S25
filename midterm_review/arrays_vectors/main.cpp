#include <iostream>
#include <array>
#include <vector>

void updateArray(int arr[]);
void updateVector(std::vector<int> vec);
void updateVectorRef(std::vector<int>& vec);

int main()
{
    int numArray[10] = {45, 24, 74, 57, 89, 16, 100, 123, 524, 325};
    std::array<int, 10> numArray1= {45, 24, 74, 57, 89, 16, 100, 123, 524, 325};
    std::vector<int> numVector = {45, 24, 74, 57, 89, 16, 100, 123, 524, 325};

    // indexing
    std::cout << numArray[0] << std::endl;
    std::cout << numArray1[6] << std::endl;
    std::cout << numVector[9] << std::endl;

    std::cout << std::endl;

    // traversing
    for (int i=0; i < sizeof(numArray)/sizeof(numArray[0]); i++)
    {
        std::cout << numArray[i] << std::endl;
    }

    std::cout << std::endl;

    for (int i=0; i < numArray1.size(); i++)
    {
        std::cout << numArray1[i] << std::endl;
    }

    std::cout << std::endl;


    for (int i=0; i < numVector.size(); i++)
    {
        std::cout << numVector[i] << std::endl;
    }

    std::cout << std::endl;


    // addresses and references (experiment with different data types)
    std::cout << &numArray << std::endl;
    for (int i=0; i < sizeof(numArray)/sizeof(numArray[0]); i++)
    {
        std::cout << &numArray[i] << std::endl;
    }

    std::cout << std::endl;

    std::cout << numArray1.data() << std::endl;
    for (int i=0; i < numArray1.size(); i++)
    {
        std::cout << &numArray1[i] << std::endl;
    }

    std::cout << std::endl;

    // exception case
    std::cout << &numVector << std::endl;
    for (int i=0; i < numVector.size(); i++)
    {
        std::cout << &numVector[i] << std::endl;
    }

    std::cout << std::endl;


    // modifying array element
    
    numArray[3] = 10;
    for (int i=0; i < sizeof(numArray)/sizeof(numArray[0]); i++)
    {
        std::cout << numArray[i] << std::endl;
    }

    std::cout << std::endl;

    // build in arrays - exception case for passing to functions
    updateArray(numArray);

    std::cout << numArray[6] << std::endl;

    std::cout << std::endl;

    updateVector(numVector);

    std::cout << numVector[6] << std::endl;
    std::cout << std::endl;

    updateVectorRef(numVector);
    std::cout << numVector[6] << std::endl;
    std::cout << std::endl;


    // multidimensional arrays

    std::vector<std::vector <int>> twoDArray = {{1, 2, 3}, {4, 5, 6}};

    // range-based for loop
    for (auto vec : twoDArray)
    {
        for (auto subVec : vec)
        std::cout << subVec << std::endl;
    }
    
}


void updateArray(int arr[])
{
    arr[6] = 10;
}

void updateVector(std::vector<int> vec)
{
    vec[6] = 10;
}

void updateVectorRef(std::vector<int>& vec)
{
    vec[6] = 10;
}