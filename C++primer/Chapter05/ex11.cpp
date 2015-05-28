#include <iostream>
#include <string>

using namespace std;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0; 
	unsigned uCnt = 0, spCnt = 0, tabCnt = 0, nlCnt = 0;
	char ch;

	while(cin >> ch)
	{
		switch(ch)
		{
			case 'A':
			case 'a': ++aCnt;
					break;
			case 'E':
			case 'e': ++eCnt;
					break;
			case 'I':
			case 'i': ++iCnt;
					break;
			case 'O':
			case 'o': ++oCnt;
					break;
			case 'U':
			case 'u': ++uCnt;
					break;
			case ' ': ++spCnt;
					break;
			case '\t': ++tabCnt;
					break;
			case '\n': ++nlCnt;
					break;
		}
	}

	cout << "A:" << aCnt << '\n'
		 << "E:" << eCnt << '\n'
		 << "I:" << iCnt << '\n'
		 << "O:" << oCnt << '\n'
		 << "U:" << uCnt << '\n'
		 << "Space:" << spCnt << '\n'
		 << "Tab:" << tabCnt << '\n'
		 << "NewLine:" << nlCnt << '\n';

	return 0;
}