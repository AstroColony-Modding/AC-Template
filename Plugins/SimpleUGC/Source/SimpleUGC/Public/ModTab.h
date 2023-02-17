#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ModTab.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct SIMPLEUGC_API FModTab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TabName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> TabWidget;
    
    FModTab();
};

