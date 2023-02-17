#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EGameplayModEvaluationChannel.h"
#include "NetSerializeScriptStructCache.h"
#include "AbilitySystemGlobals.generated.h"

class UCurveTable;
class UDataTable;
class UGameplayCueManager;
class UGameplayTagReponseTable;

UCLASS(Blueprintable, Config=Game)
class GAMEPLAYABILITIES_API UAbilitySystemGlobals : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath AbilitySystemGlobalsClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActivateFailIsDeadTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActivateFailIsDeadName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActivateFailCooldownTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActivateFailCooldownName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActivateFailCostTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActivateFailCostName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActivateFailTagsBlockedTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActivateFailTagsBlockedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActivateFailTagsMissingTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActivateFailTagsMissingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActivateFailNetworkingTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActivateFailNetworkingName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimalReplicationTagCountBits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetSerializeScriptStructCache TargetDataStructCache;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowGameplayModEvaluationChannels;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GameplayModEvaluationChannelAliases[10];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath GlobalCurveTableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveTable* GlobalCurveTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath GlobalAttributeMetaDataTableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GlobalAttributeMetaDataTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath GlobalAttributeSetDefaultsTableName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> GlobalAttributeSetDefaultsTableNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurveTable*> GlobalAttributeDefaultsTables;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath GlobalGameplayCueManagerClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath GlobalGameplayCueManagerName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> GameplayCueNotifyPaths;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath GameplayTagResponseTableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayTagReponseTable* GameplayTagResponseTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PredictTargetGameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayCueManager* GlobalGameplayCueManager;
    
public:
    UAbilitySystemGlobals();
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleIgnoreAbilitySystemCosts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleIgnoreAbilitySystemCooldowns();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ServerEndPlayerAbility(const FString& AbilityNameMatch);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ServerCancelPlayerAbility(const FString& AbilityNameMatch);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ServerActivatePlayerAbility(const FString& AbilityNameMatch);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListPlayerAbilities();
    
};

