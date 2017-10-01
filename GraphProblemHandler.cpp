
#include"OJBase.h"

GraphProblemHandler::GraphProblemHandler() :OJBase()
{
	this->problem_kind = GRAPH_KIND;
}
GraphProblemHandler::GraphProblemHandler(vector<string> URL) : OJBase(URL)
{
	this->problem_kind = GRAPH_KIND;
}
bool GraphProblemHandler::print_title(int index)
{
	if (index >= this->url.size())
	{
		return false;
	}
	cout << this->url[index] << endl;
	return true;
}
bool GraphProblemHandler::load_url()
{
	return true;
}
GraphProblemHandler::~GraphProblemHandler()
{
	return;
}