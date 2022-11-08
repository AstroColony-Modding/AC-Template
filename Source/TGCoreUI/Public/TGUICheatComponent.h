#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TGUICheatComponent.generated.h"

class APlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TGCOREUI_API UTGUICheatComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* LocalPlayerController;
    
public:
    UTGUICheatComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetDebugDataToDraw() const;
    
};

