#pragma once
#include<iostream>
#include<string>
#include"worker.h"
using namespace std;

class boss : public worker
{
public:
	//���캯��
	boss(int ID, string name, int DeptID);

	//��ʾ������Ϣ
	virtual void show_Info();

	//��ȡ��λ����
	virtual string get_DeptName();

};





