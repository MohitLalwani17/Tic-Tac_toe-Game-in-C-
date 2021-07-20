#include<iostream.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<malloc.h>
int choice,x=0,y=0,k=2,u=0,no=0,win=0;
char c;
struct node
{
	int x,y;
	int no;
	int k;
	char c;
	struct node *next;
};
struct node *start;
void createlist(int x,int y,int no,int k)
{
		struct node *p;
		p=(node*)malloc(sizeof(struct node));
		p->x=x;
		p->y=y;
		p->no=no;
		p->k=k;
		p->next=NULL;
		if(k%2==0)
		{
			c='X';
			p->c=c;
		}
		else
		{
			c='O';
			p->c=c;
		}
	if (start==NULL)
	{
		start=p;
	}
	else
	{
		p->next=start;
		start=p;

	}

}
void showlist()
{
	struct node *q=start;
	while(q!=NULL)
	{
		cout<<q->x<<"  "<<q->y<<" "<<q->no<<" "<<q->c<<" "<<q->k<<endl;
		q=q->next;
	}
}
void input();
void matrix()
{	line(130,90,130,420);//vertical line1
	line(260,90,260,420);//vertical line2
	line(0,200,390,200);//horizontal line1
	line(0,310,390,310);//horizontal line2
}
void page_1()
{
	settextstyle(2,HORIZ_DIR,8);
	setcolor(GREEN);

	outtextxy(200,200,"TIC TAC TOE GAME");
	settextstyle(2,HORIZ_DIR,6);
	setcolor(BLUE);
	outtextxy(300,275,"press enter");


}
void display()
{
	if(k%2==0)
	outtextxy(getx(),gety(),"X");
	else
	outtextxy(getx(),gety(),"O");
}
void display2()
{
	int a,b;
	struct node *q;
	q=start;
	while(q!=NULL)
	{
		a=q->x;
		b=q->y;
		if(q->k%2==0)
		outtextxy(a,b,"X");
		else
		outtextxy(a,b,"O");
		q=q->next;
	}

}
void calculate()
{	if(x==65&&y==145)
	no=1;
	if(x==195&&y==145)
	no=2;
	if(x==325&&y==145)
	no=3;
       if(x==65&&y==255)
       no=4;
	if(x==195&&y==255)
	no=5;
	if(x==325&&y==255)
	no=6;
	if(x==65&&y==365)
	no=7;
	if(x==195&&y==365)
	no=8;
	if(x==325&&y==365)
	no=9;
}
void checkwin()
{
	struct node *q;
	q=start;
	win=0;
	while(q!=NULL)
	{
		if((q->no==1||q->no==2||q->no==3)&&(q->c=='X'))
			win++;
			q=q->next;
			if(win==3)
			{
				outtextxy(440,440,"X HAS WON");
				u=1;
				break;
			}
	}
	win=0;
		q=start;
	while(q!=NULL)
	{

		if((q->no==4||q->no==5||q->no==6)&&(q->c=='X'))
		win++;
		q=q->next;
		if(win==3)
		{
			outtextxy(440,440,"X HAS WON");
			u=1;
			break;
		}


	}
	win=0;
	q=start;
	while(q!=NULL)
	{

		if((q->no==7||q->no==8||q->no==9)&&(q->c=='X'))
		win++;
		q=q->next;
		if(win==3)
		{
			outtextxy(440,440,"X HAS WON");
			u=1;
			break;
		}


	}
	win=0;
		q=start;
	while(q!=NULL)
	{

		if((q->no==1||q->no==4||q->no==7)&&(q->c=='X'))
		win++;
		q=q->next;
		if(win==3)
		{
			outtextxy(440,440,"X HAS WON");
			u=1;
			break;
		}


	}
	win=0;
		q=start;
	while(q!=NULL)
	{

		if((q->no==2||q->no==5||q->no==8)&&(q->c=='X'))
		win++;
		q=q->next;
		if(win==3)
		{
			outtextxy(440,440,"X HAS WON");
			u=1;
			break;
		}


	}
	win=0;
		q=start;
	while(q!=NULL)
	{

		if((q->no==3||q->no==6||q->no==9)&&(q->c=='X'))
		win++;
		q=q->next;
		if(win==3)
		{
			outtextxy(440,440,"X HAS WON");
			u=1;
			break;
		}


	}
	win=0;
		q=start;
	while(q!=NULL)
	{

		if((q->no==1||q->no==5||q->no==9)&&(q->c=='X'))
		win++;
		q=q->next;
		if(win==3)
		{
			outtextxy(440,440,"X HAS WON");
			u=1;
			break;
		}


	}
      win=0;
		q=start;
	while(q!=NULL)
	{

		if((q->no==3||q->no==5||q->no==7)&&(q->c=='X'))
		win++;
		q=q->next;
		if(win==3)
		{
			outtextxy(440,440,"X HAS WON");
			u=1;
			break;
		}


	}
	win=0;
		q=start;
	while(q!=NULL)
	{

		if((q->no==1||q->no==2||q->no==3)&&(q->c=='O'))
		win++;
		q=q->next;
		if(win==3)
		{
			outtextxy(440,440,"O HAS WON");
			u=1;
			break;
		}


	}
	win=0;
		q=start;
	while(q!=NULL)
	{

		if((q->no==4||q->no==5||q->no==6)&&(q->c=='O'))
		win++;
		q=q->next;
		if(win==3)
		{
			outtextxy(440,440,"O HAS WON");
			u=1;
			break;
		}


	}
	win=0;
		q=start;
	while(q!=NULL)
	{

		if((q->no==7||q->no==8||q->no==9)&&(q->c=='O'))
		win++;
		q=q->next;
		if(win==3)
		{
			outtextxy(440,440,"O HAS WON");
			u=1;
			break;
		}


	}
	win=0;
		q=start;
	while(q!=NULL)
	{

		if((q->no==1||q->no==4||q->no==7)&&(q->c=='O'))
		win++;
		q=q->next;
		if(win==3)
		{
			outtextxy(440,440,"O HAS WON");
			u=1;
			break;
		}


	}
	win=0;
		q=start;
	while(q!=NULL)
	{

		if((q->no==2||q->no==5||q->no==8)&&(q->c=='O'))
		win++;
		q=q->next;
		if(win==3)
		{
			outtextxy(440,440,"O HAS WON");
			u=1;
			break;
		}


	}
	win=0;
		q=start;
	while(q!=NULL)
	{

		if((q->no==3||q->no==6||q->no==9)&&(q->c=='O'))
		win++;
		q=q->next;
		if(win==3)
		{
			outtextxy(440,440,"O HAS WON");
			u=1;
			break;
		}


	}
	win=0;
		q=start;
	while(q!=NULL)
	{

		if((q->no==1||q->no==5||q->no==9)&&(q->c=='O'))
		win++;
		q=q->next;
		if(win==3)
		{
			outtextxy(440,440,"O HAS WON");
			u=1;
			break;
		}


	}
	win=0;
		q=start;
	while(q!=NULL)
	{

		if((q->no==3||q->no==5||q->no==7)&&(q->c=='O'))
		win++;
		q=q->next;
		if(win==3)
		{
			outtextxy(440,440,"O HAS WON");
			u=1;
			break;
		}


	}
}
void quad1()
{
	x=65;y=145;
	circle(x,y,10);
	while(1)
	{	outtextxy(400,400,"enter char to move ");
		choice=getch();
		if(choice==100)//d key to move right
		{	 cleardevice();
			 matrix();
			 display2();
			 x+=130;
			 circle(x,y,10);
		}
		else if(choice==115)//s key to move down
		{      	cleardevice();
			matrix();
			display2();
			y+=110;
			circle(x,y,10);
		  }
		else if(choice==13)// if user locks his choice
		{

			cleardevice();
			matrix();
			moveto(x,y);
			calculate();
			display();
			display2();
			createlist(x,y,no,k);
			circle(x,y,10);
			checkwin();
			if(u==1)
			{
				break;
			}
			k++;
			if(k==11&&u==0)
		       {
				outtextxy(440,440,"GAME HAS BEEN DRAWN");
				break;
		       }
		    }
		else if(choice==119) //w key to move up
		{
				y-=110;
				cleardevice();
				display2();
				matrix();
				circle(x,y,10);
		}
		else if(choice==97)//a key to move left
		{

				x-=130;
				cleardevice();
				display2();
				matrix();
				circle(x,y,10);


		}
	}

}

void main()
{	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	char ch;
	page_1();
	ch=getch();
	if(ch==13)

       {
	cleardevice();
       setbkcolor(WHITE);
       setcolor(RED);
	matrix();
	quad1();
	}
	getch();
	closegraph();
	showlist();
	getch();
}
