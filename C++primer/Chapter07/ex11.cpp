//
// Chapter07 Exercise11
//

#include "ex11.h"

using std::cout;using std::endl;

int main()
{
	Sales_data item1;
	print(cout, item1) << endl;

	Sales_data item2("12345678");
	print(cout, item2) << endl;

    Sales_data item3("87654321", 1, 10.00);
    print(std::cout, item3) << std::endl;
    
    Sales_data item4(std::cin);
    print(std::cout, item4) << std::endl;
    
    return 0;
}