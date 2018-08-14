// Copyright 2017 Micho Todorovich, all rights reserved.

#pragma once

#include "Engine.h"
#include "Net/UnrealNetwork.h"
#include "CoreOnline.h"
#include "CoreMinimal.h"

//General Log
DECLARE_LOG_CATEGORY_EXTERN(CustomWidgetLog, Log, All);

#if _MSC_VER
#define FUNC_NAME		TEXT(__FUNCTION__)
#else // FIXME - GCC?
#define FUNC_NAME    TEXT(__func__)
#endif

#define FILE		TEXT(__FILE__)

#define LOG(Format, ...) \
{\
	const FString message = FString::Printf(TEXT(Format), __VA_ARGS__); \
	UE_LOG(CustomWidgetLog, Log, TEXT("%s():\t%s: Line: %d:\n\t%s"), FUNC_NAME, FILE, __LINE__,  *message);\
};

#define WARNING(Format, ...) \
{\
	const FString message = FString::Printf(TEXT(Format), __VA_ARGS__); \
	UE_LOG(CustomWidgetLog, Warning, TEXT("%s():\t%s: Line: %d:\n\t%s"), FUNC_NAME, FILE, __LINE__,  *message);\
};

#define ERROR(Format, ...) \
{\
	const FString message = FString::Printf(TEXT(Format), __VA_ARGS__); \
	UE_LOG(CustomWidgetLog, Error, TEXT("%s():\t%s: Line: %d:\n\t%s"), FUNC_NAME, FILE, __LINE__,  *message);\
};

class FCustomWidgetModule : public FDefaultGameModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
