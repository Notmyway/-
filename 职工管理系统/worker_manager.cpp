#include"worker_manager.h"
#include"worker.h"
#include"Manager.h"
#include"employee.h"
#include"Boss.h"

#include<string>

WorkerManager::WorkerManager()
{
	//��ʼ������
	this->m_EmpNum = 0;
	this->m_EmpArry = NULL;
}

//�Ѷ��������ͷŵ�
WorkerManager::~WorkerManager()
{
	if (this->m_EmpArry != NULL)
	{
		delete[] this->m_EmpArry;
		this->m_EmpArry = NULL;
	}
}

void WorkerManager::Show_Menu()
{
	cout << "**************************************" << endl;
	cout << "*********��ӭʹ��ְ������ϵͳ*********" << endl;
	cout << "*********** 0.�˳�������� ***********" << endl;
	cout << "*********** 1.����ְ����Ϣ ***********" << endl;
	cout << "*********** 2.��ʾְ����Ϣ ***********" << endl;
	cout << "*********** 3.ɾ����ְְ�� ***********" << endl;
	cout << "*********** 4.�޸�ְ����Ϣ ***********" << endl;
	cout << "*********** 5.����ְ����Ϣ ***********" << endl;
	cout << "*********** 6.���ձ������ ***********" << endl;
	cout << "*********** 7.��������ĵ� ***********" << endl;
	cout << "**************************************" << endl;
	cout << endl;
}

void WorkerManager::ExistSystem()
{
	cout << "Thank You for Using" << endl;
	system("pause");
	exit(0);
}

void WorkerManager::AddEmp()
{
//���жϽ�������
	cout << "Please Enter the Number of Employees Added." << endl;
	int AddNum = 0;
	cin >> AddNum;
	if (AddNum < 1)
	{
		cout << "Go to fuck youself!" << endl;
	}

//�����
	else
	{
		//��������¿ռ��С
		int newSize = this->m_EmpNum + AddNum;
		//�����¿ռ�
		worker ** newSpace = new worker* [newSize];

		//��ԭ�����ȿ���
		if (this->m_EmpArry = NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArry[i];
			}
		}

		//���� ����
		for (int i = 0; i < AddNum; i++)
		{
			int id;
			string name;
			int deptSelect;
			cout << "Please Enter the ID of " << i + 1 << "th" << " new Worker"<< endl;
			cin >> id;
			cout << "Please Enter the Name of " << i + 1 << "th" << " new Worker" << endl;
			cin >> name;
			cout << "Select the position of the new worker" << endl;
			cout << "1.������" << "\n2.����" << "\n3.�ϰ�" << endl;
			cin >> deptSelect;

			//����dpt��ѡ�񴴽�ְ��
			worker* worker = NULL;
			switch (deptSelect)
			{
			case 1:
				worker = new employee(id, name, 1);
			case 2:
				worker = new manager(id, name, 2);
			case 3:
				worker = new boss(id, name, 3);
			default:
				break;
			}

			//��������õ�ָ�뱣��������
			newSpace[this->m_EmpNum + i] = worker;
		}

		//�ͷ� ԭ�ж���
		delete[] this->m_EmpArry;
		//�����¿ռ��ָ��
		this->m_EmpArry = newSpace;
		//���� ����
		this->m_EmpNum = newSize;

	//�������ļ���
		this->save();
		cout << "Added Successfully!!" << endl;
		system("pause");
		system("cls");
	}
}

void WorkerManager::save()
{
	ofstream ofs;
		//������ķ�ʽ���ļ�->д�ļ�
	ofs.open(FILENAME, ios::out);
		//ѭ��д���ļ�
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArry[i]->m_ID << "\t"
			<< this->m_EmpArry[i]->m_Name << "\t"
			<< this->m_EmpArry[i]->m_DeptID << endl;
	}
	
		//�ر��ļ�
	ofs.close();
}