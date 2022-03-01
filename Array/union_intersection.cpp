#include <iostream>
#include <set>
using namespace std;

int Union(int a[], int b[], int n, int m){
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(a[i]);
    for (int i = 0; i < m; i++)
        s.insert(b[i]);
    return s.size();
}

int Intersection(int a[], int b[], int n, int m){
    set<int> s;
    int i = 0, j = 0;
    while (i < n && j < m){
        for (i = 0; i < n; i++){
            for (j = 0; j < m; j++){
                if (a[i] == b[j])
                    s.insert(a[i]);
            }
        }
    }
    return s.size();
}

int main(){
    int arr1[] = {1, 2, 5, 6, 2, 3, 5, 7, 3};
    int arr2[] = {2, 4, 5, 6, 8, 9, 4, 6, 5, 4};

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    cout << Union(arr1, arr2, m, n);
    cout << "\n";
    cout << Intersection(arr1, arr2, m, n);

    return 0;
}