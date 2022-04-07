#include <iostream>
#include <conio.h>

using namespace std;

class Stack {
    int top;
    int _size;
    int *st;

    public:
    void push(int);
    int pop();
    void display();

    Stack(int s=10)
    {
        top=0;
        _size=s;
        st = new int[_size]();
    }
    ~Stack(){
        cout << "Destructor" << endl;
    }


};

int flag=0;

int main()
{
    int len;
    cout << "Input size of the stack : ";
    cin >> len;

    Stack myS(len);

    do{
    system("cls");
    cout << "\n1- Push \n2- Pop\n3-display\n" << endl;
    cout << "Your choice number : ";
    int cho;
    cin >> cho;

    switch(cho){
        case 1:
            int v;
            cout << "Input int value : ";
            cin >> v;
            myS.push(v);
            break;
        case 2:
            myS.pop();
            break;
        case 3:
            myS.display();
            break;
        default:
            cout << "Choose 1 | 2 | 3\n";

    }
    getch();
    }while(flag<=len && flag>=0);

    return 0;
}


void Stack::push(int num){

    if(top == _size) cout << "Stack is full" << endl;
    else
    {
        st[top] = num;
        top++;
        flag++;
        cout << "push done!\n";
    }

}

int Stack::pop(){

    if (top == 0) cout << "Stack is empty" << endl;
    else{
        top--;
        flag--;
        cout << "pop done!";
    }

    return st[top];
}

void Stack::display(){
    cout<<"[";
    for(int i=0; i<top; i++){
        cout <<st[i]<<"," ;
    }
    cout<<"]";
}
