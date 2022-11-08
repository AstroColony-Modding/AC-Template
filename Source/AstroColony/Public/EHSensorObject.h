#pragma once
#include "CoreMinimal.h"
#include "EHSignalObject.h"
#include "EHSensorObject.generated.h"

class UEHItemsContainer;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHSensorObject : public UEHSignalObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHItemsContainer* SensedDevice;
    
    UEHSensorObject();
private:
    UFUNCTION(BlueprintCallable)
    void HandleSelectedResourcesChanged();
    
};

