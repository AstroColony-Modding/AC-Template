#include "EHBlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class UObject;
class UWidget;
class AActor;
class UStaticMeshComponent;
class APlayerController;
class UEHItem;
class UEHResourceItem;
class UEHGlobalPointAsset;
class APawn;
class UActorComponent;
class UEHAnimalMeshAsset;
class UEHProfessionMeshAsset;
class UEHPlantMeshAsset;
class UInterface;
class IInterface;
class UEHWorldItem;
class UEHJobModeAsset;
class UEHAsset;
class UEHGameUserSettings;
class UEHDataProvider;
class UEHAIObject;
class UEHDevicesComponent;

TArray<FString> UEHBlueprintFunctionLibrary::testSplitWordsRichTextBlock(const FString& String) {
    return TArray<FString>();
}

void UEHBlueprintFunctionLibrary::testSavingObject(UObject* Object) {
}

TArray<AActor*> UEHBlueprintFunctionLibrary::SortActorsByDistance(const FVector& Location, const TArray<AActor*>& Actors) {
    return TArray<AActor*>();
}

void UEHBlueprintFunctionLibrary::SetWidgetHidden(UWidget* Widget, const bool IsHidden) {
}

void UEHBlueprintFunctionLibrary::SetWidgetCollapsed(UWidget* Widget, const bool IsCollapsed) {
}

void UEHBlueprintFunctionLibrary::SetCameraMoveableWhenPaused(UObject* WorldContextObject, bool bNewIsMoveable) {
}

void UEHBlueprintFunctionLibrary::ScaleMeshBetweenPoints(UObject* WorldContextObject, UStaticMeshComponent* Component, const FVector& StartPosition, const FVector& EndPosition) {
}

FIntVector UEHBlueprintFunctionLibrary::RotateIntVector(const bool IsForward, const FIntVector& Coord) {
    return FIntVector{};
}

void UEHBlueprintFunctionLibrary::ResetPlanetSpawnChances(UEHItem* Item) {
}

bool UEHBlueprintFunctionLibrary::ProjectWorldToScreenAA(APlayerController* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool bPlayerViewportRelative) {
    return false;
}

bool UEHBlueprintFunctionLibrary::IsUnit2D(const FVector2D& A) {
    return false;
}

bool UEHBlueprintFunctionLibrary::IsPointZero(const FIntPoint& A) {
    return false;
}

bool UEHBlueprintFunctionLibrary::IsPointHundred(const FIntPoint& A) {
    return false;
}

bool UEHBlueprintFunctionLibrary::IsMultiplayer() {
    return false;
}

bool UEHBlueprintFunctionLibrary::IsHorizontalRotation(const EEHInstanceRotation Rotation) {
    return false;
}

bool UEHBlueprintFunctionLibrary::IsGameLoadedFromSavegame() {
    return false;
}

bool UEHBlueprintFunctionLibrary::IsDemo() {
    return false;
}

TArray<UEHResourceItem*> UEHBlueprintFunctionLibrary::GetWarehouseResources(UObject* WorldContextObject) {
    return TArray<UEHResourceItem*>();
}

FVoxelTerrainDigData UEHBlueprintFunctionLibrary::GetVoxelTerrainDigData(UObject* WorldContextObject, const EVoxelTerrainType VoxelTerrainType) {
    return FVoxelTerrainDigData{};
}

FVoxelShapeData UEHBlueprintFunctionLibrary::GetVoxelShapeData(UObject* WorldContextObject, const EVoxelShapeType VoxelShapeType) {
    return FVoxelShapeData{};
}

TArray<UActorComponent*> UEHBlueprintFunctionLibrary::GetVehiclePartsByType(const APawn* Pawn, const EEHVehiclePartType PartType) {
    return TArray<UActorComponent*>();
}

UActorComponent* UEHBlueprintFunctionLibrary::GetVehiclePartByTypeAndID(const APawn* Pawn, const EEHVehiclePartType PartType, const FName ID) {
    return NULL;
}

UActorComponent* UEHBlueprintFunctionLibrary::GetVehiclePartByType(const APawn* Pawn, const EEHVehiclePartType PartType) {
    return NULL;
}

UEHItem* UEHBlueprintFunctionLibrary::GetVariantItem(const FEHItemInstance& ItemInstance) {
    return NULL;
}

FTransform UEHBlueprintFunctionLibrary::GetTransformRotated(const EEHInstanceRotation Rotation, const FTransform& Transform) {
    return FTransform{};
}

AActor* UEHBlueprintFunctionLibrary::GetSerializedActorWithID(const UObject* WorldContextObject, FName UniqueID) {
    return NULL;
}

TArray<FString> UEHBlueprintFunctionLibrary::GetSchemeNames(const UObject* WorldContextObject, const TArray<FEHPartScheme>& Schemes) {
    return TArray<FString>();
}

