#include"Boss.h"


boss::boss(int ID, string name, int DeptID)
{
	this->m_ID = ID;
	this->m_Name = name;
	this->m_DeptID = DeptID;
}

//��ʾ������Ϣ
void boss::show_Info()
{
	cout << "ְ����ţ�" << this->m_ID
		<< "\nthe Name of Deployee" << this->m_Name
		<< "\nPosition: " << this->get_DeptName()
		<< "\n'Responsiblity: Manage all the Affairs of the Company" << endl;

}

//��ȡ��λ����
string boss::get_DeptName()
{
	return "Deployee";
}