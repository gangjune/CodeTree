#include <iostream>
using namespace std;
void p(int n){
    for(int i = 0; i < n; i++) cout << "* ";
    cout << endl;
}
void printstar(int n){
    if(n == 0) return;
    p(n);
    printstar(n-1);
    p(n);
}
int main() {
    int n;
    cin >> n;
    printstar(n);
    return 0;
}