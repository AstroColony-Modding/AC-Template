#pragma once
#include "CoreMinimal.h"
#include "InstancesContainer.generated.h"

class UEHHISMCellComponent;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FInstancesContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEHHISMCellComponent*> Instances;
    
    FInstancesContainer();
};

FORCEINLINE uint32 GetTypeHash(const FInstancesContainer) { return 0; }