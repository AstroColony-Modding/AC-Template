#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagResponseTableEntry.h"
#include "GameplayTagContainer.h"
#include "GameplayTagReponseTable.generated.h"

class UAbilitySystemComponent;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UGameplayTagReponseTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagResponseTableEntry> Entries;
    
    UGameplayTagReponseTable();
protected:
    UFUNCTION(BlueprintCallable)
    void TagResponseEvent(const FGameplayTag Tag, int32 NewCount, UAbilitySystemComponent* ASC, int32 idx);
    
};

