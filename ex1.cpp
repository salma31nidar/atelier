#include <iostream>

using namespace std;

class mere
{
    public:
        void display(){
            cout <<" la class mere"<<endl;
        }
};

class fille : public mere
{
    public:
        void display(){
            cout<<" la class fille"<<endl;
        }
};

int main(){
    fille f1;
    f1.display();
}