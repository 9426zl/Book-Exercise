//
// Chapter07 Exercise31
//

#ifndef ex31_h
#define ex31_h

class Y;

class X{
	Y* y = nullptr;
};

class Y{
	X x;
};

#endif