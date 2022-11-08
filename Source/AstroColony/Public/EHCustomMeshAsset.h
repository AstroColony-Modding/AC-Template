#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHObjectLoaderInterface.h"
#include "EHCustomMeshAsset.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHCustomMeshAsset : public UPrimaryDataAsset, public IEHObjectLoaderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> StaticMeshes;
    
    UPROPERTY(EditAnywhere)
    uint8 NumCustomDataFloats;
    
    UPROPERTY(EditAnywhere)
    uint8 TranslucencySortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableCollisions;
    
    UEHCustomMeshAsset();
    
    // Fix for true pure virtual functions not being implemented
};

