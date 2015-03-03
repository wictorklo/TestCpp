#include <iostream>
#include <fstream>
#include <time.h>
#include <windows.h>

int a = 5;
int * b = &a;



int main()
{
    *b = a;
    *b = 10;
    std::cout << a << std::endl;
    a += 5;
    std::cout << a << std::endl;

    a = 1;
    printf("test\n");
    std::cout << b;
    return 0;
}
