#include <iostream>
#include <cstring>
using namespace std;
bool Ispalin(char A[], int size){
    for(int i = 0; i < size/2; i++){
        if(A[i] != A[size-i-1]) return false;
    }
    return true;
}
int main() {
    char A[100];
    cin >> A;
    int size = strlen(A);
    if(Ispalin(A, size)) cout << "Yes";
    else cout << "No";
    return 0;
}