#include <iostream>
using namespace std;
//creer une classee mere "Personne"
class Personne {
    string nom ;
    string prenom;
    int date;
public:
    Personne(string name,string pre,int age){
        nom=name;
        prenom=pre;
        date=age;
    }
    virtual void Afficher(){
    cout<<" le nom est " <<nom<<". le prenom est : "<<prenom<<". age est : "<<date<<"\n";
    }
};
//creer une classe fille "Employe" qui herite de la classe mere "Personne"
class Employe : public Personne{

public:
    int salaire;
    Employe(string name,string pre,int age,int salr)
    :Personne(name ,pre ,age ){
        salaire = salr;
    }
    void Afficher(){
    cout<<"votre salarie est : "<<salaire<<"\n";
    }
};
//creer une classe fille "Chef" qui herite de la classe mere "Employe"
class Chef : public Employe{
public:
    string service;
    Chef(string name,string pre,int age,int sal,string ser)
        :Employe(name,pre,age,sal){
        service=ser;
    }
    void Afficher(){
        cout<<" sa service est : "<<service<<"\n";
    }
};
//creer une classe fille "Directeur" qui herite de la classe mere "Chef"
class Directeur : public Chef{
public:
    string societe;
    Directeur(string name,string pre,int age,int sal,string ser,string soc):Chef(name,pre,age,sal,ser){
    societe=soc;
    }
    void Afficher(){
        cout<<" sa societe est "<<societe ;
    }
};
int main()
{
    Personne P = Personne("nidar","salma",25);
    P.Afficher();
    Employe E = Employe("nidar","salma",25,5000);
    E.Afficher();
    Chef  C = Chef("nidar","salma",25,5000,"checking emails");
    C.Afficher();
    Directeur D=Directeur("nidar","salma",25,5000,"checking emails","FSTT");
    D.Afficher();
}