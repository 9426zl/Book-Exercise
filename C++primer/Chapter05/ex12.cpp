#include <iostream>
#include <string>

using namespace std;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	unsigned ffCnt = 0, flCnt = 0, fiCnt = 0, flag = 0;
	char ch;

	while(cin >> ch)
	{
		if(flag == 1)
		{
			if (ch == 'f')
				++ffCnt;
			if (ch == 'l')
				++flCnt;
			if (ch == 'i')
				++fiCnt, ++iCnt;
			flag = 0;
			continue;
		}
		if(ch == 'a' || ch == 'A')
			aCnt++, flag = 0;
		if(ch == 'e' || ch == 'E')
			eCnt++, flag = 0;
		if(ch == 'i' || ch == 'I')
			iCnt++, flag = 0;
		if(ch == 'o' || ch == 'O')
			oCnt++, flag = 0;
		if(ch == 'u' || ch == 'U')
			uCnt++, flag =0;
		if(ch == 'f')
			flag = 1;
	}

	cout << "A:" << aCnt << '\n'
		 << "E:" << eCnt << '\n'
		 << "I:" << iCnt << '\n'
		 << "O:" << oCnt << '\n'
		 << "U:" << uCnt << '\n'
		 << "ff" << ffCnt << '\n'
		 << "fl" << flCnt << '\n'
		 << "fi" << fiCnt << endl;

	return 0;
}