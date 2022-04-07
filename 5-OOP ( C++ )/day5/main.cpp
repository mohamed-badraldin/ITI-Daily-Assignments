#include <iostream>
#include "graphics.h"


using namespace std;

    class Point{
        int x;
        int y;
        public:
        Point(){x = y =0;}
        Point(int m, int n){ x=m;y=n;}
        Point(Point&p){x = p.x; y=p.y;}
        int getx(){return x;}
        int gety(){return y;}
        void setx(int m){ x= m;}
        void sety(int m){ y= m;}
};


    class Circle{
        Point Center;
        int rad;
        public:
        Circle(){rad = 0;}
        Circle(int m,int n, int r):Center(m,n){rad = r;}
        Circle(Point p, int r):Center(p){rad=r;}
        void draw()
        {
            initgraph();
        circle(Center.getx(),Center.gety(),rad);
        }
        void setrad(int r){rad = r;}
        int getrad(){return rad;}
        void setcenter(int x,int y)
        {
        Center.setx(x);
        Center.sety(y);
        }
        void getcenter(int &x,int &y)
        {
        x = Center.getx();
        y = Center.gety();
        }
    };
    class Rect
    {
        Point ul;
        Point lr;
        public:
        Rect(){}
        Rect(int x1,int y1,int x2,int y2):ul(x1,y1),lr(x2,y2){}
        Rect(Point p1,Point p2):ul(p1),lr(p2){};
        void draw()
        {
        rectangle(ul.getx(),ul.gety(),lr.getx(),lr.gety());
        }



    };

    class Line
    {
        Point ul;
        Point lr;
        public:
        Line(){}
        Line(int x1,int y1,int x2,int y2):ul(x1,y1),lr(x2,y2){}
        void draw()
        {
        line(ul.getx(),ul.gety(),lr.getx(),lr.gety());
        }



    };



int main()
{
    Circle c1(300,200,100);
    Rect r1(200,250,150,200);

    c1.draw();
    r1.draw();



    Line l1(30,50,300,200);
    l1.draw();



}


