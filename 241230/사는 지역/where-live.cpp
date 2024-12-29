#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class INFO{
    public:
        string name;
        string address;
        string location;

        INFO(string name = "", string address = "" , string location = ""){
            this->name = name;
            this->address = address;
            this->location = location;
        }
};
int main() {
    int n;
    cin >> n;
    INFO infos[n];
    string names[n];
    for(int i = 0; i<n; i++){
        cin >> infos[i].name >> infos[i].address >> infos[i].location;
        names[i] = infos[i].name;
    }
    sort(names, names+n);
    for(int i = 0; i<n; i++){
        if(names[n-1].compare(infos[i].name) != 0) continue;
        cout << "name " << infos[i].name;
        cout << "\naddr " << infos[i].address;
        cout << "\ncity " << infos[i].location;
    }
    return 0;
}