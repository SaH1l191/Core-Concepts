/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Animal {
    public :
    
    
    int  x;
     void fun(){cout<<"fun"<<endl;}
     
    Animal(){
        cout<<"default constructer called"<<endl;
    }
    ~Animal(){
        cout<<"default constructer called"<<endl;
    }
    Animal(int x) {
    this->x = x;
    cout << "parametrized constructor called" << endl;
}

    
    Animal(const Animal &obj) {
    this->x = obj.x;
    cout << "Inside copy constructor" << endl;
}
    
     void setW(int t){ w=t;}
     int getW(){return w;}
     
     void setWusingThis(int w){
         this->w = w ; //this is a pointer to current object
     }
     
     private : 
     int w ;
};

int main()
{ 
    Animal a;
    a.x = 3;
    cout<<a.x<<endl;
    a.fun();
    a.setW(30); 
    cout<<a.getW()<<endl;
    
    Animal *aa = new Animal;
    aa->x = 2;
    aa->fun();
    Animal * coopy ( aa);
    
    return 0;
}