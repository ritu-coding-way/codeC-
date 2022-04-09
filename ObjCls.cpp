#include<iostream>
using namespace std;
class Book{
	public:
		string title;
		string author;
		int pages;
	Book()
	{
		title = "noTitle";
		author = "noAuthor";
		pages = 0;
	}
	Book(string aTitle, string aAuthor, int aPages)
	{
		title = aTitle;
		author = aAuthor;
		pages = aPages;
	}	
/*	Book(){
		cout<<"Creating object"<<endl;
		}*/
	};
	int main()
	{
	Book book1("Harry Potter","JK Rowling", 500);
	Book book2("Lord of the Rings", "Tolkein", 700);
	Book book3;
    //book1.title = "HarryPotter";
   // book1.author = "JK Rowling";
    //book1.pages = 500;
	//cout<<book1.title<<book1.author<<book1.pages;
	cout<<book1.title<<endl;
	cout<<book2.author<<endl;
	book2.pages=680;//updated
	cout<<book2.pages<<endl;
	cout<<book3.title<<endl;
	return 0;
	}