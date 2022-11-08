#pragma once
#include "CoreMinimal.h"
#include "EHNetwork.h"
#include "EHWaterNetwork.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHWaterNetwork : public UEHNetwork {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStoredWaterChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StoredWater;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStoredWaterChanged OnStoredWaterChanged;
    
    UEHWaterNetwork();
    UFUNCTION(BlueprintCallable)
    void ConsumeWater(const int32 Quantity);
    
    UFUNCTION(BlueprintCallable)
    void AddWater(const int32 Quantity);
    
};

