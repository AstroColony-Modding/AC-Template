#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "EHHUDIndicatorsWidget.generated.h"

class UEHScreenMarkerWidget;
class UObject;
class UOverlay;
class UTGRadialPanel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHHUDIndicatorsWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEHScreenMarkerWidget> ScreenMarkerWidgetsClasses[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RadialMarkerOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<UObject*, UEHScreenMarkerWidget*> IndicatorsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGRadialPanel* OffScreenIndicatorsRadial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* OnScreenIndicatorsOverlay;
    
public:
    UEHHUDIndicatorsWidget();
    UFUNCTION(BlueprintCallable)
    void RemoveIndicator(UObject* IndicatedObject);
    
    UFUNCTION(BlueprintCallable)
    void AddIndicator(UObject* IndicatedObject);
    
};

