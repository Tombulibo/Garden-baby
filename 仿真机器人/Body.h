#pragma once
#include "All.h"
#include <iostream>
using namespace std;
class Body//������
{
	public:
		Body();//���캯��
		void SetBody(double Newc,double Newd);//���¶�λ
		void DrawBody();//������
	protected:
		double c;
		double d;//���嶨λ
};
class Neck:virtual public Body,virtual public Head//������
{
	public:
		void DrawNeck();//������
};