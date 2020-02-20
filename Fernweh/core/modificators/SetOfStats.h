#pragma once 
#include <map>
#include "Stat.h"

namespace Fernweh {
	class SetOfStats
	{
		std::map<Stats::Id, Stat> stats;
	};
}

