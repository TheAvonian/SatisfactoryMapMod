// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildablePipeHyper.h"
#include "FGPipelineHologram.h"

AFGBuildablePipeHyper::AFGBuildablePipeHyper() : Super() {
	this->mHologramClass = AFGPipelineHologram::StaticClass();
	this->MaxRenderDistance = -1;
	this->mFactoryTickFunction.TickGroup = TG_PrePhysics; this->mFactoryTickFunction.EndTickGroup = TG_PrePhysics; this->mFactoryTickFunction.bTickEvenWhenPaused = false; this->mFactoryTickFunction.bCanEverTick = false; this->mFactoryTickFunction.bStartWithTickEnabled = true; this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true; this->mFactoryTickFunction.TickInterval = 0;
	this->mPrimaryColor.R = -1; this->mPrimaryColor.G = -1; this->mPrimaryColor.B = -1; this->mPrimaryColor.A = 1;
	this->mSecondaryColor.R = -1; this->mSecondaryColor.G = -1; this->mSecondaryColor.B = -1; this->mSecondaryColor.A = 1;
	this->mDismantleEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C");
	this->mBuildEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Build.BP_MaterialEffect_Build_C");
	this->mHighlightParticleClassName = FSoftClassPath("/Game/FactoryGame/Buildable/-Shared/Particle/NewBuildingPing.NewBuildingPing_C");
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = false; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bReplicates = true;
	this->NetCullDistanceSquared = 5624999936;
}
float AFGBuildablePipeHyper::GetPipeProgressOfConnection_Implementation(const UFGPipeConnectionComponentBase* connectionEnteredThrough){ return float(); }
void AFGBuildablePipeHyper::OnPipeMove_Implementation(UFGCharacterMovementComponent* charMove, float deltaTime){ }
UFGPipeConnectionComponentBase* AFGBuildablePipeHyper::GetEndOfPipeInDirectionAndMaxDist(const UFGPipeConnectionComponentBase* enterFromConnection, float maxDist, float& distSoFar) const{ return nullptr; }
bool AFGBuildablePipeHyper::OnPipeEnter_Implementation(UFGCharacterMovementComponent* charMove, const UFGPipeConnectionComponentBase* connectionEnteredThrough , const AActor* fromPipe){ return bool(); }
