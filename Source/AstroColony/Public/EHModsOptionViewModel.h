#pragma once
#include "CoreMinimal.h"
#include "UGCPackage.h"
#include "TextBindable.h"
#include "EHViewModel.h"
#include "Templates/SubclassOf.h"
#include "EHModsOptionViewModel.generated.h"

class AActor;
class UACModConfig;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHModsOptionViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable OptionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUGCPackage UGCPackage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ActorReplacements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> Classes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Maps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UACModConfig* ModConfig;
    
    UEHModsOptionViewModel();
};

