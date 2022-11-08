#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EEHStartingStationSize.h"
#include "VoxelTerrainDigData.h"
#include "TGIUIDataProvider.h"
#include "EHObjectLoaderInterface.h"
#include "EHHeadGroom.h"
#include "VoxelShapeData.h"
#include "DecalInfo.h"
#include "EHTrackableInfo.h"
#include "EHStartingStation.h"
#include "EHPlanetoidDecalInfo.h"
#include "EHPlanetoidParticleInfo.h"
#include "EEHTrackableType.h"
#include "EEHDecalType.h"
#include "EHDataProvider.generated.h"

class UEHAsset;
class UEHItem;
class UEHVisualMeshAsset;
class UEHCustomMeshAsset;
class UEHProfessionMeshAsset;
class UEHAIObject;
class AActor;
class UDataTable;
class UEHBlockItem;
class UDataAsset;
class UStaticMesh;
class UMaterialInterface;
class UTexture2D;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHDataProvider : public UObject, public ITGIUIDataProvider, public IEHObjectLoaderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEHItem*> LoadedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UEHVisualMeshAsset*> LoadedCustomVisualMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UEHCustomMeshAsset*> LoadedCustomMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHAsset*> HeightExtenderAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHAsset*> FoundationBlockAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHProfessionMeshAsset*> HumanProfessions;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UEHAIObject> ProfessionClassMap[10];
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> CelestialBodiesMap[11];
    
    UPROPERTY(EditAnywhere)
    FDecalInfo OutletInfos[7];
    
    UPROPERTY(EditAnywhere)
    FEHTrackableInfo TrackableInfos[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> HumanGenericNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> HumanMaleNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> HumanFemaleNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHHeadGroom> HumanMaleHeadMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHHeadGroom> HumanFemaleHeadMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PlanetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHStartingStation> StartingSpaceStations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ConnectionLineMesh;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> ConnectionLineMaterials[4];
    
    UPROPERTY(EditAnywhere)
    UEHBlockItem* PlanetoidResourceItems[12];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHBlockItem*> PlanetoidGroundDeposits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* DirtResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* QuartzResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* FloorRecyclable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* WallRecyclable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> DestructibleSpawnChances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> VisualSpawnChances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHPlanetoidDecalInfo> PlanetoidDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHPlanetoidParticleInfo> PlanetoidParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHAsset* DestructionGameplayEffect;
    
private:
    UPROPERTY(EditAnywhere)
    FVoxelTerrainDigData VoxelTerrainDigDatas[12];
    
    UPROPERTY(EditAnywhere)
    FVoxelShapeData VoxelShapeDatas[10];
    
    UPROPERTY(EditAnywhere)
    UTexture2D* BillboardTextures[14];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UDataTable*> DataTableMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UDataAsset*> DataAssetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SandboxIcon;
    
public:
    UEHDataProvider();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEHTrackableInfo GetTrackableInfo(const EEHTrackableType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FEHStartingStation> GetStartingStations(const EEHStartingStationSize Size);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDecalInfo GetOutletInfo(const EEHDecalType Type);
    
    
    // Fix for true pure virtual functions not being implemented
};

