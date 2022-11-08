#pragma once
#include "CoreMinimal.h"
#include "EHInteractableObject.h"
#include "EHDeviceObject.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHDeviceObject : public UEHInteractableObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeviceSwitchStateChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChildActor, meta=(AllowPrivateAccess=true))
    AActor* ChildActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSwitchedOn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeviceSwitchStateChanged OnDeviceSwitchStateChanged;
    
    UEHDeviceObject();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ChildActor();
    
};

