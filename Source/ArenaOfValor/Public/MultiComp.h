// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MultiComp.generated.h"

class UProjectileMovementComponent;
class USphereComponent;

UCLASS()
class ARENAOFVALOR_API AMultiComp : public AActor
{
    GENERATED_BODY()
    
    
public:
    
    
    /** Sphere collision component */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category= "Projectile")
    USphereComponent* CollisionComp;
    
    /** Projectile movement component */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Movement")
    UProjectileMovementComponent* ProjectileMovement;
    
    // Sets default values for this actor's properties
    AMultiComp();
    
    /** called when projectile hits something */
    /*UFUNCTION()
     void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);*/
    
    /** Returns CollisionComp subobject **/
    USphereComponent* GetCollisionComp() const { return CollisionComp; }
    
    /** Returns ProjectileMovement subobject **/
    UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }
    
};
