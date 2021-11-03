#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void CreateArr(int arr[], const int size,int i)
{
	if (i < size)
	{
		arr[i] = -10 + rand() % 21;
		CreateArr(arr,size,i + 1);
		return;
	}
}
template<typename T>
void CreateArr(T arr[], size_t size, size_t i)
{
	if (i < size)
	{
		arr[i] = (T)(-10 + rand() % 21);
		CreateArr(arr, size, i + 1);
		return;
	}
}
void Print(const int* const arr, const int size, int i)
{
	if (i < size)
	{
		if (i==0)
			cout << "{";
		cout << arr[i];
		if (i != size - 1)
			cout << ", ";
		else cout << "}" << endl;
		Print(arr, size, i + 1);
		return;
	}
}
template<typename T>
void Print(const T* const arr, const size_t size, size_t i)
{
	if (i < size)
	{
		if (i != 0)
			cout << "{";
		cout << arr[i];
		if (i != size - 1)
			cout << ", ";
		else cout << "}" << endl;
		Print(arr, size, i + 1);
		return;
	}
}
int SumElements(int* arr, const int size,int i,int S)
{
	if (arr[i] % 2 != 0)
		S += i;
	if (i < size)
		return SumElements(arr, size, i + 1, S);
	else
		return S;
}
template<typename T>
T SumElements( T* arr, size_t size, size_t i, size_t S)
{
	if (arr[i] % 2 != 0)
		S += i;
	if (i < size)
		return SumElements(arr, size, i + 1, S);
	else
		return S;
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 5;
	int a[n];
	CreateArr(a, n,0);
	Print(a, n,0);
	cout << "S = " << SumElements(a, n,0,0) << endl;
	return 0;
}