#include <iostream>

template <typename T1, typename T2>
auto Sum(T1 a, T2 b)
{
    return a + b;
}

template <typename T>
struct Array
{
    T* array;
    int size;
};

class User
{

};

template <typename T>
class Vector
{
    T* array;
};

template <typename T1, typename T2>
struct Pair
{
    T1 key;
    T2 value;
};

template <typename T1, typename T2>
class Dictionary
{
    Pair<T1, T2>* array;
};

int main()
{
    /*double x = 10.5, y = 20.77;

    std::cout << Sum<int, double>(10, 20.5);

    Array<int> arrInt;
    Array<float> arrFloat;
    Array<User> arrUser;*/

    Vector<int> v;
    Dictionary<std::string, User> d1;
    Dictionary<int, double> d;
}
