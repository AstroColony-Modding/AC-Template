#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TechnologyAsset.h"
#include "EHGlobalPointInstance.h"
#include "EHTechnologyAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHTechnologyAsset : public UTechnologyAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReasearchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHGlobalPointInstance> ReasearchCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> GameplayAspectUnlocks;
    
    UEHTechnologyAsset();
};

