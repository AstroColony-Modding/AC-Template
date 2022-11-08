using UnrealBuildTool;

public class AstroColonyEditorTarget : TargetRules {
	public AstroColonyEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
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
