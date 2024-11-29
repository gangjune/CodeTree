#include <iostream>
using namespace std;

int x=0, y=0;
void move(char dir, int r){
    switch(dir){
        case 'E':
            x = x+r;
            break;
        case 'W':
            x = x-r;
            break;
        case 'S':
            y = y-r;
            break;
        default:
            y = y+r;
            break;
    }
}
int main() {
    int n, r;
    cin >> n;
    char dir;
    for(int i = 0; i < n; i++){
        cin >> dir >> r;
        move(dir, r);
    }
    cout << x << " " << y;
    return 0;
}