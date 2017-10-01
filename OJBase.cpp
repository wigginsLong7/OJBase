#include"OJBase.h"

OJBase::OJBase()
{
	this->url.clear();
	this->problem_kind = NULL_KIND;
}
OJBase::OJBase(vector<string> URL)
{
	if (URL.size() > 0)
	{
		this->url = URL;
	}
	this->problem_kind = NULL_KIND;
}
bool OJBase::print_title(int index)
{
	if (index >= this->url.size())
	{
		return false;
	}
	cout << this->url[index] << endl;
	return true;
}
OJBase::~OJBase()
{
	return;
}