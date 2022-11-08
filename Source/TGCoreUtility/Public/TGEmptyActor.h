#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TGEmptyActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class TGCOREUTILITY_API ATGEmptyActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Scene;
    
    ATGEmptyActor();
};

