#pragma once

#ifndef _MODEL_
#define _MODEL_
#include<string>
using std::string;

/*
用户存储的密码类型
*/
typedef struct
{
	int id;
	int userId;
	string account;
	string psw;
	string info;
}Code;

/*
一条用户数据
*/
typedef struct
{
	int id;
	string name;
	string account;
	string psw;
	Code codeBook[];
}User;

#endif // !_Model_
