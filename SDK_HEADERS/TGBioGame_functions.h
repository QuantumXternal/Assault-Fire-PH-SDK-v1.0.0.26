/*
#############################################################################################
# Assault Fire (1.0.0.26) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TGBioGame_functions.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function TGBioGame.BioCharInfo.ClearAsyncLoad
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UBioCharInfo::ClearAsyncLoad ( )
{
	static UFunction* pFnClearAsyncLoad = NULL;

	if ( ! pFnClearAsyncLoad )
		pFnClearAsyncLoad = (UFunction*) UObject::GObjObjects()->Data[ 218906 ];

	UBioCharInfo_execClearAsyncLoad_Parms ClearAsyncLoad_Parms;

	pFnClearAsyncLoad->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearAsyncLoad, &ClearAsyncLoad_Parms, NULL );

	pFnClearAsyncLoad->FunctionFlags |= 0x400;
};

// Function TGBioGame.BioCharInfo.AsyncLoadBioCharInfoContent
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UBioCharInfo::AsyncLoadBioCharInfoContent ( )
{
	static UFunction* pFnAsyncLoadBioCharInfoContent = NULL;

	if ( ! pFnAsyncLoadBioCharInfoContent )
		pFnAsyncLoadBioCharInfoContent = (UFunction*) UObject::GObjObjects()->Data[ 218905 ];

	UBioCharInfo_execAsyncLoadBioCharInfoContent_Parms AsyncLoadBioCharInfoContent_Parms;

	pFnAsyncLoadBioCharInfoContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAsyncLoadBioCharInfoContent, &AsyncLoadBioCharInfoContent_Parms, NULL );

	pFnAsyncLoadBioCharInfoContent->FunctionFlags |= 0x400;
};

// Function TGBioGame.TGAttachment_HeroBlade.DetachFrom
// [0x00020102] 
// Parameters infos:
// class USkeletalMeshComponent*  MeshCpnt                       ( CPF_Parm | CPF_EditInline )

void ATGAttachment_HeroBlade::DetachFrom ( class USkeletalMeshComponent* MeshCpnt )
{
	static UFunction* pFnDetachFrom = NULL;

	if ( ! pFnDetachFrom )
		pFnDetachFrom = (UFunction*) UObject::GObjObjects()->Data[ 218997 ];

	ATGAttachment_HeroBlade_execDetachFrom_Parms DetachFrom_Parms;
	DetachFrom_Parms.MeshCpnt = MeshCpnt;

	this->ProcessEvent ( pFnDetachFrom, &DetachFrom_Parms, NULL );
};

// Function TGBioGame.TGAttachment_HeroBlade.AttachTo
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// class AUTPawn*                 OwnerPawn                      ( CPF_Parm )

void ATGAttachment_HeroBlade::AttachTo ( class AUTPawn* OwnerPawn )
{
	static UFunction* pFnAttachTo = NULL;

	if ( ! pFnAttachTo )
		pFnAttachTo = (UFunction*) UObject::GObjObjects()->Data[ 218995 ];

	ATGAttachment_HeroBlade_execAttachTo_Parms AttachTo_Parms;
	AttachTo_Parms.OwnerPawn = OwnerPawn;

	pFnAttachTo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAttachTo, &AttachTo_Parms, NULL );

	pFnAttachTo->FunctionFlags |= 0x400;
};

// Function TGBioGame.TGAttachment_HeroBlade.GetImpactEffect
// [0x00020102] 
// Parameters infos:
// struct FMaterialImpactEffect   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class UPhysicalMaterial*       HitMaterial                    ( CPF_Parm )

struct FMaterialImpactEffect ATGAttachment_HeroBlade::GetImpactEffect ( class UPhysicalMaterial* HitMaterial )
{
	static UFunction* pFnGetImpactEffect = NULL;

	if ( ! pFnGetImpactEffect )
		pFnGetImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 218990 ];

	ATGAttachment_HeroBlade_execGetImpactEffect_Parms GetImpactEffect_Parms;
	GetImpactEffect_Parms.HitMaterial = HitMaterial;

	this->ProcessEvent ( pFnGetImpactEffect, &GetImpactEffect_Parms, NULL );

	return GetImpactEffect_Parms.ReturnValue;
};

// Function TGBioGame.TGAttachment_HeroBlade.PlayImpactEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGAttachment_HeroBlade::PlayImpactEffects ( struct FVector HitLocation )
{
	static UFunction* pFnPlayImpactEffects = NULL;

	if ( ! pFnPlayImpactEffects )
		pFnPlayImpactEffects = (UFunction*) UObject::GObjObjects()->Data[ 218975 ];

	ATGAttachment_HeroBlade_execPlayImpactEffects_Parms PlayImpactEffects_Parms;
	memcpy ( &PlayImpactEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayImpactEffects, &PlayImpactEffects_Parms, NULL );
};

// Function TGBioGame.TGAttachment_HeroBlade.ChangeVisibility
// [0x00020102] 
// Parameters infos:
// unsigned long                  bIsVisible                     ( CPF_Parm )

void ATGAttachment_HeroBlade::ChangeVisibility ( unsigned long bIsVisible )
{
	static UFunction* pFnChangeVisibility = NULL;

	if ( ! pFnChangeVisibility )
		pFnChangeVisibility = (UFunction*) UObject::GObjObjects()->Data[ 218973 ];

	ATGAttachment_HeroBlade_execChangeVisibility_Parms ChangeVisibility_Parms;
	ChangeVisibility_Parms.bIsVisible = bIsVisible;

	this->ProcessEvent ( pFnChangeVisibility, &ChangeVisibility_Parms, NULL );
};

// Function TGBioGame.TGAttachment_HeroBlade.GetEffectLocation
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ATGAttachment_HeroBlade::GetEffectLocation ( )
{
	static UFunction* pFnGetEffectLocation = NULL;

	if ( ! pFnGetEffectLocation )
		pFnGetEffectLocation = (UFunction*) UObject::GObjObjects()->Data[ 218969 ];

	ATGAttachment_HeroBlade_execGetEffectLocation_Parms GetEffectLocation_Parms;

	this->ProcessEvent ( pFnGetEffectLocation, &GetEffectLocation_Parms, NULL );

	return GetEffectLocation_Parms.ReturnValue;
};

// Function TGBioGame.TGAttachment_HeroBlade.FirstPersonFireEffects
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 PawnWeapon                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGAttachment_HeroBlade::FirstPersonFireEffects ( class AWeapon* PawnWeapon, struct FVector HitLocation )
{
	static UFunction* pFnFirstPersonFireEffects = NULL;

	if ( ! pFnFirstPersonFireEffects )
		pFnFirstPersonFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 218966 ];

	ATGAttachment_HeroBlade_execFirstPersonFireEffects_Parms FirstPersonFireEffects_Parms;
	FirstPersonFireEffects_Parms.PawnWeapon = PawnWeapon;
	memcpy ( &FirstPersonFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnFirstPersonFireEffects, &FirstPersonFireEffects_Parms, NULL );
};

// Function TGBioGame.TGAttachment_HeroBlade.SpawnTracer
// [0x00820102] 
// Parameters infos:
// struct FVector                 EffectLocation                 ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGAttachment_HeroBlade::SpawnTracer ( struct FVector EffectLocation, struct FVector HitLocation )
{
	static UFunction* pFnSpawnTracer = NULL;

	if ( ! pFnSpawnTracer )
		pFnSpawnTracer = (UFunction*) UObject::GObjObjects()->Data[ 218961 ];

	ATGAttachment_HeroBlade_execSpawnTracer_Parms SpawnTracer_Parms;
	memcpy ( &SpawnTracer_Parms.EffectLocation, &EffectLocation, 0xC );
	memcpy ( &SpawnTracer_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnTracer, &SpawnTracer_Parms, NULL );
};

// Function TGBioGame.TGAttachment_HeroBlade.StopMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGAttachment_HeroBlade::StopMuzzleFlash ( )
{
	static UFunction* pFnStopMuzzleFlash = NULL;

	if ( ! pFnStopMuzzleFlash )
		pFnStopMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 218960 ];

	ATGAttachment_HeroBlade_execStopMuzzleFlash_Parms StopMuzzleFlash_Parms;

	this->ProcessEvent ( pFnStopMuzzleFlash, &StopMuzzleFlash_Parms, NULL );
};

// Function TGBioGame.TGAttachment_HeroBlade.CauseMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGAttachment_HeroBlade::CauseMuzzleFlash ( )
{
	static UFunction* pFnCauseMuzzleFlash = NULL;

	if ( ! pFnCauseMuzzleFlash )
		pFnCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 218959 ];

	ATGAttachment_HeroBlade_execCauseMuzzleFlash_Parms CauseMuzzleFlash_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlash, &CauseMuzzleFlash_Parms, NULL );
};

// Function TGBioGame.TGAttachment_HeroBlade.MuzzleFlashTimer
// [0x00020102] 
// Parameters infos:

void ATGAttachment_HeroBlade::MuzzleFlashTimer ( )
{
	static UFunction* pFnMuzzleFlashTimer = NULL;

	if ( ! pFnMuzzleFlashTimer )
		pFnMuzzleFlashTimer = (UFunction*) UObject::GObjObjects()->Data[ 218958 ];

	ATGAttachment_HeroBlade_execMuzzleFlashTimer_Parms MuzzleFlashTimer_Parms;

	this->ProcessEvent ( pFnMuzzleFlashTimer, &MuzzleFlashTimer_Parms, NULL );
};

// Function TGBioGame.TGAttachment_HeroBlade.ThirdPersonFireEffects
// [0x00020100] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGAttachment_HeroBlade::ThirdPersonFireEffects ( struct FVector HitLocation )
{
	static UFunction* pFnThirdPersonFireEffects = NULL;

	if ( ! pFnThirdPersonFireEffects )
		pFnThirdPersonFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 218956 ];

	ATGAttachment_HeroBlade_execThirdPersonFireEffects_Parms ThirdPersonFireEffects_Parms;
	memcpy ( &ThirdPersonFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnThirdPersonFireEffects, &ThirdPersonFireEffects_Parms, NULL );
};

// Function TGBioGame.TGAttachment_HeroBlade.SetWeaponOverlayFlags
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// class AUTPawn*                 OwnerPawn                      ( CPF_Parm )

void ATGAttachment_HeroBlade::SetWeaponOverlayFlags ( class AUTPawn* OwnerPawn )
{
	static UFunction* pFnSetWeaponOverlayFlags = NULL;

	if ( ! pFnSetWeaponOverlayFlags )
		pFnSetWeaponOverlayFlags = (UFunction*) UObject::GObjObjects()->Data[ 218954 ];

	ATGAttachment_HeroBlade_execSetWeaponOverlayFlags_Parms SetWeaponOverlayFlags_Parms;
	SetWeaponOverlayFlags_Parms.OwnerPawn = OwnerPawn;

	pFnSetWeaponOverlayFlags->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWeaponOverlayFlags, &SetWeaponOverlayFlags_Parms, NULL );

	pFnSetWeaponOverlayFlags->FunctionFlags |= 0x400;
};

// Function TGBioGame.TGAttachment_HeroBlade.CreateOverlayMesh
// [0x00020102] 
// Parameters infos:

void ATGAttachment_HeroBlade::CreateOverlayMesh ( )
{
	static UFunction* pFnCreateOverlayMesh = NULL;

	if ( ! pFnCreateOverlayMesh )
		pFnCreateOverlayMesh = (UFunction*) UObject::GObjObjects()->Data[ 218953 ];

	ATGAttachment_HeroBlade_execCreateOverlayMesh_Parms CreateOverlayMesh_Parms;

	this->ProcessEvent ( pFnCreateOverlayMesh, &CreateOverlayMesh_Parms, NULL );
};

// Function TGBioGame.TGAttachment_HeroBlade.SetSkin
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UMaterial*               NewMaterial                    ( CPF_Parm )

void ATGAttachment_HeroBlade::SetSkin ( class UMaterial* NewMaterial )
{
	static UFunction* pFnSetSkin = NULL;

	if ( ! pFnSetSkin )
		pFnSetSkin = (UFunction*) UObject::GObjObjects()->Data[ 218951 ];

	ATGAttachment_HeroBlade_execSetSkin_Parms SetSkin_Parms;
	SetSkin_Parms.NewMaterial = NewMaterial;

	pFnSetSkin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSkin, &SetSkin_Parms, NULL );

	pFnSetSkin->FunctionFlags |= 0x400;
};

// Function TGBioGame.TGAttachment_HeroGun.AttachTo
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// class AUTPawn*                 OwnerPawn                      ( CPF_Parm )

void ATGAttachment_HeroGun::AttachTo ( class AUTPawn* OwnerPawn )
{
	static UFunction* pFnAttachTo = NULL;

	if ( ! pFnAttachTo )
		pFnAttachTo = (UFunction*) UObject::GObjObjects()->Data[ 219020 ];

	ATGAttachment_HeroGun_execAttachTo_Parms AttachTo_Parms;
	AttachTo_Parms.OwnerPawn = OwnerPawn;

	pFnAttachTo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAttachTo, &AttachTo_Parms, NULL );

	pFnAttachTo->FunctionFlags |= 0x400;
};

// Function TGBioGame.TGAttachment_HeroGun.DetachFrom
// [0x00020102] 
// Parameters infos:
// class USkeletalMeshComponent*  MeshCpnt                       ( CPF_Parm | CPF_EditInline )

void ATGAttachment_HeroGun::DetachFrom ( class USkeletalMeshComponent* MeshCpnt )
{
	static UFunction* pFnDetachFrom = NULL;

	if ( ! pFnDetachFrom )
		pFnDetachFrom = (UFunction*) UObject::GObjObjects()->Data[ 219018 ];

	ATGAttachment_HeroGun_execDetachFrom_Parms DetachFrom_Parms;
	DetachFrom_Parms.MeshCpnt = MeshCpnt;

	this->ProcessEvent ( pFnDetachFrom, &DetachFrom_Parms, NULL );
};

// Function TGBioGame.TGAttachment_HeroGun.PlayImpactEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGAttachment_HeroGun::PlayImpactEffects ( struct FVector HitLocation )
{
	static UFunction* pFnPlayImpactEffects = NULL;

	if ( ! pFnPlayImpactEffects )
		pFnPlayImpactEffects = (UFunction*) UObject::GObjObjects()->Data[ 219000 ];

	ATGAttachment_HeroGun_execPlayImpactEffects_Parms PlayImpactEffects_Parms;
	memcpy ( &PlayImpactEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayImpactEffects, &PlayImpactEffects_Parms, NULL );
};

// Function TGBioGame.TGBioCharInfoManager.LoadBioCharInfo
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 CharInfoName                   ( CPF_Parm | CPF_NeedCtorLink )
// class UBioCharInfo*            LoadInfo                       ( CPF_Parm | CPF_OutParm )

int UTGBioCharInfoManager::LoadBioCharInfo ( struct FString CharInfoName, class UBioCharInfo** LoadInfo )
{
	static UFunction* pFnLoadBioCharInfo = NULL;

	if ( ! pFnLoadBioCharInfo )
		pFnLoadBioCharInfo = (UFunction*) UObject::GObjObjects()->Data[ 219518 ];

	UTGBioCharInfoManager_execLoadBioCharInfo_Parms LoadBioCharInfo_Parms;
	memcpy ( &LoadBioCharInfo_Parms.CharInfoName, &CharInfoName, 0xC );

	pFnLoadBioCharInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLoadBioCharInfo, &LoadBioCharInfo_Parms, NULL );

	pFnLoadBioCharInfo->FunctionFlags |= 0x400;

	if ( LoadInfo )
		*LoadInfo = LoadBioCharInfo_Parms.LoadInfo;

	return LoadBioCharInfo_Parms.ReturnValue;
};

// Function TGBioGame.TGBioCharInfoManager.PreloadInitResource
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTGBioCharInfoManager::PreloadInitResource ( )
{
	static UFunction* pFnPreloadInitResource = NULL;

	if ( ! pFnPreloadInitResource )
		pFnPreloadInitResource = (UFunction*) UObject::GObjObjects()->Data[ 220187 ];

	UTGBioCharInfoManager_execPreloadInitResource_Parms PreloadInitResource_Parms;

	pFnPreloadInitResource->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPreloadInitResource, &PreloadInitResource_Parms, NULL );

	pFnPreloadInitResource->FunctionFlags |= 0x400;
};

// Function TGBioGame.TGBioDroppedPickup.PickedUpBy
// [0x00020002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void ATGBioDroppedPickup::PickedUpBy ( class APawn* P )
{
	static UFunction* pFnPickedUpBy = NULL;

	if ( ! pFnPickedUpBy )
		pFnPickedUpBy = (UFunction*) UObject::GObjObjects()->Data[ 220276 ];

	ATGBioDroppedPickup_execPickedUpBy_Parms PickedUpBy_Parms;
	PickedUpBy_Parms.P = P;

	this->ProcessEvent ( pFnPickedUpBy, &PickedUpBy_Parms, NULL );
};

// Function TGBioGame.TGBioDroppedPickup.PreBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATGBioDroppedPickup::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 220265 ];

	ATGBioDroppedPickup_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioGameReplicationInfo.FlashNormalWeaponIcon
// [0x00020102] 
// Parameters infos:

void ATGBioGameReplicationInfo::FlashNormalWeaponIcon ( )
{
	static UFunction* pFnFlashNormalWeaponIcon = NULL;

	if ( ! pFnFlashNormalWeaponIcon )
		pFnFlashNormalWeaponIcon = (UFunction*) UObject::GObjObjects()->Data[ 220395 ];

	ATGBioGameReplicationInfo_execFlashNormalWeaponIcon_Parms FlashNormalWeaponIcon_Parms;

	this->ProcessEvent ( pFnFlashNormalWeaponIcon, &FlashNormalWeaponIcon_Parms, NULL );
};

// Function TGBioGame.TGBioGameReplicationInfo.InOrder
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerReplicationInfo*  P1                             ( CPF_Parm )
// class APlayerReplicationInfo*  P2                             ( CPF_Parm )

bool ATGBioGameReplicationInfo::InOrder ( class APlayerReplicationInfo* P1, class APlayerReplicationInfo* P2 )
{
	static UFunction* pFnInOrder = NULL;

	if ( ! pFnInOrder )
		pFnInOrder = (UFunction*) UObject::GObjObjects()->Data[ 220386 ];

	ATGBioGameReplicationInfo_execInOrder_Parms InOrder_Parms;
	InOrder_Parms.P1 = P1;
	InOrder_Parms.P2 = P2;

	this->ProcessEvent ( pFnInOrder, &InOrder_Parms, NULL );

	return InOrder_Parms.ReturnValue;
};

// Function TGBioGame.TGBioGameReplicationInfo.ZombieLastonePlaySound
// [0x00020002] 
// Parameters infos:

void ATGBioGameReplicationInfo::ZombieLastonePlaySound ( )
{
	static UFunction* pFnZombieLastonePlaySound = NULL;

	if ( ! pFnZombieLastonePlaySound )
		pFnZombieLastonePlaySound = (UFunction*) UObject::GObjObjects()->Data[ 220382 ];

	ATGBioGameReplicationInfo_execZombieLastonePlaySound_Parms ZombieLastonePlaySound_Parms;

	this->ProcessEvent ( pFnZombieLastonePlaySound, &ZombieLastonePlaySound_Parms, NULL );
};

// Function TGBioGame.TGBioGameReplicationInfo.ComputerZombieLeftCount
// [0x00020002] 
// Parameters infos:

void ATGBioGameReplicationInfo::ComputerZombieLeftCount ( )
{
	static UFunction* pFnComputerZombieLeftCount = NULL;

	if ( ! pFnComputerZombieLeftCount )
		pFnComputerZombieLeftCount = (UFunction*) UObject::GObjObjects()->Data[ 220379 ];

	ATGBioGameReplicationInfo_execComputerZombieLeftCount_Parms ComputerZombieLeftCount_Parms;

	this->ProcessEvent ( pFnComputerZombieLeftCount, &ComputerZombieLeftCount_Parms, NULL );
};

// Function TGBioGame.TGBioGameReplicationInfo.ComputerHumanLeftCount
// [0x00020002] 
// Parameters infos:

void ATGBioGameReplicationInfo::ComputerHumanLeftCount ( )
{
	static UFunction* pFnComputerHumanLeftCount = NULL;

	if ( ! pFnComputerHumanLeftCount )
		pFnComputerHumanLeftCount = (UFunction*) UObject::GObjObjects()->Data[ 220376 ];

	ATGBioGameReplicationInfo_execComputerHumanLeftCount_Parms ComputerHumanLeftCount_Parms;

	this->ProcessEvent ( pFnComputerHumanLeftCount, &ComputerHumanLeftCount_Parms, NULL );
};

// Function TGBioGame.TGBioGameReplicationInfo.ComputerLeftCount
// [0x00020002] 
// Parameters infos:

void ATGBioGameReplicationInfo::ComputerLeftCount ( )
{
	static UFunction* pFnComputerLeftCount = NULL;

	if ( ! pFnComputerLeftCount )
		pFnComputerLeftCount = (UFunction*) UObject::GObjObjects()->Data[ 220373 ];

	ATGBioGameReplicationInfo_execComputerLeftCount_Parms ComputerLeftCount_Parms;

	this->ProcessEvent ( pFnComputerLeftCount, &ComputerLeftCount_Parms, NULL );
};

// Function TGBioGame.TGBioGameReplicationInfo.ComputerChangeHeroPrePostTime
// [0x00020002] 
// Parameters infos:

void ATGBioGameReplicationInfo::ComputerChangeHeroPrePostTime ( )
{
	static UFunction* pFnComputerChangeHeroPrePostTime = NULL;

	if ( ! pFnComputerChangeHeroPrePostTime )
		pFnComputerChangeHeroPrePostTime = (UFunction*) UObject::GObjObjects()->Data[ 220368 ];

	ATGBioGameReplicationInfo_execComputerChangeHeroPrePostTime_Parms ComputerChangeHeroPrePostTime_Parms;

	this->ProcessEvent ( pFnComputerChangeHeroPrePostTime, &ComputerChangeHeroPrePostTime_Parms, NULL );
};

// Function TGBioGame.TGBioGameReplicationInfo.AddToAttachmentPool
// [0x00020102] 
// Parameters infos:
// class AUTWeaponAttachment*     WeapAttachment                 ( CPF_Parm )

void ATGBioGameReplicationInfo::AddToAttachmentPool ( class AUTWeaponAttachment* WeapAttachment )
{
	static UFunction* pFnAddToAttachmentPool = NULL;

	if ( ! pFnAddToAttachmentPool )
		pFnAddToAttachmentPool = (UFunction*) UObject::GObjObjects()->Data[ 220364 ];

	ATGBioGameReplicationInfo_execAddToAttachmentPool_Parms AddToAttachmentPool_Parms;
	AddToAttachmentPool_Parms.WeapAttachment = WeapAttachment;

	this->ProcessEvent ( pFnAddToAttachmentPool, &AddToAttachmentPool_Parms, NULL );
};

// Function TGBioGame.TGBioGameReplicationInfo.AddToInventroyPool
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 InventoryWeapon                ( CPF_Parm )

void ATGBioGameReplicationInfo::AddToInventroyPool ( class AWeapon* InventoryWeapon )
{
	static UFunction* pFnAddToInventroyPool = NULL;

	if ( ! pFnAddToInventroyPool )
		pFnAddToInventroyPool = (UFunction*) UObject::GObjObjects()->Data[ 220360 ];

	ATGBioGameReplicationInfo_execAddToInventroyPool_Parms AddToInventroyPool_Parms;
	AddToInventroyPool_Parms.InventoryWeapon = InventoryWeapon;

	this->ProcessEvent ( pFnAddToInventroyPool, &AddToInventroyPool_Parms, NULL );
};

// Function TGBioGame.TGBioGameReplicationInfo.CalculateGameTime
// [0x00020002] 
// Parameters infos:

void ATGBioGameReplicationInfo::CalculateGameTime ( )
{
	static UFunction* pFnCalculateGameTime = NULL;

	if ( ! pFnCalculateGameTime )
		pFnCalculateGameTime = (UFunction*) UObject::GObjObjects()->Data[ 220357 ];

	ATGBioGameReplicationInfo_execCalculateGameTime_Parms CalculateGameTime_Parms;

	this->ProcessEvent ( pFnCalculateGameTime, &CalculateGameTime_Parms, NULL );
};

// Function TGBioGame.TGBioGameReplicationInfo.UpdateHumanHeroDamage
// [0x00020002] 
// Parameters infos:

void ATGBioGameReplicationInfo::UpdateHumanHeroDamage ( )
{
	static UFunction* pFnUpdateHumanHeroDamage = NULL;

	if ( ! pFnUpdateHumanHeroDamage )
		pFnUpdateHumanHeroDamage = (UFunction*) UObject::GObjObjects()->Data[ 220345 ];

	ATGBioGameReplicationInfo_execUpdateHumanHeroDamage_Parms UpdateHumanHeroDamage_Parms;

	this->ProcessEvent ( pFnUpdateHumanHeroDamage, &UpdateHumanHeroDamage_Parms, NULL );
};

// Function TGBioGame.TGBioGameReplicationInfo.NotifyCanTurnToHumanHero
// [0x00020002] 
// Parameters infos:

void ATGBioGameReplicationInfo::NotifyCanTurnToHumanHero ( )
{
	static UFunction* pFnNotifyCanTurnToHumanHero = NULL;

	if ( ! pFnNotifyCanTurnToHumanHero )
		pFnNotifyCanTurnToHumanHero = (UFunction*) UObject::GObjObjects()->Data[ 220344 ];

	ATGBioGameReplicationInfo_execNotifyCanTurnToHumanHero_Parms NotifyCanTurnToHumanHero_Parms;

	this->ProcessEvent ( pFnNotifyCanTurnToHumanHero, &NotifyCanTurnToHumanHero_Parms, NULL );
};

// Function TGBioGame.TGBioGameReplicationInfo.AddChangeHumanHeroMsg
// [0x00020002] 
// Parameters infos:

void ATGBioGameReplicationInfo::AddChangeHumanHeroMsg ( )
{
	static UFunction* pFnAddChangeHumanHeroMsg = NULL;

	if ( ! pFnAddChangeHumanHeroMsg )
		pFnAddChangeHumanHeroMsg = (UFunction*) UObject::GObjObjects()->Data[ 220339 ];

	ATGBioGameReplicationInfo_execAddChangeHumanHeroMsg_Parms AddChangeHumanHeroMsg_Parms;

	this->ProcessEvent ( pFnAddChangeHumanHeroMsg, &AddChangeHumanHeroMsg_Parms, NULL );
};

// Function TGBioGame.TGBioGameReplicationInfo.SetRoundCount
// [0x00020002] 
// Parameters infos:
// int                            iRound                         ( CPF_Parm )

void ATGBioGameReplicationInfo::SetRoundCount ( int iRound )
{
	static UFunction* pFnSetRoundCount = NULL;

	if ( ! pFnSetRoundCount )
		pFnSetRoundCount = (UFunction*) UObject::GObjObjects()->Data[ 220337 ];

	ATGBioGameReplicationInfo_execSetRoundCount_Parms SetRoundCount_Parms;
	SetRoundCount_Parms.iRound = iRound;

	this->ProcessEvent ( pFnSetRoundCount, &SetRoundCount_Parms, NULL );
};

// Function TGBioGame.TGBioGameReplicationInfo.IsCanTurnToHumanHero
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioGameReplicationInfo::IsCanTurnToHumanHero ( )
{
	static UFunction* pFnIsCanTurnToHumanHero = NULL;

	if ( ! pFnIsCanTurnToHumanHero )
		pFnIsCanTurnToHumanHero = (UFunction*) UObject::GObjObjects()->Data[ 220334 ];

	ATGBioGameReplicationInfo_execIsCanTurnToHumanHero_Parms IsCanTurnToHumanHero_Parms;

	this->ProcessEvent ( pFnIsCanTurnToHumanHero, &IsCanTurnToHumanHero_Parms, NULL );

	return IsCanTurnToHumanHero_Parms.ReturnValue;
};

// Function TGBioGame.TGBioGameReplicationInfo.ComputerGridNum
// [0x00020002] 
// Parameters infos:

void ATGBioGameReplicationInfo::ComputerGridNum ( )
{
	static UFunction* pFnComputerGridNum = NULL;

	if ( ! pFnComputerGridNum )
		pFnComputerGridNum = (UFunction*) UObject::GObjObjects()->Data[ 220333 ];

	ATGBioGameReplicationInfo_execComputerGridNum_Parms ComputerGridNum_Parms;

	this->ProcessEvent ( pFnComputerGridNum, &ComputerGridNum_Parms, NULL );
};

// Function TGBioGame.TGBioGameReplicationInfo.RoundClear
// [0x00020002] 
// Parameters infos:

void ATGBioGameReplicationInfo::RoundClear ( )
{
	static UFunction* pFnRoundClear = NULL;

	if ( ! pFnRoundClear )
		pFnRoundClear = (UFunction*) UObject::GObjObjects()->Data[ 220329 ];

	ATGBioGameReplicationInfo_execRoundClear_Parms RoundClear_Parms;

	this->ProcessEvent ( pFnRoundClear, &RoundClear_Parms, NULL );
};

// Function TGBioGame.TGBioGameReplicationInfo.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGBioGameReplicationInfo::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 220328 ];

	ATGBioGameReplicationInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioGameReplicationInfo.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGBioGameReplicationInfo::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 220326 ];

	ATGBioGameReplicationInfo_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.TurnToHeroZombie
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGBioPlayerReplicationInfo* PRI                            ( CPF_Parm )

bool ATGBioMatch::TurnToHeroZombie ( class ATGBioPlayerReplicationInfo* PRI )
{
	static UFunction* pFnTurnToHeroZombie = NULL;

	if ( ! pFnTurnToHeroZombie )
		pFnTurnToHeroZombie = (UFunction*) UObject::GObjObjects()->Data[ 221956 ];

	ATGBioMatch_execTurnToHeroZombie_Parms TurnToHeroZombie_Parms;
	TurnToHeroZombie_Parms.PRI = PRI;

	this->ProcessEvent ( pFnTurnToHeroZombie, &TurnToHeroZombie_Parms, NULL );

	return TurnToHeroZombie_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMatch.ResetAllJerrican
// [0x00020002] 
// Parameters infos:

void ATGBioMatch::ResetAllJerrican ( )
{
	static UFunction* pFnResetAllJerrican = NULL;

	if ( ! pFnResetAllJerrican )
		pFnResetAllJerrican = (UFunction*) UObject::GObjObjects()->Data[ 221954 ];

	ATGBioMatch_execResetAllJerrican_Parms ResetAllJerrican_Parms;

	this->ProcessEvent ( pFnResetAllJerrican, &ResetAllJerrican_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.ReduceDamage
// [0x00420002] 
// Parameters infos:
// class APawn*                   injured                        ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )
// int                            Damage                         ( CPF_Parm | CPF_OutParm )
// struct FVector                 Momentum                       ( CPF_Parm | CPF_OutParm )

void ATGBioMatch::ReduceDamage ( class APawn* injured, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, class AActor* DamageCauser, int* Damage, struct FVector* Momentum )
{
	static UFunction* pFnReduceDamage = NULL;

	if ( ! pFnReduceDamage )
		pFnReduceDamage = (UFunction*) UObject::GObjObjects()->Data[ 221945 ];

	ATGBioMatch_execReduceDamage_Parms ReduceDamage_Parms;
	ReduceDamage_Parms.injured = injured;
	ReduceDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &ReduceDamage_Parms.HitLocation, &HitLocation, 0xC );
	ReduceDamage_Parms.DamageType = DamageType;
	ReduceDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnReduceDamage, &ReduceDamage_Parms, NULL );

	if ( Damage )
		*Damage = ReduceDamage_Parms.Damage;

	if ( Momentum )
		memcpy ( Momentum, &ReduceDamage_Parms.Momentum, 0xC );
};

// Function TGBioGame.TGBioMatch.DirectEndRound
// [0x00020002] 
// Parameters infos:
// int                            TeamIndex                      ( CPF_Parm )
// struct FString                 Reason                         ( CPF_Parm | CPF_NeedCtorLink )
// class AActor*                  EndRoundFocus                  ( CPF_Parm )

void ATGBioMatch::DirectEndRound ( int TeamIndex, struct FString Reason, class AActor* EndRoundFocus )
{
	static UFunction* pFnDirectEndRound = NULL;

	if ( ! pFnDirectEndRound )
		pFnDirectEndRound = (UFunction*) UObject::GObjObjects()->Data[ 221928 ];

	ATGBioMatch_execDirectEndRound_Parms DirectEndRound_Parms;
	DirectEndRound_Parms.TeamIndex = TeamIndex;
	memcpy ( &DirectEndRound_Parms.Reason, &Reason, 0xC );
	DirectEndRound_Parms.EndRoundFocus = EndRoundFocus;

	this->ProcessEvent ( pFnDirectEndRound, &DirectEndRound_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.SetBioTransMode
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// int                            NewMode                        ( CPF_Parm )

void ATGBioMatch::SetBioTransMode ( int NewMode )
{
	static UFunction* pFnSetBioTransMode = NULL;

	if ( ! pFnSetBioTransMode )
		pFnSetBioTransMode = (UFunction*) UObject::GObjObjects()->Data[ 221926 ];

	ATGBioMatch_execSetBioTransMode_Parms SetBioTransMode_Parms;
	SetBioTransMode_Parms.NewMode = NewMode;

	this->ProcessEvent ( pFnSetBioTransMode, &SetBioTransMode_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.RecheckPlayerCount
// [0x00420002] 
// Parameters infos:
// class ATGPlayerReplicationInfo* Exiting                        ( CPF_Parm )
// int                            ZombieCount                    ( CPF_Parm | CPF_OutParm )
// int                            HumanCount                     ( CPF_Parm | CPF_OutParm )

void ATGBioMatch::RecheckPlayerCount ( class ATGPlayerReplicationInfo* Exiting, int* ZombieCount, int* HumanCount )
{
	static UFunction* pFnRecheckPlayerCount = NULL;

	if ( ! pFnRecheckPlayerCount )
		pFnRecheckPlayerCount = (UFunction*) UObject::GObjObjects()->Data[ 221920 ];

	ATGBioMatch_execRecheckPlayerCount_Parms RecheckPlayerCount_Parms;
	RecheckPlayerCount_Parms.Exiting = Exiting;

	this->ProcessEvent ( pFnRecheckPlayerCount, &RecheckPlayerCount_Parms, NULL );

	if ( ZombieCount )
		*ZombieCount = RecheckPlayerCount_Parms.ZombieCount;

	if ( HumanCount )
		*HumanCount = RecheckPlayerCount_Parms.HumanCount;
};

// Function TGBioGame.TGBioMatch.CheckPlayerCount
// [0x00420002] 
// Parameters infos:
// int                            ZombieCount                    ( CPF_Parm | CPF_OutParm )
// int                            HumanCount                     ( CPF_Parm | CPF_OutParm )

void ATGBioMatch::CheckPlayerCount ( int* ZombieCount, int* HumanCount )
{
	static UFunction* pFnCheckPlayerCount = NULL;

	if ( ! pFnCheckPlayerCount )
		pFnCheckPlayerCount = (UFunction*) UObject::GObjObjects()->Data[ 221915 ];

	ATGBioMatch_execCheckPlayerCount_Parms CheckPlayerCount_Parms;

	this->ProcessEvent ( pFnCheckPlayerCount, &CheckPlayerCount_Parms, NULL );

	if ( ZombieCount )
		*ZombieCount = CheckPlayerCount_Parms.ZombieCount;

	if ( HumanCount )
		*HumanCount = CheckPlayerCount_Parms.HumanCount;
};

// Function TGBioGame.TGBioMatch.CheckTeamAllOut
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGPlayerReplicationInfo* Exiting                        ( CPF_Parm )

bool ATGBioMatch::CheckTeamAllOut ( class ATGPlayerReplicationInfo* Exiting )
{
	static UFunction* pFnCheckTeamAllOut = NULL;

	if ( ! pFnCheckTeamAllOut )
		pFnCheckTeamAllOut = (UFunction*) UObject::GObjObjects()->Data[ 221909 ];

	ATGBioMatch_execCheckTeamAllOut_Parms CheckTeamAllOut_Parms;
	CheckTeamAllOut_Parms.Exiting = Exiting;

	this->ProcessEvent ( pFnCheckTeamAllOut, &CheckTeamAllOut_Parms, NULL );

	return CheckTeamAllOut_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMatch.ChangeSpawnProtectionTime
// [0x00020002] 
// Parameters infos:
// float                          fTime                          ( CPF_Parm )

void ATGBioMatch::ChangeSpawnProtectionTime ( float fTime )
{
	static UFunction* pFnChangeSpawnProtectionTime = NULL;

	if ( ! pFnChangeSpawnProtectionTime )
		pFnChangeSpawnProtectionTime = (UFunction*) UObject::GObjObjects()->Data[ 221906 ];

	ATGBioMatch_execChangeSpawnProtectionTime_Parms ChangeSpawnProtectionTime_Parms;
	ChangeSpawnProtectionTime_Parms.fTime = fTime;

	this->ProcessEvent ( pFnChangeSpawnProtectionTime, &ChangeSpawnProtectionTime_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.AddAllHumanAttack
// [0x00020002] 
// Parameters infos:
// class ATGBioPlayerController*  bioPC                          ( CPF_Parm )

void ATGBioMatch::AddAllHumanAttack ( class ATGBioPlayerController* bioPC )
{
	static UFunction* pFnAddAllHumanAttack = NULL;

	if ( ! pFnAddAllHumanAttack )
		pFnAddAllHumanAttack = (UFunction*) UObject::GObjObjects()->Data[ 221902 ];

	ATGBioMatch_execAddAllHumanAttack_Parms AddAllHumanAttack_Parms;
	AddAllHumanAttack_Parms.bioPC = bioPC;

	this->ProcessEvent ( pFnAddAllHumanAttack, &AddAllHumanAttack_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.TurnPlayerToHumanHero
// [0x00820002] 
// Parameters infos:
// class ATGBioPlayerReplicationInfo* PRI                            ( CPF_Parm )

void ATGBioMatch::TurnPlayerToHumanHero ( class ATGBioPlayerReplicationInfo* PRI )
{
	static UFunction* pFnTurnPlayerToHumanHero = NULL;

	if ( ! pFnTurnPlayerToHumanHero )
		pFnTurnPlayerToHumanHero = (UFunction*) UObject::GObjObjects()->Data[ 221894 ];

	ATGBioMatch_execTurnPlayerToHumanHero_Parms TurnPlayerToHumanHero_Parms;
	TurnPlayerToHumanHero_Parms.PRI = PRI;

	this->ProcessEvent ( pFnTurnPlayerToHumanHero, &TurnPlayerToHumanHero_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.AddDefaultInventoryForHumanHero
// [0x00024002] 
// Parameters infos:
// class ATGBioPlayerReplicationInfo* PRI                            ( CPF_Parm )
// class ATGBioHumanHeroPawn*     heroPawn                       ( CPF_Parm )
// class ATGBioPlayerController*  PC                             ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )

void ATGBioMatch::AddDefaultInventoryForHumanHero ( class ATGBioPlayerReplicationInfo* PRI, class ATGBioHumanHeroPawn* heroPawn, class ATGBioPlayerController* PC, int Count )
{
	static UFunction* pFnAddDefaultInventoryForHumanHero = NULL;

	if ( ! pFnAddDefaultInventoryForHumanHero )
		pFnAddDefaultInventoryForHumanHero = (UFunction*) UObject::GObjObjects()->Data[ 221886 ];

	ATGBioMatch_execAddDefaultInventoryForHumanHero_Parms AddDefaultInventoryForHumanHero_Parms;
	AddDefaultInventoryForHumanHero_Parms.PRI = PRI;
	AddDefaultInventoryForHumanHero_Parms.heroPawn = heroPawn;
	AddDefaultInventoryForHumanHero_Parms.PC = PC;
	AddDefaultInventoryForHumanHero_Parms.Count = Count;

	this->ProcessEvent ( pFnAddDefaultInventoryForHumanHero, &AddDefaultInventoryForHumanHero_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.AddHumanHeroInventoryFor
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   PlayerPawn                     ( CPF_Parm )
// class ATGBioPlayerController*  PC                             ( CPF_Parm )

void ATGBioMatch::eventAddHumanHeroInventoryFor ( class APawn* PlayerPawn, class ATGBioPlayerController* PC )
{
	static UFunction* pFnAddHumanHeroInventoryFor = NULL;

	if ( ! pFnAddHumanHeroInventoryFor )
		pFnAddHumanHeroInventoryFor = (UFunction*) UObject::GObjObjects()->Data[ 221880 ];

	ATGBioMatch_eventAddHumanHeroInventoryFor_Parms AddHumanHeroInventoryFor_Parms;
	AddHumanHeroInventoryFor_Parms.PlayerPawn = PlayerPawn;
	AddHumanHeroInventoryFor_Parms.PC = PC;

	this->ProcessEvent ( pFnAddHumanHeroInventoryFor, &AddHumanHeroInventoryFor_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.ChoosePlayerStart
// [0x00824002] 
// Parameters infos:
// class APlayerStart*            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Player                         ( CPF_Parm )
// unsigned char                  InTeam                         ( CPF_OptionalParm | CPF_Parm )

class APlayerStart* ATGBioMatch::ChoosePlayerStart ( class AController* Player, unsigned char InTeam )
{
	static UFunction* pFnChoosePlayerStart = NULL;

	if ( ! pFnChoosePlayerStart )
		pFnChoosePlayerStart = (UFunction*) UObject::GObjObjects()->Data[ 221857 ];

	ATGBioMatch_execChoosePlayerStart_Parms ChoosePlayerStart_Parms;
	ChoosePlayerStart_Parms.Player = Player;
	ChoosePlayerStart_Parms.InTeam = InTeam;

	this->ProcessEvent ( pFnChoosePlayerStart, &ChoosePlayerStart_Parms, NULL );

	return ChoosePlayerStart_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMatch.RatePlayerStart
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerStart*            P                              ( CPF_Parm )
// unsigned char                  Team                           ( CPF_Parm )
// class AController*             Player                         ( CPF_Parm )

float ATGBioMatch::RatePlayerStart ( class APlayerStart* P, unsigned char Team, class AController* Player )
{
	static UFunction* pFnRatePlayerStart = NULL;

	if ( ! pFnRatePlayerStart )
		pFnRatePlayerStart = (UFunction*) UObject::GObjObjects()->Data[ 221849 ];

	ATGBioMatch_execRatePlayerStart_Parms RatePlayerStart_Parms;
	RatePlayerStart_Parms.P = P;
	RatePlayerStart_Parms.Team = Team;
	RatePlayerStart_Parms.Player = Player;

	this->ProcessEvent ( pFnRatePlayerStart, &RatePlayerStart_Parms, NULL );

	return RatePlayerStart_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMatch.TryTossProp
// [0x00020002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void ATGBioMatch::TryTossProp ( class APawn* P )
{
	static UFunction* pFnTryTossProp = NULL;

	if ( ! pFnTryTossProp )
		pFnTryTossProp = (UFunction*) UObject::GObjObjects()->Data[ 221847 ];

	ATGBioMatch_execTryTossProp_Parms TryTossProp_Parms;
	TryTossProp_Parms.P = P;

	this->ProcessEvent ( pFnTryTossProp, &TryTossProp_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.GetRoundLeftPlayerNum
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ATGBioMatch::GetRoundLeftPlayerNum ( )
{
	static UFunction* pFnGetRoundLeftPlayerNum = NULL;

	if ( ! pFnGetRoundLeftPlayerNum )
		pFnGetRoundLeftPlayerNum = (UFunction*) UObject::GObjObjects()->Data[ 221486 ];

	ATGBioMatch_execGetRoundLeftPlayerNum_Parms GetRoundLeftPlayerNum_Parms;

	this->ProcessEvent ( pFnGetRoundLeftPlayerNum, &GetRoundLeftPlayerNum_Parms, NULL );

	return GetRoundLeftPlayerNum_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMatch.CalcGameTimeStatis
// [0x00020002] 
// Parameters infos:

void ATGBioMatch::CalcGameTimeStatis ( )
{
	static UFunction* pFnCalcGameTimeStatis = NULL;

	if ( ! pFnCalcGameTimeStatis )
		pFnCalcGameTimeStatis = (UFunction*) UObject::GObjObjects()->Data[ 221843 ];

	ATGBioMatch_execCalcGameTimeStatis_Parms CalcGameTimeStatis_Parms;

	this->ProcessEvent ( pFnCalcGameTimeStatis, &CalcGameTimeStatis_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.EndGame
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  Winner                         ( CPF_Parm )
// struct FString                 Reason                         ( CPF_Parm | CPF_NeedCtorLink )

void ATGBioMatch::EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
{
	static UFunction* pFnEndGame = NULL;

	if ( ! pFnEndGame )
		pFnEndGame = (UFunction*) UObject::GObjObjects()->Data[ 221838 ];

	ATGBioMatch_execEndGame_Parms EndGame_Parms;
	EndGame_Parms.Winner = Winner;
	memcpy ( &EndGame_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnEndGame, &EndGame_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.EndRound
// [0x00020002] 
// Parameters infos:
// class AActor*                  EndRoundFocus                  ( CPF_Parm )

void ATGBioMatch::EndRound ( class AActor* EndRoundFocus )
{
	static UFunction* pFnEndRound = NULL;

	if ( ! pFnEndRound )
		pFnEndRound = (UFunction*) UObject::GObjObjects()->Data[ 221834 ];

	ATGBioMatch_execEndRound_Parms EndRound_Parms;
	EndRound_Parms.EndRoundFocus = EndRoundFocus;

	this->ProcessEvent ( pFnEndRound, &EndRound_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.ResetRoundLevel
// [0x00020002] 
// Parameters infos:

void ATGBioMatch::ResetRoundLevel ( )
{
	static UFunction* pFnResetRoundLevel = NULL;

	if ( ! pFnResetRoundLevel )
		pFnResetRoundLevel = (UFunction*) UObject::GObjObjects()->Data[ 221823 ];

	ATGBioMatch_execResetRoundLevel_Parms ResetRoundLevel_Parms;

	this->ProcessEvent ( pFnResetRoundLevel, &ResetRoundLevel_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.ServerSpecialResetBioMatch
// [0x00020002] 
// Parameters infos:

void ATGBioMatch::ServerSpecialResetBioMatch ( )
{
	static UFunction* pFnServerSpecialResetBioMatch = NULL;

	if ( ! pFnServerSpecialResetBioMatch )
		pFnServerSpecialResetBioMatch = (UFunction*) UObject::GObjObjects()->Data[ 221820 ];

	ATGBioMatch_execServerSpecialResetBioMatch_Parms ServerSpecialResetBioMatch_Parms;

	this->ProcessEvent ( pFnServerSpecialResetBioMatch, &ServerSpecialResetBioMatch_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.ChoosePlayerTurnZombie
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioMatch::ChoosePlayerTurnZombie ( )
{
	static UFunction* pFnChoosePlayerTurnZombie = NULL;

	if ( ! pFnChoosePlayerTurnZombie )
		pFnChoosePlayerTurnZombie = (UFunction*) UObject::GObjObjects()->Data[ 221797 ];

	ATGBioMatch_execChoosePlayerTurnZombie_Parms ChoosePlayerTurnZombie_Parms;

	this->ProcessEvent ( pFnChoosePlayerTurnZombie, &ChoosePlayerTurnZombie_Parms, NULL );

	return ChoosePlayerTurnZombie_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMatch.TurnToZombie
// [0x00820002] 
// Parameters infos:
// class ATGBioPlayerReplicationInfo* PRI                            ( CPF_Parm )
// struct FZombieChangeNecessity  ZombieChange                   ( CPF_Parm )

void ATGBioMatch::TurnToZombie ( class ATGBioPlayerReplicationInfo* PRI, struct FZombieChangeNecessity ZombieChange )
{
	static UFunction* pFnTurnToZombie = NULL;

	if ( ! pFnTurnToZombie )
		pFnTurnToZombie = (UFunction*) UObject::GObjObjects()->Data[ 221780 ];

	ATGBioMatch_execTurnToZombie_Parms TurnToZombie_Parms;
	TurnToZombie_Parms.PRI = PRI;
	memcpy ( &TurnToZombie_Parms.ZombieChange, &ZombieChange, 0x14 );

	this->ProcessEvent ( pFnTurnToZombie, &TurnToZombie_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.CheckZombieWhether
// [0x00020002] 
// Parameters infos:
// unsigned char                  ZombieType                     ( CPF_Parm )
// class ATGBioPlayerReplicationInfo* PRI                            ( CPF_Parm )

void ATGBioMatch::CheckZombieWhether ( unsigned char ZombieType, class ATGBioPlayerReplicationInfo* PRI )
{
	static UFunction* pFnCheckZombieWhether = NULL;

	if ( ! pFnCheckZombieWhether )
		pFnCheckZombieWhether = (UFunction*) UObject::GObjObjects()->Data[ 221777 ];

	ATGBioMatch_execCheckZombieWhether_Parms CheckZombieWhether_Parms;
	CheckZombieWhether_Parms.ZombieType = ZombieType;
	CheckZombieWhether_Parms.PRI = PRI;

	this->ProcessEvent ( pFnCheckZombieWhether, &CheckZombieWhether_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.ResetCurrentSpecifyZombieType
// [0x00020002] 
// Parameters infos:
// class ATGBioPlayerReplicationInfo* PRI                            ( CPF_Parm )

void ATGBioMatch::ResetCurrentSpecifyZombieType ( class ATGBioPlayerReplicationInfo* PRI )
{
	static UFunction* pFnResetCurrentSpecifyZombieType = NULL;

	if ( ! pFnResetCurrentSpecifyZombieType )
		pFnResetCurrentSpecifyZombieType = (UFunction*) UObject::GObjObjects()->Data[ 221775 ];

	ATGBioMatch_execResetCurrentSpecifyZombieType_Parms ResetCurrentSpecifyZombieType_Parms;
	ResetCurrentSpecifyZombieType_Parms.PRI = PRI;

	this->ProcessEvent ( pFnResetCurrentSpecifyZombieType, &ResetCurrentSpecifyZombieType_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.FindAppropriateTransformSpot
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  TransformerClass               ( CPF_Parm )
// struct FVector                 SpotLocation                   ( CPF_Parm | CPF_OutParm )

bool ATGBioMatch::FindAppropriateTransformSpot ( class UClass* TransformerClass, struct FVector* SpotLocation )
{
	static UFunction* pFnFindAppropriateTransformSpot = NULL;

	if ( ! pFnFindAppropriateTransformSpot )
		pFnFindAppropriateTransformSpot = (UFunction*) UObject::GObjObjects()->Data[ 221771 ];

	ATGBioMatch_execFindAppropriateTransformSpot_Parms FindAppropriateTransformSpot_Parms;
	FindAppropriateTransformSpot_Parms.TransformerClass = TransformerClass;

	pFnFindAppropriateTransformSpot->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindAppropriateTransformSpot, &FindAppropriateTransformSpot_Parms, NULL );

	pFnFindAppropriateTransformSpot->FunctionFlags |= 0x400;

	if ( SpotLocation )
		memcpy ( SpotLocation, &FindAppropriateTransformSpot_Parms.SpotLocation, 0xC );

	return FindAppropriateTransformSpot_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMatch.GetZombieClassFromZombieType
// [0x00020002] 
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ZombieType                     ( CPF_Parm )

class UClass* ATGBioMatch::GetZombieClassFromZombieType ( unsigned char ZombieType )
{
	static UFunction* pFnGetZombieClassFromZombieType = NULL;

	if ( ! pFnGetZombieClassFromZombieType )
		pFnGetZombieClassFromZombieType = (UFunction*) UObject::GObjObjects()->Data[ 221765 ];

	ATGBioMatch_execGetZombieClassFromZombieType_Parms GetZombieClassFromZombieType_Parms;
	GetZombieClassFromZombieType_Parms.ZombieType = ZombieType;

	this->ProcessEvent ( pFnGetZombieClassFromZombieType, &GetZombieClassFromZombieType_Parms, NULL );

	return GetZombieClassFromZombieType_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMatch.AddZombieInventoryFor
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   PlayerPawn                     ( CPF_Parm )
// class ATGBioPlayerController*  PC                             ( CPF_Parm )

void ATGBioMatch::eventAddZombieInventoryFor ( class APawn* PlayerPawn, class ATGBioPlayerController* PC )
{
	static UFunction* pFnAddZombieInventoryFor = NULL;

	if ( ! pFnAddZombieInventoryFor )
		pFnAddZombieInventoryFor = (UFunction*) UObject::GObjObjects()->Data[ 221759 ];

	ATGBioMatch_eventAddZombieInventoryFor_Parms AddZombieInventoryFor_Parms;
	AddZombieInventoryFor_Parms.PlayerPawn = PlayerPawn;
	AddZombieInventoryFor_Parms.PC = PC;

	this->ProcessEvent ( pFnAddZombieInventoryFor, &AddZombieInventoryFor_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.AddDefaultInventoryForZombie
// [0x00024002] 
// Parameters infos:
// class ATGBioPlayerReplicationInfo* PRI                            ( CPF_Parm )
// class ATGBioZombiePawn*        ZombiePawn                     ( CPF_Parm )
// class ATGBioPlayerController*  PC                             ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )

void ATGBioMatch::AddDefaultInventoryForZombie ( class ATGBioPlayerReplicationInfo* PRI, class ATGBioZombiePawn* ZombiePawn, class ATGBioPlayerController* PC, int Count )
{
	static UFunction* pFnAddDefaultInventoryForZombie = NULL;

	if ( ! pFnAddDefaultInventoryForZombie )
		pFnAddDefaultInventoryForZombie = (UFunction*) UObject::GObjObjects()->Data[ 221752 ];

	ATGBioMatch_execAddDefaultInventoryForZombie_Parms AddDefaultInventoryForZombie_Parms;
	AddDefaultInventoryForZombie_Parms.PRI = PRI;
	AddDefaultInventoryForZombie_Parms.ZombiePawn = ZombiePawn;
	AddDefaultInventoryForZombie_Parms.PC = PC;
	AddDefaultInventoryForZombie_Parms.Count = Count;

	this->ProcessEvent ( pFnAddDefaultInventoryForZombie, &AddDefaultInventoryForZombie_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.GetInventoryListByZombieType
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  ZombieType                     ( CPF_Parm )

struct FString ATGBioMatch::GetInventoryListByZombieType ( unsigned char ZombieType )
{
	static UFunction* pFnGetInventoryListByZombieType = NULL;

	if ( ! pFnGetInventoryListByZombieType )
		pFnGetInventoryListByZombieType = (UFunction*) UObject::GObjObjects()->Data[ 221747 ];

	ATGBioMatch_execGetInventoryListByZombieType_Parms GetInventoryListByZombieType_Parms;
	GetInventoryListByZombieType_Parms.ZombieType = ZombieType;

	this->ProcessEvent ( pFnGetInventoryListByZombieType, &GetInventoryListByZombieType_Parms, NULL );

	return GetInventoryListByZombieType_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMatch.AddDefaultInventoryEx
// [0x00024002] 
// Parameters infos:
// class APawn*                   PlayerPawn                     ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )

void ATGBioMatch::AddDefaultInventoryEx ( class APawn* PlayerPawn, int Count )
{
	static UFunction* pFnAddDefaultInventoryEx = NULL;

	if ( ! pFnAddDefaultInventoryEx )
		pFnAddDefaultInventoryEx = (UFunction*) UObject::GObjObjects()->Data[ 221741 ];

	ATGBioMatch_execAddDefaultInventoryEx_Parms AddDefaultInventoryEx_Parms;
	AddDefaultInventoryEx_Parms.PlayerPawn = PlayerPawn;
	AddDefaultInventoryEx_Parms.Count = Count;

	this->ProcessEvent ( pFnAddDefaultInventoryEx, &AddDefaultInventoryEx_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.AddFunctionalItemFor
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   PlayerPawn                     ( CPF_Parm )
// class ATGPlayerReplicationInfo* PRI                            ( CPF_Parm )

void ATGBioMatch::eventAddFunctionalItemFor ( class APawn* PlayerPawn, class ATGPlayerReplicationInfo* PRI )
{
	static UFunction* pFnAddFunctionalItemFor = NULL;

	if ( ! pFnAddFunctionalItemFor )
		pFnAddFunctionalItemFor = (UFunction*) UObject::GObjObjects()->Data[ 221737 ];

	ATGBioMatch_eventAddFunctionalItemFor_Parms AddFunctionalItemFor_Parms;
	AddFunctionalItemFor_Parms.PlayerPawn = PlayerPawn;
	AddFunctionalItemFor_Parms.PRI = PRI;

	this->ProcessEvent ( pFnAddFunctionalItemFor, &AddFunctionalItemFor_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.AddInventoryFor
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   PlayerPawn                     ( CPF_Parm )

void ATGBioMatch::eventAddInventoryFor ( class APawn* PlayerPawn )
{
	static UFunction* pFnAddInventoryFor = NULL;

	if ( ! pFnAddInventoryFor )
		pFnAddInventoryFor = (UFunction*) UObject::GObjObjects()->Data[ 221734 ];

	ATGBioMatch_eventAddInventoryFor_Parms AddInventoryFor_Parms;
	AddInventoryFor_Parms.PlayerPawn = PlayerPawn;

	this->ProcessEvent ( pFnAddInventoryFor, &AddInventoryFor_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.GetInventroyListForThisGame
// [0x00420002] 
// Parameters infos:
// TArray< struct FFItemSimpleData > BagWeaponList                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ATGBioMatch::GetInventroyListForThisGame ( TArray< struct FFItemSimpleData >* BagWeaponList )
{
	static UFunction* pFnGetInventroyListForThisGame = NULL;

	if ( ! pFnGetInventroyListForThisGame )
		pFnGetInventroyListForThisGame = (UFunction*) UObject::GObjObjects()->Data[ 221728 ];

	ATGBioMatch_execGetInventroyListForThisGame_Parms GetInventroyListForThisGame_Parms;

	this->ProcessEvent ( pFnGetInventroyListForThisGame, &GetInventroyListForThisGame_Parms, NULL );

	if ( BagWeaponList )
		memcpy ( BagWeaponList, &GetInventroyListForThisGame_Parms.BagWeaponList, 0xC );
};

// Function TGBioGame.TGBioMatch.FilterBioGameInventory
// [0x00420002] 
// Parameters infos:
// TArray< struct FFItemSimpleData > BagWeaponList                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ATGBioMatch::FilterBioGameInventory ( TArray< struct FFItemSimpleData >* BagWeaponList )
{
	static UFunction* pFnFilterBioGameInventory = NULL;

	if ( ! pFnFilterBioGameInventory )
		pFnFilterBioGameInventory = (UFunction*) UObject::GObjObjects()->Data[ 221723 ];

	ATGBioMatch_execFilterBioGameInventory_Parms FilterBioGameInventory_Parms;

	this->ProcessEvent ( pFnFilterBioGameInventory, &FilterBioGameInventory_Parms, NULL );

	if ( BagWeaponList )
		memcpy ( BagWeaponList, &FilterBioGameInventory_Parms.BagWeaponList, 0xC );
};

// Function TGBioGame.TGBioMatch.GetDesiredZombieCount
// [0x00420002] 
// Parameters infos:
// int                            PlayerCount                    ( CPF_Parm )
// int                            HostZombieCount                ( CPF_Parm | CPF_OutParm )
// int                            TerminatorCount                ( CPF_Parm | CPF_OutParm )

void ATGBioMatch::GetDesiredZombieCount ( int PlayerCount, int* HostZombieCount, int* TerminatorCount )
{
	static UFunction* pFnGetDesiredZombieCount = NULL;

	if ( ! pFnGetDesiredZombieCount )
		pFnGetDesiredZombieCount = (UFunction*) UObject::GObjObjects()->Data[ 221719 ];

	ATGBioMatch_execGetDesiredZombieCount_Parms GetDesiredZombieCount_Parms;
	GetDesiredZombieCount_Parms.PlayerCount = PlayerCount;

	this->ProcessEvent ( pFnGetDesiredZombieCount, &GetDesiredZombieCount_Parms, NULL );

	if ( HostZombieCount )
		*HostZombieCount = GetDesiredZombieCount_Parms.HostZombieCount;

	if ( TerminatorCount )
		*TerminatorCount = GetDesiredZombieCount_Parms.TerminatorCount;
};

// Function TGBioGame.TGBioMatch.TimeToTurnZombie
// [0x00020002] 
// Parameters infos:

void ATGBioMatch::TimeToTurnZombie ( )
{
	static UFunction* pFnTimeToTurnZombie = NULL;

	if ( ! pFnTimeToTurnZombie )
		pFnTimeToTurnZombie = (UFunction*) UObject::GObjObjects()->Data[ 221718 ];

	ATGBioMatch_execTimeToTurnZombie_Parms TimeToTurnZombie_Parms;

	this->ProcessEvent ( pFnTimeToTurnZombie, &TimeToTurnZombie_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.StartTimeToTurnZombie
// [0x00020002] 
// Parameters infos:

void ATGBioMatch::StartTimeToTurnZombie ( )
{
	static UFunction* pFnStartTimeToTurnZombie = NULL;

	if ( ! pFnStartTimeToTurnZombie )
		pFnStartTimeToTurnZombie = (UFunction*) UObject::GObjObjects()->Data[ 221717 ];

	ATGBioMatch_execStartTimeToTurnZombie_Parms StartTimeToTurnZombie_Parms;

	this->ProcessEvent ( pFnStartTimeToTurnZombie, &StartTimeToTurnZombie_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.SecondPersonAnswer
// [0x00020002] 
// Parameters infos:

void ATGBioMatch::SecondPersonAnswer ( )
{
	static UFunction* pFnSecondPersonAnswer = NULL;

	if ( ! pFnSecondPersonAnswer )
		pFnSecondPersonAnswer = (UFunction*) UObject::GObjObjects()->Data[ 221716 ];

	ATGBioMatch_execSecondPersonAnswer_Parms SecondPersonAnswer_Parms;

	this->ProcessEvent ( pFnSecondPersonAnswer, &SecondPersonAnswer_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.FirstPersonSpeak
// [0x00020002] 
// Parameters infos:

void ATGBioMatch::FirstPersonSpeak ( )
{
	static UFunction* pFnFirstPersonSpeak = NULL;

	if ( ! pFnFirstPersonSpeak )
		pFnFirstPersonSpeak = (UFunction*) UObject::GObjObjects()->Data[ 221713 ];

	ATGBioMatch_execFirstPersonSpeak_Parms FirstPersonSpeak_Parms;

	this->ProcessEvent ( pFnFirstPersonSpeak, &FirstPersonSpeak_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.StartMatch
// [0x00020002] 
// Parameters infos:

void ATGBioMatch::StartMatch ( )
{
	static UFunction* pFnStartMatch = NULL;

	if ( ! pFnStartMatch )
		pFnStartMatch = (UFunction*) UObject::GObjObjects()->Data[ 221709 ];

	ATGBioMatch_execStartMatch_Parms StartMatch_Parms;

	this->ProcessEvent ( pFnStartMatch, &StartMatch_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.RoundStartLeftTimer
// [0x00020002] 
// Parameters infos:

void ATGBioMatch::RoundStartLeftTimer ( )
{
	static UFunction* pFnRoundStartLeftTimer = NULL;

	if ( ! pFnRoundStartLeftTimer )
		pFnRoundStartLeftTimer = (UFunction*) UObject::GObjObjects()->Data[ 221706 ];

	ATGBioMatch_execRoundStartLeftTimer_Parms RoundStartLeftTimer_Parms;

	this->ProcessEvent ( pFnRoundStartLeftTimer, &RoundStartLeftTimer_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.ResetRandomWeaponPickupFactory
// [0x00020002] 
// Parameters infos:

void ATGBioMatch::ResetRandomWeaponPickupFactory ( )
{
	static UFunction* pFnResetRandomWeaponPickupFactory = NULL;

	if ( ! pFnResetRandomWeaponPickupFactory )
		pFnResetRandomWeaponPickupFactory = (UFunction*) UObject::GObjObjects()->Data[ 221704 ];

	ATGBioMatch_execResetRandomWeaponPickupFactory_Parms ResetRandomWeaponPickupFactory_Parms;

	this->ProcessEvent ( pFnResetRandomWeaponPickupFactory, &ResetRandomWeaponPickupFactory_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.PlaySoundWeaponArrived
// [0x00020002] 
// Parameters infos:

void ATGBioMatch::PlaySoundWeaponArrived ( )
{
	static UFunction* pFnPlaySoundWeaponArrived = NULL;

	if ( ! pFnPlaySoundWeaponArrived )
		pFnPlaySoundWeaponArrived = (UFunction*) UObject::GObjObjects()->Data[ 221702 ];

	ATGBioMatch_execPlaySoundWeaponArrived_Parms PlaySoundWeaponArrived_Parms;

	this->ProcessEvent ( pFnPlaySoundWeaponArrived, &PlaySoundWeaponArrived_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.ChooseRandomWeaponPickupFactory
// [0x00020002] 
// Parameters infos:

void ATGBioMatch::ChooseRandomWeaponPickupFactory ( )
{
	static UFunction* pFnChooseRandomWeaponPickupFactory = NULL;

	if ( ! pFnChooseRandomWeaponPickupFactory )
		pFnChooseRandomWeaponPickupFactory = (UFunction*) UObject::GObjObjects()->Data[ 221689 ];

	ATGBioMatch_execChooseRandomWeaponPickupFactory_Parms ChooseRandomWeaponPickupFactory_Parms;

	this->ProcessEvent ( pFnChooseRandomWeaponPickupFactory, &ChooseRandomWeaponPickupFactory_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.ComputerRandomWeaponDropNumber
// [0x00020002] 
// Parameters infos:

void ATGBioMatch::ComputerRandomWeaponDropNumber ( )
{
	static UFunction* pFnComputerRandomWeaponDropNumber = NULL;

	if ( ! pFnComputerRandomWeaponDropNumber )
		pFnComputerRandomWeaponDropNumber = (UFunction*) UObject::GObjObjects()->Data[ 221688 ];

	ATGBioMatch_execComputerRandomWeaponDropNumber_Parms ComputerRandomWeaponDropNumber_Parms;

	this->ProcessEvent ( pFnComputerRandomWeaponDropNumber, &ComputerRandomWeaponDropNumber_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.Login
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Portal                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Options                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            UniqueIdNet                    ( CPF_Const | CPF_Parm )
// struct FString                 ErrorMessage                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

class APlayerController* ATGBioMatch::eventLogin ( struct FString Portal, struct FString Options, struct FUniqueNetId UniqueIdNet, struct FString* ErrorMessage )
{
	static UFunction* pFnLogin = NULL;

	if ( ! pFnLogin )
		pFnLogin = (UFunction*) UObject::GObjObjects()->Data[ 221679 ];

	ATGBioMatch_eventLogin_Parms Login_Parms;
	memcpy ( &Login_Parms.Portal, &Portal, 0xC );
	memcpy ( &Login_Parms.Options, &Options, 0xC );
	memcpy ( &Login_Parms.UniqueIdNet, &UniqueIdNet, 0x8 );

	this->ProcessEvent ( pFnLogin, &Login_Parms, NULL );

	if ( ErrorMessage )
		memcpy ( ErrorMessage, &Login_Parms.ErrorMessage, 0xC );

	return Login_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMatch.PostLogin
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       NewPlayer                      ( CPF_Parm )

void ATGBioMatch::eventPostLogin ( class APlayerController* NewPlayer )
{
	static UFunction* pFnPostLogin = NULL;

	if ( ! pFnPostLogin )
		pFnPostLogin = (UFunction*) UObject::GObjObjects()->Data[ 221677 ];

	ATGBioMatch_eventPostLogin_Parms PostLogin_Parms;
	PostLogin_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnPostLogin, &PostLogin_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.PreLogin
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// struct FString                 Options                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Address                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ErrorMessage                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ATGBioMatch::eventPreLogin ( struct FString Options, struct FString Address, struct FString* ErrorMessage )
{
	static UFunction* pFnPreLogin = NULL;

	if ( ! pFnPreLogin )
		pFnPreLogin = (UFunction*) UObject::GObjObjects()->Data[ 221669 ];

	ATGBioMatch_eventPreLogin_Parms PreLogin_Parms;
	memcpy ( &PreLogin_Parms.Options, &Options, 0xC );
	memcpy ( &PreLogin_Parms.Address, &Address, 0xC );

	this->ProcessEvent ( pFnPreLogin, &PreLogin_Parms, NULL );

	if ( ErrorMessage )
		memcpy ( ErrorMessage, &PreLogin_Parms.ErrorMessage, 0xC );
};

// Function TGBioGame.TGBioMatch.RestartPlayer
// [0x00820002] 
// Parameters infos:
// class AController*             NewPlayer                      ( CPF_Parm )

void ATGBioMatch::RestartPlayer ( class AController* NewPlayer )
{
	static UFunction* pFnRestartPlayer = NULL;

	if ( ! pFnRestartPlayer )
		pFnRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 221663 ];

	ATGBioMatch_execRestartPlayer_Parms RestartPlayer_Parms;
	RestartPlayer_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnRestartPlayer, &RestartPlayer_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.SpawnDefaultPawnFor
// [0x00820002] 
// Parameters infos:
// class APawn*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             NewPlayer                      ( CPF_Parm )
// class ANavigationPoint*        StartSpot                      ( CPF_Parm )

class APawn* ATGBioMatch::SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot )
{
	static UFunction* pFnSpawnDefaultPawnFor = NULL;

	if ( ! pFnSpawnDefaultPawnFor )
		pFnSpawnDefaultPawnFor = (UFunction*) UObject::GObjObjects()->Data[ 221649 ];

	ATGBioMatch_execSpawnDefaultPawnFor_Parms SpawnDefaultPawnFor_Parms;
	SpawnDefaultPawnFor_Parms.NewPlayer = NewPlayer;
	SpawnDefaultPawnFor_Parms.StartSpot = StartSpot;

	this->ProcessEvent ( pFnSpawnDefaultPawnFor, &SpawnDefaultPawnFor_Parms, NULL );

	return SpawnDefaultPawnFor_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMatch.DrawEndRound
// [0x00020002] 
// Parameters infos:
// class AActor*                  EndRoundFocus                  ( CPF_Parm )

void ATGBioMatch::DrawEndRound ( class AActor* EndRoundFocus )
{
	static UFunction* pFnDrawEndRound = NULL;

	if ( ! pFnDrawEndRound )
		pFnDrawEndRound = (UFunction*) UObject::GObjObjects()->Data[ 221647 ];

	ATGBioMatch_execDrawEndRound_Parms DrawEndRound_Parms;
	DrawEndRound_Parms.EndRoundFocus = EndRoundFocus;

	this->ProcessEvent ( pFnDrawEndRound, &DrawEndRound_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.ComputeDamage
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ATGBioMatch::ComputeDamage ( )
{
	static UFunction* pFnComputeDamage = NULL;

	if ( ! pFnComputeDamage )
		pFnComputeDamage = (UFunction*) UObject::GObjObjects()->Data[ 221645 ];

	ATGBioMatch_execComputeDamage_Parms ComputeDamage_Parms;

	this->ProcessEvent ( pFnComputeDamage, &ComputeDamage_Parms, NULL );

	return ComputeDamage_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMatch.GenericEndRound
// [0x00020002] 
// Parameters infos:
// int                            TeamIndex                      ( CPF_Parm )
// struct FString                 Reason                         ( CPF_Parm | CPF_NeedCtorLink )
// class AActor*                  EndRoundFocus                  ( CPF_Parm )

void ATGBioMatch::GenericEndRound ( int TeamIndex, struct FString Reason, class AActor* EndRoundFocus )
{
	static UFunction* pFnGenericEndRound = NULL;

	if ( ! pFnGenericEndRound )
		pFnGenericEndRound = (UFunction*) UObject::GObjObjects()->Data[ 221637 ];

	ATGBioMatch_execGenericEndRound_Parms GenericEndRound_Parms;
	GenericEndRound_Parms.TeamIndex = TeamIndex;
	memcpy ( &GenericEndRound_Parms.Reason, &Reason, 0xC );
	GenericEndRound_Parms.EndRoundFocus = EndRoundFocus;

	this->ProcessEvent ( pFnGenericEndRound, &GenericEndRound_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.Killed
// [0x00020002] 
// Parameters infos:
// class AController*             Killer                         ( CPF_Parm )
// class AController*             KilledPlayer                   ( CPF_Parm )
// class APawn*                   KilledPawn                     ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void ATGBioMatch::Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType )
{
	static UFunction* pFnKilled = NULL;

	if ( ! pFnKilled )
		pFnKilled = (UFunction*) UObject::GObjObjects()->Data[ 221606 ];

	ATGBioMatch_execKilled_Parms Killed_Parms;
	Killed_Parms.Killer = Killer;
	Killed_Parms.KilledPlayer = KilledPlayer;
	Killed_Parms.KilledPawn = KilledPawn;
	Killed_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnKilled, &Killed_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.StatZombieNoReBirthInfo
// [0x00020002] 
// Parameters infos:
// class ATGBioPlayerController*  KilledController               ( CPF_Parm )

void ATGBioMatch::StatZombieNoReBirthInfo ( class ATGBioPlayerController* KilledController )
{
	static UFunction* pFnStatZombieNoReBirthInfo = NULL;

	if ( ! pFnStatZombieNoReBirthInfo )
		pFnStatZombieNoReBirthInfo = (UFunction*) UObject::GObjObjects()->Data[ 221603 ];

	ATGBioMatch_execStatZombieNoReBirthInfo_Parms StatZombieNoReBirthInfo_Parms;
	StatZombieNoReBirthInfo_Parms.KilledController = KilledController;

	this->ProcessEvent ( pFnStatZombieNoReBirthInfo, &StatZombieNoReBirthInfo_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.Logout
// [0x00020002] 
// Parameters infos:
// class AController*             Exiting                        ( CPF_Parm )

void ATGBioMatch::Logout ( class AController* Exiting )
{
	static UFunction* pFnLogout = NULL;

	if ( ! pFnLogout )
		pFnLogout = (UFunction*) UObject::GObjObjects()->Data[ 221598 ];

	ATGBioMatch_execLogout_Parms Logout_Parms;
	Logout_Parms.Exiting = Exiting;

	this->ProcessEvent ( pFnLogout, &Logout_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.InitGameReplicationInfo
// [0x00020002] 
// Parameters infos:

void ATGBioMatch::InitGameReplicationInfo ( )
{
	static UFunction* pFnInitGameReplicationInfo = NULL;

	if ( ! pFnInitGameReplicationInfo )
		pFnInitGameReplicationInfo = (UFunction*) UObject::GObjObjects()->Data[ 221597 ];

	ATGBioMatch_execInitGameReplicationInfo_Parms InitGameReplicationInfo_Parms;

	this->ProcessEvent ( pFnInitGameReplicationInfo, &InitGameReplicationInfo_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.CalcACE
// [0x00020000] 
// Parameters infos:

void ATGBioMatch::CalcACE ( )
{
	static UFunction* pFnCalcACE = NULL;

	if ( ! pFnCalcACE )
		pFnCalcACE = (UFunction*) UObject::GObjObjects()->Data[ 221596 ];

	ATGBioMatch_execCalcACE_Parms CalcACE_Parms;

	this->ProcessEvent ( pFnCalcACE, &CalcACE_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.UpdateGameSpecificSettings
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FGameSpecificSettings   Settings                       ( CPF_Parm )

void ATGBioMatch::eventUpdateGameSpecificSettings ( struct FGameSpecificSettings Settings )
{
	static UFunction* pFnUpdateGameSpecificSettings = NULL;

	if ( ! pFnUpdateGameSpecificSettings )
		pFnUpdateGameSpecificSettings = (UFunction*) UObject::GObjObjects()->Data[ 221594 ];

	ATGBioMatch_eventUpdateGameSpecificSettings_Parms UpdateGameSpecificSettings_Parms;
	memcpy ( &UpdateGameSpecificSettings_Parms.Settings, &Settings, 0x28 );

	this->ProcessEvent ( pFnUpdateGameSpecificSettings, &UpdateGameSpecificSettings_Parms, NULL );
};

// Function TGBioGame.TGBioMatch.PreBeginPlay
// [0x00020002] 
// Parameters infos:

void ATGBioMatch::PreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 221590 ];

	ATGBioMatch_execPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioPawn.ClientHandleZombieSkillState
// [0x010201C2] 
// Parameters infos:
// unsigned long                  bGoto                          ( CPF_Parm )
// struct FName                   SklledState                    ( CPF_Parm )

void ATGBioPawn::ClientHandleZombieSkillState ( unsigned long bGoto, struct FName SklledState )
{
	static UFunction* pFnClientHandleZombieSkillState = NULL;

	if ( ! pFnClientHandleZombieSkillState )
		pFnClientHandleZombieSkillState = (UFunction*) UObject::GObjObjects()->Data[ 219228 ];

	ATGBioPawn_execClientHandleZombieSkillState_Parms ClientHandleZombieSkillState_Parms;
	ClientHandleZombieSkillState_Parms.bGoto = bGoto;
	memcpy ( &ClientHandleZombieSkillState_Parms.SklledState, &SklledState, 0x8 );

	this->ProcessEvent ( pFnClientHandleZombieSkillState, &ClientHandleZombieSkillState_Parms, NULL );
};

// Function TGBioGame.TGBioPawn.HandleZombieSkillState
// [0x00020002] 
// Parameters infos:
// unsigned long                  bGoto                          ( CPF_Parm )
// struct FName                   SklledState                    ( CPF_Parm )

void ATGBioPawn::HandleZombieSkillState ( unsigned long bGoto, struct FName SklledState )
{
	static UFunction* pFnHandleZombieSkillState = NULL;

	if ( ! pFnHandleZombieSkillState )
		pFnHandleZombieSkillState = (UFunction*) UObject::GObjObjects()->Data[ 219225 ];

	ATGBioPawn_execHandleZombieSkillState_Parms HandleZombieSkillState_Parms;
	HandleZombieSkillState_Parms.bGoto = bGoto;
	memcpy ( &HandleZombieSkillState_Parms.SklledState, &SklledState, 0x8 );

	this->ProcessEvent ( pFnHandleZombieSkillState, &HandleZombieSkillState_Parms, NULL );
};

// Function TGBioGame.TGBioPawn.BioPlayDying
// [0x00824102] 
// Parameters infos:
// unsigned long                  bPermanentDeath                ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLoc                         ( CPF_Parm )
// unsigned char                  DeathDir                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_OptionalParm | CPF_Parm )

void ATGBioPawn::BioPlayDying ( unsigned long bPermanentDeath, class UClass* DamageType, struct FVector HitLoc, unsigned char DeathDir, unsigned char HitGroup )
{
	static UFunction* pFnBioPlayDying = NULL;

	if ( ! pFnBioPlayDying )
		pFnBioPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 219206 ];

	ATGBioPawn_execBioPlayDying_Parms BioPlayDying_Parms;
	BioPlayDying_Parms.bPermanentDeath = bPermanentDeath;
	BioPlayDying_Parms.DamageType = DamageType;
	memcpy ( &BioPlayDying_Parms.HitLoc, &HitLoc, 0xC );
	BioPlayDying_Parms.DeathDir = DeathDir;
	BioPlayDying_Parms.HitGroup = HitGroup;

	this->ProcessEvent ( pFnBioPlayDying, &BioPlayDying_Parms, NULL );
};

// Function TGBioGame.TGBioPawn.PlayZombieAnim
// [0x00024102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// unsigned char                  DeathDir                       ( CPF_Parm )
// unsigned long                  bDead                          ( CPF_Parm )
// unsigned long                  bLocal                         ( CPF_OptionalParm | CPF_Parm )

void ATGBioPawn::PlayZombieAnim ( class UClass* DamageType, unsigned char DeathDir, unsigned long bDead, unsigned long bLocal )
{
	static UFunction* pFnPlayZombieAnim = NULL;

	if ( ! pFnPlayZombieAnim )
		pFnPlayZombieAnim = (UFunction*) UObject::GObjObjects()->Data[ 219198 ];

	ATGBioPawn_execPlayZombieAnim_Parms PlayZombieAnim_Parms;
	PlayZombieAnim_Parms.DamageType = DamageType;
	PlayZombieAnim_Parms.DeathDir = DeathDir;
	PlayZombieAnim_Parms.bDead = bDead;
	PlayZombieAnim_Parms.bLocal = bLocal;

	this->ProcessEvent ( pFnPlayZombieAnim, &PlayZombieAnim_Parms, NULL );
};

// Function TGBioGame.TGBioPawn.PlayCustomAnim
// [0x00020102] 
// Parameters infos:
// unsigned char                  AnimType                       ( CPF_Parm )
// unsigned long                  bFirstPerson                   ( CPF_Parm )

void ATGBioPawn::PlayCustomAnim ( unsigned char AnimType, unsigned long bFirstPerson )
{
	static UFunction* pFnPlayCustomAnim = NULL;

	if ( ! pFnPlayCustomAnim )
		pFnPlayCustomAnim = (UFunction*) UObject::GObjObjects()->Data[ 219192 ];

	ATGBioPawn_execPlayCustomAnim_Parms PlayCustomAnim_Parms;
	PlayCustomAnim_Parms.AnimType = AnimType;
	PlayCustomAnim_Parms.bFirstPerson = bFirstPerson;

	this->ProcessEvent ( pFnPlayCustomAnim, &PlayCustomAnim_Parms, NULL );
};

// Function TGBioGame.TGBioPawn.SetCrouchJumpSize
// [0x00020002] 
// Parameters infos:
// float                          Scale                          ( CPF_Parm )

void ATGBioPawn::SetCrouchJumpSize ( float Scale )
{
	static UFunction* pFnSetCrouchJumpSize = NULL;

	if ( ! pFnSetCrouchJumpSize )
		pFnSetCrouchJumpSize = (UFunction*) UObject::GObjObjects()->Data[ 219190 ];

	ATGBioPawn_execSetCrouchJumpSize_Parms SetCrouchJumpSize_Parms;
	SetCrouchJumpSize_Parms.Scale = Scale;

	this->ProcessEvent ( pFnSetCrouchJumpSize, &SetCrouchJumpSize_Parms, NULL );
};

// Function TGBioGame.TGBioPawn.SetGeneralJumpSize
// [0x00020002] 
// Parameters infos:
// float                          Scale                          ( CPF_Parm )

void ATGBioPawn::SetGeneralJumpSize ( float Scale )
{
	static UFunction* pFnSetGeneralJumpSize = NULL;

	if ( ! pFnSetGeneralJumpSize )
		pFnSetGeneralJumpSize = (UFunction*) UObject::GObjObjects()->Data[ 219188 ];

	ATGBioPawn_execSetGeneralJumpSize_Parms SetGeneralJumpSize_Parms;
	SetGeneralJumpSize_Parms.Scale = Scale;

	this->ProcessEvent ( pFnSetGeneralJumpSize, &SetGeneralJumpSize_Parms, NULL );
};

// Function TGBioGame.TGBioPawn.SetMoveSpeedScale
// [0x00020002] 
// Parameters infos:
// float                          Scale                          ( CPF_Parm )

void ATGBioPawn::SetMoveSpeedScale ( float Scale )
{
	static UFunction* pFnSetMoveSpeedScale = NULL;

	if ( ! pFnSetMoveSpeedScale )
		pFnSetMoveSpeedScale = (UFunction*) UObject::GObjObjects()->Data[ 219186 ];

	ATGBioPawn_execSetMoveSpeedScale_Parms SetMoveSpeedScale_Parms;
	SetMoveSpeedScale_Parms.Scale = Scale;

	this->ProcessEvent ( pFnSetMoveSpeedScale, &SetMoveSpeedScale_Parms, NULL );
};

// Function TGBioGame.TGBioPawn.NotifyCombiningSpeedScale
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGBioPawn::NotifyCombiningSpeedScale ( )
{
	static UFunction* pFnNotifyCombiningSpeedScale = NULL;

	if ( ! pFnNotifyCombiningSpeedScale )
		pFnNotifyCombiningSpeedScale = (UFunction*) UObject::GObjObjects()->Data[ 219183 ];

	ATGBioPawn_execNotifyCombiningSpeedScale_Parms NotifyCombiningSpeedScale_Parms;

	this->ProcessEvent ( pFnNotifyCombiningSpeedScale, &NotifyCombiningSpeedScale_Parms, NULL );

	return NotifyCombiningSpeedScale_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPawn.SetLookLock
// [0x00020102] 
// Parameters infos:
// unsigned long                  bEnable                        ( CPF_Parm )
// class APlayerController*       PC                             ( CPF_Parm )

void ATGBioPawn::SetLookLock ( unsigned long bEnable, class APlayerController* PC )
{
	static UFunction* pFnSetLookLock = NULL;

	if ( ! pFnSetLookLock )
		pFnSetLookLock = (UFunction*) UObject::GObjObjects()->Data[ 219180 ];

	ATGBioPawn_execSetLookLock_Parms SetLookLock_Parms;
	SetLookLock_Parms.bEnable = bEnable;
	SetLookLock_Parms.PC = PC;

	this->ProcessEvent ( pFnSetLookLock, &SetLookLock_Parms, NULL );
};

// Function TGBioGame.TGBioPawn.SetMovementLock
// [0x00020102] 
// Parameters infos:
// unsigned long                  bEnable                        ( CPF_Parm )
// class APlayerController*       PC                             ( CPF_Parm )

void ATGBioPawn::SetMovementLock ( unsigned long bEnable, class APlayerController* PC )
{
	static UFunction* pFnSetMovementLock = NULL;

	if ( ! pFnSetMovementLock )
		pFnSetMovementLock = (UFunction*) UObject::GObjObjects()->Data[ 219177 ];

	ATGBioPawn_execSetMovementLock_Parms SetMovementLock_Parms;
	SetMovementLock_Parms.bEnable = bEnable;
	SetMovementLock_Parms.PC = PC;

	this->ProcessEvent ( pFnSetMovementLock, &SetMovementLock_Parms, NULL );
};

// Function TGBioGame.TGBioPawn.SetLegSkelControl
// [0x00020002] 
// Parameters infos:
// unsigned long                  bOpen                          ( CPF_Parm )

void ATGBioPawn::SetLegSkelControl ( unsigned long bOpen )
{
	static UFunction* pFnSetLegSkelControl = NULL;

	if ( ! pFnSetLegSkelControl )
		pFnSetLegSkelControl = (UFunction*) UObject::GObjObjects()->Data[ 219175 ];

	ATGBioPawn_execSetLegSkelControl_Parms SetLegSkelControl_Parms;
	SetLegSkelControl_Parms.bOpen = bOpen;

	this->ProcessEvent ( pFnSetLegSkelControl, &SetLegSkelControl_Parms, NULL );
};

// Function TGBioGame.TGBioPawn.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGBioPawn::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 219174 ];

	ATGBioPawn_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioPawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGBioPawn::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 219172 ];

	ATGBioPawn_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawnBase.StopThirdPersonRestrictEfeect
// [0x00020102] 
// Parameters infos:

void ATGBioPlayerPawnBase::StopThirdPersonRestrictEfeect ( )
{
	static UFunction* pFnStopThirdPersonRestrictEfeect = NULL;

	if ( ! pFnStopThirdPersonRestrictEfeect )
		pFnStopThirdPersonRestrictEfeect = (UFunction*) UObject::GObjObjects()->Data[ 219873 ];

	ATGBioPlayerPawnBase_execStopThirdPersonRestrictEfeect_Parms StopThirdPersonRestrictEfeect_Parms;

	this->ProcessEvent ( pFnStopThirdPersonRestrictEfeect, &StopThirdPersonRestrictEfeect_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawnBase.StopFirstPersonRestrictEffect
// [0x00020102] 
// Parameters infos:

void ATGBioPlayerPawnBase::StopFirstPersonRestrictEffect ( )
{
	static UFunction* pFnStopFirstPersonRestrictEffect = NULL;

	if ( ! pFnStopFirstPersonRestrictEffect )
		pFnStopFirstPersonRestrictEffect = (UFunction*) UObject::GObjObjects()->Data[ 219872 ];

	ATGBioPlayerPawnBase_execStopFirstPersonRestrictEffect_Parms StopFirstPersonRestrictEffect_Parms;

	this->ProcessEvent ( pFnStopFirstPersonRestrictEffect, &StopFirstPersonRestrictEffect_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawnBase.PlayThirdPersonRestrictEfeect
// [0x00820102] 
// Parameters infos:

void ATGBioPlayerPawnBase::PlayThirdPersonRestrictEfeect ( )
{
	static UFunction* pFnPlayThirdPersonRestrictEfeect = NULL;

	if ( ! pFnPlayThirdPersonRestrictEfeect )
		pFnPlayThirdPersonRestrictEfeect = (UFunction*) UObject::GObjObjects()->Data[ 219870 ];

	ATGBioPlayerPawnBase_execPlayThirdPersonRestrictEfeect_Parms PlayThirdPersonRestrictEfeect_Parms;

	this->ProcessEvent ( pFnPlayThirdPersonRestrictEfeect, &PlayThirdPersonRestrictEfeect_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawnBase.PlayFirstPersonRestrictEffect
// [0x00020102] 
// Parameters infos:

void ATGBioPlayerPawnBase::PlayFirstPersonRestrictEffect ( )
{
	static UFunction* pFnPlayFirstPersonRestrictEffect = NULL;

	if ( ! pFnPlayFirstPersonRestrictEffect )
		pFnPlayFirstPersonRestrictEffect = (UFunction*) UObject::GObjObjects()->Data[ 219869 ];

	ATGBioPlayerPawnBase_execPlayFirstPersonRestrictEffect_Parms PlayFirstPersonRestrictEffect_Parms;

	this->ProcessEvent ( pFnPlayFirstPersonRestrictEffect, &PlayFirstPersonRestrictEffect_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawnBase.DelayUnlockPlayer
// [0x00020102] 
// Parameters infos:

void ATGBioPlayerPawnBase::DelayUnlockPlayer ( )
{
	static UFunction* pFnDelayUnlockPlayer = NULL;

	if ( ! pFnDelayUnlockPlayer )
		pFnDelayUnlockPlayer = (UFunction*) UObject::GObjObjects()->Data[ 219867 ];

	ATGBioPlayerPawnBase_execDelayUnlockPlayer_Parms DelayUnlockPlayer_Parms;

	this->ProcessEvent ( pFnDelayUnlockPlayer, &DelayUnlockPlayer_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawnBase.SetRestrictState
// [0x00020102] 
// Parameters infos:
// unsigned long                  Restrict                       ( CPF_Parm )

void ATGBioPlayerPawnBase::SetRestrictState ( unsigned long Restrict )
{
	static UFunction* pFnSetRestrictState = NULL;

	if ( ! pFnSetRestrictState )
		pFnSetRestrictState = (UFunction*) UObject::GObjObjects()->Data[ 219863 ];

	ATGBioPlayerPawnBase_execSetRestrictState_Parms SetRestrictState_Parms;
	SetRestrictState_Parms.Restrict = Restrict;

	this->ProcessEvent ( pFnSetRestrictState, &SetRestrictState_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawnBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGBioPlayerPawnBase::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 219861 ];

	ATGBioPlayerPawnBase_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.DropCurWeapon
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATGBioPlayerController::DropCurWeapon ( )
{
	static UFunction* pFnDropCurWeapon = NULL;

	if ( ! pFnDropCurWeapon )
		pFnDropCurWeapon = (UFunction*) UObject::GObjObjects()->Data[ 222562 ];

	ATGBioPlayerController_execDropCurWeapon_Parms DropCurWeapon_Parms;

	this->ProcessEvent ( pFnDropCurWeapon, &DropCurWeapon_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.SetLockPawnRotation
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bLock                          ( CPF_Parm )

void ATGBioPlayerController::SetLockPawnRotation ( unsigned long bLock )
{
	static UFunction* pFnSetLockPawnRotation = NULL;

	if ( ! pFnSetLockPawnRotation )
		pFnSetLockPawnRotation = (UFunction*) UObject::GObjObjects()->Data[ 222560 ];

	ATGBioPlayerController_execSetLockPawnRotation_Parms SetLockPawnRotation_Parms;
	SetLockPawnRotation_Parms.bLock = bLock;

	this->ProcessEvent ( pFnSetLockPawnRotation, &SetLockPawnRotation_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.SetMovementLock
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bEnable                        ( CPF_Parm )

void ATGBioPlayerController::SetMovementLock ( unsigned long bEnable )
{
	static UFunction* pFnSetMovementLock = NULL;

	if ( ! pFnSetMovementLock )
		pFnSetMovementLock = (UFunction*) UObject::GObjObjects()->Data[ 219866 ];

	ATGBioPlayerController_execSetMovementLock_Parms SetMovementLock_Parms;
	SetMovementLock_Parms.bEnable = bEnable;

	this->ProcessEvent ( pFnSetMovementLock, &SetMovementLock_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.GetSpawnPropLocation
// [0x00020002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ATGBioPlayerController::GetSpawnPropLocation ( )
{
	static UFunction* pFnGetSpawnPropLocation = NULL;

	if ( ! pFnGetSpawnPropLocation )
		pFnGetSpawnPropLocation = (UFunction*) UObject::GObjObjects()->Data[ 222557 ];

	ATGBioPlayerController_execGetSpawnPropLocation_Parms GetSpawnPropLocation_Parms;

	this->ProcessEvent ( pFnGetSpawnPropLocation, &GetSpawnPropLocation_Parms, NULL );

	return GetSpawnPropLocation_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerController.ServerSpawnItem
// [0x002200C2] 
// Parameters infos:
// unsigned char                  PropType                       ( CPF_Parm )

void ATGBioPlayerController::ServerSpawnItem ( unsigned char PropType )
{
	static UFunction* pFnServerSpawnItem = NULL;

	if ( ! pFnServerSpawnItem )
		pFnServerSpawnItem = (UFunction*) UObject::GObjObjects()->Data[ 222553 ];

	ATGBioPlayerController_execServerSpawnItem_Parms ServerSpawnItem_Parms;
	ServerSpawnItem_Parms.PropType = PropType;

	this->ProcessEvent ( pFnServerSpawnItem, &ServerSpawnItem_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.SpawnProp
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// int                            PropId                         ( CPF_Parm )

void ATGBioPlayerController::SpawnProp ( int PropId )
{
	static UFunction* pFnSpawnProp = NULL;

	if ( ! pFnSpawnProp )
		pFnSpawnProp = (UFunction*) UObject::GObjObjects()->Data[ 222551 ];

	ATGBioPlayerController_execSpawnProp_Parms SpawnProp_Parms;
	SpawnProp_Parms.PropId = PropId;

	this->ProcessEvent ( pFnSpawnProp, &SpawnProp_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.RemovePropMessage
// [0x010201C2] 
// Parameters infos:

void ATGBioPlayerController::RemovePropMessage ( )
{
	static UFunction* pFnRemovePropMessage = NULL;

	if ( ! pFnRemovePropMessage )
		pFnRemovePropMessage = (UFunction*) UObject::GObjObjects()->Data[ 222550 ];

	ATGBioPlayerController_execRemovePropMessage_Parms RemovePropMessage_Parms;

	this->ProcessEvent ( pFnRemovePropMessage, &RemovePropMessage_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.RoundReset
// [0x010201C2] 
// Parameters infos:

void ATGBioPlayerController::RoundReset ( )
{
	static UFunction* pFnRoundReset = NULL;

	if ( ! pFnRoundReset )
		pFnRoundReset = (UFunction*) UObject::GObjObjects()->Data[ 222549 ];

	ATGBioPlayerController_execRoundReset_Parms RoundReset_Parms;

	this->ProcessEvent ( pFnRoundReset, &RoundReset_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.Reset
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerController::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 222548 ];

	ATGBioPlayerController_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.ResetAnimTreeWhenSpectating
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerController::ResetAnimTreeWhenSpectating ( )
{
	static UFunction* pFnResetAnimTreeWhenSpectating = NULL;

	if ( ! pFnResetAnimTreeWhenSpectating )
		pFnResetAnimTreeWhenSpectating = (UFunction*) UObject::GObjObjects()->Data[ 222545 ];

	ATGBioPlayerController_execResetAnimTreeWhenSpectating_Parms ResetAnimTreeWhenSpectating_Parms;

	this->ProcessEvent ( pFnResetAnimTreeWhenSpectating, &ResetAnimTreeWhenSpectating_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.ServerZombieMeleeSuicide
// [0x002200C2] 
// Parameters infos:

void ATGBioPlayerController::ServerZombieMeleeSuicide ( )
{
	static UFunction* pFnServerZombieMeleeSuicide = NULL;

	if ( ! pFnServerZombieMeleeSuicide )
		pFnServerZombieMeleeSuicide = (UFunction*) UObject::GObjObjects()->Data[ 222544 ];

	ATGBioPlayerController_execServerZombieMeleeSuicide_Parms ServerZombieMeleeSuicide_Parms;

	this->ProcessEvent ( pFnServerZombieMeleeSuicide, &ServerZombieMeleeSuicide_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.ZombieMeleeSuicide
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATGBioPlayerController::ZombieMeleeSuicide ( )
{
	static UFunction* pFnZombieMeleeSuicide = NULL;

	if ( ! pFnZombieMeleeSuicide )
		pFnZombieMeleeSuicide = (UFunction*) UObject::GObjObjects()->Data[ 222543 ];

	ATGBioPlayerController_execZombieMeleeSuicide_Parms ZombieMeleeSuicide_Parms;

	this->ProcessEvent ( pFnZombieMeleeSuicide, &ZombieMeleeSuicide_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.ServerBioEndCurrentRound
// [0x00220042] 
// Parameters infos:

void ATGBioPlayerController::ServerBioEndCurrentRound ( )
{
	static UFunction* pFnServerBioEndCurrentRound = NULL;

	if ( ! pFnServerBioEndCurrentRound )
		pFnServerBioEndCurrentRound = (UFunction*) UObject::GObjObjects()->Data[ 222542 ];

	ATGBioPlayerController_execServerBioEndCurrentRound_Parms ServerBioEndCurrentRound_Parms;

	this->ProcessEvent ( pFnServerBioEndCurrentRound, &ServerBioEndCurrentRound_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.BioEndCurrentRound
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATGBioPlayerController::BioEndCurrentRound ( )
{
	static UFunction* pFnBioEndCurrentRound = NULL;

	if ( ! pFnBioEndCurrentRound )
		pFnBioEndCurrentRound = (UFunction*) UObject::GObjObjects()->Data[ 222541 ];

	ATGBioPlayerController_execBioEndCurrentRound_Parms BioEndCurrentRound_Parms;

	this->ProcessEvent ( pFnBioEndCurrentRound, &BioEndCurrentRound_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.PlayerTick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGBioPlayerController::eventPlayerTick ( float DeltaTime )
{
	static UFunction* pFnPlayerTick = NULL;

	if ( ! pFnPlayerTick )
		pFnPlayerTick = (UFunction*) UObject::GObjObjects()->Data[ 222534 ];

	ATGBioPlayerController_eventPlayerTick_Parms PlayerTick_Parms;
	PlayerTick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnPlayerTick, &PlayerTick_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.ShowChangeBag
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerController::ShowChangeBag ( )
{
	static UFunction* pFnShowChangeBag = NULL;

	if ( ! pFnShowChangeBag )
		pFnShowChangeBag = (UFunction*) UObject::GObjObjects()->Data[ 222532 ];

	ATGBioPlayerController_execShowChangeBag_Parms ShowChangeBag_Parms;

	this->ProcessEvent ( pFnShowChangeBag, &ShowChangeBag_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.IsHumanCamp
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioPlayerController::IsHumanCamp ( )
{
	static UFunction* pFnIsHumanCamp = NULL;

	if ( ! pFnIsHumanCamp )
		pFnIsHumanCamp = (UFunction*) UObject::GObjObjects()->Data[ 221700 ];

	ATGBioPlayerController_execIsHumanCamp_Parms IsHumanCamp_Parms;

	this->ProcessEvent ( pFnIsHumanCamp, &IsHumanCamp_Parms, NULL );

	return IsHumanCamp_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerController.IsZombieCamp
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioPlayerController::IsZombieCamp ( )
{
	static UFunction* pFnIsZombieCamp = NULL;

	if ( ! pFnIsZombieCamp )
		pFnIsZombieCamp = (UFunction*) UObject::GObjObjects()->Data[ 222530 ];

	ATGBioPlayerController_execIsZombieCamp_Parms IsZombieCamp_Parms;

	this->ProcessEvent ( pFnIsZombieCamp, &IsZombieCamp_Parms, NULL );

	return IsZombieCamp_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerController.ServerSetBioTransMode
// [0x00220042] 
// Parameters infos:
// int                            NewGodMode                     ( CPF_Parm )

void ATGBioPlayerController::ServerSetBioTransMode ( int NewGodMode )
{
	static UFunction* pFnServerSetBioTransMode = NULL;

	if ( ! pFnServerSetBioTransMode )
		pFnServerSetBioTransMode = (UFunction*) UObject::GObjObjects()->Data[ 222528 ];

	ATGBioPlayerController_execServerSetBioTransMode_Parms ServerSetBioTransMode_Parms;
	ServerSetBioTransMode_Parms.NewGodMode = NewGodMode;

	this->ProcessEvent ( pFnServerSetBioTransMode, &ServerSetBioTransMode_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.SetBioTransMode
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// int                            NewMode                        ( CPF_Parm )

void ATGBioPlayerController::SetBioTransMode ( int NewMode )
{
	static UFunction* pFnSetBioTransMode = NULL;

	if ( ! pFnSetBioTransMode )
		pFnSetBioTransMode = (UFunction*) UObject::GObjObjects()->Data[ 222526 ];

	ATGBioPlayerController_execSetBioTransMode_Parms SetBioTransMode_Parms;
	SetBioTransMode_Parms.NewMode = NewMode;

	this->ProcessEvent ( pFnSetBioTransMode, &SetBioTransMode_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.UnUse
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATGBioPlayerController::UnUse ( )
{
	static UFunction* pFnUnUse = NULL;

	if ( ! pFnUnUse )
		pFnUnUse = (UFunction*) UObject::GObjObjects()->Data[ 222525 ];

	ATGBioPlayerController_execUnUse_Parms UnUse_Parms;

	this->ProcessEvent ( pFnUnUse, &UnUse_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.GotZPoint
// [0x00020002] 
// Parameters infos:
// int                            GotPoint                       ( CPF_Parm )

void ATGBioPlayerController::GotZPoint ( int GotPoint )
{
	static UFunction* pFnGotZPoint = NULL;

	if ( ! pFnGotZPoint )
		pFnGotZPoint = (UFunction*) UObject::GObjObjects()->Data[ 222523 ];

	ATGBioPlayerController_execGotZPoint_Parms GotZPoint_Parms;
	GotZPoint_Parms.GotPoint = GotPoint;

	this->ProcessEvent ( pFnGotZPoint, &GotZPoint_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.SetServerPermanentDeathLocation
// [0x002200C2] 
// Parameters infos:
// struct FVector                 DeathLoc                       ( CPF_Parm )

void ATGBioPlayerController::SetServerPermanentDeathLocation ( struct FVector DeathLoc )
{
	static UFunction* pFnSetServerPermanentDeathLocation = NULL;

	if ( ! pFnSetServerPermanentDeathLocation )
		pFnSetServerPermanentDeathLocation = (UFunction*) UObject::GObjObjects()->Data[ 222521 ];

	ATGBioPlayerController_execSetServerPermanentDeathLocation_Parms SetServerPermanentDeathLocation_Parms;
	memcpy ( &SetServerPermanentDeathLocation_Parms.DeathLoc, &DeathLoc, 0xC );

	this->ProcessEvent ( pFnSetServerPermanentDeathLocation, &SetServerPermanentDeathLocation_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.ServerChangeToHumanHero
// [0x002200C2] 
// Parameters infos:

void ATGBioPlayerController::ServerChangeToHumanHero ( )
{
	static UFunction* pFnServerChangeToHumanHero = NULL;

	if ( ! pFnServerChangeToHumanHero )
		pFnServerChangeToHumanHero = (UFunction*) UObject::GObjObjects()->Data[ 222519 ];

	ATGBioPlayerController_execServerChangeToHumanHero_Parms ServerChangeToHumanHero_Parms;

	this->ProcessEvent ( pFnServerChangeToHumanHero, &ServerChangeToHumanHero_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.InterServerTurnToHumanHero
// [0x00220042] 
// Parameters infos:

void ATGBioPlayerController::InterServerTurnToHumanHero ( )
{
	static UFunction* pFnInterServerTurnToHumanHero = NULL;

	if ( ! pFnInterServerTurnToHumanHero )
		pFnInterServerTurnToHumanHero = (UFunction*) UObject::GObjObjects()->Data[ 222517 ];

	ATGBioPlayerController_execInterServerTurnToHumanHero_Parms InterServerTurnToHumanHero_Parms;

	this->ProcessEvent ( pFnInterServerTurnToHumanHero, &InterServerTurnToHumanHero_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.TurnToHumanHero
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATGBioPlayerController::TurnToHumanHero ( )
{
	static UFunction* pFnTurnToHumanHero = NULL;

	if ( ! pFnTurnToHumanHero )
		pFnTurnToHumanHero = (UFunction*) UObject::GObjObjects()->Data[ 222516 ];

	ATGBioPlayerController_execTurnToHumanHero_Parms TurnToHumanHero_Parms;

	this->ProcessEvent ( pFnTurnToHumanHero, &TurnToHumanHero_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.InterServerTurnToHumanHeroEx2
// [0x00220042] 
// Parameters infos:

void ATGBioPlayerController::InterServerTurnToHumanHeroEx2 ( )
{
	static UFunction* pFnInterServerTurnToHumanHeroEx2 = NULL;

	if ( ! pFnInterServerTurnToHumanHeroEx2 )
		pFnInterServerTurnToHumanHeroEx2 = (UFunction*) UObject::GObjObjects()->Data[ 222514 ];

	ATGBioPlayerController_execInterServerTurnToHumanHeroEx2_Parms InterServerTurnToHumanHeroEx2_Parms;

	this->ProcessEvent ( pFnInterServerTurnToHumanHeroEx2, &InterServerTurnToHumanHeroEx2_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.T2HumanHero2
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATGBioPlayerController::T2HumanHero2 ( )
{
	static UFunction* pFnT2HumanHero2 = NULL;

	if ( ! pFnT2HumanHero2 )
		pFnT2HumanHero2 = (UFunction*) UObject::GObjObjects()->Data[ 222513 ];

	ATGBioPlayerController_execT2HumanHero2_Parms T2HumanHero2_Parms;

	this->ProcessEvent ( pFnT2HumanHero2, &T2HumanHero2_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.InterServerTurnToHumanHeroEx
// [0x00220042] 
// Parameters infos:

void ATGBioPlayerController::InterServerTurnToHumanHeroEx ( )
{
	static UFunction* pFnInterServerTurnToHumanHeroEx = NULL;

	if ( ! pFnInterServerTurnToHumanHeroEx )
		pFnInterServerTurnToHumanHeroEx = (UFunction*) UObject::GObjObjects()->Data[ 222511 ];

	ATGBioPlayerController_execInterServerTurnToHumanHeroEx_Parms InterServerTurnToHumanHeroEx_Parms;

	this->ProcessEvent ( pFnInterServerTurnToHumanHeroEx, &InterServerTurnToHumanHeroEx_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.T2HumanHero
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATGBioPlayerController::T2HumanHero ( )
{
	static UFunction* pFnT2HumanHero = NULL;

	if ( ! pFnT2HumanHero )
		pFnT2HumanHero = (UFunction*) UObject::GObjObjects()->Data[ 222510 ];

	ATGBioPlayerController_execT2HumanHero_Parms T2HumanHero_Parms;

	this->ProcessEvent ( pFnT2HumanHero, &T2HumanHero_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.ServerZombieLevelUP
// [0x00220042] 
// Parameters infos:

void ATGBioPlayerController::ServerZombieLevelUP ( )
{
	static UFunction* pFnServerZombieLevelUP = NULL;

	if ( ! pFnServerZombieLevelUP )
		pFnServerZombieLevelUP = (UFunction*) UObject::GObjObjects()->Data[ 222509 ];

	ATGBioPlayerController_execServerZombieLevelUP_Parms ServerZombieLevelUP_Parms;

	this->ProcessEvent ( pFnServerZombieLevelUP, &ServerZombieLevelUP_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.ZombieLevelUP
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATGBioPlayerController::ZombieLevelUP ( )
{
	static UFunction* pFnZombieLevelUP = NULL;

	if ( ! pFnZombieLevelUP )
		pFnZombieLevelUP = (UFunction*) UObject::GObjObjects()->Data[ 222508 ];

	ATGBioPlayerController_execZombieLevelUP_Parms ZombieLevelUP_Parms;

	this->ProcessEvent ( pFnZombieLevelUP, &ZombieLevelUP_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.AddTimerMessageFeedback
// [0x010201C2] 
// Parameters infos:
// int                            RemainingSeconds               ( CPF_Parm )

void ATGBioPlayerController::AddTimerMessageFeedback ( int RemainingSeconds )
{
	static UFunction* pFnAddTimerMessageFeedback = NULL;

	if ( ! pFnAddTimerMessageFeedback )
		pFnAddTimerMessageFeedback = (UFunction*) UObject::GObjObjects()->Data[ 222506 ];

	ATGBioPlayerController_execAddTimerMessageFeedback_Parms AddTimerMessageFeedback_Parms;
	AddTimerMessageFeedback_Parms.RemainingSeconds = RemainingSeconds;

	this->ProcessEvent ( pFnAddTimerMessageFeedback, &AddTimerMessageFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.PlayRoundStartSound
// [0x010201C2] 
// Parameters infos:

void ATGBioPlayerController::PlayRoundStartSound ( )
{
	static UFunction* pFnPlayRoundStartSound = NULL;

	if ( ! pFnPlayRoundStartSound )
		pFnPlayRoundStartSound = (UFunction*) UObject::GObjObjects()->Data[ 222505 ];

	ATGBioPlayerController_execPlayRoundStartSound_Parms PlayRoundStartSound_Parms;

	this->ProcessEvent ( pFnPlayRoundStartSound, &PlayRoundStartSound_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.TimeFeedback
// [0x010201C2] 
// Parameters infos:
// int                            FeedbackTime                   ( CPF_Parm )

void ATGBioPlayerController::TimeFeedback ( int FeedbackTime )
{
	static UFunction* pFnTimeFeedback = NULL;

	if ( ! pFnTimeFeedback )
		pFnTimeFeedback = (UFunction*) UObject::GObjObjects()->Data[ 222503 ];

	ATGBioPlayerController_execTimeFeedback_Parms TimeFeedback_Parms;
	TimeFeedback_Parms.FeedbackTime = FeedbackTime;

	this->ProcessEvent ( pFnTimeFeedback, &TimeFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.AddKilledByHeroGunWeaponFeedback
// [0x010201C2] 
// Parameters infos:

void ATGBioPlayerController::AddKilledByHeroGunWeaponFeedback ( )
{
	static UFunction* pFnAddKilledByHeroGunWeaponFeedback = NULL;

	if ( ! pFnAddKilledByHeroGunWeaponFeedback )
		pFnAddKilledByHeroGunWeaponFeedback = (UFunction*) UObject::GObjObjects()->Data[ 222502 ];

	ATGBioPlayerController_execAddKilledByHeroGunWeaponFeedback_Parms AddKilledByHeroGunWeaponFeedback_Parms;

	this->ProcessEvent ( pFnAddKilledByHeroGunWeaponFeedback, &AddKilledByHeroGunWeaponFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.AddKilledByMeeWeaponFeedback
// [0x010201C2] 
// Parameters infos:

void ATGBioPlayerController::AddKilledByMeeWeaponFeedback ( )
{
	static UFunction* pFnAddKilledByMeeWeaponFeedback = NULL;

	if ( ! pFnAddKilledByMeeWeaponFeedback )
		pFnAddKilledByMeeWeaponFeedback = (UFunction*) UObject::GObjObjects()->Data[ 222501 ];

	ATGBioPlayerController_execAddKilledByMeeWeaponFeedback_Parms AddKilledByMeeWeaponFeedback_Parms;

	this->ProcessEvent ( pFnAddKilledByMeeWeaponFeedback, &AddKilledByMeeWeaponFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.AddWeaponArrivedSound
// [0x010201C2] 
// Parameters infos:

void ATGBioPlayerController::AddWeaponArrivedSound ( )
{
	static UFunction* pFnAddWeaponArrivedSound = NULL;

	if ( ! pFnAddWeaponArrivedSound )
		pFnAddWeaponArrivedSound = (UFunction*) UObject::GObjObjects()->Data[ 222500 ];

	ATGBioPlayerController_execAddWeaponArrivedSound_Parms AddWeaponArrivedSound_Parms;

	this->ProcessEvent ( pFnAddWeaponArrivedSound, &AddWeaponArrivedSound_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.AddWeaponArrivedFeedback
// [0x010201C2] 
// Parameters infos:

void ATGBioPlayerController::AddWeaponArrivedFeedback ( )
{
	static UFunction* pFnAddWeaponArrivedFeedback = NULL;

	if ( ! pFnAddWeaponArrivedFeedback )
		pFnAddWeaponArrivedFeedback = (UFunction*) UObject::GObjObjects()->Data[ 222499 ];

	ATGBioPlayerController_execAddWeaponArrivedFeedback_Parms AddWeaponArrivedFeedback_Parms;

	this->ProcessEvent ( pFnAddWeaponArrivedFeedback, &AddWeaponArrivedFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.PlaySoundBecomeHero
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerController::PlaySoundBecomeHero ( )
{
	static UFunction* pFnPlaySoundBecomeHero = NULL;

	if ( ! pFnPlaySoundBecomeHero )
		pFnPlaySoundBecomeHero = (UFunction*) UObject::GObjObjects()->Data[ 222497 ];

	ATGBioPlayerController_execPlaySoundBecomeHero_Parms PlaySoundBecomeHero_Parms;

	this->ProcessEvent ( pFnPlaySoundBecomeHero, &PlaySoundBecomeHero_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.AddBecomeHumanHeroStateFeedback
// [0x010201C2] 
// Parameters infos:
// int                            HeroType                       ( CPF_Parm )

void ATGBioPlayerController::AddBecomeHumanHeroStateFeedback ( int HeroType )
{
	static UFunction* pFnAddBecomeHumanHeroStateFeedback = NULL;

	if ( ! pFnAddBecomeHumanHeroStateFeedback )
		pFnAddBecomeHumanHeroStateFeedback = (UFunction*) UObject::GObjObjects()->Data[ 222495 ];

	ATGBioPlayerController_execAddBecomeHumanHeroStateFeedback_Parms AddBecomeHumanHeroStateFeedback_Parms;
	AddBecomeHumanHeroStateFeedback_Parms.HeroType = HeroType;

	this->ProcessEvent ( pFnAddBecomeHumanHeroStateFeedback, &AddBecomeHumanHeroStateFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.AddCanChangeHumanHeroFeedback
// [0x010201C2] 
// Parameters infos:

void ATGBioPlayerController::AddCanChangeHumanHeroFeedback ( )
{
	static UFunction* pFnAddCanChangeHumanHeroFeedback = NULL;

	if ( ! pFnAddCanChangeHumanHeroFeedback )
		pFnAddCanChangeHumanHeroFeedback = (UFunction*) UObject::GObjObjects()->Data[ 222494 ];

	ATGBioPlayerController_execAddCanChangeHumanHeroFeedback_Parms AddCanChangeHumanHeroFeedback_Parms;

	this->ProcessEvent ( pFnAddCanChangeHumanHeroFeedback, &AddCanChangeHumanHeroFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.AddRestrictStateFeedback
// [0x010201C0] 
// Parameters infos:
// unsigned long                  bRestriced                     ( CPF_Parm )

void ATGBioPlayerController::AddRestrictStateFeedback ( unsigned long bRestriced )
{
	static UFunction* pFnAddRestrictStateFeedback = NULL;

	if ( ! pFnAddRestrictStateFeedback )
		pFnAddRestrictStateFeedback = (UFunction*) UObject::GObjObjects()->Data[ 222492 ];

	ATGBioPlayerController_execAddRestrictStateFeedback_Parms AddRestrictStateFeedback_Parms;
	AddRestrictStateFeedback_Parms.bRestriced = bRestriced;

	this->ProcessEvent ( pFnAddRestrictStateFeedback, &AddRestrictStateFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.AddKillHumanHeroFeedback
// [0x010201C2] 
// Parameters infos:

void ATGBioPlayerController::AddKillHumanHeroFeedback ( )
{
	static UFunction* pFnAddKillHumanHeroFeedback = NULL;

	if ( ! pFnAddKillHumanHeroFeedback )
		pFnAddKillHumanHeroFeedback = (UFunction*) UObject::GObjObjects()->Data[ 222491 ];

	ATGBioPlayerController_execAddKillHumanHeroFeedback_Parms AddKillHumanHeroFeedback_Parms;

	this->ProcessEvent ( pFnAddKillHumanHeroFeedback, &AddKillHumanHeroFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.AddMatchInfoMessageFeedback
// [0x010201C2] 
// Parameters infos:

void ATGBioPlayerController::AddMatchInfoMessageFeedback ( )
{
	static UFunction* pFnAddMatchInfoMessageFeedback = NULL;

	if ( ! pFnAddMatchInfoMessageFeedback )
		pFnAddMatchInfoMessageFeedback = (UFunction*) UObject::GObjObjects()->Data[ 222490 ];

	ATGBioPlayerController_execAddMatchInfoMessageFeedback_Parms AddMatchInfoMessageFeedback_Parms;

	this->ProcessEvent ( pFnAddMatchInfoMessageFeedback, &AddMatchInfoMessageFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.IsSkillCoolingDown
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioPlayerController::IsSkillCoolingDown ( )
{
	static UFunction* pFnIsSkillCoolingDown = NULL;

	if ( ! pFnIsSkillCoolingDown )
		pFnIsSkillCoolingDown = (UFunction*) UObject::GObjObjects()->Data[ 222482 ];

	ATGBioPlayerController_execIsSkillCoolingDown_Parms IsSkillCoolingDown_Parms;

	this->ProcessEvent ( pFnIsSkillCoolingDown, &IsSkillCoolingDown_Parms, NULL );

	return IsSkillCoolingDown_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerController.StartSkill
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerController::StartSkill ( )
{
	static UFunction* pFnStartSkill = NULL;

	if ( ! pFnStartSkill )
		pFnStartSkill = (UFunction*) UObject::GObjObjects()->Data[ 222480 ];

	ATGBioPlayerController_execStartSkill_Parms StartSkill_Parms;

	this->ProcessEvent ( pFnStartSkill, &StartSkill_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.ClientStartSkill
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerController::ClientStartSkill ( )
{
	static UFunction* pFnClientStartSkill = NULL;

	if ( ! pFnClientStartSkill )
		pFnClientStartSkill = (UFunction*) UObject::GObjObjects()->Data[ 222479 ];

	ATGBioPlayerController_execClientStartSkill_Parms ClientStartSkill_Parms;

	this->ProcessEvent ( pFnClientStartSkill, &ClientStartSkill_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.AddZombieLastoneSound
// [0x010201C2] 
// Parameters infos:

void ATGBioPlayerController::AddZombieLastoneSound ( )
{
	static UFunction* pFnAddZombieLastoneSound = NULL;

	if ( ! pFnAddZombieLastoneSound )
		pFnAddZombieLastoneSound = (UFunction*) UObject::GObjObjects()->Data[ 222477 ];

	ATGBioPlayerController_execAddZombieLastoneSound_Parms AddZombieLastoneSound_Parms;

	this->ProcessEvent ( pFnAddZombieLastoneSound, &AddZombieLastoneSound_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.AddCanHumanHeroSound
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerController::AddCanHumanHeroSound ( )
{
	static UFunction* pFnAddCanHumanHeroSound = NULL;

	if ( ! pFnAddCanHumanHeroSound )
		pFnAddCanHumanHeroSound = (UFunction*) UObject::GObjObjects()->Data[ 222475 ];

	ATGBioPlayerController_execAddCanHumanHeroSound_Parms AddCanHumanHeroSound_Parms;

	this->ProcessEvent ( pFnAddCanHumanHeroSound, &AddCanHumanHeroSound_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.Use
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATGBioPlayerController::Use ( )
{
	static UFunction* pFnUse = NULL;

	if ( ! pFnUse )
		pFnUse = (UFunction*) UObject::GObjObjects()->Data[ 222474 ];

	ATGBioPlayerController_execUse_Parms Use_Parms;

	this->ProcessEvent ( pFnUse, &Use_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.ChangeZ
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// int                            I                              ( CPF_Parm )

void ATGBioPlayerController::ChangeZ ( int I )
{
	static UFunction* pFnChangeZ = NULL;

	if ( ! pFnChangeZ )
		pFnChangeZ = (UFunction*) UObject::GObjObjects()->Data[ 222471 ];

	ATGBioPlayerController_execChangeZ_Parms ChangeZ_Parms;
	ChangeZ_Parms.I = I;

	this->ProcessEvent ( pFnChangeZ, &ChangeZ_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.TestChangeZ
// [0x00A200C2] 
// Parameters infos:
// unsigned char                  Type                           ( CPF_Parm )

void ATGBioPlayerController::TestChangeZ ( unsigned char Type )
{
	static UFunction* pFnTestChangeZ = NULL;

	if ( ! pFnTestChangeZ )
		pFnTestChangeZ = (UFunction*) UObject::GObjObjects()->Data[ 222467 ];

	ATGBioPlayerController_execTestChangeZ_Parms TestChangeZ_Parms;
	TestChangeZ_Parms.Type = Type;

	this->ProcessEvent ( pFnTestChangeZ, &TestChangeZ_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.Changebag
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATGBioPlayerController::Changebag ( )
{
	static UFunction* pFnChangebag = NULL;

	if ( ! pFnChangebag )
		pFnChangebag = (UFunction*) UObject::GObjObjects()->Data[ 222466 ];

	ATGBioPlayerController_execChangebag_Parms Changebag_Parms;

	this->ProcessEvent ( pFnChangebag, &Changebag_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.SwitchWeapon
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// unsigned char                  T                              ( CPF_Parm )

void ATGBioPlayerController::SwitchWeapon ( unsigned char T )
{
	static UFunction* pFnSwitchWeapon = NULL;

	if ( ! pFnSwitchWeapon )
		pFnSwitchWeapon = (UFunction*) UObject::GObjObjects()->Data[ 222464 ];

	ATGBioPlayerController_execSwitchWeapon_Parms SwitchWeapon_Parms;
	SwitchWeapon_Parms.T = T;

	this->ProcessEvent ( pFnSwitchWeapon, &SwitchWeapon_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.pSelectHumanHeroWeapon
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// int                            I                              ( CPF_Parm )

void ATGBioPlayerController::pSelectHumanHeroWeapon ( int I )
{
	static UFunction* pFnpSelectHumanHeroWeapon = NULL;

	if ( ! pFnpSelectHumanHeroWeapon )
		pFnpSelectHumanHeroWeapon = (UFunction*) UObject::GObjObjects()->Data[ 222462 ];

	ATGBioPlayerController_execpSelectHumanHeroWeapon_Parms pSelectHumanHeroWeapon_Parms;
	pSelectHumanHeroWeapon_Parms.I = I;

	this->ProcessEvent ( pFnpSelectHumanHeroWeapon, &pSelectHumanHeroWeapon_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.pSelectZ
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// int                            I                              ( CPF_Parm )

void ATGBioPlayerController::pSelectZ ( int I )
{
	static UFunction* pFnpSelectZ = NULL;

	if ( ! pFnpSelectZ )
		pFnpSelectZ = (UFunction*) UObject::GObjObjects()->Data[ 222459 ];

	ATGBioPlayerController_execpSelectZ_Parms pSelectZ_Parms;
	pSelectZ_Parms.I = I;

	this->ProcessEvent ( pFnpSelectZ, &pSelectZ_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.SelectHumanHeroWeaponServer
// [0x002200C2] 
// Parameters infos:
// unsigned char                  Type                           ( CPF_Parm )

void ATGBioPlayerController::SelectHumanHeroWeaponServer ( unsigned char Type )
{
	static UFunction* pFnSelectHumanHeroWeaponServer = NULL;

	if ( ! pFnSelectHumanHeroWeaponServer )
		pFnSelectHumanHeroWeaponServer = (UFunction*) UObject::GObjObjects()->Data[ 222457 ];

	ATGBioPlayerController_execSelectHumanHeroWeaponServer_Parms SelectHumanHeroWeaponServer_Parms;
	SelectHumanHeroWeaponServer_Parms.Type = Type;

	this->ProcessEvent ( pFnSelectHumanHeroWeaponServer, &SelectHumanHeroWeaponServer_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.SelectHumanHeroWeapon
// [0x00020002] 
// Parameters infos:
// unsigned char                  Type                           ( CPF_Parm )

void ATGBioPlayerController::SelectHumanHeroWeapon ( unsigned char Type )
{
	static UFunction* pFnSelectHumanHeroWeapon = NULL;

	if ( ! pFnSelectHumanHeroWeapon )
		pFnSelectHumanHeroWeapon = (UFunction*) UObject::GObjObjects()->Data[ 222451 ];

	ATGBioPlayerController_execSelectHumanHeroWeapon_Parms SelectHumanHeroWeapon_Parms;
	SelectHumanHeroWeapon_Parms.Type = Type;

	this->ProcessEvent ( pFnSelectHumanHeroWeapon, &SelectHumanHeroWeapon_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.CloseSelectHumanHeroWeaponType
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerController::CloseSelectHumanHeroWeaponType ( )
{
	static UFunction* pFnCloseSelectHumanHeroWeaponType = NULL;

	if ( ! pFnCloseSelectHumanHeroWeaponType )
		pFnCloseSelectHumanHeroWeaponType = (UFunction*) UObject::GObjObjects()->Data[ 222447 ];

	ATGBioPlayerController_execCloseSelectHumanHeroWeaponType_Parms CloseSelectHumanHeroWeaponType_Parms;

	this->ProcessEvent ( pFnCloseSelectHumanHeroWeaponType, &CloseSelectHumanHeroWeaponType_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.OpenSelectHumanHeroWeaponType
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerController::OpenSelectHumanHeroWeaponType ( )
{
	static UFunction* pFnOpenSelectHumanHeroWeaponType = NULL;

	if ( ! pFnOpenSelectHumanHeroWeaponType )
		pFnOpenSelectHumanHeroWeaponType = (UFunction*) UObject::GObjObjects()->Data[ 222441 ];

	ATGBioPlayerController_execOpenSelectHumanHeroWeaponType_Parms OpenSelectHumanHeroWeaponType_Parms;

	this->ProcessEvent ( pFnOpenSelectHumanHeroWeaponType, &OpenSelectHumanHeroWeaponType_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.ServerBeginVoteToKickPlayer
// [0x002200C2] 
// Parameters infos:
// struct FString                 Uin                            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  KickReason                     ( CPF_Parm )
// struct FString                 CustomKickReason               ( CPF_Parm | CPF_NeedCtorLink )

void ATGBioPlayerController::ServerBeginVoteToKickPlayer ( struct FString Uin, unsigned char KickReason, struct FString CustomKickReason )
{
	static UFunction* pFnServerBeginVoteToKickPlayer = NULL;

	if ( ! pFnServerBeginVoteToKickPlayer )
		pFnServerBeginVoteToKickPlayer = (UFunction*) UObject::GObjObjects()->Data[ 222434 ];

	ATGBioPlayerController_execServerBeginVoteToKickPlayer_Parms ServerBeginVoteToKickPlayer_Parms;
	memcpy ( &ServerBeginVoteToKickPlayer_Parms.Uin, &Uin, 0xC );
	ServerBeginVoteToKickPlayer_Parms.KickReason = KickReason;
	memcpy ( &ServerBeginVoteToKickPlayer_Parms.CustomKickReason, &CustomKickReason, 0xC );

	this->ProcessEvent ( pFnServerBeginVoteToKickPlayer, &ServerBeginVoteToKickPlayer_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.BeginVoteToKickPlayer
// [0x00020002] 
// Parameters infos:
// struct FString                 Uin                            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  KickReason                     ( CPF_Parm )
// struct FString                 CustomKickReason               ( CPF_Parm | CPF_NeedCtorLink )

void ATGBioPlayerController::BeginVoteToKickPlayer ( struct FString Uin, unsigned char KickReason, struct FString CustomKickReason )
{
	static UFunction* pFnBeginVoteToKickPlayer = NULL;

	if ( ! pFnBeginVoteToKickPlayer )
		pFnBeginVoteToKickPlayer = (UFunction*) UObject::GObjObjects()->Data[ 222430 ];

	ATGBioPlayerController_execBeginVoteToKickPlayer_Parms BeginVoteToKickPlayer_Parms;
	memcpy ( &BeginVoteToKickPlayer_Parms.Uin, &Uin, 0xC );
	BeginVoteToKickPlayer_Parms.KickReason = KickReason;
	memcpy ( &BeginVoteToKickPlayer_Parms.CustomKickReason, &CustomKickReason, 0xC );

	this->ProcessEvent ( pFnBeginVoteToKickPlayer, &BeginVoteToKickPlayer_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.ServerGetKickPlayerData
// [0x002200C2] 
// Parameters infos:

void ATGBioPlayerController::ServerGetKickPlayerData ( )
{
	static UFunction* pFnServerGetKickPlayerData = NULL;

	if ( ! pFnServerGetKickPlayerData )
		pFnServerGetKickPlayerData = (UFunction*) UObject::GObjObjects()->Data[ 222410 ];

	ATGBioPlayerController_execServerGetKickPlayerData_Parms ServerGetKickPlayerData_Parms;

	this->ProcessEvent ( pFnServerGetKickPlayerData, &ServerGetKickPlayerData_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.SelectHostZombieTypeServer
// [0x002200C2] 
// Parameters infos:
// unsigned char                  Type                           ( CPF_Parm )

void ATGBioPlayerController::SelectHostZombieTypeServer ( unsigned char Type )
{
	static UFunction* pFnSelectHostZombieTypeServer = NULL;

	if ( ! pFnSelectHostZombieTypeServer )
		pFnSelectHostZombieTypeServer = (UFunction*) UObject::GObjObjects()->Data[ 222408 ];

	ATGBioPlayerController_execSelectHostZombieTypeServer_Parms SelectHostZombieTypeServer_Parms;
	SelectHostZombieTypeServer_Parms.Type = Type;

	this->ProcessEvent ( pFnSelectHostZombieTypeServer, &SelectHostZombieTypeServer_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.ZombieTypeMap
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ZombieType                     ( CPF_Parm )

unsigned char ATGBioPlayerController::ZombieTypeMap ( unsigned char ZombieType )
{
	static UFunction* pFnZombieTypeMap = NULL;

	if ( ! pFnZombieTypeMap )
		pFnZombieTypeMap = (UFunction*) UObject::GObjObjects()->Data[ 222405 ];

	ATGBioPlayerController_execZombieTypeMap_Parms ZombieTypeMap_Parms;
	ZombieTypeMap_Parms.ZombieType = ZombieType;

	this->ProcessEvent ( pFnZombieTypeMap, &ZombieTypeMap_Parms, NULL );

	return ZombieTypeMap_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerController.CheckZombieTypeCharge
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ZombieType                     ( CPF_Parm )
// class ATGBioPlayerReplicationInfo* PRI                            ( CPF_Parm )

bool ATGBioPlayerController::CheckZombieTypeCharge ( unsigned char ZombieType, class ATGBioPlayerReplicationInfo* PRI )
{
	static UFunction* pFnCheckZombieTypeCharge = NULL;

	if ( ! pFnCheckZombieTypeCharge )
		pFnCheckZombieTypeCharge = (UFunction*) UObject::GObjObjects()->Data[ 222400 ];

	ATGBioPlayerController_execCheckZombieTypeCharge_Parms CheckZombieTypeCharge_Parms;
	CheckZombieTypeCharge_Parms.ZombieType = ZombieType;
	CheckZombieTypeCharge_Parms.PRI = PRI;

	this->ProcessEvent ( pFnCheckZombieTypeCharge, &CheckZombieTypeCharge_Parms, NULL );

	return CheckZombieTypeCharge_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerController.CheckZombieTypeWithoutBoss
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ZombieType                     ( CPF_Parm )
// unsigned long                  bWithoutBoss                   ( CPF_Parm )

bool ATGBioPlayerController::CheckZombieTypeWithoutBoss ( unsigned char ZombieType, unsigned long bWithoutBoss )
{
	static UFunction* pFnCheckZombieTypeWithoutBoss = NULL;

	if ( ! pFnCheckZombieTypeWithoutBoss )
		pFnCheckZombieTypeWithoutBoss = (UFunction*) UObject::GObjObjects()->Data[ 222396 ];

	ATGBioPlayerController_execCheckZombieTypeWithoutBoss_Parms CheckZombieTypeWithoutBoss_Parms;
	CheckZombieTypeWithoutBoss_Parms.ZombieType = ZombieType;
	CheckZombieTypeWithoutBoss_Parms.bWithoutBoss = bWithoutBoss;

	this->ProcessEvent ( pFnCheckZombieTypeWithoutBoss, &CheckZombieTypeWithoutBoss_Parms, NULL );

	return CheckZombieTypeWithoutBoss_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerController.SelectHostZombieType
// [0x00820002] 
// Parameters infos:
// unsigned char                  Type                           ( CPF_Parm )

void ATGBioPlayerController::SelectHostZombieType ( unsigned char Type )
{
	static UFunction* pFnSelectHostZombieType = NULL;

	if ( ! pFnSelectHostZombieType )
		pFnSelectHostZombieType = (UFunction*) UObject::GObjObjects()->Data[ 222391 ];

	ATGBioPlayerController_execSelectHostZombieType_Parms SelectHostZombieType_Parms;
	SelectHostZombieType_Parms.Type = Type;

	this->ProcessEvent ( pFnSelectHostZombieType, &SelectHostZombieType_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.ToggleSelectHostZombieTypeLazy
// [0x00024002] 
// Parameters infos:
// unsigned long                  bForceClose                    ( CPF_OptionalParm | CPF_Parm )

void ATGBioPlayerController::ToggleSelectHostZombieTypeLazy ( unsigned long bForceClose )
{
	static UFunction* pFnToggleSelectHostZombieTypeLazy = NULL;

	if ( ! pFnToggleSelectHostZombieTypeLazy )
		pFnToggleSelectHostZombieTypeLazy = (UFunction*) UObject::GObjObjects()->Data[ 222384 ];

	ATGBioPlayerController_execToggleSelectHostZombieTypeLazy_Parms ToggleSelectHostZombieTypeLazy_Parms;
	ToggleSelectHostZombieTypeLazy_Parms.bForceClose = bForceClose;

	this->ProcessEvent ( pFnToggleSelectHostZombieTypeLazy, &ToggleSelectHostZombieTypeLazy_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.ToggleSelectHostZombieTypeLazyServer
// [0x002240C2] 
// Parameters infos:
// unsigned long                  bForceClose                    ( CPF_OptionalParm | CPF_Parm )

void ATGBioPlayerController::ToggleSelectHostZombieTypeLazyServer ( unsigned long bForceClose )
{
	static UFunction* pFnToggleSelectHostZombieTypeLazyServer = NULL;

	if ( ! pFnToggleSelectHostZombieTypeLazyServer )
		pFnToggleSelectHostZombieTypeLazyServer = (UFunction*) UObject::GObjObjects()->Data[ 222382 ];

	ATGBioPlayerController_execToggleSelectHostZombieTypeLazyServer_Parms ToggleSelectHostZombieTypeLazyServer_Parms;
	ToggleSelectHostZombieTypeLazyServer_Parms.bForceClose = bForceClose;

	this->ProcessEvent ( pFnToggleSelectHostZombieTypeLazyServer, &ToggleSelectHostZombieTypeLazyServer_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.CloseSelectHostZombieType
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerController::CloseSelectHostZombieType ( )
{
	static UFunction* pFnCloseSelectHostZombieType = NULL;

	if ( ! pFnCloseSelectHostZombieType )
		pFnCloseSelectHostZombieType = (UFunction*) UObject::GObjObjects()->Data[ 222380 ];

	ATGBioPlayerController_execCloseSelectHostZombieType_Parms CloseSelectHostZombieType_Parms;

	this->ProcessEvent ( pFnCloseSelectHostZombieType, &CloseSelectHostZombieType_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.OpenSelectHostZombieType
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerController::OpenSelectHostZombieType ( )
{
	static UFunction* pFnOpenSelectHostZombieType = NULL;

	if ( ! pFnOpenSelectHostZombieType )
		pFnOpenSelectHostZombieType = (UFunction*) UObject::GObjObjects()->Data[ 222374 ];

	ATGBioPlayerController_execOpenSelectHostZombieType_Parms OpenSelectHostZombieType_Parms;

	this->ProcessEvent ( pFnOpenSelectHostZombieType, &OpenSelectHostZombieType_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.CreateSkillServer
// [0x002200C2] 
// Parameters infos:

void ATGBioPlayerController::CreateSkillServer ( )
{
	static UFunction* pFnCreateSkillServer = NULL;

	if ( ! pFnCreateSkillServer )
		pFnCreateSkillServer = (UFunction*) UObject::GObjObjects()->Data[ 222373 ];

	ATGBioPlayerController_execCreateSkillServer_Parms CreateSkillServer_Parms;

	this->ProcessEvent ( pFnCreateSkillServer, &CreateSkillServer_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.CreateSkill
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATGBioPlayerController::CreateSkill ( )
{
	static UFunction* pFnCreateSkill = NULL;

	if ( ! pFnCreateSkill )
		pFnCreateSkill = (UFunction*) UObject::GObjObjects()->Data[ 222372 ];

	ATGBioPlayerController_execCreateSkill_Parms CreateSkill_Parms;

	this->ProcessEvent ( pFnCreateSkill, &CreateSkill_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.ServerGetZPoint
// [0x002200C2] 
// Parameters infos:

void ATGBioPlayerController::ServerGetZPoint ( )
{
	static UFunction* pFnServerGetZPoint = NULL;

	if ( ! pFnServerGetZPoint )
		pFnServerGetZPoint = (UFunction*) UObject::GObjObjects()->Data[ 222371 ];

	ATGBioPlayerController_execServerGetZPoint_Parms ServerGetZPoint_Parms;

	this->ProcessEvent ( pFnServerGetZPoint, &ServerGetZPoint_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.UpdateGameSettingOption
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerController::UpdateGameSettingOption ( )
{
	static UFunction* pFnUpdateGameSettingOption = NULL;

	if ( ! pFnUpdateGameSettingOption )
		pFnUpdateGameSettingOption = (UFunction*) UObject::GObjObjects()->Data[ 222367 ];

	ATGBioPlayerController_execUpdateGameSettingOption_Parms UpdateGameSettingOption_Parms;

	this->ProcessEvent ( pFnUpdateGameSettingOption, &UpdateGameSettingOption_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.GetZPoint
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATGBioPlayerController::GetZPoint ( )
{
	static UFunction* pFnGetZPoint = NULL;

	if ( ! pFnGetZPoint )
		pFnGetZPoint = (UFunction*) UObject::GObjObjects()->Data[ 222366 ];

	ATGBioPlayerController_execGetZPoint_Parms GetZPoint_Parms;

	this->ProcessEvent ( pFnGetZPoint, &GetZPoint_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.PressFKey
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATGBioPlayerController::PressFKey ( )
{
	static UFunction* pFnPressFKey = NULL;

	if ( ! pFnPressFKey )
		pFnPressFKey = (UFunction*) UObject::GObjObjects()->Data[ 222365 ];

	ATGBioPlayerController_execPressFKey_Parms PressFKey_Parms;

	this->ProcessEvent ( pFnPressFKey, &PressFKey_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.NotifyClientPlayerResetSkill
// [0x010201C2] 
// Parameters infos:
// unsigned long                  ResetOnlyCoolTime              ( CPF_Parm )
// unsigned long                  ResetCoolTime                  ( CPF_Parm )
// unsigned long                  ClientClearManagerCoolDownOver ( CPF_Parm )

void ATGBioPlayerController::NotifyClientPlayerResetSkill ( unsigned long ResetOnlyCoolTime, unsigned long ResetCoolTime, unsigned long ClientClearManagerCoolDownOver )
{
	static UFunction* pFnNotifyClientPlayerResetSkill = NULL;

	if ( ! pFnNotifyClientPlayerResetSkill )
		pFnNotifyClientPlayerResetSkill = (UFunction*) UObject::GObjObjects()->Data[ 222361 ];

	ATGBioPlayerController_execNotifyClientPlayerResetSkill_Parms NotifyClientPlayerResetSkill_Parms;
	NotifyClientPlayerResetSkill_Parms.ResetOnlyCoolTime = ResetOnlyCoolTime;
	NotifyClientPlayerResetSkill_Parms.ResetCoolTime = ResetCoolTime;
	NotifyClientPlayerResetSkill_Parms.ClientClearManagerCoolDownOver = ClientClearManagerCoolDownOver;

	this->ProcessEvent ( pFnNotifyClientPlayerResetSkill, &NotifyClientPlayerResetSkill_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.NotifyServerPlayerResetSkill
// [0x00020002] 
// Parameters infos:
// unsigned long                  ResetOnlyCoolTime              ( CPF_Parm )
// unsigned long                  ResetCoolTime                  ( CPF_Parm )

void ATGBioPlayerController::NotifyServerPlayerResetSkill ( unsigned long ResetOnlyCoolTime, unsigned long ResetCoolTime )
{
	static UFunction* pFnNotifyServerPlayerResetSkill = NULL;

	if ( ! pFnNotifyServerPlayerResetSkill )
		pFnNotifyServerPlayerResetSkill = (UFunction*) UObject::GObjObjects()->Data[ 222358 ];

	ATGBioPlayerController_execNotifyServerPlayerResetSkill_Parms NotifyServerPlayerResetSkill_Parms;
	NotifyServerPlayerResetSkill_Parms.ResetOnlyCoolTime = ResetOnlyCoolTime;
	NotifyServerPlayerResetSkill_Parms.ResetCoolTime = ResetCoolTime;

	this->ProcessEvent ( pFnNotifyServerPlayerResetSkill, &NotifyServerPlayerResetSkill_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.NotifyPlayerResetSkill
// [0x00020002] 
// Parameters infos:
// unsigned long                  ResetOnlyCoolTime              ( CPF_Parm )
// unsigned long                  ResetCoolTime                  ( CPF_Parm )
// unsigned long                  ClientClearManagerCoolDownOver ( CPF_Parm )

void ATGBioPlayerController::NotifyPlayerResetSkill ( unsigned long ResetOnlyCoolTime, unsigned long ResetCoolTime, unsigned long ClientClearManagerCoolDownOver )
{
	static UFunction* pFnNotifyPlayerResetSkill = NULL;

	if ( ! pFnNotifyPlayerResetSkill )
		pFnNotifyPlayerResetSkill = (UFunction*) UObject::GObjObjects()->Data[ 222354 ];

	ATGBioPlayerController_execNotifyPlayerResetSkill_Parms NotifyPlayerResetSkill_Parms;
	NotifyPlayerResetSkill_Parms.ResetOnlyCoolTime = ResetOnlyCoolTime;
	NotifyPlayerResetSkill_Parms.ResetCoolTime = ResetCoolTime;
	NotifyPlayerResetSkill_Parms.ClientClearManagerCoolDownOver = ClientClearManagerCoolDownOver;

	this->ProcessEvent ( pFnNotifyPlayerResetSkill, &NotifyPlayerResetSkill_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.PostLoadCharacter
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerController::PostLoadCharacter ( )
{
	static UFunction* pFnPostLoadCharacter = NULL;

	if ( ! pFnPostLoadCharacter )
		pFnPostLoadCharacter = (UFunction*) UObject::GObjObjects()->Data[ 222351 ];

	ATGBioPlayerController_execPostLoadCharacter_Parms PostLoadCharacter_Parms;

	this->ProcessEvent ( pFnPostLoadCharacter, &PostLoadCharacter_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.IgnoreLookInput
// [0x00020002] 
// Parameters infos:
// unsigned long                  bNewLookInput                  ( CPF_Parm )

void ATGBioPlayerController::IgnoreLookInput ( unsigned long bNewLookInput )
{
	static UFunction* pFnIgnoreLookInput = NULL;

	if ( ! pFnIgnoreLookInput )
		pFnIgnoreLookInput = (UFunction*) UObject::GObjObjects()->Data[ 222349 ];

	ATGBioPlayerController_execIgnoreLookInput_Parms IgnoreLookInput_Parms;
	IgnoreLookInput_Parms.bNewLookInput = bNewLookInput;

	this->ProcessEvent ( pFnIgnoreLookInput, &IgnoreLookInput_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.IsFiringDisabled
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioPlayerController::IsFiringDisabled ( )
{
	static UFunction* pFnIsFiringDisabled = NULL;

	if ( ! pFnIsFiringDisabled )
		pFnIsFiringDisabled = (UFunction*) UObject::GObjObjects()->Data[ 222347 ];

	ATGBioPlayerController_execIsFiringDisabled_Parms IsFiringDisabled_Parms;

	this->ProcessEvent ( pFnIsFiringDisabled, &IsFiringDisabled_Parms, NULL );

	return IsFiringDisabled_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerController.StopFire
// [0x00024202] ( FUNC_Exec )
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_OptionalParm | CPF_Parm )

void ATGBioPlayerController::StopFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStopFire = NULL;

	if ( ! pFnStopFire )
		pFnStopFire = (UFunction*) UObject::GObjObjects()->Data[ 222345 ];

	ATGBioPlayerController_execStopFire_Parms StopFire_Parms;
	StopFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStopFire, &StopFire_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.StartFire
// [0x00024202] ( FUNC_Exec )
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_OptionalParm | CPF_Parm )

void ATGBioPlayerController::StartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 222343 ];

	ATGBioPlayerController_execStartFire_Parms StartFire_Parms;
	StartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.PlayVoiceSound
// [0x00020102] 
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void ATGBioPlayerController::PlayVoiceSound ( int Index )
{
	static UFunction* pFnPlayVoiceSound = NULL;

	if ( ! pFnPlayVoiceSound )
		pFnPlayVoiceSound = (UFunction*) UObject::GObjObjects()->Data[ 222341 ];

	ATGBioPlayerController_execPlayVoiceSound_Parms PlayVoiceSound_Parms;
	PlayVoiceSound_Parms.Index = Index;

	this->ProcessEvent ( pFnPlayVoiceSound, &PlayVoiceSound_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGBioPlayerController::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 222338 ];

	ATGBioPlayerController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.CloseBioClientPostProcess
// [0x010201C2] 
// Parameters infos:

void ATGBioPlayerController::CloseBioClientPostProcess ( )
{
	static UFunction* pFnCloseBioClientPostProcess = NULL;

	if ( ! pFnCloseBioClientPostProcess )
		pFnCloseBioClientPostProcess = (UFunction*) UObject::GObjObjects()->Data[ 222336 ];

	ATGBioPlayerController_execCloseBioClientPostProcess_Parms CloseBioClientPostProcess_Parms;

	this->ProcessEvent ( pFnCloseBioClientPostProcess, &CloseBioClientPostProcess_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.UpdateBioClientPostProcess
// [0x010241C2] 
// Parameters infos:
// class UMaterial*               OtherMaterial                  ( CPF_Parm )
// unsigned long                  ForceClose                     ( CPF_OptionalParm | CPF_Parm )

void ATGBioPlayerController::UpdateBioClientPostProcess ( class UMaterial* OtherMaterial, unsigned long ForceClose )
{
	static UFunction* pFnUpdateBioClientPostProcess = NULL;

	if ( ! pFnUpdateBioClientPostProcess )
		pFnUpdateBioClientPostProcess = (UFunction*) UObject::GObjObjects()->Data[ 222332 ];

	ATGBioPlayerController_execUpdateBioClientPostProcess_Parms UpdateBioClientPostProcess_Parms;
	UpdateBioClientPostProcess_Parms.OtherMaterial = OtherMaterial;
	UpdateBioClientPostProcess_Parms.ForceClose = ForceClose;

	this->ProcessEvent ( pFnUpdateBioClientPostProcess, &UpdateBioClientPostProcess_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.ClientPlayTakeHit
// [0x01020142] 
// Parameters infos:
// struct FVector                 AttackerPos                    ( CPF_Parm )
// unsigned char                  Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void ATGBioPlayerController::ClientPlayTakeHit ( struct FVector AttackerPos, unsigned char Damage, class UClass* DamageType )
{
	static UFunction* pFnClientPlayTakeHit = NULL;

	if ( ! pFnClientPlayTakeHit )
		pFnClientPlayTakeHit = (UFunction*) UObject::GObjObjects()->Data[ 222328 ];

	ATGBioPlayerController_execClientPlayTakeHit_Parms ClientPlayTakeHit_Parms;
	memcpy ( &ClientPlayTakeHit_Parms.AttackerPos, &AttackerPos, 0xC );
	ClientPlayTakeHit_Parms.Damage = Damage;
	ClientPlayTakeHit_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnClientPlayTakeHit, &ClientPlayTakeHit_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.NotifyTakeHit
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 AttackerPos                    ( CPF_Parm )

void ATGBioPlayerController::NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector AttackerPos )
{
	static UFunction* pFnNotifyTakeHit = NULL;

	if ( ! pFnNotifyTakeHit )
		pFnNotifyTakeHit = (UFunction*) UObject::GObjObjects()->Data[ 222322 ];

	ATGBioPlayerController_execNotifyTakeHit_Parms NotifyTakeHit_Parms;
	NotifyTakeHit_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHit_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHit_Parms.Damage = Damage;
	NotifyTakeHit_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHit_Parms.AttackerPos, &AttackerPos, 0xC );

	this->ProcessEvent ( pFnNotifyTakeHit, &NotifyTakeHit_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.NotifyLoadingProcessComplete
// [0x00020102] 
// Parameters infos:

void ATGBioPlayerController::NotifyLoadingProcessComplete ( )
{
	static UFunction* pFnNotifyLoadingProcessComplete = NULL;

	if ( ! pFnNotifyLoadingProcessComplete )
		pFnNotifyLoadingProcessComplete = (UFunction*) UObject::GObjObjects()->Data[ 222286 ];

	ATGBioPlayerController_execNotifyLoadingProcessComplete_Parms NotifyLoadingProcessComplete_Parms;

	this->ProcessEvent ( pFnNotifyLoadingProcessComplete, &NotifyLoadingProcessComplete_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerController.ColorEffectSet
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  EffectSet                      ( CPF_Parm )

void ATGBioPlayerController::ColorEffectSet ( unsigned long EffectSet )
{
	static UFunction* pFnColorEffectSet = NULL;

	if ( ! pFnColorEffectSet )
		pFnColorEffectSet = (UFunction*) UObject::GObjObjects()->Data[ 222284 ];

	ATGBioPlayerController_execColorEffectSet_Parms ColorEffectSet_Parms;
	ColorEffectSet_Parms.EffectSet = EffectSet;

	pFnColorEffectSet->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnColorEffectSet, &ColorEffectSet_Parms, NULL );

	pFnColorEffectSet->FunctionFlags |= 0x400;
};

// Function TGBioGame.TGBioPlayerInput.TGBioInputMiddleButtonDown
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bButtonDown                    ( CPF_Parm )

void UTGBioPlayerInput::eventTGBioInputMiddleButtonDown ( unsigned long bButtonDown )
{
	static UFunction* pFnTGBioInputMiddleButtonDown = NULL;

	if ( ! pFnTGBioInputMiddleButtonDown )
		pFnTGBioInputMiddleButtonDown = (UFunction*) UObject::GObjObjects()->Data[ 222575 ];

	UTGBioPlayerInput_eventTGBioInputMiddleButtonDown_Parms TGBioInputMiddleButtonDown_Parms;
	TGBioInputMiddleButtonDown_Parms.bButtonDown = bButtonDown;

	this->ProcessEvent ( pFnTGBioInputMiddleButtonDown, &TGBioInputMiddleButtonDown_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerInput.TGBioInputRightButtonDown
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bButtonDown                    ( CPF_Parm )

void UTGBioPlayerInput::eventTGBioInputRightButtonDown ( unsigned long bButtonDown )
{
	static UFunction* pFnTGBioInputRightButtonDown = NULL;

	if ( ! pFnTGBioInputRightButtonDown )
		pFnTGBioInputRightButtonDown = (UFunction*) UObject::GObjObjects()->Data[ 222573 ];

	UTGBioPlayerInput_eventTGBioInputRightButtonDown_Parms TGBioInputRightButtonDown_Parms;
	TGBioInputRightButtonDown_Parms.bButtonDown = bButtonDown;

	this->ProcessEvent ( pFnTGBioInputRightButtonDown, &TGBioInputRightButtonDown_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerInput.TGBioInputLeftButtonDown
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bButtonDown                    ( CPF_Parm )

void UTGBioPlayerInput::eventTGBioInputLeftButtonDown ( unsigned long bButtonDown )
{
	static UFunction* pFnTGBioInputLeftButtonDown = NULL;

	if ( ! pFnTGBioInputLeftButtonDown )
		pFnTGBioInputLeftButtonDown = (UFunction*) UObject::GObjObjects()->Data[ 222571 ];

	UTGBioPlayerInput_eventTGBioInputLeftButtonDown_Parms TGBioInputLeftButtonDown_Parms;
	TGBioInputLeftButtonDown_Parms.bButtonDown = bButtonDown;

	this->ProcessEvent ( pFnTGBioInputLeftButtonDown, &TGBioInputLeftButtonDown_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.GetGameScoreForSort
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ATGBioPlayerReplicationInfo::GetGameScoreForSort ( )
{
	static UFunction* pFnGetGameScoreForSort = NULL;

	if ( ! pFnGetGameScoreForSort )
		pFnGetGameScoreForSort = (UFunction*) UObject::GObjObjects()->Data[ 220392 ];

	ATGBioPlayerReplicationInfo_execGetGameScoreForSort_Parms GetGameScoreForSort_Parms;

	this->ProcessEvent ( pFnGetGameScoreForSort, &GetGameScoreForSort_Parms, NULL );

	return GetGameScoreForSort_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddTimesHeadShot
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::AddTimesHeadShot ( )
{
	static UFunction* pFnAddTimesHeadShot = NULL;

	if ( ! pFnAddTimesHeadShot )
		pFnAddTimesHeadShot = (UFunction*) UObject::GObjObjects()->Data[ 222794 ];

	ATGBioPlayerReplicationInfo_execAddTimesHeadShot_Parms AddTimesHeadShot_Parms;

	this->ProcessEvent ( pFnAddTimesHeadShot, &AddTimesHeadShot_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddTimesKillZombieNoRebirth
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::AddTimesKillZombieNoRebirth ( )
{
	static UFunction* pFnAddTimesKillZombieNoRebirth = NULL;

	if ( ! pFnAddTimesKillZombieNoRebirth )
		pFnAddTimesKillZombieNoRebirth = (UFunction*) UObject::GObjObjects()->Data[ 222793 ];

	ATGBioPlayerReplicationInfo_execAddTimesKillZombieNoRebirth_Parms AddTimesKillZombieNoRebirth_Parms;

	this->ProcessEvent ( pFnAddTimesKillZombieNoRebirth, &AddTimesKillZombieNoRebirth_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddTimesZombieBeKilled
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::AddTimesZombieBeKilled ( )
{
	static UFunction* pFnAddTimesZombieBeKilled = NULL;

	if ( ! pFnAddTimesZombieBeKilled )
		pFnAddTimesZombieBeKilled = (UFunction*) UObject::GObjObjects()->Data[ 222792 ];

	ATGBioPlayerReplicationInfo_execAddTimesZombieBeKilled_Parms AddTimesZombieBeKilled_Parms;

	this->ProcessEvent ( pFnAddTimesZombieBeKilled, &AddTimesZombieBeKilled_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddTimesHeroKillZombie
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::AddTimesHeroKillZombie ( )
{
	static UFunction* pFnAddTimesHeroKillZombie = NULL;

	if ( ! pFnAddTimesHeroKillZombie )
		pFnAddTimesHeroKillZombie = (UFunction*) UObject::GObjObjects()->Data[ 222791 ];

	ATGBioPlayerReplicationInfo_execAddTimesHeroKillZombie_Parms AddTimesHeroKillZombie_Parms;

	this->ProcessEvent ( pFnAddTimesHeroKillZombie, &AddTimesHeroKillZombie_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddKilledCount
// [0x00020002] 
// Parameters infos:
// int                            iCount                         ( CPF_Parm )

void ATGBioPlayerReplicationInfo::AddKilledCount ( int iCount )
{
	static UFunction* pFnAddKilledCount = NULL;

	if ( ! pFnAddKilledCount )
		pFnAddKilledCount = (UFunction*) UObject::GObjObjects()->Data[ 222789 ];

	ATGBioPlayerReplicationInfo_execAddKilledCount_Parms AddKilledCount_Parms;
	AddKilledCount_Parms.iCount = iCount;

	this->ProcessEvent ( pFnAddKilledCount, &AddKilledCount_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.StatHumanHero
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::StatHumanHero ( )
{
	static UFunction* pFnStatHumanHero = NULL;

	if ( ! pFnStatHumanHero )
		pFnStatHumanHero = (UFunction*) UObject::GObjObjects()->Data[ 222786 ];

	ATGBioPlayerReplicationInfo_execStatHumanHero_Parms StatHumanHero_Parms;

	this->ProcessEvent ( pFnStatHumanHero, &StatHumanHero_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.StatZombieInfo
// [0x00024002] 
// Parameters infos:
// unsigned char                  Type                           ( CPF_Parm )
// int                            iLel                           ( CPF_Parm )
// unsigned char                  Result                         ( CPF_Parm )
// unsigned long                  bRebirth                       ( CPF_OptionalParm | CPF_Parm )

void ATGBioPlayerReplicationInfo::StatZombieInfo ( unsigned char Type, int iLel, unsigned char Result, unsigned long bRebirth )
{
	static UFunction* pFnStatZombieInfo = NULL;

	if ( ! pFnStatZombieInfo )
		pFnStatZombieInfo = (UFunction*) UObject::GObjObjects()->Data[ 222779 ];

	ATGBioPlayerReplicationInfo_execStatZombieInfo_Parms StatZombieInfo_Parms;
	StatZombieInfo_Parms.Type = Type;
	StatZombieInfo_Parms.iLel = iLel;
	StatZombieInfo_Parms.Result = Result;
	StatZombieInfo_Parms.bRebirth = bRebirth;

	this->ProcessEvent ( pFnStatZombieInfo, &StatZombieInfo_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddOneZombieInfo
// [0x00820002] 
// Parameters infos:
// unsigned char                  Type                           ( CPF_Parm )
// unsigned char                  Result                         ( CPF_Parm )
// unsigned long                  bRebirth                       ( CPF_Parm )

void ATGBioPlayerReplicationInfo::AddOneZombieInfo ( unsigned char Type, unsigned char Result, unsigned long bRebirth )
{
	static UFunction* pFnAddOneZombieInfo = NULL;

	if ( ! pFnAddOneZombieInfo )
		pFnAddOneZombieInfo = (UFunction*) UObject::GObjObjects()->Data[ 222772 ];

	ATGBioPlayerReplicationInfo_execAddOneZombieInfo_Parms AddOneZombieInfo_Parms;
	AddOneZombieInfo_Parms.Type = Type;
	AddOneZombieInfo_Parms.Result = Result;
	AddOneZombieInfo_Parms.bRebirth = bRebirth;

	this->ProcessEvent ( pFnAddOneZombieInfo, &AddOneZombieInfo_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddZombieInfectionHumanCount
// [0x00820002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::AddZombieInfectionHumanCount ( )
{
	static UFunction* pFnAddZombieInfectionHumanCount = NULL;

	if ( ! pFnAddZombieInfectionHumanCount )
		pFnAddZombieInfectionHumanCount = (UFunction*) UObject::GObjObjects()->Data[ 222769 ];

	ATGBioPlayerReplicationInfo_execAddZombieInfectionHumanCount_Parms AddZombieInfectionHumanCount_Parms;

	this->ProcessEvent ( pFnAddZombieInfectionHumanCount, &AddZombieInfectionHumanCount_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.IsHumanCamp
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioPlayerReplicationInfo::IsHumanCamp ( )
{
	static UFunction* pFnIsHumanCamp = NULL;

	if ( ! pFnIsHumanCamp )
		pFnIsHumanCamp = (UFunction*) UObject::GObjObjects()->Data[ 219768 ];

	ATGBioPlayerReplicationInfo_execIsHumanCamp_Parms IsHumanCamp_Parms;

	this->ProcessEvent ( pFnIsHumanCamp, &IsHumanCamp_Parms, NULL );

	return IsHumanCamp_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerReplicationInfo.IsZombieCamp
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioPlayerReplicationInfo::IsZombieCamp ( )
{
	static UFunction* pFnIsZombieCamp = NULL;

	if ( ! pFnIsZombieCamp )
		pFnIsZombieCamp = (UFunction*) UObject::GObjObjects()->Data[ 220004 ];

	ATGBioPlayerReplicationInfo_execIsZombieCamp_Parms IsZombieCamp_Parms;

	this->ProcessEvent ( pFnIsZombieCamp, &IsZombieCamp_Parms, NULL );

	return IsZombieCamp_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerReplicationInfo.RoundClear
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::RoundClear ( )
{
	static UFunction* pFnRoundClear = NULL;

	if ( ! pFnRoundClear )
		pFnRoundClear = (UFunction*) UObject::GObjObjects()->Data[ 222768 ];

	ATGBioPlayerReplicationInfo_execRoundClear_Parms RoundClear_Parms;

	this->ProcessEvent ( pFnRoundClear, &RoundClear_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddSuvCount
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::AddSuvCount ( )
{
	static UFunction* pFnAddSuvCount = NULL;

	if ( ! pFnAddSuvCount )
		pFnAddSuvCount = (UFunction*) UObject::GObjObjects()->Data[ 222767 ];

	ATGBioPlayerReplicationInfo_execAddSuvCount_Parms AddSuvCount_Parms;

	this->ProcessEvent ( pFnAddSuvCount, &AddSuvCount_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddKilledTerminatorZombie
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::AddKilledTerminatorZombie ( )
{
	static UFunction* pFnAddKilledTerminatorZombie = NULL;

	if ( ! pFnAddKilledTerminatorZombie )
		pFnAddKilledTerminatorZombie = (UFunction*) UObject::GObjObjects()->Data[ 222766 ];

	ATGBioPlayerReplicationInfo_execAddKilledTerminatorZombie_Parms AddKilledTerminatorZombie_Parms;

	this->ProcessEvent ( pFnAddKilledTerminatorZombie, &AddKilledTerminatorZombie_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddKilledZombie
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::AddKilledZombie ( )
{
	static UFunction* pFnAddKilledZombie = NULL;

	if ( ! pFnAddKilledZombie )
		pFnAddKilledZombie = (UFunction*) UObject::GObjObjects()->Data[ 222765 ];

	ATGBioPlayerReplicationInfo_execAddKilledZombie_Parms AddKilledZombie_Parms;

	this->ProcessEvent ( pFnAddKilledZombie, &AddKilledZombie_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddKilledPlayer
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::AddKilledPlayer ( )
{
	static UFunction* pFnAddKilledPlayer = NULL;

	if ( ! pFnAddKilledPlayer )
		pFnAddKilledPlayer = (UFunction*) UObject::GObjObjects()->Data[ 222764 ];

	ATGBioPlayerReplicationInfo_execAddKilledPlayer_Parms AddKilledPlayer_Parms;

	this->ProcessEvent ( pFnAddKilledPlayer, &AddKilledPlayer_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddKilledHumanHero
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::AddKilledHumanHero ( )
{
	static UFunction* pFnAddKilledHumanHero = NULL;

	if ( ! pFnAddKilledHumanHero )
		pFnAddKilledHumanHero = (UFunction*) UObject::GObjObjects()->Data[ 222763 ];

	ATGBioPlayerReplicationInfo_execAddKilledHumanHero_Parms AddKilledHumanHero_Parms;

	this->ProcessEvent ( pFnAddKilledHumanHero, &AddKilledHumanHero_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddTerminatorKilledPlayer
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::AddTerminatorKilledPlayer ( )
{
	static UFunction* pFnAddTerminatorKilledPlayer = NULL;

	if ( ! pFnAddTerminatorKilledPlayer )
		pFnAddTerminatorKilledPlayer = (UFunction*) UObject::GObjObjects()->Data[ 222762 ];

	ATGBioPlayerReplicationInfo_execAddTerminatorKilledPlayer_Parms AddTerminatorKilledPlayer_Parms;

	this->ProcessEvent ( pFnAddTerminatorKilledPlayer, &AddTerminatorKilledPlayer_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddTerminatorKilledHumanHero
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::AddTerminatorKilledHumanHero ( )
{
	static UFunction* pFnAddTerminatorKilledHumanHero = NULL;

	if ( ! pFnAddTerminatorKilledHumanHero )
		pFnAddTerminatorKilledHumanHero = (UFunction*) UObject::GObjObjects()->Data[ 222761 ];

	ATGBioPlayerReplicationInfo_execAddTerminatorKilledHumanHero_Parms AddTerminatorKilledHumanHero_Parms;

	this->ProcessEvent ( pFnAddTerminatorKilledHumanHero, &AddTerminatorKilledHumanHero_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddHumanHeroKilledTerminatorZombie
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::AddHumanHeroKilledTerminatorZombie ( )
{
	static UFunction* pFnAddHumanHeroKilledTerminatorZombie = NULL;

	if ( ! pFnAddHumanHeroKilledTerminatorZombie )
		pFnAddHumanHeroKilledTerminatorZombie = (UFunction*) UObject::GObjObjects()->Data[ 222760 ];

	ATGBioPlayerReplicationInfo_execAddHumanHeroKilledTerminatorZombie_Parms AddHumanHeroKilledTerminatorZombie_Parms;

	this->ProcessEvent ( pFnAddHumanHeroKilledTerminatorZombie, &AddHumanHeroKilledTerminatorZombie_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.ComputerKillCount
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::ComputerKillCount ( )
{
	static UFunction* pFnComputerKillCount = NULL;

	if ( ! pFnComputerKillCount )
		pFnComputerKillCount = (UFunction*) UObject::GObjObjects()->Data[ 222759 ];

	ATGBioPlayerReplicationInfo_execComputerKillCount_Parms ComputerKillCount_Parms;

	this->ProcessEvent ( pFnComputerKillCount, &ComputerKillCount_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddWeaponDamage
// [0x00020002] 
// Parameters infos:
// int                            iDamage                        ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void ATGBioPlayerReplicationInfo::AddWeaponDamage ( int iDamage, class UClass* DamageType )
{
	static UFunction* pFnAddWeaponDamage = NULL;

	if ( ! pFnAddWeaponDamage )
		pFnAddWeaponDamage = (UFunction*) UObject::GObjObjects()->Data[ 222756 ];

	ATGBioPlayerReplicationInfo_execAddWeaponDamage_Parms AddWeaponDamage_Parms;
	AddWeaponDamage_Parms.iDamage = iDamage;
	AddWeaponDamage_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnAddWeaponDamage, &AddWeaponDamage_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddCurrentTotalDamage
// [0x00020002] 
// Parameters infos:
// int                            iDamage                        ( CPF_Parm )
// int                            iOneKillDamage                 ( CPF_Parm )

void ATGBioPlayerReplicationInfo::AddCurrentTotalDamage ( int iDamage, int iOneKillDamage )
{
	static UFunction* pFnAddCurrentTotalDamage = NULL;

	if ( ! pFnAddCurrentTotalDamage )
		pFnAddCurrentTotalDamage = (UFunction*) UObject::GObjObjects()->Data[ 222752 ];

	ATGBioPlayerReplicationInfo_execAddCurrentTotalDamage_Parms AddCurrentTotalDamage_Parms;
	AddCurrentTotalDamage_Parms.iDamage = iDamage;
	AddCurrentTotalDamage_Parms.iOneKillDamage = iOneKillDamage;

	this->ProcessEvent ( pFnAddCurrentTotalDamage, &AddCurrentTotalDamage_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.ComputerGameScore
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::ComputerGameScore ( )
{
	static UFunction* pFnComputerGameScore = NULL;

	if ( ! pFnComputerGameScore )
		pFnComputerGameScore = (UFunction*) UObject::GObjObjects()->Data[ 222750 ];

	ATGBioPlayerReplicationInfo_execComputerGameScore_Parms ComputerGameScore_Parms;

	this->ProcessEvent ( pFnComputerGameScore, &ComputerGameScore_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.ComputerGameScoreRate
// [0x00020002] 
// Parameters infos:
// int                            PlayerCount                    ( CPF_Parm )

void ATGBioPlayerReplicationInfo::ComputerGameScoreRate ( int PlayerCount )
{
	static UFunction* pFnComputerGameScoreRate = NULL;

	if ( ! pFnComputerGameScoreRate )
		pFnComputerGameScoreRate = (UFunction*) UObject::GObjObjects()->Data[ 222748 ];

	ATGBioPlayerReplicationInfo_execComputerGameScoreRate_Parms ComputerGameScoreRate_Parms;
	ComputerGameScoreRate_Parms.PlayerCount = PlayerCount;

	this->ProcessEvent ( pFnComputerGameScoreRate, &ComputerGameScoreRate_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.ComputerGP
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::ComputerGP ( )
{
	static UFunction* pFnComputerGP = NULL;

	if ( ! pFnComputerGP )
		pFnComputerGP = (UFunction*) UObject::GObjObjects()->Data[ 222747 ];

	ATGBioPlayerReplicationInfo_execComputerGP_Parms ComputerGP_Parms;

	this->ProcessEvent ( pFnComputerGP, &ComputerGP_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.SetBeginTime
// [0x00020002] 
// Parameters infos:
// float                          fTime                          ( CPF_Parm )

void ATGBioPlayerReplicationInfo::SetBeginTime ( float fTime )
{
	static UFunction* pFnSetBeginTime = NULL;

	if ( ! pFnSetBeginTime )
		pFnSetBeginTime = (UFunction*) UObject::GObjObjects()->Data[ 222745 ];

	ATGBioPlayerReplicationInfo_execSetBeginTime_Parms SetBeginTime_Parms;
	SetBeginTime_Parms.fTime = fTime;

	this->ProcessEvent ( pFnSetBeginTime, &SetBeginTime_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.CalcGameTime
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::CalcGameTime ( )
{
	static UFunction* pFnCalcGameTime = NULL;

	if ( ! pFnCalcGameTime )
		pFnCalcGameTime = (UFunction*) UObject::GObjObjects()->Data[ 222744 ];

	ATGBioPlayerReplicationInfo_execCalcGameTime_Parms CalcGameTime_Parms;

	this->ProcessEvent ( pFnCalcGameTime, &CalcGameTime_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.GetBioLocal
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioPlayerReplicationInfo::GetBioLocal ( )
{
	static UFunction* pFnGetBioLocal = NULL;

	if ( ! pFnGetBioLocal )
		pFnGetBioLocal = (UFunction*) UObject::GObjObjects()->Data[ 222742 ];

	ATGBioPlayerReplicationInfo_execGetBioLocal_Parms GetBioLocal_Parms;

	this->ProcessEvent ( pFnGetBioLocal, &GetBioLocal_Parms, NULL );

	return GetBioLocal_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerReplicationInfo.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGBioPlayerReplicationInfo::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 222737 ];

	ATGBioPlayerReplicationInfo_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddTimesHumanWin
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::AddTimesHumanWin ( )
{
	static UFunction* pFnAddTimesHumanWin = NULL;

	if ( ! pFnAddTimesHumanWin )
		pFnAddTimesHumanWin = (UFunction*) UObject::GObjObjects()->Data[ 222736 ];

	ATGBioPlayerReplicationInfo_execAddTimesHumanWin_Parms AddTimesHumanWin_Parms;

	this->ProcessEvent ( pFnAddTimesHumanWin, &AddTimesHumanWin_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddTimesZombieWin
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerReplicationInfo::AddTimesZombieWin ( )
{
	static UFunction* pFnAddTimesZombieWin = NULL;

	if ( ! pFnAddTimesZombieWin )
		pFnAddTimesZombieWin = (UFunction*) UObject::GObjObjects()->Data[ 222735 ];

	ATGBioPlayerReplicationInfo_execAddTimesZombieWin_Parms AddTimesZombieWin_Parms;

	this->ProcessEvent ( pFnAddTimesZombieWin, &AddTimesZombieWin_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerReplicationInfo.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGBioPlayerReplicationInfo::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 222734 ];

	ATGBioPlayerReplicationInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioAnimNodeSeqWeap.WeapTypeChanged
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   NewAimProfileName              ( CPF_Parm )

void UTGBioAnimNodeSeqWeap::eventWeapTypeChanged ( struct FName NewAimProfileName )
{
	static UFunction* pFnWeapTypeChanged = NULL;

	if ( ! pFnWeapTypeChanged )
		pFnWeapTypeChanged = (UFunction*) UObject::GObjObjects()->Data[ 220172 ];

	UTGBioAnimNodeSeqWeap_eventWeapTypeChanged_Parms WeapTypeChanged_Parms;
	memcpy ( &WeapTypeChanged_Parms.NewAimProfileName, &NewAimProfileName, 0x8 );

	this->ProcessEvent ( pFnWeapTypeChanged, &WeapTypeChanged_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.PlayDying
// [0x00024102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLoc                         ( CPF_Parm )
// unsigned char                  DeathDir                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_OptionalParm | CPF_Parm )

void ATGBioHumanHeroPawn::PlayDying ( class UClass* DamageType, struct FVector HitLoc, unsigned char DeathDir, unsigned char HitGroup )
{
	static UFunction* pFnPlayDying = NULL;

	if ( ! pFnPlayDying )
		pFnPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 221228 ];

	ATGBioHumanHeroPawn_execPlayDying_Parms PlayDying_Parms;
	PlayDying_Parms.DamageType = DamageType;
	memcpy ( &PlayDying_Parms.HitLoc, &HitLoc, 0xC );
	PlayDying_Parms.DeathDir = DeathDir;
	PlayDying_Parms.HitGroup = HitGroup;

	this->ProcessEvent ( pFnPlayDying, &PlayDying_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.RsetTrampleSkillSpeedScale
// [0x00020002] 
// Parameters infos:

void ATGBioHumanHeroPawn::RsetTrampleSkillSpeedScale ( )
{
	static UFunction* pFnRsetTrampleSkillSpeedScale = NULL;

	if ( ! pFnRsetTrampleSkillSpeedScale )
		pFnRsetTrampleSkillSpeedScale = (UFunction*) UObject::GObjObjects()->Data[ 221227 ];

	ATGBioHumanHeroPawn_execRsetTrampleSkillSpeedScale_Parms RsetTrampleSkillSpeedScale_Parms;

	this->ProcessEvent ( pFnRsetTrampleSkillSpeedScale, &RsetTrampleSkillSpeedScale_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.SetTrampleSkillSpeedScale
// [0x00020002] 
// Parameters infos:

void ATGBioHumanHeroPawn::SetTrampleSkillSpeedScale ( )
{
	static UFunction* pFnSetTrampleSkillSpeedScale = NULL;

	if ( ! pFnSetTrampleSkillSpeedScale )
		pFnSetTrampleSkillSpeedScale = (UFunction*) UObject::GObjObjects()->Data[ 221226 ];

	ATGBioHumanHeroPawn_execSetTrampleSkillSpeedScale_Parms SetTrampleSkillSpeedScale_Parms;

	this->ProcessEvent ( pFnSetTrampleSkillSpeedScale, &SetTrampleSkillSpeedScale_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.ProcessCrouchedClientOther
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATGBioHumanHeroPawn::ProcessCrouchedClientOther ( )
{
	static UFunction* pFnProcessCrouchedClientOther = NULL;

	if ( ! pFnProcessCrouchedClientOther )
		pFnProcessCrouchedClientOther = (UFunction*) UObject::GObjObjects()->Data[ 221225 ];

	ATGBioHumanHeroPawn_execProcessCrouchedClientOther_Parms ProcessCrouchedClientOther_Parms;

	pFnProcessCrouchedClientOther->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProcessCrouchedClientOther, &ProcessCrouchedClientOther_Parms, NULL );

	pFnProcessCrouchedClientOther->FunctionFlags |= 0x400;
};

// Function TGBioGame.TGBioHumanHeroPawn.ProcessCrouched
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATGBioHumanHeroPawn::ProcessCrouched ( )
{
	static UFunction* pFnProcessCrouched = NULL;

	if ( ! pFnProcessCrouched )
		pFnProcessCrouched = (UFunction*) UObject::GObjObjects()->Data[ 221224 ];

	ATGBioHumanHeroPawn_execProcessCrouched_Parms ProcessCrouched_Parms;

	pFnProcessCrouched->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProcessCrouched, &ProcessCrouched_Parms, NULL );

	pFnProcessCrouched->FunctionFlags |= 0x400;
};

// Function TGBioGame.TGBioHumanHeroPawn.GetKillZombieSound
// [0x00020002] 
// Parameters infos:
// class USoundCue*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class USoundCue* ATGBioHumanHeroPawn::GetKillZombieSound ( )
{
	static UFunction* pFnGetKillZombieSound = NULL;

	if ( ! pFnGetKillZombieSound )
		pFnGetKillZombieSound = (UFunction*) UObject::GObjObjects()->Data[ 221221 ];

	ATGBioHumanHeroPawn_execGetKillZombieSound_Parms GetKillZombieSound_Parms;

	this->ProcessEvent ( pFnGetKillZombieSound, &GetKillZombieSound_Parms, NULL );

	return GetKillZombieSound_Parms.ReturnValue;
};

// Function TGBioGame.TGBioHumanHeroPawn.NotifyArmMeshChanged
// [0x00020100] 
// Parameters infos:
// class ATGPlayerReplicationInfo* UTPRI                          ( CPF_Parm )

void ATGBioHumanHeroPawn::NotifyArmMeshChanged ( class ATGPlayerReplicationInfo* UTPRI )
{
	static UFunction* pFnNotifyArmMeshChanged = NULL;

	if ( ! pFnNotifyArmMeshChanged )
		pFnNotifyArmMeshChanged = (UFunction*) UObject::GObjObjects()->Data[ 221219 ];

	ATGBioHumanHeroPawn_execNotifyArmMeshChanged_Parms NotifyArmMeshChanged_Parms;
	NotifyArmMeshChanged_Parms.UTPRI = UTPRI;

	this->ProcessEvent ( pFnNotifyArmMeshChanged, &NotifyArmMeshChanged_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.LeaveABloodSplatterDecal
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLoc                         ( CPF_Parm )
// struct FVector                 HitNorm                        ( CPF_Parm )

void ATGBioHumanHeroPawn::LeaveABloodSplatterDecal ( struct FVector HitLoc, struct FVector HitNorm )
{
	static UFunction* pFnLeaveABloodSplatterDecal = NULL;

	if ( ! pFnLeaveABloodSplatterDecal )
		pFnLeaveABloodSplatterDecal = (UFunction*) UObject::GObjObjects()->Data[ 221207 ];

	ATGBioHumanHeroPawn_execLeaveABloodSplatterDecal_Parms LeaveABloodSplatterDecal_Parms;
	memcpy ( &LeaveABloodSplatterDecal_Parms.HitLoc, &HitLoc, 0xC );
	memcpy ( &LeaveABloodSplatterDecal_Parms.HitNorm, &HitNorm, 0xC );

	this->ProcessEvent ( pFnLeaveABloodSplatterDecal, &LeaveABloodSplatterDecal_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.UpdateGameSettingOption
// [0x00020102] 
// Parameters infos:
// unsigned long                  IsUpdateLight                  ( CPF_Parm )

void ATGBioHumanHeroPawn::UpdateGameSettingOption ( unsigned long IsUpdateLight )
{
	static UFunction* pFnUpdateGameSettingOption = NULL;

	if ( ! pFnUpdateGameSettingOption )
		pFnUpdateGameSettingOption = (UFunction*) UObject::GObjObjects()->Data[ 221205 ];

	ATGBioHumanHeroPawn_execUpdateGameSettingOption_Parms UpdateGameSettingOption_Parms;
	UpdateGameSettingOption_Parms.IsUpdateLight = IsUpdateLight;

	this->ProcessEvent ( pFnUpdateGameSettingOption, &UpdateGameSettingOption_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.NotifyTeamChanged
// [0x00020102] 
// Parameters infos:

void ATGBioHumanHeroPawn::NotifyTeamChanged ( )
{
	static UFunction* pFnNotifyTeamChanged = NULL;

	if ( ! pFnNotifyTeamChanged )
		pFnNotifyTeamChanged = (UFunction*) UObject::GObjObjects()->Data[ 221202 ];

	ATGBioHumanHeroPawn_execNotifyTeamChanged_Parms NotifyTeamChanged_Parms;

	this->ProcessEvent ( pFnNotifyTeamChanged, &NotifyTeamChanged_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.timeSetRefireCheckTimer
// [0x00020102] 
// Parameters infos:

void ATGBioHumanHeroPawn::timeSetRefireCheckTimer ( )
{
	static UFunction* pFntimeSetRefireCheckTimer = NULL;

	if ( ! pFntimeSetRefireCheckTimer )
		pFntimeSetRefireCheckTimer = (UFunction*) UObject::GObjObjects()->Data[ 221200 ];

	ATGBioHumanHeroPawn_exectimeSetRefireCheckTimer_Parms timeSetRefireCheckTimer_Parms;

	this->ProcessEvent ( pFntimeSetRefireCheckTimer, &timeSetRefireCheckTimer_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.UpdateFadeOut
// [0x00020002] 
// Parameters infos:

void ATGBioHumanHeroPawn::UpdateFadeOut ( )
{
	static UFunction* pFnUpdateFadeOut = NULL;

	if ( ! pFnUpdateFadeOut )
		pFnUpdateFadeOut = (UFunction*) UObject::GObjObjects()->Data[ 221199 ];

	ATGBioHumanHeroPawn_execUpdateFadeOut_Parms UpdateFadeOut_Parms;

	this->ProcessEvent ( pFnUpdateFadeOut, &UpdateFadeOut_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.PlayHeroDeadEffect
// [0x00020102] 
// Parameters infos:

void ATGBioHumanHeroPawn::PlayHeroDeadEffect ( )
{
	static UFunction* pFnPlayHeroDeadEffect = NULL;

	if ( ! pFnPlayHeroDeadEffect )
		pFnPlayHeroDeadEffect = (UFunction*) UObject::GObjObjects()->Data[ 221198 ];

	ATGBioHumanHeroPawn_execPlayHeroDeadEffect_Parms PlayHeroDeadEffect_Parms;

	this->ProcessEvent ( pFnPlayHeroDeadEffect, &PlayHeroDeadEffect_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.PlayHeroCircleEffect
// [0x00020102] 
// Parameters infos:

void ATGBioHumanHeroPawn::PlayHeroCircleEffect ( )
{
	static UFunction* pFnPlayHeroCircleEffect = NULL;

	if ( ! pFnPlayHeroCircleEffect )
		pFnPlayHeroCircleEffect = (UFunction*) UObject::GObjObjects()->Data[ 221197 ];

	ATGBioHumanHeroPawn_execPlayHeroCircleEffect_Parms PlayHeroCircleEffect_Parms;

	this->ProcessEvent ( pFnPlayHeroCircleEffect, &PlayHeroCircleEffect_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.PlayHeroWeaponEffect2
// [0x00020102] 
// Parameters infos:

void ATGBioHumanHeroPawn::PlayHeroWeaponEffect2 ( )
{
	static UFunction* pFnPlayHeroWeaponEffect2 = NULL;

	if ( ! pFnPlayHeroWeaponEffect2 )
		pFnPlayHeroWeaponEffect2 = (UFunction*) UObject::GObjObjects()->Data[ 221196 ];

	ATGBioHumanHeroPawn_execPlayHeroWeaponEffect2_Parms PlayHeroWeaponEffect2_Parms;

	this->ProcessEvent ( pFnPlayHeroWeaponEffect2, &PlayHeroWeaponEffect2_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.PlayHeroWeaponEffect
// [0x00020102] 
// Parameters infos:

void ATGBioHumanHeroPawn::PlayHeroWeaponEffect ( )
{
	static UFunction* pFnPlayHeroWeaponEffect = NULL;

	if ( ! pFnPlayHeroWeaponEffect )
		pFnPlayHeroWeaponEffect = (UFunction*) UObject::GObjObjects()->Data[ 221195 ];

	ATGBioHumanHeroPawn_execPlayHeroWeaponEffect_Parms PlayHeroWeaponEffect_Parms;

	this->ProcessEvent ( pFnPlayHeroWeaponEffect, &PlayHeroWeaponEffect_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.PlayHeroSpawnEffect
// [0x00020102] 
// Parameters infos:

void ATGBioHumanHeroPawn::PlayHeroSpawnEffect ( )
{
	static UFunction* pFnPlayHeroSpawnEffect = NULL;

	if ( ! pFnPlayHeroSpawnEffect )
		pFnPlayHeroSpawnEffect = (UFunction*) UObject::GObjObjects()->Data[ 221194 ];

	ATGBioHumanHeroPawn_execPlayHeroSpawnEffect_Parms PlayHeroSpawnEffect_Parms;

	this->ProcessEvent ( pFnPlayHeroSpawnEffect, &PlayHeroSpawnEffect_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.PlayThirdPersonSwingMeleeWeaponAnimBeforeDamage
// [0x00020102] 
// Parameters infos:
// unsigned long                  bViaReplication                ( CPF_Parm )

void ATGBioHumanHeroPawn::PlayThirdPersonSwingMeleeWeaponAnimBeforeDamage ( unsigned long bViaReplication )
{
	static UFunction* pFnPlayThirdPersonSwingMeleeWeaponAnimBeforeDamage = NULL;

	if ( ! pFnPlayThirdPersonSwingMeleeWeaponAnimBeforeDamage )
		pFnPlayThirdPersonSwingMeleeWeaponAnimBeforeDamage = (UFunction*) UObject::GObjObjects()->Data[ 221192 ];

	ATGBioHumanHeroPawn_execPlayThirdPersonSwingMeleeWeaponAnimBeforeDamage_Parms PlayThirdPersonSwingMeleeWeaponAnimBeforeDamage_Parms;
	PlayThirdPersonSwingMeleeWeaponAnimBeforeDamage_Parms.bViaReplication = bViaReplication;

	this->ProcessEvent ( pFnPlayThirdPersonSwingMeleeWeaponAnimBeforeDamage, &PlayThirdPersonSwingMeleeWeaponAnimBeforeDamage_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.PlayThirdPersonStabMeleeWeaponAnimBeforeDamage
// [0x00020102] 
// Parameters infos:
// unsigned long                  bViaReplication                ( CPF_Parm )
// unsigned char                  LocalMeleeWeaponStabCount      ( CPF_Parm )

void ATGBioHumanHeroPawn::PlayThirdPersonStabMeleeWeaponAnimBeforeDamage ( unsigned long bViaReplication, unsigned char LocalMeleeWeaponStabCount )
{
	static UFunction* pFnPlayThirdPersonStabMeleeWeaponAnimBeforeDamage = NULL;

	if ( ! pFnPlayThirdPersonStabMeleeWeaponAnimBeforeDamage )
		pFnPlayThirdPersonStabMeleeWeaponAnimBeforeDamage = (UFunction*) UObject::GObjObjects()->Data[ 221188 ];

	ATGBioHumanHeroPawn_execPlayThirdPersonStabMeleeWeaponAnimBeforeDamage_Parms PlayThirdPersonStabMeleeWeaponAnimBeforeDamage_Parms;
	PlayThirdPersonStabMeleeWeaponAnimBeforeDamage_Parms.bViaReplication = bViaReplication;
	PlayThirdPersonStabMeleeWeaponAnimBeforeDamage_Parms.LocalMeleeWeaponStabCount = LocalMeleeWeaponStabCount;

	this->ProcessEvent ( pFnPlayThirdPersonStabMeleeWeaponAnimBeforeDamage, &PlayThirdPersonStabMeleeWeaponAnimBeforeDamage_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.PlayTakeHitEffects
// [0x00820102] 
// Parameters infos:

void ATGBioHumanHeroPawn::PlayTakeHitEffects ( )
{
	static UFunction* pFnPlayTakeHitEffects = NULL;

	if ( ! pFnPlayTakeHitEffects )
		pFnPlayTakeHitEffects = (UFunction*) UObject::GObjObjects()->Data[ 221183 ];

	ATGBioHumanHeroPawn_execPlayTakeHitEffects_Parms PlayTakeHitEffects_Parms;

	this->ProcessEvent ( pFnPlayTakeHitEffects, &PlayTakeHitEffects_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.PlayDiedAnim
// [0x00024102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// unsigned char                  DeathDir                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  HitGrou                        ( CPF_OptionalParm | CPF_Parm )

void ATGBioHumanHeroPawn::PlayDiedAnim ( class UClass* DamageType, unsigned char DeathDir, unsigned char HitGrou )
{
	static UFunction* pFnPlayDiedAnim = NULL;

	if ( ! pFnPlayDiedAnim )
		pFnPlayDiedAnim = (UFunction*) UObject::GObjObjects()->Data[ 221178 ];

	ATGBioHumanHeroPawn_execPlayDiedAnim_Parms PlayDiedAnim_Parms;
	PlayDiedAnim_Parms.DamageType = DamageType;
	PlayDiedAnim_Parms.DeathDir = DeathDir;
	PlayDiedAnim_Parms.HitGrou = HitGrou;

	this->ProcessEvent ( pFnPlayDiedAnim, &PlayDiedAnim_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.PlaySpecialDiedAnim
// [0x00020102] 
// Parameters infos:

void ATGBioHumanHeroPawn::PlaySpecialDiedAnim ( )
{
	static UFunction* pFnPlaySpecialDiedAnim = NULL;

	if ( ! pFnPlaySpecialDiedAnim )
		pFnPlaySpecialDiedAnim = (UFunction*) UObject::GObjObjects()->Data[ 221177 ];

	ATGBioHumanHeroPawn_execPlaySpecialDiedAnim_Parms PlaySpecialDiedAnim_Parms;

	this->ProcessEvent ( pFnPlaySpecialDiedAnim, &PlaySpecialDiedAnim_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.SetWeapAnimType
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// unsigned char                  AnimType                       ( CPF_Parm )

void ATGBioHumanHeroPawn::eventSetWeapAnimType ( unsigned char AnimType )
{
	static UFunction* pFnSetWeapAnimType = NULL;

	if ( ! pFnSetWeapAnimType )
		pFnSetWeapAnimType = (UFunction*) UObject::GObjObjects()->Data[ 221175 ];

	ATGBioHumanHeroPawn_eventSetWeapAnimType_Parms SetWeapAnimType_Parms;
	SetWeapAnimType_Parms.AnimType = AnimType;

	this->ProcessEvent ( pFnSetWeapAnimType, &SetWeapAnimType_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.TakeDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ATGBioHumanHeroPawn::eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 221166 ];

	ATGBioHumanHeroPawn_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.Damage = Damage;
	TakeDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x20 );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.ServerTakeDamage
// [0x00024002] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ATGBioHumanHeroPawn::ServerTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnServerTakeDamage = NULL;

	if ( ! pFnServerTakeDamage )
		pFnServerTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 221158 ];

	ATGBioHumanHeroPawn_execServerTakeDamage_Parms ServerTakeDamage_Parms;
	ServerTakeDamage_Parms.Damage = Damage;
	ServerTakeDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &ServerTakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ServerTakeDamage_Parms.Momentum, &Momentum, 0xC );
	ServerTakeDamage_Parms.DamageType = DamageType;
	memcpy ( &ServerTakeDamage_Parms.HitInfo, &HitInfo, 0x20 );
	ServerTakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnServerTakeDamage, &ServerTakeDamage_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.Died
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// unsigned char                  DeathDir                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_OptionalParm | CPF_Parm )

bool ATGBioHumanHeroPawn::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation, unsigned char DeathDir, unsigned char HitGroup )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 221148 ];

	ATGBioHumanHeroPawn_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );
	Died_Parms.DeathDir = DeathDir;
	Died_Parms.HitGroup = HitGroup;

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function TGBioGame.TGBioHumanHeroPawn.PossessedBy
// [0x00020002] 
// Parameters infos:
// class AController*             C                              ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void ATGBioHumanHeroPawn::PossessedBy ( class AController* C, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossessedBy = NULL;

	if ( ! pFnPossessedBy )
		pFnPossessedBy = (UFunction*) UObject::GObjObjects()->Data[ 221145 ];

	ATGBioHumanHeroPawn_execPossessedBy_Parms PossessedBy_Parms;
	PossessedBy_Parms.C = C;
	PossessedBy_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossessedBy, &PossessedBy_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.HumanHeroWeaponSet
// [0x010201C2] 
// Parameters infos:

void ATGBioHumanHeroPawn::HumanHeroWeaponSet ( )
{
	static UFunction* pFnHumanHeroWeaponSet = NULL;

	if ( ! pFnHumanHeroWeaponSet )
		pFnHumanHeroWeaponSet = (UFunction*) UObject::GObjObjects()->Data[ 221144 ];

	ATGBioHumanHeroPawn_execHumanHeroWeaponSet_Parms HumanHeroWeaponSet_Parms;

	this->ProcessEvent ( pFnHumanHeroWeaponSet, &HumanHeroWeaponSet_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.PendingBioWeaponSetTimer
// [0x00020102] 
// Parameters infos:

void ATGBioHumanHeroPawn::PendingBioWeaponSetTimer ( )
{
	static UFunction* pFnPendingBioWeaponSetTimer = NULL;

	if ( ! pFnPendingBioWeaponSetTimer )
		pFnPendingBioWeaponSetTimer = (UFunction*) UObject::GObjObjects()->Data[ 221143 ];

	ATGBioHumanHeroPawn_execPendingBioWeaponSetTimer_Parms PendingBioWeaponSetTimer_Parms;

	this->ProcessEvent ( pFnPendingBioWeaponSetTimer, &PendingBioWeaponSetTimer_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGBioHumanHeroPawn::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 221141 ];

	ATGBioHumanHeroPawn_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.CheckWeaponByControllerRep
// [0x00020102] 
// Parameters infos:

void ATGBioHumanHeroPawn::CheckWeaponByControllerRep ( )
{
	static UFunction* pFnCheckWeaponByControllerRep = NULL;

	if ( ! pFnCheckWeaponByControllerRep )
		pFnCheckWeaponByControllerRep = (UFunction*) UObject::GObjObjects()->Data[ 221140 ];

	ATGBioHumanHeroPawn_execCheckWeaponByControllerRep_Parms CheckWeaponByControllerRep_Parms;

	this->ProcessEvent ( pFnCheckWeaponByControllerRep, &CheckWeaponByControllerRep_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.ThrowWeaponOnDeath
// [0x00020000] 
// Parameters infos:

void ATGBioHumanHeroPawn::ThrowWeaponOnDeath ( )
{
	static UFunction* pFnThrowWeaponOnDeath = NULL;

	if ( ! pFnThrowWeaponOnDeath )
		pFnThrowWeaponOnDeath = (UFunction*) UObject::GObjObjects()->Data[ 221139 ];

	ATGBioHumanHeroPawn_execThrowWeaponOnDeath_Parms ThrowWeaponOnDeath_Parms;

	this->ProcessEvent ( pFnThrowWeaponOnDeath, &ThrowWeaponOnDeath_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.DoJump
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bUpdating                      ( CPF_Parm )

bool ATGBioHumanHeroPawn::DoJump ( unsigned long bUpdating )
{
	static UFunction* pFnDoJump = NULL;

	if ( ! pFnDoJump )
		pFnDoJump = (UFunction*) UObject::GObjObjects()->Data[ 221136 ];

	ATGBioHumanHeroPawn_execDoJump_Parms DoJump_Parms;
	DoJump_Parms.bUpdating = bUpdating;

	this->ProcessEvent ( pFnDoJump, &DoJump_Parms, NULL );

	return DoJump_Parms.ReturnValue;
};

// Function TGBioGame.TGBioHumanHeroPawn.AddOneKillFeedback
// [0x010201C2] 
// Parameters infos:
// int                            NumToAdd                       ( CPF_Parm )

void ATGBioHumanHeroPawn::AddOneKillFeedback ( int NumToAdd )
{
	static UFunction* pFnAddOneKillFeedback = NULL;

	if ( ! pFnAddOneKillFeedback )
		pFnAddOneKillFeedback = (UFunction*) UObject::GObjObjects()->Data[ 221133 ];

	ATGBioHumanHeroPawn_execAddOneKillFeedback_Parms AddOneKillFeedback_Parms;
	AddOneKillFeedback_Parms.NumToAdd = NumToAdd;

	this->ProcessEvent ( pFnAddOneKillFeedback, &AddOneKillFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroPawn.AddDamageValue
// [0x00020002] 
// Parameters infos:
// int                            iDamage                        ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void ATGBioHumanHeroPawn::AddDamageValue ( int iDamage, class UClass* DamageType )
{
	static UFunction* pFnAddDamageValue = NULL;

	if ( ! pFnAddDamageValue )
		pFnAddDamageValue = (UFunction*) UObject::GObjObjects()->Data[ 221128 ];

	ATGBioHumanHeroPawn_execAddDamageValue_Parms AddDamageValue_Parms;
	AddDamageValue_Parms.iDamage = iDamage;
	AddDamageValue_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnAddDamageValue, &AddDamageValue_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.RsetTrampleSkillSpeedScale
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerPawn::RsetTrampleSkillSpeedScale ( )
{
	static UFunction* pFnRsetTrampleSkillSpeedScale = NULL;

	if ( ! pFnRsetTrampleSkillSpeedScale )
		pFnRsetTrampleSkillSpeedScale = (UFunction*) UObject::GObjObjects()->Data[ 220097 ];

	ATGBioPlayerPawn_execRsetTrampleSkillSpeedScale_Parms RsetTrampleSkillSpeedScale_Parms;

	this->ProcessEvent ( pFnRsetTrampleSkillSpeedScale, &RsetTrampleSkillSpeedScale_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.SetTrampleSkillSpeedScale
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerPawn::SetTrampleSkillSpeedScale ( )
{
	static UFunction* pFnSetTrampleSkillSpeedScale = NULL;

	if ( ! pFnSetTrampleSkillSpeedScale )
		pFnSetTrampleSkillSpeedScale = (UFunction*) UObject::GObjObjects()->Data[ 220096 ];

	ATGBioPlayerPawn_execSetTrampleSkillSpeedScale_Parms SetTrampleSkillSpeedScale_Parms;

	this->ProcessEvent ( pFnSetTrampleSkillSpeedScale, &SetTrampleSkillSpeedScale_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.Changebag
// [0x002200C2] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  T                              ( CPF_Parm )

bool ATGBioPlayerPawn::Changebag ( unsigned char T )
{
	static UFunction* pFnChangebag = NULL;

	if ( ! pFnChangebag )
		pFnChangebag = (UFunction*) UObject::GObjObjects()->Data[ 220087 ];

	ATGBioPlayerPawn_execChangebag_Parms Changebag_Parms;
	Changebag_Parms.T = T;

	this->ProcessEvent ( pFnChangebag, &Changebag_Parms, NULL );

	return Changebag_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerPawn.TakeRadiusDamage
// [0x00024102] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// float                          BaseDamage                     ( CPF_Parm )
// float                          DamageRadius                   ( CPF_Parm )
// class UClass*                  DamageTypeClass                ( CPF_Parm )
// float                          Momentum                       ( CPF_Parm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// unsigned long                  bFullDamage                    ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )
// float                          DamageFalloffExponent          ( CPF_OptionalParm | CPF_Parm )

void ATGBioPlayerPawn::TakeRadiusDamage ( class AController* InstigatedBy, float BaseDamage, float DamageRadius, class UClass* DamageTypeClass, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser, float DamageFalloffExponent )
{
	static UFunction* pFnTakeRadiusDamage = NULL;

	if ( ! pFnTakeRadiusDamage )
		pFnTakeRadiusDamage = (UFunction*) UObject::GObjObjects()->Data[ 220071 ];

	ATGBioPlayerPawn_execTakeRadiusDamage_Parms TakeRadiusDamage_Parms;
	TakeRadiusDamage_Parms.InstigatedBy = InstigatedBy;
	TakeRadiusDamage_Parms.BaseDamage = BaseDamage;
	TakeRadiusDamage_Parms.DamageRadius = DamageRadius;
	TakeRadiusDamage_Parms.DamageTypeClass = DamageTypeClass;
	TakeRadiusDamage_Parms.Momentum = Momentum;
	memcpy ( &TakeRadiusDamage_Parms.HurtOrigin, &HurtOrigin, 0xC );
	TakeRadiusDamage_Parms.bFullDamage = bFullDamage;
	TakeRadiusDamage_Parms.DamageCauser = DamageCauser;
	TakeRadiusDamage_Parms.DamageFalloffExponent = DamageFalloffExponent;

	this->ProcessEvent ( pFnTakeRadiusDamage, &TakeRadiusDamage_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.GetSecondPersonSound
// [0x00020002] 
// Parameters infos:
// class USoundCue*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class USoundCue* ATGBioPlayerPawn::GetSecondPersonSound ( )
{
	static UFunction* pFnGetSecondPersonSound = NULL;

	if ( ! pFnGetSecondPersonSound )
		pFnGetSecondPersonSound = (UFunction*) UObject::GObjObjects()->Data[ 220069 ];

	ATGBioPlayerPawn_execGetSecondPersonSound_Parms GetSecondPersonSound_Parms;

	this->ProcessEvent ( pFnGetSecondPersonSound, &GetSecondPersonSound_Parms, NULL );

	return GetSecondPersonSound_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerPawn.GetFirstPersonSound
// [0x00020002] 
// Parameters infos:
// class USoundCue*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class USoundCue* ATGBioPlayerPawn::GetFirstPersonSound ( )
{
	static UFunction* pFnGetFirstPersonSound = NULL;

	if ( ! pFnGetFirstPersonSound )
		pFnGetFirstPersonSound = (UFunction*) UObject::GObjObjects()->Data[ 220066 ];

	ATGBioPlayerPawn_execGetFirstPersonSound_Parms GetFirstPersonSound_Parms;

	this->ProcessEvent ( pFnGetFirstPersonSound, &GetFirstPersonSound_Parms, NULL );

	return GetFirstPersonSound_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerPawn.GetKillZombieSound
// [0x00020002] 
// Parameters infos:
// class USoundCue*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class USoundCue* ATGBioPlayerPawn::GetKillZombieSound ( )
{
	static UFunction* pFnGetKillZombieSound = NULL;

	if ( ! pFnGetKillZombieSound )
		pFnGetKillZombieSound = (UFunction*) UObject::GObjObjects()->Data[ 220063 ];

	ATGBioPlayerPawn_execGetKillZombieSound_Parms GetKillZombieSound_Parms;

	this->ProcessEvent ( pFnGetKillZombieSound, &GetKillZombieSound_Parms, NULL );

	return GetKillZombieSound_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerPawn.WeaponAttachmentChanged
// [0x00020102] 
// Parameters infos:

void ATGBioPlayerPawn::WeaponAttachmentChanged ( )
{
	static UFunction* pFnWeaponAttachmentChanged = NULL;

	if ( ! pFnWeaponAttachmentChanged )
		pFnWeaponAttachmentChanged = (UFunction*) UObject::GObjObjects()->Data[ 220061 ];

	ATGBioPlayerPawn_execWeaponAttachmentChanged_Parms WeaponAttachmentChanged_Parms;

	this->ProcessEvent ( pFnWeaponAttachmentChanged, &WeaponAttachmentChanged_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.SwitchWeapon
// [0x00020102] 
// Parameters infos:
// unsigned char                  NewGroup                       ( CPF_Parm )

void ATGBioPlayerPawn::SwitchWeapon ( unsigned char NewGroup )
{
	static UFunction* pFnSwitchWeapon = NULL;

	if ( ! pFnSwitchWeapon )
		pFnSwitchWeapon = (UFunction*) UObject::GObjObjects()->Data[ 220055 ];

	ATGBioPlayerPawn_execSwitchWeapon_Parms SwitchWeapon_Parms;
	SwitchWeapon_Parms.NewGroup = NewGroup;

	this->ProcessEvent ( pFnSwitchWeapon, &SwitchWeapon_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.PlayTakeHitEffects
// [0x00820102] 
// Parameters infos:

void ATGBioPlayerPawn::PlayTakeHitEffects ( )
{
	static UFunction* pFnPlayTakeHitEffects = NULL;

	if ( ! pFnPlayTakeHitEffects )
		pFnPlayTakeHitEffects = (UFunction*) UObject::GObjObjects()->Data[ 220046 ];

	ATGBioPlayerPawn_execPlayTakeHitEffects_Parms PlayTakeHitEffects_Parms;

	this->ProcessEvent ( pFnPlayTakeHitEffects, &PlayTakeHitEffects_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.UpdateGameSettingOption
// [0x00020102] 
// Parameters infos:
// unsigned long                  IsUpdateLight                  ( CPF_Parm )

void ATGBioPlayerPawn::UpdateGameSettingOption ( unsigned long IsUpdateLight )
{
	static UFunction* pFnUpdateGameSettingOption = NULL;

	if ( ! pFnUpdateGameSettingOption )
		pFnUpdateGameSettingOption = (UFunction*) UObject::GObjObjects()->Data[ 220044 ];

	ATGBioPlayerPawn_execUpdateGameSettingOption_Parms UpdateGameSettingOption_Parms;
	UpdateGameSettingOption_Parms.IsUpdateLight = IsUpdateLight;

	this->ProcessEvent ( pFnUpdateGameSettingOption, &UpdateGameSettingOption_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.Destroyed
// [0x00020102] 
// Parameters infos:

void ATGBioPlayerPawn::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 220043 ];

	ATGBioPlayerPawn_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.StopHumItemEffect
// [0x00020102] 
// Parameters infos:

void ATGBioPlayerPawn::StopHumItemEffect ( )
{
	static UFunction* pFnStopHumItemEffect = NULL;

	if ( ! pFnStopHumItemEffect )
		pFnStopHumItemEffect = (UFunction*) UObject::GObjObjects()->Data[ 220042 ];

	ATGBioPlayerPawn_execStopHumItemEffect_Parms StopHumItemEffect_Parms;

	this->ProcessEvent ( pFnStopHumItemEffect, &StopHumItemEffect_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.StartHumItemEffect
// [0x00020102] 
// Parameters infos:

void ATGBioPlayerPawn::StartHumItemEffect ( )
{
	static UFunction* pFnStartHumItemEffect = NULL;

	if ( ! pFnStartHumItemEffect )
		pFnStartHumItemEffect = (UFunction*) UObject::GObjObjects()->Data[ 220040 ];

	ATGBioPlayerPawn_execStartHumItemEffect_Parms StartHumItemEffect_Parms;

	this->ProcessEvent ( pFnStartHumItemEffect, &StartHumItemEffect_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.StopDisarmParticleEffect
// [0x00020102] 
// Parameters infos:

void ATGBioPlayerPawn::StopDisarmParticleEffect ( )
{
	static UFunction* pFnStopDisarmParticleEffect = NULL;

	if ( ! pFnStopDisarmParticleEffect )
		pFnStopDisarmParticleEffect = (UFunction*) UObject::GObjObjects()->Data[ 220039 ];

	ATGBioPlayerPawn_execStopDisarmParticleEffect_Parms StopDisarmParticleEffect_Parms;

	this->ProcessEvent ( pFnStopDisarmParticleEffect, &StopDisarmParticleEffect_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.StartDisarmParticleEffect
// [0x00020102] 
// Parameters infos:

void ATGBioPlayerPawn::StartDisarmParticleEffect ( )
{
	static UFunction* pFnStartDisarmParticleEffect = NULL;

	if ( ! pFnStartDisarmParticleEffect )
		pFnStartDisarmParticleEffect = (UFunction*) UObject::GObjObjects()->Data[ 220037 ];

	ATGBioPlayerPawn_execStartDisarmParticleEffect_Parms StartDisarmParticleEffect_Parms;

	this->ProcessEvent ( pFnStartDisarmParticleEffect, &StartDisarmParticleEffect_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.StartFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGBioPlayerPawn::StartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 220035 ];

	ATGBioPlayerPawn_execStartFire_Parms StartFire_Parms;
	StartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.RecoverGunUselimit
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerPawn::RecoverGunUselimit ( )
{
	static UFunction* pFnRecoverGunUselimit = NULL;

	if ( ! pFnRecoverGunUselimit )
		pFnRecoverGunUselimit = (UFunction*) UObject::GObjObjects()->Data[ 220034 ];

	ATGBioPlayerPawn_execRecoverGunUselimit_Parms RecoverGunUselimit_Parms;

	this->ProcessEvent ( pFnRecoverGunUselimit, &RecoverGunUselimit_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.SetClientGunUselimit
// [0x00020002] 
// Parameters infos:
// float                          UselimitTime                   ( CPF_Parm )

void ATGBioPlayerPawn::SetClientGunUselimit ( float UselimitTime )
{
	static UFunction* pFnSetClientGunUselimit = NULL;

	if ( ! pFnSetClientGunUselimit )
		pFnSetClientGunUselimit = (UFunction*) UObject::GObjObjects()->Data[ 220030 ];

	ATGBioPlayerPawn_execSetClientGunUselimit_Parms SetClientGunUselimit_Parms;
	SetClientGunUselimit_Parms.UselimitTime = UselimitTime;

	this->ProcessEvent ( pFnSetClientGunUselimit, &SetClientGunUselimit_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.RecoverGunUselimitEffect
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerPawn::RecoverGunUselimitEffect ( )
{
	static UFunction* pFnRecoverGunUselimitEffect = NULL;

	if ( ! pFnRecoverGunUselimitEffect )
		pFnRecoverGunUselimitEffect = (UFunction*) UObject::GObjObjects()->Data[ 220029 ];

	ATGBioPlayerPawn_execRecoverGunUselimitEffect_Parms RecoverGunUselimitEffect_Parms;

	this->ProcessEvent ( pFnRecoverGunUselimitEffect, &RecoverGunUselimitEffect_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.SetServerGunUselimit
// [0x00020002] 
// Parameters infos:
// float                          UselimitTime                   ( CPF_Parm )

void ATGBioPlayerPawn::SetServerGunUselimit ( float UselimitTime )
{
	static UFunction* pFnSetServerGunUselimit = NULL;

	if ( ! pFnSetServerGunUselimit )
		pFnSetServerGunUselimit = (UFunction*) UObject::GObjObjects()->Data[ 220026 ];

	ATGBioPlayerPawn_execSetServerGunUselimit_Parms SetServerGunUselimit_Parms;
	SetServerGunUselimit_Parms.UselimitTime = UselimitTime;

	this->ProcessEvent ( pFnSetServerGunUselimit, &SetServerGunUselimit_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.PlaySpecialDiedAnim
// [0x00020102] 
// Parameters infos:

void ATGBioPlayerPawn::PlaySpecialDiedAnim ( )
{
	static UFunction* pFnPlaySpecialDiedAnim = NULL;

	if ( ! pFnPlaySpecialDiedAnim )
		pFnPlaySpecialDiedAnim = (UFunction*) UObject::GObjObjects()->Data[ 220025 ];

	ATGBioPlayerPawn_execPlaySpecialDiedAnim_Parms PlaySpecialDiedAnim_Parms;

	this->ProcessEvent ( pFnPlaySpecialDiedAnim, &PlaySpecialDiedAnim_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.ChangeBagTime
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioPlayerPawn::ChangeBagTime ( )
{
	static UFunction* pFnChangeBagTime = NULL;

	if ( ! pFnChangeBagTime )
		pFnChangeBagTime = (UFunction*) UObject::GObjObjects()->Data[ 220023 ];

	ATGBioPlayerPawn_execChangeBagTime_Parms ChangeBagTime_Parms;

	this->ProcessEvent ( pFnChangeBagTime, &ChangeBagTime_Parms, NULL );

	return ChangeBagTime_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerPawn.IsInHomeZone
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioPlayerPawn::IsInHomeZone ( )
{
	static UFunction* pFnIsInHomeZone = NULL;

	if ( ! pFnIsInHomeZone )
		pFnIsInHomeZone = (UFunction*) UObject::GObjObjects()->Data[ 220021 ];

	ATGBioPlayerPawn_execIsInHomeZone_Parms IsInHomeZone_Parms;

	this->ProcessEvent ( pFnIsInHomeZone, &IsInHomeZone_Parms, NULL );

	return IsInHomeZone_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerPawn.AddAttackUpRate
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerPawn::AddAttackUpRate ( )
{
	static UFunction* pFnAddAttackUpRate = NULL;

	if ( ! pFnAddAttackUpRate )
		pFnAddAttackUpRate = (UFunction*) UObject::GObjObjects()->Data[ 220018 ];

	ATGBioPlayerPawn_execAddAttackUpRate_Parms AddAttackUpRate_Parms;

	this->ProcessEvent ( pFnAddAttackUpRate, &AddAttackUpRate_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.SetDefenceInfectionCount
// [0x00020002] 
// Parameters infos:
// int                            iCount                         ( CPF_Parm )

void ATGBioPlayerPawn::SetDefenceInfectionCount ( int iCount )
{
	static UFunction* pFnSetDefenceInfectionCount = NULL;

	if ( ! pFnSetDefenceInfectionCount )
		pFnSetDefenceInfectionCount = (UFunction*) UObject::GObjObjects()->Data[ 220016 ];

	ATGBioPlayerPawn_execSetDefenceInfectionCount_Parms SetDefenceInfectionCount_Parms;
	SetDefenceInfectionCount_Parms.iCount = iCount;

	this->ProcessEvent ( pFnSetDefenceInfectionCount, &SetDefenceInfectionCount_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.PlayDying
// [0x00824102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLoc                         ( CPF_Parm )
// unsigned char                  DeathDir                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_OptionalParm | CPF_Parm )

void ATGBioPlayerPawn::PlayDying ( class UClass* DamageType, struct FVector HitLoc, unsigned char DeathDir, unsigned char HitGroup )
{
	static UFunction* pFnPlayDying = NULL;

	if ( ! pFnPlayDying )
		pFnPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 220006 ];

	ATGBioPlayerPawn_execPlayDying_Parms PlayDying_Parms;
	PlayDying_Parms.DamageType = DamageType;
	memcpy ( &PlayDying_Parms.HitLoc, &HitLoc, 0xC );
	PlayDying_Parms.DeathDir = DeathDir;
	PlayDying_Parms.HitGroup = HitGroup;

	this->ProcessEvent ( pFnPlayDying, &PlayDying_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.Died
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// unsigned char                  DeathDir                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_OptionalParm | CPF_Parm )

bool ATGBioPlayerPawn::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation, unsigned char DeathDir, unsigned char HitGroup )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 219993 ];

	ATGBioPlayerPawn_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );
	Died_Parms.DeathDir = DeathDir;
	Died_Parms.HitGroup = HitGroup;

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerPawn.TakeDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ATGBioPlayerPawn::eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 219981 ];

	ATGBioPlayerPawn_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.Damage = Damage;
	TakeDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x20 );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.CancelAntitoxicImmune
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerPawn::CancelAntitoxicImmune ( )
{
	static UFunction* pFnCancelAntitoxicImmune = NULL;

	if ( ! pFnCancelAntitoxicImmune )
		pFnCancelAntitoxicImmune = (UFunction*) UObject::GObjObjects()->Data[ 219980 ];

	ATGBioPlayerPawn_execCancelAntitoxicImmune_Parms CancelAntitoxicImmune_Parms;

	this->ProcessEvent ( pFnCancelAntitoxicImmune, &CancelAntitoxicImmune_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.ServerTakeDamage
// [0x00024002] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ATGBioPlayerPawn::ServerTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnServerTakeDamage = NULL;

	if ( ! pFnServerTakeDamage )
		pFnServerTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 219972 ];

	ATGBioPlayerPawn_execServerTakeDamage_Parms ServerTakeDamage_Parms;
	ServerTakeDamage_Parms.Damage = Damage;
	ServerTakeDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &ServerTakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ServerTakeDamage_Parms.Momentum, &Momentum, 0xC );
	ServerTakeDamage_Parms.DamageType = DamageType;
	memcpy ( &ServerTakeDamage_Parms.HitInfo, &HitInfo, 0x20 );
	ServerTakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnServerTakeDamage, &ServerTakeDamage_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.ItemChangeDamageScale
// [0x00020002] 
// Parameters infos:
// unsigned long                  DoubleScale                    ( CPF_Parm )

void ATGBioPlayerPawn::ItemChangeDamageScale ( unsigned long DoubleScale )
{
	static UFunction* pFnItemChangeDamageScale = NULL;

	if ( ! pFnItemChangeDamageScale )
		pFnItemChangeDamageScale = (UFunction*) UObject::GObjObjects()->Data[ 219967 ];

	ATGBioPlayerPawn_execItemChangeDamageScale_Parms ItemChangeDamageScale_Parms;
	ItemChangeDamageScale_Parms.DoubleScale = DoubleScale;

	this->ProcessEvent ( pFnItemChangeDamageScale, &ItemChangeDamageScale_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.ClientUnSetItemDamageScale
// [0x010201C2] 
// Parameters infos:

void ATGBioPlayerPawn::ClientUnSetItemDamageScale ( )
{
	static UFunction* pFnClientUnSetItemDamageScale = NULL;

	if ( ! pFnClientUnSetItemDamageScale )
		pFnClientUnSetItemDamageScale = (UFunction*) UObject::GObjObjects()->Data[ 219966 ];

	ATGBioPlayerPawn_execClientUnSetItemDamageScale_Parms ClientUnSetItemDamageScale_Parms;

	this->ProcessEvent ( pFnClientUnSetItemDamageScale, &ClientUnSetItemDamageScale_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.UnSetItemDamageScale
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerPawn::UnSetItemDamageScale ( )
{
	static UFunction* pFnUnSetItemDamageScale = NULL;

	if ( ! pFnUnSetItemDamageScale )
		pFnUnSetItemDamageScale = (UFunction*) UObject::GObjObjects()->Data[ 219965 ];

	ATGBioPlayerPawn_execUnSetItemDamageScale_Parms UnSetItemDamageScale_Parms;

	this->ProcessEvent ( pFnUnSetItemDamageScale, &UnSetItemDamageScale_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.SetItemDamageScale
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerPawn::SetItemDamageScale ( )
{
	static UFunction* pFnSetItemDamageScale = NULL;

	if ( ! pFnSetItemDamageScale )
		pFnSetItemDamageScale = (UFunction*) UObject::GObjObjects()->Data[ 219963 ];

	ATGBioPlayerPawn_execSetItemDamageScale_Parms SetItemDamageScale_Parms;

	this->ProcessEvent ( pFnSetItemDamageScale, &SetItemDamageScale_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.ClientSetItemDamageScale
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerPawn::ClientSetItemDamageScale ( )
{
	static UFunction* pFnClientSetItemDamageScale = NULL;

	if ( ! pFnClientSetItemDamageScale )
		pFnClientSetItemDamageScale = (UFunction*) UObject::GObjObjects()->Data[ 219961 ];

	ATGBioPlayerPawn_execClientSetItemDamageScale_Parms ClientSetItemDamageScale_Parms;

	this->ProcessEvent ( pFnClientSetItemDamageScale, &ClientSetItemDamageScale_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.ServerSetItemDamageScale
// [0x002200C2] 
// Parameters infos:

void ATGBioPlayerPawn::ServerSetItemDamageScale ( )
{
	static UFunction* pFnServerSetItemDamageScale = NULL;

	if ( ! pFnServerSetItemDamageScale )
		pFnServerSetItemDamageScale = (UFunction*) UObject::GObjObjects()->Data[ 219960 ];

	ATGBioPlayerPawn_execServerSetItemDamageScale_Parms ServerSetItemDamageScale_Parms;

	this->ProcessEvent ( pFnServerSetItemDamageScale, &ServerSetItemDamageScale_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.GetItemCooldownRemainTime
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGBioPlayerPawn::GetItemCooldownRemainTime ( )
{
	static UFunction* pFnGetItemCooldownRemainTime = NULL;

	if ( ! pFnGetItemCooldownRemainTime )
		pFnGetItemCooldownRemainTime = (UFunction*) UObject::GObjObjects()->Data[ 219958 ];

	ATGBioPlayerPawn_execGetItemCooldownRemainTime_Parms GetItemCooldownRemainTime_Parms;

	this->ProcessEvent ( pFnGetItemCooldownRemainTime, &GetItemCooldownRemainTime_Parms, NULL );

	return GetItemCooldownRemainTime_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerPawn.GetItemCooldownRemainPercent
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGBioPlayerPawn::GetItemCooldownRemainPercent ( )
{
	static UFunction* pFnGetItemCooldownRemainPercent = NULL;

	if ( ! pFnGetItemCooldownRemainPercent )
		pFnGetItemCooldownRemainPercent = (UFunction*) UObject::GObjObjects()->Data[ 219956 ];

	ATGBioPlayerPawn_execGetItemCooldownRemainPercent_Parms GetItemCooldownRemainPercent_Parms;

	this->ProcessEvent ( pFnGetItemCooldownRemainPercent, &GetItemCooldownRemainPercent_Parms, NULL );

	return GetItemCooldownRemainPercent_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerPawn.AddOneKillFeedback
// [0x010201C2] 
// Parameters infos:
// int                            NumToAdd                       ( CPF_Parm )

void ATGBioPlayerPawn::AddOneKillFeedback ( int NumToAdd )
{
	static UFunction* pFnAddOneKillFeedback = NULL;

	if ( ! pFnAddOneKillFeedback )
		pFnAddOneKillFeedback = (UFunction*) UObject::GObjObjects()->Data[ 219952 ];

	ATGBioPlayerPawn_execAddOneKillFeedback_Parms AddOneKillFeedback_Parms;
	AddOneKillFeedback_Parms.NumToAdd = NumToAdd;

	this->ProcessEvent ( pFnAddOneKillFeedback, &AddOneKillFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.StartDriverHurtPawn
// [0x010201C2] 
// Parameters infos:
// int                            iHurt                          ( CPF_Parm )
// struct FVector                 vPos                           ( CPF_Parm )

void ATGBioPlayerPawn::StartDriverHurtPawn ( int iHurt, struct FVector vPos )
{
	static UFunction* pFnStartDriverHurtPawn = NULL;

	if ( ! pFnStartDriverHurtPawn )
		pFnStartDriverHurtPawn = (UFunction*) UObject::GObjObjects()->Data[ 219948 ];

	ATGBioPlayerPawn_execStartDriverHurtPawn_Parms StartDriverHurtPawn_Parms;
	StartDriverHurtPawn_Parms.iHurt = iHurt;
	memcpy ( &StartDriverHurtPawn_Parms.vPos, &vPos, 0xC );

	this->ProcessEvent ( pFnStartDriverHurtPawn, &StartDriverHurtPawn_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.AddDamageValue
// [0x00020002] 
// Parameters infos:
// int                            iDamage                        ( CPF_Parm )
// class ATGBioZombiePawn*        hurtPawn                       ( CPF_Parm )

void ATGBioPlayerPawn::AddDamageValue ( int iDamage, class ATGBioZombiePawn* hurtPawn )
{
	static UFunction* pFnAddDamageValue = NULL;

	if ( ! pFnAddDamageValue )
		pFnAddDamageValue = (UFunction*) UObject::GObjObjects()->Data[ 219940 ];

	ATGBioPlayerPawn_execAddDamageValue_Parms AddDamageValue_Parms;
	AddDamageValue_Parms.iDamage = iDamage;
	AddDamageValue_Parms.hurtPawn = hurtPawn;

	this->ProcessEvent ( pFnAddDamageValue, &AddDamageValue_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.ThrowWeaponOnDeath
// [0x00020000] 
// Parameters infos:

void ATGBioPlayerPawn::ThrowWeaponOnDeath ( )
{
	static UFunction* pFnThrowWeaponOnDeath = NULL;

	if ( ! pFnThrowWeaponOnDeath )
		pFnThrowWeaponOnDeath = (UFunction*) UObject::GObjObjects()->Data[ 219939 ];

	ATGBioPlayerPawn_execThrowWeaponOnDeath_Parms ThrowWeaponOnDeath_Parms;

	this->ProcessEvent ( pFnThrowWeaponOnDeath, &ThrowWeaponOnDeath_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerPawn.DoJump
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bUpdating                      ( CPF_Parm )

bool ATGBioPlayerPawn::DoJump ( unsigned long bUpdating )
{
	static UFunction* pFnDoJump = NULL;

	if ( ! pFnDoJump )
		pFnDoJump = (UFunction*) UObject::GObjObjects()->Data[ 219936 ];

	ATGBioPlayerPawn_execDoJump_Parms DoJump_Parms;
	DoJump_Parms.bUpdating = bUpdating;

	this->ProcessEvent ( pFnDoJump, &DoJump_Parms, NULL );

	return DoJump_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerPawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGBioPlayerPawn::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 219934 ];

	ATGBioPlayerPawn_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.ProcessCrouchedClientOther
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATGBioZombiePawn::ProcessCrouchedClientOther ( )
{
	static UFunction* pFnProcessCrouchedClientOther = NULL;

	if ( ! pFnProcessCrouchedClientOther )
		pFnProcessCrouchedClientOther = (UFunction*) UObject::GObjObjects()->Data[ 219631 ];

	ATGBioZombiePawn_execProcessCrouchedClientOther_Parms ProcessCrouchedClientOther_Parms;

	pFnProcessCrouchedClientOther->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProcessCrouchedClientOther, &ProcessCrouchedClientOther_Parms, NULL );

	pFnProcessCrouchedClientOther->FunctionFlags |= 0x400;
};

// Function TGBioGame.TGBioZombiePawn.ProcessCrouched
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATGBioZombiePawn::ProcessCrouched ( )
{
	static UFunction* pFnProcessCrouched = NULL;

	if ( ! pFnProcessCrouched )
		pFnProcessCrouched = (UFunction*) UObject::GObjObjects()->Data[ 219630 ];

	ATGBioZombiePawn_execProcessCrouched_Parms ProcessCrouched_Parms;

	pFnProcessCrouched->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProcessCrouched, &ProcessCrouched_Parms, NULL );

	pFnProcessCrouched->FunctionFlags |= 0x400;
};

// Function TGBioGame.TGBioZombiePawn.MeleeSuicide
// [0x00020002] 
// Parameters infos:
// class APawn*                   EventInstigator                ( CPF_Parm )

void ATGBioZombiePawn::MeleeSuicide ( class APawn* EventInstigator )
{
	static UFunction* pFnMeleeSuicide = NULL;

	if ( ! pFnMeleeSuicide )
		pFnMeleeSuicide = (UFunction*) UObject::GObjObjects()->Data[ 219627 ];

	ATGBioZombiePawn_execMeleeSuicide_Parms MeleeSuicide_Parms;
	MeleeSuicide_Parms.EventInstigator = EventInstigator;

	this->ProcessEvent ( pFnMeleeSuicide, &MeleeSuicide_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.NotifySkillFired
// [0x00020000] 
// Parameters infos:
// class ATGBioSkillBase*         TheSkill                       ( CPF_Parm )

void ATGBioZombiePawn::NotifySkillFired ( class ATGBioSkillBase* TheSkill )
{
	static UFunction* pFnNotifySkillFired = NULL;

	if ( ! pFnNotifySkillFired )
		pFnNotifySkillFired = (UFunction*) UObject::GObjObjects()->Data[ 219625 ];

	ATGBioZombiePawn_execNotifySkillFired_Parms NotifySkillFired_Parms;
	NotifySkillFired_Parms.TheSkill = TheSkill;

	this->ProcessEvent ( pFnNotifySkillFired, &NotifySkillFired_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.CacheAnimNodes
// [0x00020100] 
// Parameters infos:

void ATGBioZombiePawn::CacheAnimNodes ( )
{
	static UFunction* pFnCacheAnimNodes = NULL;

	if ( ! pFnCacheAnimNodes )
		pFnCacheAnimNodes = (UFunction*) UObject::GObjObjects()->Data[ 219624 ];

	ATGBioZombiePawn_execCacheAnimNodes_Parms CacheAnimNodes_Parms;

	this->ProcessEvent ( pFnCacheAnimNodes, &CacheAnimNodes_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.SpecializekillEffect
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::SpecializekillEffect ( )
{
	static UFunction* pFnSpecializekillEffect = NULL;

	if ( ! pFnSpecializekillEffect )
		pFnSpecializekillEffect = (UFunction*) UObject::GObjObjects()->Data[ 219621 ];

	ATGBioZombiePawn_execSpecializekillEffect_Parms SpecializekillEffect_Parms;

	this->ProcessEvent ( pFnSpecializekillEffect, &SpecializekillEffect_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.SetMeshVisibility
// [0x00020102] 
// Parameters infos:
// unsigned long                  bVisible                       ( CPF_Parm )

void ATGBioZombiePawn::SetMeshVisibility ( unsigned long bVisible )
{
	static UFunction* pFnSetMeshVisibility = NULL;

	if ( ! pFnSetMeshVisibility )
		pFnSetMeshVisibility = (UFunction*) UObject::GObjObjects()->Data[ 219619 ];

	ATGBioZombiePawn_execSetMeshVisibility_Parms SetMeshVisibility_Parms;
	SetMeshVisibility_Parms.bVisible = bVisible;

	this->ProcessEvent ( pFnSetMeshVisibility, &SetMeshVisibility_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.BecomeViewTarget
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void ATGBioZombiePawn::eventBecomeViewTarget ( class APlayerController* PC )
{
	static UFunction* pFnBecomeViewTarget = NULL;

	if ( ! pFnBecomeViewTarget )
		pFnBecomeViewTarget = (UFunction*) UObject::GObjObjects()->Data[ 219617 ];

	ATGBioZombiePawn_eventBecomeViewTarget_Parms BecomeViewTarget_Parms;
	BecomeViewTarget_Parms.PC = PC;

	this->ProcessEvent ( pFnBecomeViewTarget, &BecomeViewTarget_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.NotifyArmMeshChanged
// [0x00020100] 
// Parameters infos:
// class ATGPlayerReplicationInfo* UTPRI                          ( CPF_Parm )

void ATGBioZombiePawn::NotifyArmMeshChanged ( class ATGPlayerReplicationInfo* UTPRI )
{
	static UFunction* pFnNotifyArmMeshChanged = NULL;

	if ( ! pFnNotifyArmMeshChanged )
		pFnNotifyArmMeshChanged = (UFunction*) UObject::GObjObjects()->Data[ 219615 ];

	ATGBioZombiePawn_execNotifyArmMeshChanged_Parms NotifyArmMeshChanged_Parms;
	NotifyArmMeshChanged_Parms.UTPRI = UTPRI;

	this->ProcessEvent ( pFnNotifyArmMeshChanged, &NotifyArmMeshChanged_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayDyingSound
// [0x00020000] 
// Parameters infos:

void ATGBioZombiePawn::PlayDyingSound ( )
{
	static UFunction* pFnPlayDyingSound = NULL;

	if ( ! pFnPlayDyingSound )
		pFnPlayDyingSound = (UFunction*) UObject::GObjObjects()->Data[ 219614 ];

	ATGBioZombiePawn_execPlayDyingSound_Parms PlayDyingSound_Parms;

	this->ProcessEvent ( pFnPlayDyingSound, &PlayDyingSound_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.Destroyed
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 219613 ];

	ATGBioZombiePawn_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.SetWeapAnimType
// [0x00020102] 
// Parameters infos:
// unsigned char                  AnimType                       ( CPF_Parm )

void ATGBioZombiePawn::SetWeapAnimType ( unsigned char AnimType )
{
	static UFunction* pFnSetWeapAnimType = NULL;

	if ( ! pFnSetWeapAnimType )
		pFnSetWeapAnimType = (UFunction*) UObject::GObjObjects()->Data[ 219611 ];

	ATGBioZombiePawn_execSetWeapAnimType_Parms SetWeapAnimType_Parms;
	SetWeapAnimType_Parms.AnimType = AnimType;

	this->ProcessEvent ( pFnSetWeapAnimType, &SetWeapAnimType_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.GetRegenerateVoiceSound
// [0x00020102] 
// Parameters infos:
// class USoundCue*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class USoundCue* ATGBioZombiePawn::GetRegenerateVoiceSound ( )
{
	static UFunction* pFnGetRegenerateVoiceSound = NULL;

	if ( ! pFnGetRegenerateVoiceSound )
		pFnGetRegenerateVoiceSound = (UFunction*) UObject::GObjObjects()->Data[ 219608 ];

	ATGBioZombiePawn_execGetRegenerateVoiceSound_Parms GetRegenerateVoiceSound_Parms;

	this->ProcessEvent ( pFnGetRegenerateVoiceSound, &GetRegenerateVoiceSound_Parms, NULL );

	return GetRegenerateVoiceSound_Parms.ReturnValue;
};

// Function TGBioGame.TGBioZombiePawn.GetInfectionPlayerVoiceSound
// [0x00020102] 
// Parameters infos:
// class USoundCue*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class USoundCue* ATGBioZombiePawn::GetInfectionPlayerVoiceSound ( )
{
	static UFunction* pFnGetInfectionPlayerVoiceSound = NULL;

	if ( ! pFnGetInfectionPlayerVoiceSound )
		pFnGetInfectionPlayerVoiceSound = (UFunction*) UObject::GObjObjects()->Data[ 219605 ];

	ATGBioZombiePawn_execGetInfectionPlayerVoiceSound_Parms GetInfectionPlayerVoiceSound_Parms;

	this->ProcessEvent ( pFnGetInfectionPlayerVoiceSound, &GetInfectionPlayerVoiceSound_Parms, NULL );

	return GetInfectionPlayerVoiceSound_Parms.ReturnValue;
};

// Function TGBioGame.TGBioZombiePawn.GetLevelUpVoiceSound
// [0x00020102] 
// Parameters infos:
// class USoundCue*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class USoundCue* ATGBioZombiePawn::GetLevelUpVoiceSound ( )
{
	static UFunction* pFnGetLevelUpVoiceSound = NULL;

	if ( ! pFnGetLevelUpVoiceSound )
		pFnGetLevelUpVoiceSound = (UFunction*) UObject::GObjObjects()->Data[ 219602 ];

	ATGBioZombiePawn_execGetLevelUpVoiceSound_Parms GetLevelUpVoiceSound_Parms;

	this->ProcessEvent ( pFnGetLevelUpVoiceSound, &GetLevelUpVoiceSound_Parms, NULL );

	return GetLevelUpVoiceSound_Parms.ReturnValue;
};

// Function TGBioGame.TGBioZombiePawn.GetInfectionVoiceSound
// [0x00020102] 
// Parameters infos:
// class USoundCue*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class USoundCue* ATGBioZombiePawn::GetInfectionVoiceSound ( )
{
	static UFunction* pFnGetInfectionVoiceSound = NULL;

	if ( ! pFnGetInfectionVoiceSound )
		pFnGetInfectionVoiceSound = (UFunction*) UObject::GObjObjects()->Data[ 219599 ];

	ATGBioZombiePawn_execGetInfectionVoiceSound_Parms GetInfectionVoiceSound_Parms;

	this->ProcessEvent ( pFnGetInfectionVoiceSound, &GetInfectionVoiceSound_Parms, NULL );

	return GetInfectionVoiceSound_Parms.ReturnValue;
};

// Function TGBioGame.TGBioZombiePawn.PlayLevelUpSound
// [0x00020100] 
// Parameters infos:

void ATGBioZombiePawn::PlayLevelUpSound ( )
{
	static UFunction* pFnPlayLevelUpSound = NULL;

	if ( ! pFnPlayLevelUpSound )
		pFnPlayLevelUpSound = (UFunction*) UObject::GObjObjects()->Data[ 219598 ];

	ATGBioZombiePawn_execPlayLevelUpSound_Parms PlayLevelUpSound_Parms;

	this->ProcessEvent ( pFnPlayLevelUpSound, &PlayLevelUpSound_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayLevelUpEffect
// [0x00020100] 
// Parameters infos:

void ATGBioZombiePawn::PlayLevelUpEffect ( )
{
	static UFunction* pFnPlayLevelUpEffect = NULL;

	if ( ! pFnPlayLevelUpEffect )
		pFnPlayLevelUpEffect = (UFunction*) UObject::GObjObjects()->Data[ 219597 ];

	ATGBioZombiePawn_execPlayLevelUpEffect_Parms PlayLevelUpEffect_Parms;

	this->ProcessEvent ( pFnPlayLevelUpEffect, &PlayLevelUpEffect_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayRegenerateVoiceSound
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::PlayRegenerateVoiceSound ( )
{
	static UFunction* pFnPlayRegenerateVoiceSound = NULL;

	if ( ! pFnPlayRegenerateVoiceSound )
		pFnPlayRegenerateVoiceSound = (UFunction*) UObject::GObjObjects()->Data[ 219595 ];

	ATGBioZombiePawn_execPlayRegenerateVoiceSound_Parms PlayRegenerateVoiceSound_Parms;

	this->ProcessEvent ( pFnPlayRegenerateVoiceSound, &PlayRegenerateVoiceSound_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.StopHealthSound
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::StopHealthSound ( )
{
	static UFunction* pFnStopHealthSound = NULL;

	if ( ! pFnStopHealthSound )
		pFnStopHealthSound = (UFunction*) UObject::GObjObjects()->Data[ 219594 ];

	ATGBioZombiePawn_execStopHealthSound_Parms StopHealthSound_Parms;

	this->ProcessEvent ( pFnStopHealthSound, &StopHealthSound_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayHealthSound
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::PlayHealthSound ( )
{
	static UFunction* pFnPlayHealthSound = NULL;

	if ( ! pFnPlayHealthSound )
		pFnPlayHealthSound = (UFunction*) UObject::GObjObjects()->Data[ 219593 ];

	ATGBioZombiePawn_execPlayHealthSound_Parms PlayHealthSound_Parms;

	this->ProcessEvent ( pFnPlayHealthSound, &PlayHealthSound_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayHitHumanHeroSound
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::PlayHitHumanHeroSound ( )
{
	static UFunction* pFnPlayHitHumanHeroSound = NULL;

	if ( ! pFnPlayHitHumanHeroSound )
		pFnPlayHitHumanHeroSound = (UFunction*) UObject::GObjObjects()->Data[ 219592 ];

	ATGBioZombiePawn_execPlayHitHumanHeroSound_Parms PlayHitHumanHeroSound_Parms;

	this->ProcessEvent ( pFnPlayHitHumanHeroSound, &PlayHitHumanHeroSound_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayHitSound
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::PlayHitSound ( )
{
	static UFunction* pFnPlayHitSound = NULL;

	if ( ! pFnPlayHitSound )
		pFnPlayHitSound = (UFunction*) UObject::GObjObjects()->Data[ 219591 ];

	ATGBioZombiePawn_execPlayHitSound_Parms PlayHitSound_Parms;

	this->ProcessEvent ( pFnPlayHitSound, &PlayHitSound_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.DirtyLowHealthTag
// [0x00020002] 
// Parameters infos:
// unsigned long                  LowHealthTag                   ( CPF_Parm )

void ATGBioZombiePawn::DirtyLowHealthTag ( unsigned long LowHealthTag )
{
	static UFunction* pFnDirtyLowHealthTag = NULL;

	if ( ! pFnDirtyLowHealthTag )
		pFnDirtyLowHealthTag = (UFunction*) UObject::GObjObjects()->Data[ 219589 ];

	ATGBioZombiePawn_execDirtyLowHealthTag_Parms DirtyLowHealthTag_Parms;
	DirtyLowHealthTag_Parms.LowHealthTag = LowHealthTag;

	this->ProcessEvent ( pFnDirtyLowHealthTag, &DirtyLowHealthTag_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.DirtyHealthTag
// [0x00020002] 
// Parameters infos:
// unsigned long                  HealthTag                      ( CPF_Parm )

void ATGBioZombiePawn::DirtyHealthTag ( unsigned long HealthTag )
{
	static UFunction* pFnDirtyHealthTag = NULL;

	if ( ! pFnDirtyHealthTag )
		pFnDirtyHealthTag = (UFunction*) UObject::GObjObjects()->Data[ 219587 ];

	ATGBioZombiePawn_execDirtyHealthTag_Parms DirtyHealthTag_Parms;
	DirtyHealthTag_Parms.HealthTag = HealthTag;

	this->ProcessEvent ( pFnDirtyHealthTag, &DirtyHealthTag_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.DirtySelectTag
// [0x00020002] 
// Parameters infos:

void ATGBioZombiePawn::DirtySelectTag ( )
{
	static UFunction* pFnDirtySelectTag = NULL;

	if ( ! pFnDirtySelectTag )
		pFnDirtySelectTag = (UFunction*) UObject::GObjObjects()->Data[ 219586 ];

	ATGBioZombiePawn_execDirtySelectTag_Parms DirtySelectTag_Parms;

	this->ProcessEvent ( pFnDirtySelectTag, &DirtySelectTag_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.DeathParticleEffect
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::DeathParticleEffect ( )
{
	static UFunction* pFnDeathParticleEffect = NULL;

	if ( ! pFnDeathParticleEffect )
		pFnDeathParticleEffect = (UFunction*) UObject::GObjObjects()->Data[ 219585 ];

	ATGBioZombiePawn_execDeathParticleEffect_Parms DeathParticleEffect_Parms;

	this->ProcessEvent ( pFnDeathParticleEffect, &DeathParticleEffect_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.DeathLightEffect
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::DeathLightEffect ( )
{
	static UFunction* pFnDeathLightEffect = NULL;

	if ( ! pFnDeathLightEffect )
		pFnDeathLightEffect = (UFunction*) UObject::GObjObjects()->Data[ 219583 ];

	ATGBioZombiePawn_execDeathLightEffect_Parms DeathLightEffect_Parms;

	this->ProcessEvent ( pFnDeathLightEffect, &DeathLightEffect_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.TickDeathEffectMaterial
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::TickDeathEffectMaterial ( )
{
	static UFunction* pFnTickDeathEffectMaterial = NULL;

	if ( ! pFnTickDeathEffectMaterial )
		pFnTickDeathEffectMaterial = (UFunction*) UObject::GObjObjects()->Data[ 219581 ];

	ATGBioZombiePawn_execTickDeathEffectMaterial_Parms TickDeathEffectMaterial_Parms;

	this->ProcessEvent ( pFnTickDeathEffectMaterial, &TickDeathEffectMaterial_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayDeathSound
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::PlayDeathSound ( )
{
	static UFunction* pFnPlayDeathSound = NULL;

	if ( ! pFnPlayDeathSound )
		pFnPlayDeathSound = (UFunction*) UObject::GObjObjects()->Data[ 219580 ];

	ATGBioZombiePawn_execPlayDeathSound_Parms PlayDeathSound_Parms;

	this->ProcessEvent ( pFnPlayDeathSound, &PlayDeathSound_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayDeathEffect
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::PlayDeathEffect ( )
{
	static UFunction* pFnPlayDeathEffect = NULL;

	if ( ! pFnPlayDeathEffect )
		pFnPlayDeathEffect = (UFunction*) UObject::GObjObjects()->Data[ 219578 ];

	ATGBioZombiePawn_execPlayDeathEffect_Parms PlayDeathEffect_Parms;

	this->ProcessEvent ( pFnPlayDeathEffect, &PlayDeathEffect_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.ResetSelectMaterial
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::ResetSelectMaterial ( )
{
	static UFunction* pFnResetSelectMaterial = NULL;

	if ( ! pFnResetSelectMaterial )
		pFnResetSelectMaterial = (UFunction*) UObject::GObjObjects()->Data[ 219576 ];

	ATGBioZombiePawn_execResetSelectMaterial_Parms ResetSelectMaterial_Parms;

	this->ProcessEvent ( pFnResetSelectMaterial, &ResetSelectMaterial_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlaySelectEffect
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::PlaySelectEffect ( )
{
	static UFunction* pFnPlaySelectEffect = NULL;

	if ( ! pFnPlaySelectEffect )
		pFnPlaySelectEffect = (UFunction*) UObject::GObjObjects()->Data[ 219574 ];

	ATGBioZombiePawn_execPlaySelectEffect_Parms PlaySelectEffect_Parms;

	this->ProcessEvent ( pFnPlaySelectEffect, &PlaySelectEffect_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayChangeZombieEffect
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::PlayChangeZombieEffect ( )
{
	static UFunction* pFnPlayChangeZombieEffect = NULL;

	if ( ! pFnPlayChangeZombieEffect )
		pFnPlayChangeZombieEffect = (UFunction*) UObject::GObjObjects()->Data[ 219573 ];

	ATGBioZombiePawn_execPlayChangeZombieEffect_Parms PlayChangeZombieEffect_Parms;

	this->ProcessEvent ( pFnPlayChangeZombieEffect, &PlayChangeZombieEffect_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayInfectionSound
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::PlayInfectionSound ( )
{
	static UFunction* pFnPlayInfectionSound = NULL;

	if ( ! pFnPlayInfectionSound )
		pFnPlayInfectionSound = (UFunction*) UObject::GObjObjects()->Data[ 219571 ];

	ATGBioZombiePawn_execPlayInfectionSound_Parms PlayInfectionSound_Parms;

	this->ProcessEvent ( pFnPlayInfectionSound, &PlayInfectionSound_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayInfectionEffect
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::PlayInfectionEffect ( )
{
	static UFunction* pFnPlayInfectionEffect = NULL;

	if ( ! pFnPlayInfectionEffect )
		pFnPlayInfectionEffect = (UFunction*) UObject::GObjObjects()->Data[ 219570 ];

	ATGBioZombiePawn_execPlayInfectionEffect_Parms PlayInfectionEffect_Parms;

	this->ProcessEvent ( pFnPlayInfectionEffect, &PlayInfectionEffect_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.StopLowHealthEffect
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::StopLowHealthEffect ( )
{
	static UFunction* pFnStopLowHealthEffect = NULL;

	if ( ! pFnStopLowHealthEffect )
		pFnStopLowHealthEffect = (UFunction*) UObject::GObjObjects()->Data[ 219567 ];

	ATGBioZombiePawn_execStopLowHealthEffect_Parms StopLowHealthEffect_Parms;

	this->ProcessEvent ( pFnStopLowHealthEffect, &StopLowHealthEffect_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayLowHealthEffect
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::PlayLowHealthEffect ( )
{
	static UFunction* pFnPlayLowHealthEffect = NULL;

	if ( ! pFnPlayLowHealthEffect )
		pFnPlayLowHealthEffect = (UFunction*) UObject::GObjObjects()->Data[ 219564 ];

	ATGBioZombiePawn_execPlayLowHealthEffect_Parms PlayLowHealthEffect_Parms;

	this->ProcessEvent ( pFnPlayLowHealthEffect, &PlayLowHealthEffect_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.StopHealthEffect
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::StopHealthEffect ( )
{
	static UFunction* pFnStopHealthEffect = NULL;

	if ( ! pFnStopHealthEffect )
		pFnStopHealthEffect = (UFunction*) UObject::GObjObjects()->Data[ 219563 ];

	ATGBioZombiePawn_execStopHealthEffect_Parms StopHealthEffect_Parms;

	this->ProcessEvent ( pFnStopHealthEffect, &StopHealthEffect_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayHealthEffect
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::PlayHealthEffect ( )
{
	static UFunction* pFnPlayHealthEffect = NULL;

	if ( ! pFnPlayHealthEffect )
		pFnPlayHealthEffect = (UFunction*) UObject::GObjObjects()->Data[ 219562 ];

	ATGBioZombiePawn_execPlayHealthEffect_Parms PlayHealthEffect_Parms;

	this->ProcessEvent ( pFnPlayHealthEffect, &PlayHealthEffect_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlaySpecialDiedAnim
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::PlaySpecialDiedAnim ( )
{
	static UFunction* pFnPlaySpecialDiedAnim = NULL;

	if ( ! pFnPlaySpecialDiedAnim )
		pFnPlaySpecialDiedAnim = (UFunction*) UObject::GObjObjects()->Data[ 219561 ];

	ATGBioZombiePawn_execPlaySpecialDiedAnim_Parms PlaySpecialDiedAnim_Parms;

	this->ProcessEvent ( pFnPlaySpecialDiedAnim, &PlaySpecialDiedAnim_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.SleepRigidBody
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::SleepRigidBody ( )
{
	static UFunction* pFnSleepRigidBody = NULL;

	if ( ! pFnSleepRigidBody )
		pFnSleepRigidBody = (UFunction*) UObject::GObjObjects()->Data[ 219560 ];

	ATGBioZombiePawn_execSleepRigidBody_Parms SleepRigidBody_Parms;

	this->ProcessEvent ( pFnSleepRigidBody, &SleepRigidBody_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.DoingDeathAnim
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::DoingDeathAnim ( )
{
	static UFunction* pFnDoingDeathAnim = NULL;

	if ( ! pFnDoingDeathAnim )
		pFnDoingDeathAnim = (UFunction*) UObject::GObjObjects()->Data[ 219557 ];

	ATGBioZombiePawn_execDoingDeathAnim_Parms DoingDeathAnim_Parms;

	this->ProcessEvent ( pFnDoingDeathAnim, &DoingDeathAnim_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.LeaveABloodSplatterDecal
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLoc                         ( CPF_Parm )
// struct FVector                 HitNorm                        ( CPF_Parm )

void ATGBioZombiePawn::LeaveABloodSplatterDecal ( struct FVector HitLoc, struct FVector HitNorm )
{
	static UFunction* pFnLeaveABloodSplatterDecal = NULL;

	if ( ! pFnLeaveABloodSplatterDecal )
		pFnLeaveABloodSplatterDecal = (UFunction*) UObject::GObjObjects()->Data[ 219545 ];

	ATGBioZombiePawn_execLeaveABloodSplatterDecal_Parms LeaveABloodSplatterDecal_Parms;
	memcpy ( &LeaveABloodSplatterDecal_Parms.HitLoc, &HitLoc, 0xC );
	memcpy ( &LeaveABloodSplatterDecal_Parms.HitNorm, &HitNorm, 0xC );

	this->ProcessEvent ( pFnLeaveABloodSplatterDecal, &LeaveABloodSplatterDecal_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayBloodEffectInDying
// [0x00820102] 
// Parameters infos:
// class UClass*                  TheDamageType                  ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Const | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGBioZombiePawn::PlayBloodEffectInDying ( class UClass* TheDamageType, struct FTraceHitInfo HitInfo, struct FVector HitLocation )
{
	static UFunction* pFnPlayBloodEffectInDying = NULL;

	if ( ! pFnPlayBloodEffectInDying )
		pFnPlayBloodEffectInDying = (UFunction*) UObject::GObjObjects()->Data[ 219538 ];

	ATGBioZombiePawn_execPlayBloodEffectInDying_Parms PlayBloodEffectInDying_Parms;
	PlayBloodEffectInDying_Parms.TheDamageType = TheDamageType;
	memcpy ( &PlayBloodEffectInDying_Parms.HitInfo, &HitInfo, 0x20 );
	memcpy ( &PlayBloodEffectInDying_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayBloodEffectInDying, &PlayBloodEffectInDying_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayThirdPersonSwingMeleeWeaponAnimBeforeDamage
// [0x00020102] 
// Parameters infos:
// unsigned long                  bViaReplication                ( CPF_Parm )

void ATGBioZombiePawn::PlayThirdPersonSwingMeleeWeaponAnimBeforeDamage ( unsigned long bViaReplication )
{
	static UFunction* pFnPlayThirdPersonSwingMeleeWeaponAnimBeforeDamage = NULL;

	if ( ! pFnPlayThirdPersonSwingMeleeWeaponAnimBeforeDamage )
		pFnPlayThirdPersonSwingMeleeWeaponAnimBeforeDamage = (UFunction*) UObject::GObjObjects()->Data[ 219536 ];

	ATGBioZombiePawn_execPlayThirdPersonSwingMeleeWeaponAnimBeforeDamage_Parms PlayThirdPersonSwingMeleeWeaponAnimBeforeDamage_Parms;
	PlayThirdPersonSwingMeleeWeaponAnimBeforeDamage_Parms.bViaReplication = bViaReplication;

	this->ProcessEvent ( pFnPlayThirdPersonSwingMeleeWeaponAnimBeforeDamage, &PlayThirdPersonSwingMeleeWeaponAnimBeforeDamage_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayThirdPersonStabMeleeWeaponAnimBeforeDamage
// [0x00020102] 
// Parameters infos:
// unsigned long                  bViaReplication                ( CPF_Parm )
// unsigned char                  LocalMeleeWeaponStabCount      ( CPF_Parm )

void ATGBioZombiePawn::PlayThirdPersonStabMeleeWeaponAnimBeforeDamage ( unsigned long bViaReplication, unsigned char LocalMeleeWeaponStabCount )
{
	static UFunction* pFnPlayThirdPersonStabMeleeWeaponAnimBeforeDamage = NULL;

	if ( ! pFnPlayThirdPersonStabMeleeWeaponAnimBeforeDamage )
		pFnPlayThirdPersonStabMeleeWeaponAnimBeforeDamage = (UFunction*) UObject::GObjObjects()->Data[ 219533 ];

	ATGBioZombiePawn_execPlayThirdPersonStabMeleeWeaponAnimBeforeDamage_Parms PlayThirdPersonStabMeleeWeaponAnimBeforeDamage_Parms;
	PlayThirdPersonStabMeleeWeaponAnimBeforeDamage_Parms.bViaReplication = bViaReplication;
	PlayThirdPersonStabMeleeWeaponAnimBeforeDamage_Parms.LocalMeleeWeaponStabCount = LocalMeleeWeaponStabCount;

	this->ProcessEvent ( pFnPlayThirdPersonStabMeleeWeaponAnimBeforeDamage, &PlayThirdPersonStabMeleeWeaponAnimBeforeDamage_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayTakeHitEffects
// [0x00820102] 
// Parameters infos:

void ATGBioZombiePawn::PlayTakeHitEffects ( )
{
	static UFunction* pFnPlayTakeHitEffects = NULL;

	if ( ! pFnPlayTakeHitEffects )
		pFnPlayTakeHitEffects = (UFunction*) UObject::GObjObjects()->Data[ 219528 ];

	ATGBioZombiePawn_execPlayTakeHitEffects_Parms PlayTakeHitEffects_Parms;

	this->ProcessEvent ( pFnPlayTakeHitEffects, &PlayTakeHitEffects_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGBioZombiePawn::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 219526 ];

	ATGBioZombiePawn_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.NotifyPendingBioCharInfo
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UBioCharInfo*            PendingCharInfo                ( CPF_Parm )

bool ATGBioZombiePawn::NotifyPendingBioCharInfo ( class UBioCharInfo* PendingCharInfo )
{
	static UFunction* pFnNotifyPendingBioCharInfo = NULL;

	if ( ! pFnNotifyPendingBioCharInfo )
		pFnNotifyPendingBioCharInfo = (UFunction*) UObject::GObjObjects()->Data[ 219523 ];

	ATGBioZombiePawn_execNotifyPendingBioCharInfo_Parms NotifyPendingBioCharInfo_Parms;
	NotifyPendingBioCharInfo_Parms.PendingCharInfo = PendingCharInfo;

	this->ProcessEvent ( pFnNotifyPendingBioCharInfo, &NotifyPendingBioCharInfo_Parms, NULL );

	return NotifyPendingBioCharInfo_Parms.ReturnValue;
};

// Function TGBioGame.TGBioZombiePawn.SetCharInfo
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 CharInfoClassName              ( CPF_Parm | CPF_NeedCtorLink )

bool ATGBioZombiePawn::SetCharInfo ( struct FString CharInfoClassName )
{
	static UFunction* pFnSetCharInfo = NULL;

	if ( ! pFnSetCharInfo )
		pFnSetCharInfo = (UFunction*) UObject::GObjObjects()->Data[ 219520 ];

	ATGBioZombiePawn_execSetCharInfo_Parms SetCharInfo_Parms;
	memcpy ( &SetCharInfo_Parms.CharInfoClassName, &CharInfoClassName, 0xC );

	this->ProcessEvent ( pFnSetCharInfo, &SetCharInfo_Parms, NULL );

	return SetCharInfo_Parms.ReturnValue;
};

// Function TGBioGame.TGBioZombiePawn.LoadBioCharInfo
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioZombiePawn::LoadBioCharInfo ( )
{
	static UFunction* pFnLoadBioCharInfo = NULL;

	if ( ! pFnLoadBioCharInfo )
		pFnLoadBioCharInfo = (UFunction*) UObject::GObjObjects()->Data[ 219513 ];

	ATGBioZombiePawn_execLoadBioCharInfo_Parms LoadBioCharInfo_Parms;

	this->ProcessEvent ( pFnLoadBioCharInfo, &LoadBioCharInfo_Parms, NULL );

	return LoadBioCharInfo_Parms.ReturnValue;
};

// Function TGBioGame.TGBioZombiePawn.WaitGRIToLoadBioCharInfo
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::WaitGRIToLoadBioCharInfo ( )
{
	static UFunction* pFnWaitGRIToLoadBioCharInfo = NULL;

	if ( ! pFnWaitGRIToLoadBioCharInfo )
		pFnWaitGRIToLoadBioCharInfo = (UFunction*) UObject::GObjObjects()->Data[ 219512 ];

	ATGBioZombiePawn_execWaitGRIToLoadBioCharInfo_Parms WaitGRIToLoadBioCharInfo_Parms;

	this->ProcessEvent ( pFnWaitGRIToLoadBioCharInfo, &WaitGRIToLoadBioCharInfo_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.LoadThirdPersonCharInfo
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UBioCharInfo*            CharInfo                       ( CPF_Parm )
// unsigned long                  bimmediateSetMat               ( CPF_OptionalParm | CPF_Parm )

bool ATGBioZombiePawn::LoadThirdPersonCharInfo ( class UBioCharInfo* CharInfo, unsigned long bimmediateSetMat )
{
	static UFunction* pFnLoadThirdPersonCharInfo = NULL;

	if ( ! pFnLoadThirdPersonCharInfo )
		pFnLoadThirdPersonCharInfo = (UFunction*) UObject::GObjObjects()->Data[ 219499 ];

	ATGBioZombiePawn_execLoadThirdPersonCharInfo_Parms LoadThirdPersonCharInfo_Parms;
	LoadThirdPersonCharInfo_Parms.CharInfo = CharInfo;
	LoadThirdPersonCharInfo_Parms.bimmediateSetMat = bimmediateSetMat;

	this->ProcessEvent ( pFnLoadThirdPersonCharInfo, &LoadThirdPersonCharInfo_Parms, NULL );

	return LoadThirdPersonCharInfo_Parms.ReturnValue;
};

// Function TGBioGame.TGBioZombiePawn.TimeWeaponComponent
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::TimeWeaponComponent ( )
{
	static UFunction* pFnTimeWeaponComponent = NULL;

	if ( ! pFnTimeWeaponComponent )
		pFnTimeWeaponComponent = (UFunction*) UObject::GObjObjects()->Data[ 219495 ];

	ATGBioZombiePawn_execTimeWeaponComponent_Parms TimeWeaponComponent_Parms;

	this->ProcessEvent ( pFnTimeWeaponComponent, &TimeWeaponComponent_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.LoadFirstPersonCharInfo
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UBioCharInfo*            CharInfo                       ( CPF_Parm )
// unsigned long                  bimmediateSetMat               ( CPF_OptionalParm | CPF_Parm )

bool ATGBioZombiePawn::LoadFirstPersonCharInfo ( class UBioCharInfo* CharInfo, unsigned long bimmediateSetMat )
{
	static UFunction* pFnLoadFirstPersonCharInfo = NULL;

	if ( ! pFnLoadFirstPersonCharInfo )
		pFnLoadFirstPersonCharInfo = (UFunction*) UObject::GObjObjects()->Data[ 219483 ];

	ATGBioZombiePawn_execLoadFirstPersonCharInfo_Parms LoadFirstPersonCharInfo_Parms;
	LoadFirstPersonCharInfo_Parms.CharInfo = CharInfo;
	LoadFirstPersonCharInfo_Parms.bimmediateSetMat = bimmediateSetMat;

	this->ProcessEvent ( pFnLoadFirstPersonCharInfo, &LoadFirstPersonCharInfo_Parms, NULL );

	return LoadFirstPersonCharInfo_Parms.ReturnValue;
};

// Function TGBioGame.TGBioZombiePawn.GotZPoint
// [0x00020002] 
// Parameters infos:
// int                            GotPoint                       ( CPF_Parm )

void ATGBioZombiePawn::GotZPoint ( int GotPoint )
{
	static UFunction* pFnGotZPoint = NULL;

	if ( ! pFnGotZPoint )
		pFnGotZPoint = (UFunction*) UObject::GObjObjects()->Data[ 219478 ];

	ATGBioZombiePawn_execGotZPoint_Parms GotZPoint_Parms;
	GotZPoint_Parms.GotPoint = GotPoint;

	this->ProcessEvent ( pFnGotZPoint, &GotZPoint_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayDying
// [0x00024102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLoc                         ( CPF_Parm )
// unsigned char                  DeathDir                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_OptionalParm | CPF_Parm )

void ATGBioZombiePawn::PlayDying ( class UClass* DamageType, struct FVector HitLoc, unsigned char DeathDir, unsigned char HitGroup )
{
	static UFunction* pFnPlayDying = NULL;

	if ( ! pFnPlayDying )
		pFnPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 219454 ];

	ATGBioZombiePawn_execPlayDying_Parms PlayDying_Parms;
	PlayDying_Parms.DamageType = DamageType;
	memcpy ( &PlayDying_Parms.HitLoc, &HitLoc, 0xC );
	PlayDying_Parms.DeathDir = DeathDir;
	PlayDying_Parms.HitGroup = HitGroup;

	this->ProcessEvent ( pFnPlayDying, &PlayDying_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayDiedLocalAnim
// [0x00024102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// unsigned char                  DeathDir                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_OptionalParm | CPF_Parm )

void ATGBioZombiePawn::PlayDiedLocalAnim ( class UClass* DamageType, unsigned char DeathDir, unsigned char HitGroup )
{
	static UFunction* pFnPlayDiedLocalAnim = NULL;

	if ( ! pFnPlayDiedLocalAnim )
		pFnPlayDiedLocalAnim = (UFunction*) UObject::GObjObjects()->Data[ 219449 ];

	ATGBioZombiePawn_execPlayDiedLocalAnim_Parms PlayDiedLocalAnim_Parms;
	PlayDiedLocalAnim_Parms.DamageType = DamageType;
	PlayDiedLocalAnim_Parms.DeathDir = DeathDir;
	PlayDiedLocalAnim_Parms.HitGroup = HitGroup;

	this->ProcessEvent ( pFnPlayDiedLocalAnim, &PlayDiedLocalAnim_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayDiedAnim
// [0x00024102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// unsigned char                  DeathDir                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_OptionalParm | CPF_Parm )

void ATGBioZombiePawn::PlayDiedAnim ( class UClass* DamageType, unsigned char DeathDir, unsigned char HitGroup )
{
	static UFunction* pFnPlayDiedAnim = NULL;

	if ( ! pFnPlayDiedAnim )
		pFnPlayDiedAnim = (UFunction*) UObject::GObjObjects()->Data[ 219444 ];

	ATGBioZombiePawn_execPlayDiedAnim_Parms PlayDiedAnim_Parms;
	PlayDiedAnim_Parms.DamageType = DamageType;
	PlayDiedAnim_Parms.DeathDir = DeathDir;
	PlayDiedAnim_Parms.HitGroup = HitGroup;

	this->ProcessEvent ( pFnPlayDiedAnim, &PlayDiedAnim_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.DoJump
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bUpdating                      ( CPF_Parm )

bool ATGBioZombiePawn::DoJump ( unsigned long bUpdating )
{
	static UFunction* pFnDoJump = NULL;

	if ( ! pFnDoJump )
		pFnDoJump = (UFunction*) UObject::GObjObjects()->Data[ 219441 ];

	ATGBioZombiePawn_execDoJump_Parms DoJump_Parms;
	DoJump_Parms.bUpdating = bUpdating;

	this->ProcessEvent ( pFnDoJump, &DoJump_Parms, NULL );

	return DoJump_Parms.ReturnValue;
};

// Function TGBioGame.TGBioZombiePawn.UpdateGameSettingOption
// [0x00020102] 
// Parameters infos:
// unsigned long                  IsUpdateLight                  ( CPF_Parm )

void ATGBioZombiePawn::UpdateGameSettingOption ( unsigned long IsUpdateLight )
{
	static UFunction* pFnUpdateGameSettingOption = NULL;

	if ( ! pFnUpdateGameSettingOption )
		pFnUpdateGameSettingOption = (UFunction*) UObject::GObjObjects()->Data[ 219439 ];

	ATGBioZombiePawn_execUpdateGameSettingOption_Parms UpdateGameSettingOption_Parms;
	UpdateGameSettingOption_Parms.IsUpdateLight = IsUpdateLight;

	this->ProcessEvent ( pFnUpdateGameSettingOption, &UpdateGameSettingOption_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.NotifyTeamChanged
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::NotifyTeamChanged ( )
{
	static UFunction* pFnNotifyTeamChanged = NULL;

	if ( ! pFnNotifyTeamChanged )
		pFnNotifyTeamChanged = (UFunction*) UObject::GObjObjects()->Data[ 219436 ];

	ATGBioZombiePawn_execNotifyTeamChanged_Parms NotifyTeamChanged_Parms;

	this->ProcessEvent ( pFnNotifyTeamChanged, &NotifyTeamChanged_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.Died
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// unsigned char                  DeathDir                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_OptionalParm | CPF_Parm )

bool ATGBioZombiePawn::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation, unsigned char DeathDir, unsigned char HitGroup )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 219424 ];

	ATGBioZombiePawn_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );
	Died_Parms.DeathDir = DeathDir;
	Died_Parms.HitGroup = HitGroup;

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function TGBioGame.TGBioZombiePawn.FilterZombieKilledWeaponNoRevive
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGBioPlayerController*  PC                             ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

bool ATGBioZombiePawn::FilterZombieKilledWeaponNoRevive ( class ATGBioPlayerController* PC, class UClass* DamageType )
{
	static UFunction* pFnFilterZombieKilledWeaponNoRevive = NULL;

	if ( ! pFnFilterZombieKilledWeaponNoRevive )
		pFnFilterZombieKilledWeaponNoRevive = (UFunction*) UObject::GObjObjects()->Data[ 219416 ];

	ATGBioZombiePawn_execFilterZombieKilledWeaponNoRevive_Parms FilterZombieKilledWeaponNoRevive_Parms;
	FilterZombieKilledWeaponNoRevive_Parms.PC = PC;
	FilterZombieKilledWeaponNoRevive_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnFilterZombieKilledWeaponNoRevive, &FilterZombieKilledWeaponNoRevive_Parms, NULL );

	return FilterZombieKilledWeaponNoRevive_Parms.ReturnValue;
};

// Function TGBioGame.TGBioZombiePawn.PossessedBy
// [0x00020002] 
// Parameters infos:
// class AController*             C                              ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void ATGBioZombiePawn::PossessedBy ( class AController* C, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossessedBy = NULL;

	if ( ! pFnPossessedBy )
		pFnPossessedBy = (UFunction*) UObject::GObjObjects()->Data[ 219413 ];

	ATGBioZombiePawn_execPossessedBy_Parms PossessedBy_Parms;
	PossessedBy_Parms.C = C;
	PossessedBy_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossessedBy, &PossessedBy_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.ZombieWeaponSet
// [0x010201C2] 
// Parameters infos:

void ATGBioZombiePawn::ZombieWeaponSet ( )
{
	static UFunction* pFnZombieWeaponSet = NULL;

	if ( ! pFnZombieWeaponSet )
		pFnZombieWeaponSet = (UFunction*) UObject::GObjObjects()->Data[ 219412 ];

	ATGBioZombiePawn_execZombieWeaponSet_Parms ZombieWeaponSet_Parms;

	this->ProcessEvent ( pFnZombieWeaponSet, &ZombieWeaponSet_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PendingBioWeaponSetTimer
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::PendingBioWeaponSetTimer ( )
{
	static UFunction* pFnPendingBioWeaponSetTimer = NULL;

	if ( ! pFnPendingBioWeaponSetTimer )
		pFnPendingBioWeaponSetTimer = (UFunction*) UObject::GObjObjects()->Data[ 219411 ];

	ATGBioZombiePawn_execPendingBioWeaponSetTimer_Parms PendingBioWeaponSetTimer_Parms;

	this->ProcessEvent ( pFnPendingBioWeaponSetTimer, &PendingBioWeaponSetTimer_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.SetBodyMaterialScalarParameterValue
// [0x00020102] 
// Parameters infos:
// struct FName                   ParameterName                  ( CPF_Parm )
// float                          Value                          ( CPF_Parm )

void ATGBioZombiePawn::SetBodyMaterialScalarParameterValue ( struct FName ParameterName, float Value )
{
	static UFunction* pFnSetBodyMaterialScalarParameterValue = NULL;

	if ( ! pFnSetBodyMaterialScalarParameterValue )
		pFnSetBodyMaterialScalarParameterValue = (UFunction*) UObject::GObjObjects()->Data[ 219407 ];

	ATGBioZombiePawn_execSetBodyMaterialScalarParameterValue_Parms SetBodyMaterialScalarParameterValue_Parms;
	memcpy ( &SetBodyMaterialScalarParameterValue_Parms.ParameterName, &ParameterName, 0x8 );
	SetBodyMaterialScalarParameterValue_Parms.Value = Value;

	this->ProcessEvent ( pFnSetBodyMaterialScalarParameterValue, &SetBodyMaterialScalarParameterValue_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.SetArmsMaterialScalarParameterValue
// [0x00020102] 
// Parameters infos:
// struct FName                   ParameterName                  ( CPF_Parm )
// float                          Value                          ( CPF_Parm )

void ATGBioZombiePawn::SetArmsMaterialScalarParameterValue ( struct FName ParameterName, float Value )
{
	static UFunction* pFnSetArmsMaterialScalarParameterValue = NULL;

	if ( ! pFnSetArmsMaterialScalarParameterValue )
		pFnSetArmsMaterialScalarParameterValue = (UFunction*) UObject::GObjObjects()->Data[ 219403 ];

	ATGBioZombiePawn_execSetArmsMaterialScalarParameterValue_Parms SetArmsMaterialScalarParameterValue_Parms;
	memcpy ( &SetArmsMaterialScalarParameterValue_Parms.ParameterName, &ParameterName, 0x8 );
	SetArmsMaterialScalarParameterValue_Parms.Value = Value;

	this->ProcessEvent ( pFnSetArmsMaterialScalarParameterValue, &SetArmsMaterialScalarParameterValue_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.VerifyArmsMaterialInstance
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::VerifyArmsMaterialInstance ( )
{
	static UFunction* pFnVerifyArmsMaterialInstance = NULL;

	if ( ! pFnVerifyArmsMaterialInstance )
		pFnVerifyArmsMaterialInstance = (UFunction*) UObject::GObjObjects()->Data[ 219401 ];

	ATGBioZombiePawn_execVerifyArmsMaterialInstance_Parms VerifyArmsMaterialInstance_Parms;

	this->ProcessEvent ( pFnVerifyArmsMaterialInstance, &VerifyArmsMaterialInstance_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.AdjustDamage
// [0x00420002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )
// int                            InDamage                       ( CPF_Parm | CPF_OutParm )
// struct FVector                 Momentum                       ( CPF_Parm | CPF_OutParm )
// class UClass*                  DamageType                     ( CPF_Parm | CPF_OutParm )

void ATGBioZombiePawn::AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, int* InDamage, struct FVector* Momentum, class UClass** DamageType )
{
	static UFunction* pFnAdjustDamage = NULL;

	if ( ! pFnAdjustDamage )
		pFnAdjustDamage = (UFunction*) UObject::GObjObjects()->Data[ 219393 ];

	ATGBioZombiePawn_execAdjustDamage_Parms AdjustDamage_Parms;
	AdjustDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &AdjustDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &AdjustDamage_Parms.HitInfo, &HitInfo, 0x20 );
	AdjustDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnAdjustDamage, &AdjustDamage_Parms, NULL );

	if ( InDamage )
		*InDamage = AdjustDamage_Parms.InDamage;

	if ( Momentum )
		memcpy ( Momentum, &AdjustDamage_Parms.Momentum, 0xC );

	if ( DamageType )
		*DamageType = AdjustDamage_Parms.DamageType;
};

// Function TGBioGame.TGBioZombiePawn.BioZombieBasePostPossess
// [0x00020002] 
// Parameters infos:
// unsigned long                  Open                           ( CPF_Parm )

void ATGBioZombiePawn::BioZombieBasePostPossess ( unsigned long Open )
{
	static UFunction* pFnBioZombieBasePostPossess = NULL;

	if ( ! pFnBioZombieBasePostPossess )
		pFnBioZombieBasePostPossess = (UFunction*) UObject::GObjObjects()->Data[ 219390 ];

	ATGBioZombiePawn_execBioZombieBasePostPossess_Parms BioZombieBasePostPossess_Parms;
	BioZombieBasePostPossess_Parms.Open = Open;

	this->ProcessEvent ( pFnBioZombieBasePostPossess, &BioZombieBasePostPossess_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.DelayedPermanentDeath
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::DelayedPermanentDeath ( )
{
	static UFunction* pFnDelayedPermanentDeath = NULL;

	if ( ! pFnDelayedPermanentDeath )
		pFnDelayedPermanentDeath = (UFunction*) UObject::GObjObjects()->Data[ 219389 ];

	ATGBioZombiePawn_execDelayedPermanentDeath_Parms DelayedPermanentDeath_Parms;

	this->ProcessEvent ( pFnDelayedPermanentDeath, &DelayedPermanentDeath_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.ProcessPermanentDeath
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::ProcessPermanentDeath ( )
{
	static UFunction* pFnProcessPermanentDeath = NULL;

	if ( ! pFnProcessPermanentDeath )
		pFnProcessPermanentDeath = (UFunction*) UObject::GObjObjects()->Data[ 219388 ];

	ATGBioZombiePawn_execProcessPermanentDeath_Parms ProcessPermanentDeath_Parms;

	this->ProcessEvent ( pFnProcessPermanentDeath, &ProcessPermanentDeath_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGBioZombiePawn::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 219386 ];

	ATGBioZombiePawn_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.CheckWeaponByControllerRep
// [0x00020102] 
// Parameters infos:

void ATGBioZombiePawn::CheckWeaponByControllerRep ( )
{
	static UFunction* pFnCheckWeaponByControllerRep = NULL;

	if ( ! pFnCheckWeaponByControllerRep )
		pFnCheckWeaponByControllerRep = (UFunction*) UObject::GObjObjects()->Data[ 219385 ];

	ATGBioZombiePawn_execCheckWeaponByControllerRep_Parms CheckWeaponByControllerRep_Parms;

	this->ProcessEvent ( pFnCheckWeaponByControllerRep, &CheckWeaponByControllerRep_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.ThrowWeaponOnDeath
// [0x00020000] 
// Parameters infos:

void ATGBioZombiePawn::ThrowWeaponOnDeath ( )
{
	static UFunction* pFnThrowWeaponOnDeath = NULL;

	if ( ! pFnThrowWeaponOnDeath )
		pFnThrowWeaponOnDeath = (UFunction*) UObject::GObjObjects()->Data[ 219384 ];

	ATGBioZombiePawn_execThrowWeaponOnDeath_Parms ThrowWeaponOnDeath_Parms;

	this->ProcessEvent ( pFnThrowWeaponOnDeath, &ThrowWeaponOnDeath_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.CalcDamageSlowdown
// [0x00020002] 
// Parameters infos:

void ATGBioZombiePawn::CalcDamageSlowdown ( )
{
	static UFunction* pFnCalcDamageSlowdown = NULL;

	if ( ! pFnCalcDamageSlowdown )
		pFnCalcDamageSlowdown = (UFunction*) UObject::GObjObjects()->Data[ 219383 ];

	ATGBioZombiePawn_execCalcDamageSlowdown_Parms CalcDamageSlowdown_Parms;

	this->ProcessEvent ( pFnCalcDamageSlowdown, &CalcDamageSlowdown_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.ResetBufferSlomoValue
// [0x00020002] 
// Parameters infos:

void ATGBioZombiePawn::ResetBufferSlomoValue ( )
{
	static UFunction* pFnResetBufferSlomoValue = NULL;

	if ( ! pFnResetBufferSlomoValue )
		pFnResetBufferSlomoValue = (UFunction*) UObject::GObjObjects()->Data[ 219382 ];

	ATGBioZombiePawn_execResetBufferSlomoValue_Parms ResetBufferSlomoValue_Parms;

	this->ProcessEvent ( pFnResetBufferSlomoValue, &ResetBufferSlomoValue_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.GetBaseHealthMaxByNumValidPlayers
// [0x00020000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ATGBioZombiePawn::GetBaseHealthMaxByNumValidPlayers ( )
{
	static UFunction* pFnGetBaseHealthMaxByNumValidPlayers = NULL;

	if ( ! pFnGetBaseHealthMaxByNumValidPlayers )
		pFnGetBaseHealthMaxByNumValidPlayers = (UFunction*) UObject::GObjObjects()->Data[ 219380 ];

	ATGBioZombiePawn_execGetBaseHealthMaxByNumValidPlayers_Parms GetBaseHealthMaxByNumValidPlayers_Parms;

	this->ProcessEvent ( pFnGetBaseHealthMaxByNumValidPlayers, &GetBaseHealthMaxByNumValidPlayers_Parms, NULL );

	return GetBaseHealthMaxByNumValidPlayers_Parms.ReturnValue;
};

// Function TGBioGame.TGBioZombiePawn.AntitoxicLevelAdd
// [0x00020000] 
// Parameters infos:

void ATGBioZombiePawn::AntitoxicLevelAdd ( )
{
	static UFunction* pFnAntitoxicLevelAdd = NULL;

	if ( ! pFnAntitoxicLevelAdd )
		pFnAntitoxicLevelAdd = (UFunction*) UObject::GObjObjects()->Data[ 219379 ];

	ATGBioZombiePawn_execAntitoxicLevelAdd_Parms AntitoxicLevelAdd_Parms;

	this->ProcessEvent ( pFnAntitoxicLevelAdd, &AntitoxicLevelAdd_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.SetLevelInfo
// [0x00020000] 
// Parameters infos:
// struct FZombieChangeNecessity  ZombieChange                   ( CPF_Parm )

void ATGBioZombiePawn::SetLevelInfo ( struct FZombieChangeNecessity ZombieChange )
{
	static UFunction* pFnSetLevelInfo = NULL;

	if ( ! pFnSetLevelInfo )
		pFnSetLevelInfo = (UFunction*) UObject::GObjObjects()->Data[ 219377 ];

	ATGBioZombiePawn_execSetLevelInfo_Parms SetLevelInfo_Parms;
	memcpy ( &SetLevelInfo_Parms.ZombieChange, &ZombieChange, 0x14 );

	this->ProcessEvent ( pFnSetLevelInfo, &SetLevelInfo_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.TakeDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ATGBioZombiePawn::eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 219364 ];

	ATGBioZombiePawn_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.Damage = Damage;
	TakeDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x20 );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.AddZombieDamageFeedback
// [0x010201C2] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm )

void ATGBioZombiePawn::AddZombieDamageFeedback ( int Damage )
{
	static UFunction* pFnAddZombieDamageFeedback = NULL;

	if ( ! pFnAddZombieDamageFeedback )
		pFnAddZombieDamageFeedback = (UFunction*) UObject::GObjObjects()->Data[ 219360 ];

	ATGBioZombiePawn_execAddZombieDamageFeedback_Parms AddZombieDamageFeedback_Parms;
	AddZombieDamageFeedback_Parms.Damage = Damage;

	this->ProcessEvent ( pFnAddZombieDamageFeedback, &AddZombieDamageFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.AddDamageValue
// [0x00020002] 
// Parameters infos:
// int                            iDamage                        ( CPF_Parm )

void ATGBioZombiePawn::AddDamageValue ( int iDamage )
{
	static UFunction* pFnAddDamageValue = NULL;

	if ( ! pFnAddDamageValue )
		pFnAddDamageValue = (UFunction*) UObject::GObjObjects()->Data[ 219357 ];

	ATGBioZombiePawn_execAddDamageValue_Parms AddDamageValue_Parms;
	AddDamageValue_Parms.iDamage = iDamage;

	this->ProcessEvent ( pFnAddDamageValue, &AddDamageValue_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PlayTakeHitSound
// [0x00020102] 
// Parameters infos:
// unsigned char                  Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void ATGBioZombiePawn::PlayTakeHitSound ( unsigned char Damage, class UClass* DamageType )
{
	static UFunction* pFnPlayTakeHitSound = NULL;

	if ( ! pFnPlayTakeHitSound )
		pFnPlayTakeHitSound = (UFunction*) UObject::GObjObjects()->Data[ 219354 ];

	ATGBioZombiePawn_execPlayTakeHitSound_Parms PlayTakeHitSound_Parms;
	PlayTakeHitSound_Parms.Damage = Damage;
	PlayTakeHitSound_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnPlayTakeHitSound, &PlayTakeHitSound_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.ServerTakeDamage
// [0x00024002] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ATGBioZombiePawn::ServerTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnServerTakeDamage = NULL;

	if ( ! pFnServerTakeDamage )
		pFnServerTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 219345 ];

	ATGBioZombiePawn_execServerTakeDamage_Parms ServerTakeDamage_Parms;
	ServerTakeDamage_Parms.Damage = Damage;
	ServerTakeDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &ServerTakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ServerTakeDamage_Parms.Momentum, &Momentum, 0xC );
	ServerTakeDamage_Parms.DamageType = DamageType;
	memcpy ( &ServerTakeDamage_Parms.HitInfo, &HitInfo, 0x20 );
	ServerTakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnServerTakeDamage, &ServerTakeDamage_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.Changebag
// [0x002200C0] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  T                              ( CPF_Parm )

bool ATGBioZombiePawn::Changebag ( unsigned char T )
{
	static UFunction* pFnChangebag = NULL;

	if ( ! pFnChangebag )
		pFnChangebag = (UFunction*) UObject::GObjObjects()->Data[ 219342 ];

	ATGBioZombiePawn_execChangebag_Parms Changebag_Parms;
	Changebag_Parms.T = T;

	this->ProcessEvent ( pFnChangebag, &Changebag_Parms, NULL );

	return Changebag_Parms.ReturnValue;
};

// Function TGBioGame.TGBioZombiePawn.IsInHomeZone
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioZombiePawn::IsInHomeZone ( )
{
	static UFunction* pFnIsInHomeZone = NULL;

	if ( ! pFnIsInHomeZone )
		pFnIsInHomeZone = (UFunction*) UObject::GObjObjects()->Data[ 219340 ];

	ATGBioZombiePawn_execIsInHomeZone_Parms IsInHomeZone_Parms;

	this->ProcessEvent ( pFnIsInHomeZone, &IsInHomeZone_Parms, NULL );

	return IsInHomeZone_Parms.ReturnValue;
};

// Function TGBioGame.TGBioZombiePawn.UpdateAnimTreeForZombieDataChange
// [0x00020102] 
// Parameters infos:
// class UBioCharInfo*            CharInfo                       ( CPF_Parm )

void ATGBioZombiePawn::UpdateAnimTreeForZombieDataChange ( class UBioCharInfo* CharInfo )
{
	static UFunction* pFnUpdateAnimTreeForZombieDataChange = NULL;

	if ( ! pFnUpdateAnimTreeForZombieDataChange )
		pFnUpdateAnimTreeForZombieDataChange = (UFunction*) UObject::GObjObjects()->Data[ 219338 ];

	ATGBioZombiePawn_execUpdateAnimTreeForZombieDataChange_Parms UpdateAnimTreeForZombieDataChange_Parms;
	UpdateAnimTreeForZombieDataChange_Parms.CharInfo = CharInfo;

	this->ProcessEvent ( pFnUpdateAnimTreeForZombieDataChange, &UpdateAnimTreeForZombieDataChange_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class USkeletalMeshComponent*  SkelComp                       ( CPF_Parm | CPF_EditInline )

void ATGBioZombiePawn::eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp )
{
	static UFunction* pFnPostInitAnimTree = NULL;

	if ( ! pFnPostInitAnimTree )
		pFnPostInitAnimTree = (UFunction*) UObject::GObjObjects()->Data[ 219336 ];

	ATGBioZombiePawn_eventPostInitAnimTree_Parms PostInitAnimTree_Parms;
	PostInitAnimTree_Parms.SkelComp = SkelComp;

	this->ProcessEvent ( pFnPostInitAnimTree, &PostInitAnimTree_Parms, NULL );
};

// Function TGBioGame.TGBioZombiePawn.ResetZombiePawnSimulateGravity
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bGravity                       ( CPF_Parm )

void ATGBioZombiePawn::ResetZombiePawnSimulateGravity ( unsigned long bGravity )
{
	static UFunction* pFnResetZombiePawnSimulateGravity = NULL;

	if ( ! pFnResetZombiePawnSimulateGravity )
		pFnResetZombiePawnSimulateGravity = (UFunction*) UObject::GObjObjects()->Data[ 219334 ];

	ATGBioZombiePawn_execResetZombiePawnSimulateGravity_Parms ResetZombiePawnSimulateGravity_Parms;
	ResetZombiePawnSimulateGravity_Parms.bGravity = bGravity;

	pFnResetZombiePawnSimulateGravity->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetZombiePawnSimulateGravity, &ResetZombiePawnSimulateGravity_Parms, NULL );

	pFnResetZombiePawnSimulateGravity->FunctionFlags |= 0x400;
};

// Function TGBioGame.TGBioHostZombie.SleepRelivePhysics
// [0x00020102] 
// Parameters infos:

void ATGBioHostZombie::SleepRelivePhysics ( )
{
	static UFunction* pFnSleepRelivePhysics = NULL;

	if ( ! pFnSleepRelivePhysics )
		pFnSleepRelivePhysics = (UFunction*) UObject::GObjObjects()->Data[ 219780 ];

	ATGBioHostZombie_execSleepRelivePhysics_Parms SleepRelivePhysics_Parms;

	this->ProcessEvent ( pFnSleepRelivePhysics, &SleepRelivePhysics_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.DoingDeathRelivePhysics
// [0x00020102] 
// Parameters infos:

void ATGBioHostZombie::DoingDeathRelivePhysics ( )
{
	static UFunction* pFnDoingDeathRelivePhysics = NULL;

	if ( ! pFnDoingDeathRelivePhysics )
		pFnDoingDeathRelivePhysics = (UFunction*) UObject::GObjObjects()->Data[ 219777 ];

	ATGBioHostZombie_execDoingDeathRelivePhysics_Parms DoingDeathRelivePhysics_Parms;

	this->ProcessEvent ( pFnDoingDeathRelivePhysics, &DoingDeathRelivePhysics_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.PlayChangeZombieEffect
// [0x00020102] 
// Parameters infos:

void ATGBioHostZombie::PlayChangeZombieEffect ( )
{
	static UFunction* pFnPlayChangeZombieEffect = NULL;

	if ( ! pFnPlayChangeZombieEffect )
		pFnPlayChangeZombieEffect = (UFunction*) UObject::GObjObjects()->Data[ 219776 ];

	ATGBioHostZombie_execPlayChangeZombieEffect_Parms PlayChangeZombieEffect_Parms;

	this->ProcessEvent ( pFnPlayChangeZombieEffect, &PlayChangeZombieEffect_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.PlayLevelUpSound
// [0x00020102] 
// Parameters infos:

void ATGBioHostZombie::PlayLevelUpSound ( )
{
	static UFunction* pFnPlayLevelUpSound = NULL;

	if ( ! pFnPlayLevelUpSound )
		pFnPlayLevelUpSound = (UFunction*) UObject::GObjObjects()->Data[ 219774 ];

	ATGBioHostZombie_execPlayLevelUpSound_Parms PlayLevelUpSound_Parms;

	this->ProcessEvent ( pFnPlayLevelUpSound, &PlayLevelUpSound_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.PlayLevelUpEffect
// [0x00020102] 
// Parameters infos:

void ATGBioHostZombie::PlayLevelUpEffect ( )
{
	static UFunction* pFnPlayLevelUpEffect = NULL;

	if ( ! pFnPlayLevelUpEffect )
		pFnPlayLevelUpEffect = (UFunction*) UObject::GObjObjects()->Data[ 219773 ];

	ATGBioHostZombie_execPlayLevelUpEffect_Parms PlayLevelUpEffect_Parms;

	this->ProcessEvent ( pFnPlayLevelUpEffect, &PlayLevelUpEffect_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.LvParticleEffect
// [0x00020102] 
// Parameters infos:
// int                            Level                          ( CPF_Parm )

void ATGBioHostZombie::LvParticleEffect ( int Level )
{
	static UFunction* pFnLvParticleEffect = NULL;

	if ( ! pFnLvParticleEffect )
		pFnLvParticleEffect = (UFunction*) UObject::GObjObjects()->Data[ 219770 ];

	ATGBioHostZombie_execLvParticleEffect_Parms LvParticleEffect_Parms;
	LvParticleEffect_Parms.Level = Level;

	this->ProcessEvent ( pFnLvParticleEffect, &LvParticleEffect_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.Died
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// unsigned char                  DeathDir                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_OptionalParm | CPF_Parm )

bool ATGBioHostZombie::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation, unsigned char DeathDir, unsigned char HitGroup )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 219759 ];

	ATGBioHostZombie_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );
	Died_Parms.DeathDir = DeathDir;
	Died_Parms.HitGroup = HitGroup;

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function TGBioGame.TGBioHostZombie.CancelAbsoreZombieDeadBody
// [0x00020100] 
// Parameters infos:

void ATGBioHostZombie::CancelAbsoreZombieDeadBody ( )
{
	static UFunction* pFnCancelAbsoreZombieDeadBody = NULL;

	if ( ! pFnCancelAbsoreZombieDeadBody )
		pFnCancelAbsoreZombieDeadBody = (UFunction*) UObject::GObjObjects()->Data[ 219738 ];

	ATGBioHostZombie_execCancelAbsoreZombieDeadBody_Parms CancelAbsoreZombieDeadBody_Parms;

	this->ProcessEvent ( pFnCancelAbsoreZombieDeadBody, &CancelAbsoreZombieDeadBody_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.ServerStopAbsoreZombieDeadBody
// [0x002200C2] 
// Parameters infos:

void ATGBioHostZombie::ServerStopAbsoreZombieDeadBody ( )
{
	static UFunction* pFnServerStopAbsoreZombieDeadBody = NULL;

	if ( ! pFnServerStopAbsoreZombieDeadBody )
		pFnServerStopAbsoreZombieDeadBody = (UFunction*) UObject::GObjObjects()->Data[ 219737 ];

	ATGBioHostZombie_execServerStopAbsoreZombieDeadBody_Parms ServerStopAbsoreZombieDeadBody_Parms;

	this->ProcessEvent ( pFnServerStopAbsoreZombieDeadBody, &ServerStopAbsoreZombieDeadBody_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.StopAbsoreZombieDeadBody
// [0x00020102] 
// Parameters infos:

void ATGBioHostZombie::StopAbsoreZombieDeadBody ( )
{
	static UFunction* pFnStopAbsoreZombieDeadBody = NULL;

	if ( ! pFnStopAbsoreZombieDeadBody )
		pFnStopAbsoreZombieDeadBody = (UFunction*) UObject::GObjObjects()->Data[ 219736 ];

	ATGBioHostZombie_execStopAbsoreZombieDeadBody_Parms StopAbsoreZombieDeadBody_Parms;

	this->ProcessEvent ( pFnStopAbsoreZombieDeadBody, &StopAbsoreZombieDeadBody_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.ClientPerformAsboreZombieDeadBody
// [0x010201C2] 
// Parameters infos:
// class ATGBioZombiePawn*        AbsoreBodyPawn                 ( CPF_Parm )

void ATGBioHostZombie::ClientPerformAsboreZombieDeadBody ( class ATGBioZombiePawn* AbsoreBodyPawn )
{
	static UFunction* pFnClientPerformAsboreZombieDeadBody = NULL;

	if ( ! pFnClientPerformAsboreZombieDeadBody )
		pFnClientPerformAsboreZombieDeadBody = (UFunction*) UObject::GObjObjects()->Data[ 219734 ];

	ATGBioHostZombie_execClientPerformAsboreZombieDeadBody_Parms ClientPerformAsboreZombieDeadBody_Parms;
	ClientPerformAsboreZombieDeadBody_Parms.AbsoreBodyPawn = AbsoreBodyPawn;

	this->ProcessEvent ( pFnClientPerformAsboreZombieDeadBody, &ClientPerformAsboreZombieDeadBody_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.ServerPerformAsboreZombieDeadBody
// [0x002200C2] 
// Parameters infos:
// class ATGBioZombiePawn*        AbsoreBodyPawn                 ( CPF_Parm )

void ATGBioHostZombie::ServerPerformAsboreZombieDeadBody ( class ATGBioZombiePawn* AbsoreBodyPawn )
{
	static UFunction* pFnServerPerformAsboreZombieDeadBody = NULL;

	if ( ! pFnServerPerformAsboreZombieDeadBody )
		pFnServerPerformAsboreZombieDeadBody = (UFunction*) UObject::GObjObjects()->Data[ 219728 ];

	ATGBioHostZombie_execServerPerformAsboreZombieDeadBody_Parms ServerPerformAsboreZombieDeadBody_Parms;
	ServerPerformAsboreZombieDeadBody_Parms.AbsoreBodyPawn = AbsoreBodyPawn;

	this->ProcessEvent ( pFnServerPerformAsboreZombieDeadBody, &ServerPerformAsboreZombieDeadBody_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.StartAbsoreZombieDeadBody
// [0x00020102] 
// Parameters infos:

void ATGBioHostZombie::StartAbsoreZombieDeadBody ( )
{
	static UFunction* pFnStartAbsoreZombieDeadBody = NULL;

	if ( ! pFnStartAbsoreZombieDeadBody )
		pFnStartAbsoreZombieDeadBody = (UFunction*) UObject::GObjObjects()->Data[ 219725 ];

	ATGBioHostZombie_execStartAbsoreZombieDeadBody_Parms StartAbsoreZombieDeadBody_Parms;

	this->ProcessEvent ( pFnStartAbsoreZombieDeadBody, &StartAbsoreZombieDeadBody_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.PerformAsboreZombieDeadBody
// [0x00020102] 
// Parameters infos:
// class ATGBioZombiePawn*        ObjPawn                        ( CPF_Parm )

void ATGBioHostZombie::PerformAsboreZombieDeadBody ( class ATGBioZombiePawn* ObjPawn )
{
	static UFunction* pFnPerformAsboreZombieDeadBody = NULL;

	if ( ! pFnPerformAsboreZombieDeadBody )
		pFnPerformAsboreZombieDeadBody = (UFunction*) UObject::GObjObjects()->Data[ 219723 ];

	ATGBioHostZombie_execPerformAsboreZombieDeadBody_Parms PerformAsboreZombieDeadBody_Parms;
	PerformAsboreZombieDeadBody_Parms.ObjPawn = ObjPawn;

	this->ProcessEvent ( pFnPerformAsboreZombieDeadBody, &PerformAsboreZombieDeadBody_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.GotZPoint
// [0x00020002] 
// Parameters infos:
// int                            GotPoint                       ( CPF_Parm )

void ATGBioHostZombie::GotZPoint ( int GotPoint )
{
	static UFunction* pFnGotZPoint = NULL;

	if ( ! pFnGotZPoint )
		pFnGotZPoint = (UFunction*) UObject::GObjObjects()->Data[ 219721 ];

	ATGBioHostZombie_execGotZPoint_Parms GotZPoint_Parms;
	GotZPoint_Parms.GotPoint = GotPoint;

	this->ProcessEvent ( pFnGotZPoint, &GotZPoint_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.DelayedPermanentDeath
// [0x00020102] 
// Parameters infos:

void ATGBioHostZombie::DelayedPermanentDeath ( )
{
	static UFunction* pFnDelayedPermanentDeath = NULL;

	if ( ! pFnDelayedPermanentDeath )
		pFnDelayedPermanentDeath = (UFunction*) UObject::GObjObjects()->Data[ 219720 ];

	ATGBioHostZombie_execDelayedPermanentDeath_Parms DelayedPermanentDeath_Parms;

	this->ProcessEvent ( pFnDelayedPermanentDeath, &DelayedPermanentDeath_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.ProcessPermanentDeath
// [0x00020102] 
// Parameters infos:

void ATGBioHostZombie::ProcessPermanentDeath ( )
{
	static UFunction* pFnProcessPermanentDeath = NULL;

	if ( ! pFnProcessPermanentDeath )
		pFnProcessPermanentDeath = (UFunction*) UObject::GObjObjects()->Data[ 219719 ];

	ATGBioHostZombie_execProcessPermanentDeath_Parms ProcessPermanentDeath_Parms;

	this->ProcessEvent ( pFnProcessPermanentDeath, &ProcessPermanentDeath_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.AntitoxicLevelAdd
// [0x00020002] 
// Parameters infos:

void ATGBioHostZombie::AntitoxicLevelAdd ( )
{
	static UFunction* pFnAntitoxicLevelAdd = NULL;

	if ( ! pFnAntitoxicLevelAdd )
		pFnAntitoxicLevelAdd = (UFunction*) UObject::GObjObjects()->Data[ 219717 ];

	ATGBioHostZombie_execAntitoxicLevelAdd_Parms AntitoxicLevelAdd_Parms;

	this->ProcessEvent ( pFnAntitoxicLevelAdd, &AntitoxicLevelAdd_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.ReplicatedEvent
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGBioHostZombie::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 219714 ];

	ATGBioHostZombie_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.CheckWeaponByControllerRep
// [0x00020100] 
// Parameters infos:

void ATGBioHostZombie::CheckWeaponByControllerRep ( )
{
	static UFunction* pFnCheckWeaponByControllerRep = NULL;

	if ( ! pFnCheckWeaponByControllerRep )
		pFnCheckWeaponByControllerRep = (UFunction*) UObject::GObjObjects()->Data[ 219713 ];

	ATGBioHostZombie_execCheckWeaponByControllerRep_Parms CheckWeaponByControllerRep_Parms;

	this->ProcessEvent ( pFnCheckWeaponByControllerRep, &CheckWeaponByControllerRep_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.InternalSetLevelInfo
// [0x00020102] 
// Parameters infos:
// struct FZombieChangeNecessity  ZombieChange                   ( CPF_Parm )

void ATGBioHostZombie::InternalSetLevelInfo ( struct FZombieChangeNecessity ZombieChange )
{
	static UFunction* pFnInternalSetLevelInfo = NULL;

	if ( ! pFnInternalSetLevelInfo )
		pFnInternalSetLevelInfo = (UFunction*) UObject::GObjObjects()->Data[ 219703 ];

	ATGBioHostZombie_execInternalSetLevelInfo_Parms InternalSetLevelInfo_Parms;
	memcpy ( &InternalSetLevelInfo_Parms.ZombieChange, &ZombieChange, 0x14 );

	this->ProcessEvent ( pFnInternalSetLevelInfo, &InternalSetLevelInfo_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.GetBaseHealthMaxByNumValidPlayers
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ATGBioHostZombie::GetBaseHealthMaxByNumValidPlayers ( )
{
	static UFunction* pFnGetBaseHealthMaxByNumValidPlayers = NULL;

	if ( ! pFnGetBaseHealthMaxByNumValidPlayers )
		pFnGetBaseHealthMaxByNumValidPlayers = (UFunction*) UObject::GObjObjects()->Data[ 219698 ];

	ATGBioHostZombie_execGetBaseHealthMaxByNumValidPlayers_Parms GetBaseHealthMaxByNumValidPlayers_Parms;

	this->ProcessEvent ( pFnGetBaseHealthMaxByNumValidPlayers, &GetBaseHealthMaxByNumValidPlayers_Parms, NULL );

	return GetBaseHealthMaxByNumValidPlayers_Parms.ReturnValue;
};

// Function TGBioGame.TGBioHostZombie.SetLevelInfo
// [0x00020002] 
// Parameters infos:
// struct FZombieChangeNecessity  ZombieChange                   ( CPF_Parm )

void ATGBioHostZombie::SetLevelInfo ( struct FZombieChangeNecessity ZombieChange )
{
	static UFunction* pFnSetLevelInfo = NULL;

	if ( ! pFnSetLevelInfo )
		pFnSetLevelInfo = (UFunction*) UObject::GObjObjects()->Data[ 219696 ];

	ATGBioHostZombie_execSetLevelInfo_Parms SetLevelInfo_Parms;
	memcpy ( &SetLevelInfo_Parms.ZombieChange, &ZombieChange, 0x14 );

	this->ProcessEvent ( pFnSetLevelInfo, &SetLevelInfo_Parms, NULL );
};

// Function TGBioGame.TGBioHostZombie.LevelUP
// [0x00820002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ATGBioHostZombie::LevelUP ( )
{
	static UFunction* pFnLevelUP = NULL;

	if ( ! pFnLevelUP )
		pFnLevelUP = (UFunction*) UObject::GObjObjects()->Data[ 219690 ];

	ATGBioHostZombie_execLevelUP_Parms LevelUP_Parms;

	this->ProcessEvent ( pFnLevelUP, &LevelUP_Parms, NULL );

	return LevelUP_Parms.ReturnValue;
};

// Function TGBioGame.TGBioHostZombie.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGBioHostZombie::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 219683 ];

	ATGBioHostZombie_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGBioGame.TGBio3HostZombieBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGBio3HostZombieBase::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 219828 ];

	ATGBio3HostZombieBase_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGBioGame.TGBio3HostZombieBase.SkillTraceActors
// [0x00424405] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UClass*                  BaseClass                      ( CPF_Parm )
// struct FVector                 End                            ( CPF_Parm )
// struct FVector                 Start                          ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 Extent                         ( CPF_OptionalParm | CPF_Parm )
// int                            ExtraTraceFlags                ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  Actor                          ( CPF_Parm | CPF_OutParm )
// struct FVector                 HitLoc                         ( CPF_Parm | CPF_OutParm )
// struct FVector                 HitNorm                        ( CPF_Parm | CPF_OutParm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

void ATGBio3HostZombieBase::SkillTraceActors ( class UClass* BaseClass, struct FVector End, struct FVector Start, struct FVector Extent, int ExtraTraceFlags, class AActor** Actor, struct FVector* HitLoc, struct FVector* HitNorm, struct FTraceHitInfo* HitInfo )
{
	static UFunction* pFnSkillTraceActors = NULL;

	if ( ! pFnSkillTraceActors )
		pFnSkillTraceActors = (UFunction*) UObject::GObjObjects()->Data[ 219818 ];

	ATGBio3HostZombieBase_execSkillTraceActors_Parms SkillTraceActors_Parms;
	SkillTraceActors_Parms.BaseClass = BaseClass;
	memcpy ( &SkillTraceActors_Parms.End, &End, 0xC );
	memcpy ( &SkillTraceActors_Parms.Start, &Start, 0xC );
	memcpy ( &SkillTraceActors_Parms.Extent, &Extent, 0xC );
	SkillTraceActors_Parms.ExtraTraceFlags = ExtraTraceFlags;

	pFnSkillTraceActors->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSkillTraceActors, &SkillTraceActors_Parms, NULL );

	pFnSkillTraceActors->FunctionFlags |= 0x400;

	if ( Actor )
		*Actor = SkillTraceActors_Parms.Actor;

	if ( HitLoc )
		memcpy ( HitLoc, &SkillTraceActors_Parms.HitLoc, 0xC );

	if ( HitNorm )
		memcpy ( HitNorm, &SkillTraceActors_Parms.HitNorm, 0xC );

	if ( HitInfo )
		memcpy ( HitInfo, &SkillTraceActors_Parms.HitInfo, 0x20 );
};

// Function TGBioGame.TGBio3HostZombieBase.ProcessSlope
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          GlobalZ                        ( CPF_Parm )
// float                          ResultZ                        ( CPF_Parm | CPF_OutParm )

bool ATGBio3HostZombieBase::ProcessSlope ( float GlobalZ, float* ResultZ )
{
	static UFunction* pFnProcessSlope = NULL;

	if ( ! pFnProcessSlope )
		pFnProcessSlope = (UFunction*) UObject::GObjObjects()->Data[ 219814 ];

	ATGBio3HostZombieBase_execProcessSlope_Parms ProcessSlope_Parms;
	ProcessSlope_Parms.GlobalZ = GlobalZ;

	pFnProcessSlope->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProcessSlope, &ProcessSlope_Parms, NULL );

	pFnProcessSlope->FunctionFlags |= 0x400;

	if ( ResultZ )
		*ResultZ = ProcessSlope_Parms.ResultZ;

	return ProcessSlope_Parms.ReturnValue;
};

// Function TGBioGame.TGBio3HostZombieBase.SeekScarp
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 ZombieSkillJustVector          ( CPF_Parm | CPF_OutParm )

bool ATGBio3HostZombieBase::SeekScarp ( struct FVector* ZombieSkillJustVector )
{
	static UFunction* pFnSeekScarp = NULL;

	if ( ! pFnSeekScarp )
		pFnSeekScarp = (UFunction*) UObject::GObjObjects()->Data[ 219811 ];

	ATGBio3HostZombieBase_execSeekScarp_Parms SeekScarp_Parms;

	pFnSeekScarp->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSeekScarp, &SeekScarp_Parms, NULL );

	pFnSeekScarp->FunctionFlags |= 0x400;

	if ( ZombieSkillJustVector )
		memcpy ( ZombieSkillJustVector, &SeekScarp_Parms.ZombieSkillJustVector, 0xC );

	return SeekScarp_Parms.ReturnValue;
};

// Function TGBioGame.TGBio3HostZombieBase.GetLastRopeOutput
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ATGBio3HostZombieBase::eventGetLastRopeOutput ( )
{
	static UFunction* pFnGetLastRopeOutput = NULL;

	if ( ! pFnGetLastRopeOutput )
		pFnGetLastRopeOutput = (UFunction*) UObject::GObjObjects()->Data[ 219809 ];

	ATGBio3HostZombieBase_eventGetLastRopeOutput_Parms GetLastRopeOutput_Parms;

	this->ProcessEvent ( pFnGetLastRopeOutput, &GetLastRopeOutput_Parms, NULL );

	return GetLastRopeOutput_Parms.ReturnValue;
};

// Function TGBioGame.TGBio3HostZombieBase.HunterSwoopActor
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  FloorActor                     ( CPF_Parm )

void ATGBio3HostZombieBase::eventHunterSwoopActor ( struct FVector HitNormal, class AActor* FloorActor )
{
	static UFunction* pFnHunterSwoopActor = NULL;

	if ( ! pFnHunterSwoopActor )
		pFnHunterSwoopActor = (UFunction*) UObject::GObjObjects()->Data[ 219806 ];

	ATGBio3HostZombieBase_eventHunterSwoopActor_Parms HunterSwoopActor_Parms;
	memcpy ( &HunterSwoopActor_Parms.HitNormal, &HitNormal, 0xC );
	HunterSwoopActor_Parms.FloorActor = FloorActor;

	this->ProcessEvent ( pFnHunterSwoopActor, &HunterSwoopActor_Parms, NULL );
};

// Function TGBioGame.TGAttachment_HostZombieClaw.GetImpactEffect
// [0x00020102] 
// Parameters infos:
// struct FMaterialImpactEffect   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class UPhysicalMaterial*       HitMaterial                    ( CPF_Parm )

struct FMaterialImpactEffect ATGAttachment_HostZombieClaw::GetImpactEffect ( class UPhysicalMaterial* HitMaterial )
{
	static UFunction* pFnGetImpactEffect = NULL;

	if ( ! pFnGetImpactEffect )
		pFnGetImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 218931 ];

	ATGAttachment_HostZombieClaw_execGetImpactEffect_Parms GetImpactEffect_Parms;
	GetImpactEffect_Parms.HitMaterial = HitMaterial;

	this->ProcessEvent ( pFnGetImpactEffect, &GetImpactEffect_Parms, NULL );

	return GetImpactEffect_Parms.ReturnValue;
};

// Function TGBioGame.TGAttachment_HostZombieClaw.GetDecalRotation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGAttachment_HostZombieClaw::GetDecalRotation ( )
{
	static UFunction* pFnGetDecalRotation = NULL;

	if ( ! pFnGetDecalRotation )
		pFnGetDecalRotation = (UFunction*) UObject::GObjObjects()->Data[ 218929 ];

	ATGAttachment_HostZombieClaw_execGetDecalRotation_Parms GetDecalRotation_Parms;

	this->ProcessEvent ( pFnGetDecalRotation, &GetDecalRotation_Parms, NULL );

	return GetDecalRotation_Parms.ReturnValue;
};

// Function TGBioGame.TGAttachment_HostZombieClaw.PlayImpactEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGAttachment_HostZombieClaw::PlayImpactEffects ( struct FVector HitLocation )
{
	static UFunction* pFnPlayImpactEffects = NULL;

	if ( ! pFnPlayImpactEffects )
		pFnPlayImpactEffects = (UFunction*) UObject::GObjObjects()->Data[ 218914 ];

	ATGAttachment_HostZombieClaw_execPlayImpactEffects_Parms PlayImpactEffects_Parms;
	memcpy ( &PlayImpactEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayImpactEffects, &PlayImpactEffects_Parms, NULL );
};

// Function TGBioGame.TGAttachment_HostZombieClaw.CauseMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGAttachment_HostZombieClaw::CauseMuzzleFlash ( )
{
	static UFunction* pFnCauseMuzzleFlash = NULL;

	if ( ! pFnCauseMuzzleFlash )
		pFnCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 218913 ];

	ATGAttachment_HostZombieClaw_execCauseMuzzleFlash_Parms CauseMuzzleFlash_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlash, &CauseMuzzleFlash_Parms, NULL );
};

// Function TGBioGame.TGAttachment_HostZombieClaw.ThirdPersonFireEffects
// [0x00020100] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGAttachment_HostZombieClaw::ThirdPersonFireEffects ( struct FVector HitLocation )
{
	static UFunction* pFnThirdPersonFireEffects = NULL;

	if ( ! pFnThirdPersonFireEffects )
		pFnThirdPersonFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 218911 ];

	ATGAttachment_HostZombieClaw_execThirdPersonFireEffects_Parms ThirdPersonFireEffects_Parms;
	memcpy ( &ThirdPersonFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnThirdPersonFireEffects, &ThirdPersonFireEffects_Parms, NULL );
};

// Function TGBioGame.TGAttachment_ButcherZombieClaw.GetDecalRotation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGAttachment_ButcherZombieClaw::GetDecalRotation ( )
{
	static UFunction* pFnGetDecalRotation = NULL;

	if ( ! pFnGetDecalRotation )
		pFnGetDecalRotation = (UFunction*) UObject::GObjObjects()->Data[ 218940 ];

	ATGAttachment_ButcherZombieClaw_execGetDecalRotation_Parms GetDecalRotation_Parms;

	this->ProcessEvent ( pFnGetDecalRotation, &GetDecalRotation_Parms, NULL );

	return GetDecalRotation_Parms.ReturnValue;
};

// Function TGBioGame.TGAttachment_GhostNinjaZombieClaw.GetDecalRotation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGAttachment_GhostNinjaZombieClaw::GetDecalRotation ( )
{
	static UFunction* pFnGetDecalRotation = NULL;

	if ( ! pFnGetDecalRotation )
		pFnGetDecalRotation = (UFunction*) UObject::GObjObjects()->Data[ 218945 ];

	ATGAttachment_GhostNinjaZombieClaw_execGetDecalRotation_Parms GetDecalRotation_Parms;

	this->ProcessEvent ( pFnGetDecalRotation, &GetDecalRotation_Parms, NULL );

	return GetDecalRotation_Parms.ReturnValue;
};

// Function TGBioGame.TGAttachment_HulkZombieClaw.GetDecalRotation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGAttachment_HulkZombieClaw::GetDecalRotation ( )
{
	static UFunction* pFnGetDecalRotation = NULL;

	if ( ! pFnGetDecalRotation )
		pFnGetDecalRotation = (UFunction*) UObject::GObjObjects()->Data[ 219024 ];

	ATGAttachment_HulkZombieClaw_execGetDecalRotation_Parms GetDecalRotation_Parms;

	this->ProcessEvent ( pFnGetDecalRotation, &GetDecalRotation_Parms, NULL );

	return GetDecalRotation_Parms.ReturnValue;
};

// Function TGBioGame.TGAttachment_InvisibleZombieClaw.GetDecalRotation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGAttachment_InvisibleZombieClaw::GetDecalRotation ( )
{
	static UFunction* pFnGetDecalRotation = NULL;

	if ( ! pFnGetDecalRotation )
		pFnGetDecalRotation = (UFunction*) UObject::GObjObjects()->Data[ 219029 ];

	ATGAttachment_InvisibleZombieClaw_execGetDecalRotation_Parms GetDecalRotation_Parms;

	this->ProcessEvent ( pFnGetDecalRotation, &GetDecalRotation_Parms, NULL );

	return GetDecalRotation_Parms.ReturnValue;
};

// Function TGBioGame.TGAttachment_TerminatorClaw.GetImpactEffect
// [0x00020102] 
// Parameters infos:
// struct FMaterialImpactEffect   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class UPhysicalMaterial*       HitMaterial                    ( CPF_Parm )

struct FMaterialImpactEffect ATGAttachment_TerminatorClaw::GetImpactEffect ( class UPhysicalMaterial* HitMaterial )
{
	static UFunction* pFnGetImpactEffect = NULL;

	if ( ! pFnGetImpactEffect )
		pFnGetImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 219082 ];

	ATGAttachment_TerminatorClaw_execGetImpactEffect_Parms GetImpactEffect_Parms;
	GetImpactEffect_Parms.HitMaterial = HitMaterial;

	this->ProcessEvent ( pFnGetImpactEffect, &GetImpactEffect_Parms, NULL );

	return GetImpactEffect_Parms.ReturnValue;
};

// Function TGBioGame.TGAttachment_TerminatorClaw.GetDecalRotation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGAttachment_TerminatorClaw::GetDecalRotation ( )
{
	static UFunction* pFnGetDecalRotation = NULL;

	if ( ! pFnGetDecalRotation )
		pFnGetDecalRotation = (UFunction*) UObject::GObjObjects()->Data[ 219080 ];

	ATGAttachment_TerminatorClaw_execGetDecalRotation_Parms GetDecalRotation_Parms;

	this->ProcessEvent ( pFnGetDecalRotation, &GetDecalRotation_Parms, NULL );

	return GetDecalRotation_Parms.ReturnValue;
};

// Function TGBioGame.TGAttachment_TerminatorClaw.PlayImpactEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGAttachment_TerminatorClaw::PlayImpactEffects ( struct FVector HitLocation )
{
	static UFunction* pFnPlayImpactEffects = NULL;

	if ( ! pFnPlayImpactEffects )
		pFnPlayImpactEffects = (UFunction*) UObject::GObjObjects()->Data[ 219065 ];

	ATGAttachment_TerminatorClaw_execPlayImpactEffects_Parms PlayImpactEffects_Parms;
	memcpy ( &PlayImpactEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayImpactEffects, &PlayImpactEffects_Parms, NULL );
};

// Function TGBioGame.TGAttachment_TerminatorClaw.ChangeVisibility
// [0x00020102] 
// Parameters infos:
// unsigned long                  bIsVisible                     ( CPF_Parm )

void ATGAttachment_TerminatorClaw::ChangeVisibility ( unsigned long bIsVisible )
{
	static UFunction* pFnChangeVisibility = NULL;

	if ( ! pFnChangeVisibility )
		pFnChangeVisibility = (UFunction*) UObject::GObjObjects()->Data[ 219063 ];

	ATGAttachment_TerminatorClaw_execChangeVisibility_Parms ChangeVisibility_Parms;
	ChangeVisibility_Parms.bIsVisible = bIsVisible;

	this->ProcessEvent ( pFnChangeVisibility, &ChangeVisibility_Parms, NULL );
};

// Function TGBioGame.TGAttachment_TerminatorClaw.GetEffectLocation
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ATGAttachment_TerminatorClaw::GetEffectLocation ( )
{
	static UFunction* pFnGetEffectLocation = NULL;

	if ( ! pFnGetEffectLocation )
		pFnGetEffectLocation = (UFunction*) UObject::GObjObjects()->Data[ 219059 ];

	ATGAttachment_TerminatorClaw_execGetEffectLocation_Parms GetEffectLocation_Parms;

	this->ProcessEvent ( pFnGetEffectLocation, &GetEffectLocation_Parms, NULL );

	return GetEffectLocation_Parms.ReturnValue;
};

// Function TGBioGame.TGAttachment_TerminatorClaw.FirstPersonFireEffects
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 PawnWeapon                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGAttachment_TerminatorClaw::FirstPersonFireEffects ( class AWeapon* PawnWeapon, struct FVector HitLocation )
{
	static UFunction* pFnFirstPersonFireEffects = NULL;

	if ( ! pFnFirstPersonFireEffects )
		pFnFirstPersonFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 219056 ];

	ATGAttachment_TerminatorClaw_execFirstPersonFireEffects_Parms FirstPersonFireEffects_Parms;
	FirstPersonFireEffects_Parms.PawnWeapon = PawnWeapon;
	memcpy ( &FirstPersonFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnFirstPersonFireEffects, &FirstPersonFireEffects_Parms, NULL );
};

// Function TGBioGame.TGAttachment_TerminatorClaw.SpawnTracer
// [0x00820102] 
// Parameters infos:
// struct FVector                 EffectLocation                 ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGAttachment_TerminatorClaw::SpawnTracer ( struct FVector EffectLocation, struct FVector HitLocation )
{
	static UFunction* pFnSpawnTracer = NULL;

	if ( ! pFnSpawnTracer )
		pFnSpawnTracer = (UFunction*) UObject::GObjObjects()->Data[ 219051 ];

	ATGAttachment_TerminatorClaw_execSpawnTracer_Parms SpawnTracer_Parms;
	memcpy ( &SpawnTracer_Parms.EffectLocation, &EffectLocation, 0xC );
	memcpy ( &SpawnTracer_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnTracer, &SpawnTracer_Parms, NULL );
};

// Function TGBioGame.TGAttachment_TerminatorClaw.StopMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGAttachment_TerminatorClaw::StopMuzzleFlash ( )
{
	static UFunction* pFnStopMuzzleFlash = NULL;

	if ( ! pFnStopMuzzleFlash )
		pFnStopMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 219050 ];

	ATGAttachment_TerminatorClaw_execStopMuzzleFlash_Parms StopMuzzleFlash_Parms;

	this->ProcessEvent ( pFnStopMuzzleFlash, &StopMuzzleFlash_Parms, NULL );
};

// Function TGBioGame.TGAttachment_TerminatorClaw.CauseMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGAttachment_TerminatorClaw::CauseMuzzleFlash ( )
{
	static UFunction* pFnCauseMuzzleFlash = NULL;

	if ( ! pFnCauseMuzzleFlash )
		pFnCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 219049 ];

	ATGAttachment_TerminatorClaw_execCauseMuzzleFlash_Parms CauseMuzzleFlash_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlash, &CauseMuzzleFlash_Parms, NULL );
};

// Function TGBioGame.TGAttachment_TerminatorClaw.MuzzleFlashTimer
// [0x00020102] 
// Parameters infos:

void ATGAttachment_TerminatorClaw::MuzzleFlashTimer ( )
{
	static UFunction* pFnMuzzleFlashTimer = NULL;

	if ( ! pFnMuzzleFlashTimer )
		pFnMuzzleFlashTimer = (UFunction*) UObject::GObjObjects()->Data[ 219048 ];

	ATGAttachment_TerminatorClaw_execMuzzleFlashTimer_Parms MuzzleFlashTimer_Parms;

	this->ProcessEvent ( pFnMuzzleFlashTimer, &MuzzleFlashTimer_Parms, NULL );
};

// Function TGBioGame.TGAttachment_TerminatorClaw.ThirdPersonFireEffects
// [0x00020100] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGAttachment_TerminatorClaw::ThirdPersonFireEffects ( struct FVector HitLocation )
{
	static UFunction* pFnThirdPersonFireEffects = NULL;

	if ( ! pFnThirdPersonFireEffects )
		pFnThirdPersonFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 219046 ];

	ATGAttachment_TerminatorClaw_execThirdPersonFireEffects_Parms ThirdPersonFireEffects_Parms;
	memcpy ( &ThirdPersonFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnThirdPersonFireEffects, &ThirdPersonFireEffects_Parms, NULL );
};

// Function TGBioGame.TGAttachment_TerminatorClaw.DetachFrom
// [0x00020102] 
// Parameters infos:
// class USkeletalMeshComponent*  MeshCpnt                       ( CPF_Parm | CPF_EditInline )

void ATGAttachment_TerminatorClaw::DetachFrom ( class USkeletalMeshComponent* MeshCpnt )
{
	static UFunction* pFnDetachFrom = NULL;

	if ( ! pFnDetachFrom )
		pFnDetachFrom = (UFunction*) UObject::GObjObjects()->Data[ 219044 ];

	ATGAttachment_TerminatorClaw_execDetachFrom_Parms DetachFrom_Parms;
	DetachFrom_Parms.MeshCpnt = MeshCpnt;

	this->ProcessEvent ( pFnDetachFrom, &DetachFrom_Parms, NULL );
};

// Function TGBioGame.TGAttachment_TerminatorClaw.SetWeaponOverlayFlags
// [0x00020102] 
// Parameters infos:
// class AUTPawn*                 OwnerPawn                      ( CPF_Parm )

void ATGAttachment_TerminatorClaw::SetWeaponOverlayFlags ( class AUTPawn* OwnerPawn )
{
	static UFunction* pFnSetWeaponOverlayFlags = NULL;

	if ( ! pFnSetWeaponOverlayFlags )
		pFnSetWeaponOverlayFlags = (UFunction*) UObject::GObjObjects()->Data[ 219041 ];

	ATGAttachment_TerminatorClaw_execSetWeaponOverlayFlags_Parms SetWeaponOverlayFlags_Parms;
	SetWeaponOverlayFlags_Parms.OwnerPawn = OwnerPawn;

	this->ProcessEvent ( pFnSetWeaponOverlayFlags, &SetWeaponOverlayFlags_Parms, NULL );
};

// Function TGBioGame.TGAttachment_TerminatorClaw.CreateOverlayMesh
// [0x00020102] 
// Parameters infos:

void ATGAttachment_TerminatorClaw::CreateOverlayMesh ( )
{
	static UFunction* pFnCreateOverlayMesh = NULL;

	if ( ! pFnCreateOverlayMesh )
		pFnCreateOverlayMesh = (UFunction*) UObject::GObjObjects()->Data[ 219040 ];

	ATGAttachment_TerminatorClaw_execCreateOverlayMesh_Parms CreateOverlayMesh_Parms;

	this->ProcessEvent ( pFnCreateOverlayMesh, &CreateOverlayMesh_Parms, NULL );
};

// Function TGBioGame.TGAttachment_TerminatorClaw.SetSkin
// [0x00020002] 
// Parameters infos:
// class UMaterial*               NewMaterial                    ( CPF_Parm )

void ATGAttachment_TerminatorClaw::SetSkin ( class UMaterial* NewMaterial )
{
	static UFunction* pFnSetSkin = NULL;

	if ( ! pFnSetSkin )
		pFnSetSkin = (UFunction*) UObject::GObjObjects()->Data[ 219037 ];

	ATGAttachment_TerminatorClaw_execSetSkin_Parms SetSkin_Parms;
	SetSkin_Parms.NewMaterial = NewMaterial;

	this->ProcessEvent ( pFnSetSkin, &SetSkin_Parms, NULL );
};

// Function TGBioGame.TGBioZombieMeleeWeapon.GetWeaponAnimNodeSeq
// [0x00020102] 
// Parameters infos:
// class UAnimNodeSequence*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UAnimNodeSequence* ATGBioZombieMeleeWeapon::GetWeaponAnimNodeSeq ( )
{
	static UFunction* pFnGetWeaponAnimNodeSeq = NULL;

	if ( ! pFnGetWeaponAnimNodeSeq )
		pFnGetWeaponAnimNodeSeq = (UFunction*) UObject::GObjObjects()->Data[ 223659 ];

	ATGBioZombieMeleeWeapon_execGetWeaponAnimNodeSeq_Parms GetWeaponAnimNodeSeq_Parms;

	this->ProcessEvent ( pFnGetWeaponAnimNodeSeq, &GetWeaponAnimNodeSeq_Parms, NULL );

	return GetWeaponAnimNodeSeq_Parms.ReturnValue;
};

// Function TGBioGame.TGBioZombieMeleeWeapon.TimeToAnimEnd
// [0x00020102] 
// Parameters infos:

void ATGBioZombieMeleeWeapon::TimeToAnimEnd ( )
{
	static UFunction* pFnTimeToAnimEnd = NULL;

	if ( ! pFnTimeToAnimEnd )
		pFnTimeToAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 223652 ];

	ATGBioZombieMeleeWeapon_execTimeToAnimEnd_Parms TimeToAnimEnd_Parms;

	this->ProcessEvent ( pFnTimeToAnimEnd, &TimeToAnimEnd_Parms, NULL );
};

// Function TGBioGame.TGBioZombieMeleeWeapon.PlayWeaponAnimation
// [0x00024102] 
// Parameters infos:
// struct FName                   Sequence                       ( CPF_Parm )
// float                          fDesiredDuration               ( CPF_Parm )
// unsigned long                  bLoop                          ( CPF_OptionalParm | CPF_Parm )
// class USkeletalMeshComponent*  SkelMesh                       ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )

void ATGBioZombieMeleeWeapon::PlayWeaponAnimation ( struct FName Sequence, float fDesiredDuration, unsigned long bLoop, class USkeletalMeshComponent* SkelMesh )
{
	static UFunction* pFnPlayWeaponAnimation = NULL;

	if ( ! pFnPlayWeaponAnimation )
		pFnPlayWeaponAnimation = (UFunction*) UObject::GObjObjects()->Data[ 223644 ];

	ATGBioZombieMeleeWeapon_execPlayWeaponAnimation_Parms PlayWeaponAnimation_Parms;
	memcpy ( &PlayWeaponAnimation_Parms.Sequence, &Sequence, 0x8 );
	PlayWeaponAnimation_Parms.fDesiredDuration = fDesiredDuration;
	PlayWeaponAnimation_Parms.bLoop = bLoop;
	PlayWeaponAnimation_Parms.SkelMesh = SkelMesh;

	this->ProcessEvent ( pFnPlayWeaponAnimation, &PlayWeaponAnimation_Parms, NULL );
};

// Function TGBioGame.TGBioSkillBase.CanDoSpecailMove
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          TolerateTime                   ( CPF_Parm )

bool ATGBioSkillBase::CanDoSpecailMove ( float TolerateTime )
{
	static UFunction* pFnCanDoSpecailMove = NULL;

	if ( ! pFnCanDoSpecailMove )
		pFnCanDoSpecailMove = (UFunction*) UObject::GObjObjects()->Data[ 223196 ];

	ATGBioSkillBase_execCanDoSpecailMove_Parms CanDoSpecailMove_Parms;
	CanDoSpecailMove_Parms.TolerateTime = TolerateTime;

	this->ProcessEvent ( pFnCanDoSpecailMove, &CanDoSpecailMove_Parms, NULL );

	return CanDoSpecailMove_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillBase.PlayerEffect
// [0x010201C0] 
// Parameters infos:

void ATGBioSkillBase::PlayerEffect ( )
{
	static UFunction* pFnPlayerEffect = NULL;

	if ( ! pFnPlayerEffect )
		pFnPlayerEffect = (UFunction*) UObject::GObjObjects()->Data[ 223195 ];

	ATGBioSkillBase_execPlayerEffect_Parms PlayerEffect_Parms;

	this->ProcessEvent ( pFnPlayerEffect, &PlayerEffect_Parms, NULL );
};

// Function TGBioGame.TGBioSkillBase.CheckAllowUseSkill
// [0x00020000] 
// Parameters infos:

void ATGBioSkillBase::CheckAllowUseSkill ( )
{
	static UFunction* pFnCheckAllowUseSkill = NULL;

	if ( ! pFnCheckAllowUseSkill )
		pFnCheckAllowUseSkill = (UFunction*) UObject::GObjObjects()->Data[ 223194 ];

	ATGBioSkillBase_execCheckAllowUseSkill_Parms CheckAllowUseSkill_Parms;

	this->ProcessEvent ( pFnCheckAllowUseSkill, &CheckAllowUseSkill_Parms, NULL );
};

// Function TGBioGame.TGBioSkillBase.Abort
// [0x00020102] 
// Parameters infos:

void ATGBioSkillBase::Abort ( )
{
	static UFunction* pFnAbort = NULL;

	if ( ! pFnAbort )
		pFnAbort = (UFunction*) UObject::GObjObjects()->Data[ 223177 ];

	ATGBioSkillBase_execAbort_Parms Abort_Parms;

	this->ProcessEvent ( pFnAbort, &Abort_Parms, NULL );
};

// Function TGBioGame.TGBioSkillBase.Start
// [0x00020102] 
// Parameters infos:

void ATGBioSkillBase::Start ( )
{
	static UFunction* pFnStart = NULL;

	if ( ! pFnStart )
		pFnStart = (UFunction*) UObject::GObjObjects()->Data[ 223176 ];

	ATGBioSkillBase_execStart_Parms Start_Parms;

	this->ProcessEvent ( pFnStart, &Start_Parms, NULL );
};

// Function TGBioGame.TGBioSkillBase.UnexpectedStopEffect
// [0x00020102] 
// Parameters infos:

void ATGBioSkillBase::UnexpectedStopEffect ( )
{
	static UFunction* pFnUnexpectedStopEffect = NULL;

	if ( ! pFnUnexpectedStopEffect )
		pFnUnexpectedStopEffect = (UFunction*) UObject::GObjObjects()->Data[ 223175 ];

	ATGBioSkillBase_execUnexpectedStopEffect_Parms UnexpectedStopEffect_Parms;

	this->ProcessEvent ( pFnUnexpectedStopEffect, &UnexpectedStopEffect_Parms, NULL );
};

// Function TGBioGame.TGBioSkillBase.UnexpectedStopSkillValue
// [0x00020100] 
// Parameters infos:

void ATGBioSkillBase::UnexpectedStopSkillValue ( )
{
	static UFunction* pFnUnexpectedStopSkillValue = NULL;

	if ( ! pFnUnexpectedStopSkillValue )
		pFnUnexpectedStopSkillValue = (UFunction*) UObject::GObjObjects()->Data[ 223174 ];

	ATGBioSkillBase_execUnexpectedStopSkillValue_Parms UnexpectedStopSkillValue_Parms;

	this->ProcessEvent ( pFnUnexpectedStopSkillValue, &UnexpectedStopSkillValue_Parms, NULL );
};

// Function TGBioGame.TGBioSkillBase.ResetSkillCoolTime
// [0x00020102] 
// Parameters infos:

void ATGBioSkillBase::ResetSkillCoolTime ( )
{
	static UFunction* pFnResetSkillCoolTime = NULL;

	if ( ! pFnResetSkillCoolTime )
		pFnResetSkillCoolTime = (UFunction*) UObject::GObjObjects()->Data[ 223173 ];

	ATGBioSkillBase_execResetSkillCoolTime_Parms ResetSkillCoolTime_Parms;

	this->ProcessEvent ( pFnResetSkillCoolTime, &ResetSkillCoolTime_Parms, NULL );
};

// Function TGBioGame.TGBioSkillBase.ResetSkill
// [0x00020102] 
// Parameters infos:
// unsigned long                  ResetCoolTime                  ( CPF_Parm )

void ATGBioSkillBase::ResetSkill ( unsigned long ResetCoolTime )
{
	static UFunction* pFnResetSkill = NULL;

	if ( ! pFnResetSkill )
		pFnResetSkill = (UFunction*) UObject::GObjObjects()->Data[ 223171 ];

	ATGBioSkillBase_execResetSkill_Parms ResetSkill_Parms;
	ResetSkill_Parms.ResetCoolTime = ResetCoolTime;

	this->ProcessEvent ( pFnResetSkill, &ResetSkill_Parms, NULL );
};

// Function TGBioGame.TGBioSkillBase.StopThirdPersonEffect
// [0x00020102] 
// Parameters infos:

void ATGBioSkillBase::StopThirdPersonEffect ( )
{
	static UFunction* pFnStopThirdPersonEffect = NULL;

	if ( ! pFnStopThirdPersonEffect )
		pFnStopThirdPersonEffect = (UFunction*) UObject::GObjObjects()->Data[ 223170 ];

	ATGBioSkillBase_execStopThirdPersonEffect_Parms StopThirdPersonEffect_Parms;

	this->ProcessEvent ( pFnStopThirdPersonEffect, &StopThirdPersonEffect_Parms, NULL );
};

// Function TGBioGame.TGBioSkillBase.StopFirstPersonEffect
// [0x00020102] 
// Parameters infos:

void ATGBioSkillBase::StopFirstPersonEffect ( )
{
	static UFunction* pFnStopFirstPersonEffect = NULL;

	if ( ! pFnStopFirstPersonEffect )
		pFnStopFirstPersonEffect = (UFunction*) UObject::GObjObjects()->Data[ 223168 ];

	ATGBioSkillBase_execStopFirstPersonEffect_Parms StopFirstPersonEffect_Parms;

	this->ProcessEvent ( pFnStopFirstPersonEffect, &StopFirstPersonEffect_Parms, NULL );
};

// Function TGBioGame.TGBioSkillBase.StopEffect
// [0x00020102] 
// Parameters infos:

void ATGBioSkillBase::StopEffect ( )
{
	static UFunction* pFnStopEffect = NULL;

	if ( ! pFnStopEffect )
		pFnStopEffect = (UFunction*) UObject::GObjObjects()->Data[ 223166 ];

	ATGBioSkillBase_execStopEffect_Parms StopEffect_Parms;

	this->ProcessEvent ( pFnStopEffect, &StopEffect_Parms, NULL );
};

// Function TGBioGame.TGBioSkillBase.PlayThirdPersonEffect
// [0x00020102] 
// Parameters infos:

void ATGBioSkillBase::PlayThirdPersonEffect ( )
{
	static UFunction* pFnPlayThirdPersonEffect = NULL;

	if ( ! pFnPlayThirdPersonEffect )
		pFnPlayThirdPersonEffect = (UFunction*) UObject::GObjObjects()->Data[ 223165 ];

	ATGBioSkillBase_execPlayThirdPersonEffect_Parms PlayThirdPersonEffect_Parms;

	this->ProcessEvent ( pFnPlayThirdPersonEffect, &PlayThirdPersonEffect_Parms, NULL );
};

// Function TGBioGame.TGBioSkillBase.PlayFirstPersonEffect
// [0x00020102] 
// Parameters infos:

void ATGBioSkillBase::PlayFirstPersonEffect ( )
{
	static UFunction* pFnPlayFirstPersonEffect = NULL;

	if ( ! pFnPlayFirstPersonEffect )
		pFnPlayFirstPersonEffect = (UFunction*) UObject::GObjObjects()->Data[ 223163 ];

	ATGBioSkillBase_execPlayFirstPersonEffect_Parms PlayFirstPersonEffect_Parms;

	this->ProcessEvent ( pFnPlayFirstPersonEffect, &PlayFirstPersonEffect_Parms, NULL );
};

// Function TGBioGame.TGBioSkillBase.PlayEffect
// [0x00020102] 
// Parameters infos:
// class ATGBioZombiePawn*        P                              ( CPF_Parm )

void ATGBioSkillBase::PlayEffect ( class ATGBioZombiePawn* P )
{
	static UFunction* pFnPlayEffect = NULL;

	if ( ! pFnPlayEffect )
		pFnPlayEffect = (UFunction*) UObject::GObjObjects()->Data[ 223160 ];

	ATGBioSkillBase_execPlayEffect_Parms PlayEffect_Parms;
	PlayEffect_Parms.P = P;

	this->ProcessEvent ( pFnPlayEffect, &PlayEffect_Parms, NULL );
};

// Function TGBioGame.TGBioSkillBase.TimerUnNudgeSkillComponents
// [0x00020102] 
// Parameters infos:

void ATGBioSkillBase::TimerUnNudgeSkillComponents ( )
{
	static UFunction* pFnTimerUnNudgeSkillComponents = NULL;

	if ( ! pFnTimerUnNudgeSkillComponents )
		pFnTimerUnNudgeSkillComponents = (UFunction*) UObject::GObjObjects()->Data[ 223159 ];

	ATGBioSkillBase_execTimerUnNudgeSkillComponents_Parms TimerUnNudgeSkillComponents_Parms;

	this->ProcessEvent ( pFnTimerUnNudgeSkillComponents, &TimerUnNudgeSkillComponents_Parms, NULL );
};

// Function TGBioGame.TGBioSkillBase.UnNudgeSkillComponents
// [0x00020102] 
// Parameters infos:

void ATGBioSkillBase::UnNudgeSkillComponents ( )
{
	static UFunction* pFnUnNudgeSkillComponents = NULL;

	if ( ! pFnUnNudgeSkillComponents )
		pFnUnNudgeSkillComponents = (UFunction*) UObject::GObjObjects()->Data[ 223157 ];

	ATGBioSkillBase_execUnNudgeSkillComponents_Parms UnNudgeSkillComponents_Parms;

	this->ProcessEvent ( pFnUnNudgeSkillComponents, &UnNudgeSkillComponents_Parms, NULL );
};

// Function TGBioGame.TGBioSkillBase.NudgeSkillComponents
// [0x00020102] 
// Parameters infos:

void ATGBioSkillBase::NudgeSkillComponents ( )
{
	static UFunction* pFnNudgeSkillComponents = NULL;

	if ( ! pFnNudgeSkillComponents )
		pFnNudgeSkillComponents = (UFunction*) UObject::GObjObjects()->Data[ 223154 ];

	ATGBioSkillBase_execNudgeSkillComponents_Parms NudgeSkillComponents_Parms;

	this->ProcessEvent ( pFnNudgeSkillComponents, &NudgeSkillComponents_Parms, NULL );
};

// Function TGBioGame.TGBioSkillBase.SkillPreProcesses
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioSkillBase::SkillPreProcesses ( )
{
	static UFunction* pFnSkillPreProcesses = NULL;

	if ( ! pFnSkillPreProcesses )
		pFnSkillPreProcesses = (UFunction*) UObject::GObjObjects()->Data[ 223148 ];

	ATGBioSkillBase_execSkillPreProcesses_Parms SkillPreProcesses_Parms;

	this->ProcessEvent ( pFnSkillPreProcesses, &SkillPreProcesses_Parms, NULL );

	return SkillPreProcesses_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillBase.CanNudgeSkillComponents
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioSkillBase::CanNudgeSkillComponents ( )
{
	static UFunction* pFnCanNudgeSkillComponents = NULL;

	if ( ! pFnCanNudgeSkillComponents )
		pFnCanNudgeSkillComponents = (UFunction*) UObject::GObjObjects()->Data[ 223143 ];

	ATGBioSkillBase_execCanNudgeSkillComponents_Parms CanNudgeSkillComponents_Parms;

	this->ProcessEvent ( pFnCanNudgeSkillComponents, &CanNudgeSkillComponents_Parms, NULL );

	return CanNudgeSkillComponents_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillBase.GetPlusRemainTime
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGBioSkillBase::GetPlusRemainTime ( )
{
	static UFunction* pFnGetPlusRemainTime = NULL;

	if ( ! pFnGetPlusRemainTime )
		pFnGetPlusRemainTime = (UFunction*) UObject::GObjObjects()->Data[ 223141 ];

	ATGBioSkillBase_execGetPlusRemainTime_Parms GetPlusRemainTime_Parms;

	this->ProcessEvent ( pFnGetPlusRemainTime, &GetPlusRemainTime_Parms, NULL );

	return GetPlusRemainTime_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillBase.IsPlusing
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioSkillBase::IsPlusing ( )
{
	static UFunction* pFnIsPlusing = NULL;

	if ( ! pFnIsPlusing )
		pFnIsPlusing = (UFunction*) UObject::GObjObjects()->Data[ 223139 ];

	ATGBioSkillBase_execIsPlusing_Parms IsPlusing_Parms;

	this->ProcessEvent ( pFnIsPlusing, &IsPlusing_Parms, NULL );

	return IsPlusing_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillBase.GetCooldownRemainPercent
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGBioSkillBase::GetCooldownRemainPercent ( )
{
	static UFunction* pFnGetCooldownRemainPercent = NULL;

	if ( ! pFnGetCooldownRemainPercent )
		pFnGetCooldownRemainPercent = (UFunction*) UObject::GObjObjects()->Data[ 223137 ];

	ATGBioSkillBase_execGetCooldownRemainPercent_Parms GetCooldownRemainPercent_Parms;

	this->ProcessEvent ( pFnGetCooldownRemainPercent, &GetCooldownRemainPercent_Parms, NULL );

	return GetCooldownRemainPercent_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillBase.GetCooldownElipseTime
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGBioSkillBase::GetCooldownElipseTime ( )
{
	static UFunction* pFnGetCooldownElipseTime = NULL;

	if ( ! pFnGetCooldownElipseTime )
		pFnGetCooldownElipseTime = (UFunction*) UObject::GObjObjects()->Data[ 223135 ];

	ATGBioSkillBase_execGetCooldownElipseTime_Parms GetCooldownElipseTime_Parms;

	this->ProcessEvent ( pFnGetCooldownElipseTime, &GetCooldownElipseTime_Parms, NULL );

	return GetCooldownElipseTime_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillBase.GetCooldownRemainTime
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGBioSkillBase::GetCooldownRemainTime ( )
{
	static UFunction* pFnGetCooldownRemainTime = NULL;

	if ( ! pFnGetCooldownRemainTime )
		pFnGetCooldownRemainTime = (UFunction*) UObject::GObjObjects()->Data[ 223132 ];

	ATGBioSkillBase_execGetCooldownRemainTime_Parms GetCooldownRemainTime_Parms;

	this->ProcessEvent ( pFnGetCooldownRemainTime, &GetCooldownRemainTime_Parms, NULL );

	return GetCooldownRemainTime_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillBase.IsCooldowning
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioSkillBase::IsCooldowning ( )
{
	static UFunction* pFnIsCooldowning = NULL;

	if ( ! pFnIsCooldowning )
		pFnIsCooldowning = (UFunction*) UObject::GObjObjects()->Data[ 222488 ];

	ATGBioSkillBase_execIsCooldowning_Parms IsCooldowning_Parms;

	this->ProcessEvent ( pFnIsCooldowning, &IsCooldowning_Parms, NULL );

	return IsCooldowning_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillBase.SetModifCooldownTime
// [0x00020102] 
// Parameters infos:
// float                          Time                           ( CPF_Parm )

void ATGBioSkillBase::SetModifCooldownTime ( float Time )
{
	static UFunction* pFnSetModifCooldownTime = NULL;

	if ( ! pFnSetModifCooldownTime )
		pFnSetModifCooldownTime = (UFunction*) UObject::GObjObjects()->Data[ 223130 ];

	ATGBioSkillBase_execSetModifCooldownTime_Parms SetModifCooldownTime_Parms;
	SetModifCooldownTime_Parms.Time = Time;

	this->ProcessEvent ( pFnSetModifCooldownTime, &SetModifCooldownTime_Parms, NULL );
};

// Function TGBioGame.TGBioSkillBase.Initialize
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerController*       InOwnerPC                      ( CPF_Parm )
// class ATGBioSkillManager*      InOwnerSkillManager            ( CPF_Parm )

bool ATGBioSkillBase::Initialize ( class APlayerController* InOwnerPC, class ATGBioSkillManager* InOwnerSkillManager )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 223125 ];

	ATGBioSkillBase_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.InOwnerPC = InOwnerPC;
	Initialize_Parms.InOwnerSkillManager = InOwnerSkillManager;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	return Initialize_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillBase.PostBeginInitialize
// [0x00020000] 
// Parameters infos:

void ATGBioSkillBase::PostBeginInitialize ( )
{
	static UFunction* pFnPostBeginInitialize = NULL;

	if ( ! pFnPostBeginInitialize )
		pFnPostBeginInitialize = (UFunction*) UObject::GObjObjects()->Data[ 223124 ];

	ATGBioSkillBase_execPostBeginInitialize_Parms PostBeginInitialize_Parms;

	this->ProcessEvent ( pFnPostBeginInitialize, &PostBeginInitialize_Parms, NULL );
};

// Function TGBioGame.TGBioSkillBase.AddSkillComponent
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGBioSkillComponentBase* NewItem                        ( CPF_Parm )

bool ATGBioSkillBase::AddSkillComponent ( class ATGBioSkillComponentBase* NewItem )
{
	static UFunction* pFnAddSkillComponent = NULL;

	if ( ! pFnAddSkillComponent )
		pFnAddSkillComponent = (UFunction*) UObject::GObjObjects()->Data[ 223118 ];

	ATGBioSkillBase_execAddSkillComponent_Parms AddSkillComponent_Parms;
	AddSkillComponent_Parms.NewItem = NewItem;

	this->ProcessEvent ( pFnAddSkillComponent, &AddSkillComponent_Parms, NULL );

	return AddSkillComponent_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillBase.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATGBioSkillBase::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 223117 ];

	ATGBioSkillBase_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGBioGame.TGBioDmgType_HeroBlade.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGBioDmgType_HeroBlade::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 220201 ];

	UTGBioDmgType_HeroBlade_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DeletePlayerTipMessage
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::DeletePlayerTipMessage ( )
{
	static UFunction* pFnDeletePlayerTipMessage = NULL;

	if ( ! pFnDeletePlayerTipMessage )
		pFnDeletePlayerTipMessage = (UFunction*) UObject::GObjObjects()->Data[ 220785 ];

	ATGBioHUD_execDeletePlayerTipMessage_Parms DeletePlayerTipMessage_Parms;

	this->ProcessEvent ( pFnDeletePlayerTipMessage, &DeletePlayerTipMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.ShowVolumeTip
// [0x00020002] 
// Parameters infos:
// struct FString                 Tip                            ( CPF_Parm | CPF_NeedCtorLink )
// float                          Duration                       ( CPF_Parm )

void ATGBioHUD::ShowVolumeTip ( struct FString Tip, float Duration )
{
	static UFunction* pFnShowVolumeTip = NULL;

	if ( ! pFnShowVolumeTip )
		pFnShowVolumeTip = (UFunction*) UObject::GObjObjects()->Data[ 220782 ];

	ATGBioHUD_execShowVolumeTip_Parms ShowVolumeTip_Parms;
	memcpy ( &ShowVolumeTip_Parms.Tip, &Tip, 0xC );
	ShowVolumeTip_Parms.Duration = Duration;

	this->ProcessEvent ( pFnShowVolumeTip, &ShowVolumeTip_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.RemovePropMessage
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::RemovePropMessage ( )
{
	static UFunction* pFnRemovePropMessage = NULL;

	if ( ! pFnRemovePropMessage )
		pFnRemovePropMessage = (UFunction*) UObject::GObjObjects()->Data[ 220781 ];

	ATGBioHUD_execRemovePropMessage_Parms RemovePropMessage_Parms;

	this->ProcessEvent ( pFnRemovePropMessage, &RemovePropMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.ClientRoundReset
// [0x010201C2] 
// Parameters infos:

void ATGBioHUD::ClientRoundReset ( )
{
	static UFunction* pFnClientRoundReset = NULL;

	if ( ! pFnClientRoundReset )
		pFnClientRoundReset = (UFunction*) UObject::GObjObjects()->Data[ 220780 ];

	ATGBioHUD_execClientRoundReset_Parms ClientRoundReset_Parms;

	this->ProcessEvent ( pFnClientRoundReset, &ClientRoundReset_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.RoundReset
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::RoundReset ( )
{
	static UFunction* pFnRoundReset = NULL;

	if ( ! pFnRoundReset )
		pFnRoundReset = (UFunction*) UObject::GObjObjects()->Data[ 220779 ];

	ATGBioHUD_execRoundReset_Parms RoundReset_Parms;

	this->ProcessEvent ( pFnRoundReset, &RoundReset_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddGeneAugmentationAddHpMessage
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void ATGBioHUD::AddGeneAugmentationAddHpMessage ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddGeneAugmentationAddHpMessage = NULL;

	if ( ! pFnAddGeneAugmentationAddHpMessage )
		pFnAddGeneAugmentationAddHpMessage = (UFunction*) UObject::GObjObjects()->Data[ 220776 ];

	ATGBioHUD_execAddGeneAugmentationAddHpMessage_Parms AddGeneAugmentationAddHpMessage_Parms;
	AddGeneAugmentationAddHpMessage_Parms.PRI = PRI;
	AddGeneAugmentationAddHpMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddGeneAugmentationAddHpMessage, &AddGeneAugmentationAddHpMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddProtectTitleMessage
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// int                            Switch                         ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void ATGBioHUD::AddProtectTitleMessage ( class APlayerReplicationInfo* PRI, int Switch, float Duration )
{
	static UFunction* pFnAddProtectTitleMessage = NULL;

	if ( ! pFnAddProtectTitleMessage )
		pFnAddProtectTitleMessage = (UFunction*) UObject::GObjObjects()->Data[ 220772 ];

	ATGBioHUD_execAddProtectTitleMessage_Parms AddProtectTitleMessage_Parms;
	AddProtectTitleMessage_Parms.PRI = PRI;
	AddProtectTitleMessage_Parms.Switch = Switch;
	AddProtectTitleMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddProtectTitleMessage, &AddProtectTitleMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DeleteZombieAbsoreTitleMessage
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::DeleteZombieAbsoreTitleMessage ( )
{
	static UFunction* pFnDeleteZombieAbsoreTitleMessage = NULL;

	if ( ! pFnDeleteZombieAbsoreTitleMessage )
		pFnDeleteZombieAbsoreTitleMessage = (UFunction*) UObject::GObjObjects()->Data[ 220771 ];

	ATGBioHUD_execDeleteZombieAbsoreTitleMessage_Parms DeleteZombieAbsoreTitleMessage_Parms;

	this->ProcessEvent ( pFnDeleteZombieAbsoreTitleMessage, &DeleteZombieAbsoreTitleMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddZombieAbsoreTitleMessage
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void ATGBioHUD::AddZombieAbsoreTitleMessage ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddZombieAbsoreTitleMessage = NULL;

	if ( ! pFnAddZombieAbsoreTitleMessage )
		pFnAddZombieAbsoreTitleMessage = (UFunction*) UObject::GObjObjects()->Data[ 220768 ];

	ATGBioHUD_execAddZombieAbsoreTitleMessage_Parms AddZombieAbsoreTitleMessage_Parms;
	AddZombieAbsoreTitleMessage_Parms.PRI = PRI;
	AddZombieAbsoreTitleMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddZombieAbsoreTitleMessage, &AddZombieAbsoreTitleMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddZombieSelectSucceedMessage
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void ATGBioHUD::AddZombieSelectSucceedMessage ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddZombieSelectSucceedMessage = NULL;

	if ( ! pFnAddZombieSelectSucceedMessage )
		pFnAddZombieSelectSucceedMessage = (UFunction*) UObject::GObjObjects()->Data[ 220765 ];

	ATGBioHUD_execAddZombieSelectSucceedMessage_Parms AddZombieSelectSucceedMessage_Parms;
	AddZombieSelectSucceedMessage_Parms.PRI = PRI;
	AddZombieSelectSucceedMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddZombieSelectSucceedMessage, &AddZombieSelectSucceedMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.UseSkillTrampleCasualiesFeedbackMessage
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void ATGBioHUD::UseSkillTrampleCasualiesFeedbackMessage ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnUseSkillTrampleCasualiesFeedbackMessage = NULL;

	if ( ! pFnUseSkillTrampleCasualiesFeedbackMessage )
		pFnUseSkillTrampleCasualiesFeedbackMessage = (UFunction*) UObject::GObjObjects()->Data[ 220762 ];

	ATGBioHUD_execUseSkillTrampleCasualiesFeedbackMessage_Parms UseSkillTrampleCasualiesFeedbackMessage_Parms;
	UseSkillTrampleCasualiesFeedbackMessage_Parms.PRI = PRI;
	UseSkillTrampleCasualiesFeedbackMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnUseSkillTrampleCasualiesFeedbackMessage, &UseSkillTrampleCasualiesFeedbackMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.UseFlyCutterSkillAgainstFeedbackMessage
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void ATGBioHUD::UseFlyCutterSkillAgainstFeedbackMessage ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnUseFlyCutterSkillAgainstFeedbackMessage = NULL;

	if ( ! pFnUseFlyCutterSkillAgainstFeedbackMessage )
		pFnUseFlyCutterSkillAgainstFeedbackMessage = (UFunction*) UObject::GObjObjects()->Data[ 220759 ];

	ATGBioHUD_execUseFlyCutterSkillAgainstFeedbackMessage_Parms UseFlyCutterSkillAgainstFeedbackMessage_Parms;
	UseFlyCutterSkillAgainstFeedbackMessage_Parms.PRI = PRI;
	UseFlyCutterSkillAgainstFeedbackMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnUseFlyCutterSkillAgainstFeedbackMessage, &UseFlyCutterSkillAgainstFeedbackMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.UseSkillFeedBackMessage
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )
// int                            inSwitch                       ( CPF_Parm )

void ATGBioHUD::UseSkillFeedBackMessage ( class APlayerReplicationInfo* PRI, float Duration, int inSwitch )
{
	static UFunction* pFnUseSkillFeedBackMessage = NULL;

	if ( ! pFnUseSkillFeedBackMessage )
		pFnUseSkillFeedBackMessage = (UFunction*) UObject::GObjObjects()->Data[ 220755 ];

	ATGBioHUD_execUseSkillFeedBackMessage_Parms UseSkillFeedBackMessage_Parms;
	UseSkillFeedBackMessage_Parms.PRI = PRI;
	UseSkillFeedBackMessage_Parms.Duration = Duration;
	UseSkillFeedBackMessage_Parms.inSwitch = inSwitch;

	this->ProcessEvent ( pFnUseSkillFeedBackMessage, &UseSkillFeedBackMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DeleteUseSkillCountDownMessage
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::DeleteUseSkillCountDownMessage ( )
{
	static UFunction* pFnDeleteUseSkillCountDownMessage = NULL;

	if ( ! pFnDeleteUseSkillCountDownMessage )
		pFnDeleteUseSkillCountDownMessage = (UFunction*) UObject::GObjObjects()->Data[ 220754 ];

	ATGBioHUD_execDeleteUseSkillCountDownMessage_Parms DeleteUseSkillCountDownMessage_Parms;

	this->ProcessEvent ( pFnDeleteUseSkillCountDownMessage, &DeleteUseSkillCountDownMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddUseSkillCountDownMessage
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void ATGBioHUD::AddUseSkillCountDownMessage ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddUseSkillCountDownMessage = NULL;

	if ( ! pFnAddUseSkillCountDownMessage )
		pFnAddUseSkillCountDownMessage = (UFunction*) UObject::GObjObjects()->Data[ 220751 ];

	ATGBioHUD_execAddUseSkillCountDownMessage_Parms AddUseSkillCountDownMessage_Parms;
	AddUseSkillCountDownMessage_Parms.PRI = PRI;
	AddUseSkillCountDownMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddUseSkillCountDownMessage, &AddUseSkillCountDownMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddUseSkillAllowMessage
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )
// int                            inSwitch                       ( CPF_Parm )

void ATGBioHUD::AddUseSkillAllowMessage ( class APlayerReplicationInfo* PRI, float Duration, int inSwitch )
{
	static UFunction* pFnAddUseSkillAllowMessage = NULL;

	if ( ! pFnAddUseSkillAllowMessage )
		pFnAddUseSkillAllowMessage = (UFunction*) UObject::GObjObjects()->Data[ 220747 ];

	ATGBioHUD_execAddUseSkillAllowMessage_Parms AddUseSkillAllowMessage_Parms;
	AddUseSkillAllowMessage_Parms.PRI = PRI;
	AddUseSkillAllowMessage_Parms.Duration = Duration;
	AddUseSkillAllowMessage_Parms.inSwitch = inSwitch;

	this->ProcessEvent ( pFnAddUseSkillAllowMessage, &AddUseSkillAllowMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DeleteZombieReviveMessage
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::DeleteZombieReviveMessage ( )
{
	static UFunction* pFnDeleteZombieReviveMessage = NULL;

	if ( ! pFnDeleteZombieReviveMessage )
		pFnDeleteZombieReviveMessage = (UFunction*) UObject::GObjObjects()->Data[ 220746 ];

	ATGBioHUD_execDeleteZombieReviveMessage_Parms DeleteZombieReviveMessage_Parms;

	this->ProcessEvent ( pFnDeleteZombieReviveMessage, &DeleteZombieReviveMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddZombieReviveMessage
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )
// int                            inSwitch                       ( CPF_Parm )

void ATGBioHUD::AddZombieReviveMessage ( class APlayerReplicationInfo* PRI, float Duration, int inSwitch )
{
	static UFunction* pFnAddZombieReviveMessage = NULL;

	if ( ! pFnAddZombieReviveMessage )
		pFnAddZombieReviveMessage = (UFunction*) UObject::GObjObjects()->Data[ 220742 ];

	ATGBioHUD_execAddZombieReviveMessage_Parms AddZombieReviveMessage_Parms;
	AddZombieReviveMessage_Parms.PRI = PRI;
	AddZombieReviveMessage_Parms.Duration = Duration;
	AddZombieReviveMessage_Parms.inSwitch = inSwitch;

	this->ProcessEvent ( pFnAddZombieReviveMessage, &AddZombieReviveMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddTerminatorByKillMessage
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void ATGBioHUD::AddTerminatorByKillMessage ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddTerminatorByKillMessage = NULL;

	if ( ! pFnAddTerminatorByKillMessage )
		pFnAddTerminatorByKillMessage = (UFunction*) UObject::GObjObjects()->Data[ 220739 ];

	ATGBioHUD_execAddTerminatorByKillMessage_Parms AddTerminatorByKillMessage_Parms;
	AddTerminatorByKillMessage_Parms.PRI = PRI;
	AddTerminatorByKillMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddTerminatorByKillMessage, &AddTerminatorByKillMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddKillZombieUseHeroGunMessage
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void ATGBioHUD::AddKillZombieUseHeroGunMessage ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddKillZombieUseHeroGunMessage = NULL;

	if ( ! pFnAddKillZombieUseHeroGunMessage )
		pFnAddKillZombieUseHeroGunMessage = (UFunction*) UObject::GObjObjects()->Data[ 220736 ];

	ATGBioHUD_execAddKillZombieUseHeroGunMessage_Parms AddKillZombieUseHeroGunMessage_Parms;
	AddKillZombieUseHeroGunMessage_Parms.PRI = PRI;
	AddKillZombieUseHeroGunMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddKillZombieUseHeroGunMessage, &AddKillZombieUseHeroGunMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddKillZombieUseMeeMessage
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void ATGBioHUD::AddKillZombieUseMeeMessage ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddKillZombieUseMeeMessage = NULL;

	if ( ! pFnAddKillZombieUseMeeMessage )
		pFnAddKillZombieUseMeeMessage = (UFunction*) UObject::GObjObjects()->Data[ 220733 ];

	ATGBioHUD_execAddKillZombieUseMeeMessage_Parms AddKillZombieUseMeeMessage_Parms;
	AddKillZombieUseMeeMessage_Parms.PRI = PRI;
	AddKillZombieUseMeeMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddKillZombieUseMeeMessage, &AddKillZombieUseMeeMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddZombieGiveFailMessage
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void ATGBioHUD::AddZombieGiveFailMessage ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddZombieGiveFailMessage = NULL;

	if ( ! pFnAddZombieGiveFailMessage )
		pFnAddZombieGiveFailMessage = (UFunction*) UObject::GObjObjects()->Data[ 220730 ];

	ATGBioHUD_execAddZombieGiveFailMessage_Parms AddZombieGiveFailMessage_Parms;
	AddZombieGiveFailMessage_Parms.PRI = PRI;
	AddZombieGiveFailMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddZombieGiveFailMessage, &AddZombieGiveFailMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddHumanHeroDieMessage
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void ATGBioHUD::AddHumanHeroDieMessage ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddHumanHeroDieMessage = NULL;

	if ( ! pFnAddHumanHeroDieMessage )
		pFnAddHumanHeroDieMessage = (UFunction*) UObject::GObjObjects()->Data[ 220727 ];

	ATGBioHUD_execAddHumanHeroDieMessage_Parms AddHumanHeroDieMessage_Parms;
	AddHumanHeroDieMessage_Parms.PRI = PRI;
	AddHumanHeroDieMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddHumanHeroDieMessage, &AddHumanHeroDieMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddRoundStartTimerMessage
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// int                            Duration                       ( CPF_Parm )

void ATGBioHUD::AddRoundStartTimerMessage ( class APlayerReplicationInfo* PRI, int Duration )
{
	static UFunction* pFnAddRoundStartTimerMessage = NULL;

	if ( ! pFnAddRoundStartTimerMessage )
		pFnAddRoundStartTimerMessage = (UFunction*) UObject::GObjObjects()->Data[ 220724 ];

	ATGBioHUD_execAddRoundStartTimerMessage_Parms AddRoundStartTimerMessage_Parms;
	AddRoundStartTimerMessage_Parms.PRI = PRI;
	AddRoundStartTimerMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddRoundStartTimerMessage, &AddRoundStartTimerMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddTerminatorMessage
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void ATGBioHUD::AddTerminatorMessage ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddTerminatorMessage = NULL;

	if ( ! pFnAddTerminatorMessage )
		pFnAddTerminatorMessage = (UFunction*) UObject::GObjObjects()->Data[ 220721 ];

	ATGBioHUD_execAddTerminatorMessage_Parms AddTerminatorMessage_Parms;
	AddTerminatorMessage_Parms.PRI = PRI;
	AddTerminatorMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddTerminatorMessage, &AddTerminatorMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddHumanAttackMessage
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void ATGBioHUD::AddHumanAttackMessage ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddHumanAttackMessage = NULL;

	if ( ! pFnAddHumanAttackMessage )
		pFnAddHumanAttackMessage = (UFunction*) UObject::GObjObjects()->Data[ 220718 ];

	ATGBioHUD_execAddHumanAttackMessage_Parms AddHumanAttackMessage_Parms;
	AddHumanAttackMessage_Parms.PRI = PRI;
	AddHumanAttackMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddHumanAttackMessage, &AddHumanAttackMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddRandomPickupMessage
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )
// struct FString                 weaponStr                      ( CPF_Parm | CPF_NeedCtorLink )

void ATGBioHUD::AddRandomPickupMessage ( class APlayerReplicationInfo* PRI, float Duration, struct FString weaponStr )
{
	static UFunction* pFnAddRandomPickupMessage = NULL;

	if ( ! pFnAddRandomPickupMessage )
		pFnAddRandomPickupMessage = (UFunction*) UObject::GObjObjects()->Data[ 220714 ];

	ATGBioHUD_execAddRandomPickupMessage_Parms AddRandomPickupMessage_Parms;
	AddRandomPickupMessage_Parms.PRI = PRI;
	AddRandomPickupMessage_Parms.Duration = Duration;
	memcpy ( &AddRandomPickupMessage_Parms.weaponStr, &weaponStr, 0xC );

	this->ProcessEvent ( pFnAddRandomPickupMessage, &AddRandomPickupMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddFetchedPropMessage
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// unsigned char                  FetchedPropType                ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void ATGBioHUD::AddFetchedPropMessage ( class APlayerReplicationInfo* PRI, unsigned char FetchedPropType, float Duration )
{
	static UFunction* pFnAddFetchedPropMessage = NULL;

	if ( ! pFnAddFetchedPropMessage )
		pFnAddFetchedPropMessage = (UFunction*) UObject::GObjObjects()->Data[ 220710 ];

	ATGBioHUD_execAddFetchedPropMessage_Parms AddFetchedPropMessage_Parms;
	AddFetchedPropMessage_Parms.PRI = PRI;
	AddFetchedPropMessage_Parms.FetchedPropType = FetchedPropType;
	AddFetchedPropMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddFetchedPropMessage, &AddFetchedPropMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddKilledByHeroGunWeaponFeedback
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::AddKilledByHeroGunWeaponFeedback ( )
{
	static UFunction* pFnAddKilledByHeroGunWeaponFeedback = NULL;

	if ( ! pFnAddKilledByHeroGunWeaponFeedback )
		pFnAddKilledByHeroGunWeaponFeedback = (UFunction*) UObject::GObjObjects()->Data[ 220709 ];

	ATGBioHUD_execAddKilledByHeroGunWeaponFeedback_Parms AddKilledByHeroGunWeaponFeedback_Parms;

	this->ProcessEvent ( pFnAddKilledByHeroGunWeaponFeedback, &AddKilledByHeroGunWeaponFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddKilledByMeeWeaponFeedback
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::AddKilledByMeeWeaponFeedback ( )
{
	static UFunction* pFnAddKilledByMeeWeaponFeedback = NULL;

	if ( ! pFnAddKilledByMeeWeaponFeedback )
		pFnAddKilledByMeeWeaponFeedback = (UFunction*) UObject::GObjObjects()->Data[ 220708 ];

	ATGBioHUD_execAddKilledByMeeWeaponFeedback_Parms AddKilledByMeeWeaponFeedback_Parms;

	this->ProcessEvent ( pFnAddKilledByMeeWeaponFeedback, &AddKilledByMeeWeaponFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddWeaponArrivedFeedback
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::AddWeaponArrivedFeedback ( )
{
	static UFunction* pFnAddWeaponArrivedFeedback = NULL;

	if ( ! pFnAddWeaponArrivedFeedback )
		pFnAddWeaponArrivedFeedback = (UFunction*) UObject::GObjObjects()->Data[ 220707 ];

	ATGBioHUD_execAddWeaponArrivedFeedback_Parms AddWeaponArrivedFeedback_Parms;

	this->ProcessEvent ( pFnAddWeaponArrivedFeedback, &AddWeaponArrivedFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddBecomeHumanHeroStateFeedback
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::AddBecomeHumanHeroStateFeedback ( )
{
	static UFunction* pFnAddBecomeHumanHeroStateFeedback = NULL;

	if ( ! pFnAddBecomeHumanHeroStateFeedback )
		pFnAddBecomeHumanHeroStateFeedback = (UFunction*) UObject::GObjObjects()->Data[ 220706 ];

	ATGBioHUD_execAddBecomeHumanHeroStateFeedback_Parms AddBecomeHumanHeroStateFeedback_Parms;

	this->ProcessEvent ( pFnAddBecomeHumanHeroStateFeedback, &AddBecomeHumanHeroStateFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddCanChangeHumanHeroFeedback
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::AddCanChangeHumanHeroFeedback ( )
{
	static UFunction* pFnAddCanChangeHumanHeroFeedback = NULL;

	if ( ! pFnAddCanChangeHumanHeroFeedback )
		pFnAddCanChangeHumanHeroFeedback = (UFunction*) UObject::GObjObjects()->Data[ 220705 ];

	ATGBioHUD_execAddCanChangeHumanHeroFeedback_Parms AddCanChangeHumanHeroFeedback_Parms;

	this->ProcessEvent ( pFnAddCanChangeHumanHeroFeedback, &AddCanChangeHumanHeroFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddHumanHeroStateFeedback
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::AddHumanHeroStateFeedback ( )
{
	static UFunction* pFnAddHumanHeroStateFeedback = NULL;

	if ( ! pFnAddHumanHeroStateFeedback )
		pFnAddHumanHeroStateFeedback = (UFunction*) UObject::GObjObjects()->Data[ 220704 ];

	ATGBioHUD_execAddHumanHeroStateFeedback_Parms AddHumanHeroStateFeedback_Parms;

	this->ProcessEvent ( pFnAddHumanHeroStateFeedback, &AddHumanHeroStateFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddKillHumanHeroFeedback
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::AddKillHumanHeroFeedback ( )
{
	static UFunction* pFnAddKillHumanHeroFeedback = NULL;

	if ( ! pFnAddKillHumanHeroFeedback )
		pFnAddKillHumanHeroFeedback = (UFunction*) UObject::GObjObjects()->Data[ 220703 ];

	ATGBioHUD_execAddKillHumanHeroFeedback_Parms AddKillHumanHeroFeedback_Parms;

	this->ProcessEvent ( pFnAddKillHumanHeroFeedback, &AddKillHumanHeroFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddMatchInfoMessageFeedback
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::AddMatchInfoMessageFeedback ( )
{
	static UFunction* pFnAddMatchInfoMessageFeedback = NULL;

	if ( ! pFnAddMatchInfoMessageFeedback )
		pFnAddMatchInfoMessageFeedback = (UFunction*) UObject::GObjObjects()->Data[ 220702 ];

	ATGBioHUD_execAddMatchInfoMessageFeedback_Parms AddMatchInfoMessageFeedback_Parms;

	this->ProcessEvent ( pFnAddMatchInfoMessageFeedback, &AddMatchInfoMessageFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DebugFeedback
// [0x00024002] 
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// int                            MultiKillLevel                 ( CPF_OptionalParm | CPF_Parm )

void ATGBioHUD::DebugFeedback ( int Index, int MultiKillLevel )
{
	static UFunction* pFnDebugFeedback = NULL;

	if ( ! pFnDebugFeedback )
		pFnDebugFeedback = (UFunction*) UObject::GObjObjects()->Data[ 220699 ];

	ATGBioHUD_execDebugFeedback_Parms DebugFeedback_Parms;
	DebugFeedback_Parms.Index = Index;
	DebugFeedback_Parms.MultiKillLevel = MultiKillLevel;

	this->ProcessEvent ( pFnDebugFeedback, &DebugFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddZombieDamageFeedback
// [0x00020002] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm )

void ATGBioHUD::AddZombieDamageFeedback ( int Damage )
{
	static UFunction* pFnAddZombieDamageFeedback = NULL;

	if ( ! pFnAddZombieDamageFeedback )
		pFnAddZombieDamageFeedback = (UFunction*) UObject::GObjObjects()->Data[ 220689 ];

	ATGBioHUD_execAddZombieDamageFeedback_Parms AddZombieDamageFeedback_Parms;
	AddZombieDamageFeedback_Parms.Damage = Damage;

	this->ProcessEvent ( pFnAddZombieDamageFeedback, &AddZombieDamageFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddOneKillFeedback
// [0x00020002] 
// Parameters infos:
// int                            NumToAdd                       ( CPF_Parm )

void ATGBioHUD::AddOneKillFeedback ( int NumToAdd )
{
	static UFunction* pFnAddOneKillFeedback = NULL;

	if ( ! pFnAddOneKillFeedback )
		pFnAddOneKillFeedback = (UFunction*) UObject::GObjObjects()->Data[ 220687 ];

	ATGBioHUD_execAddOneKillFeedback_Parms AddOneKillFeedback_Parms;
	AddOneKillFeedback_Parms.NumToAdd = NumToAdd;

	this->ProcessEvent ( pFnAddOneKillFeedback, &AddOneKillFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DisplayZombieAbsoringProgressBar
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::DisplayZombieAbsoringProgressBar ( )
{
	static UFunction* pFnDisplayZombieAbsoringProgressBar = NULL;

	if ( ! pFnDisplayZombieAbsoringProgressBar )
		pFnDisplayZombieAbsoringProgressBar = (UFunction*) UObject::GObjObjects()->Data[ 220683 ];

	ATGBioHUD_execDisplayZombieAbsoringProgressBar_Parms DisplayZombieAbsoringProgressBar_Parms;

	this->ProcessEvent ( pFnDisplayZombieAbsoringProgressBar, &DisplayZombieAbsoringProgressBar_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddKillFeedBackMessage
// [0x00024002] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// int                            MultiKillLevel                 ( CPF_Parm )
// int                            Priority                       ( CPF_Parm )
// unsigned long                  bUseInPriority                 ( CPF_Parm )
// class APlayerReplicationInfo*  KillerPRI                      ( CPF_Parm )
// class APlayerReplicationInfo*  KilledPRI                      ( CPF_Parm )
// int                            OneShotKillNum                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIsOneShotDeath                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bThroughWall                   ( CPF_OptionalParm | CPF_Parm )

void ATGBioHUD::AddKillFeedBackMessage ( class UClass* DamageType, int MultiKillLevel, int Priority, unsigned long bUseInPriority, class APlayerReplicationInfo* KillerPRI, class APlayerReplicationInfo* KilledPRI, int OneShotKillNum, unsigned long bIsOneShotDeath, unsigned long bThroughWall )
{
	static UFunction* pFnAddKillFeedBackMessage = NULL;

	if ( ! pFnAddKillFeedBackMessage )
		pFnAddKillFeedBackMessage = (UFunction*) UObject::GObjObjects()->Data[ 220671 ];

	ATGBioHUD_execAddKillFeedBackMessage_Parms AddKillFeedBackMessage_Parms;
	AddKillFeedBackMessage_Parms.DamageType = DamageType;
	AddKillFeedBackMessage_Parms.MultiKillLevel = MultiKillLevel;
	AddKillFeedBackMessage_Parms.Priority = Priority;
	AddKillFeedBackMessage_Parms.bUseInPriority = bUseInPriority;
	AddKillFeedBackMessage_Parms.KillerPRI = KillerPRI;
	AddKillFeedBackMessage_Parms.KilledPRI = KilledPRI;
	AddKillFeedBackMessage_Parms.OneShotKillNum = OneShotKillNum;
	AddKillFeedBackMessage_Parms.bIsOneShotDeath = bIsOneShotDeath;
	AddKillFeedBackMessage_Parms.bThroughWall = bThroughWall;

	this->ProcessEvent ( pFnAddKillFeedBackMessage, &AddKillFeedBackMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DisplayAvatar
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::DisplayAvatar ( )
{
	static UFunction* pFnDisplayAvatar = NULL;

	if ( ! pFnDisplayAvatar )
		pFnDisplayAvatar = (UFunction*) UObject::GObjObjects()->Data[ 220670 ];

	ATGBioHUD_execDisplayAvatar_Parms DisplayAvatar_Parms;

	this->ProcessEvent ( pFnDisplayAvatar, &DisplayAvatar_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.NotifyZombieRestoreHP
// [0x00020000] 
// Parameters infos:
// unsigned long                  bRestore                       ( CPF_Parm )

void ATGBioHUD::NotifyZombieRestoreHP ( unsigned long bRestore )
{
	static UFunction* pFnNotifyZombieRestoreHP = NULL;

	if ( ! pFnNotifyZombieRestoreHP )
		pFnNotifyZombieRestoreHP = (UFunction*) UObject::GObjObjects()->Data[ 220668 ];

	ATGBioHUD_execNotifyZombieRestoreHP_Parms NotifyZombieRestoreHP_Parms;
	NotifyZombieRestoreHP_Parms.bRestore = bRestore;

	this->ProcessEvent ( pFnNotifyZombieRestoreHP, &NotifyZombieRestoreHP_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddTimerMessageFeedback
// [0x00020002] 
// Parameters infos:
// int                            RemainingSeconds               ( CPF_Parm )

void ATGBioHUD::AddTimerMessageFeedback ( int RemainingSeconds )
{
	static UFunction* pFnAddTimerMessageFeedback = NULL;

	if ( ! pFnAddTimerMessageFeedback )
		pFnAddTimerMessageFeedback = (UFunction*) UObject::GObjObjects()->Data[ 220662 ];

	ATGBioHUD_execAddTimerMessageFeedback_Parms AddTimerMessageFeedback_Parms;
	AddTimerMessageFeedback_Parms.RemainingSeconds = RemainingSeconds;

	this->ProcessEvent ( pFnAddTimerMessageFeedback, &AddTimerMessageFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DisplayTeamPopulation
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::DisplayTeamPopulation ( )
{
	static UFunction* pFnDisplayTeamPopulation = NULL;

	if ( ! pFnDisplayTeamPopulation )
		pFnDisplayTeamPopulation = (UFunction*) UObject::GObjObjects()->Data[ 220649 ];

	ATGBioHUD_execDisplayTeamPopulation_Parms DisplayTeamPopulation_Parms;

	this->ProcessEvent ( pFnDisplayTeamPopulation, &DisplayTeamPopulation_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DisplayTeamScore
// [0x00820002] 
// Parameters infos:

void ATGBioHUD::DisplayTeamScore ( )
{
	static UFunction* pFnDisplayTeamScore = NULL;

	if ( ! pFnDisplayTeamScore )
		pFnDisplayTeamScore = (UFunction*) UObject::GObjObjects()->Data[ 220640 ];

	ATGBioHUD_execDisplayTeamScore_Parms DisplayTeamScore_Parms;

	this->ProcessEvent ( pFnDisplayTeamScore, &DisplayTeamScore_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DisplayVS
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::DisplayVS ( )
{
	static UFunction* pFnDisplayVS = NULL;

	if ( ! pFnDisplayVS )
		pFnDisplayVS = (UFunction*) UObject::GObjObjects()->Data[ 220630 ];

	ATGBioHUD_execDisplayVS_Parms DisplayVS_Parms;

	this->ProcessEvent ( pFnDisplayVS, &DisplayVS_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DrawLivingHud
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::DrawLivingHud ( )
{
	static UFunction* pFnDrawLivingHud = NULL;

	if ( ! pFnDrawLivingHud )
		pFnDrawLivingHud = (UFunction*) UObject::GObjObjects()->Data[ 220629 ];

	ATGBioHUD_execDrawLivingHud_Parms DrawLivingHud_Parms;

	this->ProcessEvent ( pFnDrawLivingHud, &DrawLivingHud_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DisplayAccumulateScore
// [0x00020000] 
// Parameters infos:

void ATGBioHUD::DisplayAccumulateScore ( )
{
	static UFunction* pFnDisplayAccumulateScore = NULL;

	if ( ! pFnDisplayAccumulateScore )
		pFnDisplayAccumulateScore = (UFunction*) UObject::GObjObjects()->Data[ 220628 ];

	ATGBioHUD_execDisplayAccumulateScore_Parms DisplayAccumulateScore_Parms;

	this->ProcessEvent ( pFnDisplayAccumulateScore, &DisplayAccumulateScore_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DrawRandomWeaponIcon
// [0x00820002] 
// Parameters infos:
// class ATGBioPickupFactoryBase* inputWF                        ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FRotator                cameraRot                      ( CPF_Parm )

void ATGBioHUD::DrawRandomWeaponIcon ( class ATGBioPickupFactoryBase* inputWF, struct FVector CameraPosition, struct FRotator cameraRot )
{
	static UFunction* pFnDrawRandomWeaponIcon = NULL;

	if ( ! pFnDrawRandomWeaponIcon )
		pFnDrawRandomWeaponIcon = (UFunction*) UObject::GObjObjects()->Data[ 220605 ];

	ATGBioHUD_execDrawRandomWeaponIcon_Parms DrawRandomWeaponIcon_Parms;
	DrawRandomWeaponIcon_Parms.inputWF = inputWF;
	memcpy ( &DrawRandomWeaponIcon_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &DrawRandomWeaponIcon_Parms.cameraRot, &cameraRot, 0xC );

	this->ProcessEvent ( pFnDrawRandomWeaponIcon, &DrawRandomWeaponIcon_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DrawRadWeaponIcon
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::DrawRadWeaponIcon ( )
{
	static UFunction* pFnDrawRadWeaponIcon = NULL;

	if ( ! pFnDrawRadWeaponIcon )
		pFnDrawRadWeaponIcon = (UFunction*) UObject::GObjObjects()->Data[ 220601 ];

	ATGBioHUD_execDrawRadWeaponIcon_Parms DrawRadWeaponIcon_Parms;

	this->ProcessEvent ( pFnDrawRadWeaponIcon, &DrawRadWeaponIcon_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DrawOneHumanHero
// [0x00820002] 
// Parameters infos:
// class ATGBioHumanHeroPawn*     TPawn                          ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FRotator                cameraRot                      ( CPF_Parm )

void ATGBioHUD::DrawOneHumanHero ( class ATGBioHumanHeroPawn* TPawn, struct FVector CameraPosition, struct FRotator cameraRot )
{
	static UFunction* pFnDrawOneHumanHero = NULL;

	if ( ! pFnDrawOneHumanHero )
		pFnDrawOneHumanHero = (UFunction*) UObject::GObjObjects()->Data[ 220581 ];

	ATGBioHUD_execDrawOneHumanHero_Parms DrawOneHumanHero_Parms;
	DrawOneHumanHero_Parms.TPawn = TPawn;
	memcpy ( &DrawOneHumanHero_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &DrawOneHumanHero_Parms.cameraRot, &cameraRot, 0xC );

	this->ProcessEvent ( pFnDrawOneHumanHero, &DrawOneHumanHero_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DrawHumanHeroNameAndIcon
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::DrawHumanHeroNameAndIcon ( )
{
	static UFunction* pFnDrawHumanHeroNameAndIcon = NULL;

	if ( ! pFnDrawHumanHeroNameAndIcon )
		pFnDrawHumanHeroNameAndIcon = (UFunction*) UObject::GObjObjects()->Data[ 220579 ];

	ATGBioHUD_execDrawHumanHeroNameAndIcon_Parms DrawHumanHeroNameAndIcon_Parms;

	this->ProcessEvent ( pFnDrawHumanHeroNameAndIcon, &DrawHumanHeroNameAndIcon_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DrawHumUseItemScreenLoc
// [0x00820002] 
// Parameters infos:

void ATGBioHUD::DrawHumUseItemScreenLoc ( )
{
	static UFunction* pFnDrawHumUseItemScreenLoc = NULL;

	if ( ! pFnDrawHumUseItemScreenLoc )
		pFnDrawHumUseItemScreenLoc = (UFunction*) UObject::GObjObjects()->Data[ 220562 ];

	ATGBioHUD_execDrawHumUseItemScreenLoc_Parms DrawHumUseItemScreenLoc_Parms;

	this->ProcessEvent ( pFnDrawHumUseItemScreenLoc, &DrawHumUseItemScreenLoc_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DrawTerminatorScreenLoc
// [0x00820002] 
// Parameters infos:

void ATGBioHUD::DrawTerminatorScreenLoc ( )
{
	static UFunction* pFnDrawTerminatorScreenLoc = NULL;

	if ( ! pFnDrawTerminatorScreenLoc )
		pFnDrawTerminatorScreenLoc = (UFunction*) UObject::GObjObjects()->Data[ 220540 ];

	ATGBioHUD_execDrawTerminatorScreenLoc_Parms DrawTerminatorScreenLoc_Parms;

	this->ProcessEvent ( pFnDrawTerminatorScreenLoc, &DrawTerminatorScreenLoc_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DisplaySpawnProtectionProgress
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::DisplaySpawnProtectionProgress ( )
{
	static UFunction* pFnDisplaySpawnProtectionProgress = NULL;

	if ( ! pFnDisplaySpawnProtectionProgress )
		pFnDisplaySpawnProtectionProgress = (UFunction*) UObject::GObjObjects()->Data[ 220536 ];

	ATGBioHUD_execDisplaySpawnProtectionProgress_Parms DisplaySpawnProtectionProgress_Parms;

	this->ProcessEvent ( pFnDisplaySpawnProtectionProgress, &DisplaySpawnProtectionProgress_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DrawHUD
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::DrawHUD ( )
{
	static UFunction* pFnDrawHUD = NULL;

	if ( ! pFnDrawHUD )
		pFnDrawHUD = (UFunction*) UObject::GObjObjects()->Data[ 220535 ];

	ATGBioHUD_execDrawHUD_Parms DrawHUD_Parms;

	this->ProcessEvent ( pFnDrawHUD, &DrawHUD_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.AddEndGameIcon
// [0x00020002] 
// Parameters infos:
// int                            EndGameIndex                   ( CPF_Parm )

void ATGBioHUD::AddEndGameIcon ( int EndGameIndex )
{
	static UFunction* pFnAddEndGameIcon = NULL;

	if ( ! pFnAddEndGameIcon )
		pFnAddEndGameIcon = (UFunction*) UObject::GObjObjects()->Data[ 220530 ];

	ATGBioHUD_execAddEndGameIcon_Parms AddEndGameIcon_Parms;
	AddEndGameIcon_Parms.EndGameIndex = EndGameIndex;

	this->ProcessEvent ( pFnAddEndGameIcon, &AddEndGameIcon_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGBioHUD::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 220529 ];

	ATGBioHUD_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.ShowHurtPawn
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::ShowHurtPawn ( )
{
	static UFunction* pFnShowHurtPawn = NULL;

	if ( ! pFnShowHurtPawn )
		pFnShowHurtPawn = (UFunction*) UObject::GObjObjects()->Data[ 220521 ];

	ATGBioHUD_execShowHurtPawn_Parms ShowHurtPawn_Parms;

	this->ProcessEvent ( pFnShowHurtPawn, &ShowHurtPawn_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.SetHurtValue
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::SetHurtValue ( )
{
	static UFunction* pFnSetHurtValue = NULL;

	if ( ! pFnSetHurtValue )
		pFnSetHurtValue = (UFunction*) UObject::GObjObjects()->Data[ 220519 ];

	ATGBioHUD_execSetHurtValue_Parms SetHurtValue_Parms;

	this->ProcessEvent ( pFnSetHurtValue, &SetHurtValue_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DropDriverSkill
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::DropDriverSkill ( )
{
	static UFunction* pFnDropDriverSkill = NULL;

	if ( ! pFnDropDriverSkill )
		pFnDropDriverSkill = (UFunction*) UObject::GObjObjects()->Data[ 220517 ];

	ATGBioHUD_execDropDriverSkill_Parms DropDriverSkill_Parms;

	this->ProcessEvent ( pFnDropDriverSkill, &DropDriverSkill_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.StartDriverSkill
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::StartDriverSkill ( )
{
	static UFunction* pFnStartDriverSkill = NULL;

	if ( ! pFnStartDriverSkill )
		pFnStartDriverSkill = (UFunction*) UObject::GObjObjects()->Data[ 220513 ];

	ATGBioHUD_execStartDriverSkill_Parms StartDriverSkill_Parms;

	this->ProcessEvent ( pFnStartDriverSkill, &StartDriverSkill_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.StartDriverChangeHumanHero
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::StartDriverChangeHumanHero ( )
{
	static UFunction* pFnStartDriverChangeHumanHero = NULL;

	if ( ! pFnStartDriverChangeHumanHero )
		pFnStartDriverChangeHumanHero = (UFunction*) UObject::GObjObjects()->Data[ 220511 ];

	ATGBioHUD_execStartDriverChangeHumanHero_Parms StartDriverChangeHumanHero_Parms;

	this->ProcessEvent ( pFnStartDriverChangeHumanHero, &StartDriverChangeHumanHero_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.StartDriverHurtPawn
// [0x00020002] 
// Parameters infos:
// int                            iHurt                          ( CPF_Parm )
// struct FVector                 vPos                           ( CPF_Parm )

void ATGBioHUD::StartDriverHurtPawn ( int iHurt, struct FVector vPos )
{
	static UFunction* pFnStartDriverHurtPawn = NULL;

	if ( ! pFnStartDriverHurtPawn )
		pFnStartDriverHurtPawn = (UFunction*) UObject::GObjObjects()->Data[ 220504 ];

	ATGBioHUD_execStartDriverHurtPawn_Parms StartDriverHurtPawn_Parms;
	StartDriverHurtPawn_Parms.iHurt = iHurt;
	memcpy ( &StartDriverHurtPawn_Parms.vPos, &vPos, 0xC );

	this->ProcessEvent ( pFnStartDriverHurtPawn, &StartDriverHurtPawn_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.StartDriveOneKill
// [0x00020002] 
// Parameters infos:

void ATGBioHUD::StartDriveOneKill ( )
{
	static UFunction* pFnStartDriveOneKill = NULL;

	if ( ! pFnStartDriveOneKill )
		pFnStartDriveOneKill = (UFunction*) UObject::GObjObjects()->Data[ 220493 ];

	ATGBioHUD_execStartDriveOneKill_Parms StartDriveOneKill_Parms;

	this->ProcessEvent ( pFnStartDriveOneKill, &StartDriveOneKill_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.UpdateFeedbackScreenLoc
// [0x00820002] 
// Parameters infos:

void ATGBioHUD::UpdateFeedbackScreenLoc ( )
{
	static UFunction* pFnUpdateFeedbackScreenLoc = NULL;

	if ( ! pFnUpdateFeedbackScreenLoc )
		pFnUpdateFeedbackScreenLoc = (UFunction*) UObject::GObjObjects()->Data[ 220487 ];

	ATGBioHUD_execUpdateFeedbackScreenLoc_Parms UpdateFeedbackScreenLoc_Parms;

	this->ProcessEvent ( pFnUpdateFeedbackScreenLoc, &UpdateFeedbackScreenLoc_Parms, NULL );
};

// Function TGBioGame.TGBioHUD.DrawDriveTexture
// [0x00824002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          StartTime                      ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )
// class UTexture2D*              Tex                            ( CPF_Parm )
// struct FVector2D               StartPos                       ( CPF_Parm )
// struct FVector2D               DestPos                        ( CPF_Parm )
// struct FVector2D               ScaleRange                     ( CPF_Parm )
// struct FVector2D               AlphaRange                     ( CPF_Parm )
// unsigned long                  bAlwaysDisplay                 ( CPF_OptionalParm | CPF_Parm )

bool ATGBioHUD::DrawDriveTexture ( float StartTime, float Duration, class UTexture2D* Tex, struct FVector2D StartPos, struct FVector2D DestPos, struct FVector2D ScaleRange, struct FVector2D AlphaRange, unsigned long bAlwaysDisplay )
{
	static UFunction* pFnDrawDriveTexture = NULL;

	if ( ! pFnDrawDriveTexture )
		pFnDrawDriveTexture = (UFunction*) UObject::GObjObjects()->Data[ 220467 ];

	ATGBioHUD_execDrawDriveTexture_Parms DrawDriveTexture_Parms;
	DrawDriveTexture_Parms.StartTime = StartTime;
	DrawDriveTexture_Parms.Duration = Duration;
	DrawDriveTexture_Parms.Tex = Tex;
	memcpy ( &DrawDriveTexture_Parms.StartPos, &StartPos, 0x8 );
	memcpy ( &DrawDriveTexture_Parms.DestPos, &DestPos, 0x8 );
	memcpy ( &DrawDriveTexture_Parms.ScaleRange, &ScaleRange, 0x8 );
	memcpy ( &DrawDriveTexture_Parms.AlphaRange, &AlphaRange, 0x8 );
	DrawDriveTexture_Parms.bAlwaysDisplay = bAlwaysDisplay;

	this->ProcessEvent ( pFnDrawDriveTexture, &DrawDriveTexture_Parms, NULL );

	return DrawDriveTexture_Parms.ReturnValue;
};

// Function TGBioGame.TGBioDmgType_HeroBowArrow.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGBioDmgType_HeroBowArrow::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 220223 ];

	UTGBioDmgType_HeroBowArrow_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGBioGame.TGBioMessage_KillZombieUseMee.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioMessage_KillZombieUseMee::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 222098 ];

	UTGBioMessage_KillZombieUseMee_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_KillZombieUseMee.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioMessage_KillZombieUseMee::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 222092 ];

	UTGBioMessage_KillZombieUseMee_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioMessage_KillZombieUseHeroGun.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioMessage_KillZombieUseHeroGun::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 222084 ];

	UTGBioMessage_KillZombieUseHeroGun_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_KillZombieUseHeroGun.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioMessage_KillZombieUseHeroGun::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 222078 ];

	UTGBioMessage_KillZombieUseHeroGun_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioZombieInventoryManager.HandlePickupQuery
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  ItemClass                      ( CPF_Parm )
// class AActor*                  Pickup                         ( CPF_Parm )

bool ATGBioZombieInventoryManager::HandlePickupQuery ( class UClass* ItemClass, class AActor* Pickup )
{
	static UFunction* pFnHandlePickupQuery = NULL;

	if ( ! pFnHandlePickupQuery )
		pFnHandlePickupQuery = (UFunction*) UObject::GObjObjects()->Data[ 223878 ];

	ATGBioZombieInventoryManager_execHandlePickupQuery_Parms HandlePickupQuery_Parms;
	HandlePickupQuery_Parms.ItemClass = ItemClass;
	HandlePickupQuery_Parms.Pickup = Pickup;

	this->ProcessEvent ( pFnHandlePickupQuery, &HandlePickupQuery_Parms, NULL );

	return HandlePickupQuery_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_GeneAugmentationAddHp.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioMessage_GeneAugmentationAddHp::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 222013 ];

	UTGBioMessage_GeneAugmentationAddHp_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_GeneAugmentationAddHp.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioMessage_GeneAugmentationAddHp::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 222007 ];

	UTGBioMessage_GeneAugmentationAddHp_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioWeap_HostZombieMeleeWeapon.SetupArmsAnim
// [0x00020102] 
// Parameters infos:

void ATGBioWeap_HostZombieMeleeWeapon::SetupArmsAnim ( )
{
	static UFunction* pFnSetupArmsAnim = NULL;

	if ( ! pFnSetupArmsAnim )
		pFnSetupArmsAnim = (UFunction*) UObject::GObjObjects()->Data[ 223695 ];

	ATGBioWeap_HostZombieMeleeWeapon_execSetupArmsAnim_Parms SetupArmsAnim_Parms;

	this->ProcessEvent ( pFnSetupArmsAnim, &SetupArmsAnim_Parms, NULL );
};

// Function TGBioGame.TGBioWeap_HostZombieMeleeWeapon.PlayFirstPersonAnim
// [0x00020102] 
// Parameters infos:

void ATGBioWeap_HostZombieMeleeWeapon::PlayFirstPersonAnim ( )
{
	static UFunction* pFnPlayFirstPersonAnim = NULL;

	if ( ! pFnPlayFirstPersonAnim )
		pFnPlayFirstPersonAnim = (UFunction*) UObject::GObjObjects()->Data[ 223692 ];

	ATGBioWeap_HostZombieMeleeWeapon_execPlayFirstPersonAnim_Parms PlayFirstPersonAnim_Parms;

	this->ProcessEvent ( pFnPlayFirstPersonAnim, &PlayFirstPersonAnim_Parms, NULL );
};

// Function TGBioGame.TGBioWeap_HostZombieMeleeWeapon.UpdateLevelInfoFromInstigator
// [0x00020102] 
// Parameters infos:

void ATGBioWeap_HostZombieMeleeWeapon::UpdateLevelInfoFromInstigator ( )
{
	static UFunction* pFnUpdateLevelInfoFromInstigator = NULL;

	if ( ! pFnUpdateLevelInfoFromInstigator )
		pFnUpdateLevelInfoFromInstigator = (UFunction*) UObject::GObjObjects()->Data[ 223685 ];

	ATGBioWeap_HostZombieMeleeWeapon_execUpdateLevelInfoFromInstigator_Parms UpdateLevelInfoFromInstigator_Parms;

	this->ProcessEvent ( pFnUpdateLevelInfoFromInstigator, &UpdateLevelInfoFromInstigator_Parms, NULL );
};

// Function TGBioGame.TGBioMessage_ZombieAbsoreTitle.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioMessage_ZombieAbsoreTitle::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 222223 ];

	UTGBioMessage_ZombieAbsoreTitle_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_ZombieAbsoreTitle.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioMessage_ZombieAbsoreTitle::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 222217 ];

	UTGBioMessage_ZombieAbsoreTitle_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerInventoryManager.AddAllFunctionalItem
// [0x00020002] 
// Parameters infos:
// class ATGPlayerReplicationInfo* PRI                            ( CPF_Parm )

void ATGBioPlayerInventoryManager::AddAllFunctionalItem ( class ATGPlayerReplicationInfo* PRI )
{
	static UFunction* pFnAddAllFunctionalItem = NULL;

	if ( ! pFnAddAllFunctionalItem )
		pFnAddAllFunctionalItem = (UFunction*) UObject::GObjObjects()->Data[ 222658 ];

	ATGBioPlayerInventoryManager_execAddAllFunctionalItem_Parms AddAllFunctionalItem_Parms;
	AddAllFunctionalItem_Parms.PRI = PRI;

	this->ProcessEvent ( pFnAddAllFunctionalItem, &AddAllFunctionalItem_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerInventoryManager.HandlePickupQuery
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  ItemClass                      ( CPF_Parm )
// class AActor*                  Pickup                         ( CPF_Parm )

bool ATGBioPlayerInventoryManager::HandlePickupQuery ( class UClass* ItemClass, class AActor* Pickup )
{
	static UFunction* pFnHandlePickupQuery = NULL;

	if ( ! pFnHandlePickupQuery )
		pFnHandlePickupQuery = (UFunction*) UObject::GObjObjects()->Data[ 222652 ];

	ATGBioPlayerInventoryManager_execHandlePickupQuery_Parms HandlePickupQuery_Parms;
	HandlePickupQuery_Parms.ItemClass = ItemClass;
	HandlePickupQuery_Parms.Pickup = Pickup;

	this->ProcessEvent ( pFnHandlePickupQuery, &HandlePickupQuery_Parms, NULL );

	return HandlePickupQuery_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerInventoryManager.CanPickup
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  ItemClass                      ( CPF_Parm )

bool ATGBioPlayerInventoryManager::CanPickup ( class UClass* ItemClass )
{
	static UFunction* pFnCanPickup = NULL;

	if ( ! pFnCanPickup )
		pFnCanPickup = (UFunction*) UObject::GObjObjects()->Data[ 222647 ];

	ATGBioPlayerInventoryManager_execCanPickup_Parms CanPickup_Parms;
	CanPickup_Parms.ItemClass = ItemClass;

	this->ProcessEvent ( pFnCanPickup, &CanPickup_Parms, NULL );

	return CanPickup_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerInventoryManager.ProcessBioSpecialWeaponDamage
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AWeapon*                 InWeap                         ( CPF_Parm )

float ATGBioPlayerInventoryManager::ProcessBioSpecialWeaponDamage ( class AWeapon* InWeap )
{
	static UFunction* pFnProcessBioSpecialWeaponDamage = NULL;

	if ( ! pFnProcessBioSpecialWeaponDamage )
		pFnProcessBioSpecialWeaponDamage = (UFunction*) UObject::GObjObjects()->Data[ 222642 ];

	ATGBioPlayerInventoryManager_execProcessBioSpecialWeaponDamage_Parms ProcessBioSpecialWeaponDamage_Parms;
	ProcessBioSpecialWeaponDamage_Parms.InWeap = InWeap;

	this->ProcessEvent ( pFnProcessBioSpecialWeaponDamage, &ProcessBioSpecialWeaponDamage_Parms, NULL );

	return ProcessBioSpecialWeaponDamage_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerInventoryManager.AddDamageScale
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerInventoryManager::AddDamageScale ( )
{
	static UFunction* pFnAddDamageScale = NULL;

	if ( ! pFnAddDamageScale )
		pFnAddDamageScale = (UFunction*) UObject::GObjObjects()->Data[ 222638 ];

	ATGBioPlayerInventoryManager_execAddDamageScale_Parms AddDamageScale_Parms;

	this->ProcessEvent ( pFnAddDamageScale, &AddDamageScale_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerInventoryManager.UpdateDamageScale
// [0x00020002] 
// Parameters infos:

void ATGBioPlayerInventoryManager::UpdateDamageScale ( )
{
	static UFunction* pFnUpdateDamageScale = NULL;

	if ( ! pFnUpdateDamageScale )
		pFnUpdateDamageScale = (UFunction*) UObject::GObjObjects()->Data[ 222634 ];

	ATGBioPlayerInventoryManager_execUpdateDamageScale_Parms UpdateDamageScale_Parms;

	this->ProcessEvent ( pFnUpdateDamageScale, &UpdateDamageScale_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerInventoryManager.SetWeaponDamageScale
// [0x00020002] 
// Parameters infos:
// class ATGRealWeapon*           CreatedWeapon                  ( CPF_Parm )

void ATGBioPlayerInventoryManager::SetWeaponDamageScale ( class ATGRealWeapon* CreatedWeapon )
{
	static UFunction* pFnSetWeaponDamageScale = NULL;

	if ( ! pFnSetWeaponDamageScale )
		pFnSetWeaponDamageScale = (UFunction*) UObject::GObjObjects()->Data[ 222631 ];

	ATGBioPlayerInventoryManager_execSetWeaponDamageScale_Parms SetWeaponDamageScale_Parms;
	SetWeaponDamageScale_Parms.CreatedWeapon = CreatedWeapon;

	this->ProcessEvent ( pFnSetWeaponDamageScale, &SetWeaponDamageScale_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerInventoryManager.CreateInventory
// [0x00024102] 
// Parameters infos:
// class AInventory*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  NewInventoryItemClass          ( CPF_Parm )
// unsigned long                  bDoNotActivate                 ( CPF_OptionalParm | CPF_Parm )

class AInventory* ATGBioPlayerInventoryManager::CreateInventory ( class UClass* NewInventoryItemClass, unsigned long bDoNotActivate )
{
	static UFunction* pFnCreateInventory = NULL;

	if ( ! pFnCreateInventory )
		pFnCreateInventory = (UFunction*) UObject::GObjObjects()->Data[ 222625 ];

	ATGBioPlayerInventoryManager_execCreateInventory_Parms CreateInventory_Parms;
	CreateInventory_Parms.NewInventoryItemClass = NewInventoryItemClass;
	CreateInventory_Parms.bDoNotActivate = bDoNotActivate;

	this->ProcessEvent ( pFnCreateInventory, &CreateInventory_Parms, NULL );

	return CreateInventory_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerInventoryManager.AddInventory
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AInventory*              NewItem                        ( CPF_Parm )
// unsigned long                  bDoNotActivate                 ( CPF_OptionalParm | CPF_Parm )

bool ATGBioPlayerInventoryManager::AddInventory ( class AInventory* NewItem, unsigned long bDoNotActivate )
{
	static UFunction* pFnAddInventory = NULL;

	if ( ! pFnAddInventory )
		pFnAddInventory = (UFunction*) UObject::GObjObjects()->Data[ 222615 ];

	ATGBioPlayerInventoryManager_execAddInventory_Parms AddInventory_Parms;
	AddInventory_Parms.NewItem = NewItem;
	AddInventory_Parms.bDoNotActivate = bDoNotActivate;

	this->ProcessEvent ( pFnAddInventory, &AddInventory_Parms, NULL );

	return AddInventory_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerInventoryManager.AddInventoryByGroup
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AInventory*              NewItem                        ( CPF_Parm )
// unsigned long                  bDoNotActivate                 ( CPF_OptionalParm | CPF_Parm )

bool ATGBioPlayerInventoryManager::AddInventoryByGroup ( class AInventory* NewItem, unsigned long bDoNotActivate )
{
	static UFunction* pFnAddInventoryByGroup = NULL;

	if ( ! pFnAddInventoryByGroup )
		pFnAddInventoryByGroup = (UFunction*) UObject::GObjObjects()->Data[ 222607 ];

	ATGBioPlayerInventoryManager_execAddInventoryByGroup_Parms AddInventoryByGroup_Parms;
	AddInventoryByGroup_Parms.NewItem = NewItem;
	AddInventoryByGroup_Parms.bDoNotActivate = bDoNotActivate;

	this->ProcessEvent ( pFnAddInventoryByGroup, &AddInventoryByGroup_Parms, NULL );

	return AddInventoryByGroup_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerInventoryManager.IsUseableInventory
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  ItemClass                      ( CPF_Parm )

bool ATGBioPlayerInventoryManager::IsUseableInventory ( class UClass* ItemClass )
{
	static UFunction* pFnIsUseableInventory = NULL;

	if ( ! pFnIsUseableInventory )
		pFnIsUseableInventory = (UFunction*) UObject::GObjObjects()->Data[ 222604 ];

	ATGBioPlayerInventoryManager_execIsUseableInventory_Parms IsUseableInventory_Parms;
	IsUseableInventory_Parms.ItemClass = ItemClass;

	this->ProcessEvent ( pFnIsUseableInventory, &IsUseableInventory_Parms, NULL );

	return IsUseableInventory_Parms.ReturnValue;
};

// Function TGBioGame.TGBioPlayerInventoryManager.ClientWeaponSet
// [0x00024102] 
// Parameters infos:
// class AWeapon*                 NewWeapon                      ( CPF_Parm )
// unsigned long                  bOptionalSet                   ( CPF_Parm )
// unsigned long                  bDoNotActivate                 ( CPF_OptionalParm | CPF_Parm )

void ATGBioPlayerInventoryManager::ClientWeaponSet ( class AWeapon* NewWeapon, unsigned long bOptionalSet, unsigned long bDoNotActivate )
{
	static UFunction* pFnClientWeaponSet = NULL;

	if ( ! pFnClientWeaponSet )
		pFnClientWeaponSet = (UFunction*) UObject::GObjObjects()->Data[ 222599 ];

	ATGBioPlayerInventoryManager_execClientWeaponSet_Parms ClientWeaponSet_Parms;
	ClientWeaponSet_Parms.NewWeapon = NewWeapon;
	ClientWeaponSet_Parms.bOptionalSet = bOptionalSet;
	ClientWeaponSet_Parms.bDoNotActivate = bDoNotActivate;

	this->ProcessEvent ( pFnClientWeaponSet, &ClientWeaponSet_Parms, NULL );
};

// Function TGBioGame.TGBioPlayerInventoryManager.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGBioPlayerInventoryManager::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 222598 ];

	ATGBioPlayerInventoryManager_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioMessage_HumProtect.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioMessage_HumProtect::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 222056 ];

	UTGBioMessage_HumProtect_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_HumProtect.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioMessage_HumProtect::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 222050 ];

	UTGBioMessage_HumProtect_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioTerminatorZombie.Died
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// unsigned char                  DeathDir                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_OptionalParm | CPF_Parm )

bool ATGBioTerminatorZombie::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation, unsigned char DeathDir, unsigned char HitGroup )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 223571 ];

	ATGBioTerminatorZombie_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );
	Died_Parms.DeathDir = DeathDir;
	Died_Parms.HitGroup = HitGroup;

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function TGBioGame.TGBioTerminatorZombie.DeathParticleEffect
// [0x00020102] 
// Parameters infos:

void ATGBioTerminatorZombie::DeathParticleEffect ( )
{
	static UFunction* pFnDeathParticleEffect = NULL;

	if ( ! pFnDeathParticleEffect )
		pFnDeathParticleEffect = (UFunction*) UObject::GObjObjects()->Data[ 223570 ];

	ATGBioTerminatorZombie_execDeathParticleEffect_Parms DeathParticleEffect_Parms;

	this->ProcessEvent ( pFnDeathParticleEffect, &DeathParticleEffect_Parms, NULL );
};

// Function TGBioGame.TGBioTerminatorZombie.PlayChangeZombieEffect
// [0x00020102] 
// Parameters infos:

void ATGBioTerminatorZombie::PlayChangeZombieEffect ( )
{
	static UFunction* pFnPlayChangeZombieEffect = NULL;

	if ( ! pFnPlayChangeZombieEffect )
		pFnPlayChangeZombieEffect = (UFunction*) UObject::GObjObjects()->Data[ 223569 ];

	ATGBioTerminatorZombie_execPlayChangeZombieEffect_Parms PlayChangeZombieEffect_Parms;

	this->ProcessEvent ( pFnPlayChangeZombieEffect, &PlayChangeZombieEffect_Parms, NULL );
};

// Function TGBioGame.TGBioTerminatorZombie.GetBaseHealthMaxByNumValidPlayers
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ATGBioTerminatorZombie::GetBaseHealthMaxByNumValidPlayers ( )
{
	static UFunction* pFnGetBaseHealthMaxByNumValidPlayers = NULL;

	if ( ! pFnGetBaseHealthMaxByNumValidPlayers )
		pFnGetBaseHealthMaxByNumValidPlayers = (UFunction*) UObject::GObjObjects()->Data[ 223565 ];

	ATGBioTerminatorZombie_execGetBaseHealthMaxByNumValidPlayers_Parms GetBaseHealthMaxByNumValidPlayers_Parms;

	this->ProcessEvent ( pFnGetBaseHealthMaxByNumValidPlayers, &GetBaseHealthMaxByNumValidPlayers_Parms, NULL );

	return GetBaseHealthMaxByNumValidPlayers_Parms.ReturnValue;
};

// Function TGBioGame.TGBioTerminatorZombie.SetTerminatorInfo
// [0x00020102] 
// Parameters infos:
// unsigned char                  ZombieChangeType               ( CPF_Parm )

void ATGBioTerminatorZombie::SetTerminatorInfo ( unsigned char ZombieChangeType )
{
	static UFunction* pFnSetTerminatorInfo = NULL;

	if ( ! pFnSetTerminatorInfo )
		pFnSetTerminatorInfo = (UFunction*) UObject::GObjObjects()->Data[ 223561 ];

	ATGBioTerminatorZombie_execSetTerminatorInfo_Parms SetTerminatorInfo_Parms;
	SetTerminatorInfo_Parms.ZombieChangeType = ZombieChangeType;

	this->ProcessEvent ( pFnSetTerminatorInfo, &SetTerminatorInfo_Parms, NULL );
};

// Function TGBioGame.TGBioTerminatorZombie.SetLevelInfo
// [0x00020002] 
// Parameters infos:
// struct FZombieChangeNecessity  ZombieChange                   ( CPF_Parm )

void ATGBioTerminatorZombie::SetLevelInfo ( struct FZombieChangeNecessity ZombieChange )
{
	static UFunction* pFnSetLevelInfo = NULL;

	if ( ! pFnSetLevelInfo )
		pFnSetLevelInfo = (UFunction*) UObject::GObjObjects()->Data[ 223559 ];

	ATGBioTerminatorZombie_execSetLevelInfo_Parms SetLevelInfo_Parms;
	memcpy ( &SetLevelInfo_Parms.ZombieChange, &ZombieChange, 0x14 );

	this->ProcessEvent ( pFnSetLevelInfo, &SetLevelInfo_Parms, NULL );
};

// Function TGBioGame.TGBioTerminatorZombie.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGBioTerminatorZombie::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 223555 ];

	ATGBioTerminatorZombie_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGBioGame.TGBioTerminatorZombie.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGBioTerminatorZombie::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 223553 ];

	ATGBioTerminatorZombie_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGBioGame.TGBioMessage_FlyCutterSkillAgainstFeedback.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioMessage_FlyCutterSkillAgainstFeedback::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 221999 ];

	UTGBioMessage_FlyCutterSkillAgainstFeedback_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_FlyCutterSkillAgainstFeedback.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioMessage_FlyCutterSkillAgainstFeedback::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 221993 ];

	UTGBioMessage_FlyCutterSkillAgainstFeedback_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioItem_Jerrican.JerricanReset
// [0x00020102] 
// Parameters infos:

void ATGBioItem_Jerrican::JerricanReset ( )
{
	static UFunction* pFnJerricanReset = NULL;

	if ( ! pFnJerricanReset )
		pFnJerricanReset = (UFunction*) UObject::GObjObjects()->Data[ 221447 ];

	ATGBioItem_Jerrican_execJerricanReset_Parms JerricanReset_Parms;

	this->ProcessEvent ( pFnJerricanReset, &JerricanReset_Parms, NULL );
};

// Function TGBioGame.TGBioItem_Jerrican.NotifyJerricanBomb
// [0x00020102] 
// Parameters infos:

void ATGBioItem_Jerrican::NotifyJerricanBomb ( )
{
	static UFunction* pFnNotifyJerricanBomb = NULL;

	if ( ! pFnNotifyJerricanBomb )
		pFnNotifyJerricanBomb = (UFunction*) UObject::GObjObjects()->Data[ 221446 ];

	ATGBioItem_Jerrican_execNotifyJerricanBomb_Parms NotifyJerricanBomb_Parms;

	this->ProcessEvent ( pFnNotifyJerricanBomb, &NotifyJerricanBomb_Parms, NULL );
};

// Function TGBioGame.TGBioItem_Jerrican.ProcExplode
// [0x00024002] 
// Parameters infos:
// unsigned long                  BombBySelf                     ( CPF_OptionalParm | CPF_Parm )

void ATGBioItem_Jerrican::ProcExplode ( unsigned long BombBySelf )
{
	static UFunction* pFnProcExplode = NULL;

	if ( ! pFnProcExplode )
		pFnProcExplode = (UFunction*) UObject::GObjObjects()->Data[ 221444 ];

	ATGBioItem_Jerrican_execProcExplode_Parms ProcExplode_Parms;
	ProcExplode_Parms.BombBySelf = BombBySelf;

	this->ProcessEvent ( pFnProcExplode, &ProcExplode_Parms, NULL );
};

// Function TGBioGame.TGBioItem_Jerrican.TakeDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ATGBioItem_Jerrican::eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 221436 ];

	ATGBioItem_Jerrican_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.Damage = Damage;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x20 );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function TGBioGame.TGBioItem_Jerrican.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGBioItem_Jerrican::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 221435 ];

	ATGBioItem_Jerrican_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioItem_Jerrican.ReallyExplode
// [0x00020102] 
// Parameters infos:

void ATGBioItem_Jerrican::ReallyExplode ( )
{
	static UFunction* pFnReallyExplode = NULL;

	if ( ! pFnReallyExplode )
		pFnReallyExplode = (UFunction*) UObject::GObjObjects()->Data[ 221432 ];

	ATGBioItem_Jerrican_execReallyExplode_Parms ReallyExplode_Parms;

	this->ProcessEvent ( pFnReallyExplode, &ReallyExplode_Parms, NULL );
};

// Function TGBioGame.TGBioItem_Jerrican.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGBioItem_Jerrican::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 221430 ];

	ATGBioItem_Jerrican_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGBioGame.TGBioWeap_FlyCutter.PlayFiringSound
// [0x00020100] 
// Parameters infos:

void ATGBioWeap_FlyCutter::PlayFiringSound ( )
{
	static UFunction* pFnPlayFiringSound = NULL;

	if ( ! pFnPlayFiringSound )
		pFnPlayFiringSound = (UFunction*) UObject::GObjObjects()->Data[ 223607 ];

	ATGBioWeap_FlyCutter_execPlayFiringSound_Parms PlayFiringSound_Parms;

	this->ProcessEvent ( pFnPlayFiringSound, &PlayFiringSound_Parms, NULL );
};

// Function TGBioGame.TGBioWeap_FlyCutter.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGBioWeap_FlyCutter::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 223602 ];

	ATGBioWeap_FlyCutter_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGBioGame.TGBioWeap_FlyCutter.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGBioWeap_FlyCutter::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 223601 ];

	ATGBioWeap_FlyCutter_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioGrenade.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGBioGrenade::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 220400 ];

	ATGBioGrenade_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGBioGame.TGBioGrenade.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGBioGrenade::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 220399 ];

	ATGBioGrenade_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioWeap_HeroBlade.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGBioWeap_HeroBlade::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 223613 ];

	ATGBioWeap_HeroBlade_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGBioGame.TGBioWeap_HeroBlade.PlayThirdSwingAnim
// [0x00020100] 
// Parameters infos:

void ATGBioWeap_HeroBlade::PlayThirdSwingAnim ( )
{
	static UFunction* pFnPlayThirdSwingAnim = NULL;

	if ( ! pFnPlayThirdSwingAnim )
		pFnPlayThirdSwingAnim = (UFunction*) UObject::GObjObjects()->Data[ 223612 ];

	ATGBioWeap_HeroBlade_execPlayThirdSwingAnim_Parms PlayThirdSwingAnim_Parms;

	this->ProcessEvent ( pFnPlayThirdSwingAnim, &PlayThirdSwingAnim_Parms, NULL );
};

// Function TGBioGame.TGBioWeap_HeroGun.CheckFireInterval
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          LocalClientTime                ( CPF_Parm )

bool ATGBioWeap_HeroGun::CheckFireInterval ( float LocalClientTime )
{
	static UFunction* pFnCheckFireInterval = NULL;

	if ( ! pFnCheckFireInterval )
		pFnCheckFireInterval = (UFunction*) UObject::GObjObjects()->Data[ 223630 ];

	ATGBioWeap_HeroGun_execCheckFireInterval_Parms CheckFireInterval_Parms;
	CheckFireInterval_Parms.LocalClientTime = LocalClientTime;

	this->ProcessEvent ( pFnCheckFireInterval, &CheckFireInterval_Parms, NULL );

	return CheckFireInterval_Parms.ReturnValue;
};

// Function TGBioGame.TGBioWeap_HeroGun.DrawWeaponCrosshair
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGBioWeap_HeroGun::DrawWeaponCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshair = NULL;

	if ( ! pFnDrawWeaponCrosshair )
		pFnDrawWeaponCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 223623 ];

	ATGBioWeap_HeroGun_execDrawWeaponCrosshair_Parms DrawWeaponCrosshair_Parms;
	DrawWeaponCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshair, &DrawWeaponCrosshair_Parms, NULL );
};

// Function TGBioGame.TGBioDmgType_HostZombieClaw.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGBioDmgType_HostZombieClaw::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 220236 ];

	UTGBioDmgType_HostZombieClaw_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGBioGame.TGBioDmgType_TerminatorClaw.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGBioDmgType_TerminatorClaw::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 220251 ];

	UTGBioDmgType_TerminatorClaw_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGBioGame.TGBioItemManager.TryTossProp
// [0x00820002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void UTGBioItemManager::TryTossProp ( class APawn* P )
{
	static UFunction* pFnTryTossProp = NULL;

	if ( ! pFnTryTossProp )
		pFnTryTossProp = (UFunction*) UObject::GObjObjects()->Data[ 221488 ];

	UTGBioItemManager_execTryTossProp_Parms TryTossProp_Parms;
	TryTossProp_Parms.P = P;

	this->ProcessEvent ( pFnTryTossProp, &TryTossProp_Parms, NULL );
};

// Function TGBioGame.TGBioItemManager.ComputerCanSpawnCount
// [0x00020002] 
// Parameters infos:

void UTGBioItemManager::ComputerCanSpawnCount ( )
{
	static UFunction* pFnComputerCanSpawnCount = NULL;

	if ( ! pFnComputerCanSpawnCount )
		pFnComputerCanSpawnCount = (UFunction*) UObject::GObjObjects()->Data[ 221483 ];

	UTGBioItemManager_execComputerCanSpawnCount_Parms ComputerCanSpawnCount_Parms;

	this->ProcessEvent ( pFnComputerCanSpawnCount, &ComputerCanSpawnCount_Parms, NULL );
};

// Function TGBioGame.TGBioItemManager.GetNextPropClass
// [0x00020002] 
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UClass* UTGBioItemManager::GetNextPropClass ( )
{
	static UFunction* pFnGetNextPropClass = NULL;

	if ( ! pFnGetNextPropClass )
		pFnGetNextPropClass = (UFunction*) UObject::GObjObjects()->Data[ 221478 ];

	UTGBioItemManager_execGetNextPropClass_Parms GetNextPropClass_Parms;

	this->ProcessEvent ( pFnGetNextPropClass, &GetNextPropClass_Parms, NULL );

	return GetNextPropClass_Parms.ReturnValue;
};

// Function TGBioGame.TGBioItemManager.PropType2Class
// [0x00022002] 
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PropType                       ( CPF_Parm )

class UClass* UTGBioItemManager::PropType2Class ( unsigned char PropType )
{
	static UFunction* pFnPropType2Class = NULL;

	if ( ! pFnPropType2Class )
		pFnPropType2Class = (UFunction*) UObject::GObjObjects()->Data[ 221474 ];

	UTGBioItemManager_execPropType2Class_Parms PropType2Class_Parms;
	PropType2Class_Parms.PropType = PropType;

	this->ProcessEvent ( pFnPropType2Class, &PropType2Class_Parms, NULL );

	return PropType2Class_Parms.ReturnValue;
};

// Function TGBioGame.TGBioItemManager.Reset
// [0x00020002] 
// Parameters infos:

void UTGBioItemManager::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 221473 ];

	UTGBioItemManager_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function TGBioGame.TGBioItemManager.PreBeginPlay
// [0x00020002] 
// Parameters infos:

void UTGBioItemManager::PreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 221472 ];

	UTGBioItemManager_execPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioFountainVolume.Touch
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGBioFountainVolume::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 220290 ];

	ATGBioFountainVolume_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function TGBioGame.TGBioWeaponPickupFactory.NotifyLocalPlayerDead
// [0x00020100] 
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void ATGBioWeaponPickupFactory::NotifyLocalPlayerDead ( class APlayerController* PC )
{
	static UFunction* pFnNotifyLocalPlayerDead = NULL;

	if ( ! pFnNotifyLocalPlayerDead )
		pFnNotifyLocalPlayerDead = (UFunction*) UObject::GObjObjects()->Data[ 223730 ];

	ATGBioWeaponPickupFactory_execNotifyLocalPlayerDead_Parms NotifyLocalPlayerDead_Parms;
	NotifyLocalPlayerDead_Parms.PC = PC;

	this->ProcessEvent ( pFnNotifyLocalPlayerDead, &NotifyLocalPlayerDead_Parms, NULL );
};

// Function TGBioGame.TGBioWeaponPickupFactory.ShowHidden
// [0x00020102] 
// Parameters infos:

void ATGBioWeaponPickupFactory::ShowHidden ( )
{
	static UFunction* pFnShowHidden = NULL;

	if ( ! pFnShowHidden )
		pFnShowHidden = (UFunction*) UObject::GObjObjects()->Data[ 223729 ];

	ATGBioWeaponPickupFactory_execShowHidden_Parms ShowHidden_Parms;

	this->ProcessEvent ( pFnShowHidden, &ShowHidden_Parms, NULL );
};

// Function TGBioGame.TGBioWeaponPickupFactory.ShowActive
// [0x00020100] 
// Parameters infos:

void ATGBioWeaponPickupFactory::ShowActive ( )
{
	static UFunction* pFnShowActive = NULL;

	if ( ! pFnShowActive )
		pFnShowActive = (UFunction*) UObject::GObjObjects()->Data[ 223728 ];

	ATGBioWeaponPickupFactory_execShowActive_Parms ShowActive_Parms;

	this->ProcessEvent ( pFnShowActive, &ShowActive_Parms, NULL );
};

// Function TGBioGame.TGBioWeaponPickupFactory.SpawnCopyFor
// [0x00020002] 
// Parameters infos:
// class APawn*                   Recipient                      ( CPF_Parm )

void ATGBioWeaponPickupFactory::SpawnCopyFor ( class APawn* Recipient )
{
	static UFunction* pFnSpawnCopyFor = NULL;

	if ( ! pFnSpawnCopyFor )
		pFnSpawnCopyFor = (UFunction*) UObject::GObjObjects()->Data[ 223725 ];

	ATGBioWeaponPickupFactory_execSpawnCopyFor_Parms SpawnCopyFor_Parms;
	SpawnCopyFor_Parms.Recipient = Recipient;

	this->ProcessEvent ( pFnSpawnCopyFor, &SpawnCopyFor_Parms, NULL );
};

// Function TGBioGame.TGBioWeaponPickupFactory.PickedUpBy
// [0x00020002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void ATGBioWeaponPickupFactory::PickedUpBy ( class APawn* P )
{
	static UFunction* pFnPickedUpBy = NULL;

	if ( ! pFnPickedUpBy )
		pFnPickedUpBy = (UFunction*) UObject::GObjObjects()->Data[ 223723 ];

	ATGBioWeaponPickupFactory_execPickedUpBy_Parms PickedUpBy_Parms;
	PickedUpBy_Parms.P = P;

	this->ProcessEvent ( pFnPickedUpBy, &PickedUpBy_Parms, NULL );
};

// Function TGBioGame.TGBioWeaponPickupFactory.StartSleeping
// [0x00020002] 
// Parameters infos:

void ATGBioWeaponPickupFactory::StartSleeping ( )
{
	static UFunction* pFnStartSleeping = NULL;

	if ( ! pFnStartSleeping )
		pFnStartSleeping = (UFunction*) UObject::GObjObjects()->Data[ 223722 ];

	ATGBioWeaponPickupFactory_execStartSleeping_Parms StartSleeping_Parms;

	this->ProcessEvent ( pFnStartSleeping, &StartSleeping_Parms, NULL );
};

// Function TGBioGame.TGBioWeaponPickupFactory.SetWeaponStay
// [0x00020002] 
// Parameters infos:

void ATGBioWeaponPickupFactory::SetWeaponStay ( )
{
	static UFunction* pFnSetWeaponStay = NULL;

	if ( ! pFnSetWeaponStay )
		pFnSetWeaponStay = (UFunction*) UObject::GObjObjects()->Data[ 223721 ];

	ATGBioWeaponPickupFactory_execSetWeaponStay_Parms SetWeaponStay_Parms;

	this->ProcessEvent ( pFnSetWeaponStay, &SetWeaponStay_Parms, NULL );
};

// Function TGBioGame.TGBioWeaponPickupFactory.CheckForErrors
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioWeaponPickupFactory::CheckForErrors ( )
{
	static UFunction* pFnCheckForErrors = NULL;

	if ( ! pFnCheckForErrors )
		pFnCheckForErrors = (UFunction*) UObject::GObjObjects()->Data[ 223719 ];

	ATGBioWeaponPickupFactory_execCheckForErrors_Parms CheckForErrors_Parms;

	this->ProcessEvent ( pFnCheckForErrors, &CheckForErrors_Parms, NULL );

	return CheckForErrors_Parms.ReturnValue;
};

// Function TGBioGame.TGBioWeaponPickupFactory.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGBioWeaponPickupFactory::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 223717 ];

	ATGBioWeaponPickupFactory_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGBioGame.TGBioWeaponPickupFactory.SetPickupMesh
// [0x00020102] 
// Parameters infos:

void ATGBioWeaponPickupFactory::SetPickupMesh ( )
{
	static UFunction* pFnSetPickupMesh = NULL;

	if ( ! pFnSetPickupMesh )
		pFnSetPickupMesh = (UFunction*) UObject::GObjObjects()->Data[ 223716 ];

	ATGBioWeaponPickupFactory_execSetPickupMesh_Parms SetPickupMesh_Parms;

	this->ProcessEvent ( pFnSetPickupMesh, &SetPickupMesh_Parms, NULL );
};

// Function TGBioGame.TGBioWeaponPickupFactory.SetPickupHidden
// [0x00020102] 
// Parameters infos:

void ATGBioWeaponPickupFactory::SetPickupHidden ( )
{
	static UFunction* pFnSetPickupHidden = NULL;

	if ( ! pFnSetPickupHidden )
		pFnSetPickupHidden = (UFunction*) UObject::GObjObjects()->Data[ 223715 ];

	ATGBioWeaponPickupFactory_execSetPickupHidden_Parms SetPickupHidden_Parms;

	this->ProcessEvent ( pFnSetPickupHidden, &SetPickupHidden_Parms, NULL );
};

// Function TGBioGame.TGBioWeaponPickupFactory.SetPickupVisible
// [0x00020102] 
// Parameters infos:

void ATGBioWeaponPickupFactory::SetPickupVisible ( )
{
	static UFunction* pFnSetPickupVisible = NULL;

	if ( ! pFnSetPickupVisible )
		pFnSetPickupVisible = (UFunction*) UObject::GObjObjects()->Data[ 223714 ];

	ATGBioWeaponPickupFactory_execSetPickupVisible_Parms SetPickupVisible_Parms;

	this->ProcessEvent ( pFnSetPickupVisible, &SetPickupVisible_Parms, NULL );
};

// Function TGBioGame.TGBioWeaponPickupFactory.Reset
// [0x00020002] 
// Parameters infos:

void ATGBioWeaponPickupFactory::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 223713 ];

	ATGBioWeaponPickupFactory_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function TGBioGame.TGBioWeaponPickupFactory.ClearIconFlash
// [0x00020102] 
// Parameters infos:

void ATGBioWeaponPickupFactory::ClearIconFlash ( )
{
	static UFunction* pFnClearIconFlash = NULL;

	if ( ! pFnClearIconFlash )
		pFnClearIconFlash = (UFunction*) UObject::GObjObjects()->Data[ 223712 ];

	ATGBioWeaponPickupFactory_execClearIconFlash_Parms ClearIconFlash_Parms;

	this->ProcessEvent ( pFnClearIconFlash, &ClearIconFlash_Parms, NULL );
};

// Function TGBioGame.TGBioWeaponPickupFactory.FlashIcon
// [0x00020102] 
// Parameters infos:

void ATGBioWeaponPickupFactory::FlashIcon ( )
{
	static UFunction* pFnFlashIcon = NULL;

	if ( ! pFnFlashIcon )
		pFnFlashIcon = (UFunction*) UObject::GObjObjects()->Data[ 223711 ];

	ATGBioWeaponPickupFactory_execFlashIcon_Parms FlashIcon_Parms;

	this->ProcessEvent ( pFnFlashIcon, &FlashIcon_Parms, NULL );
};

// Function TGBioGame.TGBioWeaponPickupFactory.InitializePickup
// [0x00020102] 
// Parameters infos:

void ATGBioWeaponPickupFactory::InitializePickup ( )
{
	static UFunction* pFnInitializePickup = NULL;

	if ( ! pFnInitializePickup )
		pFnInitializePickup = (UFunction*) UObject::GObjObjects()->Data[ 223709 ];

	ATGBioWeaponPickupFactory_execInitializePickup_Parms InitializePickup_Parms;

	this->ProcessEvent ( pFnInitializePickup, &InitializePickup_Parms, NULL );
};

// Function TGBioGame.TGBioPickupFactoryBase.Initialize
// [0x00020100] 
// Parameters infos:

void ATGBioPickupFactoryBase::Initialize ( )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 222270 ];

	ATGBioPickupFactoryBase_execInitialize_Parms Initialize_Parms;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};

// Function TGBioGame.TGBioProj_Grenade.ProjectileHurtRadius
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGBioProj_Grenade::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 222854 ];

	ATGBioProj_Grenade_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function TGBioGame.TGBioProj_Grenade.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGBioProj_Grenade::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 222838 ];

	ATGBioProj_Grenade_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function TGBioGame.TGBioProj_Grenade.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGBioProj_Grenade::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 222834 ];

	ATGBioProj_Grenade_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function TGBioGame.TGBioProj_Grenade.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGBioProj_Grenade::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 222828 ];

	ATGBioProj_Grenade_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGBioGame.TGBioProj_Grenade.InitWithBaseVelocity
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 BaseVelocity                   ( CPF_Parm )

void ATGBioProj_Grenade::InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity )
{
	static UFunction* pFnInitWithBaseVelocity = NULL;

	if ( ! pFnInitWithBaseVelocity )
		pFnInitWithBaseVelocity = (UFunction*) UObject::GObjObjects()->Data[ 222825 ];

	ATGBioProj_Grenade_execInitWithBaseVelocity_Parms InitWithBaseVelocity_Parms;
	memcpy ( &InitWithBaseVelocity_Parms.Direction, &Direction, 0xC );
	memcpy ( &InitWithBaseVelocity_Parms.BaseVelocity, &BaseVelocity, 0xC );

	this->ProcessEvent ( pFnInitWithBaseVelocity, &InitWithBaseVelocity_Parms, NULL );
};

// Function TGBioGame.TGBioProj_Grenade.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGBioProj_Grenade::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 222824 ];

	ATGBioProj_Grenade_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioHUDDriveManage.RoundReset
// [0x00020002] 
// Parameters infos:

void UTGBioHUDDriveManage::RoundReset ( )
{
	static UFunction* pFnRoundReset = NULL;

	if ( ! pFnRoundReset )
		pFnRoundReset = (UFunction*) UObject::GObjObjects()->Data[ 221066 ];

	UTGBioHUDDriveManage_execRoundReset_Parms RoundReset_Parms;

	this->ProcessEvent ( pFnRoundReset, &RoundReset_Parms, NULL );
};

// Function TGBioGame.TGBioHUDDriveManage.GetHUDDrive
// [0x00020102] 
// Parameters infos:
// class UTGBioHUDDrive*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

class UTGBioHUDDrive* UTGBioHUDDriveManage::GetHUDDrive ( int Index )
{
	static UFunction* pFnGetHUDDrive = NULL;

	if ( ! pFnGetHUDDrive )
		pFnGetHUDDrive = (UFunction*) UObject::GObjObjects()->Data[ 220497 ];

	UTGBioHUDDriveManage_execGetHUDDrive_Parms GetHUDDrive_Parms;
	GetHUDDrive_Parms.Index = Index;

	this->ProcessEvent ( pFnGetHUDDrive, &GetHUDDrive_Parms, NULL );

	return GetHUDDrive_Parms.ReturnValue;
};

// Function TGBioGame.TGBioHUDDriveManage.AddHUDDrive
// [0x00020002] 
// Parameters infos:
// class UTGBioHUDDrive*          NewItem                        ( CPF_Parm )

void UTGBioHUDDriveManage::AddHUDDrive ( class UTGBioHUDDrive* NewItem )
{
	static UFunction* pFnAddHUDDrive = NULL;

	if ( ! pFnAddHUDDrive )
		pFnAddHUDDrive = (UFunction*) UObject::GObjObjects()->Data[ 221060 ];

	UTGBioHUDDriveManage_execAddHUDDrive_Parms AddHUDDrive_Parms;
	AddHUDDrive_Parms.NewItem = NewItem;

	this->ProcessEvent ( pFnAddHUDDrive, &AddHUDDrive_Parms, NULL );
};

// Function TGBioGame.TGBioHUDDriveManage.Update
// [0x00020102] 
// Parameters infos:

void UTGBioHUDDriveManage::Update ( )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->Data[ 221058 ];

	UTGBioHUDDriveManage_execUpdate_Parms Update_Parms;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );
};

// Function TGBioGame.TGBioHUDDriveManage.SetHUD
// [0x00020002] 
// Parameters infos:
// class ATGBioHUD*               HUD                            ( CPF_Parm )

void UTGBioHUDDriveManage::SetHUD ( class ATGBioHUD* HUD )
{
	static UFunction* pFnSetHUD = NULL;

	if ( ! pFnSetHUD )
		pFnSetHUD = (UFunction*) UObject::GObjObjects()->Data[ 221056 ];

	UTGBioHUDDriveManage_execSetHUD_Parms SetHUD_Parms;
	SetHUD_Parms.HUD = HUD;

	this->ProcessEvent ( pFnSetHUD, &SetHUD_Parms, NULL );
};

// Function TGBioGame.TGBioHUDDriveManage.DriveType2Class
// [0x00022002] 
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Type                           ( CPF_Parm )

class UClass* UTGBioHUDDriveManage::DriveType2Class ( unsigned char Type )
{
	static UFunction* pFnDriveType2Class = NULL;

	if ( ! pFnDriveType2Class )
		pFnDriveType2Class = (UFunction*) UObject::GObjObjects()->Data[ 221052 ];

	UTGBioHUDDriveManage_execDriveType2Class_Parms DriveType2Class_Parms;
	DriveType2Class_Parms.Type = Type;

	this->ProcessEvent ( pFnDriveType2Class, &DriveType2Class_Parms, NULL );

	return DriveType2Class_Parms.ReturnValue;
};

// Function TGBioGame.TGBioHUDDriveManage.Init
// [0x00020002] 
// Parameters infos:

void UTGBioHUDDriveManage::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 221050 ];

	UTGBioHUDDriveManage_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function TGBioGame.TGBioHumHUD_ItemInfo.UpdateItemInfoCoolDown
// [0x00020002] 
// Parameters infos:

void UTGBioHumHUD_ItemInfo::UpdateItemInfoCoolDown ( )
{
	static UFunction* pFnUpdateItemInfoCoolDown = NULL;

	if ( ! pFnUpdateItemInfoCoolDown )
		pFnUpdateItemInfoCoolDown = (UFunction*) UObject::GObjObjects()->Data[ 221271 ];

	UTGBioHumHUD_ItemInfo_execUpdateItemInfoCoolDown_Parms UpdateItemInfoCoolDown_Parms;

	this->ProcessEvent ( pFnUpdateItemInfoCoolDown, &UpdateItemInfoCoolDown_Parms, NULL );
};

// Function TGBioGame.TGBioHumHUD_ItemInfo.SetItemTipVisible
// [0x00020002] 
// Parameters infos:
// unsigned long                  bVis                           ( CPF_Parm )

void UTGBioHumHUD_ItemInfo::SetItemTipVisible ( unsigned long bVis )
{
	static UFunction* pFnSetItemTipVisible = NULL;

	if ( ! pFnSetItemTipVisible )
		pFnSetItemTipVisible = (UFunction*) UObject::GObjObjects()->Data[ 221266 ];

	UTGBioHumHUD_ItemInfo_execSetItemTipVisible_Parms SetItemTipVisible_Parms;
	SetItemTipVisible_Parms.bVis = bVis;

	this->ProcessEvent ( pFnSetItemTipVisible, &SetItemTipVisible_Parms, NULL );
};

// Function TGBioGame.TGBioHumHUD_ItemInfo.SetTipVisible
// [0x00020002] 
// Parameters infos:
// unsigned long                  bVis                           ( CPF_Parm )

void UTGBioHumHUD_ItemInfo::SetTipVisible ( unsigned long bVis )
{
	static UFunction* pFnSetTipVisible = NULL;

	if ( ! pFnSetTipVisible )
		pFnSetTipVisible = (UFunction*) UObject::GObjObjects()->Data[ 221264 ];

	UTGBioHumHUD_ItemInfo_execSetTipVisible_Parms SetTipVisible_Parms;
	SetTipVisible_Parms.bVis = bVis;

	this->ProcessEvent ( pFnSetTipVisible, &SetTipVisible_Parms, NULL );
};

// Function TGBioGame.TGBioHumHUD_ItemInfo.UpdateItemInfoState
// [0x00020002] 
// Parameters infos:

void UTGBioHumHUD_ItemInfo::UpdateItemInfoState ( )
{
	static UFunction* pFnUpdateItemInfoState = NULL;

	if ( ! pFnUpdateItemInfoState )
		pFnUpdateItemInfoState = (UFunction*) UObject::GObjObjects()->Data[ 221263 ];

	UTGBioHumHUD_ItemInfo_execUpdateItemInfoState_Parms UpdateItemInfoState_Parms;

	this->ProcessEvent ( pFnUpdateItemInfoState, &UpdateItemInfoState_Parms, NULL );
};

// Function TGBioGame.TGBioHumHUD_ItemInfo.Tick
// [0x00020002] 
// Parameters infos:

void UTGBioHumHUD_ItemInfo::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 221260 ];

	UTGBioHumHUD_ItemInfo_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGBioGame.TGBioHumHUD_ItemInfo.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGBioHumHUD_ItemInfo::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 221259 ];

	UTGBioHumHUD_ItemInfo_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGBioGame.TGBioHumHUD_ItemInfo.PostBeginPlay
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void UTGBioHumHUD_ItemInfo::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 221258 ];

	UTGBioHumHUD_ItemInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_SkillInfo.UpdateSkillInfoCoolDown
// [0x00020002] 
// Parameters infos:

void UTGBioZombieHUD_SkillInfo::UpdateSkillInfoCoolDown ( )
{
	static UFunction* pFnUpdateSkillInfoCoolDown = NULL;

	if ( ! pFnUpdateSkillInfoCoolDown )
		pFnUpdateSkillInfoCoolDown = (UFunction*) UObject::GObjObjects()->Data[ 223874 ];

	UTGBioZombieHUD_SkillInfo_execUpdateSkillInfoCoolDown_Parms UpdateSkillInfoCoolDown_Parms;

	this->ProcessEvent ( pFnUpdateSkillInfoCoolDown, &UpdateSkillInfoCoolDown_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_SkillInfo.UpdateSkillInfoBackground
// [0x00020002] 
// Parameters infos:

void UTGBioZombieHUD_SkillInfo::UpdateSkillInfoBackground ( )
{
	static UFunction* pFnUpdateSkillInfoBackground = NULL;

	if ( ! pFnUpdateSkillInfoBackground )
		pFnUpdateSkillInfoBackground = (UFunction*) UObject::GObjObjects()->Data[ 223871 ];

	UTGBioZombieHUD_SkillInfo_execUpdateSkillInfoBackground_Parms UpdateSkillInfoBackground_Parms;

	this->ProcessEvent ( pFnUpdateSkillInfoBackground, &UpdateSkillInfoBackground_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_SkillInfo.SetFSkillTipVisible
// [0x00020002] 
// Parameters infos:
// unsigned long                  bVis                           ( CPF_Parm )

void UTGBioZombieHUD_SkillInfo::SetFSkillTipVisible ( unsigned long bVis )
{
	static UFunction* pFnSetFSkillTipVisible = NULL;

	if ( ! pFnSetFSkillTipVisible )
		pFnSetFSkillTipVisible = (UFunction*) UObject::GObjObjects()->Data[ 223866 ];

	UTGBioZombieHUD_SkillInfo_execSetFSkillTipVisible_Parms SetFSkillTipVisible_Parms;
	SetFSkillTipVisible_Parms.bVis = bVis;

	this->ProcessEvent ( pFnSetFSkillTipVisible, &SetFSkillTipVisible_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_SkillInfo.SetCoolingDownTip2Visible
// [0x00020002] 
// Parameters infos:
// unsigned long                  bVis                           ( CPF_Parm )

void UTGBioZombieHUD_SkillInfo::SetCoolingDownTip2Visible ( unsigned long bVis )
{
	static UFunction* pFnSetCoolingDownTip2Visible = NULL;

	if ( ! pFnSetCoolingDownTip2Visible )
		pFnSetCoolingDownTip2Visible = (UFunction*) UObject::GObjObjects()->Data[ 223862 ];

	UTGBioZombieHUD_SkillInfo_execSetCoolingDownTip2Visible_Parms SetCoolingDownTip2Visible_Parms;
	SetCoolingDownTip2Visible_Parms.bVis = bVis;

	this->ProcessEvent ( pFnSetCoolingDownTip2Visible, &SetCoolingDownTip2Visible_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_SkillInfo.SetCoolingDownTip1Visible
// [0x00020002] 
// Parameters infos:
// unsigned long                  bVis                           ( CPF_Parm )

void UTGBioZombieHUD_SkillInfo::SetCoolingDownTip1Visible ( unsigned long bVis )
{
	static UFunction* pFnSetCoolingDownTip1Visible = NULL;

	if ( ! pFnSetCoolingDownTip1Visible )
		pFnSetCoolingDownTip1Visible = (UFunction*) UObject::GObjObjects()->Data[ 223858 ];

	UTGBioZombieHUD_SkillInfo_execSetCoolingDownTip1Visible_Parms SetCoolingDownTip1Visible_Parms;
	SetCoolingDownTip1Visible_Parms.bVis = bVis;

	this->ProcessEvent ( pFnSetCoolingDownTip1Visible, &SetCoolingDownTip1Visible_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_SkillInfo.SetTipVisible
// [0x00020002] 
// Parameters infos:
// unsigned long                  bVis                           ( CPF_Parm )

void UTGBioZombieHUD_SkillInfo::SetTipVisible ( unsigned long bVis )
{
	static UFunction* pFnSetTipVisible = NULL;

	if ( ! pFnSetTipVisible )
		pFnSetTipVisible = (UFunction*) UObject::GObjObjects()->Data[ 223855 ];

	UTGBioZombieHUD_SkillInfo_execSetTipVisible_Parms SetTipVisible_Parms;
	SetTipVisible_Parms.bVis = bVis;

	this->ProcessEvent ( pFnSetTipVisible, &SetTipVisible_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_SkillInfo.UpdateSkillInfoState
// [0x00020002] 
// Parameters infos:

void UTGBioZombieHUD_SkillInfo::UpdateSkillInfoState ( )
{
	static UFunction* pFnUpdateSkillInfoState = NULL;

	if ( ! pFnUpdateSkillInfoState )
		pFnUpdateSkillInfoState = (UFunction*) UObject::GObjObjects()->Data[ 223852 ];

	UTGBioZombieHUD_SkillInfo_execUpdateSkillInfoState_Parms UpdateSkillInfoState_Parms;

	this->ProcessEvent ( pFnUpdateSkillInfoState, &UpdateSkillInfoState_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_SkillInfo.Tick
// [0x00020002] 
// Parameters infos:

void UTGBioZombieHUD_SkillInfo::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 223850 ];

	UTGBioZombieHUD_SkillInfo_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_SkillInfo.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGBioZombieHUD_SkillInfo::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 223849 ];

	UTGBioZombieHUD_SkillInfo_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_SkillInfo.PostBeginPlay
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void UTGBioZombieHUD_SkillInfo::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 223848 ];

	UTGBioZombieHUD_SkillInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_ChangeHumanHero.UpdateHumanHeroScene
// [0x00020002] 
// Parameters infos:

void UTGBioHUD_ChangeHumanHero::UpdateHumanHeroScene ( )
{
	static UFunction* pFnUpdateHumanHeroScene = NULL;

	if ( ! pFnUpdateHumanHeroScene )
		pFnUpdateHumanHeroScene = (UFunction*) UObject::GObjObjects()->Data[ 220802 ];

	UTGBioHUD_ChangeHumanHero_execUpdateHumanHeroScene_Parms UpdateHumanHeroScene_Parms;

	this->ProcessEvent ( pFnUpdateHumanHeroScene, &UpdateHumanHeroScene_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_ChangeHumanHero.SetBgHide
// [0x00020002] 
// Parameters infos:

void UTGBioHUD_ChangeHumanHero::SetBgHide ( )
{
	static UFunction* pFnSetBgHide = NULL;

	if ( ! pFnSetBgHide )
		pFnSetBgHide = (UFunction*) UObject::GObjObjects()->Data[ 220800 ];

	UTGBioHUD_ChangeHumanHero_execSetBgHide_Parms SetBgHide_Parms;

	this->ProcessEvent ( pFnSetBgHide, &SetBgHide_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_ChangeHumanHero.Tick
// [0x00020002] 
// Parameters infos:

void UTGBioHUD_ChangeHumanHero::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 220797 ];

	UTGBioHUD_ChangeHumanHero_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_ChangeHumanHero.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGBioHUD_ChangeHumanHero::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 220796 ];

	UTGBioHUD_ChangeHumanHero_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.GetMessageInfoString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FBioMessageInfo         Info                           ( CPF_Parm | CPF_NeedCtorLink )

struct FString UTGBioHUD_PlayerTip::GetMessageInfoString ( struct FBioMessageInfo Info )
{
	static UFunction* pFnGetMessageInfoString = NULL;

	if ( ! pFnGetMessageInfoString )
		pFnGetMessageInfoString = (UFunction*) UObject::GObjObjects()->Data[ 221016 ];

	UTGBioHUD_PlayerTip_execGetMessageInfoString_Parms GetMessageInfoString_Parms;
	memcpy ( &GetMessageInfoString_Parms.Info, &Info, 0x3C );

	this->ProcessEvent ( pFnGetMessageInfoString, &GetMessageInfoString_Parms, NULL );

	return GetMessageInfoString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioHUD_PlayerTip.GetMessageInfoParticle
// [0x00020002] 
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FBioMessageInfo         Info                           ( CPF_Parm | CPF_NeedCtorLink )

class UParticleSystem* UTGBioHUD_PlayerTip::GetMessageInfoParticle ( struct FBioMessageInfo Info )
{
	static UFunction* pFnGetMessageInfoParticle = NULL;

	if ( ! pFnGetMessageInfoParticle )
		pFnGetMessageInfoParticle = (UFunction*) UObject::GObjObjects()->Data[ 221012 ];

	UTGBioHUD_PlayerTip_execGetMessageInfoParticle_Parms GetMessageInfoParticle_Parms;
	memcpy ( &GetMessageInfoParticle_Parms.Info, &Info, 0x3C );

	this->ProcessEvent ( pFnGetMessageInfoParticle, &GetMessageInfoParticle_Parms, NULL );

	return GetMessageInfoParticle_Parms.ReturnValue;
};

// Function TGBioGame.TGBioHUD_PlayerTip.ShowVolumeTip
// [0x00820002] 
// Parameters infos:
// struct FString                 Tip                            ( CPF_Parm | CPF_NeedCtorLink )
// float                          Duration                       ( CPF_Parm )

void UTGBioHUD_PlayerTip::ShowVolumeTip ( struct FString Tip, float Duration )
{
	static UFunction* pFnShowVolumeTip = NULL;

	if ( ! pFnShowVolumeTip )
		pFnShowVolumeTip = (UFunction*) UObject::GObjObjects()->Data[ 221008 ];

	UTGBioHUD_PlayerTip_execShowVolumeTip_Parms ShowVolumeTip_Parms;
	memcpy ( &ShowVolumeTip_Parms.Tip, &Tip, 0xC );
	ShowVolumeTip_Parms.Duration = Duration;

	this->ProcessEvent ( pFnShowVolumeTip, &ShowVolumeTip_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddGeneAugmentationAddHpTitle
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void UTGBioHUD_PlayerTip::AddGeneAugmentationAddHpTitle ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddGeneAugmentationAddHpTitle = NULL;

	if ( ! pFnAddGeneAugmentationAddHpTitle )
		pFnAddGeneAugmentationAddHpTitle = (UFunction*) UObject::GObjObjects()->Data[ 221004 ];

	UTGBioHUD_PlayerTip_execAddGeneAugmentationAddHpTitle_Parms AddGeneAugmentationAddHpTitle_Parms;
	AddGeneAugmentationAddHpTitle_Parms.PRI = PRI;
	AddGeneAugmentationAddHpTitle_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddGeneAugmentationAddHpTitle, &AddGeneAugmentationAddHpTitle_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddProtectTitle
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )
// int                            inSwitch                       ( CPF_Parm )

void UTGBioHUD_PlayerTip::AddProtectTitle ( class APlayerReplicationInfo* PRI, float Duration, int inSwitch )
{
	static UFunction* pFnAddProtectTitle = NULL;

	if ( ! pFnAddProtectTitle )
		pFnAddProtectTitle = (UFunction*) UObject::GObjObjects()->Data[ 220998 ];

	UTGBioHUD_PlayerTip_execAddProtectTitle_Parms AddProtectTitle_Parms;
	AddProtectTitle_Parms.PRI = PRI;
	AddProtectTitle_Parms.Duration = Duration;
	AddProtectTitle_Parms.inSwitch = inSwitch;

	this->ProcessEvent ( pFnAddProtectTitle, &AddProtectTitle_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddZombieAbsoreTitle
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void UTGBioHUD_PlayerTip::AddZombieAbsoreTitle ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddZombieAbsoreTitle = NULL;

	if ( ! pFnAddZombieAbsoreTitle )
		pFnAddZombieAbsoreTitle = (UFunction*) UObject::GObjObjects()->Data[ 220994 ];

	UTGBioHUD_PlayerTip_execAddZombieAbsoreTitle_Parms AddZombieAbsoreTitle_Parms;
	AddZombieAbsoreTitle_Parms.PRI = PRI;
	AddZombieAbsoreTitle_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddZombieAbsoreTitle, &AddZombieAbsoreTitle_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddZombieSelectSucceed
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void UTGBioHUD_PlayerTip::AddZombieSelectSucceed ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddZombieSelectSucceed = NULL;

	if ( ! pFnAddZombieSelectSucceed )
		pFnAddZombieSelectSucceed = (UFunction*) UObject::GObjObjects()->Data[ 220990 ];

	UTGBioHUD_PlayerTip_execAddZombieSelectSucceed_Parms AddZombieSelectSucceed_Parms;
	AddZombieSelectSucceed_Parms.PRI = PRI;
	AddZombieSelectSucceed_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddZombieSelectSucceed, &AddZombieSelectSucceed_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddUseSkillCountDown
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void UTGBioHUD_PlayerTip::AddUseSkillCountDown ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddUseSkillCountDown = NULL;

	if ( ! pFnAddUseSkillCountDown )
		pFnAddUseSkillCountDown = (UFunction*) UObject::GObjObjects()->Data[ 220986 ];

	UTGBioHUD_PlayerTip_execAddUseSkillCountDown_Parms AddUseSkillCountDown_Parms;
	AddUseSkillCountDown_Parms.PRI = PRI;
	AddUseSkillCountDown_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddUseSkillCountDown, &AddUseSkillCountDown_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddSkillTrampleCasualiesFeedback
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void UTGBioHUD_PlayerTip::AddSkillTrampleCasualiesFeedback ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddSkillTrampleCasualiesFeedback = NULL;

	if ( ! pFnAddSkillTrampleCasualiesFeedback )
		pFnAddSkillTrampleCasualiesFeedback = (UFunction*) UObject::GObjObjects()->Data[ 220982 ];

	UTGBioHUD_PlayerTip_execAddSkillTrampleCasualiesFeedback_Parms AddSkillTrampleCasualiesFeedback_Parms;
	AddSkillTrampleCasualiesFeedback_Parms.PRI = PRI;
	AddSkillTrampleCasualiesFeedback_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddSkillTrampleCasualiesFeedback, &AddSkillTrampleCasualiesFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddFlyCutterSkillAgainstFeedback
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void UTGBioHUD_PlayerTip::AddFlyCutterSkillAgainstFeedback ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddFlyCutterSkillAgainstFeedback = NULL;

	if ( ! pFnAddFlyCutterSkillAgainstFeedback )
		pFnAddFlyCutterSkillAgainstFeedback = (UFunction*) UObject::GObjObjects()->Data[ 220978 ];

	UTGBioHUD_PlayerTip_execAddFlyCutterSkillAgainstFeedback_Parms AddFlyCutterSkillAgainstFeedback_Parms;
	AddFlyCutterSkillAgainstFeedback_Parms.PRI = PRI;
	AddFlyCutterSkillAgainstFeedback_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddFlyCutterSkillAgainstFeedback, &AddFlyCutterSkillAgainstFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddSkillFeedback
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )
// int                            inSwitch                       ( CPF_Parm )

void UTGBioHUD_PlayerTip::AddSkillFeedback ( class APlayerReplicationInfo* PRI, float Duration, int inSwitch )
{
	static UFunction* pFnAddSkillFeedback = NULL;

	if ( ! pFnAddSkillFeedback )
		pFnAddSkillFeedback = (UFunction*) UObject::GObjObjects()->Data[ 220971 ];

	UTGBioHUD_PlayerTip_execAddSkillFeedback_Parms AddSkillFeedback_Parms;
	AddSkillFeedback_Parms.PRI = PRI;
	AddSkillFeedback_Parms.Duration = Duration;
	AddSkillFeedback_Parms.inSwitch = inSwitch;

	this->ProcessEvent ( pFnAddSkillFeedback, &AddSkillFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddUseSkillAllow
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )
// int                            inSwitch                       ( CPF_Parm )

void UTGBioHUD_PlayerTip::AddUseSkillAllow ( class APlayerReplicationInfo* PRI, float Duration, int inSwitch )
{
	static UFunction* pFnAddUseSkillAllow = NULL;

	if ( ! pFnAddUseSkillAllow )
		pFnAddUseSkillAllow = (UFunction*) UObject::GObjObjects()->Data[ 220964 ];

	UTGBioHUD_PlayerTip_execAddUseSkillAllow_Parms AddUseSkillAllow_Parms;
	AddUseSkillAllow_Parms.PRI = PRI;
	AddUseSkillAllow_Parms.Duration = Duration;
	AddUseSkillAllow_Parms.inSwitch = inSwitch;

	this->ProcessEvent ( pFnAddUseSkillAllow, &AddUseSkillAllow_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddZombieRevive
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )
// int                            inSwitch                       ( CPF_Parm )

void UTGBioHUD_PlayerTip::AddZombieRevive ( class APlayerReplicationInfo* PRI, float Duration, int inSwitch )
{
	static UFunction* pFnAddZombieRevive = NULL;

	if ( ! pFnAddZombieRevive )
		pFnAddZombieRevive = (UFunction*) UObject::GObjObjects()->Data[ 220957 ];

	UTGBioHUD_PlayerTip_execAddZombieRevive_Parms AddZombieRevive_Parms;
	AddZombieRevive_Parms.PRI = PRI;
	AddZombieRevive_Parms.Duration = Duration;
	AddZombieRevive_Parms.inSwitch = inSwitch;

	this->ProcessEvent ( pFnAddZombieRevive, &AddZombieRevive_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddTerminatorByKill
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void UTGBioHUD_PlayerTip::AddTerminatorByKill ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddTerminatorByKill = NULL;

	if ( ! pFnAddTerminatorByKill )
		pFnAddTerminatorByKill = (UFunction*) UObject::GObjObjects()->Data[ 220953 ];

	UTGBioHUD_PlayerTip_execAddTerminatorByKill_Parms AddTerminatorByKill_Parms;
	AddTerminatorByKill_Parms.PRI = PRI;
	AddTerminatorByKill_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddTerminatorByKill, &AddTerminatorByKill_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddFetchedPropMessage
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// unsigned char                  FetchedPropType                ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void UTGBioHUD_PlayerTip::AddFetchedPropMessage ( class APlayerReplicationInfo* PRI, unsigned char FetchedPropType, float Duration )
{
	static UFunction* pFnAddFetchedPropMessage = NULL;

	if ( ! pFnAddFetchedPropMessage )
		pFnAddFetchedPropMessage = (UFunction*) UObject::GObjObjects()->Data[ 220946 ];

	UTGBioHUD_PlayerTip_execAddFetchedPropMessage_Parms AddFetchedPropMessage_Parms;
	AddFetchedPropMessage_Parms.PRI = PRI;
	AddFetchedPropMessage_Parms.FetchedPropType = FetchedPropType;
	AddFetchedPropMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddFetchedPropMessage, &AddFetchedPropMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddRandomPickupMessage
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )
// struct FString                 weaponStr                      ( CPF_Parm | CPF_NeedCtorLink )

void UTGBioHUD_PlayerTip::AddRandomPickupMessage ( class APlayerReplicationInfo* PRI, float Duration, struct FString weaponStr )
{
	static UFunction* pFnAddRandomPickupMessage = NULL;

	if ( ! pFnAddRandomPickupMessage )
		pFnAddRandomPickupMessage = (UFunction*) UObject::GObjObjects()->Data[ 220941 ];

	UTGBioHUD_PlayerTip_execAddRandomPickupMessage_Parms AddRandomPickupMessage_Parms;
	AddRandomPickupMessage_Parms.PRI = PRI;
	AddRandomPickupMessage_Parms.Duration = Duration;
	memcpy ( &AddRandomPickupMessage_Parms.weaponStr, &weaponStr, 0xC );

	this->ProcessEvent ( pFnAddRandomPickupMessage, &AddRandomPickupMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.RemovePropMessage
// [0x00820002] 
// Parameters infos:

void UTGBioHUD_PlayerTip::RemovePropMessage ( )
{
	static UFunction* pFnRemovePropMessage = NULL;

	if ( ! pFnRemovePropMessage )
		pFnRemovePropMessage = (UFunction*) UObject::GObjObjects()->Data[ 220938 ];

	UTGBioHUD_PlayerTip_execRemovePropMessage_Parms RemovePropMessage_Parms;

	this->ProcessEvent ( pFnRemovePropMessage, &RemovePropMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddTerminatorMessage
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void UTGBioHUD_PlayerTip::AddTerminatorMessage ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddTerminatorMessage = NULL;

	if ( ! pFnAddTerminatorMessage )
		pFnAddTerminatorMessage = (UFunction*) UObject::GObjObjects()->Data[ 220934 ];

	UTGBioHUD_PlayerTip_execAddTerminatorMessage_Parms AddTerminatorMessage_Parms;
	AddTerminatorMessage_Parms.PRI = PRI;
	AddTerminatorMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddTerminatorMessage, &AddTerminatorMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddHumanAttackMessage
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void UTGBioHUD_PlayerTip::AddHumanAttackMessage ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddHumanAttackMessage = NULL;

	if ( ! pFnAddHumanAttackMessage )
		pFnAddHumanAttackMessage = (UFunction*) UObject::GObjObjects()->Data[ 220930 ];

	UTGBioHUD_PlayerTip_execAddHumanAttackMessage_Parms AddHumanAttackMessage_Parms;
	AddHumanAttackMessage_Parms.PRI = PRI;
	AddHumanAttackMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddHumanAttackMessage, &AddHumanAttackMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddTimerMessageFeedback
// [0x00020002] 
// Parameters infos:
// int                            RemainingSeconds               ( CPF_Parm )

void UTGBioHUD_PlayerTip::AddTimerMessageFeedback ( int RemainingSeconds )
{
	static UFunction* pFnAddTimerMessageFeedback = NULL;

	if ( ! pFnAddTimerMessageFeedback )
		pFnAddTimerMessageFeedback = (UFunction*) UObject::GObjObjects()->Data[ 220927 ];

	UTGBioHUD_PlayerTip_execAddTimerMessageFeedback_Parms AddTimerMessageFeedback_Parms;
	AddTimerMessageFeedback_Parms.RemainingSeconds = RemainingSeconds;

	this->ProcessEvent ( pFnAddTimerMessageFeedback, &AddTimerMessageFeedback_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddRoundStartTimerMessage
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// int                            Duration                       ( CPF_Parm )

void UTGBioHUD_PlayerTip::AddRoundStartTimerMessage ( class APlayerReplicationInfo* PRI, int Duration )
{
	static UFunction* pFnAddRoundStartTimerMessage = NULL;

	if ( ! pFnAddRoundStartTimerMessage )
		pFnAddRoundStartTimerMessage = (UFunction*) UObject::GObjObjects()->Data[ 220923 ];

	UTGBioHUD_PlayerTip_execAddRoundStartTimerMessage_Parms AddRoundStartTimerMessage_Parms;
	AddRoundStartTimerMessage_Parms.PRI = PRI;
	AddRoundStartTimerMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddRoundStartTimerMessage, &AddRoundStartTimerMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddHumanHeroDieMessage
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void UTGBioHUD_PlayerTip::AddHumanHeroDieMessage ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddHumanHeroDieMessage = NULL;

	if ( ! pFnAddHumanHeroDieMessage )
		pFnAddHumanHeroDieMessage = (UFunction*) UObject::GObjObjects()->Data[ 220919 ];

	UTGBioHUD_PlayerTip_execAddHumanHeroDieMessage_Parms AddHumanHeroDieMessage_Parms;
	AddHumanHeroDieMessage_Parms.PRI = PRI;
	AddHumanHeroDieMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddHumanHeroDieMessage, &AddHumanHeroDieMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddZombieGiveFailMessage
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void UTGBioHUD_PlayerTip::AddZombieGiveFailMessage ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddZombieGiveFailMessage = NULL;

	if ( ! pFnAddZombieGiveFailMessage )
		pFnAddZombieGiveFailMessage = (UFunction*) UObject::GObjObjects()->Data[ 220915 ];

	UTGBioHUD_PlayerTip_execAddZombieGiveFailMessage_Parms AddZombieGiveFailMessage_Parms;
	AddZombieGiveFailMessage_Parms.PRI = PRI;
	AddZombieGiveFailMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddZombieGiveFailMessage, &AddZombieGiveFailMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddKillZombieUseHeroGunMessage
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void UTGBioHUD_PlayerTip::AddKillZombieUseHeroGunMessage ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddKillZombieUseHeroGunMessage = NULL;

	if ( ! pFnAddKillZombieUseHeroGunMessage )
		pFnAddKillZombieUseHeroGunMessage = (UFunction*) UObject::GObjObjects()->Data[ 220911 ];

	UTGBioHUD_PlayerTip_execAddKillZombieUseHeroGunMessage_Parms AddKillZombieUseHeroGunMessage_Parms;
	AddKillZombieUseHeroGunMessage_Parms.PRI = PRI;
	AddKillZombieUseHeroGunMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddKillZombieUseHeroGunMessage, &AddKillZombieUseHeroGunMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddKillZombieUseMeeMessage
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void UTGBioHUD_PlayerTip::AddKillZombieUseMeeMessage ( class APlayerReplicationInfo* PRI, float Duration )
{
	static UFunction* pFnAddKillZombieUseMeeMessage = NULL;

	if ( ! pFnAddKillZombieUseMeeMessage )
		pFnAddKillZombieUseMeeMessage = (UFunction*) UObject::GObjObjects()->Data[ 220907 ];

	UTGBioHUD_PlayerTip_execAddKillZombieUseMeeMessage_Parms AddKillZombieUseMeeMessage_Parms;
	AddKillZombieUseMeeMessage_Parms.PRI = PRI;
	AddKillZombieUseMeeMessage_Parms.Duration = Duration;

	this->ProcessEvent ( pFnAddKillZombieUseMeeMessage, &AddKillZombieUseMeeMessage_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.RemoveMessageFromList
// [0x00820102] 
// Parameters infos:
// unsigned char                  InputType                      ( CPF_Parm )

void UTGBioHUD_PlayerTip::RemoveMessageFromList ( unsigned char InputType )
{
	static UFunction* pFnRemoveMessageFromList = NULL;

	if ( ! pFnRemoveMessageFromList )
		pFnRemoveMessageFromList = (UFunction*) UObject::GObjObjects()->Data[ 220903 ];

	UTGBioHUD_PlayerTip_execRemoveMessageFromList_Parms RemoveMessageFromList_Parms;
	RemoveMessageFromList_Parms.InputType = InputType;

	this->ProcessEvent ( pFnRemoveMessageFromList, &RemoveMessageFromList_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddItemToMessageList
// [0x00824102] 
// Parameters infos:
// struct FBioMessageInfo         NewInfo                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  InputType                      ( CPF_Parm )
// unsigned long                  bShouldLast                    ( CPF_OptionalParm | CPF_Parm )

void UTGBioHUD_PlayerTip::AddItemToMessageList ( struct FBioMessageInfo NewInfo, unsigned char InputType, unsigned long bShouldLast )
{
	static UFunction* pFnAddItemToMessageList = NULL;

	if ( ! pFnAddItemToMessageList )
		pFnAddItemToMessageList = (UFunction*) UObject::GObjObjects()->Data[ 220897 ];

	UTGBioHUD_PlayerTip_execAddItemToMessageList_Parms AddItemToMessageList_Parms;
	memcpy ( &AddItemToMessageList_Parms.NewInfo, &NewInfo, 0x3C );
	AddItemToMessageList_Parms.InputType = InputType;
	AddItemToMessageList_Parms.bShouldLast = bShouldLast;

	this->ProcessEvent ( pFnAddItemToMessageList, &AddItemToMessageList_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.MessageType2Tipindex
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  MsgType                        ( CPF_Parm )

int UTGBioHUD_PlayerTip::MessageType2Tipindex ( unsigned char MsgType )
{
	static UFunction* pFnMessageType2Tipindex = NULL;

	if ( ! pFnMessageType2Tipindex )
		pFnMessageType2Tipindex = (UFunction*) UObject::GObjObjects()->Data[ 220894 ];

	UTGBioHUD_PlayerTip_execMessageType2Tipindex_Parms MessageType2Tipindex_Parms;
	MessageType2Tipindex_Parms.MsgType = MsgType;

	this->ProcessEvent ( pFnMessageType2Tipindex, &MessageType2Tipindex_Parms, NULL );

	return MessageType2Tipindex_Parms.ReturnValue;
};

// Function TGBioGame.TGBioHUD_PlayerTip.UpdateMessageTip
// [0x00820002] 
// Parameters infos:

void UTGBioHUD_PlayerTip::UpdateMessageTip ( )
{
	static UFunction* pFnUpdateMessageTip = NULL;

	if ( ! pFnUpdateMessageTip )
		pFnUpdateMessageTip = (UFunction*) UObject::GObjObjects()->Data[ 220889 ];

	UTGBioHUD_PlayerTip_execUpdateMessageTip_Parms UpdateMessageTip_Parms;

	this->ProcessEvent ( pFnUpdateMessageTip, &UpdateMessageTip_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.RoundReset
// [0x00020002] 
// Parameters infos:

void UTGBioHUD_PlayerTip::RoundReset ( )
{
	static UFunction* pFnRoundReset = NULL;

	if ( ! pFnRoundReset )
		pFnRoundReset = (UFunction*) UObject::GObjObjects()->Data[ 220888 ];

	UTGBioHUD_PlayerTip_execRoundReset_Parms RoundReset_Parms;

	this->ProcessEvent ( pFnRoundReset, &RoundReset_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.UpdatePlayerTips
// [0x00020002] 
// Parameters infos:

void UTGBioHUD_PlayerTip::UpdatePlayerTips ( )
{
	static UFunction* pFnUpdatePlayerTips = NULL;

	if ( ! pFnUpdatePlayerTips )
		pFnUpdatePlayerTips = (UFunction*) UObject::GObjObjects()->Data[ 220887 ];

	UTGBioHUD_PlayerTip_execUpdatePlayerTips_Parms UpdatePlayerTips_Parms;

	this->ProcessEvent ( pFnUpdatePlayerTips, &UpdatePlayerTips_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.Tick
// [0x00020002] 
// Parameters infos:

void UTGBioHUD_PlayerTip::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 220884 ];

	UTGBioHUD_PlayerTip_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGBioHUD_PlayerTip::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 220883 ];

	UTGBioHUD_PlayerTip_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_PlayerTip.PostBeginPlay
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void UTGBioHUD_PlayerTip::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 220882 ];

	UTGBioHUD_PlayerTip_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioHUDDriveOneKill.Update
// [0x00020002] 
// Parameters infos:
// class ATGBioHUD*               myHUD                          ( CPF_Parm )

void UTGBioHUDDriveOneKill::Update ( class ATGBioHUD* myHUD )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->Data[ 221069 ];

	UTGBioHUDDriveOneKill_execUpdate_Parms Update_Parms;
	Update_Parms.myHUD = myHUD;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );
};

// Function TGBioGame.TGBioHUDDrive.Update
// [0x00020002] 
// Parameters infos:
// class ATGBioHUD*               myHUD                          ( CPF_Parm )

void UTGBioHUDDrive::Update ( class ATGBioHUD* myHUD )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->Data[ 221028 ];

	UTGBioHUDDrive_execUpdate_Parms Update_Parms;
	Update_Parms.myHUD = myHUD;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );
};

// Function TGBioGame.TGBioHUDDrive.SetEndPos
// [0x00020002] 
// Parameters infos:
// struct FVector2D               pos                            ( CPF_Parm )

void UTGBioHUDDrive::SetEndPos ( struct FVector2D pos )
{
	static UFunction* pFnSetEndPos = NULL;

	if ( ! pFnSetEndPos )
		pFnSetEndPos = (UFunction*) UObject::GObjObjects()->Data[ 221026 ];

	UTGBioHUDDrive_execSetEndPos_Parms SetEndPos_Parms;
	memcpy ( &SetEndPos_Parms.pos, &pos, 0x8 );

	this->ProcessEvent ( pFnSetEndPos, &SetEndPos_Parms, NULL );
};

// Function TGBioGame.TGBioHUDDriveHurt.Update
// [0x00020002] 
// Parameters infos:
// class ATGBioHUD*               myHUD                          ( CPF_Parm )

void UTGBioHUDDriveHurt::Update ( class ATGBioHUD* myHUD )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->Data[ 221042 ];

	UTGBioHUDDriveHurt_execUpdate_Parms Update_Parms;
	Update_Parms.myHUD = myHUD;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );
};

// Function TGBioGame.TGBioHUDDriveHurt.GetHurtPawnScreenLoc
// [0x00020002] 
// Parameters infos:
// class ATGBioHUD*               myHUD                          ( CPF_Parm )

void UTGBioHUDDriveHurt::GetHurtPawnScreenLoc ( class ATGBioHUD* myHUD )
{
	static UFunction* pFnGetHurtPawnScreenLoc = NULL;

	if ( ! pFnGetHurtPawnScreenLoc )
		pFnGetHurtPawnScreenLoc = (UFunction*) UObject::GObjObjects()->Data[ 221040 ];

	UTGBioHUDDriveHurt_execGetHurtPawnScreenLoc_Parms GetHurtPawnScreenLoc_Parms;
	GetHurtPawnScreenLoc_Parms.myHUD = myHUD;

	this->ProcessEvent ( pFnGetHurtPawnScreenLoc, &GetHurtPawnScreenLoc_Parms, NULL );
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.NotifyLocalPlayerDead
// [0x00020100] 
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void ATGBioRandomWeaponPickupFactory::NotifyLocalPlayerDead ( class APlayerController* PC )
{
	static UFunction* pFnNotifyLocalPlayerDead = NULL;

	if ( ! pFnNotifyLocalPlayerDead )
		pFnNotifyLocalPlayerDead = (UFunction*) UObject::GObjObjects()->Data[ 222951 ];

	ATGBioRandomWeaponPickupFactory_execNotifyLocalPlayerDead_Parms NotifyLocalPlayerDead_Parms;
	NotifyLocalPlayerDead_Parms.PC = PC;

	this->ProcessEvent ( pFnNotifyLocalPlayerDead, &NotifyLocalPlayerDead_Parms, NULL );
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.ShowHidden
// [0x00020102] 
// Parameters infos:

void ATGBioRandomWeaponPickupFactory::ShowHidden ( )
{
	static UFunction* pFnShowHidden = NULL;

	if ( ! pFnShowHidden )
		pFnShowHidden = (UFunction*) UObject::GObjObjects()->Data[ 222950 ];

	ATGBioRandomWeaponPickupFactory_execShowHidden_Parms ShowHidden_Parms;

	this->ProcessEvent ( pFnShowHidden, &ShowHidden_Parms, NULL );
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.ShowActive
// [0x00020100] 
// Parameters infos:

void ATGBioRandomWeaponPickupFactory::ShowActive ( )
{
	static UFunction* pFnShowActive = NULL;

	if ( ! pFnShowActive )
		pFnShowActive = (UFunction*) UObject::GObjObjects()->Data[ 222949 ];

	ATGBioRandomWeaponPickupFactory_execShowActive_Parms ShowActive_Parms;

	this->ProcessEvent ( pFnShowActive, &ShowActive_Parms, NULL );
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.SpawnCopyFor
// [0x00020002] 
// Parameters infos:
// class APawn*                   Recipient                      ( CPF_Parm )

void ATGBioRandomWeaponPickupFactory::SpawnCopyFor ( class APawn* Recipient )
{
	static UFunction* pFnSpawnCopyFor = NULL;

	if ( ! pFnSpawnCopyFor )
		pFnSpawnCopyFor = (UFunction*) UObject::GObjObjects()->Data[ 222946 ];

	ATGBioRandomWeaponPickupFactory_execSpawnCopyFor_Parms SpawnCopyFor_Parms;
	SpawnCopyFor_Parms.Recipient = Recipient;

	this->ProcessEvent ( pFnSpawnCopyFor, &SpawnCopyFor_Parms, NULL );
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.PickedUpBy
// [0x00020002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void ATGBioRandomWeaponPickupFactory::PickedUpBy ( class APawn* P )
{
	static UFunction* pFnPickedUpBy = NULL;

	if ( ! pFnPickedUpBy )
		pFnPickedUpBy = (UFunction*) UObject::GObjObjects()->Data[ 222943 ];

	ATGBioRandomWeaponPickupFactory_execPickedUpBy_Parms PickedUpBy_Parms;
	PickedUpBy_Parms.P = P;

	this->ProcessEvent ( pFnPickedUpBy, &PickedUpBy_Parms, NULL );
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.AllowPickup
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AUTBot*                  Bot                            ( CPF_Parm )

bool ATGBioRandomWeaponPickupFactory::AllowPickup ( class AUTBot* Bot )
{
	static UFunction* pFnAllowPickup = NULL;

	if ( ! pFnAllowPickup )
		pFnAllowPickup = (UFunction*) UObject::GObjObjects()->Data[ 222940 ];

	ATGBioRandomWeaponPickupFactory_execAllowPickup_Parms AllowPickup_Parms;
	AllowPickup_Parms.Bot = Bot;

	this->ProcessEvent ( pFnAllowPickup, &AllowPickup_Parms, NULL );

	return AllowPickup_Parms.ReturnValue;
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.HasCustomer
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

bool ATGBioRandomWeaponPickupFactory::HasCustomer ( class APawn* P )
{
	static UFunction* pFnHasCustomer = NULL;

	if ( ! pFnHasCustomer )
		pFnHasCustomer = (UFunction*) UObject::GObjObjects()->Data[ 222935 ];

	ATGBioRandomWeaponPickupFactory_execHasCustomer_Parms HasCustomer_Parms;
	HasCustomer_Parms.P = P;

	this->ProcessEvent ( pFnHasCustomer, &HasCustomer_Parms, NULL );

	return HasCustomer_Parms.ReturnValue;
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.StartSleeping
// [0x00020002] 
// Parameters infos:

void ATGBioRandomWeaponPickupFactory::StartSleeping ( )
{
	static UFunction* pFnStartSleeping = NULL;

	if ( ! pFnStartSleeping )
		pFnStartSleeping = (UFunction*) UObject::GObjObjects()->Data[ 222934 ];

	ATGBioRandomWeaponPickupFactory_execStartSleeping_Parms StartSleeping_Parms;

	this->ProcessEvent ( pFnStartSleeping, &StartSleeping_Parms, NULL );
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.SetWeaponStay
// [0x00020002] 
// Parameters infos:

void ATGBioRandomWeaponPickupFactory::SetWeaponStay ( )
{
	static UFunction* pFnSetWeaponStay = NULL;

	if ( ! pFnSetWeaponStay )
		pFnSetWeaponStay = (UFunction*) UObject::GObjObjects()->Data[ 222933 ];

	ATGBioRandomWeaponPickupFactory_execSetWeaponStay_Parms SetWeaponStay_Parms;

	this->ProcessEvent ( pFnSetWeaponStay, &SetWeaponStay_Parms, NULL );
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.CheckForErrors
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioRandomWeaponPickupFactory::CheckForErrors ( )
{
	static UFunction* pFnCheckForErrors = NULL;

	if ( ! pFnCheckForErrors )
		pFnCheckForErrors = (UFunction*) UObject::GObjObjects()->Data[ 222931 ];

	ATGBioRandomWeaponPickupFactory_execCheckForErrors_Parms CheckForErrors_Parms;

	this->ProcessEvent ( pFnCheckForErrors, &CheckForErrors_Parms, NULL );

	return CheckForErrors_Parms.ReturnValue;
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGBioRandomWeaponPickupFactory::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 222929 ];

	ATGBioRandomWeaponPickupFactory_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.SetPickupMesh
// [0x00020102] 
// Parameters infos:

void ATGBioRandomWeaponPickupFactory::SetPickupMesh ( )
{
	static UFunction* pFnSetPickupMesh = NULL;

	if ( ! pFnSetPickupMesh )
		pFnSetPickupMesh = (UFunction*) UObject::GObjObjects()->Data[ 222928 ];

	ATGBioRandomWeaponPickupFactory_execSetPickupMesh_Parms SetPickupMesh_Parms;

	this->ProcessEvent ( pFnSetPickupMesh, &SetPickupMesh_Parms, NULL );
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.SetPickupHidden
// [0x00020102] 
// Parameters infos:

void ATGBioRandomWeaponPickupFactory::SetPickupHidden ( )
{
	static UFunction* pFnSetPickupHidden = NULL;

	if ( ! pFnSetPickupHidden )
		pFnSetPickupHidden = (UFunction*) UObject::GObjObjects()->Data[ 222927 ];

	ATGBioRandomWeaponPickupFactory_execSetPickupHidden_Parms SetPickupHidden_Parms;

	this->ProcessEvent ( pFnSetPickupHidden, &SetPickupHidden_Parms, NULL );
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.SetPickupVisible
// [0x00020102] 
// Parameters infos:

void ATGBioRandomWeaponPickupFactory::SetPickupVisible ( )
{
	static UFunction* pFnSetPickupVisible = NULL;

	if ( ! pFnSetPickupVisible )
		pFnSetPickupVisible = (UFunction*) UObject::GObjObjects()->Data[ 222926 ];

	ATGBioRandomWeaponPickupFactory_execSetPickupVisible_Parms SetPickupVisible_Parms;

	this->ProcessEvent ( pFnSetPickupVisible, &SetPickupVisible_Parms, NULL );
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.SetInitialState
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGBioRandomWeaponPickupFactory::eventSetInitialState ( )
{
	static UFunction* pFnSetInitialState = NULL;

	if ( ! pFnSetInitialState )
		pFnSetInitialState = (UFunction*) UObject::GObjObjects()->Data[ 222925 ];

	ATGBioRandomWeaponPickupFactory_eventSetInitialState_Parms SetInitialState_Parms;

	this->ProcessEvent ( pFnSetInitialState, &SetInitialState_Parms, NULL );
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.Initialize
// [0x00020102] 
// Parameters infos:

void ATGBioRandomWeaponPickupFactory::Initialize ( )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 222924 ];

	ATGBioRandomWeaponPickupFactory_execInitialize_Parms Initialize_Parms;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.ClearIconFlash
// [0x00020102] 
// Parameters infos:

void ATGBioRandomWeaponPickupFactory::ClearIconFlash ( )
{
	static UFunction* pFnClearIconFlash = NULL;

	if ( ! pFnClearIconFlash )
		pFnClearIconFlash = (UFunction*) UObject::GObjObjects()->Data[ 222923 ];

	ATGBioRandomWeaponPickupFactory_execClearIconFlash_Parms ClearIconFlash_Parms;

	this->ProcessEvent ( pFnClearIconFlash, &ClearIconFlash_Parms, NULL );
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.InitializePickup
// [0x00020102] 
// Parameters infos:

void ATGBioRandomWeaponPickupFactory::InitializePickup ( )
{
	static UFunction* pFnInitializePickup = NULL;

	if ( ! pFnInitializePickup )
		pFnInitializePickup = (UFunction*) UObject::GObjObjects()->Data[ 222917 ];

	ATGBioRandomWeaponPickupFactory_execInitializePickup_Parms InitializePickup_Parms;

	this->ProcessEvent ( pFnInitializePickup, &InitializePickup_Parms, NULL );
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGBioRandomWeaponPickupFactory::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 222914 ];

	ATGBioRandomWeaponPickupFactory_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioTabScoreBoard.DrawLocalPlayerInfo
// [0x00020002] 
// Parameters infos:
// struct FVector2D               pos                            ( CPF_Parm )

void UTGBioTabScoreBoard::DrawLocalPlayerInfo ( struct FVector2D pos )
{
	static UFunction* pFnDrawLocalPlayerInfo = NULL;

	if ( ! pFnDrawLocalPlayerInfo )
		pFnDrawLocalPlayerInfo = (UFunction*) UObject::GObjObjects()->Data[ 223535 ];

	UTGBioTabScoreBoard_execDrawLocalPlayerInfo_Parms DrawLocalPlayerInfo_Parms;
	memcpy ( &DrawLocalPlayerInfo_Parms.pos, &pos, 0x8 );

	this->ProcessEvent ( pFnDrawLocalPlayerInfo, &DrawLocalPlayerInfo_Parms, NULL );
};

// Function TGBioGame.TGBioTabScoreBoard.DrawItemText
// [0x00420002] 
// Parameters infos:
// int                            PosX                           ( CPF_Parm )
// int                            PosY                           ( CPF_Parm )
// class ATGPlayerReplicationInfo* PRI                            ( CPF_Parm )
// struct FColor                  TextColor                      ( CPF_Parm | CPF_OutParm )

void UTGBioTabScoreBoard::DrawItemText ( int PosX, int PosY, class ATGPlayerReplicationInfo* PRI, struct FColor* TextColor )
{
	static UFunction* pFnDrawItemText = NULL;

	if ( ! pFnDrawItemText )
		pFnDrawItemText = (UFunction*) UObject::GObjObjects()->Data[ 223529 ];

	UTGBioTabScoreBoard_execDrawItemText_Parms DrawItemText_Parms;
	DrawItemText_Parms.PosX = PosX;
	DrawItemText_Parms.PosY = PosY;
	DrawItemText_Parms.PRI = PRI;

	this->ProcessEvent ( pFnDrawItemText, &DrawItemText_Parms, NULL );

	if ( TextColor )
		memcpy ( TextColor, &DrawItemText_Parms.TextColor, 0x4 );
};

// Function TGBioGame.TGBioTabScoreBoard.DrawItemTextSelf
// [0x00420002] 
// Parameters infos:
// int                            PosX                           ( CPF_Parm )
// int                            PosY                           ( CPF_Parm )
// class ATGPlayerReplicationInfo* PRI                            ( CPF_Parm )
// struct FColor                  TextColor                      ( CPF_Parm | CPF_OutParm )

void UTGBioTabScoreBoard::DrawItemTextSelf ( int PosX, int PosY, class ATGPlayerReplicationInfo* PRI, struct FColor* TextColor )
{
	static UFunction* pFnDrawItemTextSelf = NULL;

	if ( ! pFnDrawItemTextSelf )
		pFnDrawItemTextSelf = (UFunction*) UObject::GObjObjects()->Data[ 223523 ];

	UTGBioTabScoreBoard_execDrawItemTextSelf_Parms DrawItemTextSelf_Parms;
	DrawItemTextSelf_Parms.PosX = PosX;
	DrawItemTextSelf_Parms.PosY = PosY;
	DrawItemTextSelf_Parms.PRI = PRI;

	this->ProcessEvent ( pFnDrawItemTextSelf, &DrawItemTextSelf_Parms, NULL );

	if ( TextColor )
		memcpy ( TextColor, &DrawItemTextSelf_Parms.TextColor, 0x4 );
};

// Function TGBioGame.TGBioTabScoreBoard.DrawExtraIcons
// [0x00020002] 
// Parameters infos:
// struct FVector2D               pos                            ( CPF_Parm )
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )

void UTGBioTabScoreBoard::DrawExtraIcons ( struct FVector2D pos, class APlayerReplicationInfo* PRI )
{
	static UFunction* pFnDrawExtraIcons = NULL;

	if ( ! pFnDrawExtraIcons )
		pFnDrawExtraIcons = (UFunction*) UObject::GObjObjects()->Data[ 223517 ];

	UTGBioTabScoreBoard_execDrawExtraIcons_Parms DrawExtraIcons_Parms;
	memcpy ( &DrawExtraIcons_Parms.pos, &pos, 0x8 );
	DrawExtraIcons_Parms.PRI = PRI;

	this->ProcessEvent ( pFnDrawExtraIcons, &DrawExtraIcons_Parms, NULL );
};

// Function TGBioGame.TGBioTabScoreBoard.DrawScoreItem
// [0x00820002] 
// Parameters infos:
// struct FVector2D               StartPos                       ( CPF_Parm )
// class ATGPlayerReplicationInfo* PRI                            ( CPF_Parm )
// int                            Index                          ( CPF_Parm )

void UTGBioTabScoreBoard::DrawScoreItem ( struct FVector2D StartPos, class ATGPlayerReplicationInfo* PRI, int Index )
{
	static UFunction* pFnDrawScoreItem = NULL;

	if ( ! pFnDrawScoreItem )
		pFnDrawScoreItem = (UFunction*) UObject::GObjObjects()->Data[ 223509 ];

	UTGBioTabScoreBoard_execDrawScoreItem_Parms DrawScoreItem_Parms;
	memcpy ( &DrawScoreItem_Parms.StartPos, &StartPos, 0x8 );
	DrawScoreItem_Parms.PRI = PRI;
	DrawScoreItem_Parms.Index = Index;

	this->ProcessEvent ( pFnDrawScoreItem, &DrawScoreItem_Parms, NULL );
};

// Function TGBioGame.TGBioTabScoreBoard.DisplayTabScore
// [0x00020002] 
// Parameters infos:

void UTGBioTabScoreBoard::DisplayTabScore ( )
{
	static UFunction* pFnDisplayTabScore = NULL;

	if ( ! pFnDisplayTabScore )
		pFnDisplayTabScore = (UFunction*) UObject::GObjObjects()->Data[ 223505 ];

	UTGBioTabScoreBoard_execDisplayTabScore_Parms DisplayTabScore_Parms;

	this->ProcessEvent ( pFnDisplayTabScore, &DisplayTabScore_Parms, NULL );
};

// Function TGBioGame.TGBioTabScoreBoard.InitItemPosition
// [0x00020002] 
// Parameters infos:

void UTGBioTabScoreBoard::InitItemPosition ( )
{
	static UFunction* pFnInitItemPosition = NULL;

	if ( ! pFnInitItemPosition )
		pFnInitItemPosition = (UFunction*) UObject::GObjObjects()->Data[ 223504 ];

	UTGBioTabScoreBoard_execInitItemPosition_Parms InitItemPosition_Parms;

	this->ProcessEvent ( pFnInitItemPosition, &InitItemPosition_Parms, NULL );
};

// Function TGBioGame.TGBioTabScoreBoard.DrawScoreBoard
// [0x00020002] 
// Parameters infos:

void UTGBioTabScoreBoard::DrawScoreBoard ( )
{
	static UFunction* pFnDrawScoreBoard = NULL;

	if ( ! pFnDrawScoreBoard )
		pFnDrawScoreBoard = (UFunction*) UObject::GObjObjects()->Data[ 223503 ];

	UTGBioTabScoreBoard_execDrawScoreBoard_Parms DrawScoreBoard_Parms;

	this->ProcessEvent ( pFnDrawScoreBoard, &DrawScoreBoard_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_Defence.UpdateDefence
// [0x00020002] 
// Parameters infos:

void UTGBioHUD_Defence::UpdateDefence ( )
{
	static UFunction* pFnUpdateDefence = NULL;

	if ( ! pFnUpdateDefence )
		pFnUpdateDefence = (UFunction*) UObject::GObjObjects()->Data[ 220816 ];

	UTGBioHUD_Defence_execUpdateDefence_Parms UpdateDefence_Parms;

	this->ProcessEvent ( pFnUpdateDefence, &UpdateDefence_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_Defence.Tick
// [0x00020002] 
// Parameters infos:

void UTGBioHUD_Defence::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 220814 ];

	UTGBioHUD_Defence_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_Defence.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGBioHUD_Defence::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 220813 ];

	UTGBioHUD_Defence_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGBioGame.TGBioHUD_Defence.PostBeginPlay
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void UTGBioHUD_Defence::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 220812 ];

	UTGBioHUD_Defence_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioHUDDriveChangeHumanHero.Update
// [0x00820002] 
// Parameters infos:
// class ATGBioHUD*               myHUD                          ( CPF_Parm )

void UTGBioHUDDriveChangeHumanHero::Update ( class ATGBioHUD* myHUD )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->Data[ 221032 ];

	UTGBioHUDDriveChangeHumanHero_execUpdate_Parms Update_Parms;
	Update_Parms.myHUD = myHUD;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );
};

// Function TGBioGame.TGBioHUDDriveSkill.Update
// [0x00820002] 
// Parameters infos:
// class ATGBioHUD*               myHUD                          ( CPF_Parm )

void UTGBioHUDDriveSkill::Update ( class ATGBioHUD* myHUD )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->Data[ 221074 ];

	UTGBioHUDDriveSkill_execUpdate_Parms Update_Parms;
	Update_Parms.myHUD = myHUD;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroHUD_BaseInfo.UpdateHumanHeroBaseInfo
// [0x00020002] 
// Parameters infos:

void UTGBioHumanHeroHUD_BaseInfo::UpdateHumanHeroBaseInfo ( )
{
	static UFunction* pFnUpdateHumanHeroBaseInfo = NULL;

	if ( ! pFnUpdateHumanHeroBaseInfo )
		pFnUpdateHumanHeroBaseInfo = (UFunction*) UObject::GObjObjects()->Data[ 221086 ];

	UTGBioHumanHeroHUD_BaseInfo_execUpdateHumanHeroBaseInfo_Parms UpdateHumanHeroBaseInfo_Parms;

	this->ProcessEvent ( pFnUpdateHumanHeroBaseInfo, &UpdateHumanHeroBaseInfo_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroHUD_BaseInfo.Tick
// [0x00020002] 
// Parameters infos:

void UTGBioHumanHeroHUD_BaseInfo::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 221084 ];

	UTGBioHumanHeroHUD_BaseInfo_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroHUD_BaseInfo.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGBioHumanHeroHUD_BaseInfo::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 221083 ];

	UTGBioHumanHeroHUD_BaseInfo_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroHUD_BaseInfo.PostBeginPlay
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void UTGBioHumanHeroHUD_BaseInfo::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 221082 ];

	UTGBioHumanHeroHUD_BaseInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioHumanHeroInventoryManager.HandlePickupQuery
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  ItemClass                      ( CPF_Parm )
// class AActor*                  Pickup                         ( CPF_Parm )

bool ATGBioHumanHeroInventoryManager::HandlePickupQuery ( class UClass* ItemClass, class AActor* Pickup )
{
	static UFunction* pFnHandlePickupQuery = NULL;

	if ( ! pFnHandlePickupQuery )
		pFnHandlePickupQuery = (UFunction*) UObject::GObjObjects()->Data[ 221091 ];

	ATGBioHumanHeroInventoryManager_execHandlePickupQuery_Parms HandlePickupQuery_Parms;
	HandlePickupQuery_Parms.ItemClass = ItemClass;
	HandlePickupQuery_Parms.Pickup = Pickup;

	this->ProcessEvent ( pFnHandlePickupQuery, &HandlePickupQuery_Parms, NULL );

	return HandlePickupQuery_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_HumanHeroDie.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioMessage_HumanHeroDie::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 222042 ];

	UTGBioMessage_HumanHeroDie_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_HumanHeroDie.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioMessage_HumanHeroDie::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 222036 ];

	UTGBioMessage_HumanHeroDie_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioInventory.GivenTo
// [0x00024002] 
// Parameters infos:
// class APawn*                   thisPawn                       ( CPF_Parm )
// unsigned long                  bDoNotActivate                 ( CPF_OptionalParm | CPF_Parm )

void ATGBioInventory::GivenTo ( class APawn* thisPawn, unsigned long bDoNotActivate )
{
	static UFunction* pFnGivenTo = NULL;

	if ( ! pFnGivenTo )
		pFnGivenTo = (UFunction*) UObject::GObjObjects()->Data[ 221284 ];

	ATGBioInventory_execGivenTo_Parms GivenTo_Parms;
	GivenTo_Parms.thisPawn = thisPawn;
	GivenTo_Parms.bDoNotActivate = bDoNotActivate;

	this->ProcessEvent ( pFnGivenTo, &GivenTo_Parms, NULL );
};

// Function TGBioGame.TGBioInventory.AnnouncePickup
// [0x00020002] 
// Parameters infos:
// class APawn*                   Other                          ( CPF_Parm )

void ATGBioInventory::AnnouncePickup ( class APawn* Other )
{
	static UFunction* pFnAnnouncePickup = NULL;

	if ( ! pFnAnnouncePickup )
		pFnAnnouncePickup = (UFunction*) UObject::GObjObjects()->Data[ 221282 ];

	ATGBioInventory_execAnnouncePickup_Parms AnnouncePickup_Parms;
	AnnouncePickup_Parms.Other = Other;

	this->ProcessEvent ( pFnAnnouncePickup, &AnnouncePickup_Parms, NULL );
};

// Function TGBioGame.TGBioInventory.DropFrom
// [0x00020002] 
// Parameters infos:
// struct FVector                 StartLocation                  ( CPF_Parm )
// struct FVector                 StartVelocity                  ( CPF_Parm )

void ATGBioInventory::DropFrom ( struct FVector StartLocation, struct FVector StartVelocity )
{
	static UFunction* pFnDropFrom = NULL;

	if ( ! pFnDropFrom )
		pFnDropFrom = (UFunction*) UObject::GObjObjects()->Data[ 221278 ];

	ATGBioInventory_execDropFrom_Parms DropFrom_Parms;
	memcpy ( &DropFrom_Parms.StartLocation, &StartLocation, 0xC );
	memcpy ( &DropFrom_Parms.StartVelocity, &StartVelocity, 0xC );

	this->ProcessEvent ( pFnDropFrom, &DropFrom_Parms, NULL );
};

// Function TGBioGame.TGBioMessage_InventoryGiveTo.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioMessage_InventoryGiveTo::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 222070 ];

	UTGBioMessage_InventoryGiveTo_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_InventoryGiveTo.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioMessage_InventoryGiveTo::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 222064 ];

	UTGBioMessage_InventoryGiveTo_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_AllAmmo.TimerAllAmmo
// [0x00020002] 
// Parameters infos:

void ATGBioInventory_AllAmmo::TimerAllAmmo ( )
{
	static UFunction* pFnTimerAllAmmo = NULL;

	if ( ! pFnTimerAllAmmo )
		pFnTimerAllAmmo = (UFunction*) UObject::GObjObjects()->Data[ 221299 ];

	ATGBioInventory_AllAmmo_execTimerAllAmmo_Parms TimerAllAmmo_Parms;

	this->ProcessEvent ( pFnTimerAllAmmo, &TimerAllAmmo_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_AllAmmo.BeginAllAmmo
// [0x00020002] 
// Parameters infos:

void ATGBioInventory_AllAmmo::BeginAllAmmo ( )
{
	static UFunction* pFnBeginAllAmmo = NULL;

	if ( ! pFnBeginAllAmmo )
		pFnBeginAllAmmo = (UFunction*) UObject::GObjObjects()->Data[ 221298 ];

	ATGBioInventory_AllAmmo_execBeginAllAmmo_Parms BeginAllAmmo_Parms;

	this->ProcessEvent ( pFnBeginAllAmmo, &BeginAllAmmo_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_AllAmmo.ModifyAllAmmo
// [0x00020002] 
// Parameters infos:
// unsigned long                  bAllAmmo                       ( CPF_Parm )

void ATGBioInventory_AllAmmo::ModifyAllAmmo ( unsigned long bAllAmmo )
{
	static UFunction* pFnModifyAllAmmo = NULL;

	if ( ! pFnModifyAllAmmo )
		pFnModifyAllAmmo = (UFunction*) UObject::GObjObjects()->Data[ 221295 ];

	ATGBioInventory_AllAmmo_execModifyAllAmmo_Parms ModifyAllAmmo_Parms;
	ModifyAllAmmo_Parms.bAllAmmo = bAllAmmo;

	this->ProcessEvent ( pFnModifyAllAmmo, &ModifyAllAmmo_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_AllAmmo.GivenTo
// [0x00024002] 
// Parameters infos:
// class APawn*                   thisPawn                       ( CPF_Parm )
// unsigned long                  bDoNotActivate                 ( CPF_OptionalParm | CPF_Parm )

void ATGBioInventory_AllAmmo::GivenTo ( class APawn* thisPawn, unsigned long bDoNotActivate )
{
	static UFunction* pFnGivenTo = NULL;

	if ( ! pFnGivenTo )
		pFnGivenTo = (UFunction*) UObject::GObjObjects()->Data[ 221292 ];

	ATGBioInventory_AllAmmo_execGivenTo_Parms GivenTo_Parms;
	GivenTo_Parms.thisPawn = thisPawn;
	GivenTo_Parms.bDoNotActivate = bDoNotActivate;

	this->ProcessEvent ( pFnGivenTo, &GivenTo_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_DefenceInfection.ModifyDefence
// [0x00020002] 
// Parameters infos:
// int                            iCount                         ( CPF_Parm )

void ATGBioInventory_DefenceInfection::ModifyDefence ( int iCount )
{
	static UFunction* pFnModifyDefence = NULL;

	if ( ! pFnModifyDefence )
		pFnModifyDefence = (UFunction*) UObject::GObjObjects()->Data[ 221310 ];

	ATGBioInventory_DefenceInfection_execModifyDefence_Parms ModifyDefence_Parms;
	ModifyDefence_Parms.iCount = iCount;

	this->ProcessEvent ( pFnModifyDefence, &ModifyDefence_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_DefenceInfection.TimerResetDefence
// [0x00020002] 
// Parameters infos:

void ATGBioInventory_DefenceInfection::TimerResetDefence ( )
{
	static UFunction* pFnTimerResetDefence = NULL;

	if ( ! pFnTimerResetDefence )
		pFnTimerResetDefence = (UFunction*) UObject::GObjObjects()->Data[ 221309 ];

	ATGBioInventory_DefenceInfection_execTimerResetDefence_Parms TimerResetDefence_Parms;

	this->ProcessEvent ( pFnTimerResetDefence, &TimerResetDefence_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_DefenceInfection.BeginDefence
// [0x00020002] 
// Parameters infos:

void ATGBioInventory_DefenceInfection::BeginDefence ( )
{
	static UFunction* pFnBeginDefence = NULL;

	if ( ! pFnBeginDefence )
		pFnBeginDefence = (UFunction*) UObject::GObjObjects()->Data[ 221308 ];

	ATGBioInventory_DefenceInfection_execBeginDefence_Parms BeginDefence_Parms;

	this->ProcessEvent ( pFnBeginDefence, &BeginDefence_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_DefenceInfection.GivenTo
// [0x00024002] 
// Parameters infos:
// class APawn*                   thisPawn                       ( CPF_Parm )
// unsigned long                  bDoNotActivate                 ( CPF_OptionalParm | CPF_Parm )

void ATGBioInventory_DefenceInfection::GivenTo ( class APawn* thisPawn, unsigned long bDoNotActivate )
{
	static UFunction* pFnGivenTo = NULL;

	if ( ! pFnGivenTo )
		pFnGivenTo = (UFunction*) UObject::GObjObjects()->Data[ 221305 ];

	ATGBioInventory_DefenceInfection_execGivenTo_Parms GivenTo_Parms;
	GivenTo_Parms.thisPawn = thisPawn;
	GivenTo_Parms.bDoNotActivate = bDoNotActivate;

	this->ProcessEvent ( pFnGivenTo, &GivenTo_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_EnemySlomo.ModifyEnemySlomo
// [0x00020002] 
// Parameters infos:
// float                          InEnemySlomoScale              ( CPF_Parm )

void ATGBioInventory_EnemySlomo::ModifyEnemySlomo ( float InEnemySlomoScale )
{
	static UFunction* pFnModifyEnemySlomo = NULL;

	if ( ! pFnModifyEnemySlomo )
		pFnModifyEnemySlomo = (UFunction*) UObject::GObjObjects()->Data[ 221324 ];

	ATGBioInventory_EnemySlomo_execModifyEnemySlomo_Parms ModifyEnemySlomo_Parms;
	ModifyEnemySlomo_Parms.InEnemySlomoScale = InEnemySlomoScale;

	this->ProcessEvent ( pFnModifyEnemySlomo, &ModifyEnemySlomo_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_EnemySlomo.TimerEnemySlomo
// [0x00020002] 
// Parameters infos:

void ATGBioInventory_EnemySlomo::TimerEnemySlomo ( )
{
	static UFunction* pFnTimerEnemySlomo = NULL;

	if ( ! pFnTimerEnemySlomo )
		pFnTimerEnemySlomo = (UFunction*) UObject::GObjObjects()->Data[ 221323 ];

	ATGBioInventory_EnemySlomo_execTimerEnemySlomo_Parms TimerEnemySlomo_Parms;

	this->ProcessEvent ( pFnTimerEnemySlomo, &TimerEnemySlomo_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_EnemySlomo.BeginEnemySlomo
// [0x00020002] 
// Parameters infos:

void ATGBioInventory_EnemySlomo::BeginEnemySlomo ( )
{
	static UFunction* pFnBeginEnemySlomo = NULL;

	if ( ! pFnBeginEnemySlomo )
		pFnBeginEnemySlomo = (UFunction*) UObject::GObjObjects()->Data[ 221322 ];

	ATGBioInventory_EnemySlomo_execBeginEnemySlomo_Parms BeginEnemySlomo_Parms;

	this->ProcessEvent ( pFnBeginEnemySlomo, &BeginEnemySlomo_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_EnemySlomo.GivenTo
// [0x00024002] 
// Parameters infos:
// class APawn*                   thisPawn                       ( CPF_Parm )
// unsigned long                  bDoNotActivate                 ( CPF_OptionalParm | CPF_Parm )

void ATGBioInventory_EnemySlomo::GivenTo ( class APawn* thisPawn, unsigned long bDoNotActivate )
{
	static UFunction* pFnGivenTo = NULL;

	if ( ! pFnGivenTo )
		pFnGivenTo = (UFunction*) UObject::GObjObjects()->Data[ 221319 ];

	ATGBioInventory_EnemySlomo_execGivenTo_Parms GivenTo_Parms;
	GivenTo_Parms.thisPawn = thisPawn;
	GivenTo_Parms.bDoNotActivate = bDoNotActivate;

	this->ProcessEvent ( pFnGivenTo, &GivenTo_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_FastMove.ModifyFastMove
// [0x00020002] 
// Parameters infos:
// float                          InFastMoveScale                ( CPF_Parm )

void ATGBioInventory_FastMove::ModifyFastMove ( float InFastMoveScale )
{
	static UFunction* pFnModifyFastMove = NULL;

	if ( ! pFnModifyFastMove )
		pFnModifyFastMove = (UFunction*) UObject::GObjObjects()->Data[ 221338 ];

	ATGBioInventory_FastMove_execModifyFastMove_Parms ModifyFastMove_Parms;
	ModifyFastMove_Parms.InFastMoveScale = InFastMoveScale;

	this->ProcessEvent ( pFnModifyFastMove, &ModifyFastMove_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_FastMove.TimerFastMove
// [0x00020002] 
// Parameters infos:

void ATGBioInventory_FastMove::TimerFastMove ( )
{
	static UFunction* pFnTimerFastMove = NULL;

	if ( ! pFnTimerFastMove )
		pFnTimerFastMove = (UFunction*) UObject::GObjObjects()->Data[ 221337 ];

	ATGBioInventory_FastMove_execTimerFastMove_Parms TimerFastMove_Parms;

	this->ProcessEvent ( pFnTimerFastMove, &TimerFastMove_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_FastMove.BeginFastMove
// [0x00020002] 
// Parameters infos:

void ATGBioInventory_FastMove::BeginFastMove ( )
{
	static UFunction* pFnBeginFastMove = NULL;

	if ( ! pFnBeginFastMove )
		pFnBeginFastMove = (UFunction*) UObject::GObjObjects()->Data[ 221336 ];

	ATGBioInventory_FastMove_execBeginFastMove_Parms BeginFastMove_Parms;

	this->ProcessEvent ( pFnBeginFastMove, &BeginFastMove_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_FastMove.GivenTo
// [0x00024002] 
// Parameters infos:
// class APawn*                   thisPawn                       ( CPF_Parm )
// unsigned long                  bDoNotActivate                 ( CPF_OptionalParm | CPF_Parm )

void ATGBioInventory_FastMove::GivenTo ( class APawn* thisPawn, unsigned long bDoNotActivate )
{
	static UFunction* pFnGivenTo = NULL;

	if ( ! pFnGivenTo )
		pFnGivenTo = (UFunction*) UObject::GObjObjects()->Data[ 221333 ];

	ATGBioInventory_FastMove_execGivenTo_Parms GivenTo_Parms;
	GivenTo_Parms.thisPawn = thisPawn;
	GivenTo_Parms.bDoNotActivate = bDoNotActivate;

	this->ProcessEvent ( pFnGivenTo, &GivenTo_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_FastShoot.ModifyFastShoot
// [0x00020002] 
// Parameters infos:
// float                          InFastShootScale               ( CPF_Parm )

void ATGBioInventory_FastShoot::ModifyFastShoot ( float InFastShootScale )
{
	static UFunction* pFnModifyFastShoot = NULL;

	if ( ! pFnModifyFastShoot )
		pFnModifyFastShoot = (UFunction*) UObject::GObjObjects()->Data[ 221352 ];

	ATGBioInventory_FastShoot_execModifyFastShoot_Parms ModifyFastShoot_Parms;
	ModifyFastShoot_Parms.InFastShootScale = InFastShootScale;

	this->ProcessEvent ( pFnModifyFastShoot, &ModifyFastShoot_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_FastShoot.TimerFastShoot
// [0x00020002] 
// Parameters infos:

void ATGBioInventory_FastShoot::TimerFastShoot ( )
{
	static UFunction* pFnTimerFastShoot = NULL;

	if ( ! pFnTimerFastShoot )
		pFnTimerFastShoot = (UFunction*) UObject::GObjObjects()->Data[ 221351 ];

	ATGBioInventory_FastShoot_execTimerFastShoot_Parms TimerFastShoot_Parms;

	this->ProcessEvent ( pFnTimerFastShoot, &TimerFastShoot_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_FastShoot.BeginFastShoot
// [0x00020002] 
// Parameters infos:

void ATGBioInventory_FastShoot::BeginFastShoot ( )
{
	static UFunction* pFnBeginFastShoot = NULL;

	if ( ! pFnBeginFastShoot )
		pFnBeginFastShoot = (UFunction*) UObject::GObjObjects()->Data[ 221350 ];

	ATGBioInventory_FastShoot_execBeginFastShoot_Parms BeginFastShoot_Parms;

	this->ProcessEvent ( pFnBeginFastShoot, &BeginFastShoot_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_FastShoot.GivenTo
// [0x00024002] 
// Parameters infos:
// class APawn*                   thisPawn                       ( CPF_Parm )
// unsigned long                  bDoNotActivate                 ( CPF_OptionalParm | CPF_Parm )

void ATGBioInventory_FastShoot::GivenTo ( class APawn* thisPawn, unsigned long bDoNotActivate )
{
	static UFunction* pFnGivenTo = NULL;

	if ( ! pFnGivenTo )
		pFnGivenTo = (UFunction*) UObject::GObjObjects()->Data[ 221347 ];

	ATGBioInventory_FastShoot_execGivenTo_Parms GivenTo_Parms;
	GivenTo_Parms.thisPawn = thisPawn;
	GivenTo_Parms.bDoNotActivate = bDoNotActivate;

	this->ProcessEvent ( pFnGivenTo, &GivenTo_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_FullAmmo.BeginFullAmmo
// [0x00020002] 
// Parameters infos:

void ATGBioInventory_FullAmmo::BeginFullAmmo ( )
{
	static UFunction* pFnBeginFullAmmo = NULL;

	if ( ! pFnBeginFullAmmo )
		pFnBeginFullAmmo = (UFunction*) UObject::GObjObjects()->Data[ 221362 ];

	ATGBioInventory_FullAmmo_execBeginFullAmmo_Parms BeginFullAmmo_Parms;

	this->ProcessEvent ( pFnBeginFullAmmo, &BeginFullAmmo_Parms, NULL );
};

// Function TGBioGame.TGBioInventory_FullAmmo.GivenTo
// [0x00024002] 
// Parameters infos:
// class APawn*                   thisPawn                       ( CPF_Parm )
// unsigned long                  bDoNotActivate                 ( CPF_OptionalParm | CPF_Parm )

void ATGBioInventory_FullAmmo::GivenTo ( class APawn* thisPawn, unsigned long bDoNotActivate )
{
	static UFunction* pFnGivenTo = NULL;

	if ( ! pFnGivenTo )
		pFnGivenTo = (UFunction*) UObject::GObjObjects()->Data[ 221359 ];

	ATGBioInventory_FullAmmo_execGivenTo_Parms GivenTo_Parms;
	GivenTo_Parms.thisPawn = thisPawn;
	GivenTo_Parms.bDoNotActivate = bDoNotActivate;

	this->ProcessEvent ( pFnGivenTo, &GivenTo_Parms, NULL );
};

// Function TGBioGame.TGBioInvisibleZombie.PlayDying
// [0x00024102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLoc                         ( CPF_Parm )
// unsigned char                  DeathDir                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_OptionalParm | CPF_Parm )

void ATGBioInvisibleZombie::PlayDying ( class UClass* DamageType, struct FVector HitLoc, unsigned char DeathDir, unsigned char HitGroup )
{
	static UFunction* pFnPlayDying = NULL;

	if ( ! pFnPlayDying )
		pFnPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 221394 ];

	ATGBioInvisibleZombie_execPlayDying_Parms PlayDying_Parms;
	PlayDying_Parms.DamageType = DamageType;
	memcpy ( &PlayDying_Parms.HitLoc, &HitLoc, 0xC );
	PlayDying_Parms.DeathDir = DeathDir;
	PlayDying_Parms.HitGroup = HitGroup;

	this->ProcessEvent ( pFnPlayDying, &PlayDying_Parms, NULL );
};

// Function TGBioGame.TGBioInvisibleZombie.Invisible
// [0x00020102] 
// Parameters infos:
// unsigned long                  bInvisible                     ( CPF_Parm )

void ATGBioInvisibleZombie::Invisible ( unsigned long bInvisible )
{
	static UFunction* pFnInvisible = NULL;

	if ( ! pFnInvisible )
		pFnInvisible = (UFunction*) UObject::GObjObjects()->Data[ 221391 ];

	ATGBioInvisibleZombie_execInvisible_Parms Invisible_Parms;
	Invisible_Parms.bInvisible = bInvisible;

	this->ProcessEvent ( pFnInvisible, &Invisible_Parms, NULL );
};

// Function TGBioGame.TGBioInvisibleZombie.Visibling
// [0x00020102] 
// Parameters infos:

void ATGBioInvisibleZombie::Visibling ( )
{
	static UFunction* pFnVisibling = NULL;

	if ( ! pFnVisibling )
		pFnVisibling = (UFunction*) UObject::GObjObjects()->Data[ 221390 ];

	ATGBioInvisibleZombie_execVisibling_Parms Visibling_Parms;

	this->ProcessEvent ( pFnVisibling, &Visibling_Parms, NULL );
};

// Function TGBioGame.TGBioInvisibleZombie.Invisibling
// [0x00020102] 
// Parameters infos:

void ATGBioInvisibleZombie::Invisibling ( )
{
	static UFunction* pFnInvisibling = NULL;

	if ( ! pFnInvisibling )
		pFnInvisibling = (UFunction*) UObject::GObjObjects()->Data[ 221386 ];

	ATGBioInvisibleZombie_execInvisibling_Parms Invisibling_Parms;

	this->ProcessEvent ( pFnInvisibling, &Invisibling_Parms, NULL );
};

// Function TGBioGame.TGBioInvisibleZombie.NotifyPendingBioCharInfo
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UBioCharInfo*            PendingCharInfo                ( CPF_Parm )

bool ATGBioInvisibleZombie::NotifyPendingBioCharInfo ( class UBioCharInfo* PendingCharInfo )
{
	static UFunction* pFnNotifyPendingBioCharInfo = NULL;

	if ( ! pFnNotifyPendingBioCharInfo )
		pFnNotifyPendingBioCharInfo = (UFunction*) UObject::GObjObjects()->Data[ 221382 ];

	ATGBioInvisibleZombie_execNotifyPendingBioCharInfo_Parms NotifyPendingBioCharInfo_Parms;
	NotifyPendingBioCharInfo_Parms.PendingCharInfo = PendingCharInfo;

	this->ProcessEvent ( pFnNotifyPendingBioCharInfo, &NotifyPendingBioCharInfo_Parms, NULL );

	return NotifyPendingBioCharInfo_Parms.ReturnValue;
};

// Function TGBioGame.TGBioInvisibleZombie.RsetInvisibleZombieSpeedScale
// [0x00020002] 
// Parameters infos:

void ATGBioInvisibleZombie::RsetInvisibleZombieSpeedScale ( )
{
	static UFunction* pFnRsetInvisibleZombieSpeedScale = NULL;

	if ( ! pFnRsetInvisibleZombieSpeedScale )
		pFnRsetInvisibleZombieSpeedScale = (UFunction*) UObject::GObjObjects()->Data[ 221381 ];

	ATGBioInvisibleZombie_execRsetInvisibleZombieSpeedScale_Parms RsetInvisibleZombieSpeedScale_Parms;

	this->ProcessEvent ( pFnRsetInvisibleZombieSpeedScale, &RsetInvisibleZombieSpeedScale_Parms, NULL );
};

// Function TGBioGame.TGBioInvisibleZombie.SetInvisibleZombieSpeedScale
// [0x00020002] 
// Parameters infos:
// float                          SpeedScale                     ( CPF_Parm )

void ATGBioInvisibleZombie::SetInvisibleZombieSpeedScale ( float SpeedScale )
{
	static UFunction* pFnSetInvisibleZombieSpeedScale = NULL;

	if ( ! pFnSetInvisibleZombieSpeedScale )
		pFnSetInvisibleZombieSpeedScale = (UFunction*) UObject::GObjObjects()->Data[ 221379 ];

	ATGBioInvisibleZombie_execSetInvisibleZombieSpeedScale_Parms SetInvisibleZombieSpeedScale_Parms;
	SetInvisibleZombieSpeedScale_Parms.SpeedScale = SpeedScale;

	this->ProcessEvent ( pFnSetInvisibleZombieSpeedScale, &SetInvisibleZombieSpeedScale_Parms, NULL );
};

// Function TGBioGame.TGBioInvisibleZombie.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGBioInvisibleZombie::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 221377 ];

	ATGBioInvisibleZombie_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGBioGame.TGBioSkill_Invisible.CheckAllowUseSkill
// [0x00020002] 
// Parameters infos:

void ATGBioSkill_Invisible::CheckAllowUseSkill ( )
{
	static UFunction* pFnCheckAllowUseSkill = NULL;

	if ( ! pFnCheckAllowUseSkill )
		pFnCheckAllowUseSkill = (UFunction*) UObject::GObjObjects()->Data[ 223258 ];

	ATGBioSkill_Invisible_execCheckAllowUseSkill_Parms CheckAllowUseSkill_Parms;

	this->ProcessEvent ( pFnCheckAllowUseSkill, &CheckAllowUseSkill_Parms, NULL );
};

// Function TGBioGame.TGBioSkill_Invisible.UnexpectedStopSkillValue
// [0x00020102] 
// Parameters infos:

void ATGBioSkill_Invisible::UnexpectedStopSkillValue ( )
{
	static UFunction* pFnUnexpectedStopSkillValue = NULL;

	if ( ! pFnUnexpectedStopSkillValue )
		pFnUnexpectedStopSkillValue = (UFunction*) UObject::GObjObjects()->Data[ 223257 ];

	ATGBioSkill_Invisible_execUnexpectedStopSkillValue_Parms UnexpectedStopSkillValue_Parms;

	this->ProcessEvent ( pFnUnexpectedStopSkillValue, &UnexpectedStopSkillValue_Parms, NULL );
};

// Function TGBioGame.TGBioSkill_Invisible.PostBeginInitialize
// [0x00020002] 
// Parameters infos:

void ATGBioSkill_Invisible::PostBeginInitialize ( )
{
	static UFunction* pFnPostBeginInitialize = NULL;

	if ( ! pFnPostBeginInitialize )
		pFnPostBeginInitialize = (UFunction*) UObject::GObjObjects()->Data[ 223247 ];

	ATGBioSkill_Invisible_execPostBeginInitialize_Parms PostBeginInitialize_Parms;

	this->ProcessEvent ( pFnPostBeginInitialize, &PostBeginInitialize_Parms, NULL );
};

// Function TGBioGame.TGBioSkill_Invisible.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGBioSkill_Invisible::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 223245 ];

	ATGBioSkill_Invisible_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGBioGame.TGBioJerricanExplosionActor.SpawnExplosionParticleSystem
// [0x00020102] 
// Parameters infos:
// class UParticleSystem*         Template                       ( CPF_Parm )

void ATGBioJerricanExplosionActor::SpawnExplosionParticleSystem ( class UParticleSystem* Template )
{
	static UFunction* pFnSpawnExplosionParticleSystem = NULL;

	if ( ! pFnSpawnExplosionParticleSystem )
		pFnSpawnExplosionParticleSystem = (UFunction*) UObject::GObjObjects()->Data[ 221500 ];

	ATGBioJerricanExplosionActor_execSpawnExplosionParticleSystem_Parms SpawnExplosionParticleSystem_Parms;
	SpawnExplosionParticleSystem_Parms.Template = Template;

	this->ProcessEvent ( pFnSpawnExplosionParticleSystem, &SpawnExplosionParticleSystem_Parms, NULL );
};

// Function TGBioGame.TGBioItem_Switch.SetSwitch
// [0x00020102] 
// Parameters infos:
// unsigned long                  SwitchState                    ( CPF_Parm )

void ATGBioItem_Switch::SetSwitch ( unsigned long SwitchState )
{
	static UFunction* pFnSetSwitch = NULL;

	if ( ! pFnSetSwitch )
		pFnSetSwitch = (UFunction*) UObject::GObjObjects()->Data[ 221459 ];

	ATGBioItem_Switch_execSetSwitch_Parms SetSwitch_Parms;
	SetSwitch_Parms.SwitchState = SwitchState;

	this->ProcessEvent ( pFnSetSwitch, &SetSwitch_Parms, NULL );
};

// Function TGBioGame.TGBioItem_Switch.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void ATGBioItem_Switch::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 221458 ];

	ATGBioItem_Switch_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioItem_Switch.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGBioItem_Switch::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 221456 ];

	ATGBioItem_Switch_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGBioGame.TGBioMapInfo.DrawBigRadar
// [0x00820102] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// class AUTPlayerController*     PlayerOwner                    ( CPF_Parm )
// float                          XPos                           ( CPF_Parm )
// float                          YPos                           ( CPF_Parm )
// float                          Width                          ( CPF_Parm )
// float                          Height                         ( CPF_Parm )
// unsigned long                  bFullDetail                    ( CPF_Parm )
// float                          AspectRatio                    ( CPF_Parm )

void UTGBioMapInfo::DrawBigRadar ( class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float XPos, float YPos, float Width, float Height, unsigned long bFullDetail, float AspectRatio )
{
	static UFunction* pFnDrawBigRadar = NULL;

	if ( ! pFnDrawBigRadar )
		pFnDrawBigRadar = (UFunction*) UObject::GObjObjects()->Data[ 221544 ];

	UTGBioMapInfo_execDrawBigRadar_Parms DrawBigRadar_Parms;
	DrawBigRadar_Parms.Canvas = Canvas;
	DrawBigRadar_Parms.PlayerOwner = PlayerOwner;
	DrawBigRadar_Parms.XPos = XPos;
	DrawBigRadar_Parms.YPos = YPos;
	DrawBigRadar_Parms.Width = Width;
	DrawBigRadar_Parms.Height = Height;
	DrawBigRadar_Parms.bFullDetail = bFullDetail;
	DrawBigRadar_Parms.AspectRatio = AspectRatio;

	this->ProcessEvent ( pFnDrawBigRadar, &DrawBigRadar_Parms, NULL );
};

// Function TGBioGame.TGBioMapInfo.GetWeaponSizeScale
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGBioWeaponPickupFactory* WP                             ( CPF_Parm )

float UTGBioMapInfo::GetWeaponSizeScale ( class ATGBioWeaponPickupFactory* WP )
{
	static UFunction* pFnGetWeaponSizeScale = NULL;

	if ( ! pFnGetWeaponSizeScale )
		pFnGetWeaponSizeScale = (UFunction*) UObject::GObjObjects()->Data[ 221540 ];

	UTGBioMapInfo_execGetWeaponSizeScale_Parms GetWeaponSizeScale_Parms;
	GetWeaponSizeScale_Parms.WP = WP;

	this->ProcessEvent ( pFnGetWeaponSizeScale, &GetWeaponSizeScale_Parms, NULL );

	return GetWeaponSizeScale_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMapInfo.GetRandomWeaponSizeScale
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGBioRandomWeaponPickupFactory* RWP                            ( CPF_Parm )

float UTGBioMapInfo::GetRandomWeaponSizeScale ( class ATGBioRandomWeaponPickupFactory* RWP )
{
	static UFunction* pFnGetRandomWeaponSizeScale = NULL;

	if ( ! pFnGetRandomWeaponSizeScale )
		pFnGetRandomWeaponSizeScale = (UFunction*) UObject::GObjObjects()->Data[ 221535 ];

	UTGBioMapInfo_execGetRandomWeaponSizeScale_Parms GetRandomWeaponSizeScale_Parms;
	GetRandomWeaponSizeScale_Parms.RWP = RWP;

	this->ProcessEvent ( pFnGetRandomWeaponSizeScale, &GetRandomWeaponSizeScale_Parms, NULL );

	return GetRandomWeaponSizeScale_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMapInfo.DrawMap
// [0x00820102] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// class AUTPlayerController*     PlayerOwner                    ( CPF_Parm )
// float                          XPos                           ( CPF_Parm )
// float                          YPos                           ( CPF_Parm )
// float                          Width                          ( CPF_Parm )
// float                          Height                         ( CPF_Parm )
// unsigned long                  bFullDetail                    ( CPF_Parm )
// float                          AspectRatio                    ( CPF_Parm )
// float                          BkgImgAlpha                    ( CPF_Parm )

void UTGBioMapInfo::DrawMap ( class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float XPos, float YPos, float Width, float Height, unsigned long bFullDetail, float AspectRatio, float BkgImgAlpha )
{
	static UFunction* pFnDrawMap = NULL;

	if ( ! pFnDrawMap )
		pFnDrawMap = (UFunction*) UObject::GObjObjects()->Data[ 221509 ];

	UTGBioMapInfo_execDrawMap_Parms DrawMap_Parms;
	DrawMap_Parms.Canvas = Canvas;
	DrawMap_Parms.PlayerOwner = PlayerOwner;
	DrawMap_Parms.XPos = XPos;
	DrawMap_Parms.YPos = YPos;
	DrawMap_Parms.Width = Width;
	DrawMap_Parms.Height = Height;
	DrawMap_Parms.bFullDetail = bFullDetail;
	DrawMap_Parms.AspectRatio = AspectRatio;
	DrawMap_Parms.BkgImgAlpha = BkgImgAlpha;

	this->ProcessEvent ( pFnDrawMap, &DrawMap_Parms, NULL );
};

// Function TGBioGame.TGBioRestoreManager.DeleteRestore
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerController*       InController                   ( CPF_Parm )

bool ATGBioRestoreManager::DeleteRestore ( class APlayerController* InController )
{
	static UFunction* pFnDeleteRestore = NULL;

	if ( ! pFnDeleteRestore )
		pFnDeleteRestore = (UFunction*) UObject::GObjObjects()->Data[ 221601 ];

	ATGBioRestoreManager_execDeleteRestore_Parms DeleteRestore_Parms;
	DeleteRestore_Parms.InController = InController;

	this->ProcessEvent ( pFnDeleteRestore, &DeleteRestore_Parms, NULL );

	return DeleteRestore_Parms.ReturnValue;
};

// Function TGBioGame.TGBioRestoreManager.GetRestore
// [0x00020102] 
// Parameters infos:
// class ATGBioRestore*           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerController*       InController                   ( CPF_Parm )

class ATGBioRestore* ATGBioRestoreManager::GetRestore ( class APlayerController* InController )
{
	static UFunction* pFnGetRestore = NULL;

	if ( ! pFnGetRestore )
		pFnGetRestore = (UFunction*) UObject::GObjObjects()->Data[ 223041 ];

	ATGBioRestoreManager_execGetRestore_Parms GetRestore_Parms;
	GetRestore_Parms.InController = InController;

	this->ProcessEvent ( pFnGetRestore, &GetRestore_Parms, NULL );

	return GetRestore_Parms.ReturnValue;
};

// Function TGBioGame.TGBioRestoreManager.AddRestore
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerController*       InController                   ( CPF_Parm )

bool ATGBioRestoreManager::AddRestore ( class APlayerController* InController )
{
	static UFunction* pFnAddRestore = NULL;

	if ( ! pFnAddRestore )
		pFnAddRestore = (UFunction*) UObject::GObjObjects()->Data[ 221793 ];

	ATGBioRestoreManager_execAddRestore_Parms AddRestore_Parms;
	AddRestore_Parms.InController = InController;

	this->ProcessEvent ( pFnAddRestore, &AddRestore_Parms, NULL );

	return AddRestore_Parms.ReturnValue;
};

// Function TGBioGame.TGBioRestoreManager.CreateRestores
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioRestoreManager::CreateRestores ( )
{
	static UFunction* pFnCreateRestores = NULL;

	if ( ! pFnCreateRestores )
		pFnCreateRestores = (UFunction*) UObject::GObjObjects()->Data[ 223033 ];

	ATGBioRestoreManager_execCreateRestores_Parms CreateRestores_Parms;

	this->ProcessEvent ( pFnCreateRestores, &CreateRestores_Parms, NULL );

	return CreateRestores_Parms.ReturnValue;
};

// Function TGBioGame.TGBioRestoreManager.InitializeRestoreMsg
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGGameReplicationInfo*  InTGR                          ( CPF_Parm )

bool ATGBioRestoreManager::InitializeRestoreMsg ( class ATGGameReplicationInfo* InTGR )
{
	static UFunction* pFnInitializeRestoreMsg = NULL;

	if ( ! pFnInitializeRestoreMsg )
		pFnInitializeRestoreMsg = (UFunction*) UObject::GObjObjects()->Data[ 221592 ];

	ATGBioRestoreManager_execInitializeRestoreMsg_Parms InitializeRestoreMsg_Parms;
	InitializeRestoreMsg_Parms.InTGR = InTGR;

	this->ProcessEvent ( pFnInitializeRestoreMsg, &InitializeRestoreMsg_Parms, NULL );

	return InitializeRestoreMsg_Parms.ReturnValue;
};

// Function TGBioGame.TGBioRestoreManager.DiscardRestore
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATGBioRestoreManager::eventDiscardRestore ( )
{
	static UFunction* pFnDiscardRestore = NULL;

	if ( ! pFnDiscardRestore )
		pFnDiscardRestore = (UFunction*) UObject::GObjObjects()->Data[ 223029 ];

	ATGBioRestoreManager_eventDiscardRestore_Parms DiscardRestore_Parms;

	this->ProcessEvent ( pFnDiscardRestore, &DiscardRestore_Parms, NULL );
};

// Function TGBioGame.TGBioRestoreManager.Add2Restores
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGBioRestore*           NewItem                        ( CPF_Parm )

bool ATGBioRestoreManager::Add2Restores ( class ATGBioRestore* NewItem )
{
	static UFunction* pFnAdd2Restores = NULL;

	if ( ! pFnAdd2Restores )
		pFnAdd2Restores = (UFunction*) UObject::GObjObjects()->Data[ 223024 ];

	ATGBioRestoreManager_execAdd2Restores_Parms Add2Restores_Parms;
	Add2Restores_Parms.NewItem = NewItem;

	this->ProcessEvent ( pFnAdd2Restores, &Add2Restores_Parms, NULL );

	return Add2Restores_Parms.ReturnValue;
};

// Function TGBioGame.TGBioRestoreManager.RsetRestoreManager
// [0x00020002] 
// Parameters infos:

void ATGBioRestoreManager::RsetRestoreManager ( )
{
	static UFunction* pFnRsetRestoreManager = NULL;

	if ( ! pFnRsetRestoreManager )
		pFnRsetRestoreManager = (UFunction*) UObject::GObjObjects()->Data[ 223023 ];

	ATGBioRestoreManager_execRsetRestoreManager_Parms RsetRestoreManager_Parms;

	this->ProcessEvent ( pFnRsetRestoreManager, &RsetRestoreManager_Parms, NULL );
};

// Function TGBioGame.TGBioRestoreManager.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATGBioRestoreManager::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 223022 ];

	ATGBioRestoreManager_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGBioGame.TGBioRestoreManager.Tick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGBioRestoreManager::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 223019 ];

	ATGBioRestoreManager_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGBioGame.TGBioMessage_TerminatorByKill.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioMessage_TerminatorByKill::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 222179 ];

	UTGBioMessage_TerminatorByKill_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_TerminatorByKill.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioMessage_TerminatorByKill::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 222173 ];

	UTGBioMessage_TerminatorByKill_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioMessage_ZombieRevive.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioMessage_ZombieRevive::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 222237 ];

	UTGBioMessage_ZombieRevive_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_ZombieRevive.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioMessage_ZombieRevive::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 222231 ];

	UTGBioMessage_ZombieRevive_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioMessage_Terminator.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioMessage_Terminator::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 222165 ];

	UTGBioMessage_Terminator_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_Terminator.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioMessage_Terminator::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 222159 ];

	UTGBioMessage_Terminator_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioMessage_AddHumanAttack.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioMessage_AddHumanAttack::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 221985 ];

	UTGBioMessage_AddHumanAttack_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_AddHumanAttack.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioMessage_AddHumanAttack::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 221979 ];

	UTGBioMessage_AddHumanAttack_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioMatchInfoMessage.GetPos
// [0x00022002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Switch                         ( CPF_Parm )
// class AHUD*                    myHUD                          ( CPF_Parm )

float UTGBioMatchInfoMessage::GetPos ( int Switch, class AHUD* myHUD )
{
	static UFunction* pFnGetPos = NULL;

	if ( ! pFnGetPos )
		pFnGetPos = (UFunction*) UObject::GObjObjects()->Data[ 221974 ];

	UTGBioMatchInfoMessage_execGetPos_Parms GetPos_Parms;
	GetPos_Parms.Switch = Switch;
	GetPos_Parms.myHUD = myHUD;

	this->ProcessEvent ( pFnGetPos, &GetPos_Parms, NULL );

	return GetPos_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMatchInfoMessage.GetFontSize
// [0x00022002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Switch                         ( CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI1                    ( CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI2                    ( CPF_Parm )
// class APlayerReplicationInfo*  LocalPlayer                    ( CPF_Parm )

int UTGBioMatchInfoMessage::GetFontSize ( int Switch, class APlayerReplicationInfo* RelatedPRI1, class APlayerReplicationInfo* RelatedPRI2, class APlayerReplicationInfo* LocalPlayer )
{
	static UFunction* pFnGetFontSize = NULL;

	if ( ! pFnGetFontSize )
		pFnGetFontSize = (UFunction*) UObject::GObjObjects()->Data[ 221968 ];

	UTGBioMatchInfoMessage_execGetFontSize_Parms GetFontSize_Parms;
	GetFontSize_Parms.Switch = Switch;
	GetFontSize_Parms.RelatedPRI1 = RelatedPRI1;
	GetFontSize_Parms.RelatedPRI2 = RelatedPRI2;
	GetFontSize_Parms.LocalPlayer = LocalPlayer;

	this->ProcessEvent ( pFnGetFontSize, &GetFontSize_Parms, NULL );

	return GetFontSize_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMatchInfoMessage.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioMatchInfoMessage::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 221961 ];

	UTGBioMatchInfoMessage_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_GiveFail.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioMessage_GiveFail::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 222028 ];

	UTGBioMessage_GiveFail_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_GiveFail.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioMessage_GiveFail::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 222022 ];

	UTGBioMessage_GiveFail_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioMessage_RandomPickup.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioMessage_RandomPickup::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 222113 ];

	UTGBioMessage_RandomPickup_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_RandomPickup.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioMessage_RandomPickup::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 222107 ];

	UTGBioMessage_RandomPickup_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioMessage_RestoreHPNotify.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioMessage_RestoreHPNotify::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 222122 ];

	UTGBioMessage_RestoreHPNotify_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioMessage_RoundStartTimer.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioMessage_RoundStartTimer::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 222136 ];

	UTGBioMessage_RoundStartTimer_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_RoundStartTimer.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioMessage_RoundStartTimer::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 222130 ];

	UTGBioMessage_RoundStartTimer_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioMessage_SkillTrampleCasualiesFeedback.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioMessage_SkillTrampleCasualiesFeedback::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 222151 ];

	UTGBioMessage_SkillTrampleCasualiesFeedback_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_SkillTrampleCasualiesFeedback.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioMessage_SkillTrampleCasualiesFeedback::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 222145 ];

	UTGBioMessage_SkillTrampleCasualiesFeedback_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioMessage_UseSkill.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioMessage_UseSkill::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 222194 ];

	UTGBioMessage_UseSkill_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_UseSkill.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioMessage_UseSkill::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 222188 ];

	UTGBioMessage_UseSkill_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioMessage_UseSkillFeedback.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioMessage_UseSkillFeedback::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 222209 ];

	UTGBioMessage_UseSkillFeedback_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_UseSkillFeedback.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioMessage_UseSkillFeedback::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 222203 ];

	UTGBioMessage_UseSkillFeedback_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioMessage_ZombieSelectSucceed.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioMessage_ZombieSelectSucceed::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 222252 ];

	UTGBioMessage_ZombieSelectSucceed_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioMessage_ZombieSelectSucceed.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioMessage_ZombieSelectSucceed::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 222246 ];

	UTGBioMessage_ZombieSelectSucceed_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioSkillManager.UnNudgeSkills
// [0x00020102] 
// Parameters infos:

void ATGBioSkillManager::UnNudgeSkills ( )
{
	static UFunction* pFnUnNudgeSkills = NULL;

	if ( ! pFnUnNudgeSkills )
		pFnUnNudgeSkills = (UFunction*) UObject::GObjObjects()->Data[ 223477 ];

	ATGBioSkillManager_execUnNudgeSkills_Parms UnNudgeSkills_Parms;

	this->ProcessEvent ( pFnUnNudgeSkills, &UnNudgeSkills_Parms, NULL );
};

// Function TGBioGame.TGBioSkillManager.GetUnInitiativeSkillIndex
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGBioSkillBase*         Skill                          ( CPF_Parm )

int ATGBioSkillManager::GetUnInitiativeSkillIndex ( class ATGBioSkillBase* Skill )
{
	static UFunction* pFnGetUnInitiativeSkillIndex = NULL;

	if ( ! pFnGetUnInitiativeSkillIndex )
		pFnGetUnInitiativeSkillIndex = (UFunction*) UObject::GObjObjects()->Data[ 223470 ];

	ATGBioSkillManager_execGetUnInitiativeSkillIndex_Parms GetUnInitiativeSkillIndex_Parms;
	GetUnInitiativeSkillIndex_Parms.Skill = Skill;

	this->ProcessEvent ( pFnGetUnInitiativeSkillIndex, &GetUnInitiativeSkillIndex_Parms, NULL );

	return GetUnInitiativeSkillIndex_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillManager.GetInitiativeSkillIndex
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGBioSkillBase*         Skill                          ( CPF_Parm )

int ATGBioSkillManager::GetInitiativeSkillIndex ( class ATGBioSkillBase* Skill )
{
	static UFunction* pFnGetInitiativeSkillIndex = NULL;

	if ( ! pFnGetInitiativeSkillIndex )
		pFnGetInitiativeSkillIndex = (UFunction*) UObject::GObjObjects()->Data[ 223465 ];

	ATGBioSkillManager_execGetInitiativeSkillIndex_Parms GetInitiativeSkillIndex_Parms;
	GetInitiativeSkillIndex_Parms.Skill = Skill;

	this->ProcessEvent ( pFnGetInitiativeSkillIndex, &GetInitiativeSkillIndex_Parms, NULL );

	return GetInitiativeSkillIndex_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillManager.GetSkillIndex
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGBioSkillBase*         Skill                          ( CPF_Parm )

int ATGBioSkillManager::GetSkillIndex ( class ATGBioSkillBase* Skill )
{
	static UFunction* pFnGetSkillIndex = NULL;

	if ( ! pFnGetSkillIndex )
		pFnGetSkillIndex = (UFunction*) UObject::GObjObjects()->Data[ 223460 ];

	ATGBioSkillManager_execGetSkillIndex_Parms GetSkillIndex_Parms;
	GetSkillIndex_Parms.Skill = Skill;

	this->ProcessEvent ( pFnGetSkillIndex, &GetSkillIndex_Parms, NULL );

	return GetSkillIndex_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillManager.GetInitiativeSkillByIndex
// [0x00020102] 
// Parameters infos:
// class ATGBioSkillBase*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

class ATGBioSkillBase* ATGBioSkillManager::GetInitiativeSkillByIndex ( int Index )
{
	static UFunction* pFnGetInitiativeSkillByIndex = NULL;

	if ( ! pFnGetInitiativeSkillByIndex )
		pFnGetInitiativeSkillByIndex = (UFunction*) UObject::GObjObjects()->Data[ 223456 ];

	ATGBioSkillManager_execGetInitiativeSkillByIndex_Parms GetInitiativeSkillByIndex_Parms;
	GetInitiativeSkillByIndex_Parms.Index = Index;

	this->ProcessEvent ( pFnGetInitiativeSkillByIndex, &GetInitiativeSkillByIndex_Parms, NULL );

	return GetInitiativeSkillByIndex_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillManager.GetInitiativeSkill
// [0x00020102] 
// Parameters infos:
// class ATGBioSkillBase*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ZombieType                     ( CPF_Parm )

class ATGBioSkillBase* ATGBioSkillManager::GetInitiativeSkill ( unsigned char ZombieType )
{
	static UFunction* pFnGetInitiativeSkill = NULL;

	if ( ! pFnGetInitiativeSkill )
		pFnGetInitiativeSkill = (UFunction*) UObject::GObjObjects()->Data[ 223452 ];

	ATGBioSkillManager_execGetInitiativeSkill_Parms GetInitiativeSkill_Parms;
	GetInitiativeSkill_Parms.ZombieType = ZombieType;

	this->ProcessEvent ( pFnGetInitiativeSkill, &GetInitiativeSkill_Parms, NULL );

	return GetInitiativeSkill_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillManager.GetSkillByIndex
// [0x00020102] 
// Parameters infos:
// class ATGBioSkillBase*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

class ATGBioSkillBase* ATGBioSkillManager::GetSkillByIndex ( int Index )
{
	static UFunction* pFnGetSkillByIndex = NULL;

	if ( ! pFnGetSkillByIndex )
		pFnGetSkillByIndex = (UFunction*) UObject::GObjObjects()->Data[ 223448 ];

	ATGBioSkillManager_execGetSkillByIndex_Parms GetSkillByIndex_Parms;
	GetSkillByIndex_Parms.Index = Index;

	this->ProcessEvent ( pFnGetSkillByIndex, &GetSkillByIndex_Parms, NULL );

	return GetSkillByIndex_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillManager.GetSkill
// [0x00020102] 
// Parameters infos:
// class ATGBioSkillBase*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ZombieType                     ( CPF_Parm )

class ATGBioSkillBase* ATGBioSkillManager::GetSkill ( unsigned char ZombieType )
{
	static UFunction* pFnGetSkill = NULL;

	if ( ! pFnGetSkill )
		pFnGetSkill = (UFunction*) UObject::GObjObjects()->Data[ 222486 ];

	ATGBioSkillManager_execGetSkill_Parms GetSkill_Parms;
	GetSkill_Parms.ZombieType = ZombieType;

	this->ProcessEvent ( pFnGetSkill, &GetSkill_Parms, NULL );

	return GetSkill_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillManager.AbortSkillByIndex
// [0x00024102] 
// Parameters infos:
// int                            Index                          ( CPF_OptionalParm | CPF_Parm )

void ATGBioSkillManager::AbortSkillByIndex ( int Index )
{
	static UFunction* pFnAbortSkillByIndex = NULL;

	if ( ! pFnAbortSkillByIndex )
		pFnAbortSkillByIndex = (UFunction*) UObject::GObjObjects()->Data[ 223443 ];

	ATGBioSkillManager_execAbortSkillByIndex_Parms AbortSkillByIndex_Parms;
	AbortSkillByIndex_Parms.Index = Index;

	this->ProcessEvent ( pFnAbortSkillByIndex, &AbortSkillByIndex_Parms, NULL );
};

// Function TGBioGame.TGBioSkillManager.AbortSkill
// [0x00020102] 
// Parameters infos:
// unsigned char                  ZombieType                     ( CPF_Parm )

void ATGBioSkillManager::AbortSkill ( unsigned char ZombieType )
{
	static UFunction* pFnAbortSkill = NULL;

	if ( ! pFnAbortSkill )
		pFnAbortSkill = (UFunction*) UObject::GObjObjects()->Data[ 223440 ];

	ATGBioSkillManager_execAbortSkill_Parms AbortSkill_Parms;
	AbortSkill_Parms.ZombieType = ZombieType;

	this->ProcessEvent ( pFnAbortSkill, &AbortSkill_Parms, NULL );
};

// Function TGBioGame.TGBioSkillManager.ServerStartSkill
// [0x002200C2] 
// Parameters infos:
// unsigned char                  ZombieType                     ( CPF_Parm )

void ATGBioSkillManager::ServerStartSkill ( unsigned char ZombieType )
{
	static UFunction* pFnServerStartSkill = NULL;

	if ( ! pFnServerStartSkill )
		pFnServerStartSkill = (UFunction*) UObject::GObjObjects()->Data[ 223438 ];

	ATGBioSkillManager_execServerStartSkill_Parms ServerStartSkill_Parms;
	ServerStartSkill_Parms.ZombieType = ZombieType;

	this->ProcessEvent ( pFnServerStartSkill, &ServerStartSkill_Parms, NULL );
};

// Function TGBioGame.TGBioSkillManager.StartSkill
// [0x00020102] 
// Parameters infos:
// unsigned char                  ZombieType                     ( CPF_Parm )

void ATGBioSkillManager::StartSkill ( unsigned char ZombieType )
{
	static UFunction* pFnStartSkill = NULL;

	if ( ! pFnStartSkill )
		pFnStartSkill = (UFunction*) UObject::GObjObjects()->Data[ 223434 ];

	ATGBioSkillManager_execStartSkill_Parms StartSkill_Parms;
	StartSkill_Parms.ZombieType = ZombieType;

	this->ProcessEvent ( pFnStartSkill, &StartSkill_Parms, NULL );
};

// Function TGBioGame.TGBioSkillManager.IsCooldowning
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioSkillManager::IsCooldowning ( )
{
	static UFunction* pFnIsCooldowning = NULL;

	if ( ! pFnIsCooldowning )
		pFnIsCooldowning = (UFunction*) UObject::GObjObjects()->Data[ 223432 ];

	ATGBioSkillManager_execIsCooldowning_Parms IsCooldowning_Parms;

	this->ProcessEvent ( pFnIsCooldowning, &IsCooldowning_Parms, NULL );

	return IsCooldowning_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillManager.ClearManagerCoolDownOver
// [0x00020102] 
// Parameters infos:

void ATGBioSkillManager::ClearManagerCoolDownOver ( )
{
	static UFunction* pFnClearManagerCoolDownOver = NULL;

	if ( ! pFnClearManagerCoolDownOver )
		pFnClearManagerCoolDownOver = (UFunction*) UObject::GObjObjects()->Data[ 223431 ];

	ATGBioSkillManager_execClearManagerCoolDownOver_Parms ClearManagerCoolDownOver_Parms;

	this->ProcessEvent ( pFnClearManagerCoolDownOver, &ClearManagerCoolDownOver_Parms, NULL );
};

// Function TGBioGame.TGBioSkillManager.ManagerCoolDownOver
// [0x00020102] 
// Parameters infos:

void ATGBioSkillManager::ManagerCoolDownOver ( )
{
	static UFunction* pFnManagerCoolDownOver = NULL;

	if ( ! pFnManagerCoolDownOver )
		pFnManagerCoolDownOver = (UFunction*) UObject::GObjObjects()->Data[ 223429 ];

	ATGBioSkillManager_execManagerCoolDownOver_Parms ManagerCoolDownOver_Parms;

	this->ProcessEvent ( pFnManagerCoolDownOver, &ManagerCoolDownOver_Parms, NULL );
};

// Function TGBioGame.TGBioSkillManager.SkillManagerCoolDown
// [0x00020102] 
// Parameters infos:

void ATGBioSkillManager::SkillManagerCoolDown ( )
{
	static UFunction* pFnSkillManagerCoolDown = NULL;

	if ( ! pFnSkillManagerCoolDown )
		pFnSkillManagerCoolDown = (UFunction*) UObject::GObjObjects()->Data[ 223423 ];

	ATGBioSkillManager_execSkillManagerCoolDown_Parms SkillManagerCoolDown_Parms;

	this->ProcessEvent ( pFnSkillManagerCoolDown, &SkillManagerCoolDown_Parms, NULL );
};

// Function TGBioGame.TGBioSkillManager.GetCooldownRemainTime
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGBioSkillManager::GetCooldownRemainTime ( )
{
	static UFunction* pFnGetCooldownRemainTime = NULL;

	if ( ! pFnGetCooldownRemainTime )
		pFnGetCooldownRemainTime = (UFunction*) UObject::GObjObjects()->Data[ 223420 ];

	ATGBioSkillManager_execGetCooldownRemainTime_Parms GetCooldownRemainTime_Parms;

	this->ProcessEvent ( pFnGetCooldownRemainTime, &GetCooldownRemainTime_Parms, NULL );

	return GetCooldownRemainTime_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillManager.GetSkillLastPercent
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ZombieType                     ( CPF_Parm )

float ATGBioSkillManager::GetSkillLastPercent ( unsigned char ZombieType )
{
	static UFunction* pFnGetSkillLastPercent = NULL;

	if ( ! pFnGetSkillLastPercent )
		pFnGetSkillLastPercent = (UFunction*) UObject::GObjObjects()->Data[ 223415 ];

	ATGBioSkillManager_execGetSkillLastPercent_Parms GetSkillLastPercent_Parms;
	GetSkillLastPercent_Parms.ZombieType = ZombieType;

	this->ProcessEvent ( pFnGetSkillLastPercent, &GetSkillLastPercent_Parms, NULL );

	return GetSkillLastPercent_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillManager.GetCooldownRemainPercent
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGBioSkillManager::GetCooldownRemainPercent ( )
{
	static UFunction* pFnGetCooldownRemainPercent = NULL;

	if ( ! pFnGetCooldownRemainPercent )
		pFnGetCooldownRemainPercent = (UFunction*) UObject::GObjObjects()->Data[ 223413 ];

	ATGBioSkillManager_execGetCooldownRemainPercent_Parms GetCooldownRemainPercent_Parms;

	this->ProcessEvent ( pFnGetCooldownRemainPercent, &GetCooldownRemainPercent_Parms, NULL );

	return GetCooldownRemainPercent_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillManager.SetModifCooldownTime
// [0x00020102] 
// Parameters infos:
// float                          Time                           ( CPF_Parm )

void ATGBioSkillManager::SetModifCooldownTime ( float Time )
{
	static UFunction* pFnSetModifCooldownTime = NULL;

	if ( ! pFnSetModifCooldownTime )
		pFnSetModifCooldownTime = (UFunction*) UObject::GObjObjects()->Data[ 223410 ];

	ATGBioSkillManager_execSetModifCooldownTime_Parms SetModifCooldownTime_Parms;
	SetModifCooldownTime_Parms.Time = Time;

	this->ProcessEvent ( pFnSetModifCooldownTime, &SetModifCooldownTime_Parms, NULL );
};

// Function TGBioGame.TGBioSkillManager.GetSkillByType
// [0x00020102] 
// Parameters infos:
// class ATGBioSkillBase*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ATGBioSkillBase* ATGBioSkillManager::GetSkillByType ( )
{
	static UFunction* pFnGetSkillByType = NULL;

	if ( ! pFnGetSkillByType )
		pFnGetSkillByType = (UFunction*) UObject::GObjObjects()->Data[ 223406 ];

	ATGBioSkillManager_execGetSkillByType_Parms GetSkillByType_Parms;

	this->ProcessEvent ( pFnGetSkillByType, &GetSkillByType_Parms, NULL );

	return GetSkillByType_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillManager.CreateAndInitializeSkill
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ClassName                      ( CPF_Parm | CPF_NeedCtorLink )

bool ATGBioSkillManager::CreateAndInitializeSkill ( struct FString ClassName )
{
	static UFunction* pFnCreateAndInitializeSkill = NULL;

	if ( ! pFnCreateAndInitializeSkill )
		pFnCreateAndInitializeSkill = (UFunction*) UObject::GObjObjects()->Data[ 222352 ];

	ATGBioSkillManager_execCreateAndInitializeSkill_Parms CreateAndInitializeSkill_Parms;
	memcpy ( &CreateAndInitializeSkill_Parms.ClassName, &ClassName, 0xC );

	this->ProcessEvent ( pFnCreateAndInitializeSkill, &CreateAndInitializeSkill_Parms, NULL );

	return CreateAndInitializeSkill_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillManager.Initialize
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerController*       InOwnerPC                      ( CPF_Parm )

bool ATGBioSkillManager::Initialize ( class APlayerController* InOwnerPC )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 222339 ];

	ATGBioSkillManager_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.InOwnerPC = InOwnerPC;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	return Initialize_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillManager.FindSkill
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGBioSkillBase*         ItemToFind                     ( CPF_Parm )

int ATGBioSkillManager::FindSkill ( class ATGBioSkillBase* ItemToFind )
{
	static UFunction* pFnFindSkill = NULL;

	if ( ! pFnFindSkill )
		pFnFindSkill = (UFunction*) UObject::GObjObjects()->Data[ 223397 ];

	ATGBioSkillManager_execFindSkill_Parms FindSkill_Parms;
	FindSkill_Parms.ItemToFind = ItemToFind;

	this->ProcessEvent ( pFnFindSkill, &FindSkill_Parms, NULL );

	return FindSkill_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillManager.DiscardSkill
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATGBioSkillManager::eventDiscardSkill ( )
{
	static UFunction* pFnDiscardSkill = NULL;

	if ( ! pFnDiscardSkill )
		pFnDiscardSkill = (UFunction*) UObject::GObjObjects()->Data[ 223394 ];

	ATGBioSkillManager_eventDiscardSkill_Parms DiscardSkill_Parms;

	this->ProcessEvent ( pFnDiscardSkill, &DiscardSkill_Parms, NULL );
};

// Function TGBioGame.TGBioSkillManager.AddSkill
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGBioSkillBase*         NewItem                        ( CPF_Parm )

bool ATGBioSkillManager::AddSkill ( class ATGBioSkillBase* NewItem )
{
	static UFunction* pFnAddSkill = NULL;

	if ( ! pFnAddSkill )
		pFnAddSkill = (UFunction*) UObject::GObjObjects()->Data[ 223389 ];

	ATGBioSkillManager_execAddSkill_Parms AddSkill_Parms;
	AddSkill_Parms.NewItem = NewItem;

	this->ProcessEvent ( pFnAddSkill, &AddSkill_Parms, NULL );

	return AddSkill_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillManager.RsetSkillsCoolTime
// [0x00020102] 
// Parameters infos:

void ATGBioSkillManager::RsetSkillsCoolTime ( )
{
	static UFunction* pFnRsetSkillsCoolTime = NULL;

	if ( ! pFnRsetSkillsCoolTime )
		pFnRsetSkillsCoolTime = (UFunction*) UObject::GObjObjects()->Data[ 223387 ];

	ATGBioSkillManager_execRsetSkillsCoolTime_Parms RsetSkillsCoolTime_Parms;

	this->ProcessEvent ( pFnRsetSkillsCoolTime, &RsetSkillsCoolTime_Parms, NULL );
};

// Function TGBioGame.TGBioSkillManager.RsetSkills
// [0x00020102] 
// Parameters infos:
// unsigned long                  ResetCoolTime                  ( CPF_Parm )

void ATGBioSkillManager::RsetSkills ( unsigned long ResetCoolTime )
{
	static UFunction* pFnRsetSkills = NULL;

	if ( ! pFnRsetSkills )
		pFnRsetSkills = (UFunction*) UObject::GObjObjects()->Data[ 223384 ];

	ATGBioSkillManager_execRsetSkills_Parms RsetSkills_Parms;
	RsetSkills_Parms.ResetCoolTime = ResetCoolTime;

	this->ProcessEvent ( pFnRsetSkills, &RsetSkills_Parms, NULL );
};

// Function TGBioGame.TGBioSkillManager.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATGBioSkillManager::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 223383 ];

	ATGBioSkillManager_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGBioGame.TGBioProj_FlyCutter.SpawnExplosionEffects
// [0x00020100] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGBioProj_FlyCutter::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 222819 ];

	ATGBioProj_FlyCutter_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function TGBioGame.TGBioProj_FlyCutter.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGBioProj_FlyCutter::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 222812 ];

	ATGBioProj_FlyCutter_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function TGBioGame.TGBioProj_FlyCutter.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGBioProj_FlyCutter::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 222807 ];

	ATGBioProj_FlyCutter_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGBioGame.TGBioProj_FlyCutter.InitWithBaseVelocity
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 BaseVelocity                   ( CPF_Parm )

void ATGBioProj_FlyCutter::InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity )
{
	static UFunction* pFnInitWithBaseVelocity = NULL;

	if ( ! pFnInitWithBaseVelocity )
		pFnInitWithBaseVelocity = (UFunction*) UObject::GObjObjects()->Data[ 222804 ];

	ATGBioProj_FlyCutter_execInitWithBaseVelocity_Parms InitWithBaseVelocity_Parms;
	memcpy ( &InitWithBaseVelocity_Parms.Direction, &Direction, 0xC );
	memcpy ( &InitWithBaseVelocity_Parms.BaseVelocity, &BaseVelocity, 0xC );

	this->ProcessEvent ( pFnInitWithBaseVelocity, &InitWithBaseVelocity_Parms, NULL );
};

// Function TGBioGame.TGBioProj_FlyCutter.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGBioProj_FlyCutter::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 222803 ];

	ATGBioProj_FlyCutter_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioProj_HeroGun.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGBioProj_HeroGun::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 222878 ];

	ATGBioProj_HeroGun_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGBioGame.TGBioProj_Thunder.DoThunderChain
// [0x00820102] 
// Parameters infos:
// class AUTPawn*                 TraceFrom                      ( CPF_Parm )

void ATGBioProj_Thunder::DoThunderChain ( class AUTPawn* TraceFrom )
{
	static UFunction* pFnDoThunderChain = NULL;

	if ( ! pFnDoThunderChain )
		pFnDoThunderChain = (UFunction*) UObject::GObjObjects()->Data[ 222887 ];

	ATGBioProj_Thunder_execDoThunderChain_Parms DoThunderChain_Parms;
	DoThunderChain_Parms.TraceFrom = TraceFrom;

	this->ProcessEvent ( pFnDoThunderChain, &DoThunderChain_Parms, NULL );
};

// Function TGBioGame.TGBioRestore.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATGBioRestore::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 223015 ];

	ATGBioRestore_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGBioGame.TGBioRestore.RestoreHP
// [0x00020002] 
// Parameters infos:

void ATGBioRestore::RestoreHP ( )
{
	static UFunction* pFnRestoreHP = NULL;

	if ( ! pFnRestoreHP )
		pFnRestoreHP = (UFunction*) UObject::GObjObjects()->Data[ 223011 ];

	ATGBioRestore_execRestoreHP_Parms RestoreHP_Parms;

	this->ProcessEvent ( pFnRestoreHP, &RestoreHP_Parms, NULL );
};

// Function TGBioGame.TGBioRestore.Tick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGBioRestore::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 222994 ];

	ATGBioRestore_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGBioGame.TGBioRestore.CalculateTimer
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATGBioRestore::eventCalculateTimer ( )
{
	static UFunction* pFnCalculateTimer = NULL;

	if ( ! pFnCalculateTimer )
		pFnCalculateTimer = (UFunction*) UObject::GObjObjects()->Data[ 222993 ];

	ATGBioRestore_eventCalculateTimer_Parms CalculateTimer_Parms;

	this->ProcessEvent ( pFnCalculateTimer, &CalculateTimer_Parms, NULL );
};

// Function TGBioGame.TGBioRestore.RestoreCondition
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioRestore::RestoreCondition ( )
{
	static UFunction* pFnRestoreCondition = NULL;

	if ( ! pFnRestoreCondition )
		pFnRestoreCondition = (UFunction*) UObject::GObjObjects()->Data[ 222990 ];

	ATGBioRestore_execRestoreCondition_Parms RestoreCondition_Parms;

	this->ProcessEvent ( pFnRestoreCondition, &RestoreCondition_Parms, NULL );

	return RestoreCondition_Parms.ReturnValue;
};

// Function TGBioGame.TGBioRestore.RestoreInitialize
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerController*       InOwnerPC                      ( CPF_Parm )
// class ATGBioRestoreManager*    InRestoreMsg                   ( CPF_Parm )

bool ATGBioRestore::RestoreInitialize ( class APlayerController* InOwnerPC, class ATGBioRestoreManager* InRestoreMsg )
{
	static UFunction* pFnRestoreInitialize = NULL;

	if ( ! pFnRestoreInitialize )
		pFnRestoreInitialize = (UFunction*) UObject::GObjObjects()->Data[ 222986 ];

	ATGBioRestore_execRestoreInitialize_Parms RestoreInitialize_Parms;
	RestoreInitialize_Parms.InOwnerPC = InOwnerPC;
	RestoreInitialize_Parms.InRestoreMsg = InRestoreMsg;

	this->ProcessEvent ( pFnRestoreInitialize, &RestoreInitialize_Parms, NULL );

	return RestoreInitialize_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSeqAct_AllJerricanReset.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGBioSeqAct_AllJerricanReset::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 223051 ];

	UTGBioSeqAct_AllJerricanReset_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function TGBioGame.TGBioSeqAct_ResetGlass.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGBioSeqAct_ResetGlass::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 223056 ];

	UTGBioSeqAct_ResetGlass_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function TGBioGame.TGBioSeqAct_ServerTurnSwitch.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGBioSeqAct_ServerTurnSwitch::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 223064 ];

	UTGBioSeqAct_ServerTurnSwitch_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponentBase.OnClientUnNudge
// [0x00020100] 
// Parameters infos:
// class ATGBioSkillComponentBase* SkillComponent                 ( CPF_Parm )

void ATGBioSkillComponentBase::OnClientUnNudge ( class ATGBioSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnClientUnNudge = NULL;

	if ( ! pFnOnClientUnNudge )
		pFnOnClientUnNudge = (UFunction*) UObject::GObjObjects()->Data[ 223308 ];

	ATGBioSkillComponentBase_execOnClientUnNudge_Parms OnClientUnNudge_Parms;
	OnClientUnNudge_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnClientUnNudge, &OnClientUnNudge_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponentBase.OnClientNudge
// [0x00020100] 
// Parameters infos:
// class ATGBioSkillComponentBase* SkillComponent                 ( CPF_Parm )

void ATGBioSkillComponentBase::OnClientNudge ( class ATGBioSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnClientNudge = NULL;

	if ( ! pFnOnClientNudge )
		pFnOnClientNudge = (UFunction*) UObject::GObjObjects()->Data[ 223306 ];

	ATGBioSkillComponentBase_execOnClientNudge_Parms OnClientNudge_Parms;
	OnClientNudge_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnClientNudge, &OnClientNudge_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponentBase.ClientUnNudge
// [0x00020102] 
// Parameters infos:

void ATGBioSkillComponentBase::ClientUnNudge ( )
{
	static UFunction* pFnClientUnNudge = NULL;

	if ( ! pFnClientUnNudge )
		pFnClientUnNudge = (UFunction*) UObject::GObjObjects()->Data[ 223305 ];

	ATGBioSkillComponentBase_execClientUnNudge_Parms ClientUnNudge_Parms;

	this->ProcessEvent ( pFnClientUnNudge, &ClientUnNudge_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponentBase.ClientNudge
// [0x00020102] 
// Parameters infos:

void ATGBioSkillComponentBase::ClientNudge ( )
{
	static UFunction* pFnClientNudge = NULL;

	if ( ! pFnClientNudge )
		pFnClientNudge = (UFunction*) UObject::GObjObjects()->Data[ 223304 ];

	ATGBioSkillComponentBase_execClientNudge_Parms ClientNudge_Parms;

	this->ProcessEvent ( pFnClientNudge, &ClientNudge_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponentBase.OnUnNudge
// [0x00020000] 
// Parameters infos:
// class ATGBioSkillComponentBase* SkillComponent                 ( CPF_Parm )

void ATGBioSkillComponentBase::OnUnNudge ( class ATGBioSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnUnNudge = NULL;

	if ( ! pFnOnUnNudge )
		pFnOnUnNudge = (UFunction*) UObject::GObjObjects()->Data[ 223302 ];

	ATGBioSkillComponentBase_execOnUnNudge_Parms OnUnNudge_Parms;
	OnUnNudge_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnUnNudge, &OnUnNudge_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponentBase.OnNudge
// [0x00020000] 
// Parameters infos:
// class ATGBioSkillComponentBase* SkillComponent                 ( CPF_Parm )

void ATGBioSkillComponentBase::OnNudge ( class ATGBioSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnNudge = NULL;

	if ( ! pFnOnNudge )
		pFnOnNudge = (UFunction*) UObject::GObjObjects()->Data[ 223300 ];

	ATGBioSkillComponentBase_execOnNudge_Parms OnNudge_Parms;
	OnNudge_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnNudge, &OnNudge_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponentBase.OnPreProcess
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGBioSkillComponentBase* SkillComponent                 ( CPF_Parm )

bool ATGBioSkillComponentBase::OnPreProcess ( class ATGBioSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnPreProcess = NULL;

	if ( ! pFnOnPreProcess )
		pFnOnPreProcess = (UFunction*) UObject::GObjObjects()->Data[ 223297 ];

	ATGBioSkillComponentBase_execOnPreProcess_Parms OnPreProcess_Parms;
	OnPreProcess_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnPreProcess, &OnPreProcess_Parms, NULL );

	return OnPreProcess_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillComponentBase.UnNudge
// [0x00020002] 
// Parameters infos:

void ATGBioSkillComponentBase::UnNudge ( )
{
	static UFunction* pFnUnNudge = NULL;

	if ( ! pFnUnNudge )
		pFnUnNudge = (UFunction*) UObject::GObjObjects()->Data[ 223296 ];

	ATGBioSkillComponentBase_execUnNudge_Parms UnNudge_Parms;

	this->ProcessEvent ( pFnUnNudge, &UnNudge_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponentBase.Nudge
// [0x00020002] 
// Parameters infos:

void ATGBioSkillComponentBase::Nudge ( )
{
	static UFunction* pFnNudge = NULL;

	if ( ! pFnNudge )
		pFnNudge = (UFunction*) UObject::GObjObjects()->Data[ 223295 ];

	ATGBioSkillComponentBase_execNudge_Parms Nudge_Parms;

	this->ProcessEvent ( pFnNudge, &Nudge_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponentBase.PreProcess
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioSkillComponentBase::PreProcess ( )
{
	static UFunction* pFnPreProcess = NULL;

	if ( ! pFnPreProcess )
		pFnPreProcess = (UFunction*) UObject::GObjObjects()->Data[ 223152 ];

	ATGBioSkillComponentBase_execPreProcess_Parms PreProcess_Parms;

	this->ProcessEvent ( pFnPreProcess, &PreProcess_Parms, NULL );

	return PreProcess_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillComponentBase.CanUnNudge
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioSkillComponentBase::CanUnNudge ( )
{
	static UFunction* pFnCanUnNudge = NULL;

	if ( ! pFnCanUnNudge )
		pFnCanUnNudge = (UFunction*) UObject::GObjObjects()->Data[ 223293 ];

	ATGBioSkillComponentBase_execCanUnNudge_Parms CanUnNudge_Parms;

	this->ProcessEvent ( pFnCanUnNudge, &CanUnNudge_Parms, NULL );

	return CanUnNudge_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillComponentBase.CanNudge
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioSkillComponentBase::CanNudge ( )
{
	static UFunction* pFnCanNudge = NULL;

	if ( ! pFnCanNudge )
		pFnCanNudge = (UFunction*) UObject::GObjObjects()->Data[ 223146 ];

	ATGBioSkillComponentBase_execCanNudge_Parms CanNudge_Parms;

	this->ProcessEvent ( pFnCanNudge, &CanNudge_Parms, NULL );

	return CanNudge_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillComponentBase.Initialize
// [0x00024002] 
// Parameters infos:
// class APlayerController*       InOwnerPC                      ( CPF_Parm )
// class ATGBioSkillBase*         InOwnerSkill                   ( CPF_Parm )
// struct FScriptDelegate         NudgeHandleFunctionDelegate    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// struct FScriptDelegate         UnNudgeHandleFunctionDelegate  ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void ATGBioSkillComponentBase::Initialize ( class APlayerController* InOwnerPC, class ATGBioSkillBase* InOwnerSkill, struct FScriptDelegate NudgeHandleFunctionDelegate, struct FScriptDelegate UnNudgeHandleFunctionDelegate )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 223287 ];

	ATGBioSkillComponentBase_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.InOwnerPC = InOwnerPC;
	Initialize_Parms.InOwnerSkill = InOwnerSkill;
	memcpy ( &Initialize_Parms.NudgeHandleFunctionDelegate, &NudgeHandleFunctionDelegate, 0xC );
	memcpy ( &Initialize_Parms.UnNudgeHandleFunctionDelegate, &UnNudgeHandleFunctionDelegate, 0xC );

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponentBase.UnNudgeHandleFunction
// [0x00120000] 
// Parameters infos:
// class ATGBioSkillComponentBase* SkillComponent                 ( CPF_Parm )

void ATGBioSkillComponentBase::UnNudgeHandleFunction ( class ATGBioSkillComponentBase* SkillComponent )
{
	static UFunction* pFnUnNudgeHandleFunction = NULL;

	if ( ! pFnUnNudgeHandleFunction )
		pFnUnNudgeHandleFunction = (UFunction*) UObject::GObjObjects()->Data[ 223279 ];

	ATGBioSkillComponentBase_execUnNudgeHandleFunction_Parms UnNudgeHandleFunction_Parms;
	UnNudgeHandleFunction_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnUnNudgeHandleFunction, &UnNudgeHandleFunction_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponentBase.NudgeHandleFunction
// [0x00120000] 
// Parameters infos:
// class ATGBioSkillComponentBase* SkillComponent                 ( CPF_Parm )

void ATGBioSkillComponentBase::NudgeHandleFunction ( class ATGBioSkillComponentBase* SkillComponent )
{
	static UFunction* pFnNudgeHandleFunction = NULL;

	if ( ! pFnNudgeHandleFunction )
		pFnNudgeHandleFunction = (UFunction*) UObject::GObjObjects()->Data[ 223281 ];

	ATGBioSkillComponentBase_execNudgeHandleFunction_Parms NudgeHandleFunction_Parms;
	NudgeHandleFunction_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnNudgeHandleFunction, &NudgeHandleFunction_Parms, NULL );
};

// Function TGBioGame.TGBioSkill_FastMove.CheckAllowUseSkill
// [0x00020002] 
// Parameters infos:

void ATGBioSkill_FastMove::CheckAllowUseSkill ( )
{
	static UFunction* pFnCheckAllowUseSkill = NULL;

	if ( ! pFnCheckAllowUseSkill )
		pFnCheckAllowUseSkill = (UFunction*) UObject::GObjObjects()->Data[ 223212 ];

	ATGBioSkill_FastMove_execCheckAllowUseSkill_Parms CheckAllowUseSkill_Parms;

	this->ProcessEvent ( pFnCheckAllowUseSkill, &CheckAllowUseSkill_Parms, NULL );
};

// Function TGBioGame.TGBioSkill_FastMove.UnexpectedStopSkillValue
// [0x00020102] 
// Parameters infos:

void ATGBioSkill_FastMove::UnexpectedStopSkillValue ( )
{
	static UFunction* pFnUnexpectedStopSkillValue = NULL;

	if ( ! pFnUnexpectedStopSkillValue )
		pFnUnexpectedStopSkillValue = (UFunction*) UObject::GObjObjects()->Data[ 223211 ];

	ATGBioSkill_FastMove_execUnexpectedStopSkillValue_Parms UnexpectedStopSkillValue_Parms;

	this->ProcessEvent ( pFnUnexpectedStopSkillValue, &UnexpectedStopSkillValue_Parms, NULL );
};

// Function TGBioGame.TGBioSkill_FastMove.PostBeginInitialize
// [0x00020002] 
// Parameters infos:

void ATGBioSkill_FastMove::PostBeginInitialize ( )
{
	static UFunction* pFnPostBeginInitialize = NULL;

	if ( ! pFnPostBeginInitialize )
		pFnPostBeginInitialize = (UFunction*) UObject::GObjObjects()->Data[ 223206 ];

	ATGBioSkill_FastMove_execPostBeginInitialize_Parms PostBeginInitialize_Parms;

	this->ProcessEvent ( pFnPostBeginInitialize, &PostBeginInitialize_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponent_FastMove.CanNudge
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioSkillComponent_FastMove::CanNudge ( )
{
	static UFunction* pFnCanNudge = NULL;

	if ( ! pFnCanNudge )
		pFnCanNudge = (UFunction*) UObject::GObjObjects()->Data[ 223318 ];

	ATGBioSkillComponent_FastMove_execCanNudge_Parms CanNudge_Parms;

	this->ProcessEvent ( pFnCanNudge, &CanNudge_Parms, NULL );

	return CanNudge_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillComponent_FastMove.OnUnNudge
// [0x00020002] 
// Parameters infos:
// class ATGBioSkillComponentBase* SkillComponent                 ( CPF_Parm )

void ATGBioSkillComponent_FastMove::OnUnNudge ( class ATGBioSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnUnNudge = NULL;

	if ( ! pFnOnUnNudge )
		pFnOnUnNudge = (UFunction*) UObject::GObjObjects()->Data[ 223315 ];

	ATGBioSkillComponent_FastMove_execOnUnNudge_Parms OnUnNudge_Parms;
	OnUnNudge_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnUnNudge, &OnUnNudge_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponent_FastMove.OnNudge
// [0x00020002] 
// Parameters infos:
// class ATGBioSkillComponentBase* SkillComponent                 ( CPF_Parm )

void ATGBioSkillComponent_FastMove::OnNudge ( class ATGBioSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnNudge = NULL;

	if ( ! pFnOnNudge )
		pFnOnNudge = (UFunction*) UObject::GObjObjects()->Data[ 223311 ];

	ATGBioSkillComponent_FastMove_execOnNudge_Parms OnNudge_Parms;
	OnNudge_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnNudge, &OnNudge_Parms, NULL );
};

// Function TGBioGame.TGBioSkill_FlyCutter.CheckAllowUseSkill
// [0x00020002] 
// Parameters infos:

void ATGBioSkill_FlyCutter::CheckAllowUseSkill ( )
{
	static UFunction* pFnCheckAllowUseSkill = NULL;

	if ( ! pFnCheckAllowUseSkill )
		pFnCheckAllowUseSkill = (UFunction*) UObject::GObjObjects()->Data[ 223231 ];

	ATGBioSkill_FlyCutter_execCheckAllowUseSkill_Parms CheckAllowUseSkill_Parms;

	this->ProcessEvent ( pFnCheckAllowUseSkill, &CheckAllowUseSkill_Parms, NULL );
};

// Function TGBioGame.TGBioSkill_FlyCutter.UnexpectedStopSkillValue
// [0x00020102] 
// Parameters infos:

void ATGBioSkill_FlyCutter::UnexpectedStopSkillValue ( )
{
	static UFunction* pFnUnexpectedStopSkillValue = NULL;

	if ( ! pFnUnexpectedStopSkillValue )
		pFnUnexpectedStopSkillValue = (UFunction*) UObject::GObjObjects()->Data[ 223230 ];

	ATGBioSkill_FlyCutter_execUnexpectedStopSkillValue_Parms UnexpectedStopSkillValue_Parms;

	this->ProcessEvent ( pFnUnexpectedStopSkillValue, &UnexpectedStopSkillValue_Parms, NULL );
};

// Function TGBioGame.TGBioSkill_FlyCutter.PostBeginInitialize
// [0x00020002] 
// Parameters infos:

void ATGBioSkill_FlyCutter::PostBeginInitialize ( )
{
	static UFunction* pFnPostBeginInitialize = NULL;

	if ( ! pFnPostBeginInitialize )
		pFnPostBeginInitialize = (UFunction*) UObject::GObjObjects()->Data[ 223223 ];

	ATGBioSkill_FlyCutter_execPostBeginInitialize_Parms PostBeginInitialize_Parms;

	this->ProcessEvent ( pFnPostBeginInitialize, &PostBeginInitialize_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponent_FlyCutter.CanNudge
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioSkillComponent_FlyCutter::CanNudge ( )
{
	static UFunction* pFnCanNudge = NULL;

	if ( ! pFnCanNudge )
		pFnCanNudge = (UFunction*) UObject::GObjObjects()->Data[ 223335 ];

	ATGBioSkillComponent_FlyCutter_execCanNudge_Parms CanNudge_Parms;

	this->ProcessEvent ( pFnCanNudge, &CanNudge_Parms, NULL );

	return CanNudge_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillComponent_FlyCutter.OnUnNudge
// [0x00020000] 
// Parameters infos:
// class ATGBioSkillComponentBase* SkillComponent                 ( CPF_Parm )

void ATGBioSkillComponent_FlyCutter::OnUnNudge ( class ATGBioSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnUnNudge = NULL;

	if ( ! pFnOnUnNudge )
		pFnOnUnNudge = (UFunction*) UObject::GObjObjects()->Data[ 223333 ];

	ATGBioSkillComponent_FlyCutter_execOnUnNudge_Parms OnUnNudge_Parms;
	OnUnNudge_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnUnNudge, &OnUnNudge_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponent_FlyCutter.OnNudge
// [0x00020000] 
// Parameters infos:
// class ATGBioSkillComponentBase* SkillComponent                 ( CPF_Parm )

void ATGBioSkillComponent_FlyCutter::OnNudge ( class ATGBioSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnNudge = NULL;

	if ( ! pFnOnNudge )
		pFnOnNudge = (UFunction*) UObject::GObjObjects()->Data[ 223331 ];

	ATGBioSkillComponent_FlyCutter_execOnNudge_Parms OnNudge_Parms;
	OnNudge_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnNudge, &OnNudge_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponent_FlyCutter.OnPreProcess
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGBioSkillComponentBase* SkillComponent                 ( CPF_Parm )

bool ATGBioSkillComponent_FlyCutter::OnPreProcess ( class ATGBioSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnPreProcess = NULL;

	if ( ! pFnOnPreProcess )
		pFnOnPreProcess = (UFunction*) UObject::GObjObjects()->Data[ 223324 ];

	ATGBioSkillComponent_FlyCutter_execOnPreProcess_Parms OnPreProcess_Parms;
	OnPreProcess_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnPreProcess, &OnPreProcess_Parms, NULL );

	return OnPreProcess_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillComponent_Invisible.CanNudge
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioSkillComponent_Invisible::CanNudge ( )
{
	static UFunction* pFnCanNudge = NULL;

	if ( ! pFnCanNudge )
		pFnCanNudge = (UFunction*) UObject::GObjObjects()->Data[ 223350 ];

	ATGBioSkillComponent_Invisible_execCanNudge_Parms CanNudge_Parms;

	this->ProcessEvent ( pFnCanNudge, &CanNudge_Parms, NULL );

	return CanNudge_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillComponent_Invisible.OnUnNudge
// [0x00020002] 
// Parameters infos:
// class ATGBioSkillComponentBase* SkillComponent                 ( CPF_Parm )

void ATGBioSkillComponent_Invisible::OnUnNudge ( class ATGBioSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnUnNudge = NULL;

	if ( ! pFnOnUnNudge )
		pFnOnUnNudge = (UFunction*) UObject::GObjObjects()->Data[ 223347 ];

	ATGBioSkillComponent_Invisible_execOnUnNudge_Parms OnUnNudge_Parms;
	OnUnNudge_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnUnNudge, &OnUnNudge_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponent_Invisible.OnNudge
// [0x00020002] 
// Parameters infos:
// class ATGBioSkillComponentBase* SkillComponent                 ( CPF_Parm )

void ATGBioSkillComponent_Invisible::OnNudge ( class ATGBioSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnNudge = NULL;

	if ( ! pFnOnNudge )
		pFnOnNudge = (UFunction*) UObject::GObjObjects()->Data[ 223340 ];

	ATGBioSkillComponent_Invisible_execOnNudge_Parms OnNudge_Parms;
	OnNudge_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnNudge, &OnNudge_Parms, NULL );
};

// Function TGBioGame.TGBioSkill_Shield.CheckAllowUseSkill
// [0x00020002] 
// Parameters infos:

void ATGBioSkill_Shield::CheckAllowUseSkill ( )
{
	static UFunction* pFnCheckAllowUseSkill = NULL;

	if ( ! pFnCheckAllowUseSkill )
		pFnCheckAllowUseSkill = (UFunction*) UObject::GObjObjects()->Data[ 223269 ];

	ATGBioSkill_Shield_execCheckAllowUseSkill_Parms CheckAllowUseSkill_Parms;

	this->ProcessEvent ( pFnCheckAllowUseSkill, &CheckAllowUseSkill_Parms, NULL );
};

// Function TGBioGame.TGBioSkill_Shield.UnexpectedStopSkillValue
// [0x00020102] 
// Parameters infos:

void ATGBioSkill_Shield::UnexpectedStopSkillValue ( )
{
	static UFunction* pFnUnexpectedStopSkillValue = NULL;

	if ( ! pFnUnexpectedStopSkillValue )
		pFnUnexpectedStopSkillValue = (UFunction*) UObject::GObjObjects()->Data[ 223268 ];

	ATGBioSkill_Shield_execUnexpectedStopSkillValue_Parms UnexpectedStopSkillValue_Parms;

	this->ProcessEvent ( pFnUnexpectedStopSkillValue, &UnexpectedStopSkillValue_Parms, NULL );
};

// Function TGBioGame.TGBioSkill_Shield.PostBeginInitialize
// [0x00020002] 
// Parameters infos:

void ATGBioSkill_Shield::PostBeginInitialize ( )
{
	static UFunction* pFnPostBeginInitialize = NULL;

	if ( ! pFnPostBeginInitialize )
		pFnPostBeginInitialize = (UFunction*) UObject::GObjObjects()->Data[ 223265 ];

	ATGBioSkill_Shield_execPostBeginInitialize_Parms PostBeginInitialize_Parms;

	this->ProcessEvent ( pFnPostBeginInitialize, &PostBeginInitialize_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponent_Shield.CanNudge
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioSkillComponent_Shield::CanNudge ( )
{
	static UFunction* pFnCanNudge = NULL;

	if ( ! pFnCanNudge )
		pFnCanNudge = (UFunction*) UObject::GObjObjects()->Data[ 223360 ];

	ATGBioSkillComponent_Shield_execCanNudge_Parms CanNudge_Parms;

	this->ProcessEvent ( pFnCanNudge, &CanNudge_Parms, NULL );

	return CanNudge_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillComponent_Shield.OnUnNudge
// [0x00020002] 
// Parameters infos:
// class ATGBioSkillComponentBase* SkillComponent                 ( CPF_Parm )

void ATGBioSkillComponent_Shield::OnUnNudge ( class ATGBioSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnUnNudge = NULL;

	if ( ! pFnOnUnNudge )
		pFnOnUnNudge = (UFunction*) UObject::GObjObjects()->Data[ 223357 ];

	ATGBioSkillComponent_Shield_execOnUnNudge_Parms OnUnNudge_Parms;
	OnUnNudge_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnUnNudge, &OnUnNudge_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponent_Shield.OnNudge
// [0x00020002] 
// Parameters infos:
// class ATGBioSkillComponentBase* SkillComponent                 ( CPF_Parm )

void ATGBioSkillComponent_Shield::OnNudge ( class ATGBioSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnNudge = NULL;

	if ( ! pFnOnNudge )
		pFnOnNudge = (UFunction*) UObject::GObjObjects()->Data[ 223354 ];

	ATGBioSkillComponent_Shield_execOnNudge_Parms OnNudge_Parms;
	OnNudge_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnNudge, &OnNudge_Parms, NULL );
};

// Function TGBioGame.TGBioSkill_Trample.CheckAllowUseSkill
// [0x00020002] 
// Parameters infos:

void ATGBioSkill_Trample::CheckAllowUseSkill ( )
{
	static UFunction* pFnCheckAllowUseSkill = NULL;

	if ( ! pFnCheckAllowUseSkill )
		pFnCheckAllowUseSkill = (UFunction*) UObject::GObjObjects()->Data[ 223276 ];

	ATGBioSkill_Trample_execCheckAllowUseSkill_Parms CheckAllowUseSkill_Parms;

	this->ProcessEvent ( pFnCheckAllowUseSkill, &CheckAllowUseSkill_Parms, NULL );
};

// Function TGBioGame.TGBioSkill_Trample.UnexpectedStopSkillValue
// [0x00020102] 
// Parameters infos:

void ATGBioSkill_Trample::UnexpectedStopSkillValue ( )
{
	static UFunction* pFnUnexpectedStopSkillValue = NULL;

	if ( ! pFnUnexpectedStopSkillValue )
		pFnUnexpectedStopSkillValue = (UFunction*) UObject::GObjObjects()->Data[ 223275 ];

	ATGBioSkill_Trample_execUnexpectedStopSkillValue_Parms UnexpectedStopSkillValue_Parms;

	this->ProcessEvent ( pFnUnexpectedStopSkillValue, &UnexpectedStopSkillValue_Parms, NULL );
};

// Function TGBioGame.TGBioSkill_Trample.PostBeginInitialize
// [0x00020002] 
// Parameters infos:

void ATGBioSkill_Trample::PostBeginInitialize ( )
{
	static UFunction* pFnPostBeginInitialize = NULL;

	if ( ! pFnPostBeginInitialize )
		pFnPostBeginInitialize = (UFunction*) UObject::GObjObjects()->Data[ 223274 ];

	ATGBioSkill_Trample_execPostBeginInitialize_Parms PostBeginInitialize_Parms;

	this->ProcessEvent ( pFnPostBeginInitialize, &PostBeginInitialize_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponent_Trample.CanNudge
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGBioSkillComponent_Trample::CanNudge ( )
{
	static UFunction* pFnCanNudge = NULL;

	if ( ! pFnCanNudge )
		pFnCanNudge = (UFunction*) UObject::GObjObjects()->Data[ 223374 ];

	ATGBioSkillComponent_Trample_execCanNudge_Parms CanNudge_Parms;

	this->ProcessEvent ( pFnCanNudge, &CanNudge_Parms, NULL );

	return CanNudge_Parms.ReturnValue;
};

// Function TGBioGame.TGBioSkillComponent_Trample.TrampleFindPawnPlayer
// [0x00020002] 
// Parameters infos:

void ATGBioSkillComponent_Trample::TrampleFindPawnPlayer ( )
{
	static UFunction* pFnTrampleFindPawnPlayer = NULL;

	if ( ! pFnTrampleFindPawnPlayer )
		pFnTrampleFindPawnPlayer = (UFunction*) UObject::GObjObjects()->Data[ 223370 ];

	ATGBioSkillComponent_Trample_execTrampleFindPawnPlayer_Parms TrampleFindPawnPlayer_Parms;

	this->ProcessEvent ( pFnTrampleFindPawnPlayer, &TrampleFindPawnPlayer_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponent_Trample.OnUnNudge
// [0x00020002] 
// Parameters infos:
// class ATGBioSkillComponentBase* SkillComponent                 ( CPF_Parm )

void ATGBioSkillComponent_Trample::OnUnNudge ( class ATGBioSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnUnNudge = NULL;

	if ( ! pFnOnUnNudge )
		pFnOnUnNudge = (UFunction*) UObject::GObjObjects()->Data[ 223367 ];

	ATGBioSkillComponent_Trample_execOnUnNudge_Parms OnUnNudge_Parms;
	OnUnNudge_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnUnNudge, &OnUnNudge_Parms, NULL );
};

// Function TGBioGame.TGBioSkillComponent_Trample.OnNudge
// [0x00020002] 
// Parameters infos:
// class ATGBioSkillComponentBase* SkillComponent                 ( CPF_Parm )

void ATGBioSkillComponent_Trample::OnNudge ( class ATGBioSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnNudge = NULL;

	if ( ! pFnOnNudge )
		pFnOnNudge = (UFunction*) UObject::GObjObjects()->Data[ 223364 ];

	ATGBioSkillComponent_Trample_execOnNudge_Parms OnNudge_Parms;
	OnNudge_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnNudge, &OnNudge_Parms, NULL );
};

// Function TGBioGame.TGBioSkillNotifyMessage.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UTGBioSkillNotifyMessage::ClientReceive ( class APlayerController* PC, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 223490 ];

	UTGBioSkillNotifyMessage_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.PC = PC;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function TGBioGame.TGBioSkillNotifyMessage.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioSkillNotifyMessage::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 223483 ];

	UTGBioSkillNotifyMessage_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioWeaponPickupMessage.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGBioWeaponPickupMessage::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 223759 ];

	UTGBioWeaponPickupMessage_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGBioGame.TGBioZombieHUD_BaseInfo.UpdateZombieBaseInfo
// [0x00020002] 
// Parameters infos:

void UTGBioZombieHUD_BaseInfo::UpdateZombieBaseInfo ( )
{
	static UFunction* pFnUpdateZombieBaseInfo = NULL;

	if ( ! pFnUpdateZombieBaseInfo )
		pFnUpdateZombieBaseInfo = (UFunction*) UObject::GObjObjects()->Data[ 223779 ];

	UTGBioZombieHUD_BaseInfo_execUpdateZombieBaseInfo_Parms UpdateZombieBaseInfo_Parms;

	this->ProcessEvent ( pFnUpdateZombieBaseInfo, &UpdateZombieBaseInfo_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_BaseInfo.Tick
// [0x00020002] 
// Parameters infos:

void UTGBioZombieHUD_BaseInfo::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 223777 ];

	UTGBioZombieHUD_BaseInfo_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_BaseInfo.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGBioZombieHUD_BaseInfo::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 223776 ];

	UTGBioZombieHUD_BaseInfo_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_BaseInfo.PostBeginPlay
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void UTGBioZombieHUD_BaseInfo::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 223775 ];

	UTGBioZombieHUD_BaseInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_HeroSelectWeap.UpdateHeroSelectWeapInfo
// [0x00020002] 
// Parameters infos:

void UTGBioZombieHUD_HeroSelectWeap::UpdateHeroSelectWeapInfo ( )
{
	static UFunction* pFnUpdateHeroSelectWeapInfo = NULL;

	if ( ! pFnUpdateHeroSelectWeapInfo )
		pFnUpdateHeroSelectWeapInfo = (UFunction*) UObject::GObjObjects()->Data[ 223795 ];

	UTGBioZombieHUD_HeroSelectWeap_execUpdateHeroSelectWeapInfo_Parms UpdateHeroSelectWeapInfo_Parms;

	this->ProcessEvent ( pFnUpdateHeroSelectWeapInfo, &UpdateHeroSelectWeapInfo_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_HeroSelectWeap.Tick
// [0x00020002] 
// Parameters infos:

void UTGBioZombieHUD_HeroSelectWeap::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 223792 ];

	UTGBioZombieHUD_HeroSelectWeap_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_HeroSelectWeap.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGBioZombieHUD_HeroSelectWeap::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 223791 ];

	UTGBioZombieHUD_HeroSelectWeap_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_HeroSelectWeap.PostBeginPlay
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void UTGBioZombieHUD_HeroSelectWeap::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 223790 ];

	UTGBioZombieHUD_HeroSelectWeap_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_LevelUpInfo.UpdateLevelUpInfo
// [0x00020002] 
// Parameters infos:

void UTGBioZombieHUD_LevelUpInfo::UpdateLevelUpInfo ( )
{
	static UFunction* pFnUpdateLevelUpInfo = NULL;

	if ( ! pFnUpdateLevelUpInfo )
		pFnUpdateLevelUpInfo = (UFunction*) UObject::GObjObjects()->Data[ 223807 ];

	UTGBioZombieHUD_LevelUpInfo_execUpdateLevelUpInfo_Parms UpdateLevelUpInfo_Parms;

	this->ProcessEvent ( pFnUpdateLevelUpInfo, &UpdateLevelUpInfo_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_LevelUpInfo.Tick
// [0x00020002] 
// Parameters infos:

void UTGBioZombieHUD_LevelUpInfo::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 223805 ];

	UTGBioZombieHUD_LevelUpInfo_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_LevelUpInfo.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGBioZombieHUD_LevelUpInfo::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 223804 ];

	UTGBioZombieHUD_LevelUpInfo_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_LevelUpInfo.PostBeginPlay
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void UTGBioZombieHUD_LevelUpInfo::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 223803 ];

	UTGBioZombieHUD_LevelUpInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_Select.UpdateZombieSelectInfo
// [0x00020002] 
// Parameters infos:

void UTGBioZombieHUD_Select::UpdateZombieSelectInfo ( )
{
	static UFunction* pFnUpdateZombieSelectInfo = NULL;

	if ( ! pFnUpdateZombieSelectInfo )
		pFnUpdateZombieSelectInfo = (UFunction*) UObject::GObjObjects()->Data[ 223822 ];

	UTGBioZombieHUD_Select_execUpdateZombieSelectInfo_Parms UpdateZombieSelectInfo_Parms;

	this->ProcessEvent ( pFnUpdateZombieSelectInfo, &UpdateZombieSelectInfo_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_Select.Tick
// [0x00020002] 
// Parameters infos:

void UTGBioZombieHUD_Select::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 223819 ];

	UTGBioZombieHUD_Select_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_Select.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGBioZombieHUD_Select::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 223818 ];

	UTGBioZombieHUD_Select_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGBioGame.TGBioZombieHUD_Select.PostBeginPlay
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void UTGBioZombieHUD_Select::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 223817 ];

	UTGBioZombieHUD_Select_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif