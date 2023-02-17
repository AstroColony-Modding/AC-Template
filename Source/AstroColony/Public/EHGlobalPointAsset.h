#pragma once
#include "CoreMinimal.h"
#include "EGlobalPointType.h"
#include "EHCustomAsset.h"
#include "EHGlobalPointAsset.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHGlobalPointAsset : public UEHCustomAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGlobalPointType GlobalPointType;
    
    UEHGlobalPointAsset();
};

