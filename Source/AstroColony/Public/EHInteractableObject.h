#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GeneratedCustomMesh.h"
#include "EEHInstanceRotation.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EHInteractableObject.generated.h"

class UEHItem;
class AEHGrid;
class UEHDeviceItem;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class ASTROCOLONY_API UEHInteractableObject : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractableRotationChanged, EEHInstanceRotation, Rotation);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FIntVector CachedCellCoord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHInstanceRotation InstanceRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MeshIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> OtherDivecesInsideCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InstanceTags;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractableRotationChanged OnInteractableRotationChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UEHItem* FormerItem;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGeneratedCustomMesh> CustomMeshes;
    
public:
    UEHInteractableObject();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsWater();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsSignal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsElectricity();
    
    UFUNCTION(BlueprintCallable)
    void SetGrid(AEHGrid* GridIn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWorldLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWorldFloorLocation();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEHGrid* GetGridReference();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHDeviceItem* GetDeviceFormerItem();
    
    UFUNCTION(BlueprintCallable)
    void DebugDisableBillboard();
    
    UFUNCTION(BlueprintCallable)
    void AddCustomMesh(const FGeneratedCustomMesh& CustomMesh);
    
};

