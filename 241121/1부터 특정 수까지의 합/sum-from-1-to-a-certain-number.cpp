#include <iostream>
using namespace std;

void f(int n){
    int sum = 0;
    for (int i = 1 ; i <= n; i++){
        sum += i;
    }
    cout << sum / 10;
}
int main() {
    int n;
    cin >> n;
    f(n);
    return 0;
}