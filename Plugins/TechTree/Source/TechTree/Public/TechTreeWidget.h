#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "TechTreeWidget.generated.h"

class UTechNodeArrowWidget;
class UTechNodeWidget;
class UTechnologyAsset;
class UTechnologyTree;

UCLASS(Blueprintable)
class TECHTREE_API UTechTreeWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTechnologyTree* TechTree;
    
private:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UTechNodeWidget>> SlotWidgetsCached;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UTechNodeArrowWidget>> ArrowWidgetsCached;
    
public:
    UTechTreeWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTechNodeWidget*> GetTechNodeWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTechNodeWidget* GetTechNode(UTechnologyAsset* TechnologyAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTechNodeArrowWidget*> GetArrowWidgets();
    
};

