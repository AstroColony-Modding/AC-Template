#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHItemInstance.h"
#include "EHAttractedAsteroidData.generated.h"

class UStaticMesh;
class UEHAsteroidsCatcher;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHAttractedAsteroidData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHAsteroidsCatcher* AsteroidCatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHItemInstance> Items;
    
    FEHAttractedAsteroidData();
};

