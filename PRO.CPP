
#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>

void graph() { int i,j=0,k=0;
  int gd=DETECT,gm,maxx,maxy,button;
  initgraph(&gd,&gm,"C:\\TC\\BGI");

  line(0,250,600,250);  // x axis
  line(300,10,300,460); // y axis

  settextstyle(1,HORIZ_DIR,1);
  outtextxy(540,250,"+X axis");
  outtextxy(0,250,"-X axis");
  outtextxy(305,430,"-Y axis");
  outtextxy(305,10,"+Y axis");
  settextstyle(1/2,HORIZ_DIR,1/2);
  outtextxy(303,253,"0");
  for(i=1;i<5;i++)
  {   j+=50;
    outtextxy(297+j,248,"|");
    outtextxy(297-j,248,"|");

  }
 for(i=0;i<5;i++)
 {
    k+=50;
    settextstyle(1/2,VERT_DIR,1/2);
    outtextxy(305,248+k,"|");
    outtextxy(305,248-k,"|");
 }
}

void para1(float a)
{  cout<<"\n PARABOLA ALONG X-AXIS: y^2=4ax ";

  float y=0,x=0;
    if (a>0)
   {
    for(x=0;x<200;x++)
    { y=2*sqrt(a*x);
      putpixel((300+x),(250+y),11);
      putpixel((300+x),(250-y),11);
     }
   }
   else if(a<0)
    { a*=-1;
      for(x=0;x<200;x++)
       { y=2*sqrt(a*x);
	 putpixel((300-x),(250+y),11);
	  putpixel((300-x),(250-y),11);
       }
    }
}
 void para2(float a)
 {   cout<<"\n PARABOLA ALONG Y-AXIS: x^2=4ay";

    float y=0,x=0;
   if (a>0)
   {
    for(y=0;y<200;y++)
    { x=2*sqrt(a*y);
      putpixel((300+x),(250-y),12);
      putpixel((300-x),(250-y),12);
     }
   }
   else if(a<0)
    { a*=-1;
      for(y=0;y<200;y++)
       { x=2*sqrt(a*y);
	 putpixel((300+x),(250+y),12);
	  putpixel((300-x),(250+y),12);
       }
    }
}

 void elip1(float a,float b)
 { float x=0,y=0,d=0;
    cout<<"\n ELLIPSE WITH MAJOR AX >MINOR AX (a>b)";
       float j=a;
       float k=b;
       a+=100;
       b+=70;
   for(x=0;x<=a;x++)
    { d =(b*b)-(((b*b)/(a*a))*(x*x));
       if(d>=0)
	{y=sqrt(d);
	   if(y==0)
	   {
	   cout<<"\n \n the intersecting pt in x axis:";
	   cout<<j;cout<<"units";
	   cout<<"\n the intersecting pt in y axis:";
	   cout<<k;cout<<"units";
	  }
	else
	 { putpixel((300+x),(250-y),13);
	   putpixel((300+x),(250+y),13);
	   putpixel((300-x),(250-y),13);
	   putpixel((300-x),(250+y),13);

	 }

  }  }
}
 void elip2(float a,float b)
{
   float x;
   float y;
   float d;
    cout<<"\n ELLIPSE WITH MAJOR AX <MINOR AX(b>a)";
     float j=a;
       float k=b;
       a+=70;
       b+=100;
   for(x=0;x<=a;x++)
    { d=(b*b)-(((b*b)/(a*a))*(x*x));
	if(d>=0)
	{ y=sqrt(d);
	 if(y==0)
	   {
	   cout<<"\n \n the intersecting pt in x axis:";
	   cout<<j;cout<<"units";
	   cout<<"\n the intersecting pt in y axis:";
	   cout<<k;cout<<"units";
	  }
	  else
	  { putpixel((300+x),(250-y),13);
	   putpixel((300+x),(250+y),13);
	   putpixel((300-x),(250-y),13);
	   putpixel((300-x),(250+y),13);
	  }
     } }
}

 void hyper1(float a,float b)
{  float x=0,y=0,d=0;
   cout<<"\n HYPERBOLA CUTTING AT X-AXIS AND ALONG Y-AXIS(a>b):  ";
    float j=a;
    a+=100;
    b+=70;
   for(x=a;x>=a,x<200;x++)
    { d=(((b*b)/(a*a))*(x*x))-(b*b);

	   y=sqrt(d);
	    if(y==0)
	   {
	   cout<<"\n \n the intersecting pt in x axis:";
	   cout<<j;cout<<"units";

	  }
      else
	 {  putpixel((300+x),(250-y),14);
	   putpixel((300+x),(250+y),14);
	   putpixel((300-x),(250-y),14);
	   putpixel((300-x),(250+y),14);
	  }

     }

}
void hyper2(float a, float b)
{   float x=0,y=0,d=0;
   cout<<"\n HYPERBOLA CUTTING AT Y-AXIS AND ALONG X-AXIS(a>b):";
       float k=b;
   a+=100;
   b+=70;
   for(y=a;y>=a,y<200;y++)
    { d=(((b*b)/(a*a))*(y*y))-(b*b);


	  x=sqrt(d);

	   if(x==0)
	   {
	   cout<<"\n \n the intersecting pt in y axis:";
	   cout<<k;cout<<"units";
	  }
     else
	 {
	   putpixel((300+x),(250-y),14);
	   putpixel((300+x),(250+y),14);
	   putpixel((300-x),(250-y),14);
	   putpixel((300-x),(250+y),14);
	  }

     }

}


