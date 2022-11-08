#pragma once
#include "CoreMinimal.h"
#include "EAIProfession.generated.h"

UENUM(BlueprintType)
enum class EAIProfession : uint8 {
    None,
    Trainee,
    Scientist,
    Cook,
    Engineer,
    Farmer,
    Miner,
    Breeder,
    Transporter,
    RemoteFabricator,
    _MAX UMETA(Hidden),
};

