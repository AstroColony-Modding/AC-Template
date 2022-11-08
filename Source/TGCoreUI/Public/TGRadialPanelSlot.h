#pragma once
#include "CoreMinimal.h"
#include "Components/PanelSlot.h"
#include "UObject/NoExportTypes.h"
#include "TGRadialPanelSlot.generated.h"

UCLASS(Blueprintable)
class TGCOREUI_API UTGRadialPanelSlot : public UPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadialPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SlotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Alignment;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SlotSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
    UTGRadialPanelSlot();
    UFUNCTION(BlueprintCallable)
    void SetZOrder(int32 InZOrder);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotSize(const FVector2D& InSlotSize);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotOffset(const FVector2D& InSlotOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetRadialPosition(float InRadialPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoSize(bool InbAutoSize);
    
    UFUNCTION(BlueprintCallable)
    void SetAlignment(const FVector2D& InAlignment);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetZOrder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetSlotSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetSlotOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadialPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetAlignment() const;
    
};

