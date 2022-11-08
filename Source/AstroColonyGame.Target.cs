using UnrealBuildTool;

public class AstroColonyGameTarget : TargetRules {
	public AstroColonyGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"AstroColony",
			"DataRegistry",
			"GameplayAbilities",
			"GeneratedWorldGenerators",
			"TGCoreInput",
			"TGCoreInterfaceTypes",
			"TGCoreSession",
			"TGCoreTypes",
			"TGCoreUI",
			"TGCoreUtility",
			"TGEvent",
		});
	}
}
