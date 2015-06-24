//
// Chapter14 Exercise32
//

#ifndef ex32_h
#define ex32_h

class StrBlobPtr;

class StrBlobPtr_pointer 
{
public:
	StrBlobPtr_pointer() = default;
	StrBlobPtr_pointer(StrBlobPtr *p) : pointer(p) {}

private:
	StrBlobPtr* pointer = nullptr;
};

#endif
