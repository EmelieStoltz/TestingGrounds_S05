// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "TestingGrounds_S05HUD.generated.h"

UCLASS()
class ATestingGrounds_S05HUD : public AHUD
{
	GENERATED_BODY()

public:
	ATestingGrounds_S05HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

