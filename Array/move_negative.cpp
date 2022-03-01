#include <iostream>
using namespace std;

void moveNegative(int arr[], int n){
    int i = 0, j = n - 1;
    while (i < j){
        while (arr[i] < 0)
            i++;
        while (arr[j] >= 0)
            j--;
        if (i < j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    moveNegative(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}