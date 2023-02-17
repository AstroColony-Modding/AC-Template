#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "EHButtonBarEntryWidget.generated.h"

class UEHButtonBarEntryViewModel;
class UTGTile;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHButtonBarEntryWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGTile* ClickableTile;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHButtonBarEntryViewModel* ButtonBarEntryViewModel;
    
public:
    UEHButtonBarEntryWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
};

