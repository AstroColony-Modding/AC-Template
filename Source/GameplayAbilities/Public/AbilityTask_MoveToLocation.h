#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "MoveToLocationDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTask_MoveToLocation.generated.h"

class UCurveVector;
class UCurveFloat;
class UGameplayAbility;
class UAbilityTask_MoveToLocation;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_MoveToLocation : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveToLocationDelegate OnTargetLocationReached;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DurationOfMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* LerpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveVector* LerpCurveVector;
    
public:
    UAbilityTask_MoveToLocation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_MoveToLocation* MoveToLocation(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, float Duration, UCurveFloat* OptionalInterpolationCurve, UCurveVector* OptionalVectorInterpolationCurve);
    
};

