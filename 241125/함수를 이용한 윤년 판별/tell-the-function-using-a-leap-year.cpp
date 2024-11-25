#include <iostream>
using namespace std;

bool IsLeepYear(int y){
    if(y % 4 != 0) return false;
    if(y % 100 == 0){
        if(y % 400 != 0) return false;
    }
    return true;
}
int main() {
    int y;
    cin >> y;
    cout << boolalpha;
    cout << IsLeepYear(y);
    return 0;
}