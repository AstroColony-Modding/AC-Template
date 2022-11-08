#pragma once
#include "CoreMinimal.h"
#include "EHCatchedAsteroid.h"
#include "EHCraftingObject.h"
#include "UObject/NoExportTypes.h"
#include "EAsteroidCatchStateChanged.h"
#include "UObject/NoExportTypes.h"
#include "EHAsteroidData.h"
#include "EHAsteroidsCatcher.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHAsteroidsCatcher : public UEHCraftingObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAsteroidCatchStateChanged, EAsteroidCatchStateChanged, CatchStateChange);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttractedAsteroidIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LaserBeamParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> LaserBeamOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ProcessingParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ProcessingOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AsteroidMeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AsteroidScale;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsteroidCatchStateChanged OnAsteroidCatchStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEHCatchedAsteroid AttractedAsteroid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEHCatchedAsteroid ProcessedAsteroid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AsteroidProcessingTime;
    
public:
    UEHAsteroidsCatcher();
    UFUNCTION(BlueprintCallable)
    bool RemoveProcessedAsteroid();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAttractedAsteroid();
    
    UFUNCTION(BlueprintCallable)
    void NotifyAsteroidCatched();
    
    UFUNCTION(BlueprintCallable)
    void NotifyAsteroidAttraceted(const FEHAsteroidData& AsteroidData, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProcessingAsteroid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttractingAsteroid();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleGameStarted();
    
};

