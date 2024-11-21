#include <iostream>
using namespace std;

void GCD(int n, int m){
    for(;;){
        n = n % m;
        if (n == 0) break;
        m = m % n;
        if (m == 0) {
            m = n;
            break;
        }
    }
    cout << m;
}
int main() {
    int n, m;
    cin >> n >> m;
    GCD(n, m);
    return 0;
}