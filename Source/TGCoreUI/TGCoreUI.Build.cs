using UnrealBuildTool;

public class TGCoreUI : ModuleRules {
    public TGCoreUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AdvancedSessions",
            "AudioMixer",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "InputCore",
            "MovieScene",
            "MovieSceneTracks",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "PropertyPath",
            "SimpleUGC",
            "Slate",
            "SlateCore",
            "TGCoreInterfaceTypes",
            "TGCoreTypes",
            "UMG",
        });
    }
}
