#include <iostream>
using namespace std;

int x = 10;

int fun() {
    cout << x;
    return 0;
}

bool p2(int num) {
    // return (num & (num - 1) == 0);
    // return ((num & (num - 1)) == 0);
    return (num > 0) && ((num & (num - 1)) == 0);
}

int reverseNum(int num) {
    int newNum = 0;
    int x;
    // int power = 1;
    // for(int i = 0; num > 0; i++){
    //     cout << "running" << "\n";
    //     x = num % 10;
    //     num /= 10;
    //     newNum * 10;
    //     // power *= 10;
    //     newNum += x;
    // }

    while(num > 0) {
        x = num % 10;
        num /= 10;
        newNum = newNum * 10 + x;
        // power *= 10;
        // newNum += x;
    }

    return newNum;
}

int main() {
    // int a = 4, b = 8;
    // cout << (a & b) << "\n"; // 0

    // int a = 6, b = 10;
    // cout << (a & b) << "\n"; // 2

    // int a = 6, b = 10;
    // cout << (a | b) << "\n"; // 14

    // int a = 2, b = 0;
    // cout << (a ^ b) << "\n"; // 12

    // int a = 6, b = 10;
    // cout << (a ^ b) << "\n"; // 12

    // int a = 10;
    // cout << (a << 1) << "\n"; // 20

    // int a = 10;
    // cout << (a << 2) << "\n"; // 40

    // int a = 10;
    // cout << (a >> 1) << "\n"; // 5

    // int a = 10;
    // cout << (a >> 2) << "\n"; // 2

    // int a = 10;
    // cout << (a >> 3) << "\n"; // 2
    // cout << sizeof(long long int) << "\n";

    // fun();

    // int x;
    // cout << "Enter a number ==> ";
    // cin >> x;

    // if(p2(x)) {
    //     cout << "The number is power of 2" << "\n";
    // } else {
    //     cout << "The number isn't power of 2" << "\n";
    // }

    int num;
    cout << "Enter a number ==> ";
    cin >> num;
    // reverseNum(num);
    cout << "Reverse of your given number is " << reverseNum(num) << "\n";

    return 0;
}