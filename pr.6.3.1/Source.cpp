#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void CreateArr(int arr[], const int size)
{
    for (size_t i = 0;i < size;i++)
    {
        arr[i] = -10 + rand() % 21;
    }
}
template<typename T>
void CreateArr(T arr[],const size_t size)
{
    for (size_t i = 0;i < size;i++)
    {
        arr[i] = (T)(-10 + rand() % 21);
    }
}
void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
    cout << endl;
}
template<typename T>
void Print(const T* a, int arr, const size_t size)
{
    for (int i = 0; i < size; i++)
        cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
    cout << endl;
}
int SumElements (int arr[], const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] % 2 != 0)
            S += i;
    return S;
}
template<typename T>
T SumElements(T arr[], const size_t size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] % 2 != 0)
            S += i;
    return S;
}
int main()
{
    srand((unsigned)time(NULL));
    const int n = 5;
    int a[n];
    CreateArr(a, n);
    Print(a, n);
    cout << "S = " << SumElements(a, n) << endl;
    return 0;
}
