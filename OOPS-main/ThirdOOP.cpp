

// this is multi level inheritance 
#include <iostream>
using namespace std;

class Fruit {
  public :
         string name ; 
};
class Mango : public Fruit{
    public : 
        string typee;
};
class Alphanso : public Mango{
    public : 
            string good;
};
int main()
{   Alphanso a ;a.name= "fruit6neame ";a.typee="manggoo ";a.good=" good";
    cout<<a.name << a.typee << a.good<<endl;
    return 0;
}