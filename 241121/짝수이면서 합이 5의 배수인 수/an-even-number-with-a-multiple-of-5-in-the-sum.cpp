#include <iostream>
using namespace std;

void f(int n){
    if(n % 2 == 0){
        int x = (n / 10) + (n % 10);
        if(x % 5 == 0) cout << "Yes";
        else cout << "No";
    }
    else cout << "No";
}
int main() {
    int n;
    cin >> n;
    f(n);
    return 0;
}