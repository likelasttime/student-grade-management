#include <iostream>
#include <string>
#pragma once

class student;

class school {
private : 
	std::string name;				//�б��̸�
	student *stu[100];				//�л���ü �����͹迭
	int count;						//�л��� ���� Ƚ��
public :
	school(std::string _name) :name(_name) { count = 0; }				//������
	~school();															//�Ҹ���
	void in();															//�Է��Լ� ����
	void out();															//����Լ� ����
	void mod();															//�����Լ� ����
	void del();															//�����Լ� ����
	void _rank();														//��ũ�Լ�
};