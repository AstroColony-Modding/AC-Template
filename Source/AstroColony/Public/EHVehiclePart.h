#pragma once
#include "CoreMinimal.h"
#include "EEHVehiclePartType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EHVehiclePart.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHVehiclePart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHVehiclePartType PartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PartID;
    
    UPROPERTY(EditAnywhere)
    uint8 SchemeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> Colors;
    
    FEHVehiclePart();
};

