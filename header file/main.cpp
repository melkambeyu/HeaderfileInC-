
#include <iostream>
#include "grade.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	int b;
	int c;
	int d;
	int e;

	
	
	
	cout <<"enter the number your in software engineering"  << endl;cin>>a;	
	cout <<"enter the number your result in comparc"  << endl;cin>>b;
	cout <<"enter the grade you have in hci "   << endl;cin>>c;
	cout <<"enter the grade you have in os "   << endl;cin>>d;
	cout <<"enter the grade you have in Android "   << endl;cin>>e;
	
	
	cout <<"This is the grade Report "  << endl; grade(a,b,c,d,e);
	
	
	return 0;
}
