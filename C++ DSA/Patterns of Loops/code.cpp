#include <iostream>

using namespace std;

int main() {

    int n = 5;
    char a = 'a';

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout << '*' << "  ";
    //     }
    //     cout << "\n";
    // }

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout << j + 1 << "  ";
    //     }
    //     cout << "\n";
    // }

    // for(int i=0; i<n; i++){
    //     char ch = 'A';
    //     for(int j=0; j<n; j++){
    //         cout << ch << "  ";
    //         ch += 1;
    //     }
    //     cout << "\n";
    // }

    // int number = 1;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout << number << "  ";
    //         number ++;
    //     }
    //     cout << "\n";
    // }
    
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         // cout << '*' << "  ";
    //         cout << i + 1 << "  ";
    //     }
    //     cout << "\n";
    // }

    // char ch = 'A';
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         // cout << '*' << "  ";
    //         cout << ch << "  ";
    //     }
    //     ch++;
    //     cout << "\n";
    // }

    // for(int i=0; i<n; i++){
    //     int num = 1;
    //     for(int j=0; j<i+1; j++){
    //         cout << num << "  ";
    //         num++;
    //     }
    //     cout << "\n";
    // }

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout << j + 1 << "  ";
    //     }
    //     cout << "\n";
    // }

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout << (i + 1) - j << "  ";
    //     }
    //     cout << "\n";
    // }

    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j>0; j--){
    //         cout << j << "  ";
    //     }
    //     cout << "\n";
    // }

    // int num = 1;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout << num << "  ";
    //         num++;
    //     }
    //     cout << "\n";
    // }

    // char ch = 'A';
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout << ch << "  ";
    //         ch++;
    //     }
    //     cout << "\n";
    // }

    // for(int i=0; i<n; i++){
    //     char ch = 'A';
    //     for(int j=0; j<i+1; j++){
    //         // cout << '{' << i << "  ";
    //         ch = ch + i;
    //         // cout << int(ch) << "  ";
    //         cout << ch << "  ";
    //         ch = ch - (i + 1);
    //     }
    //     cout << "\n";
    //     // cout << int(ch);
    //     // cout << "\n";
    // }

    // for (int i = 0; i < n; i++) {
    //     char ch = 'A' + i;  // Start with the corresponding character for each row
    //     for (int j = 0; j <= i; j++) {
    //         cout << ch-- << "  ";  // Print the character and decrement it
    //     }
    //     cout << endl;  // Move to the next line after each row
    // }

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i; j++){
    //         cout << ' ';
    //     }
    //     for(int j = n; j >= i + 1; j--){
    //         cout << i + 1;
    //     }
    //     cout << "\n";
    // }
    // cout << "end" << "\n";

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i; j++){
    //         cout << ' ';
    //     }
    //     for(int j = 0; j < n - i; j++){
    //         // cout << (i + 1) << " ";
    //         cout << (i + 1);
    //     }
    //     cout << "\n";
    // }
    // cout << "end" << "\n";

    // char ch = 'A';
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i; j++){
    //         cout << " ";
    //     }
    //     for(int j = 0; j < n - i; j++){
    //         // cout << ch << " ";
    //         cout << ch;
    //     }
    //     cout << "\n";
    //     ch = ch + 1;
    // }

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n- (i+1); j++){
    //         cout << ' ';
    //     }
    //     for(int j = 0; j < i + (1 + i); j++){
            
    //         cout << (j + 1) << "";
    //     }
    //     cout << "\n";
    // }

    // // n = 10;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < 2*(n - i - 1); j++){
    //     // for(int j = 0; j < n - i; j++){
    //         cout << " ";
    //     }
    //     for(int j = 0; j < i + 1; j++){
    //         cout << j + 1 << " ";
    //     }
    //     int num = 0;
    //     for(int j = 0; j < i; j++){
    //         cout << i - num << " ";
    //         // num = num + i;
    //         num++;
    //     }
    //     cout << "\n";
    // }

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n - i - 1; j++){
    //         cout << " ";
    //     }
    //     for(int j = 0; j < i + 1; j++){
    //         cout << j + 1 << "";
    //     }
    //     for(int j = i; j > 0; j--){
    //         cout << j;
    //     }
    //     cout << "\n";
    // }

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n - i - 1; j++){
    //         cout << " ";
    //     }

    //     for(int j = 0; j < 1; j++){
    //         cout << "*";
    //     }

    //     for(int j = 0; j < i; j++){
    //         cout << " ";
    //     }
    //     for(int j = 0; j < i - 1; j++){
    //         cout << " ";
    //     }
    //     for(int j = 0; j < 1; j++){
    //         cout << "*";
    //     }

    //     cout << "\n";
    // }













    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n - i - 1; j++){
    //         cout << " ";
    //     }
    //     cout << "*";
    //     if(i != 0){
    //         for(int j = 0; j < 2*i-1; j++){
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }

    //     cout << "\n";
    // }
    // for(int i = 0; i < n - 1; i++){
    //     for(int j = 0; j < i + 1; j++){
    //     cout << " ";
    //     }
    //     cout << "*";
    //     if(i != n - 2){
    //         for(int j = 0; j < 2*(n-i)-5; j++){
    //             cout << " ";
    //         }
    //             cout << "*";
    //     }

    //     cout << "\n";
    // }














    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i + 1; j++){
    //     cout << "*";
    //     }
    //     for(int j = 0; j < n - i - 1; j++){
    //         cout << " ";
    //     }
    //     for(int j = 0; j < n - i -1; j++){
    //         cout << " ";
    //     }
    //     for(int j = 0; j < i + 1; j++){
    //     cout << "*";
    //     }
        
    //     cout << "\n";
    // }
    // for(int i = 0; i < n - 1; i++){
    //     for(int j = 0; j < n - i - 1; j++){
    //         cout << "*";
    //     }
    //     for(int j = 0; j < i + 1; j++){
    //         cout << " ";
    //     }
    //     for(int j = 0; j < i + 1; j++){
    //         cout << " ";
    //     }
    //     for(int j = 0; j < n - i - 1; j++){
    //         cout << "*";
    //     }

    //     cout << "\n";
    // }

    return 0;
}