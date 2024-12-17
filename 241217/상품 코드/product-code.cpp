#include <iostream>
#include <string>
using namespace std;

class Products{
    public:
        string name;
        int code;

        Products(string n = "codetree", int c = 50){
            this->name = n;
            this->code = c;
        }
};
int main() {
    Products products[2];
    cin >> products[1].name >> products[1].code;
    cout << "product " << products[0].code << " is " << products[0].name << endl;
    cout << "product " << products[1].code << " is " << products[1].name << endl;
    return 0;
}