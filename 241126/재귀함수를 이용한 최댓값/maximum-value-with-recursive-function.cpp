#include <iostream>
using namespace std;
int list[100];
int m;
void f(int n){
    if(n < 0) return;
    if(m < list[n]) m = list[n];
    f(n-1);
}
int main() {
    m = 0;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> list[i];
    }
    f(n-1);
    cout << m;
    return 0;
}