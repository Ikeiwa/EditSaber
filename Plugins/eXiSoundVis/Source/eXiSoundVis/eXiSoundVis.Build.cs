using UnrealBuildTool;
using System.IO;

public class eXiSoundVis : ModuleRules
{
	public eXiSoundVis(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateIncludePaths.AddRange(new string[] {	"eXiSoundVis/Private" });
		PublicIncludePaths.AddRange(new string[] { "eXiSoundVis/Public" });
		
		PublicDependencyModuleNames.AddRange(new string[] { "Engine", "Core", "CoreUObject", "InputCore", "RHI", "Kiss_FFT" });

        //PublicAdditionalLibraries.Add("legacy_stdio_definitions.lib");

        PublicDependencyModuleNames.Add("Kiss_FFT");
	}
}