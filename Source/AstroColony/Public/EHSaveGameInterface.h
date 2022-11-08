#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EHSaveGameInterface.generated.h"

class UEHSaveGame;

UINTERFACE(Blueprintable)
class ASTROCOLONY_API UEHSaveGameInterface : public UInterface {
    GENERATED_BODY()
};

class ASTROCOLONY_API IEHSaveGameInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldSerializeUniqueClassSavegameData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldSerializeNamedActorSavegameSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldSerializeNamedActorSavegameData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSerializedActorUniqueName(const FName UniqueName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SavingGameData(UEHSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SavegameObjectSerializeDataLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadingGameData(UEHSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetSerializedActorUniqueName();
    
};

