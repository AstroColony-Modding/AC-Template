#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TGUISceneContexts.generated.h"

class UTGUISceneContext;

USTRUCT(BlueprintType)
struct FTGUISceneContexts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTGUISceneContext>> Contexts;
    
    TGCOREUI_API FTGUISceneContexts();
};

