#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayAbilityTargetingLocationInfo.h"
#include "GameplayTargetDataFilterHandle.h"
#include "Templates/SubclassOf.h"
#include "WorldReticleParameters.h"
#include "GameplayAbilityTargetActor.generated.h"

class AGameplayAbilityWorldReticle;
class APlayerController;
class UAbilitySystemComponent;
class UGameplayAbility;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class GAMEPLAYABILITIES_API AGameplayAbilityTargetActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldProduceTargetDataOnServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayAbilityTargetingLocationInfo StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* MasterPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayAbility* OwningAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bDestroyOnConfirmation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* SourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldReticleParameters ReticleParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGameplayAbilityWorldReticle> ReticleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTargetDataFilterHandle Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* GenericDelegateBoundASC;
    
    AGameplayAbilityTargetActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ConfirmTargeting();
    
    UFUNCTION(BlueprintCallable)
    void CancelTargeting();
    
};

