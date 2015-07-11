//
// Chapter12 Exercise02
//

#ifndef EX02_h
#define EX02_h

#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include <exception>

using std::vector; using std::string; using std::initializer_list; 
using std::make_shared; using std::out_of_range;

class StrBlob {
public:
	typedef vector<string>::size_type size_type;

	StrBlob():data(make_shared<vector<string>>()) { }
    StrBlob(std::initializer_list<string> il):
			data(make_shared<vector<string>>(il)) { }

	size_type size() const { return data->size();}
	bool empty() const {return data->empty();}

	void push_back(const string &t) {data->push_back(t);}
	
	void pop_back()
	{
		check(0, "pop_back on empty StrBolb");
		data->pop_back();
	}

	const string& front() const
	{
		check(0, "front on empty StrBolb");
		return data->front();
	}
		
	const string& back() const
	{
		check(0, "back on empty StrBolb");
		return data->back();
	}

private:
	void check(size_type i, const std::string &msg) const
	{
		if(i >= data->size())
			throw out_of_range(msg);
	}

private:
	std::shared_ptr<vector<string>> data;	
};

#endif
