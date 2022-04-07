#include <iostream>

using namespace std;

template<class T>
class Stack
{
    T *st;
    int top,size;
    static int counter;
public:
    Stack()
    {
        counter++;
        this->size = 10;
        st = new T[10];
        top = 0;
    }

    Stack(int size)
    {
        counter++;
        this->size = size;
        st = new T[size];
        top =0;
    }

    ~Stack()
    {
        delete []st;
        counter--;
    }

    Stack(Stack&);
    void push(T);
    T pop();

    static int getCounter()
    {
        return counter;
    }

    Stack& operator=(Stack &);
    friend void viewContent(Stack);
};

template <class T>
int Stack<T>::counter = 0;
int main()
{
    Stack<int> s1(5);
    Stack<int> s2;
    s1.push(10);
    s1.push(21);
    s1.push(1);
    s1.push(2);
    s1.pop();

    cout << "Int stack # is:"<< Stack<int>::getCounter()<<endl;

    Stack<char> mys;
    mys.push('a');
    mys.push('b');
    mys.push('c');
    cout<< Stack<char>::getCounter();

    return 0;
}



template <class T>
Stack<T>::Stack(Stack<T> & myst)
{
    top = myst.top;
    size = myst.size;
    st = new T[size];
    for(int i =0; i<myst.top; i++)
    {
        st[i] = myst.st[i];
        counter++;
    }
}

template <class T>
void Stack<T>::push(T n)
{
    if(top == size) cout<<"stack is full" <<endl;
    else
    {
        st[top] = n;
        top++;
    }

}

template <class T>
T Stack<T>::pop()
{
    T retval = 0;
    if(!top) cout<<"stack is empty" <<endl;
    else
    {
        top--;
        retval = st[top];
    }
    return retval;
}

template <class T>
Stack<T> & Stack<T>::operator=(Stack<T> &mys)
{
    delete []this->st;
    size = mys.size;
    top = mys.top;
    st = new T[size];

    for(int i=0; i<top; i++)
    {
        st[i] = mys.st[i];
    }

    return *this;
}

template <class T>
void viewContent(Stack<T> mys)
{
    for(int i = 0; i < mys.size; i++)
    {
        cout<<"i + 1" << mys.st[i] <<endl;
    }
}

