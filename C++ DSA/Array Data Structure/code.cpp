#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int sumPlusProduct(int arr[], int size, int sum, int product) {
    sum = 0;
    product = 1;
    int ans = 0;

    for(int i = 0; i < size; i++) {
        sum = sum + arr[i];
        product = product * arr[i];
    }

    ans = sum + product;
    
    return ans;
}

void swapMaxMin(int arr[], int size) {
    int largest = INT_MIN;
    int largest_i = 0;

    int smallest = INT_MAX;
    int smallest_i = 0;

    for(int i = 0; i < size; i++) {
        // largest = max(arr[i], largest);
        // smallest = min(arr[i], smallest);
        // cout << arr[i] << "\n";

        if(arr[i] > largest) {
            largest = arr[i];
            largest_i = i;
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
            smallest_i = i;
        }
    }
    // cout << largest << smallest << "\n";
    cout << "largest ==> " << largest << "\n";
    cout << "smallest ==> " << smallest << "\n";

    swap(arr[largest_i], arr[smallest_i]);
}

void uniqueValue(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        int value = arr[i];
        int uniqueNumber;
        bool isUnique = true;

        for(int j = 0; j < size; j++) {
            // if(value != arr[j]) {
            //     uniqueNumber = value;
            //     cout << "unique number ==> " << uniqueNumber << "\n";
            // }

            if(i != j && value == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if(isUnique) {
            cout << "Unique value = > " << value << "\n";
        }
    }
}

void cva(int arr[], int size, int arr2[], int size2) {
    for(int i = 0; i < size; i++) {
        int value = arr[i];
        // bool common = false;
        for(int j = 0; j < size2; j++) {
            if(value == arr2[j]) {
                // common = true;
               cout << value << " ";
                break;
            }
        }

        // if(common){
        //     cout << arr[i] << " ";
        // }
    }
    cout << "\n";
}

int main() {
    // int arr1[5];

    // int arr2[2] = {1, 2};
    // arr2[0] = 10;
    // cout << sizeof(arr2) << "\n";

    // cout << arr1 << "\n";
    // cout << arr2 << "\n";
    // cout << arr2[1] << "\n";

    // for(int i = 0; i < sizeof(arr2); i++) {
    //     cout << arr2[i] << "\n";
    // }

    // // here is the explanation why the loops printing things like this in output:

    // // // // Explanation of the Problem:
    // // // // sizeof(arr2): The sizeof(arr2) expression returns the total size in bytes of the array arr2. Since arr2 is an array of 2 integers and each integer typically occupies 4 bytes (depending on your system), sizeof(arr2) will return 8 (2 integers * 4 bytes each).

    // // // // Looping Beyond Bounds: The loop iterates from 0 to 7 (since sizeof(arr2) is 8). Therefore:

    // // // // For i = 0: arr2[0] is 1.
    // // // // For i = 1: arr2[1] is 2.
    // // // // For i = 2 to 7: You are accessing uninitialized memory (since arr2 only has 2 valid elements), leading to undefined behavior. This explains the output of 0 and 71 and more zeros. The values 71 and others are garbage values present in memory.







    // int size = sizeof(arr2);
    // cout << size << "\n";

    // for(int i = 0; i < size; i++) {
    //     cout << arr2[i] << "\n";
    // }

    // for(int i = 0; i < sizeof(arr2) / sizeof(int); i++) {
    //     cout << arr2[i] << "\n";
    // }







    // for(int i = 0; i < sizeof(arr2) / sizeof(int); i++) {
    //     cout << "Enter marks => ";
    //     cin >> arr2[i];
    // }

    // for(int i = 0; i < sizeof(arr2) / sizeof(int); i++) {
    //     cout << arr2[i] << "\n";
    // }







    // int arr3[] = {70, 69, 72, 5, 4, 24, 1, 3};
    // int size = 8;

    // int smallest = INT_MAX;
    // int smallest_func = INT_MAX;

    // int largest = INT_MIN;
    // int largest_func = INT_MIN;

    // int smallest_index;
    // int largest_index;

    // for(int i = 0; i < size; i++) {
    //     if(arr3[i] < smallest) {
    //         smallest = arr3[i];
    //     }

    //     if(arr3[i] > largest) {
    //         largest = arr3[i];
    //     }
    // }

    // for(int i = 0; i < size; i++) {
    //     smallest_func = min(arr3[i], smallest_func);
    //     largest_func = max(arr3[i], largest_func);

    //     if(arr3[i] == smallest_func) {
    //         smallest_index = i;
    //     }

    //     if(arr3[i] == largest_func) {
    //         largest_index = i;
    //     }
    // }

    // cout << "smallest => " << smallest << "\n";
    // cout << "smallest_func => " << smallest_func << "\n";

    // cout << "largest => " << largest << "\n";
    // cout << "largest_func => " << largest_func << "\n";

    // cout << "smallest_index => " << smallest_index << "\n";
    // cout << "largest_index => " << largest_index << "\n";






    // int arr4[] = {70, 69, 72, 5, 4, 24, 1, 3};
    // int size = 8;
    // int target = 5;

    // cout << linearSearch(arr4, size, target) << "\n";






    // int arr1[] = {1, 2, 3, 4, 5};
    // int size1 = 5;
    // int arr2[] = {21, 22, 23, 24, 25, 26};
    // int size2 = 6;

    // reverseArray(arr1, size1);
    // reverseArray(arr2, size2);

    // cout << "arr1 ==> ";
    // for(int i = 0; i < size1; i++) {
    //     cout << arr1[i] << " ";
    // }
    // cout << "\n";

    // cout << "arr2 ==> ";
    // for(int i = 0; i < size2; i++) {
    //     cout << arr2[i] << " ";
    // }
    // cout << "\n";






    // int arr[] = {1, 2, 3, 4, 5, 6};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int sum, product;

    // // cout << sumPlusProduct(arr, size, sum, product) << "\n";

    // cout << "arr = ";
    // for(int i = 0; i < size; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << "\n";

    // swapMaxMin(arr, size);

    // cout << "arr = ";
    // for(int i = 0; i < size; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << "\n";







    // int arr[] = {1, 2, 2, 3, 4, 4, 5, 5, 6, 7, 7};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // uniqueValue(arr, size);








    int arr[] = {10, 2, 30, 4, 50, 11, 15, 7, 5, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int arr2[] = {1, 2, 3, 4, 5};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cva(arr, size, arr2, size2);

    return 0;
}