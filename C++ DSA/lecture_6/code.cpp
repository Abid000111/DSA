#include <iostream>

using namespace std;

int dToB(int dNum) {
    int binary = 0, power = 1;

    while(dNum > 0) {
        int reminder = dNum % 2;
        dNum /= 2;
        binary += reminder * power;
        power *= 10;
    }

    return binary;
}

int bToD(int bNum) {
    int decimal = 0, power = 1;

    while(bNum > 0) {
        int reminder = bNum % 10;
        decimal += reminder * power;

        bNum /= 10;
        power *= 2;
    }

    return decimal;
}

int main() {
    cout << dToB(-10) << "\n";

    // for(int i = 1; i <= 10; i++){
    //     cout << dToB(i) << "\n";
    // }

    // cout << bToD(10110) << "\n";

    return 0;
}