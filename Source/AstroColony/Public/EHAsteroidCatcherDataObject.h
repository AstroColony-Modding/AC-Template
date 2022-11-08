#pragma once
#include "CoreMinimal.h"
#include "EHAsteroidData.h"
#include "EHDataObject.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EHAsteroidCatcherDataObject.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHAsteroidCatcherDataObject : public UEHDataObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEHAsteroidData AsteroidData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform AsteroidTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CannonRelativeRotation;
    
    UEHAsteroidCatcherDataObject();
};

