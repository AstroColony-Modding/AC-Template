#pragma once
#include "CoreMinimal.h"
#include "EHOptionWidget.h"
#include "EHGammaStepperWidget.generated.h"

class UHorizontalBox;
class UImage;
class UTGTile;
class UEHGammaStepperViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHGammaStepperWidget : public UEHOptionWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepperTilesScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepperTileSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* StepperTilesHorizontalBox;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGTile* Previous;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGTile* Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Selector;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHGammaStepperViewModel* GammaStepperViewModel;
    
public:
    UEHGammaStepperWidget();
private:
    UFUNCTION(BlueprintCallable)
    void HandleGammaValueChanged();
    
};

