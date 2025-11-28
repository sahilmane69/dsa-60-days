#include <iostream>
using namespace std;

int main() {
    int num, rev = 0;
    cin >> num;

    while(num > 0) {
        int last_digit = num % 10;      
        rev = rev * 10 + last_digit;    
        num = num / 10;                 
    }

    cout << rev;
    return 0;
}
