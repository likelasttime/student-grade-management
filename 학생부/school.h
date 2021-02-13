#include <iostream>
#include <string>
#pragma once

class student;

class school {
private : 
	std::string name;				//학교이름
	student *stu[100];				//학생객체 포인터배열
	int count;						//학생이 들어온 횟수
public :
	school(std::string _name) :name(_name) { count = 0; }				//생성자
	~school();															//소멸자
	void in();															//입력함수 보조
	void out();															//출력함수 보조
	void mod();															//수정함수 보조
	void del();															//삭제함수 보조
	void _rank();														//랭크함수
};