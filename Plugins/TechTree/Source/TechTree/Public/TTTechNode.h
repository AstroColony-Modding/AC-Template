#pragma once
#include "CoreMinimal.h"
#include "TTBaseNode.h"
#include "TTTechNode.generated.h"

class UTechnologyAsset;

UCLASS(Blueprintable)
class TECHTREE_API UTTTechNode : public UTTBaseNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTechnologyAsset* TechnologyAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnlockedByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDisabled;
    
    UTTTechNode();
};

