#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "WidgetPool.h"
#include "TGWidgetPoolingManager.generated.h"

class UTGUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TGCOREUI_API UTGWidgetPoolingManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UTGUserWidget>, FWidgetPool> WidgetPoolMap;
    
public:
    UTGWidgetPoolingManager();
};

