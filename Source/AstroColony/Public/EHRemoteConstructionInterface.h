#pragma once
#include "CoreMinimal.h"
#include "EHInteractionInterface.h"
#include "EHItemInstance.h"
#include "EHRemoteConstructionInterface.generated.h"

class UTexture2D;
class UEHRemoteFabricatorObject;

UINTERFACE()
class ASTROCOLONY_API UEHRemoteConstructionInterface : public UEHInteractionInterface {
    GENERATED_BODY()
};

class ASTROCOLONY_API IEHRemoteConstructionInterface : public IEHInteractionInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 TotalExpeditionsCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartRemoteConstruction(UEHRemoteFabricatorObject* RemoteFabricatorObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExpeditionConstruct();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsConstructionDone();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetUniqueID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    uint8 GetPhasesCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UTexture2D* GetIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FEHItemInstance> GetExpeditionCost();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 CompletedExpeditions();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelRemoteConstruction(UEHRemoteFabricatorObject* RemoteFabricatorObject);
    
};

