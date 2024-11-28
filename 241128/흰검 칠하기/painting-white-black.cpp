#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    int size = n*200;
    int list[size];
    int color[size];
    for(int i = 0; i < size; i++){
        list[i] = 0;
        color[i] = -1;  //no color
    }
    char dir;
    int loc = size/2;
    for(int i = 0; i < n; i++){
        x = 0;
        cin >> x >> dir;
        if(dir == 'L'){
            for(int j = loc; j >= loc-x+1; j--){
                list[j]++;
                color[j] = 0;   // white
            }
            loc -= x-1;
        }
        else if(dir == 'R'){
            for(int j = loc; j <= loc+x-1; j++){
                list[j] += 1000;
                color[j] = 1;   // black
            }
            loc += x-1;
        }
        else {
            cout << "error";
            return 0;
        }
    }
    int cnt[3] = {0, 0, 0};
    for(int i = 0; i < size; i++){
        if(list[i]%1000 > 1 && list[i]/1000 > 1){
            cnt[2]++;   // grey
            continue;
        }
        if(color[i] == 0) cnt[0]++;
        else if(color[i]==1) cnt[1]++;
    }
    cout << cnt[0] << " " << cnt[1] << " " << cnt[2];

    return 0;
}