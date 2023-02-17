#pragma once
#include "CoreMinimal.h"
#include "EHBaseButtonProperties.h"
#include "EHUIScreen.h"
#include "Templates/SubclassOf.h"
#include "EHPauseScreen.generated.h"

class UEHBaseButtonWidget;
class UEHPauseViewModel;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHPauseScreen : public UEHUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHPauseViewModel* PauseViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalPauseOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEHBaseButtonProperties BaseButtonProperties;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEHBaseButtonWidget> BaseButtonWidgetClass;
    
public:
    UEHPauseScreen();
};

