#include "canary.h"
#include<iostream>
#include<conio.h>
using namespace std;

class asterisct :public PrintableObject{
	public:	
		asterisct(int,int,string);	
	
};
asterisct::asterisct(int _x,int _y,string _ch) : PrintableObject(_x,_y,_ch){
}

int main(){
	
	SetWindowSize(30,30,map);

	asterisct a(0,0,"*");
	a.x = 1;
	
	getch();
	return 0;
}