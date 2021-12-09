#include <iostream>

using namespace std;
class Myclass {
 public://
 Myclass();//def constructor
 ~Myclass();//def destructor
};
Myclass::Myclass(){//methodes constructeur
  cout<<"je suis le constructeur"<<endl;
}
Myclass::~Myclass(){//methodes destructeur
  cout<<"je suis le destructeur"<<endl;
}

int main(){
  Myclass M;//def objet calling Myclass
  cout<<"je suis entre les deux"<<endl;
}