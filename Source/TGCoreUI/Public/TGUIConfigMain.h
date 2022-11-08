#pragma once
#include "CoreMinimal.h"
#include "TGUIConfig.h"
#include "UObject/NoExportTypes.h"
#include "ConfigurableText.h"
#include "ConfigurableButton.h"
#include "TGUIConfigMain.generated.h"

UCLASS(Abstract, Blueprintable)
class TGCOREUI_API UTGUIConfigMain : public UTGUIConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLinearColor> ColorThemes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultThemeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EditorConfigNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConfigurableText DefaultFontStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FConfigurableText> TextMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FConfigurableButton> ButtonStyleMap;
    
    UTGUIConfigMain();
};

