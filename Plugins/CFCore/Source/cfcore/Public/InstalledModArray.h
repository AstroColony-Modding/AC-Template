#pragma once
#include "CoreMinimal.h"
#include "InstalledMod.h"
#include "InstalledModArray.generated.h"

USTRUCT(BlueprintType)
struct FInstalledModArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstalledMod> installedMods;
    
    CFCORE_API FInstalledModArray();
};

