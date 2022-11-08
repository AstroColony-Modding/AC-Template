#pragma once
#include "CoreMinimal.h"
#include "EHNetwork.h"
#include "EHIndicationInterface.h"
#include "UObject/NoExportTypes.h"
#include "EHResourceVeinNetwork.generated.h"

class UEHItem;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHResourceVeinNetwork : public UEHNetwork, public IEHIndicationInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector VeinMiddlePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 VeinTotalResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHItem* ResourceItem;
    
    UEHResourceVeinNetwork();
    
    // Fix for true pure virtual functions not being implemented
};

