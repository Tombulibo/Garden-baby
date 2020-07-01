#include "All.h"
Head::Head()
{
	a=420;
	b=130;
}
void Head::SetHead(double Newa,double Newb)
{
	a=Newa;
	b=Newb;
}
void Head::DrawHead()
{
	
	setfillcolor(BLUE);

	setlinecolor(BLACK);

	fillroundrect(a-60,b+40,a+60,b-40,10,10);

	fillroundrect(a-72,b+12,a-60,b-12,2,2);

	fillroundrect(a+72,b+12,a+60,b-12,2,2);

	line(a,b-40,a,b-80);

	setfillcolor(RED);

	fillcircle(a,b-83,3);
}
void Eyes::DrawEyeball()
{
	setfillcolor(WHITE);
	
	setlinecolor(BLACK);

	fillcircle(a-30,b-20,12);

	fillcircle(a+30,b-20,12);
}
void Eyes::DrawPupil()
{
	setfillcolor(RED);

	solidcircle(a-30,b-14,6);

	solidcircle(a+30,b-14,6);
}
void Eyes::DrawEyelid()
{
	setfillcolor(YELLOW);

	line(a-42,b-20,a-18,b-20);

	floodfill(a-30,b-31,WHITE,1);

	line(a+42,b-20,a+18,b-20);

	floodfill(a+30,b-31,WHITE,1);

	EyesStatus=1;
}
void Eyes::OpenEyes()
{
	if(EyesStatus==0)
	{
		BeginBatchDraw();

		for(int i=0; i<11; i++)
		{
			clearcircle(a-30,b-20,12);
			clearcircle(a+30,b-20,12);

			setfillcolor(WHITE);
			setlinecolor(BLACK);

			fillcircle(a-30,b-20,12);
			fillcircle(a+30,b-20,12);

			setfillcolor(RED);

			solidcircle(a-30,b-19+i/2,6);
			solidcircle(a+30,b-19+i/2,6);

			setfillcolor(YELLOW);

			arc(a-42,b-30+i,a-18,b-10-i,3.141592,3.141592*2);
			floodfill(a-30,b-31,WHITE,1);
			floodfill(a-30,b-20,RED,1);
			arc(a+42,b-30+i,a+18,b-10-i,3.141592,3.141592*2);
			floodfill(a+30,b-31,WHITE,1);
			floodfill(a+30,b-20,RED,1);

			FlushBatchDraw();
			Sleep(10);
		}

		EndBatchDraw();

		EyesStatus=1;
	}
	if(EyesStatus==1)
	{
		BeginBatchDraw();

		for(int i=0; i<11; i++)
		{
			clearcircle(a-30,b-20,12);
			clearcircle(a+30,b-20,12);

			setfillcolor(WHITE);
			setlinecolor(BLACK);

			fillcircle(a-30,b-20,12);
			fillcircle(a+30,b-20,12);
		
			setfillcolor(RED);

			solidcircle(a-30,b-14-i/2,6);
			solidcircle(a+30,b-14-i/2,6);

			setfillcolor(YELLOW);

			arc(a-42,b-20-i,a-18,b-20+i,0,3.141592);
			floodfill(a-30,b-31,WHITE,1);
			arc(a+42,b-20-i,a+18,b-20+i,0,3.141592);
			floodfill(a+30,b-31,WHITE,1);

			FlushBatchDraw();
			Sleep(10);
		}

		EndBatchDraw();

		EyesStatus=2;
	}
	if(EyesStatus==2)
	{
	}
}
void Eyes::CloseEyes()
{
	if(EyesStatus==2)
	{
		BeginBatchDraw();

		for(int i=0; i<11; i++)
		{
			clearcircle(a-30,b-20,12);
			clearcircle(a+30,b-20,12);

			setfillcolor(WHITE);
			setlinecolor(BLACK);

			fillcircle(a-30,b-20,12);
			fillcircle(a+30,b-20,12);
		
			setfillcolor(RED);

			solidcircle(a-30,b-19+i/2,6);
			solidcircle(a+30,b-19+i/2,6);

			setfillcolor(YELLOW);

			arc(a-42,b-30+i,a-18,b-10-i,0,3.141592);
			floodfill(a-30,b-31,WHITE,1);
			arc(a+42,b-30+i,a+18,b-10-i,0,3.141592);
			floodfill(a+30,b-31,WHITE,1);

			FlushBatchDraw();
			Sleep(10);
		}

		EndBatchDraw();

		EyesStatus=1;
	}
	if(EyesStatus==1)
	{
		BeginBatchDraw();

		for(int i=0; i<11; i++)
		{
			clearcircle(a-30,b-20,12);
			clearcircle(a+30,b-20,12);

			setfillcolor(WHITE);
			setlinecolor(BLACK);

			fillcircle(a-30,b-20,12);
			fillcircle(a+30,b-20,12);

			setfillcolor(RED);

			solidcircle(a-30,b-14-i/2,6);
			solidcircle(a+30,b-14-i/2,6);

			setfillcolor(YELLOW);

			arc(a-42,b-20-i,a-18,b-20+i,3.141592,3.141592*2);
			floodfill(a-30,b-31,WHITE,1);
			floodfill(a-30,b-20,RED,1);
			arc(a+42,b-20-i,a+18,b-20+i,3.141592,3.141592*2);
			floodfill(a+30,b-31,WHITE,1);
			floodfill(a+30,b-20,RED,1);

			FlushBatchDraw();
			Sleep(10);
		}

		EndBatchDraw();

		EyesStatus=0;
	}
	if(EyesStatus==0)
	{
	}
}
void Eyes::HalfOpen()
{
	if(EyesStatus==0)
	{
		BeginBatchDraw();

		for(int i=0; i<11; i++)
		{
			clearcircle(a-30,b-20,12);
			clearcircle(a+30,b-20,12);

			setfillcolor(WHITE);
			setlinecolor(BLACK);

			fillcircle(a-30,b-20,12);
			fillcircle(a+30,b-20,12);

			setfillcolor(RED);

			solidcircle(a-30,b-19+i/2,6);
			solidcircle(a+30,b-19+i/2,6);

			setfillcolor(YELLOW);

			arc(a-42,b-30+i,a-18,b-10-i,3.141592,3.141592*2);
			floodfill(a-30,b-31,WHITE,1);
			floodfill(a-30,b-20,RED,1);
			arc(a+42,b-30+i,a+18,b-10-i,3.141592,3.141592*2);
			floodfill(a+30,b-31,WHITE,1);
			floodfill(a+30,b-20,RED,1);

			FlushBatchDraw();
			Sleep(10);
		}

		EndBatchDraw();

		EyesStatus=1;
	}
	if(EyesStatus==2)
	{
		BeginBatchDraw();

		for(int i=0; i<11; i++)
		{
			clearcircle(a-30,b-20,12);
			clearcircle(a+30,b-20,12);

			setfillcolor(WHITE);
			setlinecolor(BLACK);

			fillcircle(a-30,b-20,12);
			fillcircle(a+30,b-20,12);
		
			setfillcolor(RED);

			solidcircle(a-30,b-19+i/2,6);
			solidcircle(a+30,b-19+i/2,6);

			setfillcolor(YELLOW);

			arc(a-42,b-30+i,a-18,b-10-i,0,3.141592);
			floodfill(a-30,b-31,WHITE,1);
			arc(a+42,b-30+i,a+18,b-10-i,0,3.141592);
			floodfill(a+30,b-31,WHITE,1);

			FlushBatchDraw();
			Sleep(10);
		}

		EndBatchDraw();

		EyesStatus=1;
	}
	if(EyesStatus==1)
	{
	}
}
void Eyes::Blink()
{
	if(EyesStatus==0)
	{
		OpenEyes();
		CloseEyes();
	}
	if(EyesStatus==1)
	{
		CloseEyes();
		HalfOpen();
	}
	if(EyesStatus==2)
	{
		CloseEyes();
		OpenEyes();
	}
}
void Eyes::Follow()
{
	OpenEyes();
	setfillcolor(LIGHTGRAY);
	setlinecolor(WHITE);
	fillrectangle(1080,300,1280,400);
	settextcolor(BLACK);
	settextstyle(30, 0, _T("黑体"));
	char pt[] = "点击这里退出";
	outtextxy(1100,350,pt);
	for(;;)
	{
		u=GetMouseMsg();
		if(u.x>1080&&u.x<1280&&u.y>300&&u.y<400)
		{
			setfillcolor(DARKGRAY);
			floodfill(1081,301,LIGHTGRAY,1);
			if(u.mkLButton)
			{
				Sleep(500);
				setfillcolor(LIGHTGRAY);
				floodfill(1081,301,DARKGRAY,1);
				break;
			}
		}
		else
		{
					BeginBatchDraw();

					clearrectangle(a-40,b-5,a+40,b+35);
					clearrectangle(a-80,b-100,a+80,b-41);
					clearcircle(a-30,b-20,12);
					clearcircle(a+30,b-20,12);

					setfillcolor(WHITE);
					setlinecolor(BLACK);

					fillcircle(a-30,b-20,12);
					fillcircle(a+30,b-20,12);

					setfillcolor(RED);

					arc(a-18+(u.x-a+18)/100,b+10+(u.y-b-10)/100,a+18+(u.x-a-18)/100,b+30+(u.y-b-30)/100,0,3.141592);
					arc(a-18+(u.x-a+18)/100,b+10+(u.y-b-10)/100,a+18+(u.x-a-18)/100,b+30+(u.y-b-30)/100,3.141592,3.141592*2);
					floodfill(a,b+20,WHITE,1);

					line(a,b-40,a+(u.x-a)/50,b-83+(u.y-b+83)/50);
					fillcircle(a+(u.x-a)/50,b-83+(u.y-b+83)/50,3);

					solidcircle(a-30+(u.x-a+30)/120,b-20+(u.y-b+20)/120,6);
					solidcircle(a+30+(u.x-a-30)/120,b-20+(u.y-b+20)/120,6);

					setfillcolor(YELLOW);
	
					arc(a-42,b-30,a-18,b-10,0,3.141592);
					floodfill(a-30,b-31,WHITE,1);
					arc(a+42,b-30,a+18,b-10,0,3.141592);
					floodfill(a+30,b-31,WHITE,1);

					setfillcolor(BLUE);
					floodfill(a,b+9+(u.y-b-10)/100,WHITE,1);

					FlushBatchDraw();
					Sleep(1);
			
		EndBatchDraw();
		}
	}
	clearrectangle(a-40,b-5,a+40,b+35);
	clearrectangle(1080,300,1280,400);
	clearrectangle(a-80,b-100,a+80,b-41);
	setfillcolor(RED);
	fillcircle(a,b-83,3);
	line(a-18,b+20,a+18,b+20);
	arc(a-18,b+6,a+18,b+34,3.141592,3.141592*2);
	floodfill(a,b+21,WHITE,1);
	setfillcolor(BLUE);
	floodfill(a,b+9+(u.y-b-10)/120,WHITE,1);
	line(a,b-40,a,b-80);
}
void Mouth::DrawMouth()
{
	setlinecolor(BLACK);

	line(a-18,b+20,a+18,b+20);

	MouthStatus=0;
}
void Mouth::OpenMouth()
{
	if(MouthStatus==0)
	{
		BeginBatchDraw();

		for(int i=0; i<15; i++)
		{
			clearellipse(a-18,b+20-i,a+18,b+20+i);

			setfillcolor(RED);
			setlinecolor(BLACK);

			arc(a-18,b+20-i,a+18,b+20+i,0,3.141592);
			arc(a-18,b+20-i,a+18,b+20+i,3.141592,3.141592*2);
			floodfill(a,b+20,WHITE,1);

			FlushBatchDraw();
			Sleep(10);
		}
		EndBatchDraw();

		MouthStatus=1;
	}
	if(MouthStatus==2)
	{
		BeginBatchDraw();

		for(int i=0; i<15; i++)
		{
			clearellipse(a-18,b+20-i,a+18,b+20+i);

			setfillcolor(RED);
			setlinecolor(BLACK);

			arc(a-18,b+20-i,a+18,b+20+i,0,3.141592);
			floodfill(a,b+21,WHITE,1);

			FlushBatchDraw();
			Sleep(10);
		}
		EndBatchDraw();

		MouthStatus=1;
	}
	if(MouthStatus==1)
	{
	}
}
void Mouth::CloseMouth()
{
	if(MouthStatus==1)
	{
		BeginBatchDraw();

		for(int i=0; i<15; i++)
		{
			clearellipse(a-18,b+6+i,a+18,b+34-i);

			setfillcolor(RED);
			setlinecolor(BLACK);

			arc(a-18,b+6+i,a+18,b+34-i,0,3.141592);
			arc(a-18,b+6+i,a+18,b+34-i,3.141592,3.141592*2);
			floodfill(a,b+20,WHITE,1);

			setfillcolor(BLUE);

			floodfill(a,b+5+i,BLACK,1);
			floodfill(a,b+35-i,BLACK,1);

			FlushBatchDraw();
			Sleep(10);
		}
		EndBatchDraw();

		MouthStatus=0;
	}
	if(MouthStatus==2)
	{
		BeginBatchDraw();

		for(int i=0; i<15; i++)
		{
			clearellipse(a-18,b+6+i,a+18,b+34-i);

			setfillcolor(RED);
			setlinecolor(BLACK);

			line(a-18,b+20,a+18,b+20);

			arc(a-18,b+6+i,a+18,b+34-i,3.141592,3.141592*2);
			floodfill(a,b+21,WHITE,1);

			setfillcolor(BLUE);

			floodfill(a,b+19,WHITE,1);
			floodfill(a,b+35-i,BLACK,1);

			FlushBatchDraw();
			Sleep(10);
		}
		EndBatchDraw();

		MouthStatus=0;
	}
	if(MouthStatus==0)
	{
	}
}
void Mouth::Smile()
{
	if(MouthStatus==0)
	{
		BeginBatchDraw();

		for(int i=0; i<15; i++)
		{
			clearellipse(a-18,b+20-i,a+18,b+20+i);

			setfillcolor(RED);
			setlinecolor(BLACK);

			line(a-18,b+20,a+18,b+20);

			arc(a-18,b+20-i,a+18,b+20+i,3.141592,3.141592*2);
			floodfill(a,b+21,WHITE,1);

			setfillcolor(BLUE);

			floodfill(a,b+19,WHITE,1);

			FlushBatchDraw();
			Sleep(10);
		}
		EndBatchDraw();

		MouthStatus=2;
	}
	if(MouthStatus==1)
	{
		BeginBatchDraw();

		for(int i=0; i<15; i++)
		{
			clearellipse(a-18,b+6+i,a+18,b+34-i);

			setfillcolor(RED);
			setlinecolor(BLACK);

			arc(a-18,b+6+i,a+18,b+34-i,0,3.141592);
			floodfill(a,b+21,WHITE,1);

			setfillcolor(BLUE);

			floodfill(a,b+5+i,BLACK,1);

			FlushBatchDraw();
			Sleep(10);
		}
		EndBatchDraw();

		MouthStatus=2;
	}
	if(MouthStatus==2)
	{
	}
}
