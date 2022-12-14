#include "VoxelRuntimeActor.h"

AVoxelRuntimeActor::AVoxelRuntimeActor() {
    this->VoxelSize = 100.00f;
    this->PlaceableItemManager = NULL;
    this->bCreateWorldAutomatically = false;
    this->bUseCameraIfNoInvokersFound = true;
    this->bEnableUndoRedo = false;
    this->bEnableCustomWorldRebasing = false;
    this->bMergeAssetActors = true;
    this->bMergeDisableEditsBoxes = true;
    this->bDisableOnScreenMessages = false;
    this->bDisableDebugManager = false;
    this->RenderOctreeDepth = 10;
    this->WorldSizeInVoxel = 32768;
    this->bUseCustomWorldBounds = false;
    this->MaxLOD = 24;
    this->MinLOD = 0;
    this->InvokerDistanceThreshold = 100.00f;
    this->MinDelayBetweenLODUpdates = 0.10f;
    this->bConstantLOD = false;
    this->MaterialConfig = EVoxelMaterialConfig::RGB;
    this->VoxelMaterial = NULL;
    this->MaterialCollection = NULL;
    this->MaterialCollectionRuntime = NULL;
    this->UVConfig = EVoxelUVConfig::GlobalUVs;
    this->UVScale = 1.00f;
    this->NormalConfig = EVoxelNormalConfig::GradientNormal;
    this->RGBHardness = EVoxelRGBHardness::FiveWayBlend;
    this->bHardColorTransitions = false;
    this->bOneMaterialPerCubeSide = false;
    this->bHalfPrecisionCoordinates = false;
    this->bInterpolateColors = false;
    this->bInterpolateUVs = false;
    this->bSRGBColors = false;
    this->RenderType = EVoxelRenderType::MarchingCubes;
    this->RenderSharpness = 0;
    this->bCreateMaterialInstances = true;
    this->bDitherChunks = true;
    this->ChunksDitheringDuration = 1.00f;
    this->bCastFarShadow = false;
    this->ProcMeshClass = NULL;
    this->ChunksCullingLOD = 25;
    this->bRenderWorld = true;
    this->bContributesToStaticLighting = false;
    this->bUseStaticPath = false;
    this->bStaticWorld = false;
    this->bGreedyCubicMesher = false;
    this->TexturePoolTextureSize = 1024;
    this->bOptimizeIndices = false;
    this->bGenerateDistanceFields = false;
    this->MaxDistanceFieldLOD = 4;
    this->DistanceFieldBoundsExtension = 4;
    this->DistanceFieldResolutionDivisor = 1;
    this->DistanceFieldSelfShadowBias = 0.00f;
    this->bEnableTransitions = true;
    this->bMergeChunks = false;
    this->ChunksClustersSize = 64;
    this->bDoNotMergeCollisionsAndNavmesh = true;
    this->BoundsExtension = 100.00f;
    this->SpawnerConfig = NULL;
    this->HISMChunkSize = 2048;
    this->SpawnersCollisionDistanceInVoxel = 64;
    this->MaxNumberOfFoliageInstances = 2147483647;
    this->bEnableCollisions = true;
    this->CollisionTraceFlag = CTF_UseComplexAsSimple;
    this->CanCharacterStepUpOn = ECB_Yes;
    this->bNotifyRigidBodyCollision = false;
    this->bGenerateOverlapEvents = false;
    this->bComputeVisibleChunksCollisions = true;
    this->VisibleChunksCollisionsMaxLOD = 5;
    this->PhysMaterialOverride = NULL;
    this->bUseCCD = false;
    this->bSimpleCubicCollision = true;
    this->SimpleCubicCollisionLODBias = 0;
    this->NumConvexHullsPerAxis = 2;
    this->bCleanCollisionMeshes = true;
    this->bEnableNavmesh = false;
    this->bComputeVisibleChunksNavmesh = true;
    this->VisibleChunksNavmeshMaxLOD = 0;
    this->MeshUpdatesBudget = 1000.00f;
    this->EventsTickRate = 15.00f;
    this->DataOctreeInitialSubdivisionDepth = 4;
    this->bEnableMultiplayer = false;
    this->MultiplayerInterface = NULL;
    this->MultiplayerSyncRate = 15.00f;
    this->RendererSubsystem = NULL;
    this->LODSubsystem = NULL;
}

