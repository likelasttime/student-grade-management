#include "student.h"
#include "school.h"
using namespace std;

student::student() {
	cout << "�̸� : "; cin >> name;
	cout << "���� : "; cin >> age;
	cout << "���� : "; cin >> kor;
	cout << "���� : "; cin >> math;
	cout << "���� : "; cin >> eng;
	num = 1;
	average();
}

void student::output() {
	cout << "================================" << endl;
	cout << "��ȣ : " << num << endl;
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << endl;
	cout << "���� : " << kor << endl;
	cout << "���� : " << math << endl;
	cout << "���� : " << eng << endl;
	cout << "���� : " << sum << endl;
	cout << "��� : " << avg<< endl;
	cout << "��� : " << rank << endl;
}

void student::modify() {
	int n;
	cout << "1. �̸�\t2. ����\t3. ����\t4. ����\t5. ����" << endl;
	cout << "��ȣ : "; cin >> n;
	switch (n) {
	case 1:
		cout << "�Է°� : ";
		cin >> name;
		break;
	case 2:
		cout << "�Է°� : ";
		cin >> age;
		break;
	case 3:
		cout << "�Է°� : ";
		cin >> kor;
		break;
	case 4:
		cout << "�Է°� : ";
		cin >> math;
		break;
	case 5:
		cout << "�Է°� : ";
		cin >> eng;
		break;
	default:
		cout << "�ùٸ� ���� �ƴմϴ�." << endl;
		break;
	}
	average();
}

void student::_delete() {
	delete this;
}

void student::average() {
	sum = kor + math + eng;
	avg = sum / 3;
}

student:: ~student() {
	cout << "�л� ����~!"<<endl;
}