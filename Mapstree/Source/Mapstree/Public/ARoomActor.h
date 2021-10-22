#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ARoomActor.generated.h"

UCLASS()
class MAPSTREE_API AARoomActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AARoomActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
