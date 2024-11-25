#include <iostream>
using namespace std;
bool IsLeepYear(int y){
    if(y % 4 != 0) return false;
    if(y % 100 == 0){
        if(y % 400 != 0) return false;
    }
    return true;
}
bool IsDayExist(int y, int M, int D){
    if(M > 12) return false;
    if(D > 31) return false;
    if(M == 4 || M == 6 || M == 9 || M == 11){
        if(D > 30) return false;
    }
    if(IsLeepYear(y)){
        if(M == 2 && D > 29) return false;
    }
    else{
        if(M == 2 && D > 28) return false;
    }
    return true;
}
int main() {
    int y, M, D;
    cin >> y >> M >> D;
    if(!IsDayExist(y, M, D)){
        cout << "-1";
        return 0;
    }
    if(M >= 3 && M <= 5) cout << "Spring";
    else if(M >= 6 && M <= 8) cout << "Summer";
    else if(M >= 9 && M <= 11) cout << "Fall";
    else cout << "Winter";
    return 0;
}