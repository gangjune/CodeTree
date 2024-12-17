#include <iostream>
#include <string>
using namespace std;

class Yowons{
    public:
        string cname;
        int score;

        Yowons(string cname = "", int score = 0){
            this->cname = cname;
            this->score = score;
        }
};

int main() {
    Yowons yowons[5];
    int max = 101;
    int maxindex;
    for(int i = 0; i<5; i++){
        string cname;
        int score;
        cin >> cname >> score;
        yowons[i] = Yowons(cname, score);
        if(max > score){
            max = score;
            maxindex = i;
        }
    }
    cout << yowons[maxindex].cname << " " << yowons[maxindex].score;
    return 0;
}