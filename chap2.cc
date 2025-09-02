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
    return 0;
}
