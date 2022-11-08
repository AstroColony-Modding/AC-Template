#include "VoxelWorld.h"
#include "Templates/SubclassOf.h"
#include "VoxelWorldRootComponent.h"
#include "VoxelLineBatchComponent.h"

class UVoxelGenerator;
class UVoxelMultiplayerInterface;
class UVoxelGeneratorCache;

void AVoxelWorld::SetWorldSize(int32 NewWorldSizeInVoxels) {
}

void AVoxelWorld::SetRenderOctreeDepth(int32 NewDepth) {
}

void AVoxelWorld::SetOffset(const FIntVector& OffsetInVoxels) {
}

void AVoxelWorld::SetGeneratorObject(UVoxelGenerator* NewGenerator) {
}

void AVoxelWorld::SetGeneratorClass(TSubclassOf<UVoxelGenerator> NewGeneratorClass) {
}

void AVoxelWorld::SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse) {
}

FVector AVoxelWorld::LocalToGlobalFloatBP(const FVector& position) const {
    return FVector{};
}

FBox AVoxelWorld::LocalToGlobalBounds(const FVoxelIntBox& Bounds) const {
    return FBox{};
}

FVector AVoxelWorld::LocalToGlobal(const FIntVector& position) const {
    return FVector{};
}

bool AVoxelWorld::IsLoaded() const {
    return false;
}

bool AVoxelWorld::IsCreated() const {
    return false;
}

FVector AVoxelWorld::GlobalToLocalFloatBP(const FVector& position) const {
    return FVector{};
}

FVoxelIntBox AVoxelWorld::GlobalToLocalBounds(const FBox& Bounds) const {
    return FVoxelIntBox{};
}

FIntVector AVoxelWorld::GlobalToLocal(const FVector& position, EVoxelWorldCoordinatesRounding Rounding) const {
    return FIntVector{};
}

TArray<FIntVector> AVoxelWorld::GetNeighboringPositions(const FVector& GlobalPosition) const {
    return TArray<FIntVector>();
}

UVoxelMultiplayerInterface* AVoxelWorld::GetMultiplayerInterfaceInstance() const {
    return NULL;
}

FVoxelGeneratorInit AVoxelWorld::GetGeneratorInit() const {
    return FVoxelGeneratorInit{};
}

UVoxelGeneratorCache* AVoxelWorld::GetGeneratorCache() const {
    return NULL;
}

void AVoxelWorld::DestroyWorld() {
}

void AVoxelWorld::CreateWorld(FVoxelWorldCreateInfo Info) {
}

UVoxelMultiplayerInterface* AVoxelWorld::CreateMultiplayerInterfaceInstance() {
    return NULL;
}

void AVoxelWorld::AddOffset(const FIntVector& OffsetInVoxels, bool bMoveActor) {
}

AVoxelWorld::AVoxelWorld() {
    this->WorldRoot = CreateDefaultSubobject<UVoxelWorldRootComponent>(TEXT("Root"));
    this->LineBatchComponent = CreateDefaultSubobject<UVoxelLineBatchComponent>(TEXT("LineBatchComponent"));
    this->SaveObject = NULL;
    this->bAutomaticallySaveToFile = false;
    this->bAppendDateToSavePath = false;
    this->bRecomputeNormalsBeforeBaking = false;
    this->BakedMeshTemplate = NULL;
    this->BakedMeshComponentTemplate = NULL;
    this->bEnableFoliageInEditor = true;
    this->bAutomaticallyRefreshMaterials = true;
    this->bAutomaticallyRefreshFoliage = true;
    this->NumberOfThreads = 0;
    this->MultiplayerInterfaceInstance = NULL;
    this->GeneratorCache = NULL;
    this->PlaceableItemActorHelper = NULL;
    this->bIsToggled = false;
}

