// Fill out your copyright notice in the Description page of Project Settings.


#include "AugObjectBase.h"
#include "TimerManager.h"

// Sets default values
AAugObjectBase::AAugObjectBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAugObjectBase::BeginPlay()
{
	Super::BeginPlay();
	
	FTimerHandle TimerHandle;
	if (bHasDuration) {
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AAugObjectBase::DestroySelf, Duration, false);
	}
}

// Called every frame
void AAugObjectBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAugObjectBase::DestroySelf()
{
	Destroy();
}

