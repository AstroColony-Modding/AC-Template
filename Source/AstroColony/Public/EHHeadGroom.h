#pragma once
#include "CoreMinimal.h"
#include "EHHeadGroom.generated.h"

class UGroomAsset;
class UMaterialInterface;
class UStaticMesh;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHHeadGroom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> FaceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UGroomAsset>> GroomMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> MaterialOverrides;
    
    FEHHeadGroom();
};

