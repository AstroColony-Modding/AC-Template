#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHGeneratedReactiveMesh.generated.h"

class UEHReactiveHISMComponent;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHGeneratedReactiveMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEHReactiveHISMComponent> ReactiveMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    FEHGeneratedReactiveMesh();
};

