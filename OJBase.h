
#include<iostream>
#include<string>
#include"AbstractEnum.h"
#include<vector>
using namespace std;

class OJBase
{

public:
	OJBase();
	OJBase(vector<string>);
	virtual bool print_title(int);
	virtual bool load_url() = 0;
	~OJBase();

protected:
	vector<string> url;
	int problem_kind;

};


class TreeProblemHandler : public OJBase
{
public:
	TreeProblemHandler();
	TreeProblemHandler(vector<string>);
	virtual bool print_title(int);
	virtual bool load_url();
	~TreeProblemHandler();

protected:
	vector<string> url;
	int problem_kind;

};

class StringProblemHandler : public OJBase
{
public:
	StringProblemHandler();
	StringProblemHandler(vector<string>);
	virtual bool print_title(int);
	virtual bool load_url();
	~StringProblemHandler();

protected:
	vector<string> url;
	int problem_kind;

private:
	string string_processing();
	bool compare(string , string);

};

class ArrayProblemHandler : public OJBase
{
public:
	ArrayProblemHandler();
	ArrayProblemHandler(vector<string>);
	virtual bool print_title(int);
	virtual bool load_url();
	~ArrayProblemHandler();

protected:
	vector<string> url;
	int problem_kind;

};

class GraphProblemHandler : public OJBase
{
public:
	GraphProblemHandler();
	GraphProblemHandler(vector<string>);
	virtual bool print_title(int);
	virtual bool load_url();
	~GraphProblemHandler();

protected:
	vector<string> url;
	int problem_kind;

};