void main()
{
 float a,b,m,c;
 char *s;

 fstream obj;
 clrscr();
 obj.open("equ.dat",ios::in|ios::out|ios::binary);
 cout<<"\n MENU";
 cout<<"\n -----------";
 cout<<"\n \n 1.PARABOLA:";
 cout<<"\n 1.1 y^2=4*a*x";
 cout<<"\n 1.2 x^2=4*a*y";
 cout<<"\n \n 2.ELIPSE:";
 cout<<"\n x^2/a^2+y^2/b^2=1";
 cout<<"\n \n 3.HYPERBOLA:";
 cout<<"\n 3.1 x^2/a^2-y^2/b^2=1";
 cout<<"\n 3.2 y^2/a^2-x^2/b^2=1";

 cout<<"\n \n  \n  ENTER THE  EQUATION:";
 gets(s);
 obj.write((char*)&s,sizeof(s));



    while(!obj.eof())

  {

      obj.read((char*)&s,sizeof(s));

      if(strcmpi(s,"x^2=4*a*y")==0)
	  {cout<<"\n ENTER a:";
	   cin>>a; graph();
	   para2(a);
	  }
      else if(strcmpi(s,"y^2=4*a*x")==0)
	   { cout<<"\n ENTER a:";

	      cin>>a;graph();

	      para1(a);
	   }
       else if(strcmpi(s,"x^2/a^2+y^2/b^2=1")==0)
	     { cout<<"\n ENTER a:";
	       cin>>a;
	       cout<<"\n ENTER b:";
	       cin>>b;graph();

	       if(a>b)
	       elip1(a,b);
	       else if(a<b)
	       elip2(a,b);
	     }
	 else if(strcmpi(s,"x^2/a^2-y^2/b^2=1")==0)
	    { cout<<"\nIN HYPERBOLA  a>b";
	      cout<<"\n ENTER a:";
	      cin>>a;
	      cout<<"\n ENTER b:";
	      cin>>b;
			   graph();
	      hyper1(a,b);
	    }
	  else if(strcmpi(s,"y^2/a^2-x^2/b^2=1")==0)
	      { cout<<"\nIN HYPERBOLA  a>b";
	      cout<<"\n ENTER a:";
	      cin>>a;
	      cout<<"\n ENTER b:";
	      cin>>b;graph();

	      hyper2(a,b);
	    }

	    else cout<<"\n please pass a valid EQUATION:";

   }
 getch();
 obj.close();
 closegraph();

}








