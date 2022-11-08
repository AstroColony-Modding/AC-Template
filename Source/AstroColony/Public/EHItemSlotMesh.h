#pragma once
#include "CoreMinimal.h"
#include "EHItemSlotMesh.generated.h"

class UStaticMesh;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHItemSlotMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> DeformableMaterials;
    
    FEHItemSlotMesh();
};

