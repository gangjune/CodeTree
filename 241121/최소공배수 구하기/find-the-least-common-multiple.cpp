#include <iostream>
using namespace std;

void LCM(int n, int m){
    int x, r;
    x = n*m;
    for(;;){
        m = m % n;
        if (m == 0) break;
        r = m;
        m = n;
        n = r;
    }
    cout << x / n;
}
int main() {
    int n, m;
    cin >> n >> m;
    LCM(n, m);
    return 0;
}