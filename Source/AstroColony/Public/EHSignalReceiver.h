#pragma once
#include "CoreMinimal.h"
#include "EHSignalDeviceInterface.h"
#include "EHDeviceObject.h"
#include "EHItemInstance.h"
#include "EHSignalReceiver.generated.h"

class UEHSignalNetwork;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSignalSendChanged);

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHSignalReceiver : public UEHDeviceObject, public IEHSignalDeviceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHSignalNetwork* SignalNetworkOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHItemInstance> SignalCached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSignalSendChanged OnSignalSendChanged;
    
    UEHSignalReceiver();
    
    // Fix for true pure virtual functions not being implemented
};

