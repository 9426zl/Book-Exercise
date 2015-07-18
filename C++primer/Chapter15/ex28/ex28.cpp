//
// Chapter15 Exercise28
//

#include <iostream>
#include <vector>
#include "quote.h"
#include "bulk_quote.h"

int main()
{
	std::vector<Quote> v;
    for(unsigned i =1; i != 20; ++i)
        v.push_back(Bulk_quote("sss", i , 10, 0.2));

    double total = 0;
    for (const auto& b : v)
    {
        total += b.net_price(10);
    }
    std::cout << total << std::endl;
    
    return 0
}
