#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GeneratedCustomMesh.generated.h"

class UEHCustomMeshAsset;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FGeneratedCustomMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHCustomMeshAsset* CustomMeshAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    FGeneratedCustomMesh();
};

