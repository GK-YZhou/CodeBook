#include "model.h"
#include "manager.h"
#include "db_connecter.h"
#include "code_manager.h"
#include <iostream>
CodeManager::CodeManager()
{
	DbConnecter *dbP = new DbConnecter();
	std::cout << "数据库已经链接" << std::endl;
}

CodeManager::~CodeManager()
{
	delete[] dbP;
	std::cout << "数据库链接已关闭" << std::endl;
}

int CodeManager::add(Code &code)
{
	
}