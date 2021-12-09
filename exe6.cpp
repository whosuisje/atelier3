#include <iostream>
#include <string>
using namespace std;
class Personne{//creation de class mere
private:
string nom ;
string prenom;
int datedenaissance;
public:
Personne(string n,string p,int d  ):nom{n},prenom{p},datedenaissance{d}{//intialisation des donnes par constructeur

}
 virtual void afficher()//methode virtual 
 {
     cout<<"Nom: "<<nom<<endl<<"Prenom: "<<prenom<<endl<<"date de naissance: "<<datedenaissance<<endl;
 }
};
class Employe :public Personne//class Emolye herite
{
    private:
    double salaire;
    public:
    Employe(string n,string p,int d,double s):Personne(n,p,d){//intialisation des donnes par constructeur et donnes les valeur pour la classe mere 
        salaire = s;
    }
  void afficher(){//methode afficher
        Personne::afficher();//appeler pour la methode virtual  dans class
         cout<<"salaire : "<< salaire <<endl;//afficher le salaire
    }
};
class Chef :public Employe{//classchef herite de emloye
    private :
    string service ;
    public:
    Chef(string n,string p ,int d ,double s ,string ser):Employe(n,p,d,s){//intialisation des donnes par constructeur et donnes les valeur pour la classe mere 
       service=ser;


    }
  void  afficher(){//methode afficher
Employe::afficher();//appeler pour la methode virtual dans class mere
cout<<"service  : "<< service <<endl;//afficher le service
    }
};
class Directeur :public Chef{ //classe directeur herite de la classe mere 
private:
     string societe;
     public:
     Directeur(string n,string p ,int d ,double s ,string ser,string soc):Chef(n,p,d,s,ser){//intialisation des donnes par constructeur et donnes les valeur pour la classe mere 
         societe=soc;
     }
   void  afficher(){//methode afficher
         Chef::afficher();//appeler pour la methode virtual dans class mere
         cout<<"societe : "<< societe <<endl;//afficher socite
     }
};
int main(){//tester le code
    Directeur dir("ahmad","ahmad",15,10000,"gestion ","halla");
    dir.afficher();
    return 0;
}