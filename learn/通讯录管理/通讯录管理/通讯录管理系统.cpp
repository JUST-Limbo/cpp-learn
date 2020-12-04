#include <iostream>
using namespace std;
#define MAX 1000
//设计联系人及饿哦固体
struct Person
{
	// 姓名
	string m_Name;
	// 性别
	int m_sex;
	// 年龄
	int m_Age;
	// 电话
	string m_Phone;
	// 住址
	string m_Addr;
};

//设计通讯录结构体
struct Addressbooks {
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];
	// 通讯录中当前记录联系人个数
	int m_Size;
};

// 1.添加联系人
void addPerson(Addressbooks* abs) {
	if (abs->m_Size == MAX) {
		cout << "通讯录已满,无法添加" << endl;
		return;
	}
	else {
		string name;
		cout << "请输入姓名:" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		cout << "请输入性别:" << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_sex = sex;
				break;
			}
			cout << "输入有误,请重新输入" << endl;
		}

		cout << "请输入年龄:" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		cout << "请输入联系电话" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		cout << "请输入家庭住址" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		abs->m_Size++;
		cout << "添加成功" << endl;

		system("pause");
		system("cls");
	}
}

//菜单界面
void showMenu() {
	cout << "1、添加联系人" << endl;
	cout << "2、显示联系人" << endl;
	cout << "3、删除联系人" << endl;
	cout << "4、查找联系人" << endl;
	cout << "5、修改联系人" << endl;
	cout << "6、清空联系人" << endl;
	cout << "0、退出通讯录" << endl;
}

int main() {

	Addressbooks abs;
	abs.m_Size = 0;

	int select = 0;
	while (true)
	{
		//菜单调用
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1:	// 添加联系人
			addPerson(&abs);
			break;
		case 2:	// 显示联系人
			break;
		case 3:	// 删除联系人
			break;
		case 4:	// 查找联系人
			break;
		case 5:	// 修改联系人
			break;
		case 6:	// 清空联系人
			break;
		case 0:	// 退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	return 0;
}