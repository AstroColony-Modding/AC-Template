#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "EHHUDIndicatorsWidget.generated.h"

class UEHScreenMarkerWidget;
class UObject;
class UTGRadialPanel;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHHUDIndicatorsWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEHScreenMarkerWidget> ScreenMarkerWidgetsClasses[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RadialMarkerOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
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

