#include"OJBase.h"

StringProblemHandler::StringProblemHandler() :OJBase()
{
	this->problem_kind = STRING_KIND;
}
StringProblemHandler::StringProblemHandler(vector<string> URL) : OJBase(URL)
{
	this->problem_kind = STRING_KIND;
}
bool StringProblemHandler::print_title(int index)
{
	if (index >= this->url.size())
	{
		return false;
	}
	cout << this->url[index] << endl;
	return true;
}
bool StringProblemHandler::load_url()
{
	return true;
}
StringProblemHandler::~StringProblemHandler()
{
	return;
}