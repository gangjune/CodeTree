#include <iostream>
#include <string>
using namespace std;

class IdLevel{
    public:
        string ID;
        int LV;

        IdLevel(string ID = "codetree", int LV = 10){
            this->ID = ID;
            this->LV = LV;
        }
};
int main() {
    IdLevel first = IdLevel();
    IdLevel second = IdLevel();
    cin >> second.ID >> second.LV;
    cout << "user " << first.ID << " lv " << first.LV << endl;
    cout << "user " << second.ID << " lv " << second.LV;
    return 0;
}