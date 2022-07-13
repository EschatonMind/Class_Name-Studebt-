#pragma once
#pragma warning(disable : 4996)
#include<iostream>
#include <cstring>
using namespace std;
class Student
{
	int age;
	char* name;
	//int const a;

public:
	Student(Student const &S) /* :a(a) /* Initialisation List */ {
		this->age = S.age;
		this->name = new char[strlen(S.name) + 1]; // Initializing the array where is needed
		strcpy(this->name, S.name);
	}
	Student(int age, char* name)/* :a(a) /* Initialisation List */ {
		this->name = new char[strlen(name) + 1]; // Initializing the array where is needed
		strcpy(this->name, name);		// Deep copy
		this->age = age;

	}
	
	void Print() {
		cout << "name: " << name << " age: " << age;
	}
};

