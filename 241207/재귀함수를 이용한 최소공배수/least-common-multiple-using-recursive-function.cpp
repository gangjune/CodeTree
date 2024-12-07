#include <iostream>
using namespace std;
int list[10];
int LCM(int i, int m){
    if(i == -1) return m;
    int x, r;
    x = list[i]*m;
    for(;;){
        m = m % list[i];
        if (m == 0) break;
        r = m;
        m = list[i];
        list[i] = r;
    }
    return LCM(i-1, x / list[i]);
}
int main() {
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> list[i];
    }
    cout << LCM(n-1, list[n-1]);
    return 0;
}