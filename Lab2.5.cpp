#include <iostream>
#pragma pack(1)

#include "Fraction.h"

int main()
{
    Pair a, b, c;
    Fraction f;
    int result;

    cout << "\nPair a" << endl;
    cin >> a;
    cout << a;

    cout << "\nPair b" << endl;
    cin >> b;
    cout << b;

    cout << "\nPair c" << endl;
    cin >> c;
    cout << c;

    cout << "\na and b" << endl;
    result = f.ComparePairs(a, b);
    f.ComparePairsResult(result);

    cout << "\na and c" << endl;
    result = f.ComparePairs(a, c);
    f.ComparePairsResult(result);

    cout << "\nb and c" << endl;
    result = f.ComparePairs(b, c);
    f.ComparePairsResult(result);

    cout << "a++" << endl;
    cout << a++ << endl;

    cout << "a--" << endl;
    cout << a-- << endl;

    cout << "++a" << endl;
    cout << ++a << endl;

    cout << "--a" << endl;
    cout << --a << endl;

    cout << "Size of class is equal to " << sizeof(Fraction) << endl;

    return 0;
}