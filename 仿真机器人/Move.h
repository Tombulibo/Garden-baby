#pragma once
#include "All.h"
#include <iostream>
using namespace std;
class Move:virtual public Body,virtual public Head,virtual public Eyes,virtual public Mouth,virtual public Neck,virtual public Arm,virtual public Leg//�ƶ���
{
	public:
		Move();//���캯��
		double Geta();//�õ��µ�a
		double Getb();//�õ��µ�b
		double Getc();//�õ��µ�c
		double Getd();//�õ��µ�d
		void Contorl();//�����ƶ�
	protected:
		int out;//�Ƿ��˳��ƶ�ģʽ  0��δ�˳���1���˳�
};