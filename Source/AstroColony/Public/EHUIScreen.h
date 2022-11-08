#pragma once
#include "CoreMinimal.h"
#include "TGUIScreen.h"
#include "EHUIScreen.generated.h"

class USoundBase;
class UEHScreenViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHUIScreen : public UTGUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> MenuEnterAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> MenuExitAudio;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHScreenViewModel* ScreenViewModel;
    
public:
    UEHUIScreen();
};

