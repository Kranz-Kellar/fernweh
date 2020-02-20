#include "EntityManager.h"

using namespace Fernweh;

Entity* Fernweh::EntityManager::CreateEntity()
{
	////create entity factory
	//Entity* ent = new Entity();
	//entities[ent->id.value] = ent;
	//return ent;

	return nullptr;
}

Entity* Fernweh::EntityManager::GetEntity(UniqueId id)
{
	if (entities.find(id.value) != entities.end()) {
		return entities[id.value];
	}
	return nullptr;
}

void Fernweh::EntityManager::RemoveEntity(UniqueId id)
{
	if (entities.find(id.value) != entities.end()) {
		entities.erase(entities.find(id.value));
	}
}

void Fernweh::EntityManager::UpdateAllEntities(int deltaTime)
{
	for (auto entity : entities) {
		entity.second->update(deltaTime);
	}
}
