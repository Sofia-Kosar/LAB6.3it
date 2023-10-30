#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(5) << a[i];
    cout << endl;
}
    int findMin1(int* a, int size) {
        int min = a[0];
        for (int i = 1; i < size; i++) {
            if (a[i] < min) {
                min = a[i];
            }
        }
        return min;
    }
    template <typename T>
    T findMin2(T* a, T size) {
        T min = a[0];
        for (T i = 1; i < size; i++) {
            if (a[i] < min) {
                min = a[i];
            }
        }
        return min;
    }
    int main()
    {
        srand((unsigned)time(NULL));
        const int n = 21;
        int a[n];
        int Low = 15;
        int High = 85;
        Create(a, n, Low, High);
        
        Print(a, n);
        findMin1( a, n);
        findMin2(a, n);
        cout << "findMin1" << setw(5) << findMin1(a, n) << endl;
        cout << "findMin2" << setw(5) << findMin2(a, n) << endl;


       

        return 0;
    }
