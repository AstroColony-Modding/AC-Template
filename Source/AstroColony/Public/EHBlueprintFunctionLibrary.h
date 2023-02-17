#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EVoxelShapeType.h"
#include "EVoxelTerrainType.h"
#include "EAIProfession.h"
#include "EEHInstanceRotation.h"
#include "EEHVehiclePartType.h"
#include "EGlobalPointType.h"
#include "EHBasicUnlockData.h"
#include "EHGameplayAspectUnlock.h"
#include "EHItemInstance.h"
#include "EHJobModeType.h"
#include "EHPartScheme.h"
#include "Templates/SubclassOf.h"
#include "VoxelShapeData.h"
#include "VoxelTerrainDigData.h"
#include "EHBlueprintFunctionLibrary.generated.h"

class AActor;
class APawn;
class APlayerController;
class IInterface;
class UInterface;
class UActorComponent;
class UEHAIObject;
class UEHAnimalMeshAsset;
class UEHAsset;
class UEHDataProvider;
class UEHDevicesComponent;
class UEHGameUserSettings;
class UEHGlobalPointAsset;
class UEHItem;
class UEHJobModeAsset;
class UEHPlantMeshAsset;
class UEHProfessionMeshAsset;
class UEHResourceItem;
class UEHWorldItem;
class UObject;
class UStaticMeshComponent;
class UWidget;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEHBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static TArray<FString> testSplitWordsRichTextBlock(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    static void testSavingObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> SortActorsByDistance(const FVector& Location, const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable)
    static void SetWidgetHidden(UWidget* Widget, const bool IsHidden);
    
    UFUNCTION(BlueprintCallable)
    static void SetWidgetCollapsed(UWidget* Widget, const bool IsCollapsed);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCameraMoveableWhenPaused(UObject* WorldContextObject, bool bNewIsMoveable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ScaleMeshBetweenPoints(UObject* WorldContextObject, UStaticMeshComponent* Component, const FVector& StartPosition, const FVector& EndPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntVector RotateIntVector(const bool IsForward, const FIntVector& Coord);
    
    UFUNCTION(BlueprintCallable)
    static void ResetPlanetSpawnChances(UEHItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ProjectWorldToScreenAA(APlayerController* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool bPlayerViewportRelative);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUnit2D(const FVector2D& A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPointZero(const FIntPoint& A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPointHundred(const FIntPoint& A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMultiplayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHorizontalRotation(const EEHInstanceRotation Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGameStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGameLoadedFromSavegame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDemo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<UEHResourceItem*> GetWarehouseResources(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVoxelTerrainDigData GetVoxelTerrainDigData(UObject* WorldContextObject, const EVoxelTerrainType VoxelTerrainType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVoxelShapeData GetVoxelShapeData(UObject* WorldContextObject, const EVoxelShapeType VoxelShapeType);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UActorComponent*> GetVehiclePartsByType(const APawn* Pawn, const EEHVehiclePartType PartType);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* GetVehiclePartByTypeAndID(const APawn* Pawn, const EEHVehiclePartType PartType, const FName ID);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* GetVehiclePartByType(const APawn* Pawn, const EEHVehiclePartType PartType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UEHItem* GetVariantItem(const FEHItemInstance& ItemInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetTransformRotated(const EEHInstanceRotation Rotation, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* GetSerializedActorWithID(const UObject* WorldContextObject, FName UniqueID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FString> GetSchemeNames(const UObject* WorldContextObject, const TArray<FEHPartScheme>& Schemes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSavegameVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EEHInstanceRotation GetRotationFromRotator(const FRotator Rotator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EEHInstanceRotation GetRotatedInstanceRotation(const EEHInstanceRotation Rotation, const bool IsForward);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEHProfessionMeshAsset* GetProfessionAsset(UObject* WorldContextObject, const EAIProfession Profession);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<UEHPlantMeshAsset*> GetPlants(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetOrientationAngle(FVector2D Vector2D);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<UEHWorldItem*> GetMiningDeposits(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEHJobModeAsset* GetJobModeAsset(UObject* WorldContextObject, const EHJobModeType JobModeType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<UEHProfessionMeshAsset*> GetHumanProfessions(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEHGlobalPointAsset* GetGlobalPointAsset(UObject* WorldContextObject, const EGlobalPointType GlobalPointType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UEHGameUserSettings* GetEHGameUserSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetDefaultObject(UClass* ObjectClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEHDataProvider* GetDataProvider(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntVector GetCoordsRotated(const EEHInstanceRotation CellRotation, const FIntVector& Coord);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TSubclassOf<UEHAIObject> GetClassForProfession(UObject* WorldContextObject, const EAIProfession Profession);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntVector GetCellCoords(const FVector& position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FEHBasicUnlockData GetBasicUnlockData(UObject* WorldContextObject, const FEHGameplayAspectUnlock& GameplayAspectUnlock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<UEHAnimalMeshAsset*> GetAnimals(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<UEHDevicesComponent*> GetAllModifiedDeviceComponents(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* GetActorWithInterface(const UObject* WorldContextObject, TSubclassOf<UInterface> Interface);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindScreenEdgeLocationForWorldLocation(APlayerController* PlayerController, const FVector& InLocation, const float EdgePercent, const FVector2D ViewportCenterLoc, FVector2D& OutScreenPosition, float& OutRotationAngleDegrees, bool& bIsOnScreen);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> FilterActorsByUniverse(const FName UniverseSignature, const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoGameplayAspectsContainItem(const TArray<FEHGameplayAspectUnlock>& GameplayAspectUnlock, UEHAsset* ItemToCheck);
    
    UFUNCTION(BlueprintCallable)
    static void CalculateVehiclePrimitivesUpVectors(const APawn* Pawn, const EEHVehiclePartType PartType, FVector& PositiveVector, FVector& NegativeVector);
    
    UFUNCTION(BlueprintCallable)
    static void AddOffsetToTransforms(TArray<FTransform> Transforms, const FVector& Offset);
    
};

