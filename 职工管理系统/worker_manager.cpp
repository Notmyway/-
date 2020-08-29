#include"worker_manager.h"
#include"worker.h"
#include"Manager.h"
#include"employee.h"
#include"Boss.h"

#include<string>

WorkerManager::WorkerManager()
{
	//初始化属性
	this->m_EmpNum = 0;
	this->m_EmpArry = NULL;
}

//把堆区函数释放掉
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
	cout << "*********欢迎使用职工管理系统*********" << endl;
	cout << "*********** 0.退出管理程序 ***********" << endl;
	cout << "*********** 1.增加职工信息 ***********" << endl;
	cout << "*********** 2.显示职工信息 ***********" << endl;
	cout << "*********** 3.删除离职职工 ***********" << endl;
	cout << "*********** 4.修改职工信息 ***********" << endl;
	cout << "*********** 5.查找职工信息 ***********" << endl;
	cout << "*********** 6.按照编号排序 ***********" << endl;
	cout << "*********** 7.清空所有文档 ***********" << endl;
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
//先判断接受条件
	cout << "Please Enter the Number of Employees Added." << endl;
	int AddNum = 0;
	cin >> AddNum;
	if (AddNum < 1)
	{
		cout << "Go to fuck youself!" << endl;
	}

//再添加
	else
	{
		//计算添加新空间大小
		int newSize = this->m_EmpNum + AddNum;
		//开辟新空间
		worker ** newSpace = new worker* [newSize];

		//将原来的先拷贝
		if (this->m_EmpArry = NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArry[i];
			}
		}

		//批量 输入
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
			cout << "1.操作工" << "\n2.经理" << "\n3.老板" << endl;
			cin >> deptSelect;

			//根据dpt的选择创建职工
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

			//把这个建好的指针保存于数组
			newSpace[this->m_EmpNum + i] = worker;
		}

		//释放 原有堆区
		delete[] this->m_EmpArry;
		//更改新空间的指向
		this->m_EmpArry = newSpace;
		//更新 人数
		this->m_EmpNum = newSize;

	//保存于文件中
		this->save();
		cout << "Added Successfully!!" << endl;
		system("pause");
		system("cls");
	}
}

void WorkerManager::save()
{
	ofstream ofs;
		//用输出的方式打开文件->写文件
	ofs.open(FILENAME, ios::out);
		//循环写入文件
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArry[i]->m_ID << "\t"
			<< this->m_EmpArry[i]->m_Name << "\t"
			<< this->m_EmpArry[i]->m_DeptID << endl;
	}
	
		//关闭文件
	ofs.close();
}