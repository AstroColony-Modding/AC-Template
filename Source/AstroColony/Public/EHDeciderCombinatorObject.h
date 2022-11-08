#pragma once
#include "CoreMinimal.h"
#include "EHSignalObject.h"
#include "EHDeciderCombinatorObject.generated.h"

class UEHDeviceObject;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHDeciderCombinatorObject : public UEHSignalObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHDeviceObject* ControlledDevice;
    
    UPROPERTY(EditAnywhere)
    uint8 MathConditionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConditionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Response;
    
    UEHDeciderCombinatorObject();
    UFUNCTION(BlueprintCallable)
    void UpdateMathCondition(uint8 NewMathConditionIndex);
    
    UFUNCTION(BlueprintCallable)
    void UpdateConditionValue(int32 NewConditionValue);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSelectedResourcesChanged();
    
};

