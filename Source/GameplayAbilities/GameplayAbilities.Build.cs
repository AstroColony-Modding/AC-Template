using UnrealBuildTool;

public class GameplayAbilities : ModuleRules {
    public GameplayAbilities(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Chaos",
            "Core",
            "CoreUObject",
            "DataRegistry",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "GameplayTasks",
            "MovieScene",
            "PhysicsCore",
        });
    }
}
