#pragma once
#include<iostream>
using namespace std;



class Student {
	string name;
	int age;
public:
	void show() {
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
	}
};