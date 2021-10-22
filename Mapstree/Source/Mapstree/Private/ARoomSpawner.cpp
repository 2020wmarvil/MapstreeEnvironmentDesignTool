#include "ARoomSpawner.h"

#include "/Users/2020w/Desktop/MapstreeEnvironmentDesignTool/Mapstree/Source/Mapstree/Public/ARoomActor.h"

AARoomSpawner::AARoomSpawner() {
	PrimaryActorTick.bCanEverTick = true;
}

void AARoomSpawner::BeginPlay() { // TODO: move this functionality to be async
	Super::BeginPlay();

	UWorld* world = GetWorld();
	world->SpawnActor<AARoomActor>(testRoom, FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f), FActorSpawnParameters());

	// TODO: pick a random wall 0-3 inclusive

	// spawn a tunnel there of arbitrary length
	world->SpawnActor<AARoomActor>(testPassage, FVector(-890.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f), FActorSpawnParameters());
	// TODO: position correctly

	// spawn a new room at the end of the tunnel
	world->SpawnActor<AARoomActor>(testRoom, FVector(-2358.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f), FActorSpawnParameters());
	// TODO: position correctly
}

void AARoomSpawner::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

