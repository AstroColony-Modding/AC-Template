#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EEHDebugMode.h"
#include "EHGameFunctionLibrary.generated.h"

class UEHModularVehicleWidget;
class UObject;
class UEHAsset;
class UEHHUDWidget;
class UEHMapWidget;
class AEHGamePlayerController;
class UEHTechTreeComponent;
class AEHHUDGame;
class UEHSpaceCarryComponent;
class UEHScenarioComponent;
class UEHModularVehicles;
class UEHMissionsComponent;
class AEHLobbyGameState;
class UEHLayerManager;
class UEHInventoryComponent;
class UEHGridComponent;
class AEHGameState;
class UEHGameInstance;
class UEHCheatComponent;
class AEHCharacter;
class UEHAchievementsManager;

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
    static UEHAchievementsManager* GetAchievementsManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CheckDebugMode(const UObject* WorldContextObject, EEHDebugMode DebugMode);
    
};

