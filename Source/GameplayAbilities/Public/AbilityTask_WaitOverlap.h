#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AbilityTask.h"
#include "WaitOverlapDelegateDelegate.h"
#include "AbilityTask_WaitOverlap.generated.h"

class AActor;
class UAbilityTask_WaitOverlap;
class UGameplayAbility;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitOverlap : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitOverlapDelegate OnOverlap;
    
    UAbilityTask_WaitOverlap();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitOverlap* WaitForOverlap(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    void OnHitCallback(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
};

