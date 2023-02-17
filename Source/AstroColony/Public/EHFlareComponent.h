#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/StaticMeshComponent.h"
#include "EHFlareComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHFlareComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FlareColor;
    
    UEHFlareComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateColor(const FLinearColor& Color);
    
    UFUNCTION(BlueprintCallable)
    void SetFlareDirection(const float AngleYAxis, const float AngleZAxis);
    
};

