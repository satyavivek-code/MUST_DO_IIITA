/*
Kadane algorithim -- interviewBit questions
*/


int Solution::maxSubArray(const vector<int> &A) {
    int max = INT_MIN;
    int end = 0;
    int n = A.size();
    
    for (int i = 0; i < n; i++){
        end += A[i];
        if (end > max){
            max = end;
        }
        if (end < 0){
            end = 0;
        }
    }

    return max;
}

/*
vs code implementataion
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int maxSubarray(int ar[], int n){
    int max = INT_MIN;
    int end = 0;

    for (int i = 0; i < n; i++){
        end += ar[i];
        if (end > max) max = end;
        if (end < 0) end = 0;
    }
    return max;
}

int main(){
    int arr[5] = {1, 2, 3, 4, -5};
    int ans = maxSubarray(arr,5);

    cout << ans; 
}
