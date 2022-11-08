#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayCueNotifyData.h"
#include "GameplayCueSet.generated.h"

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UGameplayCueSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayCueNotifyData> GameplayCueData;
    
    UGameplayCueSet();
};

