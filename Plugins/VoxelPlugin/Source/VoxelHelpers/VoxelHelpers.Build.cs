using UnrealBuildTool;

public class VoxelHelpers : ModuleRules {
    public VoxelHelpers(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "MovieScene",
            "MovieSceneTracks",
            "ProceduralMeshComponent",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
