#include "UtilityBlueprintFunctionLibrary.h"

class AActor;
class AEHGrid;
class UDataTable;
class ULevel;
class UObject;
class UWorld;

void UUtilityBlueprintFunctionLibrary::WriteStringToFile(const FString& AssetPath, const FString& StringToWrite) {
}

void UUtilityBlueprintFunctionLibrary::RerunConstruction(AActor* Actor) {
}

bool UUtilityBlueprintFunctionLibrary::IsGameWithEditor() {
    return false;
}

bool UUtilityBlueprintFunctionLibrary::IsGameRunning(UObject* WorldContextObject) {
    return false;
}

FQuat UUtilityBlueprintFunctionLibrary::GetQuaternionFromRotator(const FRotator& Rotator) {
    return FQuat{};
}

TArray<FMeshPivotInfo> UUtilityBlueprintFunctionLibrary::GetPivotInfoFromFiles() {
    return TArray<FMeshPivotInfo>();
}

FMeshPivotInfo UUtilityBlueprintFunctionLibrary::GetPivotInfoFromFile(const FString& Filename) {
    return FMeshPivotInfo{};
}

TArray<FName> UUtilityBlueprintFunctionLibrary::GetObjectProperties(UObject* Object) {
    return TArray<FName>();
}

TArray<FName> UUtilityBlueprintFunctionLibrary::GetItemNames() {
    return TArray<FName>();
}

FText UUtilityBlueprintFunctionLibrary::GetFriendlyDisplayName(const FKey& Key) {
    return FText::GetEmpty();
}

TArray<FName> UUtilityBlueprintFunctionLibrary::GetEnumNames(const FString& Name) {
    return TArray<FName>();
}

ULevel* UUtilityBlueprintFunctionLibrary::GetCurrentLevel(UWorld* EditorWorld) {
    return NULL;
}

FString UUtilityBlueprintFunctionLibrary::GetCapitalLetterByIndex(const int32 Index) {
    return TEXT("");
}

float UUtilityBlueprintFunctionLibrary::GetAverageFPS() {
    return 0.0f;
}

TArray<AActor*> UUtilityBlueprintFunctionLibrary::GetActorsInBox(UWorld* EditorWorld, const FBox& Box) {
    return TArray<AActor*>();
}

ULevel* UUtilityBlueprintFunctionLibrary::GetActorLevel(AActor* Actor) {
    return NULL;
}

void UUtilityBlueprintFunctionLibrary::GenerateMissingDatatableRows(const TArray<FName> Names, UDataTable* DataTable) {
}

AEHGrid* UUtilityBlueprintFunctionLibrary::FindGrid(const UObject* WorldContextObject, const FName GridUniqueID) {
    return NULL;
}

void UUtilityBlueprintFunctionLibrary::CopyToClipboard(const FString& StringToCopy) {
}

void UUtilityBlueprintFunctionLibrary::CopyPropertiesFromOneObjectToAnother(UObject* SourceObject, UObject* TargetObject) {
}

float UUtilityBlueprintFunctionLibrary::CalculateRemainingTime(UObject* WorldContextObject, const FTimerHandle& TimerHandle) {
    return 0.0f;
}

float UUtilityBlueprintFunctionLibrary::CalculateProgress(UObject* WorldContextObject, float PreviouslyCompletedProgress, float RemainingTime) {
    return 0.0f;
}

bool UUtilityBlueprintFunctionLibrary::BitmaskTestBit(int32 BitMask, uint8 Bit) {
    return false;
}

void UUtilityBlueprintFunctionLibrary::BitmaskSetBit(int32& BitMask, uint8 Bit) {
}

void UUtilityBlueprintFunctionLibrary::BitmaskClearBit(int32& BitMask, uint8 Bit) {
}

void UUtilityBlueprintFunctionLibrary::BitmaskChangeBit(int32& BitMask, uint8 Bit, bool Value) {
}

UUtilityBlueprintFunctionLibrary::UUtilityBlueprintFunctionLibrary() {
}

