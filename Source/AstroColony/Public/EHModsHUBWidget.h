#pragma once
#include "CoreMinimal.h"
#include "UGCPackage.h"
#include "Widgets/Layout/SScrollBox.h"
#include "TGUILayer.h"
#include "Templates/SubclassOf.h"
#include "EHModsHUBWidget.generated.h"

class UACModConfig;
class UEHModsListViewModel;
class UScrollBox;
class UUserWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHModsHUBWidget : public UTGUILayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> ModsOptionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalModsHUB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHModsListViewModel* ModsListViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDescendantScrollDestination DescendantScrollDestination;
    
    UEHModsHUBWidget();
    UFUNCTION(BlueprintCallable)
    void SelectTabByName(const FString& TabName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModsHUBOptionSelected(const FUGCPackage& Package, UACModConfig* ModConfig);
    
};

