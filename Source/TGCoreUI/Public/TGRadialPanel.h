#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/PanelWidget.h"
#include "TGRadialPanel.generated.h"

class UTGRadialPanelSlot;
class UWidget;

UCLASS(Blueprintable)
class TGCOREUI_API UTGRadialPanel : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PreviewColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviewThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfPreviewSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowPreviewInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EllipseToRectangleLerpStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CanvasPadding;
    
    UTGRadialPanel();
    UFUNCTION(BlueprintCallable)
    UTGRadialPanelSlot* AddChildToCanvas(UWidget* content);
    
};

