#pragma once
#ifndef HUMAN_CLASS_H
#define HUMAN_CLASS_H

#include <string>

/*
Filedivi.h 헤더 파일 : 선언
*/

class Human
{
private:						
	char name[20];							
	int age;
	char job[20];

public:
	void human(const char *pname, int aage, const char *pjob);
	void humanInfo();
}; 
#endif