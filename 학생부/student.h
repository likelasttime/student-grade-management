#include <iostream>
#include <string>
#pragma once
class school;
class student {
private:
	friend class school;									//�б�ģ��
	std::string name;										 //�̸�
	int num, age, kor, math, eng, avg, sum, rank;			//��Ÿ�ɹ�
public:
	student();												//������
	//void input();											//�Է��Լ�
	void output();											//����Լ�
	void modify();											//�����Լ�
	void _delete();											//�����Լ�
	void average();											//�հ�, ��� ����Լ�
	~student();
};