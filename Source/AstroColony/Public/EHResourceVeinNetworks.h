#pragma once
#include "CoreMinimal.h"
#include "EHResourceVeinNetworks.generated.h"

class UEHResourceVeinNetwork;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHResourceVeinNetworks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHResourceVeinNetwork*> ResourceVeinNetworks;
    
    FEHResourceVeinNetworks();
};

