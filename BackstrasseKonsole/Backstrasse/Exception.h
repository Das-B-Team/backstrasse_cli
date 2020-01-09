#include <iostream>





class BackstrasseException :public exception
{
public:
	BackstrasseException(const char* e) : exception(e) {}

};



