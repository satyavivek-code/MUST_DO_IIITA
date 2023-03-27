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
