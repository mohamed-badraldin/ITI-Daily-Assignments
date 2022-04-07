#include <iostream>

using namespace std;

    class Complex {
        float real;
        float img;
        public:float get_real();
        public:float get_img();
        public:void set_real(float);
        public:void set_img(float);
        public:void print();
    };

int main()
{
    Complex c1;

    float r;
    cout <<"Input real number"<< endl;
    cin >> r;
    c1.set_real(r);

    float i;
    cout <<"Input imagine number number"<< endl;
    cin >> i;
    c1.set_img(i);

    c1.print();


    return 0;
    };

    float Complex::get_real(){
        return real;
    }
    float Complex::get_img(){
        return img;
    }
    void Complex::set_real(float r){
        real = r;
    }
    void Complex::set_img(float i){
        img = i;
    }
    void Complex::print(){
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
                else cout <<real<<"+"<<img<<"i"<< endl;
            }


        }

    }




