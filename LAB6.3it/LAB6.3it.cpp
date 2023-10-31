#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* a, const int size, const double Low, const double High) {
    for (int i = 0; i < size; i++) {
        double random = ((double)rand() / RAND_MAX) * (High - Low) + Low;
        a[i] = random;
    }
}

template<typename T>
void CreateU(T* a, const int size, const T Low, const T High) {
    for (int i = 0; i < size; i++) {
        T random = ((T)rand() / RAND_MAX) * (High - Low) + Low;
        a[i] = random;
    }
}

void Print(int* a, const int size) {
    for (int i = 0; i < size; i++)
        cout << a[i] << setw(10);
    cout << endl;
}

template<typename T>
void PrintU(T* a, const int size) {
    cout << fixed << setprecision(2);
    for (int i = 0; i < size; i++)
        cout << a[i] << setw(10);
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
T findMin1U(T* a, int size) {
    T min = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

int main() {
    srand((unsigned)time(NULL));
    const int n = 10;
    int a[n];
    double aU[n];
    double Low = -10.0;
    double High = 10.0;
    Create(a, n, Low, High);
    CreateU(aU, n, Low, High);

    Print(a, n);
    PrintU(aU, n);

    // <typename T> minResult = ;
    cout << "Minimal: " << findMin1(a, n) << endl;
    cout << "MinimalU: " << findMin1U(aU, n) << endl;

    return 0;
}
