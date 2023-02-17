#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayCueTranslationLink.h"
#include "GameplayCueTranslatorNodeIndex.h"
#include "GameplayCueTranslatorNode.generated.h"

USTRUCT(BlueprintType)
struct FGameplayCueTranslatorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayCueTranslationLink> links;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueTranslatorNodeIndex CachedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CachedGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CachedGameplayTagName;
    
    GAMEPLAYABILITIES_API FGameplayCueTranslatorNode();
};

