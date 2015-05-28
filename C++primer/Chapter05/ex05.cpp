#include <iostream>

using namespace std;

int main()
{
	int grade, score;
	
	cin >> grade;
	score = grade / 10;

	if(score < 6)
		cout << "F" << endl;
	else if (score < 7)
		cout << "D" << endl;
	else if (score < 8)
		cout << "C" << endl;
	else if (score < 9)
		cout << "B" << endl;
	else
		cout << "A" << endl;

	return 0;
}