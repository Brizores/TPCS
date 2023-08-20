// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCSActor.h"

// Sets default values
ABaseCSActor::ABaseCSActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseCSActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseCSActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

