

// this is compile time polymorphism (operator  overloading type )
// i want a+b to be treated as a-b   here

#include <iostream>
using namespace std;

// eg-1
class A
{
public:
    int val;

    void operator+(A &obj2)
    {
        cout << this->val - obj2.val << endl;
    }
};

// eg-2
//  class overload {
//  	int a[3];
//  public:
//  	overload(int i, int j, int k){
//  		a[0] = i;
//  		a[1] = j;
//  		a[2] = k;
//  	}
//  	int operator[](int i) { return a[i]; }
//  };

// eg-3
//  class Complex{
//    public :
//    int real ,complex;s

//   Complex(int real=0,int complex=0){
//       this->real = real ; this->complex= complex;
//   }
//   Complex operator+(const Complex &b){
//       Complex res;
//       res.real = this->real+b.real;
//       res.complex = this->complex + b.complex;
//       return res;
//   }
//   void add(){
//       cout<<real<<'i'<<"+"<<complex<<endl;
//   }
// };

int main()
{
    //  eg -1
    // A obj1,obj2;
    // obj1.val = 7 ; obj2.val = 4;
    // obj1 + obj2 ;

    // eg - 2
    // 	overload ob(1, 2, 3);
    // 	cout << ob[1]; // displays 2

    // eg-3
    // Complex a(2,3),b(2,3);
    // Complex sum = a+b;sum.add();

    return 0;
}