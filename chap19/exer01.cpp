#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>

template<typename T>
void printArr(std::vector<T>& arr)
{
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return;
}

template<typename T>
void f(std::vector<T>& a, std::vector<T>& b)
{
    std::cout << "before - a: ";
    printArr(a);

    std::cout << "before - b: ";
    printArr(b);
    
    if (a.size() != b.size()) {
        std::perror("ERROR: the sizes of two vectors are not same!");
        return;
    }
    
    for (int i = 0; i < a.size(); i++) {
        a[i] += b[i];
    }

    std::cout << "after - a: ";
    printArr(a);
}

int main() 
{

    std::vector<int> a = {1,1,1,1,1};
    std::vector<int> b = {2,2,2,2,2};
    f(a, b);

    std::vector<std::string> aa = {"tic", "tac", "tok"};
    std::vector<std::string> bb = {"het", "hi", "hello"};
    f(aa, bb);

    return 0;
}
