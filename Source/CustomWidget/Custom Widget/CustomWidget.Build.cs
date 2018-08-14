// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class CustomWidget : ModuleRules
{
	public CustomWidget(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicIncludePaths.AddRange(
			new string[] 
            { "Custom Widget/Public" });

		PrivateIncludePaths.AddRange(
			new string[] 
            { "Custom Widget/Private" });

		PublicDependencyModuleNames.AddRange(
			new string[] 
			{ "Core"
			, "CoreUObject"
			, "Engine"
			, "EngineSettings"
			, "InputCore"
			, "RenderCore"
			, "Renderer"
			, "RHI"
			, "ShaderCore"
			//, "OnlineSubsystem"
			//, "OnlineSubsystemUtils"
			, "UMG"
			});

		PrivateDependencyModuleNames.AddRange(
			new string[] 
            { "Slate"
			, "SlateCore"
			//, "OnlineSubsystem"
            });
	}
}
