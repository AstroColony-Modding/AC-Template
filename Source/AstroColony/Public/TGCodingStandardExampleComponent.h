#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TGCodingStandardBlueprintVarGroup.h"
#include "TGCodingStandardExampleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTGCodingStandardExampleComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTGCodingStandardBlueprintVarGroup BlueprintGroup;
    
public:
    UTGCodingStandardExampleComponent();
};

