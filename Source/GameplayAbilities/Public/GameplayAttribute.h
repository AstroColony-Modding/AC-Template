#pragma once
#include "CoreMinimal.h"
#include "GameplayAttribute.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AttributeName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FProperty> Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStruct* AttributeOwner;
    
public:
    FGameplayAttribute();
};

