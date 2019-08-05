/*
系统元素管理类
*/

#ifndef _MANAGER_
#define _MANAGER_

class manager
{
public:
	manager();
	~manager();
	virtual int add();
	virtual int rmv();
	virtual int mod();
	virtual int dsp();
private:

};

manager::manager()
{
}

manager::~manager()
{
}

#endif // !_MANAGER_
