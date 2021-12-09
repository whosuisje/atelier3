#include <iostream>
using namespace std;
class A {//creation de class 
    public:
    static int num;//static integer
    void CALL(){//fonction pour calculer combien du fois on appeler class call
        ++num;
    }
};
int A::num=0;//important de intialiser a exterieur de class
int main(){//tester le programme 
   A obj1;
     obj1.CALL();
    obj1.CALL();
 
    cout << "Num of 1st Object: "<< obj1.num << endl;
    return 0;
}