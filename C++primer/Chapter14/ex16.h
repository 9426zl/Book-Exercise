//
// Chapter14 Exericse16
//

#ifndef ex16_h
#define ex16_h

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
	friend bool operator==(const StrBlob&, const StrBlob&);
	friend bool operator!=(const StrBlob&, const StrBlob&);

	StrBlobPtr begin() {return StrBlobPtr(*this);}
	StrBlobPtr end()
	{	
		auto ret = StrBlobPtr(*this, data->size());
		return ret;
	}

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

bool operator==(const StrBlob &lhs, const StrBlob &rhs)
{
	return *lhs.data == *rhs.data;
}

bool operator!=(const StrBlob &lhs, const StrBlob &rhs)
{
	return !(lhs == rhs);
}

class StrBlobPtr {
public:
	friend bool operator==(const StrBlobPtr&, const StrBlobPtr&);
	friend bool operator!=(const StrBlobPtr&, const StrBlobPtr&);

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

bool operator==(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
	return lhs.curr == rhs.curr;
}

bool operator!=(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
	return !(lhs == rhs);
}

#endif