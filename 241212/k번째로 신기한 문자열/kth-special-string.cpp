#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    string T;
    cin >> n >> k;
    cin >> T;
    string arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int i = 0; i < n; i++){
        if( arr[i].find(T) == 0){
            k--;
            if(k == 0){
                cout << arr[i];
                break;
            }
        }
    }
    return 0;
}