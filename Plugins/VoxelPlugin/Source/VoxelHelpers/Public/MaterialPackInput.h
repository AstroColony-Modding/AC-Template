#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionIO.h"
#include "UObject/NoExportTypes.h"
#include "MaterialPackInput.generated.h"

USTRUCT(BlueprintType)
struct FMaterialPackInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Input;
    
    VOXELHELPERS_API FMaterialPackInput();
};

