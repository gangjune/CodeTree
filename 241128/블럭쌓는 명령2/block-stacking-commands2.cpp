#include <iostream>
using namespace std;

int main() {
    int n, k, a, b;
    cin >> n >> k;
    int list[n];
    for(int i = 0; i < n; i++){
        list[i] = 0;
    }
    for(int i = 0; i < k; i++){
        cin >> a >> b;
        for(int j = a; j <= b; j++){
            list[j]++;
        }
    }
    int max = 0;
    for(int i = 0; i < n; i++){
        if(max < list[i]) max = list[i];
    }
    cout << max;
    return 0;
}