#pragma once
#include "All.h"
#include <iostream>
using namespace std;
class Dance: virtual public Head,virtual public Body//�赸��
{
	public:
		void BothHandMove();//����ͬʱ�˶�
		void LeftHandMove();//�����˶�
		void RightHandMove();//�����˶�
		void LeftLegMove();//����˶�
		void RightLegMove();//�ҽ��˶�
		void DanceMove();//�赸�˶�
	protected:
		double i;
		double j;
		double k;
		double l;
		double m;
		double n;
		double o;
		double p;//ѭ�����ı�������
};