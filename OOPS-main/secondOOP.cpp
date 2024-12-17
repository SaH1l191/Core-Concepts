/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Animal {
  public :
  int w;
  void fun(){
      cout<<"FUN"<<endl;
  }
};
class Dog : private Animal{
    //inherited classfrom base/super class/parent class
    public: 
    void print(){
        cout<<w<<endl;
    }
};

int main()
{
    Dog d; d.print();
    // cout<<d.w<<endl;
    return 0;
}