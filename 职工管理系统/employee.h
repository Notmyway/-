#pragma once
#include<iostream>
#include<string>
#include"worker.h"
using namespace std;

class employee : public worker
{
public:
	//���캯��
	employee(int ID, string name, int DeptID);

	//��ʾ������Ϣ
	virtual void show_Info();

	//��ȡ��λ����
	virtual string get_DeptName();

};




