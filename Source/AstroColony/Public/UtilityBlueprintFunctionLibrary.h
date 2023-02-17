#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "InputCoreTypes.h"
#include "MeshPivotInfo.h"
#include "UtilityBlueprintFunctionLibrary.generated.h"

class AActor;
class AEHGrid;
class UDataTable;
class ULevel;
class UObject;
class UWorld;

UCLASS(Blueprintable)
class ASTROCOLONY_API UUtilityBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilityBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void WriteStringToFile(const FString& AssetPath, const FString& StringToWrite);
    
    UFUNCTION(BlueprintCallable)
    static void RerunConstruction(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGameWithEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsGameRunning(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat GetQuaternionFromRotator(const FRotator& Rotator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FMeshPivotInfo> GetPivotInfoFromFiles();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMeshPivotInfo GetPivotInfoFromFile(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetObjectProperties(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetItemNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetFriendlyDisplayName(const FKey& Key);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetEnumNames(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static ULevel* GetCurrentLevel(UWorld* EditorWorld);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCapitalLetterByIndex(const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAverageFPS();
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetActorsInBox(UWorld* EditorWorld, const FBox& Box);
    
    UFUNCTION(BlueprintCallable)
    static ULevel* GetActorLevel(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void GenerateMissingDatatableRows(const TArray<FName> Names, UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AEHGrid* FindGrid(const UObject* WorldContextObject, const FName GridUniqueID);
    
    UFUNCTION(BlueprintCallable)
    static void CopyToClipboard(const FString& StringToCopy);
    
    UFUNCTION(BlueprintCallable)
    static void CopyPropertiesFromOneObjectToAnother(UObject* SourceObject, UObject* TargetObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float CalculateRemainingTime(UObject* WorldContextObject, const FTimerHandle& TimerHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float CalculateProgress(UObject* WorldContextObject, float PreviouslyCompletedProgress, float RemainingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BitmaskTestBit(int32 BitMask, uint8 Bit);
    
    UFUNCTION(BlueprintCallable)
    static void BitmaskSetBit(UPARAM(Ref) int32& BitMask, uint8 Bit);
    
    UFUNCTION(BlueprintCallable)
    static void BitmaskClearBit(UPARAM(Ref) int32& BitMask, uint8 Bit);
    
    UFUNCTION(BlueprintCallable)
    static void BitmaskChangeBit(UPARAM(Ref) int32& BitMask, uint8 Bit, bool Value);
    
};

