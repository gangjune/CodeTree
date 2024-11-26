#include <iostream>
using namespace std;
void f1(int N){
    if(N==0) return;
    f1(N-1);
    cout << N << " ";
}
void f2(int N){
    if(N==0) return;
    cout << N << " ";
    f2(N-1);
}
int main() {
    int N;
    cin >> N;
    f1(N);
    cout << endl;
    f2(N);
    return 0;
}