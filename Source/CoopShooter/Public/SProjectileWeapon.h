// Copyright C 2018 Tomasz Figas

#pragma once

#include "CoreMinimal.h"
#include "SWeapon.h"
#include "SProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class COOPSHOOTER_API ASProjectileWeapon : public ASWeapon
{
	GENERATED_BODY()

protected:
		virtual void Fire() override;
	
		UPROPERTY(EditDefaultsOnly, Category = "ProjectileWeapon")
			TSubclassOf<AActor> ProjectileClass;

};
