#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<list>
#include<iostream>
#include<thread>

using namespace std;

class PrintableObject{	
	public:
		int x,y;
		string ch;
		PrintableObject(int _x,int _y,string _ch): x(_x), y(_y), ch(_ch){}
};

list<list <PrintableObject>> map;



void gotoxy(int x,int y){
	
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD cords ;
	cords.X = x;
	cords.Y = y;
	SetConsoleCursorPosition(h,cords);
	
}
void HideCursor(){
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 1;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(h,&cci);
}
void SetWindowSize(short x, short y,list<list <PrintableObject>> &map){
	PrintableObject add(-1,-1,"");
	for(int y2=0;y2<y;y2++){
		list<PrintableObject> l;
		for(int x2=0;x2<y;x2++){
			l.push_back(add);
		}
		map.push_back(l); 
	}
	for( auto it = map.begin(); it != map.end(); ++it )
{
  for( auto it2 = it.begin(); it2 != it.end(); ++it2 )
{
  cout<<it2;
}
}
	HANDLE wHnd;
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0,0, x, y};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
	
}






