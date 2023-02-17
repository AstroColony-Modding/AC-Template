#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EEHVehicleAction.h"
#include "EEHVehiclePartMirrorType.h"
#include "EEHVehiclePartType.h"
#include "EEHVehicleType.h"
#include "EHItemInstance.h"
#include "EHObjectLoaderInterface.h"
#include "EHPartSuffix.h"
#include "EHPawns.h"
#include "EHSaveGameInterface.h"
#include "EHVehicleDefinition.h"
#include "EHVehiclePart.h"
#include "EHVehiclePartTypeData.h"
#include "EHVehicleTypeData.h"
#include "EHModularVehicles.generated.h"

class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHModularVehicles : public UActorComponent, public IEHSaveGameInterface, public IEHObjectLoaderInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVehicleModified, int32, VehicleID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnVehicleChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHVehicleDefinition> DefaultVehicles;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEHVehicleTypeData VehiclesDatas[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEHVehiclePartTypeData VehiclesPartDatas[14];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> PartMirrorNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEHPartSuffix> PartSuffixes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHVehicleDefinition> CustomVehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedVehicleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedVehiclePartID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAddingPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastVehicleDefinitionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastVehicleInstanceID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleModified OnVehicleModified;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleChanged OnVehiclesDataChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleChanged OnSelectedVehicleChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleChanged OnSelectedVehiclePartChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EEHVehicleType, FEHPawns> VehiclesMap;
    
    UEHModularVehicles();
    UFUNCTION(BlueprintCallable)
    void UpdateVehicleName(const FString& VehicleName);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePartSize(const FVector& Size);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePartScheme(const uint8 SchemeID);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePartPlacement(const FVector& Placement);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePartColors(const TArray<FLinearColor>& Colors);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMirrorMode(const EEHVehiclePartMirrorType MirrorType, const bool IsSize);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterVehicle(const EEHVehicleType Type, APawn* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void SelectVehiclePartByTypeAndTag(const EEHVehiclePartType Type, const FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void SelectVehiclePart(const int32 VehiclePartID, const bool IsAdding);
    
    UFUNCTION(BlueprintCallable)
    void SelectVehicle(const int32 VehicleID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveVehicle();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSelectedPart();
    
    UFUNCTION(BlueprintCallable)
    void RegisterVehicle(const EEHVehicleType Type, APawn* Vehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVehicleUnlocked(const EEHVehicleType VehicleType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefaultID(const int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionPossible(const FEHVehicleTypeData& VehicleData, const EEHVehicleAction VehicleAction);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleItemUnlocked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetVehiclePartMirrorText(const EEHVehiclePartMirrorType Mirror);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEHVehiclePartTypeData GetVehiclePartData(const EEHVehiclePartType VehiclePartType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEHVehicleDefinition GetVehicleDefinition(const int32 VehicleID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEHVehicleTypeData GetVehicleData(const EEHVehicleType VehicleType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEHPartSuffix GetSuffixForName(const FName& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEHVehicleDefinition GetSelectedVehicleDetails();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEHVehicleTypeData GetSelectedVehicleData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FEHItemInstance> GetSelectedVehicleCost();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEHVehiclePart GetSelectedPartDetails();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEHVehiclePartType GetSelectedCompatiblePartType();
    
    UFUNCTION(BlueprintCallable)
    void DuplicateVehicle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSelectedPartBeRemoved();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddPart(const EEHVehiclePartType VehiclePartType);
    
    UFUNCTION(BlueprintCallable)
    void AddPart(const FTransform& Transform, const EEHVehiclePartType VehiclePartType);
    
    
    // Fix for true pure virtual functions not being implemented
};

