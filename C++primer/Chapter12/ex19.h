//
// Chapter12 Exercise19
//

#ifndef EX19_H
#define EX19_H

#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include <exception>

using std::vector; using std::string; using std::initializer_list; 
using std::make_shared; using std::out_of_range; using std::shared_ptr;
using std::weak_ptr; using std::size_t; 

class StrBlobPtr;

class StrBlob {
public:
	typedef vector<string>::size_type size_type;
	friend class StrBlobPtr;
	
	StrBlobPtr begin() ;
	StrBlobPtr end();

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
	shared_ptr<vector<string>> data;	
};


class StrBlobPtr {
public:
	StrBlobPtr():curr(0) { }
    StrBlobPtr(StrBlob &a, size_t sz = 0):
			wptr(a.data), curr(sz) { }
    bool operator!=(const StrBlobPtr& p) {return p.curr != curr; }
    
	string& deref() const {
        auto p = check(curr, "dereference past end");
        return (*p)[curr];
    }
    
	StrBlobPtr& incr() {
        check(curr, "increment past end of StrBlobPtr");
        ++curr;
        return *this;
    }

private:
    shared_ptr<vector<string>> 
	check(size_t i, const string &msg) const 
	{
        auto ret = wptr.lock();
        if (!ret) 
			throw std::runtime_error("unbound StrBlobPtr");
        if (i >= ret->size()) 
			throw std::out_of_range(msg);
        return ret;
    }
    weak_ptr<vector<string>> wptr;
    size_t curr;
};

StrBlobPtr StrBlob::begin()
{
	return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end()
{
	auto ret = StrBlobPtr(*this, data->size());
	return ret;
}


#endif
