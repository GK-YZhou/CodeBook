#include "model.h"
#include "manager.h"
#include "db_connecter.h"
#include "code_manager.h"
#include <iostream>
CodeManager::CodeManager()
{
	DbConnecter *dbP = new DbConnecter();
	std::cout << "���ݿ��Ѿ�����" << std::endl;
}

CodeManager::~CodeManager()
{
	delete[] dbP;
	std::cout << "���ݿ������ѹر�" << std::endl;
}

int CodeManager::add(Code &code)
{
	
}