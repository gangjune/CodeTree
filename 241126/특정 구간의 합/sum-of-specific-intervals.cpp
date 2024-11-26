#include <iostream>
using namespace std;

int main() {
    int n, m, a1, a2;
    cin >> n >> m;
    int A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    for(int i = 0; i < m; i++){
        cin >> a1 >> a2;
        if(a1 == a2) cout << A[a1-1];
        else{
            int sum = 0;
            for(int j = a1; j <= a2; j++){
                sum += A[j-1];
            }
            cout << sum;
        }
        cout << endl;
    }
    return 0;
}