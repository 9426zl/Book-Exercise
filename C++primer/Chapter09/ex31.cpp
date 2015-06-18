//
// Chapter09 Exercise31
//

#include <iostream>
#include <list>
#include <forward_list>

using namespace std;

int main()
{
	list<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	auto iter = vi.begin();
	while(iter != vi.end())
	{
		if(*iter % 2) {
			iter = vi.insert(iter, *iter);
			advance(iter, 2);
		} else
			iter = vi.erase(iter);
	}

	cout << "list: ";
	for(auto i : vi)
		cout << i << " ";

	cout << endl;

	forward_list<int> vfl = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	auto iter = vfl.begin(), prev = vfl.before_begin();

	while (iter != vfl.end())
	{    
        if (*iter % 2) {        
            iter = vfl.insert_after(prev, *iter);   
            advance(iter, 2);
            advance(prev, 2);
        } else        
            iter = vfl.erase_after(prev);
    }

	cout << "forward_list:"
    for (auto i : vfl)
        cout << i << " ";
	cout << endl;    

	return 0;
}