//
// Chapter08 Exercise02
//

#include <iostream>
#include <string>

using namespace std;

istream& test_cin(istream &is)
{
    string buf;
    while (is >> buf)
        cout << buf << endl;
    is.clear();
    return is;
}

int main()
{
    istream& is = test_cin(cin);
    cout << is.rdstate() << endl;
    return 0;
}
