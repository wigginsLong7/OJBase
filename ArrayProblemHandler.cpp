#include"OJBase.h"

ArrayProblemHandler::ArrayProblemHandler() :OJBase()
{
	this->problem_kind = ARRAY_KIND;
}
ArrayProblemHandler::ArrayProblemHandler(vector<string> URL) : OJBase(URL)
{
	this->problem_kind = ARRAY_KIND;
}
bool ArrayProblemHandler::print_title(int index)
{
	if (index >= this->url.size())
	{
		return false;
	}
	cout << this->url[index] << endl;
	return true;
}
bool ArrayProblemHandler::load_url()
{
	return true;
}
ArrayProblemHandler::~ArrayProblemHandler()
{
	return;
}