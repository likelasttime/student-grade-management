#include "school.h"
#include "student.h"
using namespace std;

school::~school() {
	cout << "소멸자 실행" << endl;
}

void school::in() {
	stu[count] = new student;
	//stu[count]->input();
	stu[count]->num += count;
	for (int i = 0; i < count; i++) {
		if (stu[i] == NULL)
			stu[count]->num -= 1;
	}
	count++;
}

void school::out() {
	for (int i = 0; i < count; i++) {
		if(stu[i] !=NULL)
			stu[i]->output();
	}
	cout<<endl;
}

void school::mod() {
	int n;
	cout << "수정할 번호를 입력하시오 : "; cin >> n;
	for (int i = 0; i < count; i++) {
		if (stu[i] != NULL) {
			if (stu[i]->num == n) 
				stu[i]->modify();
		}
	}

}

void school::del() {
	int n;
	cout << "삭제할 번호를 입력하시오 : "; cin >> n;
	for (int i = 0; i < count; i++) {
		if (stu[i] != NULL) {
			if (stu[i]->num == n) {
				stu[i]->_delete();
				stu[i] = NULL;
			}
		}
	}
	n = 1;
	for (int i = 0; i < count; i++) {
		if (stu[i] != NULL) {
			stu[i]->num = n;
			n++;
		}
	}
}

void school::_rank() {
	for (int i = 0 ; i < count ; i++) {
		if (stu[i] != NULL) {
			stu[i]->rank = 1;
			for (int j = 0; j < count; j++) {
				if (stu[j] != NULL) {
					if (stu[i]->avg < stu[j]->avg)
						stu[i]->rank++;
				}
			}
		}
	}

}