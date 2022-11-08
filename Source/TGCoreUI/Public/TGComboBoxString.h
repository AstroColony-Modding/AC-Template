#pragma once
#include "CoreMinimal.h"
#include "Components/ComboBoxString.h"
#include "TGComboBoxString.generated.h"

UCLASS(Blueprintable)
class TGCOREUI_API UTGComboBoxString : public UComboBoxString {
    GENERATED_BODY()
public:
    UTGComboBoxString();
    UFUNCTION(BlueprintCallable)
    void SetTextOptions(const TArray<FText>& InOptions);
    
    UFUNCTION(BlueprintCallable)
    void SetOptions(const TArray<FString>& InOptions);
    
};

