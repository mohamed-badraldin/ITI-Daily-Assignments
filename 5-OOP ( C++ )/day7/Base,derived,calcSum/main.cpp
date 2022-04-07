#include <iostream>

using namespace std;
class Base
{
private:
    /* data */
    int A,B;
public:
    Base() { A=B=0;}
    Base(int n){A=B=n;}
    Base(int n,int m) { A=n; B= m;}
    void setA(int n){A = n;}
    void setB(int n){B = n;}
    int getA(){return A;}
    int getB(){return B;}
    int calSum(){return(A+B);}
};

class Derived:public Base
{
    int c;
public:
    Derived(){c=0;}
    Derived(int n):Base(n){c=n;}
    Derived(int x,int y,int z):Base(x,y){c=z;}
    void setC(int n){c=n;}
    int getC(){return(c);}
    int calSum(){
       return (Base::calSum() + c );
    }
};

int main()
{
    Derived obj1;
    Derived obj2(20);
    Derived obj3(4,5,6);
    obj1.setA(3);
    obj1.setB(7);
    obj1.setC(1);
    Base b1(5,10);
    cout<< obj1.calSum()<<endl;
    cout<< obj2.calSum()<<endl;
    cout<< obj3.calSum()<<endl;
    cout<< b1.calSum()<<endl;
    return 0;
}
