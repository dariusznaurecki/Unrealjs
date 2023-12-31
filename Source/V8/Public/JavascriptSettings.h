﻿#pragma once

#include "JavascriptSettings.generated.h"


UCLASS(config = Engine, defaultconfig)
class V8_API UJavascriptSettings
	: public UObject
{
	GENERATED_UCLASS_BODY()

public:	
	UPROPERTY(EditAnywhere, config, Category = Javascript, meta = (
		ConsoleVariable = "unrealjs.v8flags", DisplayName = "V8 Flags",
		ToolTip = "V8 Flags. Please refer to V8 documentation"))
	FString V8Flags;

	UPROPERTY(EditAnywhere, config, Category = Javascript, meta = (
		ConsoleVariable = "unrealjs.enableHotReload", DisplayName = "Enable HotReload",
		ToolTip = "hot reload when modified js file in scripts."))
	bool bEnableHotReload;

	void Apply() const;
};
