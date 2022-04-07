#include <iostream>

using namespace std;

class Stack
{
    int top;
    int _size;
    int *st;
    static int d_count;
    static int c_count;

public:
    int get_top()
    {
        return top;
    }

    void push(int);
    int pop();
    void display();

    friend void operator<<(ostream &,Stack &);
    int& operator[](int);
    friend void viewContent(Stack);

    Stack& operator=(Stack&);

    Stack(int s=10)
    {
        d_count++;
        cout << "Constructor "<<d_count<< endl;
        top=0;
        _size=s;
        st = new int[_size]();
    }

    ~Stack()
    {
        cout << "Destructor" << endl;
        d_count--;
        delete []st;
    }


};

int Stack::d_count =0;
int Stack::c_count =0;


int main()
{
    Stack s1;
    s1.push(15);
    s1.push(10);
    s1[0] = 22;
    cout << s1[0] << endl;
    return 0;
}


//////////////////////////////////////////////////////

void Stack::push(int num)
{

    if(top == _size) cout << "Stack is full" << endl;
    else
    {
        st[top] = num;
        top++;
    }

}

int Stack::pop()
{

    if (top == 0) cout << "Stack is empty" << endl;
    else
    {
        top--;
    }

    return st[top];
}


///////////////////////////////////////////////////////

Stack & Stack::operator=(Stack &s)
{
    delete []this->st;
    _size = s._size;
    top = s.top;
    st = new int[_size];
    for(int i=0; i<top; i++)
    {
        st[i] = s.st[i];
    }
    return *this;
}

////////////////////////////////////////////////////////////////////

void viewContent(Stack mys)
{
    int len = mys.top;
    for(int i=0; i<len; i++) cout<<i+1<<" : "<<mys.st[i]<<endl;
}

void operator<<(ostream& mys, Stack &s)
{
    int len = s.top;
    for(int i=0; i<len; i++) mys<<i+1<<" : "<<s.st[i]<<endl;
}



int& Stack::operator[](int in){
    if(in<=top && in>-1)
    return st[in];
    else {
        cout<<"index out of range ";
        return(st[in]);
    }
}
