#pragma once
#include "CoreMinimal.h"
#include "EHCustomAsset.h"
#include "EHVisualMeshAsset.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHVisualMeshAsset : public UEHCustomAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> StaticMeshes;
    
    UPROPERTY(EditAnywhere)
    uint8 NumCustomDataFloats;
    
    UEHVisualMeshAsset();
};

