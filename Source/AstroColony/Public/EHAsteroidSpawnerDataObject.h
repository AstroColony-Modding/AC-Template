#pragma once
#include "CoreMinimal.h"
#include "EHDataObject.h"
#include "UObject/NoExportTypes.h"
#include "EHAsteroidSpawnerDataObject.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHAsteroidSpawnerDataObject : public UEHDataObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> AsteroidTransforms;
    
    UEHAsteroidSpawnerDataObject();
};

