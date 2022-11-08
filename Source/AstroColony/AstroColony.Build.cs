using UnrealBuildTool;

public class AstroColony : ModuleRules {
    public AstroColony(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AdvancedSessions",
            "ApexDestruction",
            "AudioMixer",
            "BlueManVehiclePhysics",
            "Chaos",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GeometryCache",
            "HairStrandsCore",
            "InputCore",
            "Landscape",
            "MediaAssets",
            "MediaUtils",
            "MissionObjectives",
            "MovieScene",
            "MovieSceneTracks",
            "Niagara",
            "NiagaraCore",
            "NiagaraShader",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "PhysicsCore",
            "PropertyPath",
            "SimpleUGC",
            "Slate",
            "SlateCore",
            "TGCoreInterfaceTypes",
            "TGCoreSession",
            "TGCoreTypes",
            "TGCoreUI",
            "TGCoreUtility",
            "TGEvent",
            "TechTree",
            "UMG",
            "Voxel",
            "VoxelGraph",
            "cfcore",
        });
    }
}
