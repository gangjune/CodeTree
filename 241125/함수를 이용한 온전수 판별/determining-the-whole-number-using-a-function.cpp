#include <iostream>
using namespace std;
bool IsOnJeon(int i){
    if(i % 2 == 0) return false;
    if(i % 10 == 5) return false;
    if(i % 3 == 0 && i % 9 != 0) return false;
    return true;
}
int main() {
    int a, b, cnt=0;
    cin >> a >> b;
    for(int i = a; i <= b; i++)
        if(IsOnJeon(i)) cnt++;

    cout << cnt;
    return 0;
}