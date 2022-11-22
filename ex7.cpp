#include <iostream>
#include <cmath>

using namespace std;

class Vecteur
{
    private:
        float x,y,z;
    public:
        Vecteur(float x, float y,float z){
            this->x=x;
            this->y=y;
            this->z=z;
        }
        Vecteur(){
            x=0;
            y=0;
            z=0;
        }
        void affichage(){
            cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
        }
        Vecteur somme(Vecteur &v){
            Vecteur somme;
            somme.x = this->x + v.x;
            somme.y = this->y + v.y;
            somme.z = this->z + v.z;

            return somme;
        }
        float produitscalaire(Vecteur &a){
            return(x*a.x + y*a.y + z*a.z);
        }
        float norme(){
            return (sqrt(x*x + y*y + z*z));
        }
        Vecteur *normaux(Vecteur *a){
            if(a->norme() > this->norme()){
                return a;
            }
            return this;
        }
};  

int main(){
    Vecteur a(1,2,9);
    Vecteur b(0,4,10);
    a.affichage();
    b.affichage();
    Vecteur somme = a.somme(b);
    cout<<"Somme de a et b est :";somme.affichage();
    cout<<"Produit scalaire de a et b est :"<<a.produitscalaire(b)<<endl;
    cout<<"Nomrme de a :"<<a.norme()<<endl;
    cout<<"Norme de b :"<<b.norme()<<endl;

    cout<<"La norme la plus grande de a et b:";a.normaux(&b)->affichage();
}