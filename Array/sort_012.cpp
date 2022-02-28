#include <iostream>
using namespace std;

void sort012(int arr[], int n){
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == 0)
            count0++;
        if (arr[i] == 1)
            count1++;
        if (arr[i] == 2)
            count2++;
    }
    int i = 0;
    while (count0 > 0){
        arr[i++] = 0;
        count0--;
    }
    while (count1 > 0){
        arr[i++] = 1;
        count1--;
    }
    while (count2 > 0){
        arr[i++] = 2;
        count2--;
    }
}

// void sort012(int arr[], int n){
//     int low = 0, mid = 0;
//     int high = n - 1;
//     while (mid <= high){
//         if (arr[mid] == 0)
//             swap(arr[low++], arr[mid++]);
//         else if (arr[mid] == 1)
//             mid++;
//         else
//             swap(arr[high--], arr[mid]);
//     }
// }

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort012(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}