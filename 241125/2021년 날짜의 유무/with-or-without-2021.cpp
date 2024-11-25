#include <iostream>
using namespace std;
bool IsDayExist(int M, int D){
    if(M > 12) return false;
    if(D > 31) return false;
    if(M == 2 && D > 28) return false;
    if(M == 4 || M == 6 || M == 9 || M == 11){
        if(D > 30) return false;
    }
    return true;
}
int main() {
    int M, D;
    cin >> M >> D;
    if(IsDayExist(M, D)) cout << "Yes";
    else cout << "No";
    return 0;
}