int32 UEHBlueprintFunctionLibrary::GetSavegameVersion() {
    return 0;
}

EEHInstanceRotation UEHBlueprintFunctionLibrary::GetRotationFromRotator(const FRotator Rotator) {
    return EEHInstanceRotation::Rot0;
}

EEHInstanceRotation UEHBlueprintFunctionLibrary::GetRotatedInstanceRotation(const EEHInstanceRotation Rotation, const bool IsForward) {
    return EEHInstanceRotation::Rot0;
}

UEHProfessionMeshAsset* UEHBlueprintFunctionLibrary::GetProfessionAsset(UObject* WorldContextObject, const EAIProfession Profession) {
    return NULL;
}

TArray<UEHPlantMeshAsset*> UEHBlueprintFunctionLibrary::GetPlants(UObject* WorldContextObject) {
    return TArray<UEHPlantMeshAsset*>();
}

float UEHBlueprintFunctionLibrary::GetOrientationAngle(FVector2D Vector2D) {
    return 0.0f;
}

TArray<UEHWorldItem*> UEHBlueprintFunctionLibrary::GetMiningDeposits(UObject* WorldContextObject) {
    return TArray<UEHWorldItem*>();
}

UEHJobModeAsset* UEHBlueprintFunctionLibrary::GetJobModeAsset(UObject* WorldContextObject, const EHJobModeType JobModeType) {
    return NULL;
}

TArray<UEHProfessionMeshAsset*> UEHBlueprintFunctionLibrary::GetHumanProfessions(UObject* WorldContextObject) {
    return TArray<UEHProfessionMeshAsset*>();
}

UEHGlobalPointAsset* UEHBlueprintFunctionLibrary::GetGlobalPointAsset(UObject* WorldContextObject, const EGlobalPointType GlobalPointType) {
    return NULL;
}

UEHGameUserSettings* UEHBlueprintFunctionLibrary::GetEHGameUserSettings() {
    return NULL;
}

UObject* UEHBlueprintFunctionLibrary::GetDefaultObject(UClass* ObjectClass) {
    return NULL;
}

UEHDataProvider* UEHBlueprintFunctionLibrary::GetDataProvider(UObject* WorldContextObject) {
    return NULL;
}

FIntVector UEHBlueprintFunctionLibrary::GetCoordsRotated(const EEHInstanceRotation CellRotation, const FIntVector& Coord) {
    return FIntVector{};
}

TSubclassOf<UEHAIObject> UEHBlueprintFunctionLibrary::GetClassForProfession(UObject* WorldContextObject, const EAIProfession Profession) {
    return NULL;
}

FIntVector UEHBlueprintFunctionLibrary::GetCellCoords(const FVector& position) {
    return FIntVector{};
}

FEHBasicUnlockData UEHBlueprintFunctionLibrary::GetBasicUnlockData(UObject* WorldContextObject, const FEHGameplayAspectUnlock& GameplayAspectUnlock) {
    return FEHBasicUnlockData{};
}

TArray<UEHAnimalMeshAsset*> UEHBlueprintFunctionLibrary::GetAnimals(UObject* WorldContextObject) {
    return TArray<UEHAnimalMeshAsset*>();
}

TArray<UEHDevicesComponent*> UEHBlueprintFunctionLibrary::GetAllModifiedDeviceComponents(const UObject* WorldContextObject) {
    return TArray<UEHDevicesComponent*>();
}

AActor* UEHBlueprintFunctionLibrary::GetActorWithInterface(const UObject* WorldContextObject, TSubclassOf<UInterface> Interface) {
    return NULL;
}

void UEHBlueprintFunctionLibrary::FindScreenEdgeLocationForWorldLocation(APlayerController* PlayerController, const FVector& InLocation, const float EdgePercent, const FVector2D ViewportCenterLoc, FVector2D& OutScreenPosition, float& OutRotationAngleDegrees, bool& bIsOnScreen) {
}

TArray<AActor*> UEHBlueprintFunctionLibrary::FilterActorsByUniverse(const FName UniverseSignature, const TArray<AActor*>& Actors) {
    return TArray<AActor*>();
}

bool UEHBlueprintFunctionLibrary::DoGameplayAspectsContainItem(const TArray<FEHGameplayAspectUnlock>& GameplayAspectUnlock, UEHAsset* ItemToCheck) {
    return false;
}

void UEHBlueprintFunctionLibrary::CalculateVehiclePrimitivesUpVectors(const APawn* Pawn, const EEHVehiclePartType PartType, FVector& PositiveVector, FVector& NegativeVector) {
}

void UEHBlueprintFunctionLibrary::AddOffsetToTransforms(TArray<FTransform> Transforms, const FVector& Offset) {
}

UEHBlueprintFunctionLibrary::UEHBlueprintFunctionLibrary() {
}

