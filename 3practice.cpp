#include <iostream>
using namespace std;

void whoops(int x){
    6 + x;
}

int main() {
    int x;
    cin >> x;
    cout << whoops(x) + 2 << endl;
    return 0;
}
