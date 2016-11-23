/*
 LAST AND BEST
 FINAL UPDATED
 TIME-2:30 A.M.
 DATE-20 Dec,2009.
 A M COLLEGE,HADAPSAR.
 MCA SEM-3
 PROJECT NAME:-PRECEDENCE GRAPH & WAIT GRAPH
 DEVELOPED BY:-SANJAY HARGUDE (ROLL NO-598/9509)
	       NILESH GHAG    (ROLL NO-608/9510)

*/

#include<stdlib.h>
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
#include<process.h>
#include<string.h>

/*------------------------ class declaration-------------*/

 class graph
 {
   struct ABC
   {
   char tran[20];
   char ope[20];
   char ele[20];
   }arr[10];
  struct lock
   {
    char time[10];
    char tran[10];
    char item[10];
    char mode[10];
   } y[10];

/*----------------------member function----------------*/

 public:void pass();
	void start();
	void decoration();
	void help();
	void preced();
	void weight();
	void t1();
	void t2();
	void t3();
	void t4();
	void border();
};

/*-------------------password function-----------------*/

void graph:: pass()
   {
    char *z;
   clrscr();
   textcolor(11);
   gotoxy(20,20);
    int i=0;
   cprintf("Enter your password : ");
  while((z[i++]=getch())!=13)
   {
    gotoxy(44+i,20);
    cprintf("*");     }
  int pl=strcmpi(z,"sanjay\r");
  if (pl==0)
     cprintf("The password is correct....");
  else
     cprintf("The password is wrong....");
//getch();
}

/*------------------------Main function---------------------*/

void main()
{
  graph g1;
  g1.pass();
  g1.start();
  g1.decoration();
}

/*--------------------------startup screen---------------*/

void graph::start()
{
   int gm,gd,i,x;
   detectgraph(&gd,&gm);
   initgraph(&gd,&gm,"\\tc\\bgi");
   setcolor(5);
   settextstyle(4,0,7);
   setcolor(5);
   outtextxy(40,20,"DataBase Project On ");
   settextstyle(7,0,5);
   setcolor(2);
   outtextxy(60,120,"1.PRECEDENCE GRAPH");
   outtextxy(60,170,"2.WAIT GRAPH");
   setcolor(9);
   settextstyle(1,0,2);
   outtextxy(320,250,"  By...");
   outtextxy(220,280,"  Sanjay S. Hargude (R.No 9509)");
   outtextxy(220,310,"  Nilesh R. Ghag    (R.No 9510)");
   getch();
   closegraph();
}

/*-----------------Border Functon--------------------*/

void graph::border()
{
   setcolor(5);
   line(10,232,618,232);
   line(10,234,618,234);
   rectangle(10,10,618,473);
   rectangle(13,13,614,470);
   settextstyle(7,0,1);
}

/*------------------Menu function---------------------*/

void graph:: decoration()
{
   int gm,gd,i,x,s;
   char ch;
   detectgraph(&gd,&gm);
   initgraph(&gd,&gm,"\\tc\\bgi");
   do
   {
l1:   setcolor(5);
   settextstyle(7,0,7);
   setcolor(9);
   outtextxy(40,20,"GRAPHS PROJECT");
   settextstyle(7,0,5);
   setcolor(4);
   outtextxy(60,120,"1.PRECEDENCE ");
   setcolor(2);
   outtextxy(60,170,"2.WAIT   ");
   setcolor(5);
   outtextxy(60,220,"3.HELP ");
   setcolor(3);
   outtextxy(60,270,"4.QUIT");
   setcolor(6);
    outtextxy(60,320,"Enter your choice : ");
   gotoxy(60,22);
   char c[2]; c[0]=getch(); c[1]='\0';
   ch=atoi(c);
     outtextxy(485,320,c);
      getch();
      switch(ch)
      {
     case 1:preced();
	    break;
     case 2:weight();
	    break;
     case 3:help();
	    break;
     case 4:exit(0);
	    break;
     default:exit(0);
	   break;
   }
  } while(ch<='4');

}

/*----------precedence graph function---------------------*/

