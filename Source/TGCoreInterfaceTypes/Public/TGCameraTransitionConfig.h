#pragma once
#include "CoreMinimal.h"
#include "TGCameraTransition.h"
#include "TGCameraTransitionConfig.generated.h"

USTRUCT(BlueprintType)
struct FTGCameraTransitionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTGCameraTransition FOVTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTGCameraTransition OffsetTransition;
    
    TGCOREINTERFACETYPES_API FTGCameraTransitionConfig();
};

