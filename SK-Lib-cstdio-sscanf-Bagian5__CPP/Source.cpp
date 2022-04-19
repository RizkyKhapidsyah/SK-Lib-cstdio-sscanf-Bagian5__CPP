#pragma warning(disable:4996)

#include <iostream>
#include <clocale>
#include <cstdio>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    int i, j;
    float x, y;
    char str1[10], str2[4];
    wchar_t warr[2];
    std::setlocale(LC_ALL, "en_US.utf8");

    char input[] = "25 54.32E-1 Thompson 56789 0123 56ß水";
    int ret = std::sscanf(input, "%d%f%9s%2d%f%*d %3[0-9]%2lc", &i, &x, str1, &j, &y, str2, warr);

    std::cout << "Converted " << ret << " fields:\n"
        << "i = " << i << "\nx = " << x << '\n'
        << "str1 = " << str1 << "\nj = " << j << '\n'
        << "y = " << y << "\nstr2 = " << str2 << '\n'
        << std::hex << "warr[0] = U+" << (int)warr[0]
        << " warr[1] = U+" << (int)warr[1] << '\n';

    _getch();
    return 0;
}