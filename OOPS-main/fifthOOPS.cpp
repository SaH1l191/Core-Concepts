

// this is compile time polymorphism (functino overloading type )
// (next is operator overloading )
#include <iostream>
using namespace std;

class A {
  public :
      int sm(int a , int b){
          return a+b;
      }
      double sm(int a , double b){
          return a+b;
      }
};

int main()
{   
    A obj;
    cout<<obj.sm(12,12.3);cout<<endl;
    cout<<obj.sm(12,12);
    return 0;
}