// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Secret_HitlerHUD.generated.h"

UCLASS()
class ASecret_HitlerHUD : public AHUD
{
	GENERATED_BODY()

public:
	ASecret_HitlerHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

