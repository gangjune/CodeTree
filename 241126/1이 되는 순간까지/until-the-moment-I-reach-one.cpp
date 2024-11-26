#include <iostream>
using namespace std;
int cnt = 0;
void f(int n){
    if(n==1) return;
    cnt++;
    if(n % 2 == 0) return f(n/2);
    else return f(n/3);
}
int main() {
    int n;
    cin >> n;
    f(n);
    cout << cnt;
    return 0;
}