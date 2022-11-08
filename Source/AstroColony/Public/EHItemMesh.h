#pragma once
#include "CoreMinimal.h"
#include "EHItemMesh.generated.h"

class UEHItem;
class UStaticMesh;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHItemMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    FEHItemMesh();
};

