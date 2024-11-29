#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int man[n];
    for(int i = 0; i<n; i++){
        cin >> man[i];
    }
    int min;
    for(int i = 0; i<n; i++){   //i번째 집으로 모이는 경우들
        int sum=0;
        for(int j = 0; j<n; j++){   //j번째 집에서 오는 경우
            sum += abs(i-j)*man[j];    //거리 * 사람수
        }
        if (i == 0 || min > sum) min = sum; //min 초기값 정해주면서 비교
    }
    cout << min;
    return 0;
}