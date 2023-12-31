﻿#pragma once

#include "Input/Events.h"
#include "Framework/Application/IInputProcessor.h"
#include "JavascriptEditorInputProcessor.generated.h"

struct FPointerEvent;

/**
 * 
 */
UCLASS()
class JAVASCRIPTEDITOR_API UJavascriptEditorInputProcessor : public UObject
{
	GENERATED_BODY()

public:	
#if WITH_EDITOR
	UFUNCTION(BlueprintImplementableEvent, Category = "Scripting|Javascript")
	bool HandleKeyDownEvent(const FKeyEvent& InKeyEvent);

	UFUNCTION(BlueprintImplementableEvent, Category = "Scripting|Javascript")
	bool HandleKeyUpEvent(const FKeyEvent& InKeyEvent);

	UFUNCTION(BlueprintImplementableEvent, Category = "Scripting|Javascript")
	bool HandleMouseMoveEvent(const FPointerEvent& InPointerEvent);

	UFUNCTION(BlueprintImplementableEvent, Category = "Scripting|Javascript")
	bool HandleAnalogInputEvent(const FAnalogInputEvent& InKeyEvent);

	UFUNCTION(BlueprintImplementableEvent, Category = "Scripting|Javascript")
	bool HandleMouseButtonDownEvent(const FPointerEvent& InPointerEvent);

	UFUNCTION(BlueprintImplementableEvent, Category = "Scripting|Javascript")
	bool HandleMouseButtonUpEvent(const FPointerEvent& InPointerEvent);

	UFUNCTION(BlueprintImplementableEvent, Category = "Scripting|Javascript")
	bool HandleMouseButtonDoubleClickEvent(const FPointerEvent& InPointerEvent);

	UFUNCTION(BlueprintImplementableEvent, Category = "Scripting|Javascript")
	bool HandleMouseWheelOrGestureEvent(const FPointerEvent& InWheelEvent, const FPointerEvent& InGestureEvent);
	
	UFUNCTION(BlueprintCallable, Category = "Scripting | Javascript")
	void Activate(bool bEnable);

	UFUNCTION(BlueprintCallable, Category = "Scripting | Javascript")
	void Register();

	UFUNCTION(BlueprintCallable, Category = "Scripting | Javascript")
	void UnRegister();

	virtual void BeginDestroy() override;

	bool bActivated{ false };
	TSharedPtr<IInputProcessor> InputProcessor;
#endif
};
