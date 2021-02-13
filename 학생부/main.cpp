#include "student.h"
#include "school.h"
using namespace std;

int main() {
	school *sc = new school("광양고");							// 객체 포인터 생성
	int i;
	while (1) {
		cout << "===========학생부성적프로그램===========" << endl;
		cout << "1. 학생 정보 입력" << endl;
		cout << "2. 학생 정보 출력" << endl;
		cout << "3. 학생 정보 수정" << endl;
		cout << "4. 학생 정보 삭제" << endl;
		cout << "5. 프로그램 종료" << endl;
		cout << "번  호 : "; 
		cin >> i;
		switch (i) {
		case 1:
			sc->in();
			break;
		case 2:
			sc->_rank();
			sc->out();
			break;
		case 3:
			sc->mod();
			break;
		case 4:
			sc->del();
			break;
		case 5:
			delete sc;
			return 0;
		default:
			cout << "올바른 값이 아닙니다." << endl;
		}
	}
}