#pragma once
#include "CoreMinimal.h"
#include "EHUIScreen.h"
#include "EHSummaryScreen.generated.h"

class UEHBaseButtonWidget;
class UEHSummaryViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHSummaryScreen : public UEHUIScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHBaseButtonWidget* ContinuePlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHBaseButtonWidget* EndMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHBaseButtonWidget* BackToMainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHBaseButtonWidget* LoadGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHSummaryViewModel* SummaryViewModel;
    
public:
    UEHSummaryScreen();
private:
    UFUNCTION(BlueprintCallable)
    void HandleLoadClicked(UEHBaseButtonWidget* ButtonWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleEndMissionClicked(UEHBaseButtonWidget* ButtonWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleContinuePlayingClicked(UEHBaseButtonWidget* ButtonWidget);
    
};

