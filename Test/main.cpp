#include <iostream>
#include <fstream>
#include <time.h>
#include <windows.h>

using namespace std;

int a = 5;
int * b = &a;



int main()
{
    *b = a;
    *b = 10;
    cout << a << endl;
    a += 5;
    cout << a << endl;

    a = 1;
    cout << b;
    return 0;
}
