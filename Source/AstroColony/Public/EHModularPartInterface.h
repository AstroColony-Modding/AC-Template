#pragma once
#include "CoreMinimal.h"
#include "EHSceneInteractionInterface.h"
#include "EEHVehiclePartType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EHModularPartInterface.generated.h"

class UMaterialInterface;
class UStaticMesh;

UINTERFACE()
class ASTROCOLONY_API UEHModularPartInterface : public UEHSceneInteractionInterface {
    GENERATED_BODY()
};

class ASTROCOLONY_API IEHModularPartInterface : public IEHSceneInteractionInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVehiclePartType(const EEHVehiclePartType VehiclePartType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPartMaterials(const TArray<UMaterialInterface*>& Materials);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EEHVehiclePartType GetVehiclePartType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMaterialInterface*> GetPartMaterials();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyTransform(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyStaticMesh(const UStaticMesh* StaticMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyMaterials(const TArray<TSoftObjectPtr<UMaterialInterface>>& Materials);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyMaterial(const UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyColors(const TArray<FLinearColor>& Colors, const TArray<FName>& Names);
    
};

