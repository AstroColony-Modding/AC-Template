#pragma once
#include "CoreMinimal.h"
#include "EHLogicObject.h"
#include "EHSignalDeviceInterface.h"
#include "EHItemInstance.h"
#include "EHSignalObject.generated.h"

class UEHSignalNetwork;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnResourcesSignalOutChanged);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSelectedDeviceChanged);

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHSignalObject : public UEHLogicObject, public IEHSignalDeviceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHSignalNetwork* SignalNetworkIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHSignalNetwork* SignalNetworkOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHItemInstance> ResourcesSignalOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResourcesSignalOutChanged OnResourcesSignalOutChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectedDeviceChanged OnSelectedDeviceChanged;
    
    UEHSignalObject();
    
    // Fix for true pure virtual functions not being implemented
};

