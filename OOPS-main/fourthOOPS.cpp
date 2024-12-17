

// this is multi level inheritance ( diamond problem) = (multiple inheritance )
#include <iostream>
using namespace std;

class A {
  public :
        A(){
            chemistry = 123;
        }
  
         int chemistry; 
};
class B  {
    public : 
    B(){
    chemistry = 321;
    }
        int chemistry;
};
class C : public A,public B{
    public : 
           
};
int main()
{   
    C obj;
    cout<<obj.A::chemistry<<endl;
    return 0;
}