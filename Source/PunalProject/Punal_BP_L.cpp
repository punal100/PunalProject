// Fill out your copyright notice in the Description page of Project Settings.


#include "Punal_BP_L.h"
#include "PunalProjectCharacter.h"

void UPunal_BP_L::Spawn_ThirdPerson_Actor(UObject* WorldContextObject, FVector Location, FRotator Rotation)
{
	WorldContextObject->GetWorld()->SpawnActor<APunalProjectCharacter>(Location, Rotation);
}

AActor* UPunal_BP_L::Spawn_Actor_By_Class(UObject* WorldContextObject, TSubclassOf<AActor> Actor_Class, FVector Location, FRotator Rotation)
{
	FTransform Spawn_Transform;
	Spawn_Transform.SetLocation(Location);
	Spawn_Transform.SetRotation(Rotation.Quaternion());
	return WorldContextObject->GetWorld()->SpawnActor(Actor_Class, &Spawn_Transform);
}