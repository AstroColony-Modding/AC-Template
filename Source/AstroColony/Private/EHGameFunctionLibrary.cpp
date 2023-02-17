#include "EHGameFunctionLibrary.h"

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

bool UEHGameFunctionLibrary::IsItemDisabledForDemo(const UObject* WorldContextObject, UEHAsset* Item) {
    return false;
}

bool UEHGameFunctionLibrary::IsDebugModeEnabled(const UObject* WorldContextObject) {
    return false;
}

UEHModularVehicleWidget* UEHGameFunctionLibrary::GetModularVehicleWidget(const UObject* WorldContextObject) {
    return NULL;
}

UEHMapWidget* UEHGameFunctionLibrary::GetMapWidget(const UObject* WorldContextObject) {
    return NULL;
}

UEHHUDWidget* UEHGameFunctionLibrary::GetHUDWidget(const UObject* WorldContextObject) {
    return NULL;
}

AEHHUDGame* UEHGameFunctionLibrary::GetHUDGame(const UObject* WorldContextObject) {
    return NULL;
}

UEHTechTreeComponent* UEHGameFunctionLibrary::GetEHTechTreeManager(const UObject* WorldContextObject) {
    return NULL;
}

UEHSpaceCarryComponent* UEHGameFunctionLibrary::GetEHSpaceCarryComponent(const UObject* WorldContextObject) {
    return NULL;
}

UEHScenarioComponent* UEHGameFunctionLibrary::GetEHScenarioComponent(const UObject* WorldContextObject) {
    return NULL;
}

AEHGamePlayerController* UEHGameFunctionLibrary::GetEHPlayerController(const UObject* WorldContextObject) {
    return NULL;
}

UEHModularVehicles* UEHGameFunctionLibrary::GetEHModularVehiclesComponent(const UObject* WorldContextObject) {
    return NULL;
}

UEHMissionsComponent* UEHGameFunctionLibrary::GetEHMissionComponent(const UObject* WorldContextObject) {
    return NULL;
}

AEHLobbyGameState* UEHGameFunctionLibrary::GetEHLobbyGameState(const UObject* WorldContextObject) {
    return NULL;
}

UEHLayerManager* UEHGameFunctionLibrary::GetEHLayerManager(const UObject* WorldContextObject) {
    return NULL;
}

UEHInventoryComponent* UEHGameFunctionLibrary::GetEHInventoryComponent(const UObject* WorldContextObject) {
    return NULL;
}

UEHGridComponent* UEHGameFunctionLibrary::GetEHGridComponent(const UObject* WorldContextObject) {
    return NULL;
}

AEHGameState* UEHGameFunctionLibrary::GetEHGameState(const UObject* WorldContextObject) {
    return NULL;
}

UEHGameInstance* UEHGameFunctionLibrary::GetEHGameInstance(const UObject* WorldContextObject) {
    return NULL;
}

UEHCheatComponent* UEHGameFunctionLibrary::GetEHCheatComponent(const UObject* WorldContextObject) {
    return NULL;
}

AEHCharacter* UEHGameFunctionLibrary::GetEHCharacter(const UObject* WorldContextObject) {
    return NULL;
}

TArray<AEHGamePlayerController*> UEHGameFunctionLibrary::GetAllPlayerControllers(const UObject* WorldContextObject) {
    return TArray<AEHGamePlayerController*>();
}

UEHAchievementsManager* UEHGameFunctionLibrary::GetAchievementsManager(const UObject* WorldContextObject) {
    return NULL;
}

bool UEHGameFunctionLibrary::CheckDebugMode(const UObject* WorldContextObject, EEHDebugMode DebugMode) {
    return false;
}

UEHGameFunctionLibrary::UEHGameFunctionLibrary() {
}

