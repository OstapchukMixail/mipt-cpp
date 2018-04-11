#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>

using namespace std;

int input (char *s) // ���� �� ����� Input.txt
{
    fstream f;
    f.open("Input.txt", ios::in);
    while (!f.eof()) { // eof = end of file
        f >> s;
    }
    f.close();
    return s;
}

int main()
{
    int n = 100;
    int k;
    cin >> k;
    char *s = new char[n];
    char *d = new char[n*k];
    d[0] = 0;
    cin.getline(s, 100);
    while (k != 0) {
        d = strcat(d, s);
        --k;
    };
    cout << d;
    delete []s;
    delete []d;
    return 0;
}

/*
int n = strlen(n);
strcpy(s1, s2); �������� s2 � s1
strncpy(s1, s2, n);
strcat (s1, s2) - ��������� s1 � s2
int ne = strcmp (s1, s2); ���������� 0, ���� ������ ����������, � ���-�� ������, ���� ���
char *c = strchr (s, c);
strstr
int n = strspn(s1, s2); ������ ��������� ������� �� s2
atoi - ��������� ������ � int
atof - � float
cin.getline(s, 100) - ���������� 100 �������� � ����������
str
*/
