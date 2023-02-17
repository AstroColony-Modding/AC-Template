#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHCustomMeshInterface.h"
#include "EHObjectLoaderInterface.h"
#include "EHCustomMeshAsset.generated.h"

class UMaterialInterface;
class UStaticMesh;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHCustomMeshAsset : public UPrimaryDataAsset, public IEHObjectLoaderInterface, public IEHCustomMeshInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> StaticMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumCustomDataFloats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TranslucencySortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableCollisions;
    
    UEHCustomMeshAsset();
    
    // Fix for true pure virtual functions not being implemented
};

