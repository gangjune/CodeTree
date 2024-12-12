#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i += 2){
        cin >> arr[i];
        sort(arr, arr+i);
        cout << arr[(i)/2] << " ";
        cin >> arr[i+1];
    }
    return 0;
}