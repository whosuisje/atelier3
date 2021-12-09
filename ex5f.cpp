#include <iostream>
#include <string>
using namespace std;
class Animal {
    protected:
    int age;
    string name;
 public:
 Animal(string name){
     this->name=name;
 }
 void set_age(int age){
     this->age = age;

 }
  void affichage(){
     cout<<"je suisun animal, name "<<name<<" et j'ai age "<<age<<endl;
 }
};
class Zebra : public Animal{
     private:
    string lieu;
    public:
    Zebra( string name,int age,string lieu):Animal(name){
        set_age(age);
        this->lieu=lieu;
    }
    void affichage(){
    Animal::affichage();
    cout<<"lieu="<<lieu<<endl;
  
    }
};

class Dolphine : public Animal{
     private:
    string lieu;
    public:
    Dolphine( string name,int age,string lieu):Animal(name){
        set_age(age);
        this->lieu=lieu;
    }
    void affichage(){
    Animal::affichage();
    cout<<"lieu="<<lieu<<endl;
  
    }
};

int main(){
    Zebra ana("ana",10,"maroc");
    ana.set_age(10);
    ana.affichage();
    Dolphine Dol("DOl",15,"france");
 Dol.set_age(10);
    Dol.affichage();
    return 0;
}