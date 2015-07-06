//
// Chapter07 Exercise32
//

#ifndef EX32_h
#define EX32_h

#include <iostream>
#include <string>
#include <vector>

class Screen;

class Window_mgr{
	
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex);
	
private:
	std::vector<Screen> screens;
};


class Screen{
	friend void Window_mgr::clear(ScreenIndex);

public:
	typedef std::string::size_type pos;

	Screen() = default;
	Screen(pos ht, pos wd, char c): height(ht), width(wd),
		contents(ht * wd, c){ }
	
	char get() const
		{return contents[cursor];}
	inline char get(pos ht, pos wd) const;
	
	inline Screen &move(pos r, pos c);
	inline Screen &set(char c);
	
	Screen& display(std::ostream &os)
	{ do_display(os); return *this; }
	const Screen& display(std::ostream &os) const 
	{ do_display(os); return *this; }
    
private:
	void do_display(std::ostream &os) const{os << contents;}

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
};

inline Screen& Screen::move(pos r, pos c)
{
    cursor = r*width + c;
    return *this;
}

inline Screen& Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];
	s.contents = std::string(s.height * s.width, ' ');
}

#endif
