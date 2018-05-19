#include <iostream>
#include "io.h"
using namespace std;


int main()
{	
	cout << "Enter a number:" << endl;
	int x = readNumber();
	cout << "Enter a second number" << endl;
	int y = readNumber();
	writeAnswer(x+y);
	system("pause");
}

