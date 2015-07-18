//
// Chapter15 Exercose22
//

#include <string>

class ImgFileType {
public:
	ImgFileType() = default;
	ImgFileType(const std::string& n): name(n){	}
	
	virtual double size() = 0;
	virtual ~ImgFileType() = default;

private:
	std::string name;
};

class Gif : public ImgFileType
{
	Gif() = default;
	
	~Gif() = default override; 
};

class Tiff : public ImgFileType
{
	Tiff() = default;
	
	~Tiff() = default override; 
};

class Jpeg : public ImgFileType
{
	Jpeg() = default;
	
	~Jpeg() = default override; 
};

class Bmp : public ImgFileType
{
	Bmp() = default;
	
	~Bmp() = default override; 
};

int main()
{
	return 0;
}
