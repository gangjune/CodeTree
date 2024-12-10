#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[2*n];
    for(int i = 0; i<2*n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+2*n);
    int maxsum = 0;
    int temp;
    for(int i = 0; i<n; i++){
        temp = arr[i]+arr[(2*n)-i-1];
        if(maxsum < temp) maxsum = temp;
    }
    cout << maxsum;
    return 0;
}