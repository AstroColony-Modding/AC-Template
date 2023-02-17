#pragma once
#include "CoreMinimal.h"
#include "EHCraftingObject.h"
#include "EHSignalDeviceInterface.h"
#include "EHSignalAntenna.generated.h"

class UEHSignalNetwork;
class UEHSignalReceiver;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHSignalAntenna : public UEHCraftingObject, public IEHSignalDeviceInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSignalChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSignalChanged OnSignalReceiverChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHSignalReceiver* SignalReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHSignalNetwork* SignalNetworkIn;
    
    UEHSignalAntenna();
    UFUNCTION(BlueprintCallable)
    void SelectDevice(UEHSignalReceiver* SignalReceiverIn);
    
    UFUNCTION(BlueprintCallable)
    void CancelSignalReceiver();
    
    
    // Fix for true pure virtual functions not being implemented
};