void graph::preced()
 {
    FILE *fp;
    int k;
    int g;
    int i=0,j;
    int q,p=0,z,t;
    char buff[40],ch[20],tok1[20],
	tok2[20],tok3[20],*c,*a[10],cd;
    char *r[3],*s[3];
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"\\tc\\bgi");
    cleardevice();
    border();
    outtextxy(40,20,"PRECEDENCE GRAPH ");
    fflush(stdin);
    fp=fopen("ganesh.txt","w");
    gotoxy(4,15);
    cout<<"\n\t\tINPUT DETAILS";
    cout<<"\n\t\t--------------------";
    cout<<"\n\t\tTRANS\tOPERTN\tDATA";
    cout<<"\n\t\t--------------------";
    border();
    char str[80];
    cout<<"\n";
      while(1)
      {
       cout<<"\t\t";
       border();
       gets(str);
       if(strcmp(str,".")==0)
	break;
       fputs(str,fp);
       putc('\n',fp);
      }
      fclose(fp);
       fp=fopen("ganesh.txt","r");
    while(!feof(fp))
     {  //while
     fgets(buff,80,fp);
     sscanf(buff,"%s%s%s",tok1,tok2,tok3);
     if((strcmp(tok2,"read")==0)||(strcmp(tok2,"write")==0))
       {  //if
		strcpy(arr[i].tran,tok1);
		strcpy(arr[i].ope,tok2);
		strcpy(arr[i].ele,tok3);
		i++;
	 }//if
       }//while
   p=0;
   for(i=0;i<=10;i++)
    {
	for(j=i+1;j<=i+1;j++)
      {
     if((strcmpi(arr[i].tran,arr[j].tran)!=0))
	{
	 if((strcmpi(arr[i].ope,"read")==0)&&
		   (strcmpi(arr[j].ope,"write")==0)&&
		   (strcmpi(arr[i].ele,arr[j].ele)==0))
	      {
		 printf("    %s%s -> %s%s ",arr[i].tran,arr[i].ele,
		   arr[j].tran,arr[j].ele);
		    a[p]=arr[i].tran;
		    a[p+1]=arr[j].tran;
		    p++;
	      }
   if((strcmpi(arr[i].ope,"write")==0)&&
     (strcmpi(arr[j].ope,"read")==0)&&
		   (strcmpi(arr[i].ele,arr[j].ele)==0))
		{
	  printf("      %s%s -> %s%s ",arr[i].tran,arr[i].ele,
		   arr[j].tran,arr[j].ele);
		   a[p]=arr[i].tran;
		    a[p+1]=arr[j].tran;
		     p++;
		  }
   if((strcmpi(arr[i].ope,"write")==0)&&
      (strcmpi(arr[j].ope,"write")==0)&&
      (strcmpi(arr[i].ele,arr[j].ele)==0))

		    {
	 printf("      %s%s -> %s%s ",arr[i].tran,arr[i].ele,
		   arr[j].tran,arr[j].ele);
		    a[p]=arr[i].tran;
		    a[p+1]=arr[j].tran;
		    p++;
		    }
    if((strcmpi(arr[i].ope,"read")==0)&&
      (strcmpi(arr[j].ope,"read")==0)&&
      (strcmpi(arr[i].ele,arr[j].ele)==0))
		    {
		    p++;
		    }
		    else
		     continue;
		}

	      }
	     }
	  p=0;
	  while(p!=10)
	  {
	    if((strcmpi(a[p],"T1")==0))
	      t1();
	    if((strcmpi(a[p],"T2")==0))
	      t2();
	    if((strcmpi(a[p],"T3")==0))
	      t3();
	    if((strcmpi(a[p],"T4")==0))
	      t4();
	  p++;
	  }
	   p=0;
	   while(p<10)
	    {//while
	      if((strcmpi(a[p],"T1")==0))
		{//if t1
		 if((strcmpi(a[p+1],"T2")==0))
		  {//if t2
		    line(110,100,280,100);
		    line(260,80,280,100);
		    line(260,120,280,100);
		  }//if t2
		else if((strcmpi(a[p+1],"T3")==0))
		  {//if t3
		    line(90,120,90,180);
		    line(110,160,90,180);
		    line(70,160,90,180);
		  }//if t3
		else if((strcmpi(a[p+1],"T4")==0))
		  {//if t4
		    line(110,100,280,200);
		    line(270,170,280,200);
		    line(260,220,280,200);
		  }//if t4
		}//if t1
	      if((strcmpi(a[p],"T2")==0))
		{//if t2
		 if((strcmpi(a[p+1],"T1")==0))
		  {//if t1
		    line(110,100,280,100);
		    line(130,80,110,100);
		    line(130,120,110,100);
		  }//if t1
		else if((strcmpi(a[p+1],"T3")==0))
		  {//if t3
		    line(280,100,110,200);
		    line(140,190,110,200);
		    line(120,170,110,200);
		  }//if t3
		else if((strcmpi(a[p+1],"T4")==0))
		  {//if t4
		    line(300,120,300,180);
		    line(280,160,300,180);
		    line(320,160,300,180);
		  }//if t4
		}//if t2
	      if((strcmpi(a[p],"T3")==0))
		{//if t3
		 if((strcmpi(a[p+1],"T2")==0))
		  {//if t2
		    line(300,120,90,180);
		    line(290,140,300,120);
		    line(270,120,300,120);
		  }//if t2
		else if((strcmpi(a[p+1],"T1")==0))
		  {//if t1
		    line(90,120,90,180);
		    line(100,140,90,120);
		    line(80,140,90,120);
		  }//if t1
		else if((strcmpi(a[p+1],"T4")==0))
		  {//if t4
		    line(110,200,280,200);
		    line(260,190,280,200);
		    line(260,210,280,200);
		  }//if t4
		}//if t3
	      if((strcmpi(a[p],"T4")==0))
		{//if t4
		 if((strcmpi(a[p+1],"T2")==0))
		  {//if t2
		    line(300,120,300,180);
		    line(290,140,300,120);
		    line(310,140,300,120);
		  }//if t2
		else if((strcmpi(a[p+1],"T3")==0))
		  {//if t3
		    line(110,200,280,200);
		    line(130,180,110,200);
		    line(130,220,110,200);
		  }//if t3
		else if((strcmpi(a[p+1],"T1")==0))
		  {//if t1
		    line(110,100,280,200);
		    line(140,100,110,100);
		    line(120,130,110,100);
		  }//if t1
		}//if t4

	      p=p+1;
	     // t++;
	    }//while
	    border();
	    getch();
	   cleardevice();
	   }

