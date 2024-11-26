#include <iostream>
using namespace std;
int eosum(int n){
    if(n < 1) return 0;
    return eosum(n-2) + n;
}
int main() {
    int n;
    cin >> n;
    cout << eosum(n);
    return 0;
}