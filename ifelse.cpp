#include<iostream>
using namespace std;

/*	bool isMale = true;
	bool isTall = true;
	if(isMale && isTall){
		cout<<"You are tall male."<<endl;
	}else{
		cout<<"You are not tall."<<endl;
	}
	if(isMale || isTall){
		cout<<"You are either tall or male."<<endl;
	}else{
		cout<<"You are not tall."<<endl;
	}
	if(isMale && !isTall){
		cout<<"You are tall male."<<endl;
	}else{
		cout<<"You are not tall."<<endl;
	}
	if(!isMale && !isTall){
		cout<<"You are tall male."<<endl;
	}else{
		cout<<"You are neither tall nor male."<<endl;
	}*/
	string getNumofHour(int HourNum)
	{
	    string dayHours;
		switch(HourNum)
		{
		case 0:
		dayHours = "Morning Hours";
		break;	
		case 1:
		dayHours = "Day Hours";
		break;
		case 2:
		dayHours = "Evening Hours";
		break;
		default:
    	dayHours = "Night Hours";
		}
		return dayHours;
	}
	int main()
	{
		cout<<getNumofHour(3);
	    return 0;
}