#include <iostream>
using namespace std;

int main() {
    int n, x1, x2;
    cin >> n;
    int list[100];
    for(int i = 0; i < 101; i++){
        list[i] = 0;
    }
    for(int i = 0; i < n; i++){
        cin >> x1 >> x2;
        for(int j = x1-1; j<= x2-1; j++){
            list[j]++;
        }
    }
    int max = 0;
    for(int i = 0; i < 101; i++){
        if(max < list[i]) max = list[i];
    }
    cout << max;
    return 0;
}