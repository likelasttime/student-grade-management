#include <iostream>
#include <string>
#pragma once
class school;
class student {
private:
	friend class school;									//학교친구
	std::string name;										 //이름
	int num, age, kor, math, eng, avg, sum, rank;			//기타맴버
public:
	student();												//생성자
	//void input();											//입력함수
	void output();											//출력함수
	void modify();											//수정함수
	void _delete();											//삭제함수
	void average();											//합계, 평균 계산함수
	~student();
};