#pragma once			//��ֹͷ�ļ��ظ�����
#include <iostream>		//�������������ͷ�ļ�
#include"worker.h"
using namespace std;	

#include<fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:

	//���캯��
	WorkerManager();
	//��������
	~WorkerManager();

	//չʾ�˵�
	void Show_Menu();
	//�˳�ϵͳ
	void ExistSystem();

	//���ְ��
	void AddEmp();
	//�����ļ�
	void save();

	//��¼ְ������
	int m_EmpNum;
	//ְ������ָ��
	worker ** m_EmpArry;
		
};