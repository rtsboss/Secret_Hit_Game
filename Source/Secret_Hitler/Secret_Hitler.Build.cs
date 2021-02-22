// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Secret_Hitler : ModuleRules
{
	public Secret_Hitler(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
