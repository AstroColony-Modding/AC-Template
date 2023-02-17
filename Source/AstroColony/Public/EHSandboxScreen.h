#pragma once
#include "CoreMinimal.h"
#include "EHUIScreen.h"
#include "EHSandboxScreen.generated.h"

class UEHBaseButtonWidget;
class UEHSandboxViewModel;
class UTGEditableTextBox;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHSandboxScreen : public UEHUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHSandboxViewModel* SandboxViewModel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHBaseButtonWidget* GenerateUniverseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGEditableTextBox* SeedNumberText;
    
public:
    UEHSandboxScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGameInstanceTravelData();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleGenerateUniverseButtonPressed(UEHBaseButtonWidget* Button);
    
};

