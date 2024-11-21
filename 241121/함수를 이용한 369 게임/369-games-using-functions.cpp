#include <iostream>
using namespace std;

int f(int a, int b){
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(i % 3 == 0) cnt++;
        else{
            int k = i;
            int l;
            for(;;){
                l = k % 10;
                if(l == 3 || l == 6 || l == 9){
                    cnt++;
                    break;
                }
                if(k / 10 == 0) break;
                k /= 10;
            }
        }
    }
    return cnt;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << f(a, b);
    return 0;
}