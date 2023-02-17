#pragma once
#include "CoreMinimal.h"
#include "EHSignalObject.h"
#include "EHArithmeticCombinatorObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHArithmeticCombinatorObject : public UEHSignalObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MathOperationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OperationValue;
    
    UEHArithmeticCombinatorObject();
    UFUNCTION(BlueprintCallable)
    void UpdateOperationValue(int32 NewOperationValue);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMathOperation(uint8 NewMathOperationIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSelectedResourcesChanged();
    
};

