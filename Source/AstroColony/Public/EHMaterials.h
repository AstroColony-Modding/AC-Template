#pragma once
#include "CoreMinimal.h"
#include "EHMaterials.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    FEHMaterials();
};

