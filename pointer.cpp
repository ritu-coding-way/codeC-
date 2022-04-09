#include<iostream>
using namespace std;
int main()
{
	int Age = 19;
	double gpa = 2.7;
	string name = "Mike";
	string *pname;
	cout<<"Name Address "<<&name<<endl;
	cout<<"Name Value "<<name<<endl;
	cout<<"Age(it gives address of given memory location to 19) "<<&Age<<endl;
	int *pAge = &Age;
	cout<<"*p gives value saved at given memory location i.e."<<*pAge<<endl;//referencing
	cout<<"Dereferencing "<<pAge<<endl;
	double *pgpa;
//	*pgpa = &gpa;//can not convert double* to 'double' 
	cout<<"address of gpa "<<&gpa<<endl;
	return 0;
}