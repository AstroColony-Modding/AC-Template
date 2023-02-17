#pragma once
#include "CoreMinimal.h"
#include "EHUIScreen.h"
#include "EHSaveScreen.generated.h"

class UEHBaseButtonWidget;
class UEHSaveLoadListWidget;
class UEHSaveLoadViewModel;
class UTGEditableTextBox;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHSaveScreen : public UEHUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHSaveLoadViewModel* SaveViewModel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHSaveLoadListWidget* SaveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHBaseButtonWidget* SaveButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHBaseButtonWidget* RemoveFileButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHBaseButtonWidget* RemoveAllButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGEditableTextBox* FilenameText;
    
public:
    UEHSaveScreen();
private:
    UFUNCTION(BlueprintCallable)
    void HandleSaveButtonClicked(UEHBaseButtonWidget* ButtonWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleRemoveFileClicked(UEHBaseButtonWidget* ButtonWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleRemoveAllClicked(UEHBaseButtonWidget* ButtonWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleBack();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FileSavedEvent(const FString& Filename);
    
};