/*-------------------circle display function----------*/

   void graph::t1()
   {
     circle(90,100,20);
     outtextxy(83,98,"T1");
     //return 0;
   }

   void graph::t2()
   {
     circle(300,100,20);
     outtextxy(293,98,"T2");
    // return 0;
   }

   void graph::t3()
   {
     circle(90,200,20);
     outtextxy(83,198,"T3");
    // return 0;
   }

   void graph::t4()
   {
     circle(300,200,20);
     outtextxy(293,198,"T4");
     //return 0;
   }

/*----------2pl/weight graph function---------------------*/

void graph::weight()
{
char a,b,c,d;
int n,i,j,p;
 int gdriver = DETECT, gmode;
  clrscr();
 initgraph(&gdriver, &gmode, "\\tc\\bgi");
   setcolor(5);
   border();
     gotoxy(20,16);
   textcolor(11);
   _setcursortype(2);
   settextstyle(7,0,1);
   outtextxy(40,20,"WAIT GRAPH ");
    cout<<" Enter how many transaction : ";
  gotoxy(50,16);
  cin>>n;
  gotoxy(20,16);
  cout<<"\n\t\t   -----------------------------";
  cout<<"\n\t\t   TIME\t TRANS\t DATA\tMODE\t";
  cout<<"\n\t\t   -----------------------------";
    border();
    for(i=1;i<=n;i++)
   {
    border();
    gotoxy(20,19+i);
    cin>>y[i].time;
    cin>>y[i].tran;
    cin>>y[i].item;
    cin>>y[i].mode;
    }
border();
 for(i=1;i<=n;i++)
  {
   if(strcmpi(y[i].tran,"T1")==0)
   t1();
   if(strcmpi(y[i].tran,"T2")==0)
   t2();
   if(strcmpi(y[i].tran,"T3")==0)
   t3();
   if(strcmpi(y[i].tran,"T4")==0)
   t4();
      }
for(i=1;i<n;i++)
{
static int p,q,r,s,t,u;
for(j=i+1;j<=n;j++)
{
  if((strcmpi(y[i].mode,"S")==0)
    &&(strcmpi(y[j].mode,"S")==0))
    continue;
//for T1
if ( (strcmpi(y[i].tran,"T1")==0)
   && (strcmpi(y[i].item,y[j].item)==0))
      {
 if((strcmpi(y[j].tran,"T2")==0)&&
    ((strcmpi(y[j].mode,"X")==0)
     || (strcmpi(y[j].mode,"S")==0)))
		 {
		 p=1;
		 line(110,100,280,100);
		 line(130,80,110,100);
		 line(130,120,110,100);
		 }

 if((strcmpi(y[j].tran,"T3")==0)&&
     ((strcmpi(y[j].mode,"X")==0)
     || (strcmpi(y[j].mode,"S")==0)))
     {
		  q=1;
		  line(90,120,90,180);
		  line(100,140,90,120);
		  line(80,140,90,120);
		}
 if((strcmpi(y[j].tran,"T4")==0)&&
    ((strcmpi(y[j].mode,"X")==0)
     || (strcmpi(y[j].mode,"S")==0)))

		 {
		 r=1;
		 line(110,100,280,200);
		 line(140,100,110,100);
		 line(120,130,110,100);
		 }
      }
//for T2
if ( (strcmpi(y[i].tran,"T2")==0)
   && (strcmpi(y[i].item,y[j].item)==0))
      {
 if((strcmpi(y[j].tran,"T1")==0)&&
    ((strcmpi(y[j].mode,"X")==0)
     || (strcmpi(y[j].mode,"S")==0)))
		 {
		 s=1;
		 line(110,100,280,100);
		    line(260,80,280,100);
		    line(260,120,280,100);

		 }
 else if((strcmpi(y[j].tran,"T3")==0)&&
     ((strcmpi(y[j].mode,"X")==0)
     || (strcmpi(y[j].mode,"S")==0)))

		 {
		    if(p==1 && q==1) { }
		    else{
		    t=1;
		    line(300,120,90,180);
		    line(290,140,300,120);
		    line(270,120,300,120);     }

		}

 else if((strcmpi(y[j].tran,"T4")==0)&&
    ((strcmpi(y[j].mode,"X")==0)
     || (strcmpi(y[j].mode,"S")==0)))


		 {
		 if(q==1 && p==1) { }
		 else{
		 u=1;
		 line(300,120,300,180);
		    line(290,140,300,120);
		    line(310,140,300,120);}
		 }
      }
//if T3
if ( (strcmpi(y[i].tran,"T3")==0)
   && (strcmpi(y[i].item,y[j].item)==0))
     {
 if((strcmpi(y[j].tran,"T1")==0)&&
    ((strcmpi(y[j].mode,"X")==0)
     || (strcmpi(y[j].mode,"S")==0)))
		 {
		 line(90,120,90,180);
		 line(110,160,90,180);
		 line(70,160,90,180);
		 }
 if((strcmpi(y[j].tran,"T2")==0)&&
     ((strcmpi(y[j].mode,"X")==0)
     || (strcmpi(y[j].mode,"S")==0)))

		 {
		 line(280,100,110,200);
		 line(140,190,110,200);
		 line(120,170,110,200);
		}
 if((strcmpi(y[j].tran,"T4")==0)&&
    ((strcmpi(y[j].mode,"X")==0)
     || (strcmpi(y[j].mode,"S")==0)))

		 {
		 if(q==1 && r==1);
		 else{
		 if(t==1 && u==1);
		 else
		 {
		 line(110,200,280,200);
		    line(130,180,110,200);
		    line(130,220,110,200);
		    }
		 }
		 }
      }

//if T4
if ( (strcmpi(y[i].tran,"T4")==0)
   && (strcmpi(y[i].item,y[j].item)==0))
     {
  if((strcmpi(y[j].tran,"T1")==0)&&
    ((strcmpi(y[j].mode,"X")==0)
     || (strcmpi(y[j].mode,"S")==0)))
		 {
		 line(110,100,280,200);
		  line(250,170,280,200);
		  line(240,200,280,200);

		 }
 if((strcmpi(y[j].tran,"T2")==0)&&
     ((strcmpi(y[j].mode,"X")==0)
     || (strcmpi(y[j].mode,"S")==0)))
		 {
		   if(t==1 && u==1)  { }
		   else
		   {
		   line(300,120,300,180);
		    line(280,160,300,180);
		    line(320,160,300,180);
		   }
		}
 if((strcmpi(y[j].tran,"T3")==0)&&
    ((strcmpi(y[j].mode,"X")==0)
     || (strcmpi(y[j].mode,"S")==0)))

		 {
		    line(110,200,280,200);
		    line(260,190,280,200);
		    line(260,210,280,200);

		 }
      }


}
}
getch();
cleardevice();
}

/*------------------------Help function------------------*/

void graph::help()
 {
  cleardevice();
  gotoxy(1,5);
  cout<<"1.PRECEDENCE GRAPH";
  cout<<"\nENTER THE FOLLOWING DETAILS";
  cout<<"\n\tTRANSACTION \tOPERATION \tDATA-ITEM";
  cout<<"\ne.g. \tt1 \t\tread \t\t(a) ";
  cout<<"\n\n\n2.2PL GRAPH";
  cout<<"\n ENTER THE FOLLOWING DETAILS";
  cout<<"\n\tTIME   \tTRANSACTION  \tDATA-ITEM  \tMODE";
  cout<<"\ne.g. \tt1 \tT1 \t\tA \t\tX";
  outtextxy(60,250,"THANK YOU ");
  outtextxy(60,300,"FOR USING HELP");
  getch();
  cleardevice();
 }

