#include<graphics.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h> 
void tree(float x,float y,float len,float a,float b)
{
	 if(len<20)
	{
		setcolor(RED);
		circle(x,y,5);
	   return;
	}
     float x1,y1;
     setcolor(GREEN);
     x1=x+len*cos(3.1428*a/180);
     y1=y-len*sin(3.1428*a/180);
     line(x,y,x1,y1);
     tree(x1,y1,len*0.75,a-b,b);
     tree(x1,y1,len*0.75,a-b,-b);
}
void main()
{
     int gd=0,gm,i,rd;
     float x=320,y=550,t=140;
     clrscr();
     initgraph(&gd,&gm,"C://TC//BGI");
     for(i=0;i<=3;i++)
     {
     tree(x+i,y,t,90,30);
     tree(x+i,y,t,90,-30);
     }
    getch();
    closegraph();
}
