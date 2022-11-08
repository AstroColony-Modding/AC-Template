#pragma once
#include "CoreMinimal.h"
#include "TGUISubsystem.h"
#include "TGUISceneSubsystem.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class TGCOREUI_API UTGUISceneSubsystem : public UTGUISubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDesiredSceneWidth;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> ContainerWidgets;
    
public:
    UTGUISceneSubsystem();
};

