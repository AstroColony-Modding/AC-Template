#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WheelDataStruct.h"
#include "WheelManager_Component.generated.h"

class UPrimitiveComponent;
class USuspensionPhysics_Component;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLUEMANVEHICLEPHYSICS_API UWheelManager_Component : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickyTiresMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickyTiresActivationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickyTiresHandbrakeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockdownActivationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockdownMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USuspensionPhysics_Component*> Wheels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USuspensionPhysics_Component*> SteeringWheels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USuspensionPhysics_Component*> HandbrakeWheels;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USuspensionPhysics_Component*> LeftSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USuspensionPhysics_Component*> RightSide;
    
public:
    UWheelManager_Component();
    UFUNCTION(BlueprintCallable)
    void SetSteering(float SteeringInput);
    
    UFUNCTION(BlueprintCallable)
    void SetHandbrake(bool HandbrakeInput);
    
    UFUNCTION(BlueprintCallable)
    USuspensionPhysics_Component* AddWheel(FWheelDataStruct WheelData);
    
};

