#include<graphics.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h> 
#include<dos.h>
typedef struct point
{
   float x;
   float y;
}p;
void triangle(p p1,p p2,p p3,float l)
{
	 if(l==0)
	   return;
	p pA,pB,pC;
	delay(150);
	setcolor(12);
     line(p1.x,p1.y,p2.x,p2.y);
     line(p2.x,p2.y,p3.x,p3.y);
     line(p1.x,p1.y,p3.x,p3.y);
     pA.x=(p1.x+p2.x)/2;
     pA.y=(p1.y+p2.y)/2;
     pB.x=(p2.x+p3.x)/2;
     pB.y=(p2.y+p3.y)/2;
     pC.x=(p3.x+p1.x)/2;
     pC.y=(p3.y+p1.y)/2;
     triangle(p1,pA,pC,l-1);
     triangle(pA,p2,pB,l-1);
     triangle(pC,pB,p3,l-1);
}
void main()
{
     int gd=0,gm,i,rd,lim=6;
     p p1,p2,p3;
     float x=320,y=0,l=550;
     clrscr();
     initgraph(&gd,&gm,"C://TC//BGI");
     p1.x=x;
     p1.y=0;
     p2.x=x+l*cos(3.1428/3);
     p2.y=y+l*sin(3.1428/3);
     p3.x=x+l*cos(3.1428*4/6);
     p3.y=y+l*sin(3.1428*4/6);
     triangle(p1,p2,p3,lim);
    getch();
    closegraph();
}
