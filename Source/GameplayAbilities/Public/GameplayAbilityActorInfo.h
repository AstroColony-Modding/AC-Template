#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityActorInfo.generated.h"

class USkeletalMeshComponent;
class UAbilitySystemComponent;
class AActor;
class APlayerController;
class UAnimInstance;
class UMovementComponent;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAbilityActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> OwnerActor;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> AvatarActor;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<APlayerController> PlayerController;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<USkeletalMeshComponent> SkeletalMeshComponent;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UAnimInstance> AnimInstance;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UMovementComponent> MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AffectedAnimInstanceTag;
    
    FGameplayAbilityActorInfo();
};

