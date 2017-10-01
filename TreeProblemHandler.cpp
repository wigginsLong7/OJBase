#include"OJBase.h"

TreeProblemHandler::TreeProblemHandler() :OJBase()
{
	this->problem_kind = TREE_KIND;
}
TreeProblemHandler::TreeProblemHandler(vector<string> URL) : OJBase(URL)
{
	this->problem_kind = TREE_KIND;
}
bool TreeProblemHandler::print_title(int index)
{
	if (index >= this->url.size())
	{
		return false;
	}
	cout << this->url[index] << endl;
	return true;
}
bool TreeProblemHandler::load_url()
{
	return true;
}
TreeProblemHandler::~TreeProblemHandler()
{
	return;
}