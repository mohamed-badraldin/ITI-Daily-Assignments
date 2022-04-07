#include <iostream>

using namespace std;

template <class T>
    class Complex<T> {
        T real;
        T img;
        public:
            T get_real();
            T get_img();
            void set_real(T);
            void set_img(T);
            void print();

        Complex<T>(){
            real = 0;
            img = 0;
        }

        Complex<T>(T n){

            real = n;
            img = n;
        }

        Complex<T>(T r,T m){

            real = r;
            img = m;
        }

        ~Complex<T>(){
            cout <<"Destructor"<< endl;
        }
    };


Complex<T> add(Complex<T>,Complex<T>);
Complex<T> add(Complex<T>,Complex<T>,Complex<T>);
int main()
{

    cout <<"constructor without parameters"<< endl;
    Complex<T> c1;
    c1.print();
    ///////////////////////////////////////

    T num_c2;
    cout <<"\nconstructor with one parameter"<< endl;
    cout<<"Inter one param : ";
    cin>>num_c2;

    Complex<T> c2(num_c2);
    c2.print();

    //////////////////////////////////////

    T r,m;
    cout <<"\nconstructor with two parameter"<< endl;
    cout<<"Inter frist param : ";
    cin>>r;
    cout<<"Inter second param : ";
    cin>>m;

    Complex<T> c3(r,m);
    c3.print();

    /////////////////////////////////////////
    Complex<T> c4;

    T r_c4;
    cout <<"\nInput real number for object_1 : ";
    cin >> r_c4;
    c4.set_real(r_c4);

    T i_c4;
    cout <<"Input imagine number number object_1 : ";
    cin >> i_c4;
    c4.set_img(i_c4);


    Complex<T> c5;

    T r_c5;
    cout <<"\nInput real number for object_2 : ";
    cin >> r_c5;
    c5.set_real(r_c5);

    T i_c5;
    cout <<"Input imagine number number object_2 : ";
    cin >> i_c5;
    c5.set_img(i_c5);

    add(c4,c5).print();
    /////////////////////////////////////////////////////////



    return 0;
    };

    T Complex<T>::get_real(){
        return real;
    }
    T Complex<T>::get_img(){
        return img;
    }
    void Complex<T>::set_real(T r){
        real = r;
    }
    void Complex<T>::set_img(T i){
        img = i;
    }
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


    ////////////////////////////////////////////////////////////////

    Complex<T> add(Complex<T> c1,Complex<T> c2){

        Complex<T> result;
        result.set_real(c1.get_real() + c2.get_real());
        result.set_img(c1.get_img() + c2.get_img());
        return result;
    }

    Complex<T> add(Complex<T> c1,Complex<T> c2,Complex<T> c3){

        Complex<T> result;
        result.set_real(c1.get_real() + c2.get_real() + c3.get_real());
        result.set_img(c1.get_img() + c2.get_img() + c3.get_img());
        return result;
    }

    Complex<T> add(T f,Complex<T> c1){

        Complex<T> result;
        result.set_real(f + c1.get_real());
        return result;
    }

    Complex<T> add(Complex<T> c1,T f){

        Complex<T> result;
        result.set_img(f + c1.get_img());
        return result;
    }


