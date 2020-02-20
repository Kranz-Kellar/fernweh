#pragma once

#include "Entity.h"
#include <map>


namespace Fernweh {
	class EntityManager
	{
		std::map<int, Entity*> entities;
	public:
		EntityManager() : entities() {}
		Entity* CreateEntity();
		Entity* GetEntity(UniqueId id);
		void RemoveEntity(UniqueId id);

		void UpdateAllEntities(int deltaTime);
	};
}
