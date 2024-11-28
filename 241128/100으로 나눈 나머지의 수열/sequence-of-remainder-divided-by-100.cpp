#include <iostream>
using namespace std;
int f(int x, int y, int n){
    if(n==1) return y;
    if(n==0) return 2;
    return f(y, (x*y)%100, n-1);
}
int main() {
    int n;
    cin >> n;
    cout << f(2, 4, n-1);
    return 0;
}