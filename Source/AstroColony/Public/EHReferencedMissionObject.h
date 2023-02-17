#pragma once
#include "CoreMinimal.h"
#include "ReferencedMissionObject.h"
#include "EHReferencedMissionObject.generated.h"

class AEHGamePlayerController;
class AEHGrid;
class UEHDevicesComponent;
class UEHGridComponent;
class UEHInventoryComponent;
class UEHMissionsComponent;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHReferencedMissionObject : public UReferencedMissionObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHGridComponent* GridComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEHGamePlayerController* PlayerController;
    
    UEHReferencedMissionObject();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHMissionsComponent* GetMissionManagerRef();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHInventoryComponent* GetInventoryComponentRef();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEHGrid* GetGrid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHDevicesComponent* GetDevicesComponent();
    
    UFUNCTION(BlueprintCallable)
    void CompleteObjective(const bool Condition, const FName ObjectiveName, uint8 RepetitionsCount);
    
};

