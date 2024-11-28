#include <iostream>
using namespace std;
int f(int n){
    if(n < 10) return n;
    return f(n/10) + (n % 10);
}
int main() {
    int x, y, z;
    cin >> x >> y >> z;
    cout << f(x*y*z);
    return 0;
}