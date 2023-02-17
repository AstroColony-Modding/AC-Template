#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityActorInfo.generated.h"

class AActor;
class APlayerController;
class UAbilitySystemComponent;
class UAnimInstance;
class UMovementComponent;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAbilityActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> OwnerActor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> AvatarActor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerController> PlayerController;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkeletalMeshComponent> SkeletalMeshComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimInstance> AnimInstance;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMovementComponent> MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AffectedAnimInstanceTag;
    
    FGameplayAbilityActorInfo();
};

