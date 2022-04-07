#include <iostream>
#include "graphics.h"


using namespace std;

class Shape{
    int color;
    public:
    Shape(){color = 15;}
    shape(int c){color = c;}
    getColor(){ return color;}
    setColor(int c){setcolor(c);}

/// Make function "draw( )", a pure virtual function, and make necessary
/// changes to other classes.

    virtual void draw(int) = 0;
};

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
class Circle:public Shape
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
    void draw(int c)
    {
        setColor(c);
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
class Rect:public Shape
{
    Point ul;
    Point lr;
public:
    Rect() {}
    Rect(int x1,int y1,int x2,int y2):ul(x1,y1),lr(x2,y2) {}
    Rect(Point p1,Point p2):ul(p1),lr(p2) {};
    void draw(int c)
    {
        setColor(c);
        rectangle(ul.getx(),ul.gety(),lr.getx(),lr.gety());
    }
};
//=================================================================================
class Line:public Shape
{
    Point ul;
    Point lr;
public:
    Line() {}
    Line(int x1,int y1,int x2,int y2):ul(x1,y1),lr(x2,y2) {}
    void draw(int c)
    {
        setColor(c);
        line(ul.getx(),ul.gety(),lr.getx(),lr.gety());
    }
};
//================================================================================
/*
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
        pcircle = pc;
        rnum = ln;
        prect = pr;
        lnum = ln;
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
    void Paint(int,int,int);
};
void Picture::Paint(int cc,int rc,int lc)
{

    initgraph();
    for (int i = 0; i <cnum; i++)
    {
        pcircle[i].draw(cc);
    }

    for (int i = 0; i <rnum; i++)
    {
        prect[i].draw(rc);
    }
    for (int i = 0; i <lnum; i++)
    {
        plines[i].draw(lc);
    }
}
*/
//================================================================================
/// Simplify the Picture class, so as to only be constructed by an array of
/// Shapes (array of pointers to Shape), then use the pointer of base class to call
/// the draw() function of Circle, Rect, and Line.

class Picture {
    Circle *pc;
    Rect *pr;
    Line *pl;

    public:
    Picture(){pc = NULL; pr = NULL; pl = NULL;}

    setCircles(Circle *c){pc = c;}
    setRects(Rect *r){pr = r;}
    setLines(Line *l){pl = l;}

    void Paint(int cc,int rc,int lc)
{
    initgraph();
    for (int i = 0; i <((sizeof(pc) > 4) ? sizeof(pc)/sizeof(pc[0]) : 1); i++)
    {
        pc->draw(cc);
        pc++;
    }

    for (int i = 0; i <((sizeof(pr) > 4) ? sizeof(pr)/sizeof(pr[0]) : 1) ; i++)
    {
        pr->draw(rc);
        pr++;
    }
    for (int i = 0; i <((sizeof(pl) > 4) ? sizeof(pl)/sizeof(pl[0]): 5) ; i++)
    {
        pl->draw(lc);
        pl++;
    }



}

};
//================================================================================

int main()
{
    /*
    Picture myPic;
    Line l1(450,50,350,150);
    Line l2(450,50,550,150);
    Line l3(350,150,550,150);
    Line l4(450,250,400,280);
    Line l5(450,250,500,280);
    Line lArr[5] = {l1,l2,l3,l4,l5};
    myPic.setLines(5,lArr);

    Circle c1(450,200,100);
    myPic.setCircles(1,&c1);

    Rect r1(350,280,550,350);
    myPic.setRects(1,&r1);

    myPic.Paint(7,8,9);
    */

    Picture myPic;
    Line l1(450,50,350,150);
    Line l2(450,50,550,150);
    Line l3(350,150,550,150);
    Line l4(450,250,400,280);
    Line l5(450,250,500,280);
    Line lArr[5] = {l1,l2,l3,l4,l5};
    myPic.setLines(lArr);
    Circle c1(450,200,100);
    myPic.setCircles(&c1);

    Rect r1(350,280,550,350);
    myPic.setRects(&r1);

    myPic.Paint(9,10,12);


}


