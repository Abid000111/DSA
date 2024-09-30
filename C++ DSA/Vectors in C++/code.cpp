#include <iostream>
#include <vector>
using namespace std;

int main() {
    // vector<int> vec;
    // vector<int> vec = {1, 2, 3};
    // vector<int> vec(3, 0);
    // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    // cout << vec.size() << "\n";
    // for(char val : vec){
    // cout << val << "\n";
    // }


    vector<int> vec;
    cout << "size => " << vec.size() << "\n";
    vec.push_back(5);
    vec.push_back(55);
    vec.push_back(555);
    vec.push_back(5555);
    vec.push_back(55555);
    cout << "after push back size => " << vec.size() << "\n";
    for(int val : vec){
    cout << val << "\n";
    }
    vec.pop_back();
    // int pop = vec.pop_back();
    cout << "after pop back size => " << vec.size() << "\n";
    for(int val : vec){
    cout << val << "\n";
    }
    cout << "front => " << vec.front() << "\n";
    cout << "back => " << vec.back() << "\n";
    cout << "at => " << vec.at(1) << "\n";
    cout << "size => " << vec.size() << "\n";
    cout << "capacity => " << vec.capacity() << "\n";

    return 0;
}