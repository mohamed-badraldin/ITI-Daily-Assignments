#include <iostream>
#include "graphics.h"


using namespace std;

class Point
{
    int x;
    int y;
public:
    Point()
    {
        x = y =0;
    }
    Point(int m, int n)
    {
        x=m;
        y=n;
    }
    Point(Point&p)
    {
        x = p.x;
        y=p.y;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    void setx(int m)
    {
        x= m;
    }
    void sety(int m)
    {
        y= m;
    }
};
//========================================================================
class Circle
{
    Point Center;
    int rad;
public:
    Circle()
    {
        rad = 0;
    }
    Circle(int m,int n, int r):Center(m,n)
    {
        rad = r;
    }
    Circle(Point p, int r):Center(p)
    {
        rad=r;
    }
    void draw()
    {

        circle(Center.getx(),Center.gety(),rad);
    }
    void setrad(int r)
    {
        rad = r;
    }
    int getrad()
    {
        return rad;
    }
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
//========================================================================
class Rect
{
    Point ul;
    Point lr;
public:
    Rect() {}
    Rect(int x1,int y1,int x2,int y2):ul(x1,y1),lr(x2,y2) {}
    Rect(Point p1,Point p2):ul(p1),lr(p2) {};
    void draw()
    {

        rectangle(ul.getx(),ul.gety(),lr.getx(),lr.gety());
    }
};
//=================================================================================
class Line
{
    Point ul;
    Point lr;
public:
    Line() {}
    Line(int x1,int y1,int x2,int y2):ul(x1,y1),lr(x2,y2) {}
    void draw()
    {
        line(ul.getx(),ul.gety(),lr.getx(),lr.gety());
    }
};
//================================================================================

class  Picture
{

    int cnum,rnum,lnum;
    Circle *pcircle;
    Rect *prect;
    Line *plines;
public:
    Picture()
    {
        cnum =0;
        rnum =0;
        lnum=0;
        pcircle = NULL;
        prect = NULL;
        plines = NULL;
    }
    Picture(int cn,int rn,int ln, Circle *pc, Rect* pr,Line *pl)
    {
        cnum = cn;
        rnum = ln;
        lnum = ln;
        pcircle = pc;
        prect = pr;
        plines = pl;
    }
    void setCircles(int cn, Circle *pc)
    {
        cnum = cn;
        pcircle = pc;
    }
    void setRects(int rn, Rect *pr)
    {
        rnum = rn;
        prect = pr;
    }
    void setLines(int ln,Line *pl)
    {
        lnum =  ln;
        plines = pl;
    }
    void Paint();
};

void Picture::Paint()
{

    initgraph();
    for (int i = 0; i <cnum; i++)
    {
        pcircle[i].draw();
    }
    for (int i = 0; i <rnum; i++)
    {
        prect[i].draw();
    }
    for (int i = 0; i <lnum; i++)
    {
        plines[i].draw();
    }
}

//================================================================================
int main()
{
    //Declare Object Statically
    Picture myPic;

    /*
    Circle c2(200,50,50);
    Circle c3(300,150,200);

    Circle cArr[3] = {c1,c2,c3};
    Rect r2(100,100,200,350);

    Rect rArr[2] = {r1,r2};

    //because l1 its an normal var not array we have to pass the address of this var
    */
    Line l1(450,50,350,150);
    Line l2(450,50,550,150);
    Line l3(350,150,550,150);
    Line l4(450,200,400,280);
    Line l5(450,200,500,280);
    Line lArr[5] = {l1,l2,l3,l4,l5};
    myPic.setLines(5,lArr);

    Circle c1(450,200,100);
    myPic.setCircles(1,&c1);

    Rect r1(350,280,550,350);
    myPic.setRects(1,&r1);

    myPic.Paint();
}


