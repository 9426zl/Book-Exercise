#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2, s;
	int cnt = 1, maxCnt = 1;

	while(cin >> s2)
	{
		if (s1 == s2)
		{
			++cnt;
			if(cnt > maxCnt)
			{
				maxCnt = cnt;
				s = s1;
			}
		}
		else
		{
			if(cnt > maxCnt)
			{
				maxCnt = cnt;
				s = s1;
			}
			cnt = 1;
		}
		s1 = s2;
	}
	if (maxCnt != 1)
		cout << s <<" shows " << maxCnt << " times" << endl;

	return 0;
}
