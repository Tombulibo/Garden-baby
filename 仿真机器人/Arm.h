#pragma once
#include "All.h"
#include <iostream>
using namespace std;
class Arm:virtual public Body//����
{
	public:
		void BothMove();//������ͬʱ�˶�
		void DrawArm();//����
		void Wave();//����
	protected:
		double i;
		double j;
		double k;
		double l;//ѭ�����ı�������
};