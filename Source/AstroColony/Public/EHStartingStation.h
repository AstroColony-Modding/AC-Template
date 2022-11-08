#pragma once
#include "CoreMinimal.h"
#include "EEHStartingStationSize.h"
#include "EHStartingStation.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHStartingStation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StreamingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHStartingStationSize Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    FEHStartingStation();
};

