#pragma once
#include "CoreMinimal.h"
#include "BinaryDataContainer.generated.h"

USTRUCT(BlueprintType)
struct FBinaryDataContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ContainerData;
    
    ASTROCOLONY_API FBinaryDataContainer();
};

