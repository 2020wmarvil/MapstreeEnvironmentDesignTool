#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ARoomSpawner.generated.h"


UCLASS()
class MAPSTREE_API AARoomSpawner : public AActor {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere) UClass* testRoom;
	UPROPERTY(EditAnywhere) UClass* testPassage;
	
public:	
	AARoomSpawner();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
};
