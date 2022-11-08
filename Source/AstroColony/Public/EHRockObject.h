#pragma once
#include "CoreMinimal.h"
#include "EHInteractableObject.h"
#include "EHInteractionInterface.h"
#include "UObject/NoExportTypes.h"
#include "EHItemInstance.h"
#include "EHRockObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHRockObject : public UEHInteractableObject, public IEHInteractionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 TotalNumHits;
    
    UPROPERTY(EditAnywhere)
    uint8 NumOfHits;
    
    UEHRockObject();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResourceHit(const FVector& HitLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResourceExtracted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEHItemInstance GetExtractInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanHit();
    
    
    // Fix for true pure virtual functions not being implemented
};

