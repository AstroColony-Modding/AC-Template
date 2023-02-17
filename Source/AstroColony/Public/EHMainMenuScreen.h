#pragma once
#include "CoreMinimal.h"
#include "EHUIScreen.h"
#include "EMenuType.h"
#include "EHMainMenuScreen.generated.h"

class UEHMainMenuViewModel;
class UEHMenuWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHMainMenuScreen : public UEHUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PressAnimationTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHMenuWidget* MenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHMainMenuViewModel* MainMenuViewModel;
    
public:
    UEHMainMenuScreen();
    UFUNCTION(BlueprintCallable)
    void OpenMainMenuByType(const EMenuType MenuType);
    
};

