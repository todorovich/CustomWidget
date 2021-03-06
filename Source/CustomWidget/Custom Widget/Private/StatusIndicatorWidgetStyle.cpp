// Copyright 2017 Micho Todorovich, all rights reserved.

#include "StatusIndicatorWidgetStyle.h"
#include "StatusIndicator.h"

const FName FStatusIndicatorStyle::TypeName(TEXT("FStatusIndicatorStyle"));

const FStatusIndicatorStyle& FStatusIndicatorStyle::GetDefault()
{
	static FStatusIndicatorStyle Default;

	return Default;
}

void FStatusIndicatorStyle::GetResources(TArray<const FSlateBrush*>& OutBrushes) const
{
	// Add any brush resources here so that Slate can correctly atlas and reference them
	OutBrushes.Add(&SwipeMaterial);
	OutBrushes.Add(&BorderImage);
	OutBrushes.Add(&FillImage);
}

