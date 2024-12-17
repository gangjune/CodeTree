#include <iostream>
#include <string>
using namespace std;

class Bombs{
    public:
        string code;
        char color;
        int second;

        Bombs(string code, char c, int s){
            this->code = code;
            this->color = c;
            this->second = s;
        }
};

int main() {
    string c;
    char col;
    int sec;
    cin >> c >> col >> sec;
    Bombs bomb(c, col, sec);
    cout << "code : " << bomb.code << endl;
    cout << "color : " << bomb.color << endl;
    cout << "second : " << bomb.second << endl;
    return 0;
}