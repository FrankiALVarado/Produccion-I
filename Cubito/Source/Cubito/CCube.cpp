// Fill out your copyright notice in the Description page of Project Settings.


#include "CCube.h"
#include "GameFramework/Actor.h"
// Sets default values
float hee = 20.0f;
ACCube::ACCube()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACCube::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector pos;
	pos = GetActorLocation();
	/*pos.X += 2.0f + DeltaTime;*/
	pos.X += FMath::Sin(hee + DeltaTime) * 4;
	pos.Y += FMath::Cos(hee + DeltaTime) * 4;
	hee += DeltaTime;
	SetActorLocation(pos);
}

// Called to bind functionality to input
void ACCube::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACCube::move()
{ 

	
	
}

