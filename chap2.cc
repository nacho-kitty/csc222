#include <iostream>
using namespace std;

int main()
{

    char n = 33;

    n *= 2;
    cout << n << " is printed as a character." << endl;
    cout << "but look at this: " << n + 1 << " and " << ++n << endl;
    cout << "what's this all about?" << endl;
    cout << "well, the former is evaluated as an int, and the latter a char.";
    cout << endl;

    cout << "char: " << sizeof(char) << endl;
    cout << "a: " << sizeof 'a' << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "42 : " << sizeof 42 << endl;
    cout << "42000968: " << sizeof 42000968 << endl;
    cout << "Hello!: " << sizeof "Hello!" << endl;

    return 0;
}
