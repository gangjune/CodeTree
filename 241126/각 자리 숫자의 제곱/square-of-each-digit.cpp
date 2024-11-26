#include <iostream>
using namespace std;
int psum(int n){
    if(n < 10) return n*n;
    return psum(n/10) + (n%10)*(n%10);
}
int main() {
    int n;
    cin >> n;
    cout << psum(n);
    return 0;
}