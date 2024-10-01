#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    cout << "running pairSum1()" << "\n";
    vector<int> ans;
    int n = nums.size();

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }

    return ans;
}

vector<int> pairSum2(vector<int> nums, int target) {
    cout << "running pairSum2()" << "\n";
    vector<int> ans;
    int n = nums.size();

    int i = 0 , j = n-1;

    while (i < j) {
        int pairSum = nums[i] + nums[j];
        if(pairSum < target) {
            i++;
        } else if(pairSum > target) {
            j--;
        } else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}

int majorityElem(vector<int> nums) {
    int n = nums.size();
    for(int val : nums) {
        int freq = 0;
        for(int el : nums) {
            if (el == val) {
                freq++;
            }
        }
        if(freq > n / 2) {
            return val;
        }
    }
    return -1;
}

int majorityElemOptm(vector<int> nums) {
    int n = nums.size();

    // sorting the array
    sort(nums.begin(), nums.end());
    int freq = 1, ans = nums[0];

    for(int i = 1; i < n; i++) {
        if(nums[i] == nums[i - 1]) {
            freq++;
        } else {
            freq = 1;
            ans = nums[i];
        }
    if(freq > n/2) {
        return ans;
    }
    }


    return -1;
}

int majorityElemMooreAlgo(vector<int> nums) {
    int n = nums.size();

    int freq = 0, ans = 0;

    for(int i = 0; i < n; i++) {
        if(freq == 0) {
            ans = nums[i];
        }

        if(ans == nums[i]) {
            freq++;
        } else {
            freq--;
        }
    }

    return ans;
}

int majorityElemMooreAlgoUpdated(vector<int> nums) {
    int n = nums.size();

    int freq = 0, ans = 0;

    for(int i = 0; i < n; i++) {
        if(freq == 0) {
            ans = nums[i];
        }

        if(ans == nums[i]) {
            freq++;
        } else {
            freq--;
        }
    }

    freq = 0;

    for(int val : nums) {
        if(val == ans) {
            freq++;
        }
    }

    if(freq > (n/2)) {
        return ans;
    }

    return -1;
}

int main() {

    // // Return pair in stored array with target sum.

    // vector<int> nums = {2, 11, 7, 15};
    // int target = 9;
    // int target2 = 18;

    // vector<int> ans = pairSum(nums, target);
    // cout << ans[0] << ", " << ans[1] << "\n";
    // vector<int> ans2 = pairSum2(nums, target2);
    // cout << ans2[0] << ", " << ans2[1] << "\n";







    // // Given an array "nums" of size "n", return the majority element.
    // // the majority element is the element that appears more than floor: n/2 times. You may assume that the majority element always exists in the array.

    // // Brute Force method

    vector<int> nums = {2, 2, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 2, 2, 2};
    vector<int> nums2 = {2, 2, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 2, 2, 2, 1};
    vector<int> nums3 = {1, 2, 3, 4};
    vector<int> nums4 = {1, 2, 3, 4, 5};
    // cout << "majority element is ==> " << majorityElem(nums) << "\n";

    // // Optimised Brute Force method

    // cout << "majority element is ==> " << majorityElemOptm(nums) << "\n";

    // Moore's Voting Algorithm

    cout << "majority element is (Moore's algo basic) ==> " << majorityElemMooreAlgo(nums) << "\n";
    cout << "majority element is (Moore's algo basic) ==> " << majorityElemMooreAlgo(nums2) << "\n";
    cout << "majority element is (Moore's algo basic) ==> " << majorityElemMooreAlgo(nums3) << "\n";
    cout << "majority element is (Moore's algo basic) ==> " << majorityElemMooreAlgo(nums4) << "\n";
    cout << "majority element is (Moore's algo updt) ==> " << majorityElemMooreAlgoUpdated(nums) << "\n";
    cout << "majority element is (Moore's algo updt) ==> " << majorityElemMooreAlgoUpdated(nums2) << "\n";
    cout << "majority element is (Moore's algo updt) ==> " << majorityElemMooreAlgoUpdated(nums3) << "\n";
    cout << "majority element is (Moore's algo updt) ==> " << majorityElemMooreAlgoUpdated(nums4) << "\n";



    return 0;
}