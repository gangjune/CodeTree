#include <iostream>
using namespace std;
bool f1(int i){
    if(i == 1) return false;
    for(int j = 2; j <= 10; j++){
        if(i % j == 0) return false;
    }
    return true;
}
bool f2(int i){
    if(i == 100) return false;
    int j = (i / 10) + (i % 10);
    if(j % 2 != 0) return false;
    return true;
}
int main() {
    int a, b, cnt = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++)
        if(f1(i) && f2(i)) cnt++;
    cout << cnt;
    return 0;
}