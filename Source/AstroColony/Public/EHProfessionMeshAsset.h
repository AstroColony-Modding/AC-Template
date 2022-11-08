#pragma once
#include "CoreMinimal.h"
#include "EHCustomAsset.h"
#include "EAIProfession.h"
#include "EHProfessionMeshAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHProfessionMeshAsset : public UEHCustomAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIProfession Profession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrainingTime;
    
    UEHProfessionMeshAsset();
};

