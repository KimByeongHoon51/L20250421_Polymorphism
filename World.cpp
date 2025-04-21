#include "World.h"
#include "Actor.h"
#include "Wall.h"
#include "Floor.h"

UWorld::UWorld()
{
}

UWorld::~UWorld()
{
}

void UWorld::Run()
{
	while (true)
	{
		for (auto Actor : Actors)
		{
			Actor->Tick();
		}
	}
}

void UWorld::SpawnActor(AActor* SpawnedActor)
{
	Actors.push_back(SpawnedActor);
}
