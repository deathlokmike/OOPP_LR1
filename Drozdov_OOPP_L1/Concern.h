#pragma once
#include "Car.h"
#include <vector>

class ConcernDrozdov
{
	vector<vehicleDrozdov*> motorshow;
public:
	void add_new();
	void out_console();
	void add_to_file();
	void out_from_file();
	void clear();
	~ConcernDrozdov()
	{
		for (int i = 0; i < motorshow.size(); i++)
		{
			delete motorshow[i];
		}
	}
};