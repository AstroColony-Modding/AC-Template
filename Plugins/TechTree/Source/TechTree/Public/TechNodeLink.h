#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TechNodeLink.generated.h"

class UTechnologyAsset;

USTRUCT(BlueprintType)
struct FTechNodeLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTechnologyAsset* ParentTechnology;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTechnologyAsset* ChildTechnology;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LinkFromPostion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LinkToPostion;
    
    TECHTREE_API FTechNodeLink();
};

