#include <iostream>
#include <string>
using namespace std;
class Operation{//creation de class Operation 
public:
int r1,i1;
int r2,i2;
Operation(int r1,int i1,int i2, int r2){//initialisation avec constructeur
    this->r1=r1;//travailler avec this pour n'est pas creer nouveau variable et distinguer 
    this->r2=r2;
    this->i1=i1;
    this->i2=i2;
}
void egalite(int r1,int i1,int i2, int r2)//fonction egalite
{
    if(r1==r2 && i1==i2){
cout<<"egalite"<<endl;
    }
      else{
          cout<<"no egalite"<<endl;
        }  
    }
void addition(int r1,int i1,int i2, int r2)//fonction addition
{
   cout<<r1+r2<<"+"<<i1+i2<<"i"<<endl;
    }

void multiply(int r1,int i1,int i2, int r2)//fonction multiplication
{
   cout<<r1*r2 - i1* i2<<"+"<<r1*i2+i1*r2<<"i"<<endl;
    }

void sousttrac(int r1,int i1,int i2, int r2)//fonction soustraction
{
   cout<<r1-r2<<"+"<<i1-i2<<"i"<<endl;
    }

void division(int r1,int i1,int i2, int r2)//fonction division
{
   cout<<(r1*r2+i1*i2 )/ (r1^2+i2^2)<<"+"<<(i1*r2 -r1*i2 )/(r1^2+i2^2)<<"i"<<endl;
    }
};


int main(){
    int r1,i1;//creation du numero
int r2,i2;
int choix;//pour donner a utilisateur le choix de quelle operation
Operation Op(r1,i1,r2,i2);//creation de objet
//demender les valeur a utilisateur
cout<<"r1="<<endl;
cin>>r1;
cout<<"i1="<<endl;
cin>>i1;
cout<<"r2="<<endl;
cin>>r2;
cout<<"i2="<<endl;
cin>>i2;

cout<<"1-egalite"<<endl<<"2-addition"<<endl<<"3-multiplication"<<endl<<"4-soustraction"<<endl<<"5-division"<<endl;
cin>>choix;//quelle operation 
switch (choix) {
  case 1:
  Op.egalite( r1, i1, i2,  r2);
    break;
  case 2:
  Op.addition( r1, i1, i2,  r2);
    break;
  case 3:
 Op.multiply( r1, i1, i2,  r2);
    break;
  case 4:
   Op.sousttrac( r1, i1, i2,  r2);
    break;
  case 5:
  Op.division( r1, i1, i2,  r2);
    break;

}
return 0;
}