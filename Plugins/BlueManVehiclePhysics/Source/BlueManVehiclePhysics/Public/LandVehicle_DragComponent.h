#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LandVehicle_DragComponent.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLUEMANVEHICLEPHYSICS_API ULandVehicle_DragComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Debug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirResistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Mesh;
    
    ULandVehicle_DragComponent();
};

