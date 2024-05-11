// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Lab08 : ModuleRules
{
	public Lab08(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
