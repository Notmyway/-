#pragma once
#include<iostream>
#include<string>

using namespace std;

//ְ���������
class worker
{
public:
	//��ʾ������Ϣ
	virtual void show_Info() = 0;

	//��ȡ��λ����
	virtual string get_DeptName() = 0;

	string m_Name;
	int m_ID;
	int m_DeptID;
};