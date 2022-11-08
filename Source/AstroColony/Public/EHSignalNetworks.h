#pragma once
#include "CoreMinimal.h"
#include "EHSignalNetworks.generated.h"

class UEHSignalNetwork;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHSignalNetworks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHSignalNetwork*> SignalNetworks;
    
    FEHSignalNetworks();
};

