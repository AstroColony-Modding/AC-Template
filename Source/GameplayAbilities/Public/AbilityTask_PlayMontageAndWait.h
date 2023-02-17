#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "MontageWaitSimpleDelegateDelegate.h"
#include "AbilityTask_PlayMontageAndWait.generated.h"

class UAbilityTask_PlayMontageAndWait;
class UAnimMontage;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_PlayMontageAndWait : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMontageWaitSimpleDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMontageWaitSimpleDelegate OnBlendOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMontageWaitSimpleDelegate OnInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMontageWaitSimpleDelegate OnCancelled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimRootMotionTranslationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopWhenAbilityEnds;
    
public:
    UAbilityTask_PlayMontageAndWait();
    UFUNCTION(BlueprintCallable)
    void OnMontageInterrupted();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* NewMontageToPlay, float NewRate, FName NewStartSection, bool NewBStopWhenAbilityEnds, float NewAnimRootMotionTranslationScale, float NewStartTimeSeconds);
    
};

