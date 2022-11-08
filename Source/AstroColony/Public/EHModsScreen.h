#pragma once
#include "CoreMinimal.h"
#include "EHUIScreen.h"
#include "EHModsScreen.generated.h"

class UEHModsViewModel;
class UEHModsListWidget;
class UEHBaseButtonWidget;
class UEHModsBrowsedWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHModsScreen : public UEHUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHModsViewModel* ModsViewModel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHModsListWidget* ModsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHModsBrowsedWidget* BrowseModsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHBaseButtonWidget* InstalModButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHBaseButtonWidget* RemoveModButton;
    
public:
    UEHModsScreen();
private:
    UFUNCTION(BlueprintCallable)
    void HandleRemoveModClicked(UEHBaseButtonWidget* ButtonWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleInstallModButtonClicked(UEHBaseButtonWidget* ButtonWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleBack();
    
};

