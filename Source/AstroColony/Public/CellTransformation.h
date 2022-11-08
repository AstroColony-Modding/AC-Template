#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CellTransformation.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FCellTransformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeshID;
    
    FCellTransformation();
};

