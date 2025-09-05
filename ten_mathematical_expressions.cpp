#include <iostream>
#include <cmath>
using namespace std;

int main(){

    //1
    int a (1);
    int b (2);

    cout << "the sum of " << a << " and " << b << " is : " << a * b << endl;

    //2
    int c (3);
    int d (20);

    cout << "i can add, but i can also subtract! here's " << c << 
        " minus " << d << ": " << c - d << endl;

    //3
    cout << "i dont even need integers to do my magic: " << 7 - 3 << "\n see? that's 7 - 3, WITHOUT variables!" << endl;

    //4
    int e (9);

    cout << " 9 squared is: " << e * e << endl;

    //5
    cout << "and 2 9s is: " << e * 2 << "!" << endl;

    //6
    float f (9.0);
    float g (2.0);

    cout << "9 divided by 2 is: " << f/g << endl;

    //7

    cout << " and 9's square root is!: " << sqrt(f) << endl;
    
    //8
    cout << "so now we know what the square root of 9 is... what abotu imperfect roots?: " << sqrt(30.0) << "<-- there's the root of 30" << endl;

    //9
    cout << "of course, I can also add 30 to itself: " << 30+30 << endl;

    // 10
    int h (30);
    int i (9);

    cout << "and subtract our two stars of the show, 9 from 30!: " << h-i << endl;


    return 0;
}
