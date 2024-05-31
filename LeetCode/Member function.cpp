#include <iostream>
using namespace std;
class Rectan{
    public:
    int height;
    int weight;
    void getlen(int l);
    void getwei(int w);
    int result();
};

void Rectan::getlen(int l){
    height = l;
}
void Rectan::getwei(int w){
    weight = w;
}
int Rectan::result(){
    return height * weight;
}

int main(){
    Rectan obj;
    obj.getlen(5);
    obj.getwei(10);
    int area = obj.result();

    cout << "Area : " << area << endl;
}