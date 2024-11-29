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
            if (j > 0 && map[i][j-1] == 1) cnt++; // 위쪽
            if (j < n - 1 && map[i][j+1] == 1) cnt++; // 아래쪽
            if (i > 0 && map[i-1][j] == 1) cnt++; // 왼쪽
            if (i < n - 1 && map[i+1][j] == 1) cnt++; // 오른쪽
            if(cnt >= 3) numof3++;
        }
    }
    cout << numof3;
    return 0;
}