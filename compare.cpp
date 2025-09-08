#include <iostream>
using namespace std;

int compare(int a, int b){
    if (a > b){
        cout << "a is greater than b" << endl;
    } else if (a < b){
        cout << "a is less than b" << endl;
    } else {
        cout << " a is equal to b" << endl;
    }
    
    return 0;
}


int main(){
    
    int a;
    int b;

    cin >> a;
    cin >> b;
    compare(a,b);

    return 0;
}
