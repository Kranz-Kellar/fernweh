#pragma once

namespace Fernweh {
	class Stat
	{
		int statId;
		int value;

		Stat(int statId, int value) : statId(statId), value(value) {}
	};

	namespace Stats {
		enum Id {
			EmptyStat,
			Strength,
			Luck,
			Intelligence,
		};
	}
}



