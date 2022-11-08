#pragma once
#include "CoreMinimal.h"
#include "GameplayCueTranslatorNode.h"
#include "GameplayCueTranslatorNodeIndex.h"
#include "GameplayCueTranslationManager.generated.h"

class UGameplayTagsManager;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayCueTranslationManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayCueTranslatorNode> TranslationLUT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayTagsManager* TagManager;
    
public:
    FGameplayCueTranslationManager();
};

