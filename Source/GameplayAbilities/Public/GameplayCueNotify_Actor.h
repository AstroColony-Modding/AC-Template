#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GameplayCueParameters.h"
#include "EGameplayCueEvent.h"
#include "GameplayCueNotify_Actor.generated.h"

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API AGameplayCueNotify_Actor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDestroyOnRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoDestroyDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WarnIfTimelineIsStillRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WarnIfLatentActionIsStillRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayCueTag;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GameplayCueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoAttachToOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUniqueInstancePerInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUniqueInstancePerSourceObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMultipleOnActiveEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMultipleWhileActiveEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPreallocatedInstances;
    
    AGameplayCueNotify_Actor();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WhileActive(AActor* MyTarget, const FGameplayCueParameters& Parameters);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnRemove(AActor* MyTarget, const FGameplayCueParameters& Parameters);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnExecute(AActor* MyTarget, const FGameplayCueParameters& Parameters);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnActive(AActor* MyTarget, const FGameplayCueParameters& Parameters);
    
    /*UFUNCTION(BlueprintImplementableEvent)
    void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent::Type> EventType, const FGameplayCueParameters& Parameters);*/
    
    UFUNCTION(BlueprintCallable)
    void K2_EndGameplayCue();
    
};

