//
// Chapter07 Exercise31
//

#ifndef EX31_h
#define EX31_h

class Y;

class X{
	Y* y = nullptr;
};

class Y{
	X x;
};

#endif
