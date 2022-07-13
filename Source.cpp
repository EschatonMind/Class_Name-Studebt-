#include<iostream>
#include <cstring>
#include "Student.h"
using namespace std;
int main() {

	char name[] = "Reza";
	Student S1(20, name);
	S1.Print();
	cout << endl;
	name[2] = 'ji';
	Student S2(12, name);
	S2.Print();
	cout << endl;
	S1.Print();
	return 0;
}