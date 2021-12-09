#include <iostream>

using namespace std;
class shape {//crier le classe shape
protected:
float L ,H;
public:
shape(float L, float H ){//constructeur pour intialiser
  this-> L=L;
  this-> H=H;
}
virtual float area()=0;//foncion  virtual a caude de no general regle pour calculler dhape
};
class triangle:public shape//classe herite de shape 
{
    public:
    triangle(float x,float y):shape(x,y){ }//onstructeur pour intialiser et donner les valeur de h et L de classe shape mere 
     float area(){//fonction pour calculler surface de triangle et donner valeur de area
        return (H*L)/2;
     }
};
     class rectangle:public shape//classe herite de shape 

{
    public:
   rectangle(float x,float y):shape(x,y){ }//onstructeur pour intialiser et donner les valeur de h et L de classe shape mere 
     float area(){
        return (H*L);//fonction pour calculler surface de triangle et donner valeur de area
     }

    
   

};
int main(){
shape *T[2];//creation de l'objet T avec pinteur du tableau
T[0]=new triangle(3,2);//donnet les valeur du tableau
T[1]=new rectangle(0,2);

  
   cout<<"la surface triangle :"<< T[0]-> area()<<endl;//affichage avec fonction area
  
 cout<<"la surface rectangle :"<< T[1]-> area()<<endl;
    return  0;
}