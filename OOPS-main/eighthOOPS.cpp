#include <bits/stdc++.h>
using namespace std;
        // run time polymorphism

class Animal {
    public : 
    Animal(){
        cout<<"called ANImal"<<endl;
    }
        void fun(){
            cout<<"parent"<<endl;
        }
};
// VIRTUAL KEYWORD
//The keyword virtual is used in C++ to enable runtime polymorphism. When a function in a base class is declared as virtual, the function call is resolved based on the type of the object being pointed to at runtime, rather than the type of the pointer or reference. This ensures that 
// the correct derived class version of the function is invoked if it 
// is overridden.


//It ensures the correct overridden function is called based on the actual type of the object,
// even if accessed through a base class pointer or reference


class Dog : public Animal{
  public: 
  Dog(){
      cout<<"called Dog"<<endl;
  }
    void fun(){
            cout<<"child"<<endl;
        }
};


int main()
{
    // Dog *a = new Dog();
    // a->fun();
    
    //upcasting 
    // Animal *a = new Dog();
    // a->fun(); //prints parent wihtout virtual 
                //other wise prints child with virtual
            
    //downcasting 
    // Dog *b =(Dog*) new Animal();
    // b->fun();
    

    //how to create a 2d array using heap (more memeory than stack)(safe practice)
    // int r=4;int c=4;
    // int **g = new int*[r];  
    // for(int i=0;i<r;i++){
    //     g[i] = new int[c];
    // }
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         cout<<g[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // vector<vector<int>>v(5,vector<int>(5,0));
    
}
