using UnrealBuildTool;

public class VoxelNiagara : ModuleRules {
    public VoxelNiagara(ReadOnlyTargetRules Target) : base(Target) {
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
            "MovieScene",
            "Niagara",
            "NiagaraCore",
            "NiagaraShader",
            "PhysicsCore",
            "Voxel",
        });
    }
}
