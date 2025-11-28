#include <iostream>
#include <vector>
using namespace std;

bool twoSum(vector<int> arr, int target) {
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                return true;   
            }
        }
    }

    return false; 
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    if(twoSum(arr, target)) cout << "Pair exists!";
    else cout << "Pair does not exist";

    return 0;
}
