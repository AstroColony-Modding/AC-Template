#pragma once
#include "CoreMinimal.h"
#include "EHHeadMeshes.generated.h"

class UEHGroomComponent;
class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHHeadMeshes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FaceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEHGroomComponent*> GroomComponents;
    
    FEHHeadMeshes();
};

