#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EHBlockItem.h"
#include "EEHBillboardTemplateType.h"
#include "UObject/NoExportTypes.h"
#include "EHInteractableItem.generated.h"

class AActor;
class UEHSSEInitializer;
class UEHInteractableObject;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHInteractableItem : public UEHBlockItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHBillboardTemplateType BillboardTemplateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BillboardOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEHSSEInitializer> SSEInitializerTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHInteractableObject* InteractableObjectTemplate;
    
    UEHInteractableItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHInteractableObject* GetInteractableTemplate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHInteractableObject* GetDefaultInteractableObject(AActor* GridActor);
    
};

