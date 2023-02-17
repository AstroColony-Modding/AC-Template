#pragma once
#include "CoreMinimal.h"
#include "EHCustomAsset.h"
#include "EHCustomMeshInterface.h"
#include "EHVisualMeshAsset.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHVisualMeshAsset : public UEHCustomAsset, public IEHCustomMeshInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> StaticMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumCustomDataFloats;
    
    UEHVisualMeshAsset();
    
    // Fix for true pure virtual functions not being implemented
};

