#pragma once
#ifndef HUMAN_CLASS_H
#define HUMAN_CLASS_H

#include <string>

/*
Filedivi.h ��� ���� : ����
*/

class Human
{
private:						
	char name[20];							
	int age;
	char job[20];

public:
	void human(char name, int age, char job);
	void humanInfo();
}; 
#endif