#pragma once
namespace Fernweh {
	class UniqueId
	{ 
		static int nextId;

	public:
		UniqueId() : value() {
			value = nextId++;
		}

		int value;
	};
}



