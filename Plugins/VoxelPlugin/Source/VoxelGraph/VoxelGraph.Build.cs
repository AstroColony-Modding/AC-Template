using UnrealBuildTool;

public class VoxelGraph : ModuleRules {
    public VoxelGraph(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Chaos",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "Landscape",
            "PhysicsCore",
            "Voxel",
        });
    }
}
