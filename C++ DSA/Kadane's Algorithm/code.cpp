#include <iostream>
#include <vector>
using namespace std;

int main() {
    // int n = 5;
    // int arr[5] = {1, 2, 3, 4, 5};

    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};







    for(int st = 0; st < n; st++) {
        for(int end = st; end < n; end++) {
            for(int i = st; i <= end; i++) {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << "\n";
    }







    for(int st = 0; st < n; st++) {
        for(int end = st; end < n; end++) {
            cout << arr[end];
        }
        cout << "\n";
    }







    int maxSum = INT_MIN;

    for(int st = 0; st < n; st++) {
        for(int end = st; end < n; end++) {
            int currSum = 0;
            for(int i = st; i <= end; i++) {
                currSum += arr[i];
                maxSum = max(currSum, maxSum);
            }
        }
    }

    cout << "max subarray sum ==> " << maxSum << "\n";







    int maxSum = INT_MIN;

    for(int st = 0; st < 3; st++) {
        int currSum = 0;
        for(int end = st; end < n; end++) {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }

    cout << "max subarray sum ==> " << maxSum << "\n";






    int currSum = 0, maxSum = INT_MIN;

    for(int val : arr) {
        currSum += val;
        maxSum = max(currSum, maxSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }

    cout << "maxSum using Kadane's algo ==> " << maxSum << "\n";


    return 0;
}