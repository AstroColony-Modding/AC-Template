#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "TechTreeWidget.generated.h"

class UTechNodeArrowWidget;
class UTechnologyTree;
class UTechNodeWidget;
class UTechnologyAsset;

UCLASS(Blueprintable)
class TECHTREE_API UTechTreeWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTechnologyTree* TechTree;
    
private:
    UPROPERTY(EditAnywhere, Export)
    TArray<TWeakObjectPtr<UTechNodeWidget>> SlotWidgetsCached;
    
    UPROPERTY(EditAnywhere, Export)
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

