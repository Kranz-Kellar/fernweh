#pragma once 
#include <map>
#include "Stat.h"

namespace Fernweh {
	class SetOfStats
	{
	public:
		std::map<Stats::Id, Stat> stats;
	};
}

