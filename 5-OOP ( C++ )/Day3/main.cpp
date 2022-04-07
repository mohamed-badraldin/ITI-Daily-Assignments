/*
    1- viewContend as friend function
    2- pass object without copy constructor
    3- viewContent not friend function (pass by value, reference)
    4- static counter

*/


#include <iostream>

using namespace std;

class Stack {
    int top;
    int _size;
    int *st;
    static int d_count;
    static int c_count;

    public:
    int get_top(){return top;}

    void push(int);
    int pop();
    void display();
//===========================================================
    friend void viewContent(Stack);              // friend
//===========================================================
    Stack(int s=10)
    {
        d_count++;
        cout << "Constructor "<<d_count<< endl;
        top=0;
        _size=s;
        st = new int[_size]();
    }
//===========================================================
    //Stack(Stack&);                       // Copy Constructor
//===========================================================

    ~Stack(){
        cout << "Destructor" << endl;
        delete []st;
    }


};

int Stack::d_count =0;
int Stack::c_count =0;
                                      //prototype(not friend)
//===========================================================
    //void viewContent(Stack mys);         // By value
    //void viewContent(Stack &mys);      // By refrence
//===========================================================

/////////////////////////////////////////////////////

int main()
{
    Stack s1,s2,s3;

    s1.push(15);
    s1.push(10);
    viewContent(s1);

    return 0;
}

//////////////////////////////////////////////////////

    void Stack::push(int num){

    if(top == _size) cout << "Stack is full" << endl;
    else
    {
        st[top] = num;
        top++;
    }

}

int Stack::pop(){

    if (top == 0) cout << "Stack is empty" << endl;
    else{
        top--;
    }

    return st[top];
}


///////////////////////////////////////////////////////

// without copy constructor (see extra destructor)//

void viewContent(Stack mys){
        int len = mys.top;
        for(int i=0;i<len;i++) cout<<i+1<<" : "<<mys.st[i]<<endl;
}

////////////////////////////////////////////////////////////////

/*
void viewContent(Stack mys){
        int len = mys.get_top();
        for(int i=0;i<len;i++) cout<<i+1<<" : "<<mys.pop()<<endl;
}
*/

////////////////////////////////////////////////////////////////

/*
Stack::Stack(Stack &s){

    c_count++;
    cout << "Copy Constructor "<<c_count<< endl;
    this->top = s.top;
    this->_size = s._size;
    this->st= new int[_size]();

    for(int i=0; i<this->top;i++){
        this->st[i] = s.st[i];
    }

}
*/






