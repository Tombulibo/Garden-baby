#pragma once
#include "All.h"
#include <iostream>
using namespace std;
class Interface//������
{
	public:
		Interface();//���캯����ʼ��
		void DrawInterface();// ������
		void Choose();//ѡ��ģʽ
		int value;//ģʽ����
		MOUSEMSG m;		// ���������Ϣ
};