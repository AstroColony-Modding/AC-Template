#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayCueObjectLibrary.h"
#include "GameplayCuePendingExecute.h"
#include "PreallocationInfo.h"
#include "Templates/SubclassOf.h"
#include "GameplayCueManager.generated.h"

class AGameplayCueNotify_Actor;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UGameplayCueManager : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayCueObjectLibrary RuntimeGameplayCueObjectLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayCueObjectLibrary EditorGameplayCueObjectLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UClass*> LoadedGameplayCueNotifyClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AGameplayCueNotify_Actor>> GameplayCueClassesForPreallocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayCuePendingExecute> PendingExecuteCues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GameplayCueSendContextCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPreallocationInfo> PreallocationInfoList_Internal;
    
public:
    UGameplayCueManager();
};

