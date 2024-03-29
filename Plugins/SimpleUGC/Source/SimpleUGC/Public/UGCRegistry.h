#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "UGCPackage.h"
#include "UGCRegistry.generated.h"

class AActor;

UCLASS(Blueprintable)
class SIMPLEUGC_API UUGCRegistry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUGCPackage> UGCPackages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, TSubclassOf<AActor>> RegisteredOverrides;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> LoadedAssets;
    
public:
    UUGCRegistry();
    UFUNCTION(BlueprintCallable)
    void RegisterOverrideForClass(TSubclassOf<AActor> ClassToOverride, TSubclassOf<AActor> OverrideClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetOverrideForActorClass(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMapsInPackage(const FUGCPackage& Package, TArray<FName>& Maps);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllClassesInPackage(const FUGCPackage& Package, TArray<UClass*>& Classes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActorClassesWithReplacementActorComponentsInPackage(const FUGCPackage& Package, TArray<TSubclassOf<AActor>>& ActorClasses);
    
    UFUNCTION(BlueprintCallable)
    bool FindUGCPackages();
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideForClass(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyOverridesForActorClass(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyAllOverridesInPackage(FUGCPackage Package);
    
};

