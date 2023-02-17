#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EEHDebugMode.h"
#include "EHGameFunctionLibrary.generated.h"

class AEHCharacter;
class AEHGamePlayerController;
class AEHGameState;
class AEHHUDGame;
class AEHLobbyGameState;
class UEHAchievementsManager;
class UEHAsset;
class UEHCheatComponent;
class UEHGameInstance;
class UEHGridComponent;
class UEHHUDWidget;
class UEHInventoryComponent;
class UEHLayerManager;
class UEHMapWidget;
class UEHMissionsComponent;
class UEHModularVehicleWidget;
class UEHModularVehicles;
class UEHScenarioComponent;
class UEHSpaceCarryComponent;
class UEHTechTreeComponent;
class UObject;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHGameFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEHGameFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsItemDisabledForDemo(const UObject* WorldContextObject, UEHAsset* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDebugModeEnabled(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEHModularVehicleWidget* GetModularVehicleWidget(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEHMapWidget* GetMapWidget(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEHHUDWidget* GetHUDWidget(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AEHHUDGame* GetHUDGame(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEHTechTreeComponent* GetEHTechTreeManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEHSpaceCarryComponent* GetEHSpaceCarryComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEHScenarioComponent* GetEHScenarioComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AEHGamePlayerController* GetEHPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEHModularVehicles* GetEHModularVehiclesComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEHMissionsComponent* GetEHMissionComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AEHLobbyGameState* GetEHLobbyGameState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEHLayerManager* GetEHLayerManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEHInventoryComponent* GetEHInventoryComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEHGridComponent* GetEHGridComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AEHGameState* GetEHGameState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEHGameInstance* GetEHGameInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEHCheatComponent* GetEHCheatComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AEHCharacter* GetEHCharacter(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<AEHGamePlayerController*> GetAllPlayerControllers(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEHAchievementsManager* GetAchievementsManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CheckDebugMode(const UObject* WorldContextObject, EEHDebugMode DebugMode);
    
};

