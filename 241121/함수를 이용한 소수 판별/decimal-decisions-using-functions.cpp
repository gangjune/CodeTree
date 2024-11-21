#include <iostream>
using namespace std;

bool isprime(int i){
    if(i == 1) return false;
    for(int j = 2; j < i; j++){
        if(i % j == 0) return false;
    }
    return true;
}
int main() {
    int a, b, n = 0;
    cin >> a >> b;
    if(a == b){
        if(isprime(a)){
            cout << a;
            return 0;
        }
    }
    for(int i = a; i <= b; i++){
        if (isprime(i) == true){
            n += i;
        }
    }
    cout << n;
    return 0;
}