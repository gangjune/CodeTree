#include <iostream>
using namespace std;
int f(int A[], int m){
    int r = 0;
    while(m != 1){
        r += A[m-1];
        if(m % 2 == 0) m /= 2;
        else m -= 1;
    }
    r += A[m-1];
    return r;
}
int main() {
    int n, m;
    cin >> n >> m;
    int A[n];
    for(int i = 0; i<n; i++){
        cin >> A[i];
    }
    cout << f(A, m);
    return 0;
}