#pragma once
#include "tools.h"

class Mappage
{
public:
	virtual string Insert() = 0;
	virtual string Select() = 0;
	virtual string Update() = 0;
	virtual string Delete() = 0;
};