#include <iostream>
using namespace std;

int main() {
    int list[4][4];
    int sum;
    for(int i = 0; i < 4; i++){
        sum = 0;
        for(int j = 0; j< 4; j++){
            cin >> list[j][i];
            sum += list[j][i];
        }
        cout << sum << endl;
    }
    return 0;
}