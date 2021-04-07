#pragma once
#include<iostream>
using namespace std;






class Teacher {
	string name;
	double salary;
public:
	void show() {
		cout << "Name : " << name << endl;
		cout << "Salary : " << salary << endl;
	}
};