#include<bits/stdc++.h>

using namespace std;

class student{
    public:
    string st;
    int age;
    void display1(){
        cout << st << endl;
        cout << age << endl;
    }
};

class cse: public student{
    public:
    int id;
    void display2(){
        cout << id << endl;
        display1();
    }
};
int main(){
    cse s;
    s.st = "Himel";
    s.id = 2891231;
    s.age = 21;
    s.display2();
}