#pragma once
#include "CoreMinimal.h"
#include "EHOptionWidget.h"
#include "EHOptionStepperWidget.generated.h"

class UEHStepperViewModel;
class UTGConfigurableTextBlock;
class UTGTile;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHOptionStepperWidget : public UEHOptionWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGTile* Previous;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGTile* Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGConfigurableTextBlock* Text;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHStepperViewModel* StepperViewModel;
    
public:
    UEHOptionStepperWidget();
};

