#include <iostream>
#include <string>

using namespace std;

int main()
{
	unsigned aCnt, eCnt, iCnt, oCnt, uCnt = 0;
	char ch;

	while(cin >> ch)
	{
		if(ch == 'a' || ch == 'A')
			aCnt++;
		if(ch == 'e' || ch == 'E')
			eCnt++;
		if(ch == 'i' || ch == 'I')
			iCnt++;
		if(ch == 'o' || ch == 'O')
			oCnt++;
		if(ch == 'u' || ch == 'U')
			uCnt++;
	}

	cout << "A:" << aCnt << '\n'
		 << "E:" << eCnt << '\n'
		 << "I:" << iCnt << '\n'
		 << "O:" << oCnt << '\n'
		 << "U:" << uCnt << endl;

	return 0;
}