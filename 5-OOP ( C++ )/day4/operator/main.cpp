#include <iostream>

using namespace std;

template <class T>
class Complex
{
T real,img;
public:
Complex(){real=img=0;}
Complex(int a){real=img=a;}
Complex(int r,int i){real= r; img =i;}

void print();
void setreal(int n){real =n;}
void setimg(int n){img =n;}
T getreal(){return(real);}
T getimg(){return(img);}


Complex operator +(const Complex) const; //+ operator
Complex operator -(const Complex) const; //- operator


Complex operator +(T );                // obj + f
friend Complex operator +(T,Complex);  // f + obj

Complex operator++(); //prefix
Complex operator++(int); //postfix

Complex operator--(); //prefix
Complex operator--(int); //postfix

int operator==(Complex );  //comp

Complex operator+=(Complex);

Complex operator=(Complex );


};



int main()
{
/*
*/
Complex<int> c1(5,10);
Complex<int> c2(10,20);
Complex<int> res;

res = c1 + c2;
res.print();

cout <<"===================="<< endl;

res = c2 - c1;
res.print();

cout <<"===================="<< endl;

++res;
res.print();

cout <<"===================="<< endl;

c2 = c1++;
c2.print();
c1.print();

cout <<"===================="<< endl;

--res;
res.print();

cout <<"===================="<< endl;

c2 = c1--;
c2.print();
c1.print();

cout <<"===================="<< endl;

Complex<int> c3;
c3 = c1;
c1.print();
c3.print();

cout <<"===================="<< endl;

cout<<(c1 == c2)<<endl;



/*
res= c1 + 0.5;
res.print();

res = 1.5 + c1;
res.print();

Complex c3(2.5,3.1);
c1 += c3;
c1.print();

c1 = c3;
c1.print();

cout<<(T)c1;
*/
return 0;
}


//================================================================================

template <class T>
 void Complex<T>::print(){
        if(real == 0 && img == 0) cout <<"zero"<< endl;
        else
        {
            if(img == 0){
              cout <<real<< endl;
            }
            else if (real == 0){
                if(img == 1) cout <<"i"<< endl;
                if(img == -1) cout <<"-i"<< endl;
                if(img != 1 && img != -1) cout <<img<<"i"<< endl;
            }
            else{

                if(img < -1) cout <<real<<img<<"i"<< endl;
                else if (img == -1) cout <<real<<"-i"<< endl;
                else cout <<real<<"+"<<img<<"i"<< endl;
            }


        }

    }

//================================================================================ c1 + c2
template <class T>
Complex<T> Complex<T>::operator+(const Complex<T> c) const
{
Complex res ;
res.real = this->real + c.real;
res.img = this->img + c.img;
return res;
}
//================================================================================ c1 - c2
template <class T>
Complex<T> Complex<T>::operator-(const Complex c) const
{
Complex res ;
res.real = this->real - c.real;
res.img = this->img - c.img;
return res;
}

//================================================================================ c1 + T

Complex Complex::operator+(T r)
{
Complex res ;
res.real = this->real + r;
res.img = this->img;
return res;
}

//================================================================================ T + c2

Complex operator+(T r,Complex c)
{
Complex res;
res.real = c.real + r;
res.img = c.img;
return res;
}

//================================================================================ ++c1

Complex Complex::operator++()
{
real++;
return *this;
}

//================================================================================ c1++

Complex Complex::operator++(int)
{
Complex temp = *this;
real++;
return temp;
}

//================================================================================ --c1

Complex Complex::operator--()
{
real--;
return *this;
}

//================================================================================ c1--

Complex Complex::operator--(int)
{
Complex temp = *this;
real--;
return temp;
}

//================================================================================ c1 += c2

Complex Complex::operator+=(Complex c)
{
real += c.real;
img += c.img;
return *this;
}

//================================================================================ c1 = c2  or  c1=c2=c3

Complex Complex::operator=(Complex c)
{
real = c.real;
img = c.img;
return *this;
}

//================================================================================ comp => 0/1

int Complex::operator==(Complex c)
{
return((real == c.real)&& (img == c.img));
}

//================================================================================  casting T

Complex::operator T()
{
return this->real;
}

//================================================================================  casting int

Complex::operator int()
{
return this->real;
}


