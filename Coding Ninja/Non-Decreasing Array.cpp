#include <bits/stdc++.h> 
bool isPossible(int *arr, int n)
{
    bool changed = false;

    for (int i=0; i<n-1; i++) {
        if (arr[i] <= arr[i+1]) {
            continue;
        }
        if (changed) {
            return false;
        }

        if ((i==0) or (arr[i+1] >= arr[i-1])) {
            arr[i] = arr[i+1];
        }
        else {
            arr[i+1] = arr[i];
        }
        changed = true;
    }
    return true;
}
