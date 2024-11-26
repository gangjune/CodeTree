#include <iostream>
using namespace std;
void pstar(int n){
    if(n==0) return;
    pstar(n-1);
    for(int i = 0; i<n; i++) cout << "*";
    cout << endl;
}
int main() {
    int n;
    cin >> n;
    pstar(n);
    return 0;
}