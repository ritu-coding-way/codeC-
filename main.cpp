#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
/*int getMax(int num1,int num2){
	int result;
	if (num1 > num2){
		result = num1;
	}else{
			result = num2;
	}
	return result;
}*/
int main(){
	int num1, num2, result;
	char op;
	cout<< "Enter first  number:";
	cin>> num1;
	cout<< "Enter operator:";
	cin>> op;
	cout<< "Enter second  number:";
	cin>> num2;
	if(op == '+'){
		result = num1 + num2;
	}else if(op == '-'){
		result = num1 - num2;
	}else if(op == '/'){
		result = num1 / num2;
	}else if(op == '*'){
		result = num1 * num2;
	}else{
		cout<<"Invalid operation";
	}
	cout<<result;
	return 0;
}
