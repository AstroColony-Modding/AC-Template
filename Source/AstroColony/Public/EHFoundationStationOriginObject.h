#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHCustomConstructionInterface.h"
#include "EHInteractableObject.h"
#include "EHFoundationStationOriginObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHFoundationStationOriginObject : public UEHInteractableObject, public IEHCustomConstructionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OriginLocation;
    
    UEHFoundationStationOriginObject();
    UFUNCTION(BlueprintCallable)
    void RenameStation(const FString& StationName);
    
    UFUNCTION(BlueprintCallable)
    void DestroyStation();
    
    
    // Fix for true pure virtual functions not being implemented
};

