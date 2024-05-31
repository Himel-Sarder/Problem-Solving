#include<bits/stdc++.h>

using namespace std;

class abc{
    public:
    static int a;
    int b;
    void func(){
        cout << ++a << " " << ++b << endl;
    }
    abc(){
        b = 0;
    }
};
int abc::a;

int main(){
    abc ob, obj;
    ob.func();
    ob.func();
    obj.func();
    obj.func();

    return 0;
}