#include <iostream>
#include <vector>
#include <limits>
#include <type_traits>

template<typename T, typename U>
typename std::common_type<T, U>::type f(std::vector<T>& vt, std::vector<U>& vu) 
{
    if (vt.size() != vu.size()) {
        std::cerr << "ERROR: the sizes of two vectors are not the same!" << std::endl;
        return std::numeric_limits<typename std::common_type<T, U>::type>::max();
    }

    typename std::common_type<T, U>::type sum = 0;
    for (int i = 0; i < vt.size(); i++) {
        sum += vt[i] * vu[i];
    }

    return sum;
}

int main()
{
    std::vector<int> vt = {1, 1, 1};
    std::vector<double> vu = {1.5, 1.5, 1.5};
    auto res = f(vt, vu);
    printf("the sum: %f\n", res);

    std::vector<int> vtt = {1,1,1};
    std::vector<int> vuu = {1,1,1};
    auto res2 = f(vtt, vuu);
    printf("the sum: %d\n", res2);
    return 0;
}
