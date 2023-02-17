#pragma once
#include "CoreMinimal.h"
#include "GameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbility_Montage.generated.h"

class UAnimMontage;
class UGameplayEffect;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UGameplayAbility_Montage : public UGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> GameplayEffectClassesWhileAnimating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGameplayEffect*> GameplayEffectsWhileAnimating;
    
    UGameplayAbility_Montage();
};

