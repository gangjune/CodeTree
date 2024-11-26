#include <iostream>
using namespace std;
void f(int N){
    if(N==0) return;
    cout << "HelloWorld" << endl;
    f(N-1);
}
int main() {
    int N;
    cin >> N;
    f(N);
    return 0;
}