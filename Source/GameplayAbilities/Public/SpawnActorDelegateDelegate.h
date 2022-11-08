#pragma once
#include "CoreMinimal.h"
#include "SpawnActorDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnActorDelegate, AActor*, SpawnedActor);

