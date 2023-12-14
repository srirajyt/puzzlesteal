// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RotatorC.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CRYPTRAIDER_API URotatorC : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URotatorC();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	void SetShouldRotate(bool ShouldRotate);

private:
	FRotator OriginalRotation;

	UPROPERTY(Editanywhere)
	FRotator RotationOffset;

	UPROPERTY(Editanywhere)
	float Rotationtime = 4;

	UPROPERTY(Editanywhere)
	bool ShouldRotate = false;
};
