#include "student.h"
#include "school.h"
using namespace std;

int main() {
	school *sc = new school("�����");							// ��ü ������ ����
	int i;
	while (1) {
		cout << "===========�л��μ������α׷�===========" << endl;
		cout << "1. �л� ���� �Է�" << endl;
		cout << "2. �л� ���� ���" << endl;
		cout << "3. �л� ���� ����" << endl;
		cout << "4. �л� ���� ����" << endl;
		cout << "5. ���α׷� ����" << endl;
		cout << "��  ȣ : "; 
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
			cout << "�ùٸ� ���� �ƴմϴ�." << endl;
		}
	}
}