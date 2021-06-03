#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Penalty {
public:
    int id;
    int score;
    int mebleq;
    string info;

    Penalty() = default;
    Penalty(const int id, const int score, const int mebleq, const string info) {
        SetId(id);
        SetScore(score);
        SetMebleq(mebleq);
        SetInfo(info);
    }
    
    void SetId(const int id) {
        this->id = id;
    }
    void SetScore(const int score) {
        this->score = score;
    }
    void SetMebleq(const int mebleq) {
        this->mebleq = mebleq;
    }
    void SetInfo(const string info) {
        this->info = info;
    }

    int GetId() {
        return id;
    }
    int GetScore() {
        return score;
    }
    int GetMebleq() {
        return mebleq;
    }
    string GetInfo() {
        return info;
    }

    void AllInfo() {
        cout << "Id: " << GetId() << endl;
        cout << "Score: " << GetScore() << endl;
        cout << "Mebleq: " << GetMebleq() << endl;
        cout << "Info: " << GetInfo() << endl;
    }
    
};

int main() {
    map<string, vector<Penalty>> ypx;

    //Cerimelerden basim cixmir deye, cermelerin ballarini ve qiymetlerini elaqesiz yazdim!
    Penalty p1(1, 4, 10, "Svitaforda kecmek");
    Penalty p2(2, 8, 20, "Sekide surmek");
    Penalty p3(3, 12, 30, "Duz yolda ters getmek");
    Penalty p4(4, 16, 40, "Icazesiz yerde saxlamaq");

    vector<Penalty> vp;
    vp.push_back(p1);
    vp.push_back(p2);
    vp.push_back(p3);
    vp.push_back(p4);

    ypx.insert({"10 AA 123" , vp});

    return 0;

}
