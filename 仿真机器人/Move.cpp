#include "All.h"
Move::Move()
{
	out=0;
}
double Move::Geta()
{
	return a;
}
double Move::Getb()
{
	return b;
}
double Move::Getc()
{
	return c;
}
double Move::Getd()
{
	return d;
}
void Move::Contorl()
{
	setfillcolor(LIGHTGRAY);
	setlinecolor(WHITE);
	fillrectangle(1080,300,1280,400);
	settextcolor(BLACK);
	settextstyle(30, 0, _T("黑体"));
	char pt[] = "按“B”键退出";
	outtextxy(1080,350,pt);
	char pt1[] = "请用wasd操控";
	outtextxy(1100,450,pt1);
	for(;a<675&&c<675;)
	{
		if(out==0)
		{
			char key=_getch();
			switch (key)//获取按键
			{
			//向上
			case 72:
			case 'w':
			case'W':
				b=b-5;
				d=d-5;
				break;
			//向下
			case 80:
			case 's':
			case'S':
				b=b+5;
				d=d+5;
				break;
			//向右
			case 77:
			case 'd':
			case'D':
				a=a+5;
				c=c+5;
				break;
			//向左
			case 75:
			case 'a':
			case'A':
				a=a-5;
				c=c-5;
				break;
			case'b':
			case'B':
				out=1;
				break;
			}
			SetHead(a,b);
			SetBody(c,d);

			clearrectangle(0,0,1080,960);

			DrawHead();
			DrawEyeball();
			DrawPupil();
			DrawEyelid();
			DrawMouth();
			DrawBody();
			DrawNeck();
			DrawArm();
			DrawLeg();
		}
		if(out==1)
		{
			out=0;
			break;
		}
	}
	if(a>=675)
	{
		char pt2[] = "已移动到最右端";
		outtextxy(1070,550,pt2);
		Sleep(2000);
	}
	a=a-10;
		c=c-10;
		SetHead(a,b);
			SetBody(c,d);

			clearrectangle(0,0,1080,960);

			DrawHead();
			DrawEyeball();
			DrawPupil();
			DrawEyelid();
			DrawMouth();
			DrawBody();
			DrawNeck();
			DrawArm();
			DrawLeg();
	clearrectangle(1070,300,1280,600);
}