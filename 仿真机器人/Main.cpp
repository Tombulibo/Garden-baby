#include "All.h"
struct ROBOT
{
	Interface inter;//����
	Head head;//ͷ
	Eyes eyes;//�۾�
	Mouth mouth;//���
	Body body;//����
	Neck neck;//����
	Arm arm;//�ֱ�
	Leg leg;//��
	Dance dance;//�赸
	Move move;//�ƶ�
}R;
int main()
{
	initgraph(1280,960);//������С

	setbkcolor(WHITE);//���ñ���ɫΪ��ɫ
	cleardevice();//����
	R.inter.DrawInterface();//������

	R.head.DrawHead();//��ͷ
	R.eyes.DrawEyeball();//������
	R.eyes.DrawPupil();//������
	R.eyes.DrawEyelid();//����Ƥ
	R.mouth.DrawMouth();//����
	R.body.DrawBody();//������
	R.neck.DrawNeck();//������
	R.arm.DrawArm();//���ֱ�
	R.leg.DrawLeg();//����

	for(;;)
	{
		R.inter.Choose();
		if(R.inter.value==1)
		{
			R.eyes.OpenEyes();
			R.mouth.Smile();
			R.eyes.Blink();
			R.arm.Wave();
			R.eyes.Blink();
			R.eyes.HalfOpen();
			R.mouth.CloseMouth();
			R.inter.value=0;
			continue;
		}
		if(R.inter.value==2)
		{
			R.move.Contorl();
			R.inter.value=0;
			R.head.SetHead(R.move.Geta(),R.move.Getb());
			R.body.SetBody(R.move.Getc(),R.move.Getd());
			R.arm.SetBody(R.move.Getc(),R.move.Getd());
			R.dance.SetHead(R.move.Geta(),R.move.Getb());
			R.dance.SetBody(R.move.Getc(),R.move.Getd());
			R.eyes.SetHead(R.move.Geta(),R.move.Getb());
			R.leg.SetBody(R.move.Getc(),R.move.Getd());
			R.mouth.SetHead(R.move.Geta(),R.move.Getb());
			R.neck.SetBody(R.move.Getc(),R.move.Getd());
			R.neck.SetHead(R.move.Geta(),R.move.Getb());
			continue;
		}
		if(R.inter.value==3)
		{
			R.eyes.OpenEyes();
			R.mouth.Smile();
			R.eyes.Blink();
			R.leg.Crouchdown();
			R.leg.Split();
			R.leg.Standup();
			R.eyes.Blink();
			R.dance.DanceMove();
			R.eyes.Blink();
			R.eyes.HalfOpen();
			R.mouth.CloseMouth();
			R.inter.value=0;
			continue;
		}
		if(R.inter.value==4)
		{
			R.mouth.Smile();
			R.eyes.OpenEyes();
			R.eyes.Follow();
			R.eyes.Blink();
			R.eyes.HalfOpen();
			R.mouth.CloseMouth();
			R.inter.value=0;
			continue;
		}
		if(R.inter.value==5)
		{
			R.eyes.OpenEyes();
			R.mouth.OpenMouth();
			R.eyes.Blink();
			R.arm.Wave();
			R.mouth.CloseMouth();
			R.eyes.CloseEyes();
			break;
		}
	}

	cleardevice();
	closegraph();
}