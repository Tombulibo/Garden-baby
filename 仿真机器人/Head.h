#pragma once
#include "All.h"
#include <iostream>
using namespace std;
class Head           //ͷ��
{
	public:
		Head();//���캯��
		void SetHead(double Newa,double Newb);//���¶�λ
		void DrawHead();//��ͷ
	protected:
		double a;
		double b;   //ͷ����λ
};
class Eyes: virtual public Head//����
{
	public:
		void DrawEyeball();//������
		void DrawPupil();//������
		void DrawEyelid();//����Ƥ
		void OpenEyes();//����
		void CloseEyes();//����
		void HalfOpen();//������
		void Blink();//գ��
		void Follow();//�۶�
	protected:
		int EyesStatus;//0:���ۣ�1:������2:ȫ��
		MOUSEMSG u;		// ���������Ϣ
};
class Mouth: virtual public Head//����
{
	public:
		void DrawMouth();//����
		void OpenMouth();//����
		void CloseMouth();//����
		void Smile();//΢Ц
	protected:
		int MouthStatus;//0:���죻1:���죻2:΢Ц��
};
