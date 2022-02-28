#include <iostream>
#include <algorithm>
using namespace std;

// void minMaxSort(int arr[], int n){
//     sort(arr, arr + n);
//     cout << "Minimum element: " << arr[0] << endl;
//     cout << "Maximum ele: " << arr[n - 1] << endl;
// }

void minMax(int arr[], int n){
    int min = 0, max = 0;
    if (n == 1)
        max = min = arr[0];
    if (arr[0] > arr[1]){
        max = arr[0];
        min = arr[1];
    }
    else{
        max = arr[1];
        min = arr[0];
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        else if (arr[i] < min)
            min = arr[i];
    }
    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // minMaxSort(arr, n);
    minMax(arr, n);

    return 0;
}