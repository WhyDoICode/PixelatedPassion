/*

Given an array of integers, write a program to find the longest increasing subsequence (LIS) in the array.

*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the LIS of an array
vector<int> findLIS(vector<int> nums) {
    int n = nums.size();

    // Initialize the lengths and previous indices arrays
    vector<int> lengths(n, 1);
    vector<int> prev(n, -1);

    // Find the LIS ending at each element of the array
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[j] < nums[i] && lengths[j] + 1 > lengths[i]) {
                lengths[i] = lengths[j] + 1;
                prev[i] = j;
            }
        }
    }

    // Find the index of the last element of the LIS
    int maxLengthIndex = 0;
    for (int i = 0; i < n; i++) {
        if (lengths[i] > lengths[maxLengthIndex]) {
            maxLengthIndex = i;
        }
    }

    // Construct the LIS using the previous indices array
    vector<int> lis;
    while (maxLengthIndex != -1) {
        lis.push_back(nums[maxLengthIndex]);
        maxLengthIndex = prev[maxLengthIndex];
    }
    reverse(lis.begin(), lis.end());

    return lis;
}

int main() {
    vector<int> nums = {3, 1, 5, 2, 6, 4, 9};

    vector<int> lis = findLIS(nums);

    cout << "Longest increasing subsequence: ";
    for (int i = 0; i < lis.size(); i++) {
        cout << lis[i] << " ";
    }
    cout << endl;

    return 0;
}