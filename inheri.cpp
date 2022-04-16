#include<iostream>
using namespace std;

class Painter{
	public:
		void makePaint(){
			cout<<"The Painter make light paint"<<endl;
		} 
		void makedPaint(){
			cout<<"The Painter make dark paint"<<endl;
		} 
		void makedesignerPaint(){
			cout<<"The Painter make designer paint"<<endl;
		} 
};

class AustralianPainter : public Painter{
	void makePOP(){
		cout<<"The Painter make light paint"<<endl;
	} 
};
int main()
{
	Painter painter;
	painter.makePaint();
	
	AustralianPainter australianPainter;
	australianPainter.makePaint();
	return 0;
}