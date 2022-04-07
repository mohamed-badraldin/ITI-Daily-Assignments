#include <iostream>

using namespace std;
class Geoshape{

protected:
    float dim1,dim2;
public:
    Geoshape(){dim1=dim2=0;}
    Geoshape(float n){dim1=dim2=n;}
    Geoshape(float n1,float n2){dim1= n1 ; dim2=n2;}
    float getdim1(){return dim1;}
    float getdim2(){return dim2;}
    void setdim1(int n){dim1=n;}
    void setdim2(int n){dim2=n;}
    float CalcArea(){return 0.0;}

    virtual float calculateArea() =0;  // pure virtual function

};

class Rect:public Geoshape
{
public:
    Rect(){}
    Rect(float L, float W):Geoshape(L,W){}
    float CalcArea(){return (dim1*dim2);}

    float calculateArea(){return (dim1*dim2);} // implementation of virtual function
};

class Circle:public Geoshape
//class Circle:protected Geoshape
{
public:
    Circle() {}
    Circle(float r):Geoshape(r){}
    float CalcArea(){return 3.14*dim1*dim2;}

    setRad(int r){setdim1(r); setdim2(r);} // setter function

    float calculateArea(){return 3.14*dim1*dim2;} // implementation of virtual function
};

class Triangle:public Geoshape
{
public:
    Triangle(){}
    Triangle(float b,float h):Geoshape(b,h){}
    float CalcArea(){return (0.5*dim1*dim2);}

    float calculateArea(){return 0.5*dim1*dim2;} // implementation of virtual function
};

class Square:public Rect
//class Square:protected Rect
{
public:
    Square(){}
    Square(float L):Rect(L,L){}

    setDim(int L){setdim1(L);setdim2(L);} // setter function
    float CalcArea(){return (dim1*dim2);}

    float calculateArea(){return (dim1*dim2);}   // implementation of virtual function
};

    float sumOfArea(Geoshape *p1, Geoshape *p2 , Geoshape *p3 )
    {
        return p1->calculateArea() + p2->calculateArea() + p3->calculateArea() ;
    }

int main()
{
    /*
        Try with public inheritance (try to violate the square and circle constraints
        by calling the inherited setter methods).

    Circle c(10);   // create Circle obj dim1 = 10 , dim2 = 10
    cout<< c.CalcArea()<<endl;  // 314

    c.setdim1(10);
    c.setdim2(100); // set deferent value form dim2 = 100
    cout<< c.CalcArea()<<endl;  // 3140

    //======================================================

    Square s(5);
    cout<< s.CalcArea()<<endl; // area of square 5*5 = 25

    s.setdim1(5);
    s.setdim2(6);
    cout<< s.CalcArea()<<endl; // area of square = 5*6 = 30

    */
//==========================================================================================================
    /*
        Try with protected inheritance (not able to violate the square and circle
        constraints).

    c.setdim1(10);      // error
    c.setdim2(100);     // error
    s.setdim1(5);       // error
    s.setdim2(6);       // error

    */
//==========================================================================================================

   /*
   - Add the new special setter functions to class square and circle.
   */
    Circle c1;
    c1.setRad(10);
    cout<< c1.CalcArea() <<endl;

    Square s1;
    s1.setDim(10);
    cout<< s1.CalcArea() <<endl;

    /*
    Write the standalone function: "sum OfAreas(-:--), which takes 3
    parameters as pointers from type GeoShape.
    */

    Circle c2(10);
    Rect r2(10,10);
    Triangle t2(10,20);

    cout << sumOfArea(&c2,&r2,&t2) << endl;


    return 0;
}


