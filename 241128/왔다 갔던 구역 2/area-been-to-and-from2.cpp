#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    int list[2000];
    for(int i = 0; i < 2000; i++){
        list[i] = 0;
    }
    char dir;
    int loc = 1000;
    for(int i = 0; i < n; i++){
        x = 0;
        cin >> x >> dir;
        if(dir == 'L'){
            for(int j = loc-1; j >= loc-x; j--){
                list[j]++;
            }
            loc -= x;
        }
        else if(dir == 'R'){
            for(int j = loc+1; j <= loc+x; j++){
                list[j]++;
            }
            loc += x;
        }
        else {
            cout << "error";
            return 0;
        }
    }
    int cnt=0;
    for(int i = 0; i < 2000; i++){
        if(list[i] > 1) {
            cout << i-1000 << endl;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}