// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CoinCollector1 : ModuleRules
{
	public CoinCollector1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"CoinCollector1",
			"CoinCollector1/Variant_Platforming",
			"CoinCollector1/Variant_Platforming/Animation",
			"CoinCollector1/Variant_Combat",
			"CoinCollector1/Variant_Combat/AI",
			"CoinCollector1/Variant_Combat/Animation",
			"CoinCollector1/Variant_Combat/Gameplay",
			"CoinCollector1/Variant_Combat/Interfaces",
			"CoinCollector1/Variant_Combat/UI",
			"CoinCollector1/Variant_SideScrolling",
			"CoinCollector1/Variant_SideScrolling/AI",
			"CoinCollector1/Variant_SideScrolling/Gameplay",
			"CoinCollector1/Variant_SideScrolling/Interfaces",
			"CoinCollector1/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
