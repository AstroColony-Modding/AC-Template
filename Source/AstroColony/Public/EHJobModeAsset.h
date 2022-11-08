#pragma once
#include "CoreMinimal.h"
#include "EHCustomAsset.h"
#include "EHJobModeType.h"
#include "EHJobModeAsset.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHJobModeAsset : public UEHCustomAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHJobModeType JobModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> ToolMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> MP_ToolMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShortcutText;
    
    UEHJobModeAsset();
};

