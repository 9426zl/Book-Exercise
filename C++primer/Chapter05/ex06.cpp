#include <iostream>
#include <string>

using namespace std;

int main()
{
	string finalscore;
	int grade, score;

	cin >> grade;
	score = grade / 10;

	finalscore = (score < 6) ? "F"
			   : (score < 7) ? "D"
		       : (score < 8) ? "C"
		       : (score < 9) ? "B" : "A";

	cout << finalscore << endl;

	return 0;
}