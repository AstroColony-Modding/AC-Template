#pragma once
#include "CoreMinimal.h"
#include "Components/ShapeComponent.h"
#include "UObject/NoExportTypes.h"
#include "EHBoxComponentDepth.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHBoxComponentDepth : public UShapeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    FVector BoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    float LineThickness;
    
public:
    UEHBoxComponentDepth();
    UFUNCTION(BlueprintCallable)
    void SetBoxExtent(FVector InBoxExtent, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetUnscaledBoxExtent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetScaledBoxExtent() const;
    
};

