#include <iostream>
using namespace std;

bool isprime(int i){
    for(int j = 2; j < i; j++){
        if(i % j == 0) return false;
    }
    return true;
}
int main() {
    int a, b, n = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if (isprime(i) == true){
            n += i;
        }
    }
    cout << n;
    return 0;
}