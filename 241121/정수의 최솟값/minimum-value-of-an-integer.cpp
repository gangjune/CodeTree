#include <iostream>
using namespace std;

void f(int a, int b, int c){
    if(a > b) a = b;
    if(a > c) a = c;
    cout << a;
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    f(a, b, c);
    return 0;
}