//
// Chapter12 Exercise22
//

#ifndef EX22_h
#define EX22_H

#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include <exception>

using std::vector; using std::string; using std::initializer_list; 
using std::make_shared; using std::out_of_range; using std::shared_ptr;
using std::weak_ptr; using std::size_t; 

class ConstStrBlobPtr;

class StrBlob {
public:
	typedef vector<string>::size_type size_type;
	friend class ConstStrBlobPtr;
	
	ConstStrBlobPtr begin() const;
	ConstStrBlobPtr end() const;

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

class ConstStrBlobPtr {
public:
	ConstStrBlobPtr():curr(0) { }
    ConstStrBlobPtr(const StrBlob &a, size_t sz = 0):
			wptr(a.data), curr(sz) { }
    bool operator!=(const ConstStrBlobPtr& p) {return p.curr != curr; }
    
	const string& deref() const {
        auto p = check(curr, "dereference past end");
        return (*p)[curr];
    }
    
	ConstStrBlobPtr& incr() {
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

ConstStrBlobPtr StrBlob::begin() const 
{
    return ConstStrBlobPtr(*this);
}
ConstStrBlobPtr StrBlob::end() const 
{
    auto ret = ConstStrBlobPtr(*this, data->size());
	return ret;
}


#endif
