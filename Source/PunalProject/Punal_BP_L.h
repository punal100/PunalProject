// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Punal_BP_L.generated.h"

/**
 * 
 */
UCLASS()
class PUNALPROJECT_API UPunal_BP_L : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Punal | Common")
		static void Spawn_ThirdPerson_Actor(UObject* WorldContextObject, FVector Location, FRotator Rotation);

	UFUNCTION(BlueprintCallable, Category = "Punal | Common")
		static AActor* Spawn_Actor_By_Class(UObject* WorldContextObject, TSubclassOf<AActor> Actor_Class, FVector Location, FRotator Rotation);
};
