#include <iostream>
using namespace std;
class student{
    protected:
    string s = "Himel Sarder";
    int id = 285687;
};

class person: public student{
    public:
    void display(){
        cout << s << endl;
        cout << id << endl;
    }
};

int main(){
    person ob;
    //ob.s = "Himel";
    //ob.id = 26567;
    ob.display();
}

