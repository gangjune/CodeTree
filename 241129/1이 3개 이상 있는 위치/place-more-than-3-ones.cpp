#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int map[n][n];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> map[j][i];
        }
    }
    int cnt, numof3 = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cnt = 0;
            if(map[j-1][i]==1) cnt++;
            if(map[j+1][i]==1) cnt++;
            if(map[j][i-1]==1) cnt++;
            if(map[j][i+1]==1) cnt++;
            if(cnt >= 3) numof3++;
        }
    }
    cout << numof3;
    return 0;
}