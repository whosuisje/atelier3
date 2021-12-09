#include <iostream>
using namespace std;
class Mere{//classe mere creation 
    public:
    void display(){
        cout<<"c le classe mere "<<endl;//fonction display pour mere 
    }
};
class Fille:public Mere{//classe hirite de la classe mere 
    public:
    void display(){
        cout<<"c la classe fils";
    }
};
int main(){
   Fille fafa;
   fafa.display();
   return 0; 
}