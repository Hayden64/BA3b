// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "MyCommonButtonBase.generated.h"


class UObject;
struct FFRame;

UCLASS(Abstract, BlueprintType, Blueprintable)
class FMP_API UMyCommonButtonBase : public UCommonButtonBase
{
	GENERATED_BODY()


public:
	UFUNCTION(BluerpintCallable)
	void SetButtonText(const FText& InText);

protected:

	virtual void NativePreConstruct() override;


	virtual void UpdateInputActionWidget() override;
	virtual void OnInputMethodChanged(ECommonInputType CurrentInputType) override;

	void RefreshButtonText();

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateButtonText(const FText& InText);

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateButtonStyle();

private:
	UPROPERTY(EditAnywhere, Category="Button", meta=(InlineEditConditionToggle))
	uint8 bOverride_ButtonText : 1;

	UPROPERTY(EditAnywhere, Category="Button", meta=( editcondition="bOverride_ButtonText"))
	FText ButtonText;

};
