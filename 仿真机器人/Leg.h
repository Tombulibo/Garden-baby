#pragma once
#include "All.h"
#include <iostream>
using namespace std;
class Leg:virtual public Body//����
{
	public:
		void BothMove();//������ͬʱ�˶�
		void DrawLeg();//����
		void Crouchdown();//����
		void Split();//����
		void Standup();//վ��
	protected:
		double i;
		double j;
		double k;
		double l;//ѭ�����ı�������
};