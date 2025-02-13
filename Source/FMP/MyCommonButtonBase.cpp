// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCommonButtonBase.h"
#include "CommonActionWidget.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(MyCommonButtonBase)

void UMyCommonButtonBase::SetButtonText(const FText& InText)
{
	bOverride_ButtonText = InText.IsEmpty();
	ButtonText = InText;
	RefreshButtonText();

}

void UMyCommonButtonBase::NativePreConstruct()
{
	Super::NativePreConstruct();

	UpdateButtonStyle();
	RefreshButtonText();
}



void UMyCommonButtonBase::UpdateInputActionWidget()
{
	Super::UpdateInputActionWidget();


}

void UMyCommonButtonBase::OnInputMethodChanged(ECommonInputType CurrentInputType)
{
}

void UMyCommonButtonBase::RefreshButtonText()
{
}
