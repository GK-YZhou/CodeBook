#pragma once

#ifndef _MODEL_
#define _MODEL_
#include<string>
using std::string;

/*
�û��洢����������
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
һ���û�����
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
