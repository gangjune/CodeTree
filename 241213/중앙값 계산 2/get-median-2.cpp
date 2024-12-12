#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i += 2){
        cin >> arr[i];
        cout << arr[(i+1)/2] << " ";
        cin >> arr[i+1];
    }
    return 0;
}