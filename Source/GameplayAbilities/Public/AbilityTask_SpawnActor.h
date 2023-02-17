#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "SpawnActorDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "AbilityTask_SpawnActor.generated.h"

class AActor;
class UAbilityTask_SpawnActor;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_SpawnActor : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnActorDelegate Success;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnActorDelegate DidNotSpawn;
    
    UAbilityTask_SpawnActor();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_SpawnActor* SpawnActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<AActor> Class);
    
    UFUNCTION(BlueprintCallable)
    void FinishSpawningActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, AActor* SpawnedActor);
    
    UFUNCTION(BlueprintCallable)
    bool BeginSpawningActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<AActor> Class, AActor*& SpawnedActor);
    
};

