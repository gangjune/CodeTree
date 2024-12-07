#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int n;
    cin >> n;
    int list[n];
    for(int i = 0; i<n; i++){
        cin >> list[i];
    }
    sort(list, list+n);
    for(int i = 0; i<n; i++){
        cout << list[i] << " ";
    }
    cout << endl;
    sort(list, list+n, greater<int>());
    for(int i = 0; i<n; i++){
        cout << list[i] << " ";
    }
    return 0;
}