#include <iostream>
using namespace std;

int readNumber()
{
	int userNumber;
	cin >> userNumber;
	return  userNumber;

}
void writeAnswer(int sum)
{
	cout << "The sum of the two numbers is: " << sum << endl;
}