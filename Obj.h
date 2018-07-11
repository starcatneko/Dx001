#pragma once
#include "Geometry.h"
#include "VECTOR2.h"
#include <map>
#include <memory>
#include <vector>

class Obj
{
public:
	Obj();
	~Obj();
protected:

	VECTOR2 pos;
	VECTOR2 size;
	int angle;


private:
};

