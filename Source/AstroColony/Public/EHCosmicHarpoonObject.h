#pragma once
#include "CoreMinimal.h"
#include "EHConnectorStationObject.h"
#include "EHCosmicHarpoonObject.generated.h"

class AEHPlanetoidGrid;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHCosmicHarpoonObject : public UEHConnectorStationObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttractedPlanetoidChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttractedPlanetoidChanged OnAttractedPlanetoidChanged;
    
    UEHCosmicHarpoonObject();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEHPlanetoidGrid* GetAttractedPlanetoid();
    
    UFUNCTION(BlueprintCallable)
    void CancelAttraction();
    
    UFUNCTION(BlueprintCallable)
    void AttractPlanetoid(AEHPlanetoidGrid* PlanetoidToAttract);
    
};

