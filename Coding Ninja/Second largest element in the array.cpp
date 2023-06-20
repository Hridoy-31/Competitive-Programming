/*
Time Complexity: O(n) --> single for loop running upto n (the size of the array).
Space Complexity: O(1) --> No extra space required.
*/


#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    long long int first = INT_MIN, second = INT_MIN;
    for (int i=0; i<n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second and arr[i] != first) {
            second = arr[i];
        }
    }
    if (second == INT_MIN) {
        return -1;
    }
    else {
        return second;
    }
}
