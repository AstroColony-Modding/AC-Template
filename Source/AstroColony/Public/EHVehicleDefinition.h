#pragma once
#include "CoreMinimal.h"
#include "EEHVehiclePartMirrorType.h"
#include "EEHVehiclePartType.h"
#include "EEHVehicleType.h"
#include "EHVehiclePart.h"
#include "EHVehicleDefinition.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHVehicleDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString VehicleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EEHVehicleType VehicleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FEHVehiclePart> Parts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<EEHVehiclePartType, EEHVehiclePartMirrorType> SizeMirrorModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<EEHVehiclePartType, EEHVehiclePartMirrorType> OffsetMirrorModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 UniqueID;
    
    FEHVehicleDefinition();
};

