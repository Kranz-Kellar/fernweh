#pragma once
#include "UniqueId.h"
namespace Fernweh {
	class Entity
	{

	public:
		Entity() : id() {}
		UniqueId id;

		void virtual update(int deltaTime) = 0;
	};
}

