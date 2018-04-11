#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <fstream>

#define long 11

using namespace std;

void rand_array(int *a, int n) // ���������� ������� ����� n ���������� ������� �� 1 �� long
{
    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        a[i] = rand() % (long + 1);
    };
}

void print_array(int *a, int n) // ����� ������� ����� n �� �����
{
    for (int i = 0; i < n; ++i) {
            cout << a[i] << ' ';
    };
    cout << endl << endl;
}

int *copy_array(int *old, int old_n, int new_n) // ����������� ������� ����� old_n � ������ ����� new_n
{
    int *b = new int[new_n];
    for (int i = 0; i < old_n; ++i){
        b[i] = old[i];
    };
    return b;
}

void max_sort_array(int *a, int n) // ���������, ���������� �� ������������ max ����� �� �������.
{
    for(int i = 0, j = 0; j < n - 1; ++i){ // j - ���-�� �������� �� �������
        if ((a[i] > a[i + 1]) && (i != n - 1)) {
            int k = a[i];
            a[i] = a[i + 1];
            a[i + 1] = k;
        }
        else if (i == n - 1) {
            i = -1;
            ++j;
        }
        else continue;
    };
}

int main()
{
    int n;
    cin >> n;
    cout << endl;
    int *a = new int [n];
    rand_array(a, n);
    int *c = copy_array(a, n, n);
    cout << "Array0:" << endl;
    print_array(a, n);
    max_sort_array(c, n);
    cout << "Max sort:" << endl;
    print_array(c, n);
    delete []a;
    delete []c;
}
