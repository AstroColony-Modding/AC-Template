#pragma once
#include "CoreMinimal.h"
#include "EHFoundationObject.h"
#include "EHCustomConstructionInterface.h"
#include "UObject/NoExportTypes.h"
#include "EHFoundationStationOriginObject.generated.h"

class UEHGridComponent;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHFoundationStationOriginObject : public UEHFoundationObject, public IEHCustomConstructionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OriginLocation;
    
    UEHFoundationStationOriginObject();
    UFUNCTION(BlueprintCallable)
    void RenameStation(const FString& StationName);
    
    UFUNCTION(BlueprintCallable)
    void DestroyStation();
    
    UFUNCTION(BlueprintCallable)
    void CreateStationOrigin(UEHGridComponent* GridComponent, const FString& StationName);
    
    
    // Fix for true pure virtual functions not being implemented
};

