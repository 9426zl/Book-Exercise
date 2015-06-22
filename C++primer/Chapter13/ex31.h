//
// Chapter13 Exercise31
//

#ifndef ex31_h
#define ex31_h

#include <iostream>
#include <string>

class HasPtr {
public:
	friend void swap(HasPtr&, HasPtr&);
	friend bool operator<(const HasPtr &lhs, const HasPtr &rhs);

	HasPtr(const std::string &s = std::string()):
	  ps(new std::string(s)), i(0) { }
	HasPtr(const HasPtr &p):
	  ps(new std::string(*p.ps)), i(p.i) { }
	HasPtr& operator=(const HasPtr &rhs)
	{
		auto newp = new std::string(*rhs.ps);
		delete ps;
		ps = newp;
		i =rhs.i;
		return *this;
	}

	~HasPtr()
	{
		delete ps;
	}

private:
	std::string *ps;
	int i;
	std::size_t *use;
};

inline
void swap(HasPtr &lhs, HasPtr &rhs)
{
	using std::swap;
	swap(lhs.ps, rhs.i);
	swap(lhs.i, rhs.i);
}

inline
bool operator<(const HasPtr &lhs, const HasPtr &rhs)
{
	return *lhs.ps < *rhs.ps;
}

#endif