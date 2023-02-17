#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EEHThrusterSize.h"
#include "EHCraftingObject.h"
#include "EHThrusterObject.generated.h"

class UEHFlareComponent;
class UEHThrusterNetwork;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHThrusterObject : public UEHCraftingObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHThrusterSize ThrusterSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GeneratedThrust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEHFlareComponent> FlareTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform FlareOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHFlareComponent* Flare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ThrustDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ThrustVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Power;
    
    UEHThrusterObject();
    UFUNCTION(BlueprintCallable)
    void SetThrustPowerManual(const float PowerIn);
    
    UFUNCTION(BlueprintCallable)
    void SetThrustDirectionManual(const float AngleYAxis, const float AngleZAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThrusterActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHThrusterNetwork* GetThrusterNetwork();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetFlareDirection(const float AngleYAxis, const float AngleZAxis);
    
    UFUNCTION(BlueprintCallable)
    void ApplyThrusterSetupToConnected();
    
};

