#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModTab.h"
#include "ACModConfig.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class SIMPLEUGC_API UACModConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> GameObjectsToOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GenerateTabForMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModTab> TabWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> ModIcon;
    
    UACModConfig();
};

