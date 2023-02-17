#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHCustomMeshAsset.h"
#include "Templates/SubclassOf.h"
#include "EHCustomMeshLightAsset.generated.h"

class ULightComponent;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHCustomMeshLightAsset : public UEHCustomMeshAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULightComponent> LightTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LightOffset;
    
    UEHCustomMeshLightAsset();
};

