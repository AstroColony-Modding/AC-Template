#pragma once
#include "CoreMinimal.h"
#include "EHLogicObject.h"
#include "EHLogicSplitterObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHLogicSplitterObject : public UEHLogicObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 DirectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DirectionValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SplittingRatios;
    
    UEHLogicSplitterObject();
    UFUNCTION(BlueprintCallable)
    void UpdateSplittingRatios(const TArray<int32>& NewSplittingRatios);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<float> GetPercentageRatios();
    
};

