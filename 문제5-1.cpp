#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;
namespace COMP_POS {
	enum {CLERK, SENIOR, ASSIST, MANAGER};

	void ShowPositionInfo(int pos) {
		switch (pos)
		{
		case CLERK:
			cout << "���" << endl;
			break;
		case SENIOR:
			cout << "����" << endl;
			break;
		case ASSIST:
			cout << "�븮" << endl;
			break;
		case MANAGER:
			cout << "����" << endl;
		}
	}
}
class NameCard {
private:
	char* name;
	char* com;
	char* phone;
	int position;
public:
	NameCard(char* name, char* com, char* phone, int pos): position(pos) {
		this->name = new char[strlen(name) + 1];
		this->com = new char[strlen(com) + 1];
		this->phone = new char[strlen(phone) + 1];
		strcpy(this->name, name);
		strcpy(this->com, com);
		strcpy(this->phone, phone);
	}
	NameCard(const NameCard &ref) : position(ref.position) {
		name = new char[strlen(ref.name) + 1];
		com = new char[strlen(ref.com) + 1];
		phone = new char[strlen(ref.phone) + 1];
		strcpy(name, ref.name);
		strcpy(com, ref.com);
		strcpy(phone, ref.phone);
	}
	void ShowNameCardInfo() {
		cout << "�̸�: " << name << endl;
		cout << "ȸ��: " << com << endl;
		cout << "��ȭ��ȣ: " << phone << endl;
		cout << "����: "; COMP_POS::ShowPositionInfo(position);
		cout << endl;
	}
	~NameCard() {
		delete[]name;
		delete[]com;
		delete[]phone;
	}
};
int main(void) {
	NameCard manClerk((char *)"Lee", (char *)"ABCEng", (char *)"010-1111-2222", COMP_POS::CLERK);
	NameCard copy1 = manClerk;
	NameCard manSENIOR((char*)"Hong", (char*)"OrangeEng", (char*)"010-3333-4444", COMP_POS::SENIOR);
	NameCard copy2 = manSENIOR;
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();
	return 0;
}