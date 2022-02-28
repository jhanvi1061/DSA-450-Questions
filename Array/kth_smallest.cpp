#include <iostream>
#include <algorithm>
using namespace std;

int kthSmallest(int arr[], int n, int k){
    sort(arr, arr + n);
    return arr[k - 1];
}

int main(){
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << kthSmallest(arr, n, k);

    return 0;
}