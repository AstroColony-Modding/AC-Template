#pragma once
#include "CoreMinimal.h"
#include "EHUIScreen.h"
#include "EHLoadScreen.generated.h"

class UEHSaveLoadListWidget;
class UEHSaveLoadViewModel;
class UEHBaseButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHLoadScreen : public UEHUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHSaveLoadViewModel* LoadViewModel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHSaveLoadListWidget* LoadList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHBaseButtonWidget* LoadButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHBaseButtonWidget* RemoveFileButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHBaseButtonWidget* RemoveAllButton;
    
public:
    UEHLoadScreen();
private:
    UFUNCTION(BlueprintCallable)
    void HandleRemoveFileClicked(UEHBaseButtonWidget* ButtonWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleRemoveAllClicked(UEHBaseButtonWidget* ButtonWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleLoadButtonClicked(UEHBaseButtonWidget* ButtonWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleBack();
    
};

