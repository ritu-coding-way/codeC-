# codeC-
it contains coding with c++.
#include<iostream>
  using namespace std;
  void main(){
  cout<<"   /|"<<endl;
  cout<<"  / |"<<endl;
  cout<<" /  |"<<endl;
  cout<<"/___|"<<endl;
  cout<<"|   |"<<endl;
  cout<<"| []|"<<endl;
  cout<<"/////"<<endl;
  cout<<"welcome"<<endl;
  }
  
 # include<iostream>
  using namespace std;
  int main(){
  string phrase = "Hello World";
  phrase[0] = 'G';
  cout<<phrase;
  cout<<phrase.find("World");
  cout<<phrase.substr(6,2);
  return 0;
  }
   
 # include<iostream>
  using namespace std;
  int main(){
  cout<<5 + 70;
  cout<<4 + 5 * 10;
  cout<<10.0 / 3.0;
  cout<<pow(3,2);
  cout<<sqrt(64);
  cout<<round(4.1);
  cout<<round(4.6);
  cout<<ceil(4.5);
  cout<<floor(4.8);
  cout<<fmax(5,10);
  cout<<fmin(5,10);
  
  # include<iostream>
  using namespace std;
  void sayHi(){
  cout<<"Hello Guys";
  }
  int main()
  {
  sayHi();
  cout<<"Top";
  sayHi();
  cout<<"Bottom";
  return 0;
  }
  
  # include<iostream>
  using namespace std;
  void sayHi(string name, int age);
  int main()
  {
  sayHi("Tony",50);
  return 0;
  }
  void sayHi(string name, int age){
  cout<<"Hello"<<name<<"You are"<<age;
  }
  
 # include<iostream>
  using namespace std;
 /* double cube(double num){
  return num*num*num;
  }*/
  int main(){
 // cout<<cube(4.0);
  bool isMale = true;
  if(isMale){
  cout<<"You are a male.";
  return 0;
  }
  }
