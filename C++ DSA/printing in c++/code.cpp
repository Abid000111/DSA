#include <iostream>

using namespace std;

int main() {
    cout << "Day 1 of C++1" << endl;
    cout << "Day 1 of C++2" << "\n";
    cout << "\nAbid\nShahrier\n" << "\nMahadi\nHasan" << "\n\n";

    int age = 25;
    float cash = 8.6;
    double bill = 100.76;
    char grade = 'A';
    bool isBest = true;
    bool isBad = false;

    cout << "single digit of binary 0/1 is calculated as 1bit ( _ ) and 8bit ( _ _ _ _ _ _ _ _ ) = 1byte" << "\n\n";
    cout << "age: binary of 25 is 11001 4bytes => " << age << "\n";
    cout << "cash: 4bytes => " << cash << "\n";
    cout << "bill: 8bytes => " << bill << "\n";
    cout << "grade: 1byte => " << grade << "\n";
    cout << "isBest: 1byte => " << isBest << "\n";
    cout << "isBad: 1byte => " << isBad << "\n\n";

    int value = grade;
    char _a = 'a';
    int a = _a;
    char _B = 'B';
    int B = _B;
    char _b = 'b';
    int b = _b;

    cout << "value: Ascii value of A 4bytes => " << value << "\n";
    cout << "a: Ascii value of a => " << a << "\n";
    cout << "B: Ascii value of B => " << B << "\n";
    cout << "b: Ascii value of b => " << b << "\n\n";

    double price = 100.77;
    int newPrice = (int)price;

    cout << "typecasting is 2 types. 1 => implicit (small -> big datatype) and 2 => explicit (big -> small datatype)" << "\n\n";
    cout << "price => " << price << "\n";
    cout << "newPrice => " << newPrice << "\n";
    
    return 0;
}
