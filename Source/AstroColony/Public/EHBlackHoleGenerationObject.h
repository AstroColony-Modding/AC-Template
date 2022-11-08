#pragma once
#include "CoreMinimal.h"
#include "EHCelestialGenerationObject.h"
#include "EBlackHoleType.h"
#include "EHBlackHoleGenerationObject.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHBlackHoleGenerationObject : public UEHCelestialGenerationObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlackHoleType BlackHoleType;
    
    UEHBlackHoleGenerationObject();
};

