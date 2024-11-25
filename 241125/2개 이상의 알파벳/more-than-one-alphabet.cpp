#include <iostream>
#include <cstring>
using namespace std;
bool f(char A[], int size){
    for(int i = 1; i < size - 1; i++){
        for(int j = i; j < size; j++){
            if(A[i-1] != A[j]) return true;
        }
    }
    return false;
}
int main() {
    char A[100];
    cin >> A;
    int size = strlen(A);
    if(f(A, size)) cout << "Yes";
    else cout << "No";
    return 0;
}