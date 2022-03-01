#include <iostream>
#include <climits>
using namespace std;

// brute force
// int maxSubarraySum(int arr[], int n){
//     int maxSum = INT_MIN;
//     for (int i = 0; i < n; i++){
//         for (int j = i; j < n; j++){
//             int sum = 0;
//             for (int k = i; k <= j; k++)
//                 sum += arr[k];
//             maxSum = max(maxSum, sum);
//         }
//     }
//     cout << maxSum;
// }

// using Kadane's Algorithm
int maxSubarraySum(int arr[], int n){
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++){
        currSum += arr[i];
        if (currSum < 0)
            currSum = 0;
        maxSum = max(maxSum, currSum);
    }
    cout << maxSum;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    maxSubarraySum(arr, n);

    return 0;
}