#include <iostream>
#include <string>
using namespace std;

class Meeting{
    public:
        string scode;
        char location;
        int time;

        Meeting(string scode, char location, int time){
            this->scode = scode;
            this->location = location;
            this->time = time;
        }
};
int main() {
    string scode;
    char loc;
    int time;
    cin >> scode >> loc >> time;
    Meeting meeting1 = Meeting(scode, loc, time);
    cout << "secret code : " << meeting1.scode << endl;
    cout << "meeting point : " << meeting1.location << endl;
    cout << "time : " << meeting1.time;
    return 0;
}