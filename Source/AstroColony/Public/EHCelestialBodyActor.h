#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EHSaveGameInterface.h"
#include "EHCelestialBodyActor.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHCelestialBodyActor : public AActor, public IEHSaveGameInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SerializedActorUniqueName;
    
public:
    AEHCelestialBodyActor();
    
    // Fix for true pure virtual functions not being implemented
};

