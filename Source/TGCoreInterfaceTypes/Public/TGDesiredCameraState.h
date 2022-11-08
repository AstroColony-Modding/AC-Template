#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TGDesiredCameraState.generated.h"

USTRUCT(BlueprintType)
struct FTGDesiredCameraState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    TGCOREINTERFACETYPES_API FTGDesiredCameraState();
};

