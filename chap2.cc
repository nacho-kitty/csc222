#include <iostream>
using namespace std;

int main()
{

    char n = 33;

    cout << "The Answer to the ultimate question of life, the universe, ";
    cout << "and everything is " << 42 << endl;


    n *= 2;
    cout << n << " is printed as a character." << endl;
    cout << "but look at this: " << n + 1 << "and" << ++n;
    cout << "what's this all about?" << endl;
    cout << "well, the former is evaluated as an int, and the latter a char.";
    cout << endl;
    return 0;
}
