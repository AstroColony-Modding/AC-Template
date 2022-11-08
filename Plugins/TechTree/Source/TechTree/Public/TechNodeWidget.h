#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TechNodeWidget.generated.h"

class UTechnologyAsset;

UCLASS(Blueprintable, EditInlineNew)
class TECHTREE_API UTechNodeWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTechnologyAsset* TechnologyAsset;
    
    UTechNodeWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTechNodeInitialized();
    
    UFUNCTION(BlueprintCallable)
    void Init(UTechnologyAsset* InTechnologyAsset);
    
};

