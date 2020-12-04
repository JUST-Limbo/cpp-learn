#include <iostream>
using namespace std;
#define MAX 1000
//�����ϵ�˼���Ŷ����
struct Person
{
	// ����
	string m_Name;
	// �Ա�
	int m_sex;
	// ����
	int m_Age;
	// �绰
	string m_Phone;
	// סַ
	string m_Addr;
};

//���ͨѶ¼�ṹ��
struct Addressbooks {
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];
	// ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};

// 1.�����ϵ��
void addPerson(Addressbooks* abs) {
	if (abs->m_Size == MAX) {
		cout << "ͨѶ¼����,�޷����" << endl;
		return;
	}
	else {
		string name;
		cout << "����������:" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		cout << "�������Ա�:" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_sex = sex;
				break;
			}
			cout << "��������,����������" << endl;
		}

		cout << "����������:" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		cout << "��������ϵ�绰" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		cout << "�������ͥסַ" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		abs->m_Size++;
		cout << "��ӳɹ�" << endl;

		system("pause");
		system("cls");
	}
}

//�˵�����
void showMenu() {
	cout << "1�������ϵ��" << endl;
	cout << "2����ʾ��ϵ��" << endl;
	cout << "3��ɾ����ϵ��" << endl;
	cout << "4��������ϵ��" << endl;
	cout << "5���޸���ϵ��" << endl;
	cout << "6�������ϵ��" << endl;
	cout << "0���˳�ͨѶ¼" << endl;
}

int main() {

	Addressbooks abs;
	abs.m_Size = 0;

	int select = 0;
	while (true)
	{
		//�˵�����
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1:	// �����ϵ��
			addPerson(&abs);
			break;
		case 2:	// ��ʾ��ϵ��
			break;
		case 3:	// ɾ����ϵ��
			break;
		case 4:	// ������ϵ��
			break;
		case 5:	// �޸���ϵ��
			break;
		case 6:	// �����ϵ��
			break;
		case 0:	// �˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	return 0;
}