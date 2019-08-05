#ifndef _DB_CONNECTER_
#define _DB_CONNECTER_
#include "model.h"

class DbConnecter
{
public:
	DbConnecter();
	~DbConnecter();

private:
	int add(const Code &code);
	int add(const User &user);
	int rmv(const Code &code);
	int rmv(const User &user);
	int mod(const Code &code);
	int mod(const User &user);
	int dsp(const Code &code);
	int dsp(const User &user);
};

DbConnecter::DbConnecter()
{
}

DbConnecter::~DbConnecter()
{
}

#endif // !_DB_CONNECTER_

