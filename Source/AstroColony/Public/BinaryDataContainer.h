#pragma once
#include "CoreMinimal.h"
#include "BinaryDataContainer.generated.h"

USTRUCT(BlueprintType)
struct FBinaryDataContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<uint8> ContainerData;
    
    ASTROCOLONY_API FBinaryDataContainer();
};

