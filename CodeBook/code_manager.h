#ifndef _CODE_MANAGER_
#define _CODE_MANAGER_
#include "model.h"
#include "manager.h"

class CodeManager :public manager
{
public:
	CodeManager();
	~CodeManager();
	int add(Code &code);
	int rmv(int codeID);
	int mod(Code &code);
	int dsp(int codeID);
private:

};
#endif // !_CODE_MANAGER_

