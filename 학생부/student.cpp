#include "student.h"
#include "school.h"
using namespace std;

student::student() {
	cout << "이름 : "; cin >> name;
	cout << "나이 : "; cin >> age;
	cout << "국어 : "; cin >> kor;
	cout << "수학 : "; cin >> math;
	cout << "영어 : "; cin >> eng;
	num = 1;
	average();
}

void student::output() {
	cout << "================================" << endl;
	cout << "번호 : " << num << endl;
	cout << "이름 : " << name << endl;
	cout << "나이 : " << age << endl;
	cout << "국어 : " << kor << endl;
	cout << "수학 : " << math << endl;
	cout << "영어 : " << eng << endl;
	cout << "총점 : " << sum << endl;
	cout << "평균 : " << avg<< endl;
	cout << "등수 : " << rank << endl;
}

void student::modify() {
	int n;
	cout << "1. 이름\t2. 나이\t3. 국어\t4. 수학\t5. 영어" << endl;
	cout << "번호 : "; cin >> n;
	switch (n) {
	case 1:
		cout << "입력값 : ";
		cin >> name;
		break;
	case 2:
		cout << "입력값 : ";
		cin >> age;
		break;
	case 3:
		cout << "입력값 : ";
		cin >> kor;
		break;
	case 4:
		cout << "입력값 : ";
		cin >> math;
		break;
	case 5:
		cout << "입력값 : ";
		cin >> eng;
		break;
	default:
		cout << "올바른 값이 아닙니다." << endl;
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
	cout << "학생 삭제~!"<<endl;
}