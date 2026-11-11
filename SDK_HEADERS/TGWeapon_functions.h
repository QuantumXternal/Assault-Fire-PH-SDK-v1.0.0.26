/*
#############################################################################################
# Assault Fire (1.0.0.26) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TGWeapon_functions.h
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

// Function TGWeapon.Interface_TGNewWeapon.SetExtraPower
// [0x00020000] 
// Parameters infos:
// int                            InPower                        ( CPF_Parm )

void UInterface_TGNewWeapon::SetExtraPower ( int InPower )
{
	static UFunction* pFnSetExtraPower = NULL;

	if ( ! pFnSetExtraPower )
		pFnSetExtraPower = (UFunction*) UObject::GObjObjects()->Data[ 166101 ];

	UInterface_TGNewWeapon_execSetExtraPower_Parms SetExtraPower_Parms;
	SetExtraPower_Parms.InPower = InPower;

	this->ProcessEvent ( pFnSetExtraPower, &SetExtraPower_Parms, NULL );
};

// Function TGWeapon.TGDmgType_ACE.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_ACE::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166105 ];

	UTGDmgType_ACE_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_ACE.MirrorUpdateNotify
// [0x00020102] 
// Parameters infos:

void ATGWeap_ACE::MirrorUpdateNotify ( )
{
	static UFunction* pFnMirrorUpdateNotify = NULL;

	if ( ! pFnMirrorUpdateNotify )
		pFnMirrorUpdateNotify = (UFunction*) UObject::GObjObjects()->Data[ 173002 ];

	ATGWeap_ACE_execMirrorUpdateNotify_Parms MirrorUpdateNotify_Parms;

	this->ProcessEvent ( pFnMirrorUpdateNotify, &MirrorUpdateNotify_Parms, NULL );
};

// Function TGWeapon.TGWeap_ACE.DelayActivateAmmoDisplayComp
// [0x00020102] 
// Parameters infos:

void ATGWeap_ACE::DelayActivateAmmoDisplayComp ( )
{
	static UFunction* pFnDelayActivateAmmoDisplayComp = NULL;

	if ( ! pFnDelayActivateAmmoDisplayComp )
		pFnDelayActivateAmmoDisplayComp = (UFunction*) UObject::GObjObjects()->Data[ 173001 ];

	ATGWeap_ACE_execDelayActivateAmmoDisplayComp_Parms DelayActivateAmmoDisplayComp_Parms;

	this->ProcessEvent ( pFnDelayActivateAmmoDisplayComp, &DelayActivateAmmoDisplayComp_Parms, NULL );
};

// Function TGWeapon.TGWeap_ACE.TimeWeaponEquipping
// [0x00020102] 
// Parameters infos:

void ATGWeap_ACE::TimeWeaponEquipping ( )
{
	static UFunction* pFnTimeWeaponEquipping = NULL;

	if ( ! pFnTimeWeaponEquipping )
		pFnTimeWeaponEquipping = (UFunction*) UObject::GObjObjects()->Data[ 173000 ];

	ATGWeap_ACE_execTimeWeaponEquipping_Parms TimeWeaponEquipping_Parms;

	this->ProcessEvent ( pFnTimeWeaponEquipping, &TimeWeaponEquipping_Parms, NULL );
};

// Function TGWeapon.TGWeap_ACE.DetachWeapon
// [0x00020102] 
// Parameters infos:

void ATGWeap_ACE::DetachWeapon ( )
{
	static UFunction* pFnDetachWeapon = NULL;

	if ( ! pFnDetachWeapon )
		pFnDetachWeapon = (UFunction*) UObject::GObjObjects()->Data[ 172999 ];

	ATGWeap_ACE_execDetachWeapon_Parms DetachWeapon_Parms;

	this->ProcessEvent ( pFnDetachWeapon, &DetachWeapon_Parms, NULL );
};

// Function TGWeapon.TGWeap_ACE.FullAmmo
// [0x00020102] 
// Parameters infos:

void ATGWeap_ACE::FullAmmo ( )
{
	static UFunction* pFnFullAmmo = NULL;

	if ( ! pFnFullAmmo )
		pFnFullAmmo = (UFunction*) UObject::GObjObjects()->Data[ 172998 ];

	ATGWeap_ACE_execFullAmmo_Parms FullAmmo_Parms;

	this->ProcessEvent ( pFnFullAmmo, &FullAmmo_Parms, NULL );
};

// Function TGWeapon.TGWeap_ACE.AddAmmo
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Amount                         ( CPF_Parm )

int ATGWeap_ACE::AddAmmo ( int Amount )
{
	static UFunction* pFnAddAmmo = NULL;

	if ( ! pFnAddAmmo )
		pFnAddAmmo = (UFunction*) UObject::GObjObjects()->Data[ 172993 ];

	ATGWeap_ACE_execAddAmmo_Parms AddAmmo_Parms;
	AddAmmo_Parms.Amount = Amount;

	this->ProcessEvent ( pFnAddAmmo, &AddAmmo_Parms, NULL );

	return AddAmmo_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_ACE.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGWeap_ACE::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 172991 ];

	ATGWeap_ACE_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGWeapon.TGWeap_ACE.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_ACE::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 172981 ];

	ATGWeap_ACE_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_ACE.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_ACE::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 172979 ];

	ATGWeap_ACE_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_ACE.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_ACE::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 172977 ];

	ATGWeap_ACE_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AEK999.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AEK999::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166120 ];

	UTGDmgType_AEK999_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AEK999.DrawAmmo
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UCanvas*                 CanvasTemp                     ( CPF_Parm )
// int                            CurrentAmmo                    ( CPF_Parm )
// int                            CarriedAmmo                    ( CPF_Parm )

void ATGWeap_AEK999::eventDrawAmmo ( class UCanvas* CanvasTemp, int CurrentAmmo, int CarriedAmmo )
{
	static UFunction* pFnDrawAmmo = NULL;

	if ( ! pFnDrawAmmo )
		pFnDrawAmmo = (UFunction*) UObject::GObjObjects()->Data[ 173023 ];

	ATGWeap_AEK999_eventDrawAmmo_Parms DrawAmmo_Parms;
	DrawAmmo_Parms.CanvasTemp = CanvasTemp;
	DrawAmmo_Parms.CurrentAmmo = CurrentAmmo;
	DrawAmmo_Parms.CarriedAmmo = CarriedAmmo;

	this->ProcessEvent ( pFnDrawAmmo, &DrawAmmo_Parms, NULL );
};

// Function TGWeapon.TGWeap_AEK999.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AEK999::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173013 ];

	ATGWeap_AEK999_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AEK999.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AEK999::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173011 ];

	ATGWeap_AEK999_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AEK999.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AEK999::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173009 ];

	ATGWeap_AEK999_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AEKunlimited.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AEKunlimited::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166135 ];

	UTGDmgType_AEKunlimited_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AEKunlimited.DrawAmmo
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UCanvas*                 CanvasTemp                     ( CPF_Parm )
// int                            CurrentAmmo                    ( CPF_Parm )
// int                            CarriedAmmo                    ( CPF_Parm )

void ATGWeap_AEKunlimited::eventDrawAmmo ( class UCanvas* CanvasTemp, int CurrentAmmo, int CarriedAmmo )
{
	static UFunction* pFnDrawAmmo = NULL;

	if ( ! pFnDrawAmmo )
		pFnDrawAmmo = (UFunction*) UObject::GObjObjects()->Data[ 173046 ];

	ATGWeap_AEKunlimited_eventDrawAmmo_Parms DrawAmmo_Parms;
	DrawAmmo_Parms.CanvasTemp = CanvasTemp;
	DrawAmmo_Parms.CurrentAmmo = CurrentAmmo;
	DrawAmmo_Parms.CarriedAmmo = CarriedAmmo;

	this->ProcessEvent ( pFnDrawAmmo, &DrawAmmo_Parms, NULL );
};

// Function TGWeapon.TGWeap_AEKunlimited.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AEKunlimited::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173036 ];

	ATGWeap_AEKunlimited_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AEKunlimited.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AEKunlimited::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173034 ];

	ATGWeap_AEKunlimited_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AEKunlimited.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AEKunlimited::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173032 ];

	ATGWeap_AEKunlimited_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AK12.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AK12::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166150 ];

	UTGDmgType_AK12_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK12.GetAdjustedAim
// [0x00820102] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartFireLoc                   ( CPF_Parm )

struct FRotator ATGWeap_AK12::GetAdjustedAim ( struct FVector StartFireLoc )
{
	static UFunction* pFnGetAdjustedAim = NULL;

	if ( ! pFnGetAdjustedAim )
		pFnGetAdjustedAim = (UFunction*) UObject::GObjObjects()->Data[ 173098 ];

	ATGWeap_AK12_execGetAdjustedAim_Parms GetAdjustedAim_Parms;
	memcpy ( &GetAdjustedAim_Parms.StartFireLoc, &StartFireLoc, 0xC );

	this->ProcessEvent ( pFnGetAdjustedAim, &GetAdjustedAim_Parms, NULL );

	return GetAdjustedAim_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_AK12.WeaponCalcCamera
// [0x00C20102] 
// Parameters infos:
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )

void ATGWeap_AK12::WeaponCalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot )
{
	static UFunction* pFnWeaponCalcCamera = NULL;

	if ( ! pFnWeaponCalcCamera )
		pFnWeaponCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 173091 ];

	ATGWeap_AK12_execWeaponCalcCamera_Parms WeaponCalcCamera_Parms;
	WeaponCalcCamera_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnWeaponCalcCamera, &WeaponCalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &WeaponCalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &WeaponCalcCamera_Parms.out_CamRot, 0xC );
};

// Function TGWeapon.TGWeap_AK12.KickBackTheView
// [0x00820102] 
// Parameters infos:
// float                          KickBackUpBase                 ( CPF_Parm )
// float                          KickBackLateralBase            ( CPF_Parm )
// float                          KickBackUpModifier             ( CPF_Parm )
// float                          KickBackLateralModifier        ( CPF_Parm )
// float                          KickBackUpMax                  ( CPF_Parm )
// float                          KickBackLateralMax             ( CPF_Parm )

void ATGWeap_AK12::KickBackTheView ( float KickBackUpBase, float KickBackLateralBase, float KickBackUpModifier, float KickBackLateralModifier, float KickBackUpMax, float KickBackLateralMax )
{
	static UFunction* pFnKickBackTheView = NULL;

	if ( ! pFnKickBackTheView )
		pFnKickBackTheView = (UFunction*) UObject::GObjObjects()->Data[ 173075 ];

	ATGWeap_AK12_execKickBackTheView_Parms KickBackTheView_Parms;
	KickBackTheView_Parms.KickBackUpBase = KickBackUpBase;
	KickBackTheView_Parms.KickBackLateralBase = KickBackLateralBase;
	KickBackTheView_Parms.KickBackUpModifier = KickBackUpModifier;
	KickBackTheView_Parms.KickBackLateralModifier = KickBackLateralModifier;
	KickBackTheView_Parms.KickBackUpMax = KickBackUpMax;
	KickBackTheView_Parms.KickBackLateralMax = KickBackLateralMax;

	this->ProcessEvent ( pFnKickBackTheView, &KickBackTheView_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK12.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK12::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173065 ];

	ATGWeap_AK12_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK12.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK12::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173063 ];

	ATGWeap_AK12_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK12.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK12::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173061 ];

	ATGWeap_AK12_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AK47.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AK47::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166165 ];

	UTGDmgType_AK47_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47.GetAdjustedAim
// [0x00820102] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartFireLoc                   ( CPF_Parm )

struct FRotator ATGWeap_AK47::GetAdjustedAim ( struct FVector StartFireLoc )
{
	static UFunction* pFnGetAdjustedAim = NULL;

	if ( ! pFnGetAdjustedAim )
		pFnGetAdjustedAim = (UFunction*) UObject::GObjObjects()->Data[ 173152 ];

	ATGWeap_AK47_execGetAdjustedAim_Parms GetAdjustedAim_Parms;
	memcpy ( &GetAdjustedAim_Parms.StartFireLoc, &StartFireLoc, 0xC );

	this->ProcessEvent ( pFnGetAdjustedAim, &GetAdjustedAim_Parms, NULL );

	return GetAdjustedAim_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_AK47.WeaponCalcCamera
// [0x00C20102] 
// Parameters infos:
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )

void ATGWeap_AK47::WeaponCalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot )
{
	static UFunction* pFnWeaponCalcCamera = NULL;

	if ( ! pFnWeaponCalcCamera )
		pFnWeaponCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 173145 ];

	ATGWeap_AK47_execWeaponCalcCamera_Parms WeaponCalcCamera_Parms;
	WeaponCalcCamera_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnWeaponCalcCamera, &WeaponCalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &WeaponCalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &WeaponCalcCamera_Parms.out_CamRot, 0xC );
};

// Function TGWeapon.TGWeap_AK47.KickBackTheView
// [0x00820102] 
// Parameters infos:
// float                          KickBackUpBase                 ( CPF_Parm )
// float                          KickBackLateralBase            ( CPF_Parm )
// float                          KickBackUpModifier             ( CPF_Parm )
// float                          KickBackLateralModifier        ( CPF_Parm )
// float                          KickBackUpMax                  ( CPF_Parm )
// float                          KickBackLateralMax             ( CPF_Parm )

void ATGWeap_AK47::KickBackTheView ( float KickBackUpBase, float KickBackLateralBase, float KickBackUpModifier, float KickBackLateralModifier, float KickBackUpMax, float KickBackLateralMax )
{
	static UFunction* pFnKickBackTheView = NULL;

	if ( ! pFnKickBackTheView )
		pFnKickBackTheView = (UFunction*) UObject::GObjObjects()->Data[ 173129 ];

	ATGWeap_AK47_execKickBackTheView_Parms KickBackTheView_Parms;
	KickBackTheView_Parms.KickBackUpBase = KickBackUpBase;
	KickBackTheView_Parms.KickBackLateralBase = KickBackLateralBase;
	KickBackTheView_Parms.KickBackUpModifier = KickBackUpModifier;
	KickBackTheView_Parms.KickBackLateralModifier = KickBackLateralModifier;
	KickBackTheView_Parms.KickBackUpMax = KickBackUpMax;
	KickBackTheView_Parms.KickBackLateralMax = KickBackLateralMax;

	this->ProcessEvent ( pFnKickBackTheView, &KickBackTheView_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173119 ];

	ATGWeap_AK47_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173117 ];

	ATGWeap_AK47_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173115 ];

	ATGWeap_AK47_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AK47_B.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AK47_B::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166176 ];

	UTGDmgType_AK47_B_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47_B.GetAdjustedAim
// [0x00820102] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartFireLoc                   ( CPF_Parm )

struct FRotator ATGWeap_AK47_B::GetAdjustedAim ( struct FVector StartFireLoc )
{
	static UFunction* pFnGetAdjustedAim = NULL;

	if ( ! pFnGetAdjustedAim )
		pFnGetAdjustedAim = (UFunction*) UObject::GObjObjects()->Data[ 173206 ];

	ATGWeap_AK47_B_execGetAdjustedAim_Parms GetAdjustedAim_Parms;
	memcpy ( &GetAdjustedAim_Parms.StartFireLoc, &StartFireLoc, 0xC );

	this->ProcessEvent ( pFnGetAdjustedAim, &GetAdjustedAim_Parms, NULL );

	return GetAdjustedAim_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_AK47_B.WeaponCalcCamera
// [0x00C20102] 
// Parameters infos:
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )

void ATGWeap_AK47_B::WeaponCalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot )
{
	static UFunction* pFnWeaponCalcCamera = NULL;

	if ( ! pFnWeaponCalcCamera )
		pFnWeaponCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 173199 ];

	ATGWeap_AK47_B_execWeaponCalcCamera_Parms WeaponCalcCamera_Parms;
	WeaponCalcCamera_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnWeaponCalcCamera, &WeaponCalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &WeaponCalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &WeaponCalcCamera_Parms.out_CamRot, 0xC );
};

// Function TGWeapon.TGWeap_AK47_B.KickBackTheView
// [0x00820102] 
// Parameters infos:
// float                          KickBackUpBase                 ( CPF_Parm )
// float                          KickBackLateralBase            ( CPF_Parm )
// float                          KickBackUpModifier             ( CPF_Parm )
// float                          KickBackLateralModifier        ( CPF_Parm )
// float                          KickBackUpMax                  ( CPF_Parm )
// float                          KickBackLateralMax             ( CPF_Parm )

void ATGWeap_AK47_B::KickBackTheView ( float KickBackUpBase, float KickBackLateralBase, float KickBackUpModifier, float KickBackLateralModifier, float KickBackUpMax, float KickBackLateralMax )
{
	static UFunction* pFnKickBackTheView = NULL;

	if ( ! pFnKickBackTheView )
		pFnKickBackTheView = (UFunction*) UObject::GObjObjects()->Data[ 173183 ];

	ATGWeap_AK47_B_execKickBackTheView_Parms KickBackTheView_Parms;
	KickBackTheView_Parms.KickBackUpBase = KickBackUpBase;
	KickBackTheView_Parms.KickBackLateralBase = KickBackLateralBase;
	KickBackTheView_Parms.KickBackUpModifier = KickBackUpModifier;
	KickBackTheView_Parms.KickBackLateralModifier = KickBackLateralModifier;
	KickBackTheView_Parms.KickBackUpMax = KickBackUpMax;
	KickBackTheView_Parms.KickBackLateralMax = KickBackLateralMax;

	this->ProcessEvent ( pFnKickBackTheView, &KickBackTheView_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47_B.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47_B::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173173 ];

	ATGWeap_AK47_B_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47_B.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47_B::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173171 ];

	ATGWeap_AK47_B_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47_B.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47_B::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173169 ];

	ATGWeap_AK47_B_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_Ak47_old.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_Ak47_old::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166191 ];

	UTGDmgType_Ak47_old_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_Ak47_old.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_Ak47_old::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173221 ];

	ATGWeap_Ak47_old_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_Ak47_old.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_Ak47_old::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173219 ];

	ATGWeap_Ak47_old_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_Ak47_old.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_Ak47_old::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173217 ];

	ATGWeap_Ak47_old_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AK47Diamond.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AK47Diamond::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166206 ];

	UTGDmgType_AK47Diamond_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47Diamond.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47Diamond::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173240 ];

	ATGWeap_AK47Diamond_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47Diamond.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47Diamond::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173238 ];

	ATGWeap_AK47Diamond_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47Diamond.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47Diamond::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173236 ];

	ATGWeap_AK47Diamond_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AK47GAI.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AK47GAI::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166221 ];

	UTGDmgType_AK47GAI_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47GAI.GetAdjustedAim
// [0x00820102] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartFireLoc                   ( CPF_Parm )

struct FRotator ATGWeap_AK47GAI::GetAdjustedAim ( struct FVector StartFireLoc )
{
	static UFunction* pFnGetAdjustedAim = NULL;

	if ( ! pFnGetAdjustedAim )
		pFnGetAdjustedAim = (UFunction*) UObject::GObjObjects()->Data[ 173298 ];

	ATGWeap_AK47GAI_execGetAdjustedAim_Parms GetAdjustedAim_Parms;
	memcpy ( &GetAdjustedAim_Parms.StartFireLoc, &StartFireLoc, 0xC );

	this->ProcessEvent ( pFnGetAdjustedAim, &GetAdjustedAim_Parms, NULL );

	return GetAdjustedAim_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_AK47GAI.WeaponCalcCamera
// [0x00C20102] 
// Parameters infos:
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )

void ATGWeap_AK47GAI::WeaponCalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot )
{
	static UFunction* pFnWeaponCalcCamera = NULL;

	if ( ! pFnWeaponCalcCamera )
		pFnWeaponCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 173291 ];

	ATGWeap_AK47GAI_execWeaponCalcCamera_Parms WeaponCalcCamera_Parms;
	WeaponCalcCamera_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnWeaponCalcCamera, &WeaponCalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &WeaponCalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &WeaponCalcCamera_Parms.out_CamRot, 0xC );
};

// Function TGWeapon.TGWeap_AK47GAI.KickBackTheView
// [0x00820102] 
// Parameters infos:
// float                          KickBackUpBase                 ( CPF_Parm )
// float                          KickBackLateralBase            ( CPF_Parm )
// float                          KickBackUpModifier             ( CPF_Parm )
// float                          KickBackLateralModifier        ( CPF_Parm )
// float                          KickBackUpMax                  ( CPF_Parm )
// float                          KickBackLateralMax             ( CPF_Parm )

void ATGWeap_AK47GAI::KickBackTheView ( float KickBackUpBase, float KickBackLateralBase, float KickBackUpModifier, float KickBackLateralModifier, float KickBackUpMax, float KickBackLateralMax )
{
	static UFunction* pFnKickBackTheView = NULL;

	if ( ! pFnKickBackTheView )
		pFnKickBackTheView = (UFunction*) UObject::GObjObjects()->Data[ 173275 ];

	ATGWeap_AK47GAI_execKickBackTheView_Parms KickBackTheView_Parms;
	KickBackTheView_Parms.KickBackUpBase = KickBackUpBase;
	KickBackTheView_Parms.KickBackLateralBase = KickBackLateralBase;
	KickBackTheView_Parms.KickBackUpModifier = KickBackUpModifier;
	KickBackTheView_Parms.KickBackLateralModifier = KickBackLateralModifier;
	KickBackTheView_Parms.KickBackUpMax = KickBackUpMax;
	KickBackTheView_Parms.KickBackLateralMax = KickBackLateralMax;

	this->ProcessEvent ( pFnKickBackTheView, &KickBackTheView_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47GAI.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47GAI::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173265 ];

	ATGWeap_AK47GAI_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47GAI.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47GAI::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173263 ];

	ATGWeap_AK47GAI_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47GAI.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47GAI::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173261 ];

	ATGWeap_AK47GAI_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AK47GOLD.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AK47GOLD::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166236 ];

	UTGDmgType_AK47GOLD_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47GOLD.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47GOLD::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173313 ];

	ATGWeap_AK47GOLD_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47GOLD.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47GOLD::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173311 ];

	ATGWeap_AK47GOLD_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47GOLD.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47GOLD::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173309 ];

	ATGWeap_AK47GOLD_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AK47GoldSword.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AK47GoldSword::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166251 ];

	UTGDmgType_AK47GoldSword_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47GoldSword.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47GoldSword::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173338 ];

	ATGWeap_AK47GoldSword_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47GoldSword.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47GoldSword::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173336 ];

	ATGWeap_AK47GoldSword_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47GoldSword.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47GoldSword::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173334 ];

	ATGWeap_AK47GoldSword_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AK47GoldSword2.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AK47GoldSword2::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166262 ];

	UTGDmgType_AK47GoldSword2_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AK47Member.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AK47Member::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166284 ];

	UTGDmgType_AK47Member_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47Member.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47Member::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173363 ];

	ATGWeap_AK47Member_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47Member.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47Member::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173361 ];

	ATGWeap_AK47Member_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47Member.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47Member::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173359 ];

	ATGWeap_AK47Member_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AK47Member2.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AK47Member2::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166295 ];

	UTGDmgType_AK47Member2_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AK47OET.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AK47OET::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166313 ];

	UTGDmgType_AK47OET_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47OET.GetAdjustedAim
// [0x00820102] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartFireLoc                   ( CPF_Parm )

struct FRotator ATGWeap_AK47OET::GetAdjustedAim ( struct FVector StartFireLoc )
{
	static UFunction* pFnGetAdjustedAim = NULL;

	if ( ! pFnGetAdjustedAim )
		pFnGetAdjustedAim = (UFunction*) UObject::GObjObjects()->Data[ 173421 ];

	ATGWeap_AK47OET_execGetAdjustedAim_Parms GetAdjustedAim_Parms;
	memcpy ( &GetAdjustedAim_Parms.StartFireLoc, &StartFireLoc, 0xC );

	this->ProcessEvent ( pFnGetAdjustedAim, &GetAdjustedAim_Parms, NULL );

	return GetAdjustedAim_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_AK47OET.WeaponCalcCamera
// [0x00C20102] 
// Parameters infos:
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )

void ATGWeap_AK47OET::WeaponCalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot )
{
	static UFunction* pFnWeaponCalcCamera = NULL;

	if ( ! pFnWeaponCalcCamera )
		pFnWeaponCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 173414 ];

	ATGWeap_AK47OET_execWeaponCalcCamera_Parms WeaponCalcCamera_Parms;
	WeaponCalcCamera_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnWeaponCalcCamera, &WeaponCalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &WeaponCalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &WeaponCalcCamera_Parms.out_CamRot, 0xC );
};

// Function TGWeapon.TGWeap_AK47OET.KickBackTheView
// [0x00820102] 
// Parameters infos:
// float                          KickBackUpBase                 ( CPF_Parm )
// float                          KickBackLateralBase            ( CPF_Parm )
// float                          KickBackUpModifier             ( CPF_Parm )
// float                          KickBackLateralModifier        ( CPF_Parm )
// float                          KickBackUpMax                  ( CPF_Parm )
// float                          KickBackLateralMax             ( CPF_Parm )

void ATGWeap_AK47OET::KickBackTheView ( float KickBackUpBase, float KickBackLateralBase, float KickBackUpModifier, float KickBackLateralModifier, float KickBackUpMax, float KickBackLateralMax )
{
	static UFunction* pFnKickBackTheView = NULL;

	if ( ! pFnKickBackTheView )
		pFnKickBackTheView = (UFunction*) UObject::GObjObjects()->Data[ 173398 ];

	ATGWeap_AK47OET_execKickBackTheView_Parms KickBackTheView_Parms;
	KickBackTheView_Parms.KickBackUpBase = KickBackUpBase;
	KickBackTheView_Parms.KickBackLateralBase = KickBackLateralBase;
	KickBackTheView_Parms.KickBackUpModifier = KickBackUpModifier;
	KickBackTheView_Parms.KickBackLateralModifier = KickBackLateralModifier;
	KickBackTheView_Parms.KickBackUpMax = KickBackUpMax;
	KickBackTheView_Parms.KickBackLateralMax = KickBackLateralMax;

	this->ProcessEvent ( pFnKickBackTheView, &KickBackTheView_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47OET.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47OET::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173388 ];

	ATGWeap_AK47OET_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47OET.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47OET::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173386 ];

	ATGWeap_AK47OET_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47OET.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47OET::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173384 ];

	ATGWeap_AK47OET_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AK47Rail.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AK47Rail::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166328 ];

	UTGDmgType_AK47Rail_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47Rail.GetAdjustedAim
// [0x00820102] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartFireLoc                   ( CPF_Parm )

struct FRotator ATGWeap_AK47Rail::GetAdjustedAim ( struct FVector StartFireLoc )
{
	static UFunction* pFnGetAdjustedAim = NULL;

	if ( ! pFnGetAdjustedAim )
		pFnGetAdjustedAim = (UFunction*) UObject::GObjObjects()->Data[ 173475 ];

	ATGWeap_AK47Rail_execGetAdjustedAim_Parms GetAdjustedAim_Parms;
	memcpy ( &GetAdjustedAim_Parms.StartFireLoc, &StartFireLoc, 0xC );

	this->ProcessEvent ( pFnGetAdjustedAim, &GetAdjustedAim_Parms, NULL );

	return GetAdjustedAim_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_AK47Rail.WeaponCalcCamera
// [0x00C20102] 
// Parameters infos:
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )

void ATGWeap_AK47Rail::WeaponCalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot )
{
	static UFunction* pFnWeaponCalcCamera = NULL;

	if ( ! pFnWeaponCalcCamera )
		pFnWeaponCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 173468 ];

	ATGWeap_AK47Rail_execWeaponCalcCamera_Parms WeaponCalcCamera_Parms;
	WeaponCalcCamera_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnWeaponCalcCamera, &WeaponCalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &WeaponCalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &WeaponCalcCamera_Parms.out_CamRot, 0xC );
};

// Function TGWeapon.TGWeap_AK47Rail.KickBackTheView
// [0x00820102] 
// Parameters infos:
// float                          KickBackUpBase                 ( CPF_Parm )
// float                          KickBackLateralBase            ( CPF_Parm )
// float                          KickBackUpModifier             ( CPF_Parm )
// float                          KickBackLateralModifier        ( CPF_Parm )
// float                          KickBackUpMax                  ( CPF_Parm )
// float                          KickBackLateralMax             ( CPF_Parm )

void ATGWeap_AK47Rail::KickBackTheView ( float KickBackUpBase, float KickBackLateralBase, float KickBackUpModifier, float KickBackLateralModifier, float KickBackUpMax, float KickBackLateralMax )
{
	static UFunction* pFnKickBackTheView = NULL;

	if ( ! pFnKickBackTheView )
		pFnKickBackTheView = (UFunction*) UObject::GObjObjects()->Data[ 173452 ];

	ATGWeap_AK47Rail_execKickBackTheView_Parms KickBackTheView_Parms;
	KickBackTheView_Parms.KickBackUpBase = KickBackUpBase;
	KickBackTheView_Parms.KickBackLateralBase = KickBackLateralBase;
	KickBackTheView_Parms.KickBackUpModifier = KickBackUpModifier;
	KickBackTheView_Parms.KickBackLateralModifier = KickBackLateralModifier;
	KickBackTheView_Parms.KickBackUpMax = KickBackUpMax;
	KickBackTheView_Parms.KickBackLateralMax = KickBackLateralMax;

	this->ProcessEvent ( pFnKickBackTheView, &KickBackTheView_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47Rail.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47Rail::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173442 ];

	ATGWeap_AK47Rail_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47Rail.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47Rail::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173440 ];

	ATGWeap_AK47Rail_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47Rail.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47Rail::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173438 ];

	ATGWeap_AK47Rail_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AK47Sword.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AK47Sword::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166343 ];

	UTGDmgType_AK47Sword_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47Sword.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47Sword::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173496 ];

	ATGWeap_AK47Sword_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47Sword.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47Sword::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173494 ];

	ATGWeap_AK47Sword_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47Sword.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47Sword::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173492 ];

	ATGWeap_AK47Sword_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AK47Sword2.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AK47Sword2::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166354 ];

	UTGDmgType_AK47Sword2_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AK47SwordII.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AK47SwordII::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166372 ];

	UTGDmgType_AK47SwordII_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47SwordII.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47SwordII::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173521 ];

	ATGWeap_AK47SwordII_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47SwordII.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47SwordII::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173519 ];

	ATGWeap_AK47SwordII_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK47SwordII.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK47SwordII::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173517 ];

	ATGWeap_AK47SwordII_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AK47SwordII2.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AK47SwordII2::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166383 ];

	UTGDmgType_AK47SwordII2_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AK74.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AK74::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166401 ];

	UTGDmgType_AK74_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK74.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK74::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173540 ];

	ATGWeap_AK74_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK74.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK74::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173538 ];

	ATGWeap_AK74_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK74.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK74::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173536 ];

	ATGWeap_AK74_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AK74U.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AK74U::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166416 ];

	UTGDmgType_AK74U_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK74U.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK74U::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173559 ];

	ATGWeap_AK74U_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK74U.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK74U::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173557 ];

	ATGWeap_AK74U_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK74U.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK74U::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173555 ];

	ATGWeap_AK74U_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AK74U_KOS.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AK74U_KOS::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166427 ];

	UTGDmgType_AK74U_KOS_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK74U_KOS.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK74U_KOS::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173578 ];

	ATGWeap_AK74U_KOS_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK74U_KOS.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK74U_KOS::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173576 ];

	ATGWeap_AK74U_KOS_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK74U_KOS.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK74U_KOS::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173574 ];

	ATGWeap_AK74U_KOS_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AK74Udust.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AK74Udust::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166442 ];

	UTGDmgType_AK74Udust_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK74Udust.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK74Udust::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173597 ];

	ATGWeap_AK74Udust_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK74Udust.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK74Udust::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173595 ];

	ATGWeap_AK74Udust_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AK74Udust.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AK74Udust::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173593 ];

	ATGWeap_AK74Udust_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AN94.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AN94::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166461 ];

	UTGDmgType_AN94_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AN94.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AN94::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173616 ];

	ATGWeap_AN94_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AN94.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AN94::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173614 ];

	ATGWeap_AN94_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AN94.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AN94::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173612 ];

	ATGWeap_AN94_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AR15.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AR15::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166476 ];

	UTGDmgType_AR15_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173635 ];

	ATGWeap_AR15_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173633 ];

	ATGWeap_AR15_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173631 ];

	ATGWeap_AR15_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AR15_KOS.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AR15_KOS::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166487 ];

	UTGDmgType_AR15_KOS_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15_KOS.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15_KOS::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173654 ];

	ATGWeap_AR15_KOS_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15_KOS.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15_KOS::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173652 ];

	ATGWeap_AR15_KOS_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15_KOS.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15_KOS::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173650 ];

	ATGWeap_AR15_KOS_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AR15_mend.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AR15_mend::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166502 ];

	UTGDmgType_AR15_mend_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15_mend.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15_mend::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173673 ];

	ATGWeap_AR15_mend_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15_mend.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15_mend::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173671 ];

	ATGWeap_AR15_mend_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15_mend.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15_mend::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173669 ];

	ATGWeap_AR15_mend_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AR15_mendSilver.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AR15_mendSilver::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166517 ];

	UTGDmgType_AR15_mendSilver_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15_mendSilver.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15_mendSilver::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173692 ];

	ATGWeap_AR15_mendSilver_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15_mendSilver.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15_mendSilver::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173690 ];

	ATGWeap_AR15_mendSilver_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15_mendSilver.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15_mendSilver::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173688 ];

	ATGWeap_AR15_mendSilver_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AR15_Xmas.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AR15_Xmas::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166532 ];

	UTGDmgType_AR15_Xmas_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15_Xmas.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15_Xmas::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173708 ];

	ATGWeap_AR15_Xmas_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15_Xmas.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15_Xmas::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173706 ];

	ATGWeap_AR15_Xmas_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AR15GAI.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AR15GAI::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166547 ];

	UTGDmgType_AR15GAI_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15GAI.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15GAI::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173727 ];

	ATGWeap_AR15GAI_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15GAI.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15GAI::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173725 ];

	ATGWeap_AR15GAI_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15GAI.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15GAI::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173723 ];

	ATGWeap_AR15GAI_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AR15gold.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AR15gold::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166562 ];

	UTGDmgType_AR15gold_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15gold.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15gold::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173746 ];

	ATGWeap_AR15gold_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15gold.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15gold::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173744 ];

	ATGWeap_AR15gold_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15gold.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15gold::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173742 ];

	ATGWeap_AR15gold_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AR15OET.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AR15OET::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166581 ];

	UTGDmgType_AR15OET_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15OET.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15OET::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173765 ];

	ATGWeap_AR15OET_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15OET.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15OET::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173763 ];

	ATGWeap_AR15OET_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15OET.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15OET::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173761 ];

	ATGWeap_AR15OET_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AR15QT.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AR15QT::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166596 ];

	UTGDmgType_AR15QT_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15QT.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15QT::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173784 ];

	ATGWeap_AR15QT_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15QT.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15QT::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173782 ];

	ATGWeap_AR15QT_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15QT.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15QT::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173780 ];

	ATGWeap_AR15QT_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AR15Snake.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AR15Snake::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166611 ];

	UTGDmgType_AR15Snake_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15Snake.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15Snake::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173803 ];

	ATGWeap_AR15Snake_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15Snake.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15Snake::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 173801 ];

	ATGWeap_AR15Snake_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_AR15Snake.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AR15Snake::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173799 ];

	ATGWeap_AR15Snake_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_ArrowExplosion.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_ArrowExplosion::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166630 ];

	UTGDmgType_ArrowExplosion_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_ArrowExplosion.VehicleDamageScalingFor
// [0x00022002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AVehicle*                V                              ( CPF_Parm )

float UTGDmgType_ArrowExplosion::VehicleDamageScalingFor ( class AVehicle* V )
{
	static UFunction* pFnVehicleDamageScalingFor = NULL;

	if ( ! pFnVehicleDamageScalingFor )
		pFnVehicleDamageScalingFor = (UFunction*) UObject::GObjObjects()->Data[ 166627 ];

	UTGDmgType_ArrowExplosion_execVehicleDamageScalingFor_Parms VehicleDamageScalingFor_Parms;
	VehicleDamageScalingFor_Parms.V = V;

	this->ProcessEvent ( pFnVehicleDamageScalingFor, &VehicleDamageScalingFor_Parms, NULL );

	return VehicleDamageScalingFor_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_Bow.SetDamageScale
// [0x00024002] 
// Parameters infos:
// float                          InDamageScale                  ( CPF_Parm )
// unsigned long                  bIsSpecial                     ( CPF_OptionalParm | CPF_Parm )

void ATGWeap_Bow::SetDamageScale ( float InDamageScale, unsigned long bIsSpecial )
{
	static UFunction* pFnSetDamageScale = NULL;

	if ( ! pFnSetDamageScale )
		pFnSetDamageScale = (UFunction*) UObject::GObjObjects()->Data[ 174039 ];

	ATGWeap_Bow_execSetDamageScale_Parms SetDamageScale_Parms;
	SetDamageScale_Parms.InDamageScale = InDamageScale;
	SetDamageScale_Parms.bIsSpecial = bIsSpecial;

	this->ProcessEvent ( pFnSetDamageScale, &SetDamageScale_Parms, NULL );
};

// Function TGWeapon.TGWeap_Bow.LimitGroundSpeed
// [0x00020102] 
// Parameters infos:

void ATGWeap_Bow::LimitGroundSpeed ( )
{
	static UFunction* pFnLimitGroundSpeed = NULL;

	if ( ! pFnLimitGroundSpeed )
		pFnLimitGroundSpeed = (UFunction*) UObject::GObjObjects()->Data[ 174037 ];

	ATGWeap_Bow_execLimitGroundSpeed_Parms LimitGroundSpeed_Parms;

	this->ProcessEvent ( pFnLimitGroundSpeed, &LimitGroundSpeed_Parms, NULL );
};

// Function TGWeapon.TGWeap_Bow.DrawSpeicalBowCrosshair
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGWeap_Bow::DrawSpeicalBowCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawSpeicalBowCrosshair = NULL;

	if ( ! pFnDrawSpeicalBowCrosshair )
		pFnDrawSpeicalBowCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 174030 ];

	ATGWeap_Bow_execDrawSpeicalBowCrosshair_Parms DrawSpeicalBowCrosshair_Parms;
	DrawSpeicalBowCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawSpeicalBowCrosshair, &DrawSpeicalBowCrosshair_Parms, NULL );
};

// Function TGWeapon.TGWeap_Bow.DrawWeaponCrosshair
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGWeap_Bow::DrawWeaponCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshair = NULL;

	if ( ! pFnDrawWeaponCrosshair )
		pFnDrawWeaponCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 174028 ];

	ATGWeap_Bow_execDrawWeaponCrosshair_Parms DrawWeaponCrosshair_Parms;
	DrawWeaponCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshair, &DrawWeaponCrosshair_Parms, NULL );
};

// Function TGWeapon.TGWeap_Bow.DisplaySpecial
// [0x00820102] 
// Parameters infos:
// class UCanvas*                 LocalCavas                     ( CPF_Parm )

void ATGWeap_Bow::DisplaySpecial ( class UCanvas* LocalCavas )
{
	static UFunction* pFnDisplaySpecial = NULL;

	if ( ! pFnDisplaySpecial )
		pFnDisplaySpecial = (UFunction*) UObject::GObjObjects()->Data[ 174024 ];

	ATGWeap_Bow_execDisplaySpecial_Parms DisplaySpecial_Parms;
	DisplaySpecial_Parms.LocalCavas = LocalCavas;

	this->ProcessEvent ( pFnDisplaySpecial, &DisplaySpecial_Parms, NULL );
};

// Function TGWeapon.TGWeap_Bow.ClientFullAmmo
// [0x010201C2] 
// Parameters infos:

void ATGWeap_Bow::ClientFullAmmo ( )
{
	static UFunction* pFnClientFullAmmo = NULL;

	if ( ! pFnClientFullAmmo )
		pFnClientFullAmmo = (UFunction*) UObject::GObjObjects()->Data[ 174023 ];

	ATGWeap_Bow_execClientFullAmmo_Parms ClientFullAmmo_Parms;

	this->ProcessEvent ( pFnClientFullAmmo, &ClientFullAmmo_Parms, NULL );
};

// Function TGWeapon.TGWeap_Bow.GetPhysicalFireStartLoc
// [0x00824102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 AimDir                         ( CPF_OptionalParm | CPF_Parm )

struct FVector ATGWeap_Bow::GetPhysicalFireStartLoc ( struct FVector AimDir )
{
	static UFunction* pFnGetPhysicalFireStartLoc = NULL;

	if ( ! pFnGetPhysicalFireStartLoc )
		pFnGetPhysicalFireStartLoc = (UFunction*) UObject::GObjObjects()->Data[ 174009 ];

	ATGWeap_Bow_execGetPhysicalFireStartLoc_Parms GetPhysicalFireStartLoc_Parms;
	memcpy ( &GetPhysicalFireStartLoc_Parms.AimDir, &AimDir, 0xC );

	this->ProcessEvent ( pFnGetPhysicalFireStartLoc, &GetPhysicalFireStartLoc_Parms, NULL );

	return GetPhysicalFireStartLoc_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_Bow.ProjectileFireValidation
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          LocalClientTime                ( CPF_Parm )

bool ATGWeap_Bow::ProjectileFireValidation ( float LocalClientTime )
{
	static UFunction* pFnProjectileFireValidation = NULL;

	if ( ! pFnProjectileFireValidation )
		pFnProjectileFireValidation = (UFunction*) UObject::GObjObjects()->Data[ 174006 ];

	ATGWeap_Bow_execProjectileFireValidation_Parms ProjectileFireValidation_Parms;
	ProjectileFireValidation_Parms.LocalClientTime = LocalClientTime;

	this->ProcessEvent ( pFnProjectileFireValidation, &ProjectileFireValidation_Parms, NULL );

	return ProjectileFireValidation_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_Bow.ServerThrowGrenade
// [0x002200C2] 
// Parameters infos:
// float                          LocalClientTime                ( CPF_Parm )
// float                          BentRate                       ( CPF_Parm )
// struct FName                   InputName                      ( CPF_Parm )

void ATGWeap_Bow::ServerThrowGrenade ( float LocalClientTime, float BentRate, struct FName InputName )
{
	static UFunction* pFnServerThrowGrenade = NULL;

	if ( ! pFnServerThrowGrenade )
		pFnServerThrowGrenade = (UFunction*) UObject::GObjObjects()->Data[ 174002 ];

	ATGWeap_Bow_execServerThrowGrenade_Parms ServerThrowGrenade_Parms;
	ServerThrowGrenade_Parms.LocalClientTime = LocalClientTime;
	ServerThrowGrenade_Parms.BentRate = BentRate;
	memcpy ( &ServerThrowGrenade_Parms.InputName, &InputName, 0x8 );

	this->ProcessEvent ( pFnServerThrowGrenade, &ServerThrowGrenade_Parms, NULL );
};

// Function TGWeapon.TGWeap_Bow.SpawnAnArrow
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGWeap_Bow::SpawnAnArrow ( )
{
	static UFunction* pFnSpawnAnArrow = NULL;

	if ( ! pFnSpawnAnArrow )
		pFnSpawnAnArrow = (UFunction*) UObject::GObjObjects()->Data[ 173996 ];

	ATGWeap_Bow_execSpawnAnArrow_Parms SpawnAnArrow_Parms;

	this->ProcessEvent ( pFnSpawnAnArrow, &SpawnAnArrow_Parms, NULL );

	return SpawnAnArrow_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_Bow.ProjectileFire
// [0x00020102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGWeap_Bow::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 173992 ];

	ATGWeap_Bow_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_Bow.PlayArrowShootingEffect
// [0x00020102] 
// Parameters infos:

void ATGWeap_Bow::PlayArrowShootingEffect ( )
{
	static UFunction* pFnPlayArrowShootingEffect = NULL;

	if ( ! pFnPlayArrowShootingEffect )
		pFnPlayArrowShootingEffect = (UFunction*) UObject::GObjObjects()->Data[ 173989 ];

	ATGWeap_Bow_execPlayArrowShootingEffect_Parms PlayArrowShootingEffect_Parms;

	this->ProcessEvent ( pFnPlayArrowShootingEffect, &PlayArrowShootingEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_Bow.ServerQuitChargingState
// [0x002200C2] 
// Parameters infos:

void ATGWeap_Bow::ServerQuitChargingState ( )
{
	static UFunction* pFnServerQuitChargingState = NULL;

	if ( ! pFnServerQuitChargingState )
		pFnServerQuitChargingState = (UFunction*) UObject::GObjObjects()->Data[ 173988 ];

	ATGWeap_Bow_execServerQuitChargingState_Parms ServerQuitChargingState_Parms;

	this->ProcessEvent ( pFnServerQuitChargingState, &ServerQuitChargingState_Parms, NULL );
};

// Function TGWeapon.TGWeap_Bow.ServerEnterChargingState
// [0x002200C2] 
// Parameters infos:

void ATGWeap_Bow::ServerEnterChargingState ( )
{
	static UFunction* pFnServerEnterChargingState = NULL;

	if ( ! pFnServerEnterChargingState )
		pFnServerEnterChargingState = (UFunction*) UObject::GObjObjects()->Data[ 173987 ];

	ATGWeap_Bow_execServerEnterChargingState_Parms ServerEnterChargingState_Parms;

	this->ProcessEvent ( pFnServerEnterChargingState, &ServerEnterChargingState_Parms, NULL );
};

// Function TGWeapon.TGWeap_Bow.TimeWeaponClipChanging
// [0x00020102] 
// Parameters infos:

void ATGWeap_Bow::TimeWeaponClipChanging ( )
{
	static UFunction* pFnTimeWeaponClipChanging = NULL;

	if ( ! pFnTimeWeaponClipChanging )
		pFnTimeWeaponClipChanging = (UFunction*) UObject::GObjObjects()->Data[ 173975 ];

	ATGWeap_Bow_execTimeWeaponClipChanging_Parms TimeWeaponClipChanging_Parms;

	this->ProcessEvent ( pFnTimeWeaponClipChanging, &TimeWeaponClipChanging_Parms, NULL );
};

// Function TGWeapon.TGWeap_Bow.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_Bow::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173971 ];

	ATGWeap_Bow_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_Arx160.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_Arx160::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166649 ];

	UTGDmgType_Arx160_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_Arx160.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_Arx160::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173819 ];

	ATGWeap_Arx160_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_Arx160.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_Arx160::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173817 ];

	ATGWeap_Arx160_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_ASW338lm.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_ASW338lm::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166664 ];

	UTGDmgType_ASW338lm_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AUG.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AUG::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166679 ];

	UTGDmgType_AUG_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AUG.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AUG::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173839 ];

	ATGWeap_AUG_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AUG.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AUG::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173837 ];

	ATGWeap_AUG_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AUGA3.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AUGA3::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166690 ];

	UTGDmgType_AUGA3_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AUGGAI.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AUGGAI::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166709 ];

	UTGDmgType_AUGGAI_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_AUGGAI.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_AUGGAI::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 173862 ];

	ATGWeap_AUGGAI_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_AUGGAI.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_AUGGAI::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 173860 ];

	ATGWeap_AUGGAI_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AWM.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AWM::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166728 ];

	UTGDmgType_AWM_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AWM_AP.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AWM_AP::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166739 ];

	UTGDmgType_AWM_AP_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AWM_Mag.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AWM_Mag::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166754 ];

	UTGDmgType_AWM_Mag_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AWM_old.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AWM_old::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166769 ];

	UTGDmgType_AWM_old_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AWM_SSM.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AWM_SSM::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166784 ];

	UTGDmgType_AWM_SSM_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AWM_star.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AWM_star::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166799 ];

	UTGDmgType_AWM_star_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AWM_TAM.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AWM_TAM::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166814 ];

	UTGDmgType_AWM_TAM_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AWM_TGAI.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AWM_TGAI::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166829 ];

	UTGDmgType_AWM_TGAI_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AWM_Thermal.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AWM_Thermal::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166844 ];

	UTGDmgType_AWM_Thermal_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AWMGAI.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AWMGAI::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166859 ];

	UTGDmgType_AWMGAI_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AWMGOLD.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AWMGOLD::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166874 ];

	UTGDmgType_AWMGOLD_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AWMOET.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AWMOET::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166893 ];

	UTGDmgType_AWMOET_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AWMs_Copper.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AWMs_Copper::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166908 ];

	UTGDmgType_AWMs_Copper_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AWMs_Gold.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AWMs_Gold::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166923 ];

	UTGDmgType_AWMs_Gold_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_AWMs_Silver.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_AWMs_Silver::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166938 ];

	UTGDmgType_AWMs_Silver_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_BoxGlove.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_BoxGlove::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166953 ];

	UTGDmgType_BoxGlove_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_BoxGlove_PHL.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_BoxGlove_PHL::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166964 ];

	UTGDmgType_BoxGlove_PHL_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_BoxGlove_XD.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_BoxGlove_XD::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 166979 ];

	UTGDmgType_BoxGlove_XD_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_Candy_Grenade.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGWeap_Candy_Grenade::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 174058 ];

	ATGWeap_Candy_Grenade_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_ChristGrenade.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGWeap_ChristGrenade::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 174067 ];

	ATGWeap_ChristGrenade_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGWeapon.TGDmgType_Colt1873.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_Colt1873::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167008 ];

	UTGDmgType_Colt1873_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_Colt1873.DetachWeapon
// [0x00020102] 
// Parameters infos:

void ATGWeap_Colt1873::DetachWeapon ( )
{
	static UFunction* pFnDetachWeapon = NULL;

	if ( ! pFnDetachWeapon )
		pFnDetachWeapon = (UFunction*) UObject::GObjObjects()->Data[ 174090 ];

	ATGWeap_Colt1873_execDetachWeapon_Parms DetachWeapon_Parms;

	this->ProcessEvent ( pFnDetachWeapon, &DetachWeapon_Parms, NULL );
};

// Function TGWeapon.TGWeap_Colt1873.PlayReadyAnimation
// [0x00020102] 
// Parameters infos:

void ATGWeap_Colt1873::PlayReadyAnimation ( )
{
	static UFunction* pFnPlayReadyAnimation = NULL;

	if ( ! pFnPlayReadyAnimation )
		pFnPlayReadyAnimation = (UFunction*) UObject::GObjObjects()->Data[ 174087 ];

	ATGWeap_Colt1873_execPlayReadyAnimation_Parms PlayReadyAnimation_Parms;

	this->ProcessEvent ( pFnPlayReadyAnimation, &PlayReadyAnimation_Parms, NULL );
};

// Function TGWeapon.TGWeap_Colt1873.GetWeaponModeReadableName
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ATGWeap_Colt1873::GetWeaponModeReadableName ( )
{
	static UFunction* pFnGetWeaponModeReadableName = NULL;

	if ( ! pFnGetWeaponModeReadableName )
		pFnGetWeaponModeReadableName = (UFunction*) UObject::GObjObjects()->Data[ 174085 ];

	ATGWeap_Colt1873_execGetWeaponModeReadableName_Parms GetWeaponModeReadableName_Parms;

	this->ProcessEvent ( pFnGetWeaponModeReadableName, &GetWeaponModeReadableName_Parms, NULL );

	return GetWeaponModeReadableName_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_Colt1873.StartFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGWeap_Colt1873::StartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 174080 ];

	ATGWeap_Colt1873_execStartFire_Parms StartFire_Parms;
	StartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function TGWeapon.TGDmgType_CompoundBow.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_CompoundBow::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167023 ];

	UTGDmgType_CompoundBow_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_Cracker.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGWeap_Cracker::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 174108 ];

	ATGWeap_Cracker_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_CrossBow.FullAmmo
// [0x00020102] 
// Parameters infos:

void ATGWeap_CrossBow::FullAmmo ( )
{
	static UFunction* pFnFullAmmo = NULL;

	if ( ! pFnFullAmmo )
		pFnFullAmmo = (UFunction*) UObject::GObjObjects()->Data[ 174227 ];

	ATGWeap_CrossBow_execFullAmmo_Parms FullAmmo_Parms;

	this->ProcessEvent ( pFnFullAmmo, &FullAmmo_Parms, NULL );
};

// Function TGWeapon.TGWeap_CrossBow.SetDamageScale
// [0x00024002] 
// Parameters infos:
// float                          InDamageScale                  ( CPF_Parm )
// unsigned long                  bIsSpecial                     ( CPF_OptionalParm | CPF_Parm )

void ATGWeap_CrossBow::SetDamageScale ( float InDamageScale, unsigned long bIsSpecial )
{
	static UFunction* pFnSetDamageScale = NULL;

	if ( ! pFnSetDamageScale )
		pFnSetDamageScale = (UFunction*) UObject::GObjObjects()->Data[ 174224 ];

	ATGWeap_CrossBow_execSetDamageScale_Parms SetDamageScale_Parms;
	SetDamageScale_Parms.InDamageScale = InDamageScale;
	SetDamageScale_Parms.bIsSpecial = bIsSpecial;

	this->ProcessEvent ( pFnSetDamageScale, &SetDamageScale_Parms, NULL );
};

// Function TGWeapon.TGWeap_CrossBow.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_CrossBow::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 174222 ];

	ATGWeap_CrossBow_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGWeap_CrossBow.ClientStartZoom
// [0x00020102] 
// Parameters infos:
// class AUTPlayerController*     PC                             ( CPF_Parm )

void ATGWeap_CrossBow::ClientStartZoom ( class AUTPlayerController* PC )
{
	static UFunction* pFnClientStartZoom = NULL;

	if ( ! pFnClientStartZoom )
		pFnClientStartZoom = (UFunction*) UObject::GObjObjects()->Data[ 174220 ];

	ATGWeap_CrossBow_execClientStartZoom_Parms ClientStartZoom_Parms;
	ClientStartZoom_Parms.PC = PC;

	this->ProcessEvent ( pFnClientStartZoom, &ClientStartZoom_Parms, NULL );
};

// Function TGWeapon.TGWeap_CrossBow.ServerStartZoom
// [0x002200C2] 
// Parameters infos:
// class AUTPlayerController*     PC                             ( CPF_Parm )

void ATGWeap_CrossBow::ServerStartZoom ( class AUTPlayerController* PC )
{
	static UFunction* pFnServerStartZoom = NULL;

	if ( ! pFnServerStartZoom )
		pFnServerStartZoom = (UFunction*) UObject::GObjObjects()->Data[ 174218 ];

	ATGWeap_CrossBow_execServerStartZoom_Parms ServerStartZoom_Parms;
	ServerStartZoom_Parms.PC = PC;

	this->ProcessEvent ( pFnServerStartZoom, &ServerStartZoom_Parms, NULL );
};

// Function TGWeapon.TGWeap_CrossBow.Gotozoom
// [0x00020102] 
// Parameters infos:

void ATGWeap_CrossBow::Gotozoom ( )
{
	static UFunction* pFnGotozoom = NULL;

	if ( ! pFnGotozoom )
		pFnGotozoom = (UFunction*) UObject::GObjObjects()->Data[ 174215 ];

	ATGWeap_CrossBow_execGotozoom_Parms Gotozoom_Parms;

	this->ProcessEvent ( pFnGotozoom, &Gotozoom_Parms, NULL );
};

// Function TGWeapon.TGWeap_CrossBow.DrawBigCrossHair
// [0x00820102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGWeap_CrossBow::DrawBigCrossHair ( class AHUD* HUD )
{
	static UFunction* pFnDrawBigCrossHair = NULL;

	if ( ! pFnDrawBigCrossHair )
		pFnDrawBigCrossHair = (UFunction*) UObject::GObjObjects()->Data[ 174185 ];

	ATGWeap_CrossBow_execDrawBigCrossHair_Parms DrawBigCrossHair_Parms;
	DrawBigCrossHair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawBigCrossHair, &DrawBigCrossHair_Parms, NULL );
};

// Function TGWeapon.TGWeap_CrossBow.DrawWeaponCrosshair
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGWeap_CrossBow::DrawWeaponCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshair = NULL;

	if ( ! pFnDrawWeaponCrosshair )
		pFnDrawWeaponCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 174182 ];

	ATGWeap_CrossBow_execDrawWeaponCrosshair_Parms DrawWeaponCrosshair_Parms;
	DrawWeaponCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshair, &DrawWeaponCrosshair_Parms, NULL );
};

// Function TGWeapon.TGWeap_CrossBow.CreateProjectileVelocityOffest
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ATGWeap_CrossBow::CreateProjectileVelocityOffest ( )
{
	static UFunction* pFnCreateProjectileVelocityOffest = NULL;

	if ( ! pFnCreateProjectileVelocityOffest )
		pFnCreateProjectileVelocityOffest = (UFunction*) UObject::GObjObjects()->Data[ 174179 ];

	ATGWeap_CrossBow_execCreateProjectileVelocityOffest_Parms CreateProjectileVelocityOffest_Parms;

	this->ProcessEvent ( pFnCreateProjectileVelocityOffest, &CreateProjectileVelocityOffest_Parms, NULL );

	return CreateProjectileVelocityOffest_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_CrossBow.ServerThrowGrenade
// [0x002200C2] 
// Parameters infos:
// float                          LocalClientTime                ( CPF_Parm )

void ATGWeap_CrossBow::ServerThrowGrenade ( float LocalClientTime )
{
	static UFunction* pFnServerThrowGrenade = NULL;

	if ( ! pFnServerThrowGrenade )
		pFnServerThrowGrenade = (UFunction*) UObject::GObjObjects()->Data[ 174177 ];

	ATGWeap_CrossBow_execServerThrowGrenade_Parms ServerThrowGrenade_Parms;
	ServerThrowGrenade_Parms.LocalClientTime = LocalClientTime;

	this->ProcessEvent ( pFnServerThrowGrenade, &ServerThrowGrenade_Parms, NULL );
};

// Function TGWeapon.TGWeap_CrossBow.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGWeap_CrossBow::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 174170 ];

	ATGWeap_CrossBow_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_CrossBow.BackZoom
// [0x00020100] 
// Parameters infos:

void ATGWeap_CrossBow::BackZoom ( )
{
	static UFunction* pFnBackZoom = NULL;

	if ( ! pFnBackZoom )
		pFnBackZoom = (UFunction*) UObject::GObjObjects()->Data[ 174163 ];

	ATGWeap_CrossBow_execBackZoom_Parms BackZoom_Parms;

	this->ProcessEvent ( pFnBackZoom, &BackZoom_Parms, NULL );
};

// Function TGWeapon.TGWeap_CrossBow.InstantFire
// [0x00020102] 
// Parameters infos:

void ATGWeap_CrossBow::InstantFire ( )
{
	static UFunction* pFnInstantFire = NULL;

	if ( ! pFnInstantFire )
		pFnInstantFire = (UFunction*) UObject::GObjObjects()->Data[ 174156 ];

	ATGWeap_CrossBow_execInstantFire_Parms InstantFire_Parms;

	this->ProcessEvent ( pFnInstantFire, &InstantFire_Parms, NULL );
};

// Function TGWeapon.TGDmgType_CrossBowArrow.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_CrossBowArrow::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167056 ];

	UTGDmgType_CrossBowArrow_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_CrossBowArrow.VehicleDamageScalingFor
// [0x00022002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AVehicle*                V                              ( CPF_Parm )

float UTGDmgType_CrossBowArrow::VehicleDamageScalingFor ( class AVehicle* V )
{
	static UFunction* pFnVehicleDamageScalingFor = NULL;

	if ( ! pFnVehicleDamageScalingFor )
		pFnVehicleDamageScalingFor = (UFunction*) UObject::GObjObjects()->Data[ 167053 ];

	UTGDmgType_CrossBowArrow_execVehicleDamageScalingFor_Parms VehicleDamageScalingFor_Parms;
	VehicleDamageScalingFor_Parms.V = V;

	this->ProcessEvent ( pFnVehicleDamageScalingFor, &VehicleDamageScalingFor_Parms, NULL );

	return VehicleDamageScalingFor_Parms.ReturnValue;
};

// Function TGWeapon.TGDmgType_CSLR4.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_CSLR4::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167066 ];

	UTGDmgType_CSLR4_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_DE_A.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_DE_A::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167081 ];

	UTGDmgType_DE_A_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_DE_D.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_DE_D::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167096 ];

	UTGDmgType_DE_D_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_DE_D.CauseShellDrop
// [0x00820102] 
// Parameters infos:

void ATGWeap_DE_D::CauseShellDrop ( )
{
	static UFunction* pFnCauseShellDrop = NULL;

	if ( ! pFnCauseShellDrop )
		pFnCauseShellDrop = (UFunction*) UObject::GObjObjects()->Data[ 174261 ];

	ATGWeap_DE_D_execCauseShellDrop_Parms CauseShellDrop_Parms;

	this->ProcessEvent ( pFnCauseShellDrop, &CauseShellDrop_Parms, NULL );
};

// Function TGWeapon.TGWeap_DE_D.CauseMuzzleFlashLight
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_DE_D::eventCauseMuzzleFlashLight ( )
{
	static UFunction* pFnCauseMuzzleFlashLight = NULL;

	if ( ! pFnCauseMuzzleFlashLight )
		pFnCauseMuzzleFlashLight = (UFunction*) UObject::GObjObjects()->Data[ 174260 ];

	ATGWeap_DE_D_eventCauseMuzzleFlashLight_Parms CauseMuzzleFlashLight_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlashLight, &CauseMuzzleFlashLight_Parms, NULL );
};

// Function TGWeapon.TGWeap_DE_D.AttachMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGWeap_DE_D::AttachMuzzleFlash ( )
{
	static UFunction* pFnAttachMuzzleFlash = NULL;

	if ( ! pFnAttachMuzzleFlash )
		pFnAttachMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 174258 ];

	ATGWeap_DE_D_execAttachMuzzleFlash_Parms AttachMuzzleFlash_Parms;

	this->ProcessEvent ( pFnAttachMuzzleFlash, &AttachMuzzleFlash_Parms, NULL );
};

// Function TGWeapon.TGWeap_DE_D.MuzzleFlashTimer02
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_DE_D::eventMuzzleFlashTimer02 ( )
{
	static UFunction* pFnMuzzleFlashTimer02 = NULL;

	if ( ! pFnMuzzleFlashTimer02 )
		pFnMuzzleFlashTimer02 = (UFunction*) UObject::GObjObjects()->Data[ 174257 ];

	ATGWeap_DE_D_eventMuzzleFlashTimer02_Parms MuzzleFlashTimer02_Parms;

	this->ProcessEvent ( pFnMuzzleFlashTimer02, &MuzzleFlashTimer02_Parms, NULL );
};

// Function TGWeapon.TGWeap_DE_D.CauseMuzzleFlash
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_DE_D::eventCauseMuzzleFlash ( )
{
	static UFunction* pFnCauseMuzzleFlash = NULL;

	if ( ! pFnCauseMuzzleFlash )
		pFnCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 174254 ];

	ATGWeap_DE_D_eventCauseMuzzleFlash_Parms CauseMuzzleFlash_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlash, &CauseMuzzleFlash_Parms, NULL );
};

// Function TGWeapon.TGWeap_DE_D.PlayFireEffects
// [0x00024102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void ATGWeap_DE_D::PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation )
{
	static UFunction* pFnPlayFireEffects = NULL;

	if ( ! pFnPlayFireEffects )
		pFnPlayFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 174249 ];

	ATGWeap_DE_D_execPlayFireEffects_Parms PlayFireEffects_Parms;
	PlayFireEffects_Parms.FireModeNum = FireModeNum;
	memcpy ( &PlayFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayFireEffects, &PlayFireEffects_Parms, NULL );
};

// Function TGWeapon.TGDmgType_DE_G.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_DE_G::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167111 ];

	UTGDmgType_DE_G_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_DEgame.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_DEgame::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167126 ];

	UTGDmgType_DEgame_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_DEgold.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_DEgold::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167141 ];

	UTGDmgType_DEgold_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_DEQT.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_DEQT::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167156 ];

	UTGDmgType_DEQT_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_DesertEagle.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_DesertEagle::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167171 ];

	UTGDmgType_DesertEagle_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_DESnake.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_DESnake::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167186 ];

	UTGDmgType_DESnake_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_DSR1.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_DSR1::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167201 ];

	UTGDmgType_DSR1_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_F2000.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_F2000::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167216 ];

	UTGDmgType_F2000_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_F2000.DrawZoomedOverlay
// [0x00020102] 
// Parameters infos:
// class AHUD*                    H                              ( CPF_Parm )

void ATGWeap_F2000::DrawZoomedOverlay ( class AHUD* H )
{
	static UFunction* pFnDrawZoomedOverlay = NULL;

	if ( ! pFnDrawZoomedOverlay )
		pFnDrawZoomedOverlay = (UFunction*) UObject::GObjObjects()->Data[ 174402 ];

	ATGWeap_F2000_execDrawZoomedOverlay_Parms DrawZoomedOverlay_Parms;
	DrawZoomedOverlay_Parms.H = H;

	this->ProcessEvent ( pFnDrawZoomedOverlay, &DrawZoomedOverlay_Parms, NULL );
};

// Function TGWeapon.TGWeap_F2000.DrawWeaponCrosshairEx
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGWeap_F2000::DrawWeaponCrosshairEx ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshairEx = NULL;

	if ( ! pFnDrawWeaponCrosshairEx )
		pFnDrawWeaponCrosshairEx = (UFunction*) UObject::GObjObjects()->Data[ 174388 ];

	ATGWeap_F2000_execDrawWeaponCrosshairEx_Parms DrawWeaponCrosshairEx_Parms;
	DrawWeaponCrosshairEx_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshairEx, &DrawWeaponCrosshairEx_Parms, NULL );
};

// Function TGWeapon.TGWeap_F2000.NotifySetCrossHair
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UTexture2D*              CrossHairHUD                   ( CPF_Parm )

void ATGWeap_F2000::eventNotifySetCrossHair ( class UTexture2D* CrossHairHUD )
{
	static UFunction* pFnNotifySetCrossHair = NULL;

	if ( ! pFnNotifySetCrossHair )
		pFnNotifySetCrossHair = (UFunction*) UObject::GObjObjects()->Data[ 174386 ];

	ATGWeap_F2000_eventNotifySetCrossHair_Parms NotifySetCrossHair_Parms;
	NotifySetCrossHair_Parms.CrossHairHUD = CrossHairHUD;

	this->ProcessEvent ( pFnNotifySetCrossHair, &NotifySetCrossHair_Parms, NULL );
};

// Function TGWeapon.TGWeap_F2000.DrawWeaponCrosshair
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGWeap_F2000::DrawWeaponCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshair = NULL;

	if ( ! pFnDrawWeaponCrosshair )
		pFnDrawWeaponCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 174384 ];

	ATGWeap_F2000_execDrawWeaponCrosshair_Parms DrawWeaponCrosshair_Parms;
	DrawWeaponCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshair, &DrawWeaponCrosshair_Parms, NULL );
};

// Function TGWeapon.TGWeap_F2000.ReplayIdleAnim
// [0x00020102] 
// Parameters infos:

void ATGWeap_F2000::ReplayIdleAnim ( )
{
	static UFunction* pFnReplayIdleAnim = NULL;

	if ( ! pFnReplayIdleAnim )
		pFnReplayIdleAnim = (UFunction*) UObject::GObjObjects()->Data[ 174382 ];

	ATGWeap_F2000_execReplayIdleAnim_Parms ReplayIdleAnim_Parms;

	this->ProcessEvent ( pFnReplayIdleAnim, &ReplayIdleAnim_Parms, NULL );
};

// Function TGWeapon.TGWeap_F2000.ToggleFireReference
// [0x00020102] 
// Parameters infos:
// unsigned long                  bTurnSecondaryAimFireRate      ( CPF_Parm )

void ATGWeap_F2000::ToggleFireReference ( unsigned long bTurnSecondaryAimFireRate )
{
	static UFunction* pFnToggleFireReference = NULL;

	if ( ! pFnToggleFireReference )
		pFnToggleFireReference = (UFunction*) UObject::GObjObjects()->Data[ 174379 ];

	ATGWeap_F2000_execToggleFireReference_Parms ToggleFireReference_Parms;
	ToggleFireReference_Parms.bTurnSecondaryAimFireRate = bTurnSecondaryAimFireRate;

	this->ProcessEvent ( pFnToggleFireReference, &ToggleFireReference_Parms, NULL );
};

// Function TGWeapon.TGWeap_F2000.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_F2000::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 174369 ];

	ATGWeap_F2000_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_F2000.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_F2000::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 174367 ];

	ATGWeap_F2000_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_F2000.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_F2000::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 174365 ];

	ATGWeap_F2000_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_F2000GAI.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_F2000GAI::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167227 ];

	UTGDmgType_F2000GAI_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_F2000GAI.DrawZoomedOverlay
// [0x00020102] 
// Parameters infos:
// class AHUD*                    H                              ( CPF_Parm )

void ATGWeap_F2000GAI::DrawZoomedOverlay ( class AHUD* H )
{
	static UFunction* pFnDrawZoomedOverlay = NULL;

	if ( ! pFnDrawZoomedOverlay )
		pFnDrawZoomedOverlay = (UFunction*) UObject::GObjObjects()->Data[ 174511 ];

	ATGWeap_F2000GAI_execDrawZoomedOverlay_Parms DrawZoomedOverlay_Parms;
	DrawZoomedOverlay_Parms.H = H;

	this->ProcessEvent ( pFnDrawZoomedOverlay, &DrawZoomedOverlay_Parms, NULL );
};

// Function TGWeapon.TGWeap_F2000GAI.DrawWeaponCrosshairEx
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGWeap_F2000GAI::DrawWeaponCrosshairEx ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshairEx = NULL;

	if ( ! pFnDrawWeaponCrosshairEx )
		pFnDrawWeaponCrosshairEx = (UFunction*) UObject::GObjObjects()->Data[ 174497 ];

	ATGWeap_F2000GAI_execDrawWeaponCrosshairEx_Parms DrawWeaponCrosshairEx_Parms;
	DrawWeaponCrosshairEx_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshairEx, &DrawWeaponCrosshairEx_Parms, NULL );
};

// Function TGWeapon.TGWeap_F2000GAI.DrawWeaponCrosshair
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGWeap_F2000GAI::DrawWeaponCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshair = NULL;

	if ( ! pFnDrawWeaponCrosshair )
		pFnDrawWeaponCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 174495 ];

	ATGWeap_F2000GAI_execDrawWeaponCrosshair_Parms DrawWeaponCrosshair_Parms;
	DrawWeaponCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshair, &DrawWeaponCrosshair_Parms, NULL );
};

// Function TGWeapon.TGWeap_F2000GAI.ReplayIdleAnim
// [0x00020102] 
// Parameters infos:

void ATGWeap_F2000GAI::ReplayIdleAnim ( )
{
	static UFunction* pFnReplayIdleAnim = NULL;

	if ( ! pFnReplayIdleAnim )
		pFnReplayIdleAnim = (UFunction*) UObject::GObjObjects()->Data[ 174493 ];

	ATGWeap_F2000GAI_execReplayIdleAnim_Parms ReplayIdleAnim_Parms;

	this->ProcessEvent ( pFnReplayIdleAnim, &ReplayIdleAnim_Parms, NULL );
};

// Function TGWeapon.TGWeap_F2000GAI.ToggleFireReference
// [0x00020102] 
// Parameters infos:
// unsigned long                  bTurnSecondaryAimFireRate      ( CPF_Parm )

void ATGWeap_F2000GAI::ToggleFireReference ( unsigned long bTurnSecondaryAimFireRate )
{
	static UFunction* pFnToggleFireReference = NULL;

	if ( ! pFnToggleFireReference )
		pFnToggleFireReference = (UFunction*) UObject::GObjObjects()->Data[ 174490 ];

	ATGWeap_F2000GAI_execToggleFireReference_Parms ToggleFireReference_Parms;
	ToggleFireReference_Parms.bTurnSecondaryAimFireRate = bTurnSecondaryAimFireRate;

	this->ProcessEvent ( pFnToggleFireReference, &ToggleFireReference_Parms, NULL );
};

// Function TGWeapon.TGWeap_F2000GAI.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_F2000GAI::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 174480 ];

	ATGWeap_F2000GAI_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_F2000GAI.NotifySetCrossHair
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UTexture2D*              CrossHairHUD                   ( CPF_Parm )

void ATGWeap_F2000GAI::eventNotifySetCrossHair ( class UTexture2D* CrossHairHUD )
{
	static UFunction* pFnNotifySetCrossHair = NULL;

	if ( ! pFnNotifySetCrossHair )
		pFnNotifySetCrossHair = (UFunction*) UObject::GObjObjects()->Data[ 174478 ];

	ATGWeap_F2000GAI_eventNotifySetCrossHair_Parms NotifySetCrossHair_Parms;
	NotifySetCrossHair_Parms.CrossHairHUD = CrossHairHUD;

	this->ProcessEvent ( pFnNotifySetCrossHair, &NotifySetCrossHair_Parms, NULL );
};

// Function TGWeapon.TGWeap_F2000GAI.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_F2000GAI::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 174476 ];

	ATGWeap_F2000GAI_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_FAL.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_FAL::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167246 ];

	UTGDmgType_FAL_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_FAL.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_FAL::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 174529 ];

	ATGWeap_FAL_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_FAL.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_FAL::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 174527 ];

	ATGWeap_FAL_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_FAL.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_FAL::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 174525 ];

	ATGWeap_FAL_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_FALdust.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_FALdust::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167257 ];

	UTGDmgType_FALdust_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_FALdust.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_FALdust::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 174548 ];

	ATGWeap_FALdust_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_FALdust.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_FALdust::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 174546 ];

	ATGWeap_FALdust_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_FALdust.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_FALdust::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 174544 ];

	ATGWeap_FALdust_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_FAMAS.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_FAMAS::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167276 ];

	UTGDmgType_FAMAS_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_FAMAS.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_FAMAS::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 174567 ];

	ATGWeap_FAMAS_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_FAMAS.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_FAMAS::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 174565 ];

	ATGWeap_FAMAS_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_FAMAS.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_FAMAS::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 174563 ];

	ATGWeap_FAMAS_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_FAMASGAI.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_FAMASGAI::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167287 ];

	UTGDmgType_FAMASGAI_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_FAMASGAI.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_FAMASGAI::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 174586 ];

	ATGWeap_FAMASGAI_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_FAMASGAI.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_FAMASGAI::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 174584 ];

	ATGWeap_FAMASGAI_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_FAMASGAI.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_FAMASGAI::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 174582 ];

	ATGWeap_FAMASGAI_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_FMG.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_FMG::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167310 ];

	UTGDmgType_FMG_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_FMG.CauseMuzzleFlashLight
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_FMG::eventCauseMuzzleFlashLight ( )
{
	static UFunction* pFnCauseMuzzleFlashLight = NULL;

	if ( ! pFnCauseMuzzleFlashLight )
		pFnCauseMuzzleFlashLight = (UFunction*) UObject::GObjObjects()->Data[ 174659 ];

	ATGWeap_FMG_eventCauseMuzzleFlashLight_Parms CauseMuzzleFlashLight_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlashLight, &CauseMuzzleFlashLight_Parms, NULL );
};

// Function TGWeapon.TGWeap_FMG.CauseShellDrop
// [0x00820102] 
// Parameters infos:

void ATGWeap_FMG::CauseShellDrop ( )
{
	static UFunction* pFnCauseShellDrop = NULL;

	if ( ! pFnCauseShellDrop )
		pFnCauseShellDrop = (UFunction*) UObject::GObjObjects()->Data[ 174654 ];

	ATGWeap_FMG_execCauseShellDrop_Parms CauseShellDrop_Parms;

	this->ProcessEvent ( pFnCauseShellDrop, &CauseShellDrop_Parms, NULL );
};

// Function TGWeapon.TGWeap_FMG.AttachMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGWeap_FMG::AttachMuzzleFlash ( )
{
	static UFunction* pFnAttachMuzzleFlash = NULL;

	if ( ! pFnAttachMuzzleFlash )
		pFnAttachMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 174652 ];

	ATGWeap_FMG_execAttachMuzzleFlash_Parms AttachMuzzleFlash_Parms;

	this->ProcessEvent ( pFnAttachMuzzleFlash, &AttachMuzzleFlash_Parms, NULL );
};

// Function TGWeapon.TGWeap_FMG.MuzzleFlashTimer02
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_FMG::eventMuzzleFlashTimer02 ( )
{
	static UFunction* pFnMuzzleFlashTimer02 = NULL;

	if ( ! pFnMuzzleFlashTimer02 )
		pFnMuzzleFlashTimer02 = (UFunction*) UObject::GObjObjects()->Data[ 174651 ];

	ATGWeap_FMG_eventMuzzleFlashTimer02_Parms MuzzleFlashTimer02_Parms;

	this->ProcessEvent ( pFnMuzzleFlashTimer02, &MuzzleFlashTimer02_Parms, NULL );
};

// Function TGWeapon.TGWeap_FMG.CauseMuzzleFlash
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_FMG::eventCauseMuzzleFlash ( )
{
	static UFunction* pFnCauseMuzzleFlash = NULL;

	if ( ! pFnCauseMuzzleFlash )
		pFnCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 174648 ];

	ATGWeap_FMG_eventCauseMuzzleFlash_Parms CauseMuzzleFlash_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlash, &CauseMuzzleFlash_Parms, NULL );
};

// Function TGWeapon.TGWeap_FMG.PlayFireEffects
// [0x00024102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void ATGWeap_FMG::PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation )
{
	static UFunction* pFnPlayFireEffects = NULL;

	if ( ! pFnPlayFireEffects )
		pFnPlayFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 174643 ];

	ATGWeap_FMG_execPlayFireEffects_Parms PlayFireEffects_Parms;
	PlayFireEffects_Parms.FireModeNum = FireModeNum;
	memcpy ( &PlayFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayFireEffects, &PlayFireEffects_Parms, NULL );
};

// Function TGWeapon.TGWeap_FMG.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_FMG::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 174633 ];

	ATGWeap_FMG_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_FMG.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_FMG::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 174631 ];

	ATGWeap_FMG_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_FMG.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_FMG::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 174629 ];

	ATGWeap_FMG_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_FN57.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_FN57::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167325 ];

	UTGDmgType_FN57_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_FoolGrenade.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGWeap_FoolGrenade::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 174668 ];

	ATGWeap_FoolGrenade_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGWeapon.TGDmgType_G36K.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_G36K::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167345 ];

	UTGDmgType_G36K_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_G36K.DrawZoomedOverlay
// [0x00020102] 
// Parameters infos:
// class AHUD*                    H                              ( CPF_Parm )

void ATGWeap_G36K::DrawZoomedOverlay ( class AHUD* H )
{
	static UFunction* pFnDrawZoomedOverlay = NULL;

	if ( ! pFnDrawZoomedOverlay )
		pFnDrawZoomedOverlay = (UFunction*) UObject::GObjObjects()->Data[ 174775 ];

	ATGWeap_G36K_execDrawZoomedOverlay_Parms DrawZoomedOverlay_Parms;
	DrawZoomedOverlay_Parms.H = H;

	this->ProcessEvent ( pFnDrawZoomedOverlay, &DrawZoomedOverlay_Parms, NULL );
};

// Function TGWeapon.TGWeap_G36K.DrawWeaponCrosshairEx
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGWeap_G36K::DrawWeaponCrosshairEx ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshairEx = NULL;

	if ( ! pFnDrawWeaponCrosshairEx )
		pFnDrawWeaponCrosshairEx = (UFunction*) UObject::GObjObjects()->Data[ 174761 ];

	ATGWeap_G36K_execDrawWeaponCrosshairEx_Parms DrawWeaponCrosshairEx_Parms;
	DrawWeaponCrosshairEx_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshairEx, &DrawWeaponCrosshairEx_Parms, NULL );
};

// Function TGWeapon.TGWeap_G36K.DrawWeaponCrosshair
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGWeap_G36K::DrawWeaponCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshair = NULL;

	if ( ! pFnDrawWeaponCrosshair )
		pFnDrawWeaponCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 174759 ];

	ATGWeap_G36K_execDrawWeaponCrosshair_Parms DrawWeaponCrosshair_Parms;
	DrawWeaponCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshair, &DrawWeaponCrosshair_Parms, NULL );
};

// Function TGWeapon.TGWeap_G36K.ReplayIdleAnim
// [0x00020102] 
// Parameters infos:

void ATGWeap_G36K::ReplayIdleAnim ( )
{
	static UFunction* pFnReplayIdleAnim = NULL;

	if ( ! pFnReplayIdleAnim )
		pFnReplayIdleAnim = (UFunction*) UObject::GObjObjects()->Data[ 174757 ];

	ATGWeap_G36K_execReplayIdleAnim_Parms ReplayIdleAnim_Parms;

	this->ProcessEvent ( pFnReplayIdleAnim, &ReplayIdleAnim_Parms, NULL );
};

// Function TGWeapon.TGWeap_G36K.ToggleFireReference
// [0x00020102] 
// Parameters infos:
// unsigned long                  bTurnSecondaryAimFireRate      ( CPF_Parm )

void ATGWeap_G36K::ToggleFireReference ( unsigned long bTurnSecondaryAimFireRate )
{
	static UFunction* pFnToggleFireReference = NULL;

	if ( ! pFnToggleFireReference )
		pFnToggleFireReference = (UFunction*) UObject::GObjObjects()->Data[ 174754 ];

	ATGWeap_G36K_execToggleFireReference_Parms ToggleFireReference_Parms;
	ToggleFireReference_Parms.bTurnSecondaryAimFireRate = bTurnSecondaryAimFireRate;

	this->ProcessEvent ( pFnToggleFireReference, &ToggleFireReference_Parms, NULL );
};

// Function TGWeapon.TGWeap_G36K.NotifySetCrossHair
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UTexture2D*              CrossHairHUD                   ( CPF_Parm )

void ATGWeap_G36K::eventNotifySetCrossHair ( class UTexture2D* CrossHairHUD )
{
	static UFunction* pFnNotifySetCrossHair = NULL;

	if ( ! pFnNotifySetCrossHair )
		pFnNotifySetCrossHair = (UFunction*) UObject::GObjObjects()->Data[ 174744 ];

	ATGWeap_G36K_eventNotifySetCrossHair_Parms NotifySetCrossHair_Parms;
	NotifySetCrossHair_Parms.CrossHairHUD = CrossHairHUD;

	this->ProcessEvent ( pFnNotifySetCrossHair, &NotifySetCrossHair_Parms, NULL );
};

// Function TGWeapon.TGWeap_G36K.NotifySetCrossHairHit
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UTexture2D*              CrossHairHitHUD                ( CPF_Parm )

void ATGWeap_G36K::eventNotifySetCrossHairHit ( class UTexture2D* CrossHairHitHUD )
{
	static UFunction* pFnNotifySetCrossHairHit = NULL;

	if ( ! pFnNotifySetCrossHairHit )
		pFnNotifySetCrossHairHit = (UFunction*) UObject::GObjObjects()->Data[ 174742 ];

	ATGWeap_G36K_eventNotifySetCrossHairHit_Parms NotifySetCrossHairHit_Parms;
	NotifySetCrossHairHit_Parms.CrossHairHitHUD = CrossHairHitHUD;

	this->ProcessEvent ( pFnNotifySetCrossHairHit, &NotifySetCrossHairHit_Parms, NULL );
};

// Function TGWeapon.TGWeap_G36K.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_G36K::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 174740 ];

	ATGWeap_G36K_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_G36K.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_G36K::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 174738 ];

	ATGWeap_G36K_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_G3SG2.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_G3SG2::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167360 ];

	UTGDmgType_G3SG2_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_G3SG2.ServerGotoStateWeaponClipChanging
// [0x002200C2] 
// Parameters infos:

void ATGWeap_G3SG2::ServerGotoStateWeaponClipChanging ( )
{
	static UFunction* pFnServerGotoStateWeaponClipChanging = NULL;

	if ( ! pFnServerGotoStateWeaponClipChanging )
		pFnServerGotoStateWeaponClipChanging = (UFunction*) UObject::GObjObjects()->Data[ 174803 ];

	ATGWeap_G3SG2_execServerGotoStateWeaponClipChanging_Parms ServerGotoStateWeaponClipChanging_Parms;

	this->ProcessEvent ( pFnServerGotoStateWeaponClipChanging, &ServerGotoStateWeaponClipChanging_Parms, NULL );
};

// Function TGWeapon.TGWeap_G3SG2.ClientStartZoom
// [0x00020102] 
// Parameters infos:
// class AUTPlayerController*     PC                             ( CPF_Parm )

void ATGWeap_G3SG2::ClientStartZoom ( class AUTPlayerController* PC )
{
	static UFunction* pFnClientStartZoom = NULL;

	if ( ! pFnClientStartZoom )
		pFnClientStartZoom = (UFunction*) UObject::GObjObjects()->Data[ 174801 ];

	ATGWeap_G3SG2_execClientStartZoom_Parms ClientStartZoom_Parms;
	ClientStartZoom_Parms.PC = PC;

	this->ProcessEvent ( pFnClientStartZoom, &ClientStartZoom_Parms, NULL );
};

// Function TGWeapon.TGWeap_G3SG2.InstantFire
// [0x00020102] 
// Parameters infos:

void ATGWeap_G3SG2::InstantFire ( )
{
	static UFunction* pFnInstantFire = NULL;

	if ( ! pFnInstantFire )
		pFnInstantFire = (UFunction*) UObject::GObjObjects()->Data[ 174800 ];

	ATGWeap_G3SG2_execInstantFire_Parms InstantFire_Parms;

	this->ProcessEvent ( pFnInstantFire, &InstantFire_Parms, NULL );
};

// Function TGWeapon.TGWeap_G3SG2.EndFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGWeap_G3SG2::EndFire ( unsigned char FireModeNum )
{
	static UFunction* pFnEndFire = NULL;

	if ( ! pFnEndFire )
		pFnEndFire = (UFunction*) UObject::GObjObjects()->Data[ 174798 ];

	ATGWeap_G3SG2_execEndFire_Parms EndFire_Parms;
	EndFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnEndFire, &EndFire_Parms, NULL );
};

// Function TGWeapon.TGWeap_G3SG2.FireAmmunition
// [0x00020102] 
// Parameters infos:

void ATGWeap_G3SG2::FireAmmunition ( )
{
	static UFunction* pFnFireAmmunition = NULL;

	if ( ! pFnFireAmmunition )
		pFnFireAmmunition = (UFunction*) UObject::GObjObjects()->Data[ 174788 ];

	ATGWeap_G3SG2_execFireAmmunition_Parms FireAmmunition_Parms;

	this->ProcessEvent ( pFnFireAmmunition, &FireAmmunition_Parms, NULL );
};

// Function TGWeapon.TGDmgType_G3SG2_Jungle.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_G3SG2_Jungle::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167371 ];

	UTGDmgType_G3SG2_Jungle_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_G3SG2_Jungle.ServerGotoStateWeaponClipChanging
// [0x002200C2] 
// Parameters infos:

void ATGWeap_G3SG2_Jungle::ServerGotoStateWeaponClipChanging ( )
{
	static UFunction* pFnServerGotoStateWeaponClipChanging = NULL;

	if ( ! pFnServerGotoStateWeaponClipChanging )
		pFnServerGotoStateWeaponClipChanging = (UFunction*) UObject::GObjObjects()->Data[ 174824 ];

	ATGWeap_G3SG2_Jungle_execServerGotoStateWeaponClipChanging_Parms ServerGotoStateWeaponClipChanging_Parms;

	this->ProcessEvent ( pFnServerGotoStateWeaponClipChanging, &ServerGotoStateWeaponClipChanging_Parms, NULL );
};

// Function TGWeapon.TGWeap_G3SG2_Jungle.ClientStartZoom
// [0x00020102] 
// Parameters infos:
// class AUTPlayerController*     PC                             ( CPF_Parm )

void ATGWeap_G3SG2_Jungle::ClientStartZoom ( class AUTPlayerController* PC )
{
	static UFunction* pFnClientStartZoom = NULL;

	if ( ! pFnClientStartZoom )
		pFnClientStartZoom = (UFunction*) UObject::GObjObjects()->Data[ 174822 ];

	ATGWeap_G3SG2_Jungle_execClientStartZoom_Parms ClientStartZoom_Parms;
	ClientStartZoom_Parms.PC = PC;

	this->ProcessEvent ( pFnClientStartZoom, &ClientStartZoom_Parms, NULL );
};

// Function TGWeapon.TGWeap_G3SG2_Jungle.InstantFire
// [0x00020102] 
// Parameters infos:

void ATGWeap_G3SG2_Jungle::InstantFire ( )
{
	static UFunction* pFnInstantFire = NULL;

	if ( ! pFnInstantFire )
		pFnInstantFire = (UFunction*) UObject::GObjObjects()->Data[ 174821 ];

	ATGWeap_G3SG2_Jungle_execInstantFire_Parms InstantFire_Parms;

	this->ProcessEvent ( pFnInstantFire, &InstantFire_Parms, NULL );
};

// Function TGWeapon.TGWeap_G3SG2_Jungle.EndFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGWeap_G3SG2_Jungle::EndFire ( unsigned char FireModeNum )
{
	static UFunction* pFnEndFire = NULL;

	if ( ! pFnEndFire )
		pFnEndFire = (UFunction*) UObject::GObjObjects()->Data[ 174819 ];

	ATGWeap_G3SG2_Jungle_execEndFire_Parms EndFire_Parms;
	EndFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnEndFire, &EndFire_Parms, NULL );
};

// Function TGWeapon.TGWeap_G3SG2_Jungle.FireAmmunition
// [0x00020102] 
// Parameters infos:

void ATGWeap_G3SG2_Jungle::FireAmmunition ( )
{
	static UFunction* pFnFireAmmunition = NULL;

	if ( ! pFnFireAmmunition )
		pFnFireAmmunition = (UFunction*) UObject::GObjObjects()->Data[ 174809 ];

	ATGWeap_G3SG2_Jungle_execFireAmmunition_Parms FireAmmunition_Parms;

	this->ProcessEvent ( pFnFireAmmunition, &FireAmmunition_Parms, NULL );
};

// Function TGWeapon.TGDmgType_GILBOA.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_GILBOA::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167390 ];

	UTGDmgType_GILBOA_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_GILBOA.CauseShellDrop
// [0x00820102] 
// Parameters infos:

void ATGWeap_GILBOA::CauseShellDrop ( )
{
	static UFunction* pFnCauseShellDrop = NULL;

	if ( ! pFnCauseShellDrop )
		pFnCauseShellDrop = (UFunction*) UObject::GObjObjects()->Data[ 174856 ];

	ATGWeap_GILBOA_execCauseShellDrop_Parms CauseShellDrop_Parms;

	this->ProcessEvent ( pFnCauseShellDrop, &CauseShellDrop_Parms, NULL );
};

// Function TGWeapon.TGWeap_GILBOA.CauseMuzzleFlashLight
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_GILBOA::eventCauseMuzzleFlashLight ( )
{
	static UFunction* pFnCauseMuzzleFlashLight = NULL;

	if ( ! pFnCauseMuzzleFlashLight )
		pFnCauseMuzzleFlashLight = (UFunction*) UObject::GObjObjects()->Data[ 174855 ];

	ATGWeap_GILBOA_eventCauseMuzzleFlashLight_Parms CauseMuzzleFlashLight_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlashLight, &CauseMuzzleFlashLight_Parms, NULL );
};

// Function TGWeapon.TGWeap_GILBOA.AttachMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGWeap_GILBOA::AttachMuzzleFlash ( )
{
	static UFunction* pFnAttachMuzzleFlash = NULL;

	if ( ! pFnAttachMuzzleFlash )
		pFnAttachMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 174853 ];

	ATGWeap_GILBOA_execAttachMuzzleFlash_Parms AttachMuzzleFlash_Parms;

	this->ProcessEvent ( pFnAttachMuzzleFlash, &AttachMuzzleFlash_Parms, NULL );
};

// Function TGWeapon.TGWeap_GILBOA.MuzzleFlashTimer02
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_GILBOA::eventMuzzleFlashTimer02 ( )
{
	static UFunction* pFnMuzzleFlashTimer02 = NULL;

	if ( ! pFnMuzzleFlashTimer02 )
		pFnMuzzleFlashTimer02 = (UFunction*) UObject::GObjObjects()->Data[ 174852 ];

	ATGWeap_GILBOA_eventMuzzleFlashTimer02_Parms MuzzleFlashTimer02_Parms;

	this->ProcessEvent ( pFnMuzzleFlashTimer02, &MuzzleFlashTimer02_Parms, NULL );
};

// Function TGWeapon.TGWeap_GILBOA.CauseMuzzleFlash
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_GILBOA::eventCauseMuzzleFlash ( )
{
	static UFunction* pFnCauseMuzzleFlash = NULL;

	if ( ! pFnCauseMuzzleFlash )
		pFnCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 174849 ];

	ATGWeap_GILBOA_eventCauseMuzzleFlash_Parms CauseMuzzleFlash_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlash, &CauseMuzzleFlash_Parms, NULL );
};

// Function TGWeapon.TGWeap_GILBOA.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_GILBOA::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 174839 ];

	ATGWeap_GILBOA_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_GILBOA.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_GILBOA::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 174837 ];

	ATGWeap_GILBOA_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_GILBOA.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_GILBOA::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 174835 ];

	ATGWeap_GILBOA_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_GLOCK17.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_GLOCK17::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167405 ];

	UTGDmgType_GLOCK17_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_HeartSeeker.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_HeartSeeker::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167420 ];

	UTGDmgType_HeartSeeker_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_HEgame.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGWeap_HEgame::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 174873 ];

	ATGWeap_HEgame_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_HEGrenade.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGWeap_HEGrenade::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 174882 ];

	ATGWeap_HEGrenade_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGWeapon.TGDmgType_HK416.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_HK416::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167445 ];

	UTGDmgType_HK416_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_HK416.MirrorUpdateNotify
// [0x00020102] 
// Parameters infos:

void ATGWeap_HK416::MirrorUpdateNotify ( )
{
	static UFunction* pFnMirrorUpdateNotify = NULL;

	if ( ! pFnMirrorUpdateNotify )
		pFnMirrorUpdateNotify = (UFunction*) UObject::GObjObjects()->Data[ 174912 ];

	ATGWeap_HK416_execMirrorUpdateNotify_Parms MirrorUpdateNotify_Parms;

	this->ProcessEvent ( pFnMirrorUpdateNotify, &MirrorUpdateNotify_Parms, NULL );
};

// Function TGWeapon.TGWeap_HK416.NotifyAimingLineEffect
// [0x00020102] 
// Parameters infos:

void ATGWeap_HK416::NotifyAimingLineEffect ( )
{
	static UFunction* pFnNotifyAimingLineEffect = NULL;

	if ( ! pFnNotifyAimingLineEffect )
		pFnNotifyAimingLineEffect = (UFunction*) UObject::GObjObjects()->Data[ 174902 ];

	ATGWeap_HK416_execNotifyAimingLineEffect_Parms NotifyAimingLineEffect_Parms;

	this->ProcessEvent ( pFnNotifyAimingLineEffect, &NotifyAimingLineEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_HK416.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_HK416::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 174901 ];

	ATGWeap_HK416_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGWeapon.TGWeap_HK416.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_HK416::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 174899 ];

	ATGWeap_HK416_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_HK416.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_HK416::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 174897 ];

	ATGWeap_HK416_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_HK416.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_HK416::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 174895 ];

	ATGWeap_HK416_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_HKG11.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_HKG11::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167460 ];

	UTGDmgType_HKG11_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_HKG11.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_HKG11::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 174919 ];

	ATGWeap_HKG11_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_HKG11.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_HKG11::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 174917 ];

	ATGWeap_HKG11_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_IceAxe.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_IceAxe::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167475 ];

	UTGDmgType_IceAxe_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_JackHammer.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_JackHammer::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167490 ];

	UTGDmgType_JackHammer_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_JackHammer.ServerWeaponClipChanged
// [0x002200C2] 
// Parameters infos:

void ATGWeap_JackHammer::ServerWeaponClipChanged ( )
{
	static UFunction* pFnServerWeaponClipChanged = NULL;

	if ( ! pFnServerWeaponClipChanged )
		pFnServerWeaponClipChanged = (UFunction*) UObject::GObjObjects()->Data[ 174952 ];

	ATGWeap_JackHammer_execServerWeaponClipChanged_Parms ServerWeaponClipChanged_Parms;

	this->ProcessEvent ( pFnServerWeaponClipChanged, &ServerWeaponClipChanged_Parms, NULL );
};

// Function TGWeapon.TGWeap_JackHammer.TimeWeaponClipChanging
// [0x00020102] 
// Parameters infos:

void ATGWeap_JackHammer::TimeWeaponClipChanging ( )
{
	static UFunction* pFnTimeWeaponClipChanging = NULL;

	if ( ! pFnTimeWeaponClipChanging )
		pFnTimeWeaponClipChanging = (UFunction*) UObject::GObjObjects()->Data[ 174937 ];

	ATGWeap_JackHammer_execTimeWeaponClipChanging_Parms TimeWeaponClipChanging_Parms;

	this->ProcessEvent ( pFnTimeWeaponClipChanging, &TimeWeaponClipChanging_Parms, NULL );
};

// Function TGWeapon.TGDmgType_JHammerACU.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_JHammerACU::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167505 ];

	UTGDmgType_JHammerACU_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_JHammerACU.ServerWeaponClipChanged
// [0x002200C2] 
// Parameters infos:

void ATGWeap_JHammerACU::ServerWeaponClipChanged ( )
{
	static UFunction* pFnServerWeaponClipChanged = NULL;

	if ( ! pFnServerWeaponClipChanged )
		pFnServerWeaponClipChanged = (UFunction*) UObject::GObjObjects()->Data[ 174972 ];

	ATGWeap_JHammerACU_execServerWeaponClipChanged_Parms ServerWeaponClipChanged_Parms;

	this->ProcessEvent ( pFnServerWeaponClipChanged, &ServerWeaponClipChanged_Parms, NULL );
};

// Function TGWeapon.TGWeap_JHammerACU.TimeWeaponClipChanging
// [0x00020102] 
// Parameters infos:

void ATGWeap_JHammerACU::TimeWeaponClipChanging ( )
{
	static UFunction* pFnTimeWeaponClipChanging = NULL;

	if ( ! pFnTimeWeaponClipChanging )
		pFnTimeWeaponClipChanging = (UFunction*) UObject::GObjObjects()->Data[ 174957 ];

	ATGWeap_JHammerACU_execTimeWeaponClipChanging_Parms TimeWeaponClipChanging_Parms;

	this->ProcessEvent ( pFnTimeWeaponClipChanging, &TimeWeaponClipChanging_Parms, NULL );
};

// Function TGWeapon.TGDmgType_JHammergold.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_JHammergold::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167520 ];

	UTGDmgType_JHammergold_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_JHammergold.ServerWeaponClipChanged
// [0x002200C2] 
// Parameters infos:

void ATGWeap_JHammergold::ServerWeaponClipChanged ( )
{
	static UFunction* pFnServerWeaponClipChanged = NULL;

	if ( ! pFnServerWeaponClipChanged )
		pFnServerWeaponClipChanged = (UFunction*) UObject::GObjObjects()->Data[ 174992 ];

	ATGWeap_JHammergold_execServerWeaponClipChanged_Parms ServerWeaponClipChanged_Parms;

	this->ProcessEvent ( pFnServerWeaponClipChanged, &ServerWeaponClipChanged_Parms, NULL );
};

// Function TGWeapon.TGWeap_JHammergold.TimeWeaponClipChanging
// [0x00020102] 
// Parameters infos:

void ATGWeap_JHammergold::TimeWeaponClipChanging ( )
{
	static UFunction* pFnTimeWeaponClipChanging = NULL;

	if ( ! pFnTimeWeaponClipChanging )
		pFnTimeWeaponClipChanging = (UFunction*) UObject::GObjObjects()->Data[ 174977 ];

	ATGWeap_JHammergold_execTimeWeaponClipChanging_Parms TimeWeaponClipChanging_Parms;

	this->ProcessEvent ( pFnTimeWeaponClipChanging, &TimeWeaponClipChanging_Parms, NULL );
};

// Function TGWeapon.TGDmgType_Jian.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_Jian::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167535 ];

	UTGDmgType_Jian_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_JS_SMG.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_JS_SMG::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167550 ];

	UTGDmgType_JS_SMG_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_JS_SMG.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_JS_SMG::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175003 ];

	ATGWeap_JS_SMG_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_JS_SMG.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_JS_SMG::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175001 ];

	ATGWeap_JS_SMG_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_K92F.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_K92F::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167565 ];

	UTGDmgType_K92F_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_KACSAW.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_KACSAW::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167580 ];

	UTGDmgType_KACSAW_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_KACSAW.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_KACSAW::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175026 ];

	ATGWeap_KACSAW_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_KACSAW.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_KACSAW::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175024 ];

	ATGWeap_KACSAW_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_KACSAW.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_KACSAW::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175022 ];

	ATGWeap_KACSAW_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_KACSAW_dust.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_KACSAW_dust::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167591 ];

	UTGDmgType_KACSAW_dust_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_KACSAW_dust.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_KACSAW_dust::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175045 ];

	ATGWeap_KACSAW_dust_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_KACSAW_dust.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_KACSAW_dust::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175043 ];

	ATGWeap_KACSAW_dust_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_KACSAW_dust.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_KACSAW_dust::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175041 ];

	ATGWeap_KACSAW_dust_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_Knuckle.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_Knuckle::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167610 ];

	UTGDmgType_Knuckle_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_KukriT.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_KukriT::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167625 ];

	UTGDmgType_KukriT_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_KukriT.PlayFirstPersonAnim
// [0x00020102] 
// Parameters infos:

void ATGWeap_KukriT::PlayFirstPersonAnim ( )
{
	static UFunction* pFnPlayFirstPersonAnim = NULL;

	if ( ! pFnPlayFirstPersonAnim )
		pFnPlayFirstPersonAnim = (UFunction*) UObject::GObjObjects()->Data[ 175063 ];

	ATGWeap_KukriT_execPlayFirstPersonAnim_Parms PlayFirstPersonAnim_Parms;

	this->ProcessEvent ( pFnPlayFirstPersonAnim, &PlayFirstPersonAnim_Parms, NULL );
};

// Function TGWeapon.TGDmgType_KukriTGold.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_KukriTGold::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167636 ];

	UTGDmgType_KukriTGold_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_KukriTGold.PlayFirstPersonAnim
// [0x00020102] 
// Parameters infos:

void ATGWeap_KukriTGold::PlayFirstPersonAnim ( )
{
	static UFunction* pFnPlayFirstPersonAnim = NULL;

	if ( ! pFnPlayFirstPersonAnim )
		pFnPlayFirstPersonAnim = (UFunction*) UObject::GObjObjects()->Data[ 175072 ];

	ATGWeap_KukriTGold_execPlayFirstPersonAnim_Parms PlayFirstPersonAnim_Parms;

	this->ProcessEvent ( pFnPlayFirstPersonAnim, &PlayFirstPersonAnim_Parms, NULL );
};

// Function TGWeapon.TGDmgType_L85.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_L85::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167655 ];

	UTGDmgType_L85_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_L85.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_L85::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175083 ];

	ATGWeap_L85_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_L85.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_L85::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175081 ];

	ATGWeap_L85_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_LSAT.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_LSAT::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167670 ];

	UTGDmgType_LSAT_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_LSAT.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_LSAT::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175102 ];

	ATGWeap_LSAT_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_LSAT.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_LSAT::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175100 ];

	ATGWeap_LSAT_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_LSAT.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_LSAT::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175098 ];

	ATGWeap_LSAT_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M1014.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M1014::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167685 ];

	UTGDmgType_M1014_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M1014.PlayFireEffects
// [0x00024102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void ATGWeap_M1014::PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation )
{
	static UFunction* pFnPlayFireEffects = NULL;

	if ( ! pFnPlayFireEffects )
		pFnPlayFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 175116 ];

	ATGWeap_M1014_execPlayFireEffects_Parms PlayFireEffects_Parms;
	PlayFireEffects_Parms.FireModeNum = FireModeNum;
	memcpy ( &PlayFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayFireEffects, &PlayFireEffects_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M1014GAI.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M1014GAI::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167696 ];

	UTGDmgType_M1014GAI_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M1014GAI.PlayFireEffects
// [0x00024102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void ATGWeap_M1014GAI::PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation )
{
	static UFunction* pFnPlayFireEffects = NULL;

	if ( ! pFnPlayFireEffects )
		pFnPlayFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 175135 ];

	ATGWeap_M1014GAI_execPlayFireEffects_Parms PlayFireEffects_Parms;
	PlayFireEffects_Parms.FireModeNum = FireModeNum;
	memcpy ( &PlayFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayFireEffects, &PlayFireEffects_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M107.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M107::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167715 ];

	UTGDmgType_M107_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M107.RefeshSpecialGunMirror
// [0x00020102] 
// Parameters infos:

void ATGWeap_M107::RefeshSpecialGunMirror ( )
{
	static UFunction* pFnRefeshSpecialGunMirror = NULL;

	if ( ! pFnRefeshSpecialGunMirror )
		pFnRefeshSpecialGunMirror = (UFunction*) UObject::GObjObjects()->Data[ 175153 ];

	ATGWeap_M107_execRefeshSpecialGunMirror_Parms RefeshSpecialGunMirror_Parms;

	this->ProcessEvent ( pFnRefeshSpecialGunMirror, &RefeshSpecialGunMirror_Parms, NULL );
};

// Function TGWeapon.TGWeap_M107.IsSpecialGun
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGWeap_M107::IsSpecialGun ( )
{
	static UFunction* pFnIsSpecialGun = NULL;

	if ( ! pFnIsSpecialGun )
		pFnIsSpecialGun = (UFunction*) UObject::GObjObjects()->Data[ 175151 ];

	ATGWeap_M107_execIsSpecialGun_Parms IsSpecialGun_Parms;

	this->ProcessEvent ( pFnIsSpecialGun, &IsSpecialGun_Parms, NULL );

	return IsSpecialGun_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_M107.DelayActivateAmmoDisplayComp
// [0x00020102] 
// Parameters infos:

void ATGWeap_M107::DelayActivateAmmoDisplayComp ( )
{
	static UFunction* pFnDelayActivateAmmoDisplayComp = NULL;

	if ( ! pFnDelayActivateAmmoDisplayComp )
		pFnDelayActivateAmmoDisplayComp = (UFunction*) UObject::GObjObjects()->Data[ 175150 ];

	ATGWeap_M107_execDelayActivateAmmoDisplayComp_Parms DelayActivateAmmoDisplayComp_Parms;

	this->ProcessEvent ( pFnDelayActivateAmmoDisplayComp, &DelayActivateAmmoDisplayComp_Parms, NULL );
};

// Function TGWeapon.TGWeap_M107.TimeWeaponEquipping
// [0x00020102] 
// Parameters infos:

void ATGWeap_M107::TimeWeaponEquipping ( )
{
	static UFunction* pFnTimeWeaponEquipping = NULL;

	if ( ! pFnTimeWeaponEquipping )
		pFnTimeWeaponEquipping = (UFunction*) UObject::GObjObjects()->Data[ 175149 ];

	ATGWeap_M107_execTimeWeaponEquipping_Parms TimeWeaponEquipping_Parms;

	this->ProcessEvent ( pFnTimeWeaponEquipping, &TimeWeaponEquipping_Parms, NULL );
};

// Function TGWeapon.TGWeap_M107.DetachWeapon
// [0x00020102] 
// Parameters infos:

void ATGWeap_M107::DetachWeapon ( )
{
	static UFunction* pFnDetachWeapon = NULL;

	if ( ! pFnDetachWeapon )
		pFnDetachWeapon = (UFunction*) UObject::GObjObjects()->Data[ 175148 ];

	ATGWeap_M107_execDetachWeapon_Parms DetachWeapon_Parms;

	this->ProcessEvent ( pFnDetachWeapon, &DetachWeapon_Parms, NULL );
};

// Function TGWeapon.TGWeap_M107.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGWeap_M107::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 175147 ];

	ATGWeap_M107_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M14JAE100.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M14JAE100::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167730 ];

	UTGDmgType_M14JAE100_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M14JAE100.ServerGotoStateWeaponClipChanging
// [0x002200C2] 
// Parameters infos:

void ATGWeap_M14JAE100::ServerGotoStateWeaponClipChanging ( )
{
	static UFunction* pFnServerGotoStateWeaponClipChanging = NULL;

	if ( ! pFnServerGotoStateWeaponClipChanging )
		pFnServerGotoStateWeaponClipChanging = (UFunction*) UObject::GObjObjects()->Data[ 175173 ];

	ATGWeap_M14JAE100_execServerGotoStateWeaponClipChanging_Parms ServerGotoStateWeaponClipChanging_Parms;

	this->ProcessEvent ( pFnServerGotoStateWeaponClipChanging, &ServerGotoStateWeaponClipChanging_Parms, NULL );
};

// Function TGWeapon.TGWeap_M14JAE100.ClientStartZoom
// [0x00020102] 
// Parameters infos:
// class AUTPlayerController*     PC                             ( CPF_Parm )

void ATGWeap_M14JAE100::ClientStartZoom ( class AUTPlayerController* PC )
{
	static UFunction* pFnClientStartZoom = NULL;

	if ( ! pFnClientStartZoom )
		pFnClientStartZoom = (UFunction*) UObject::GObjObjects()->Data[ 175171 ];

	ATGWeap_M14JAE100_execClientStartZoom_Parms ClientStartZoom_Parms;
	ClientStartZoom_Parms.PC = PC;

	this->ProcessEvent ( pFnClientStartZoom, &ClientStartZoom_Parms, NULL );
};

// Function TGWeapon.TGWeap_M14JAE100.InstantFire
// [0x00020102] 
// Parameters infos:

void ATGWeap_M14JAE100::InstantFire ( )
{
	static UFunction* pFnInstantFire = NULL;

	if ( ! pFnInstantFire )
		pFnInstantFire = (UFunction*) UObject::GObjObjects()->Data[ 175170 ];

	ATGWeap_M14JAE100_execInstantFire_Parms InstantFire_Parms;

	this->ProcessEvent ( pFnInstantFire, &InstantFire_Parms, NULL );
};

// Function TGWeapon.TGWeap_M14JAE100.EndFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGWeap_M14JAE100::EndFire ( unsigned char FireModeNum )
{
	static UFunction* pFnEndFire = NULL;

	if ( ! pFnEndFire )
		pFnEndFire = (UFunction*) UObject::GObjObjects()->Data[ 175168 ];

	ATGWeap_M14JAE100_execEndFire_Parms EndFire_Parms;
	EndFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnEndFire, &EndFire_Parms, NULL );
};

// Function TGWeapon.TGWeap_M14JAE100.FireAmmunition
// [0x00020102] 
// Parameters infos:

void ATGWeap_M14JAE100::FireAmmunition ( )
{
	static UFunction* pFnFireAmmunition = NULL;

	if ( ! pFnFireAmmunition )
		pFnFireAmmunition = (UFunction*) UObject::GObjObjects()->Data[ 175158 ];

	ATGWeap_M14JAE100_execFireAmmunition_Parms FireAmmunition_Parms;

	this->ProcessEvent ( pFnFireAmmunition, &FireAmmunition_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M16.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M16::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167745 ];

	UTGDmgType_M16_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M16.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M16::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175184 ];

	ATGWeap_M16_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M16.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M16::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175182 ];

	ATGWeap_M16_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M16.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M16::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175180 ];

	ATGWeap_M16_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M1911.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M1911::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167760 ];

	UTGDmgType_M1911_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M240LW.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M240LW::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167775 ];

	UTGDmgType_M240LW_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M240LW.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M240LW::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175207 ];

	ATGWeap_M240LW_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M240LW.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M240LW::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175205 ];

	ATGWeap_M240LW_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M240LW.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M240LW::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175203 ];

	ATGWeap_M240LW_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M249.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M249::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167790 ];

	UTGDmgType_M249_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M249.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M249::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175223 ];

	ATGWeap_M249_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M249.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M249::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175221 ];

	ATGWeap_M249_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M249D.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M249D::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167801 ];

	UTGDmgType_M249D_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M249D.CauseMuzzleFlashLight
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_M249D::eventCauseMuzzleFlashLight ( )
{
	static UFunction* pFnCauseMuzzleFlashLight = NULL;

	if ( ! pFnCauseMuzzleFlashLight )
		pFnCauseMuzzleFlashLight = (UFunction*) UObject::GObjObjects()->Data[ 175284 ];

	ATGWeap_M249D_eventCauseMuzzleFlashLight_Parms CauseMuzzleFlashLight_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlashLight, &CauseMuzzleFlashLight_Parms, NULL );
};

// Function TGWeapon.TGWeap_M249D.CauseShellDrop
// [0x00820102] 
// Parameters infos:

void ATGWeap_M249D::CauseShellDrop ( )
{
	static UFunction* pFnCauseShellDrop = NULL;

	if ( ! pFnCauseShellDrop )
		pFnCauseShellDrop = (UFunction*) UObject::GObjObjects()->Data[ 175279 ];

	ATGWeap_M249D_execCauseShellDrop_Parms CauseShellDrop_Parms;

	this->ProcessEvent ( pFnCauseShellDrop, &CauseShellDrop_Parms, NULL );
};

// Function TGWeapon.TGWeap_M249D.AttachMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGWeap_M249D::AttachMuzzleFlash ( )
{
	static UFunction* pFnAttachMuzzleFlash = NULL;

	if ( ! pFnAttachMuzzleFlash )
		pFnAttachMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 175277 ];

	ATGWeap_M249D_execAttachMuzzleFlash_Parms AttachMuzzleFlash_Parms;

	this->ProcessEvent ( pFnAttachMuzzleFlash, &AttachMuzzleFlash_Parms, NULL );
};

// Function TGWeapon.TGWeap_M249D.MuzzleFlashTimer02
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_M249D::eventMuzzleFlashTimer02 ( )
{
	static UFunction* pFnMuzzleFlashTimer02 = NULL;

	if ( ! pFnMuzzleFlashTimer02 )
		pFnMuzzleFlashTimer02 = (UFunction*) UObject::GObjObjects()->Data[ 175276 ];

	ATGWeap_M249D_eventMuzzleFlashTimer02_Parms MuzzleFlashTimer02_Parms;

	this->ProcessEvent ( pFnMuzzleFlashTimer02, &MuzzleFlashTimer02_Parms, NULL );
};

// Function TGWeapon.TGWeap_M249D.CauseMuzzleFlash
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_M249D::eventCauseMuzzleFlash ( )
{
	static UFunction* pFnCauseMuzzleFlash = NULL;

	if ( ! pFnCauseMuzzleFlash )
		pFnCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 175273 ];

	ATGWeap_M249D_eventCauseMuzzleFlash_Parms CauseMuzzleFlash_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlash, &CauseMuzzleFlash_Parms, NULL );
};

// Function TGWeapon.TGWeap_M249D.PlayFireEffects2
// [0x00024102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void ATGWeap_M249D::PlayFireEffects2 ( unsigned char FireModeNum, struct FVector HitLocation )
{
	static UFunction* pFnPlayFireEffects2 = NULL;

	if ( ! pFnPlayFireEffects2 )
		pFnPlayFireEffects2 = (UFunction*) UObject::GObjObjects()->Data[ 175267 ];

	ATGWeap_M249D_execPlayFireEffects2_Parms PlayFireEffects2_Parms;
	PlayFireEffects2_Parms.FireModeNum = FireModeNum;
	memcpy ( &PlayFireEffects2_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayFireEffects2, &PlayFireEffects2_Parms, NULL );
};

// Function TGWeapon.TGWeap_M249D.PlayFireEffects
// [0x00024102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void ATGWeap_M249D::PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation )
{
	static UFunction* pFnPlayFireEffects = NULL;

	if ( ! pFnPlayFireEffects )
		pFnPlayFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 175262 ];

	ATGWeap_M249D_execPlayFireEffects_Parms PlayFireEffects_Parms;
	PlayFireEffects_Parms.FireModeNum = FireModeNum;
	memcpy ( &PlayFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayFireEffects, &PlayFireEffects_Parms, NULL );
};

// Function TGWeapon.TGWeap_M249D.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M249D::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175252 ];

	ATGWeap_M249D_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M249D.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M249D::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175250 ];

	ATGWeap_M249D_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M249D.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M249D::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175248 ];

	ATGWeap_M249D_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M249Fire.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M249Fire::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167816 ];

	UTGDmgType_M249Fire_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M249GAI.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M249GAI::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167835 ];

	UTGDmgType_M249GAI_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M249GAI.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M249GAI::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175303 ];

	ATGWeap_M249GAI_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M249GAI.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M249GAI::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175301 ];

	ATGWeap_M249GAI_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGWeap_M26Grenade.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGWeap_M26Grenade::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 175317 ];

	ATGWeap_M26Grenade_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGWeapon.TGDmgType_M48Gold.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M48Gold::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167859 ];

	UTGDmgType_M48Gold_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M48HAWK.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M48HAWK::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167874 ];

	UTGDmgType_M48HAWK_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167889 ];

	UTGDmgType_M4A1_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175339 ];

	ATGWeap_M4A1_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175337 ];

	ATGWeap_M4A1_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175335 ];

	ATGWeap_M4A1_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1_ACU.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1_ACU::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167900 ];

	UTGDmgType_M4A1_ACU_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_ACU.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_ACU::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175358 ];

	ATGWeap_M4A1_ACU_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_ACU.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_ACU::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175356 ];

	ATGWeap_M4A1_ACU_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_ACU.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_ACU::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175354 ];

	ATGWeap_M4A1_ACU_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1_AFM.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1_AFM::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167915 ];

	UTGDmgType_M4A1_AFM_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_AFM.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_AFM::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175377 ];

	ATGWeap_M4A1_AFM_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_AFM.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_AFM::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175375 ];

	ATGWeap_M4A1_AFM_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_AFM.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_AFM::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175373 ];

	ATGWeap_M4A1_AFM_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1_G.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1_G::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167930 ];

	UTGDmgType_M4A1_G_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_G.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_G::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175396 ];

	ATGWeap_M4A1_G_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_G.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_G::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175394 ];

	ATGWeap_M4A1_G_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_G.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_G::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175392 ];

	ATGWeap_M4A1_G_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1_Long_Range.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1_Long_Range::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167945 ];

	UTGDmgType_M4A1_Long_Range_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_Long_Range.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_Long_Range::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175415 ];

	ATGWeap_M4A1_Long_Range_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_Long_Range.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_Long_Range::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175413 ];

	ATGWeap_M4A1_Long_Range_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_Long_Range.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_Long_Range::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175411 ];

	ATGWeap_M4A1_Long_Range_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1_mend.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1_mend::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167960 ];

	UTGDmgType_M4A1_mend_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_mend.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_mend::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175434 ];

	ATGWeap_M4A1_mend_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_mend.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_mend::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175432 ];

	ATGWeap_M4A1_mend_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_mend.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_mend::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175430 ];

	ATGWeap_M4A1_mend_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1_NZ.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1_NZ::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167975 ];

	UTGDmgType_M4A1_NZ_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_NZ.DrawZoomedOverlay
// [0x00020102] 
// Parameters infos:
// class AHUD*                    H                              ( CPF_Parm )

void ATGWeap_M4A1_NZ::DrawZoomedOverlay ( class AHUD* H )
{
	static UFunction* pFnDrawZoomedOverlay = NULL;

	if ( ! pFnDrawZoomedOverlay )
		pFnDrawZoomedOverlay = (UFunction*) UObject::GObjObjects()->Data[ 175544 ];

	ATGWeap_M4A1_NZ_execDrawZoomedOverlay_Parms DrawZoomedOverlay_Parms;
	DrawZoomedOverlay_Parms.H = H;

	this->ProcessEvent ( pFnDrawZoomedOverlay, &DrawZoomedOverlay_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_NZ.DrawWeaponCrosshairEx
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGWeap_M4A1_NZ::DrawWeaponCrosshairEx ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshairEx = NULL;

	if ( ! pFnDrawWeaponCrosshairEx )
		pFnDrawWeaponCrosshairEx = (UFunction*) UObject::GObjObjects()->Data[ 175530 ];

	ATGWeap_M4A1_NZ_execDrawWeaponCrosshairEx_Parms DrawWeaponCrosshairEx_Parms;
	DrawWeaponCrosshairEx_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshairEx, &DrawWeaponCrosshairEx_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_NZ.DrawWeaponCrosshair
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGWeap_M4A1_NZ::DrawWeaponCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshair = NULL;

	if ( ! pFnDrawWeaponCrosshair )
		pFnDrawWeaponCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 175528 ];

	ATGWeap_M4A1_NZ_execDrawWeaponCrosshair_Parms DrawWeaponCrosshair_Parms;
	DrawWeaponCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshair, &DrawWeaponCrosshair_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_NZ.ReplayIdleAnim
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_NZ::ReplayIdleAnim ( )
{
	static UFunction* pFnReplayIdleAnim = NULL;

	if ( ! pFnReplayIdleAnim )
		pFnReplayIdleAnim = (UFunction*) UObject::GObjObjects()->Data[ 175526 ];

	ATGWeap_M4A1_NZ_execReplayIdleAnim_Parms ReplayIdleAnim_Parms;

	this->ProcessEvent ( pFnReplayIdleAnim, &ReplayIdleAnim_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_NZ.ToggleFireReference
// [0x00020102] 
// Parameters infos:
// unsigned long                  bTurnSecondaryAimFireRate      ( CPF_Parm )

void ATGWeap_M4A1_NZ::ToggleFireReference ( unsigned long bTurnSecondaryAimFireRate )
{
	static UFunction* pFnToggleFireReference = NULL;

	if ( ! pFnToggleFireReference )
		pFnToggleFireReference = (UFunction*) UObject::GObjObjects()->Data[ 175523 ];

	ATGWeap_M4A1_NZ_execToggleFireReference_Parms ToggleFireReference_Parms;
	ToggleFireReference_Parms.bTurnSecondaryAimFireRate = bTurnSecondaryAimFireRate;

	this->ProcessEvent ( pFnToggleFireReference, &ToggleFireReference_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_NZ.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_NZ::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175513 ];

	ATGWeap_M4A1_NZ_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_NZ.NotifySetCrossHair
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UTexture2D*              CrossHairHUD                   ( CPF_Parm )

void ATGWeap_M4A1_NZ::eventNotifySetCrossHair ( class UTexture2D* CrossHairHUD )
{
	static UFunction* pFnNotifySetCrossHair = NULL;

	if ( ! pFnNotifySetCrossHair )
		pFnNotifySetCrossHair = (UFunction*) UObject::GObjObjects()->Data[ 175511 ];

	ATGWeap_M4A1_NZ_eventNotifySetCrossHair_Parms NotifySetCrossHair_Parms;
	NotifySetCrossHair_Parms.CrossHairHUD = CrossHairHUD;

	this->ProcessEvent ( pFnNotifySetCrossHair, &NotifySetCrossHair_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_NZ.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_NZ::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175509 ];

	ATGWeap_M4A1_NZ_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1_old.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1_old::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 167990 ];

	UTGDmgType_M4A1_old_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_old.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_old::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175562 ];

	ATGWeap_M4A1_old_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_old.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_old::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175560 ];

	ATGWeap_M4A1_old_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_old.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_old::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175558 ];

	ATGWeap_M4A1_old_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1_Pircing.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1_Pircing::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168005 ];

	UTGDmgType_M4A1_Pircing_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_Pircing.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_Pircing::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175581 ];

	ATGWeap_M4A1_Pircing_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_Pircing.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_Pircing::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175579 ];

	ATGWeap_M4A1_Pircing_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_Pircing.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_Pircing::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175577 ];

	ATGWeap_M4A1_Pircing_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1_SCM.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1_SCM::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168020 ];

	UTGDmgType_M4A1_SCM_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_SCM.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_SCM::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175600 ];

	ATGWeap_M4A1_SCM_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_SCM.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_SCM::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175598 ];

	ATGWeap_M4A1_SCM_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_SCM.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_SCM::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175596 ];

	ATGWeap_M4A1_SCM_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1_Spe_Rel.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1_Spe_Rel::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168035 ];

	UTGDmgType_M4A1_Spe_Rel_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_Spe_Rel.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_Spe_Rel::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175619 ];

	ATGWeap_M4A1_Spe_Rel_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_Spe_Rel.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_Spe_Rel::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175617 ];

	ATGWeap_M4A1_Spe_Rel_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_Spe_Rel.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_Spe_Rel::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175615 ];

	ATGWeap_M4A1_Spe_Rel_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1_SPM.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1_SPM::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168050 ];

	UTGDmgType_M4A1_SPM_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_SPM.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_SPM::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175638 ];

	ATGWeap_M4A1_SPM_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_SPM.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_SPM::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175636 ];

	ATGWeap_M4A1_SPM_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1_SPM.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1_SPM::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175634 ];

	ATGWeap_M4A1_SPM_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1Diamond.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1Diamond::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168065 ];

	UTGDmgType_M4A1Diamond_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1Diamond.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1Diamond::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175657 ];

	ATGWeap_M4A1Diamond_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1Diamond.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1Diamond::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175655 ];

	ATGWeap_M4A1Diamond_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1Diamond.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1Diamond::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175653 ];

	ATGWeap_M4A1Diamond_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1Dragon.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1Dragon::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168080 ];

	UTGDmgType_M4A1Dragon_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1Dragon.NotifyWeaponHeadShot
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1Dragon::NotifyWeaponHeadShot ( )
{
	static UFunction* pFnNotifyWeaponHeadShot = NULL;

	if ( ! pFnNotifyWeaponHeadShot )
		pFnNotifyWeaponHeadShot = (UFunction*) UObject::GObjObjects()->Data[ 175697 ];

	ATGWeap_M4A1Dragon_execNotifyWeaponHeadShot_Parms NotifyWeaponHeadShot_Parms;

	this->ProcessEvent ( pFnNotifyWeaponHeadShot, &NotifyWeaponHeadShot_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1Dragon.Tick
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGWeap_M4A1Dragon::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 175694 ];

	ATGWeap_M4A1Dragon_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1Dragon.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1Dragon::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175679 ];

	ATGWeap_M4A1Dragon_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1Dragon.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1Dragon::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175677 ];

	ATGWeap_M4A1Dragon_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1Dragon.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1Dragon::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175675 ];

	ATGWeap_M4A1Dragon_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1Dragon.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

//void UTGDmgType_M4A1Dragon::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
//{
//	static UFunction* pFnSpawnHitEffect = NULL;
//
//	if ( ! pFnSpawnHitEffect )
//		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168091 ];
//
//	UTGDmgType_M4A1Dragon_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
//	SpawnHitEffect_Parms.P = P;
//	SpawnHitEffect_Parms.Damage = Damage;
//	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
//	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
//	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );
//
//	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
//};

// Function TGWeapon.TGDmgType_M4A1game.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1game::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168109 ];

	UTGDmgType_M4A1game_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1game.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1game::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175707 ];

	ATGWeap_M4A1game_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1game.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1game::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175705 ];

	ATGWeap_M4A1game_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1game.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1game::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175703 ];

	ATGWeap_M4A1game_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1GOLD.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1GOLD::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168124 ];

	UTGDmgType_M4A1GOLD_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1GOLD.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1GOLD::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175726 ];

	ATGWeap_M4A1GOLD_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1GOLD.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1GOLD::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175724 ];

	ATGWeap_M4A1GOLD_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1GOLD.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1GOLD::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175722 ];

	ATGWeap_M4A1GOLD_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1Member.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1Member::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168143 ];

	UTGDmgType_M4A1Member_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1Member.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1Member::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175745 ];

	ATGWeap_M4A1Member_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1Member.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1Member::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175743 ];

	ATGWeap_M4A1Member_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1Member.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1Member::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175741 ];

	ATGWeap_M4A1Member_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1OET.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1OET::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168158 ];

	UTGDmgType_M4A1OET_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1OET.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1OET::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175764 ];

	ATGWeap_M4A1OET_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1OET.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1OET::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175762 ];

	ATGWeap_M4A1OET_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1OET.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1OET::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175760 ];

	ATGWeap_M4A1OET_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1P_Gold.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1P_Gold::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168173 ];

	UTGDmgType_M4A1P_Gold_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1P_Gold.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1P_Gold::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175783 ];

	ATGWeap_M4A1P_Gold_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1P_Gold.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1P_Gold::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175781 ];

	ATGWeap_M4A1P_Gold_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1P_Gold.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1P_Gold::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175779 ];

	ATGWeap_M4A1P_Gold_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1Surpr.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1Surpr::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168188 ];

	UTGDmgType_M4A1Surpr_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1Surpr.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1Surpr::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175802 ];

	ATGWeap_M4A1Surpr_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1Surpr.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1Surpr::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175800 ];

	ATGWeap_M4A1Surpr_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1Surpr.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1Surpr::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175798 ];

	ATGWeap_M4A1Surpr_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1X.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4A1X::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168203 ];

	UTGDmgType_M4A1X_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1X.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1X::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175821 ];

	ATGWeap_M4A1X_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1X.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1X::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175819 ];

	ATGWeap_M4A1X_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4A1X.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4A1X::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175817 ];

	ATGWeap_M4A1X_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4A1X.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

//void UTGDmgType_M4A1X::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
//{
//	static UFunction* pFnSpawnHitEffect = NULL;
//
//	if ( ! pFnSpawnHitEffect )
//		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168214 ];
//
//	UTGDmgType_M4A1X_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
//	SpawnHitEffect_Parms.P = P;
//	SpawnHitEffect_Parms.Damage = Damage;
//	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
//	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
//	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );
//
//	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
//};

// Function TGWeapon.TGDmgType_M4fr_Copper.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4fr_Copper::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168232 ];

	UTGDmgType_M4fr_Copper_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4fr_Copper.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4fr_Copper::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175840 ];

	ATGWeap_M4fr_Copper_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4fr_Copper.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4fr_Copper::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175838 ];

	ATGWeap_M4fr_Copper_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4fr_Copper.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4fr_Copper::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175836 ];

	ATGWeap_M4fr_Copper_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4fr_Gold.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4fr_Gold::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168247 ];

	UTGDmgType_M4fr_Gold_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4fr_Gold.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4fr_Gold::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175859 ];

	ATGWeap_M4fr_Gold_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4fr_Gold.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4fr_Gold::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175857 ];

	ATGWeap_M4fr_Gold_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4fr_Gold.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4fr_Gold::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175855 ];

	ATGWeap_M4fr_Gold_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M4fr_Silver.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M4fr_Silver::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168262 ];

	UTGDmgType_M4fr_Silver_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4fr_Silver.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4fr_Silver::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175878 ];

	ATGWeap_M4fr_Silver_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4fr_Silver.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4fr_Silver::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175876 ];

	ATGWeap_M4fr_Silver_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M4fr_Silver.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M4fr_Silver::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175874 ];

	ATGWeap_M4fr_Silver_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M60.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M60::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168277 ];

	UTGDmgType_M60_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M60.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M60::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175897 ];

	ATGWeap_M60_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M60.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M60::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175895 ];

	ATGWeap_M60_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M60.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M60::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175893 ];

	ATGWeap_M60_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M608.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M608::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168288 ];

	UTGDmgType_M608_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M60_cloud.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M60_cloud::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168303 ];

	UTGDmgType_M60_cloud_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M60_cloud.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M60_cloud::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175920 ];

	ATGWeap_M60_cloud_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M60_cloud.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M60_cloud::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175918 ];

	ATGWeap_M60_cloud_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M60_cloud.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M60_cloud::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175916 ];

	ATGWeap_M60_cloud_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M60Child.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M60Child::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168318 ];

	UTGDmgType_M60Child_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M60Child.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M60Child::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175939 ];

	ATGWeap_M60Child_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M60Child.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M60Child::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175937 ];

	ATGWeap_M60Child_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M60Child.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M60Child::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175935 ];

	ATGWeap_M60Child_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M60oet.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M60oet::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168337 ];

	UTGDmgType_M60oet_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_M60oet.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_M60oet::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175958 ];

	ATGWeap_M60oet_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_M60oet.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_M60oet::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175956 ];

	ATGWeap_M60oet_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_M60oet.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_M60oet::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175954 ];

	ATGWeap_M60oet_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M95.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M95::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168352 ];

	UTGDmgType_M95_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M95GAI.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M95GAI::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168363 ];

	UTGDmgType_M95GAI_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M95gold.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M95gold::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168378 ];

	UTGDmgType_M95gold_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M95Snake.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M95Snake::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168397 ];

	UTGDmgType_M95Snake_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_M98b.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_M98b::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168412 ];

	UTGDmgType_M98b_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_MG3.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_MG3::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168427 ];

	UTGDmgType_MG3_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_MG3.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_MG3::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 175997 ];

	ATGWeap_MG3_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_MG3.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_MG3::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 175995 ];

	ATGWeap_MG3_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_MG3.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_MG3::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 175993 ];

	ATGWeap_MG3_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGWeap_MidAutumn.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGWeap_MidAutumn::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 176011 ];

	ATGWeap_MidAutumn_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGWeapon.TGDmgType_MINI14.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_MINI14::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168447 ];

	UTGDmgType_MINI14_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_MINI14.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_MINI14::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176025 ];

	ATGWeap_MINI14_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_MINI14.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_MINI14::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 176023 ];

	ATGWeap_MINI14_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_MINI14.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_MINI14::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176021 ];

	ATGWeap_MINI14_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_MiniGun.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_MiniGun::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168462 ];

	UTGDmgType_MiniGun_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_MinigunGAI.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_MinigunGAI::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168473 ];

	UTGDmgType_MinigunGAI_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_MinigunGold.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_MinigunGold::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168488 ];

	UTGDmgType_MinigunGold_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_MinigunSnake.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_MinigunSnake::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168507 ];

	UTGDmgType_MinigunSnake_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_MinigunSnake.RefeshSpecialGunMirror
// [0x00020102] 
// Parameters infos:

void ATGWeap_MinigunSnake::RefeshSpecialGunMirror ( )
{
	static UFunction* pFnRefeshSpecialGunMirror = NULL;

	if ( ! pFnRefeshSpecialGunMirror )
		pFnRefeshSpecialGunMirror = (UFunction*) UObject::GObjObjects()->Data[ 176080 ];

	ATGWeap_MinigunSnake_execRefeshSpecialGunMirror_Parms RefeshSpecialGunMirror_Parms;

	this->ProcessEvent ( pFnRefeshSpecialGunMirror, &RefeshSpecialGunMirror_Parms, NULL );
};

// Function TGWeapon.TGWeap_MinigunSnake.IsSpecialGun
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGWeap_MinigunSnake::IsSpecialGun ( )
{
	static UFunction* pFnIsSpecialGun = NULL;

	if ( ! pFnIsSpecialGun )
		pFnIsSpecialGun = (UFunction*) UObject::GObjObjects()->Data[ 176078 ];

	ATGWeap_MinigunSnake_execIsSpecialGun_Parms IsSpecialGun_Parms;

	this->ProcessEvent ( pFnIsSpecialGun, &IsSpecialGun_Parms, NULL );

	return IsSpecialGun_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_MinigunSnake.DelayActivateAmmoDisplayComp
// [0x00020102] 
// Parameters infos:

void ATGWeap_MinigunSnake::DelayActivateAmmoDisplayComp ( )
{
	static UFunction* pFnDelayActivateAmmoDisplayComp = NULL;

	if ( ! pFnDelayActivateAmmoDisplayComp )
		pFnDelayActivateAmmoDisplayComp = (UFunction*) UObject::GObjObjects()->Data[ 176077 ];

	ATGWeap_MinigunSnake_execDelayActivateAmmoDisplayComp_Parms DelayActivateAmmoDisplayComp_Parms;

	this->ProcessEvent ( pFnDelayActivateAmmoDisplayComp, &DelayActivateAmmoDisplayComp_Parms, NULL );
};

// Function TGWeapon.TGWeap_MinigunSnake.TimeWeaponEquipping
// [0x00020102] 
// Parameters infos:

void ATGWeap_MinigunSnake::TimeWeaponEquipping ( )
{
	static UFunction* pFnTimeWeaponEquipping = NULL;

	if ( ! pFnTimeWeaponEquipping )
		pFnTimeWeaponEquipping = (UFunction*) UObject::GObjObjects()->Data[ 176076 ];

	ATGWeap_MinigunSnake_execTimeWeaponEquipping_Parms TimeWeaponEquipping_Parms;

	this->ProcessEvent ( pFnTimeWeaponEquipping, &TimeWeaponEquipping_Parms, NULL );
};

// Function TGWeapon.TGWeap_MinigunSnake.DetachWeapon
// [0x00020102] 
// Parameters infos:

void ATGWeap_MinigunSnake::DetachWeapon ( )
{
	static UFunction* pFnDetachWeapon = NULL;

	if ( ! pFnDetachWeapon )
		pFnDetachWeapon = (UFunction*) UObject::GObjObjects()->Data[ 176075 ];

	ATGWeap_MinigunSnake_execDetachWeapon_Parms DetachWeapon_Parms;

	this->ProcessEvent ( pFnDetachWeapon, &DetachWeapon_Parms, NULL );
};

// Function TGWeapon.TGWeap_MinigunSnake.ModifyFiringSmokeGeer
// [0x00020102] 
// Parameters infos:

void ATGWeap_MinigunSnake::ModifyFiringSmokeGeer ( )
{
	static UFunction* pFnModifyFiringSmokeGeer = NULL;

	if ( ! pFnModifyFiringSmokeGeer )
		pFnModifyFiringSmokeGeer = (UFunction*) UObject::GObjObjects()->Data[ 176074 ];

	ATGWeap_MinigunSnake_execModifyFiringSmokeGeer_Parms ModifyFiringSmokeGeer_Parms;

	this->ProcessEvent ( pFnModifyFiringSmokeGeer, &ModifyFiringSmokeGeer_Parms, NULL );
};

// Function TGWeapon.TGWeap_MinigunSnake.NotifySmokeEffectInitialization
// [0x00020102] 
// Parameters infos:

void ATGWeap_MinigunSnake::NotifySmokeEffectInitialization ( )
{
	static UFunction* pFnNotifySmokeEffectInitialization = NULL;

	if ( ! pFnNotifySmokeEffectInitialization )
		pFnNotifySmokeEffectInitialization = (UFunction*) UObject::GObjObjects()->Data[ 176068 ];

	ATGWeap_MinigunSnake_execNotifySmokeEffectInitialization_Parms NotifySmokeEffectInitialization_Parms;

	this->ProcessEvent ( pFnNotifySmokeEffectInitialization, &NotifySmokeEffectInitialization_Parms, NULL );
};

// Function TGWeapon.TGWeap_MinigunSnake.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_MinigunSnake::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 176067 ];

	ATGWeap_MinigunSnake_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGWeapon.TGDmgType_Minimi.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_Minimi::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168522 ];

	UTGDmgType_Minimi_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_Minimi.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_Minimi::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176090 ];

	ATGWeap_Minimi_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_Minimi.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_Minimi::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 176088 ];

	ATGWeap_Minimi_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_Minimi.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_Minimi::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176086 ];

	ATGWeap_Minimi_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_MinimiGAI.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_MinimiGAI::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168533 ];

	UTGDmgType_MinimiGAI_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_MinimiGAI.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_MinimiGAI::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176109 ];

	ATGWeap_MinimiGAI_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_MinimiGAI.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_MinimiGAI::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 176107 ];

	ATGWeap_MinimiGAI_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_MinimiGAI.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_MinimiGAI::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176105 ];

	ATGWeap_MinimiGAI_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_MinimiOET.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_MinimiOET::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168552 ];

	UTGDmgType_MinimiOET_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_MinimiOET.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_MinimiOET::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176128 ];

	ATGWeap_MinimiOET_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_MinimiOET.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_MinimiOET::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 176126 ];

	ATGWeap_MinimiOET_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_MinimiOET.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_MinimiOET::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176124 ];

	ATGWeap_MinimiOET_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_MK2.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_MK2::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168567 ];

	UTGDmgType_MK2_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_MK2game.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_MK2game::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168578 ];

	UTGDmgType_MK2game_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_MK4.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_MK4::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168597 ];

	UTGDmgType_MK4_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_MK4gold.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_MK4gold::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168608 ];

	UTGDmgType_MK4gold_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_MK4QT.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_MK4QT::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168627 ];

	UTGDmgType_MK4QT_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_MK4Snake.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_MK4Snake::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168642 ];

	UTGDmgType_MK4Snake_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_MP5.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_MP5::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168657 ];

	UTGDmgType_MP5_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_MP5.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_MP5::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176168 ];

	ATGWeap_MP5_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_MP5.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_MP5::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176166 ];

	ATGWeap_MP5_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_MP5_fire.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_MP5_fire::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168668 ];

	UTGDmgType_MP5_fire_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_MP5_fire.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_MP5_fire::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176184 ];

	ATGWeap_MP5_fire_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_MP5_fire.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_MP5_fire::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176182 ];

	ATGWeap_MP5_fire_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_mp5SD10.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_mp5SD10::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168687 ];

	UTGDmgType_mp5SD10_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_mp5SD10.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_mp5SD10::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176200 ];

	ATGWeap_mp5SD10_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_mp5SD10.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_mp5SD10::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176198 ];

	ATGWeap_mp5SD10_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_MSR_G.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_MSR_G::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168702 ];

	UTGDmgType_MSR_G_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_MSRacu.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_MSRacu::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168717 ];

	UTGDmgType_MSRacu_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_MSRgame.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_MSRgame::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168732 ];

	UTGDmgType_MSRgame_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_MUAL.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_MUAL::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168747 ];

	UTGDmgType_MUAL_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_MUAL.ServerWeaponClipChanged
// [0x002200C2] 
// Parameters infos:

void ATGWeap_MUAL::ServerWeaponClipChanged ( )
{
	static UFunction* pFnServerWeaponClipChanged = NULL;

	if ( ! pFnServerWeaponClipChanged )
		pFnServerWeaponClipChanged = (UFunction*) UObject::GObjObjects()->Data[ 176253 ];

	ATGWeap_MUAL_execServerWeaponClipChanged_Parms ServerWeaponClipChanged_Parms;

	this->ProcessEvent ( pFnServerWeaponClipChanged, &ServerWeaponClipChanged_Parms, NULL );
};

// Function TGWeapon.TGWeap_MUAL.TimeWeaponClipChanging
// [0x00020102] 
// Parameters infos:

void ATGWeap_MUAL::TimeWeaponClipChanging ( )
{
	static UFunction* pFnTimeWeaponClipChanging = NULL;

	if ( ! pFnTimeWeaponClipChanging )
		pFnTimeWeaponClipChanging = (UFunction*) UObject::GObjObjects()->Data[ 176238 ];

	ATGWeap_MUAL_execTimeWeaponClipChanging_Parms TimeWeaponClipChanging_Parms;

	this->ProcessEvent ( pFnTimeWeaponClipChanging, &TimeWeaponClipChanging_Parms, NULL );
};

// Function TGWeapon.TGWeap_MUAL.CauseMuzzleFlashLight
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_MUAL::eventCauseMuzzleFlashLight ( )
{
	static UFunction* pFnCauseMuzzleFlashLight = NULL;

	if ( ! pFnCauseMuzzleFlashLight )
		pFnCauseMuzzleFlashLight = (UFunction*) UObject::GObjObjects()->Data[ 176237 ];

	ATGWeap_MUAL_eventCauseMuzzleFlashLight_Parms CauseMuzzleFlashLight_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlashLight, &CauseMuzzleFlashLight_Parms, NULL );
};

// Function TGWeapon.TGWeap_MUAL.CauseShellDrop
// [0x00020102] 
// Parameters infos:

void ATGWeap_MUAL::CauseShellDrop ( )
{
	static UFunction* pFnCauseShellDrop = NULL;

	if ( ! pFnCauseShellDrop )
		pFnCauseShellDrop = (UFunction*) UObject::GObjObjects()->Data[ 176236 ];

	ATGWeap_MUAL_execCauseShellDrop_Parms CauseShellDrop_Parms;

	this->ProcessEvent ( pFnCauseShellDrop, &CauseShellDrop_Parms, NULL );
};

// Function TGWeapon.TGWeap_MUAL.AttachMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGWeap_MUAL::AttachMuzzleFlash ( )
{
	static UFunction* pFnAttachMuzzleFlash = NULL;

	if ( ! pFnAttachMuzzleFlash )
		pFnAttachMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 176234 ];

	ATGWeap_MUAL_execAttachMuzzleFlash_Parms AttachMuzzleFlash_Parms;

	this->ProcessEvent ( pFnAttachMuzzleFlash, &AttachMuzzleFlash_Parms, NULL );
};

// Function TGWeapon.TGWeap_MUAL.MuzzleFlashTimer02
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_MUAL::eventMuzzleFlashTimer02 ( )
{
	static UFunction* pFnMuzzleFlashTimer02 = NULL;

	if ( ! pFnMuzzleFlashTimer02 )
		pFnMuzzleFlashTimer02 = (UFunction*) UObject::GObjObjects()->Data[ 176233 ];

	ATGWeap_MUAL_eventMuzzleFlashTimer02_Parms MuzzleFlashTimer02_Parms;

	this->ProcessEvent ( pFnMuzzleFlashTimer02, &MuzzleFlashTimer02_Parms, NULL );
};

// Function TGWeapon.TGWeap_MUAL.CauseMuzzleFlash
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_MUAL::eventCauseMuzzleFlash ( )
{
	static UFunction* pFnCauseMuzzleFlash = NULL;

	if ( ! pFnCauseMuzzleFlash )
		pFnCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 176230 ];

	ATGWeap_MUAL_eventCauseMuzzleFlash_Parms CauseMuzzleFlash_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlash, &CauseMuzzleFlash_Parms, NULL );
};

// Function TGWeapon.TGDmgType_nailbat.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_nailbat::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168762 ];

	UTGDmgType_nailbat_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_OTS14.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_OTS14::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168777 ];

	UTGDmgType_OTS14_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_OTS14.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_OTS14::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176267 ];

	ATGWeap_OTS14_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_OTS14.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_OTS14::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 176265 ];

	ATGWeap_OTS14_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_OTS14.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_OTS14::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176263 ];

	ATGWeap_OTS14_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_P90.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_P90::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168792 ];

	UTGDmgType_P90_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_P90.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_P90::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176283 ];

	ATGWeap_P90_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_P90.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_P90::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176281 ];

	ATGWeap_P90_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGWeap_Pumpkin.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGWeap_Pumpkin::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 176293 ];

	ATGWeap_Pumpkin_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGWeapon.TGDmgType_PVE03.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_PVE03::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168812 ];

	UTGDmgType_PVE03_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_PVE03.InstantFire
// [0x00820102] 
// Parameters infos:

void ATGWeap_PVE03::InstantFire ( )
{
	static UFunction* pFnInstantFire = NULL;

	if ( ! pFnInstantFire )
		pFnInstantFire = (UFunction*) UObject::GObjObjects()->Data[ 176309 ];

	ATGWeap_PVE03_execInstantFire_Parms InstantFire_Parms;

	this->ProcessEvent ( pFnInstantFire, &InstantFire_Parms, NULL );
};

// Function TGWeapon.TGWeap_PVE03.CauseMuzzleFlash
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_PVE03::eventCauseMuzzleFlash ( )
{
	static UFunction* pFnCauseMuzzleFlash = NULL;

	if ( ! pFnCauseMuzzleFlash )
		pFnCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 176302 ];

	ATGWeap_PVE03_eventCauseMuzzleFlash_Parms CauseMuzzleFlash_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlash, &CauseMuzzleFlash_Parms, NULL );
};

// Function TGWeapon.TGDmgType_PX4.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_PX4::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168827 ];

	UTGDmgType_PX4_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_QBS09.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_QBS09::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168842 ];

	UTGDmgType_QBS09_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBS09.PlayFireEffects
// [0x00024102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void ATGWeap_QBS09::PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation )
{
	static UFunction* pFnPlayFireEffects = NULL;

	if ( ! pFnPlayFireEffects )
		pFnPlayFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 176330 ];

	ATGWeap_QBS09_execPlayFireEffects_Parms PlayFireEffects_Parms;
	PlayFireEffects_Parms.FireModeNum = FireModeNum;
	memcpy ( &PlayFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayFireEffects, &PlayFireEffects_Parms, NULL );
};

// Function TGWeapon.TGDmgType_QBU10.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_QBU10::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168857 ];

	UTGDmgType_QBU10_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_QBU88.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_QBU88::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168872 ];

	UTGDmgType_QBU88_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBU88.InstantFire
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBU88::InstantFire ( )
{
	static UFunction* pFnInstantFire = NULL;

	if ( ! pFnInstantFire )
		pFnInstantFire = (UFunction*) UObject::GObjObjects()->Data[ 176366 ];

	ATGWeap_QBU88_execInstantFire_Parms InstantFire_Parms;

	this->ProcessEvent ( pFnInstantFire, &InstantFire_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBU88.EndFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGWeap_QBU88::EndFire ( unsigned char FireModeNum )
{
	static UFunction* pFnEndFire = NULL;

	if ( ! pFnEndFire )
		pFnEndFire = (UFunction*) UObject::GObjObjects()->Data[ 176364 ];

	ATGWeap_QBU88_execEndFire_Parms EndFire_Parms;
	EndFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnEndFire, &EndFire_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBU88.ServerGotoStateWeaponClipChanging
// [0x002200C2] 
// Parameters infos:

void ATGWeap_QBU88::ServerGotoStateWeaponClipChanging ( )
{
	static UFunction* pFnServerGotoStateWeaponClipChanging = NULL;

	if ( ! pFnServerGotoStateWeaponClipChanging )
		pFnServerGotoStateWeaponClipChanging = (UFunction*) UObject::GObjObjects()->Data[ 176362 ];

	ATGWeap_QBU88_execServerGotoStateWeaponClipChanging_Parms ServerGotoStateWeaponClipChanging_Parms;

	this->ProcessEvent ( pFnServerGotoStateWeaponClipChanging, &ServerGotoStateWeaponClipChanging_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBU88.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGWeap_QBU88::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 176356 ];

	ATGWeap_QBU88_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBU88.DisplaySpecial
// [0x00820102] 
// Parameters infos:
// class UCanvas*                 LocalCavas                     ( CPF_Parm )

void ATGWeap_QBU88::DisplaySpecial ( class UCanvas* LocalCavas )
{
	static UFunction* pFnDisplaySpecial = NULL;

	if ( ! pFnDisplaySpecial )
		pFnDisplaySpecial = (UFunction*) UObject::GObjObjects()->Data[ 176352 ];

	ATGWeap_QBU88_execDisplaySpecial_Parms DisplaySpecial_Parms;
	DisplaySpecial_Parms.LocalCavas = LocalCavas;

	this->ProcessEvent ( pFnDisplaySpecial, &DisplaySpecial_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBU88.FireAmmunition
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBU88::FireAmmunition ( )
{
	static UFunction* pFnFireAmmunition = NULL;

	if ( ! pFnFireAmmunition )
		pFnFireAmmunition = (UFunction*) UObject::GObjObjects()->Data[ 176346 ];

	ATGWeap_QBU88_execFireAmmunition_Parms FireAmmunition_Parms;

	this->ProcessEvent ( pFnFireAmmunition, &FireAmmunition_Parms, NULL );
};

// Function TGWeapon.TGDmgType_QBZ03.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_QBZ03::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168887 ];

	UTGDmgType_QBZ03_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBZ03.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBZ03::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176373 ];

	ATGWeap_QBZ03_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBZ03.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBZ03::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176371 ];

	ATGWeap_QBZ03_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_QBZ95.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_QBZ95::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168902 ];

	UTGDmgType_QBZ95_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBZ95.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBZ95::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176392 ];

	ATGWeap_QBZ95_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBZ95.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBZ95::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 176390 ];

	ATGWeap_QBZ95_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBZ95.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBZ95::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176388 ];

	ATGWeap_QBZ95_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_QBZ95_mend.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_QBZ95_mend::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168913 ];

	UTGDmgType_QBZ95_mend_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBZ95_mend.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBZ95_mend::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176411 ];

	ATGWeap_QBZ95_mend_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBZ95_mend.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBZ95_mend::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 176409 ];

	ATGWeap_QBZ95_mend_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBZ95_mend.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBZ95_mend::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176407 ];

	ATGWeap_QBZ95_mend_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_QBZ95cp.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_QBZ95cp::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168928 ];

	UTGDmgType_QBZ95cp_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBZ95cp.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBZ95cp::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176430 ];

	ATGWeap_QBZ95cp_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBZ95cp.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBZ95cp::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 176428 ];

	ATGWeap_QBZ95cp_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBZ95cp.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBZ95cp::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176426 ];

	ATGWeap_QBZ95cp_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_QBZ95gold.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_QBZ95gold::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168943 ];

	UTGDmgType_QBZ95gold_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBZ95gold.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBZ95gold::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176449 ];

	ATGWeap_QBZ95gold_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBZ95gold.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBZ95gold::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 176447 ];

	ATGWeap_QBZ95gold_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBZ95gold.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBZ95gold::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176445 ];

	ATGWeap_QBZ95gold_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_QBZ95OET.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_QBZ95OET::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168962 ];

	UTGDmgType_QBZ95OET_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBZ95OET.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBZ95OET::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176468 ];

	ATGWeap_QBZ95OET_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBZ95OET.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBZ95OET::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 176466 ];

	ATGWeap_QBZ95OET_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBZ95OET.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBZ95OET::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176464 ];

	ATGWeap_QBZ95OET_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_QBZ95Sil.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_QBZ95Sil::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168977 ];

	UTGDmgType_QBZ95Sil_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBZ95Sil.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBZ95Sil::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176487 ];

	ATGWeap_QBZ95Sil_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBZ95Sil.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBZ95Sil::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 176485 ];

	ATGWeap_QBZ95Sil_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_QBZ95Sil.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_QBZ95Sil::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176483 ];

	ATGWeap_QBZ95Sil_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_QJY88.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_QJY88::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 168992 ];

	UTGDmgType_QJY88_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_QJY88.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_QJY88::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176506 ];

	ATGWeap_QJY88_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_QJY88.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_QJY88::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 176504 ];

	ATGWeap_QJY88_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_QJY88.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_QJY88::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176502 ];

	ATGWeap_QJY88_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_QJY88oet.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_QJY88oet::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169007 ];

	UTGDmgType_QJY88oet_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_QJY88oet.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_QJY88oet::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176525 ];

	ATGWeap_QJY88oet_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_QJY88oet.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_QJY88oet::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 176523 ];

	ATGWeap_QJY88oet_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_QJY88oet.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_QJY88oet::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176521 ];

	ATGWeap_QJY88oet_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_QSZ92.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_QSZ92::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169022 ];

	UTGDmgType_QSZ92_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_R700.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_R700::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169037 ];

	UTGDmgType_R700_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_R700GAI.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_R700GAI::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169048 ];

	UTGDmgType_R700GAI_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_Remington_MSR.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_Remington_MSR::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169067 ];

	UTGDmgType_Remington_MSR_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_RPK.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_RPK::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169082 ];

	UTGDmgType_RPK_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPK.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_RPK::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176560 ];

	ATGWeap_RPK_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPK.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_RPK::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 176558 ];

	ATGWeap_RPK_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPK.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_RPK::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176556 ];

	ATGWeap_RPK_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_RPKGAI.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_RPKGAI::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169093 ];

	UTGDmgType_RPKGAI_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPKGAI.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_RPKGAI::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176579 ];

	ATGWeap_RPKGAI_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPKGAI.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_RPKGAI::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 176577 ];

	ATGWeap_RPKGAI_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPKGAI.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_RPKGAI::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176575 ];

	ATGWeap_RPKGAI_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_RPKgold.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_RPKgold::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169108 ];

	UTGDmgType_RPKgold_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPKgold.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_RPKgold::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176598 ];

	ATGWeap_RPKgold_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPKgold.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_RPKgold::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 176596 ];

	ATGWeap_RPKgold_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPKgold.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_RPKgold::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176594 ];

	ATGWeap_RPKgold_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_RPKM.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_RPKM::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169127 ];

	UTGDmgType_RPKM_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPKM.DelayResetPoisonTubeColorGreen
// [0x00820102] 
// Parameters infos:

void ATGWeap_RPKM::DelayResetPoisonTubeColorGreen ( )
{
	static UFunction* pFnDelayResetPoisonTubeColorGreen = NULL;

	if ( ! pFnDelayResetPoisonTubeColorGreen )
		pFnDelayResetPoisonTubeColorGreen = (UFunction*) UObject::GObjObjects()->Data[ 176661 ];

	ATGWeap_RPKM_execDelayResetPoisonTubeColorGreen_Parms DelayResetPoisonTubeColorGreen_Parms;

	this->ProcessEvent ( pFnDelayResetPoisonTubeColorGreen, &DelayResetPoisonTubeColorGreen_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPKM.SetPoisionTubeColor
// [0x00820102] 
// Parameters infos:

void ATGWeap_RPKM::SetPoisionTubeColor ( )
{
	static UFunction* pFnSetPoisionTubeColor = NULL;

	if ( ! pFnSetPoisionTubeColor )
		pFnSetPoisionTubeColor = (UFunction*) UObject::GObjObjects()->Data[ 176659 ];

	ATGWeap_RPKM_execSetPoisionTubeColor_Parms SetPoisionTubeColor_Parms;

	this->ProcessEvent ( pFnSetPoisionTubeColor, &SetPoisionTubeColor_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPKM.FullAmmo
// [0x00020102] 
// Parameters infos:

void ATGWeap_RPKM::FullAmmo ( )
{
	static UFunction* pFnFullAmmo = NULL;

	if ( ! pFnFullAmmo )
		pFnFullAmmo = (UFunction*) UObject::GObjObjects()->Data[ 176658 ];

	ATGWeap_RPKM_execFullAmmo_Parms FullAmmo_Parms;

	this->ProcessEvent ( pFnFullAmmo, &FullAmmo_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPKM.TimeWeaponClipChanging
// [0x00020102] 
// Parameters infos:

void ATGWeap_RPKM::TimeWeaponClipChanging ( )
{
	static UFunction* pFnTimeWeaponClipChanging = NULL;

	if ( ! pFnTimeWeaponClipChanging )
		pFnTimeWeaponClipChanging = (UFunction*) UObject::GObjObjects()->Data[ 176657 ];

	ATGWeap_RPKM_execTimeWeaponClipChanging_Parms TimeWeaponClipChanging_Parms;

	this->ProcessEvent ( pFnTimeWeaponClipChanging, &TimeWeaponClipChanging_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPKM.DetachWeapon
// [0x00020102] 
// Parameters infos:

void ATGWeap_RPKM::DetachWeapon ( )
{
	static UFunction* pFnDetachWeapon = NULL;

	if ( ! pFnDetachWeapon )
		pFnDetachWeapon = (UFunction*) UObject::GObjObjects()->Data[ 176656 ];

	ATGWeap_RPKM_execDetachWeapon_Parms DetachWeapon_Parms;

	this->ProcessEvent ( pFnDetachWeapon, &DetachWeapon_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPKM.TimeWeaponEquipping
// [0x00020102] 
// Parameters infos:

void ATGWeap_RPKM::TimeWeaponEquipping ( )
{
	static UFunction* pFnTimeWeaponEquipping = NULL;

	if ( ! pFnTimeWeaponEquipping )
		pFnTimeWeaponEquipping = (UFunction*) UObject::GObjObjects()->Data[ 176655 ];

	ATGWeap_RPKM_execTimeWeaponEquipping_Parms TimeWeaponEquipping_Parms;

	this->ProcessEvent ( pFnTimeWeaponEquipping, &TimeWeaponEquipping_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPKM.PlayGrenadeThrowEffect
// [0x00820102] 
// Parameters infos:

void ATGWeap_RPKM::PlayGrenadeThrowEffect ( )
{
	static UFunction* pFnPlayGrenadeThrowEffect = NULL;

	if ( ! pFnPlayGrenadeThrowEffect )
		pFnPlayGrenadeThrowEffect = (UFunction*) UObject::GObjObjects()->Data[ 176653 ];

	ATGWeap_RPKM_execPlayGrenadeThrowEffect_Parms PlayGrenadeThrowEffect_Parms;

	this->ProcessEvent ( pFnPlayGrenadeThrowEffect, &PlayGrenadeThrowEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPKM.SetDamageScale
// [0x00024002] 
// Parameters infos:
// float                          InDamageScale                  ( CPF_Parm )
// unsigned long                  bIsSpecial                     ( CPF_OptionalParm | CPF_Parm )

void ATGWeap_RPKM::SetDamageScale ( float InDamageScale, unsigned long bIsSpecial )
{
	static UFunction* pFnSetDamageScale = NULL;

	if ( ! pFnSetDamageScale )
		pFnSetDamageScale = (UFunction*) UObject::GObjObjects()->Data[ 176650 ];

	ATGWeap_RPKM_execSetDamageScale_Parms SetDamageScale_Parms;
	SetDamageScale_Parms.InDamageScale = InDamageScale;
	SetDamageScale_Parms.bIsSpecial = bIsSpecial;

	this->ProcessEvent ( pFnSetDamageScale, &SetDamageScale_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPKM.SetAmmoCountScale
// [0x00024002] 
// Parameters infos:
// float                          ClipAmmoCountScale             ( CPF_Parm )
// float                          CarriedAmmoCountScale          ( CPF_Parm )
// unsigned long                  bIsSpecialWeapon               ( CPF_OptionalParm | CPF_Parm )

void ATGWeap_RPKM::SetAmmoCountScale ( float ClipAmmoCountScale, float CarriedAmmoCountScale, unsigned long bIsSpecialWeapon )
{
	static UFunction* pFnSetAmmoCountScale = NULL;

	if ( ! pFnSetAmmoCountScale )
		pFnSetAmmoCountScale = (UFunction*) UObject::GObjObjects()->Data[ 176646 ];

	ATGWeap_RPKM_execSetAmmoCountScale_Parms SetAmmoCountScale_Parms;
	SetAmmoCountScale_Parms.ClipAmmoCountScale = ClipAmmoCountScale;
	SetAmmoCountScale_Parms.CarriedAmmoCountScale = CarriedAmmoCountScale;
	SetAmmoCountScale_Parms.bIsSpecialWeapon = bIsSpecialWeapon;

	this->ProcessEvent ( pFnSetAmmoCountScale, &SetAmmoCountScale_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPKM.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGWeap_RPKM::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 176639 ];

	ATGWeap_RPKM_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_RPKM.GetClipChangeTime
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGWeap_RPKM::GetClipChangeTime ( )
{
	static UFunction* pFnGetClipChangeTime = NULL;

	if ( ! pFnGetClipChangeTime )
		pFnGetClipChangeTime = (UFunction*) UObject::GObjObjects()->Data[ 176636 ];

	ATGWeap_RPKM_execGetClipChangeTime_Parms GetClipChangeTime_Parms;

	this->ProcessEvent ( pFnGetClipChangeTime, &GetClipChangeTime_Parms, NULL );

	return GetClipChangeTime_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_RPKM.ModifyWeaponSpecificProperty
// [0x00020102] 
// Parameters infos:
// struct FName                   PropertyName                   ( CPF_Parm )
// float                          PropertyValue                  ( CPF_Parm )

void ATGWeap_RPKM::ModifyWeaponSpecificProperty ( struct FName PropertyName, float PropertyValue )
{
	static UFunction* pFnModifyWeaponSpecificProperty = NULL;

	if ( ! pFnModifyWeaponSpecificProperty )
		pFnModifyWeaponSpecificProperty = (UFunction*) UObject::GObjObjects()->Data[ 176633 ];

	ATGWeap_RPKM_execModifyWeaponSpecificProperty_Parms ModifyWeaponSpecificProperty_Parms;
	memcpy ( &ModifyWeaponSpecificProperty_Parms.PropertyName, &PropertyName, 0x8 );
	ModifyWeaponSpecificProperty_Parms.PropertyValue = PropertyValue;

	this->ProcessEvent ( pFnModifyWeaponSpecificProperty, &ModifyWeaponSpecificProperty_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPKM.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_RPKM::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176623 ];

	ATGWeap_RPKM_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPKM.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_RPKM::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 176621 ];

	ATGWeap_RPKM_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_RPKM.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_RPKM::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176619 ];

	ATGWeap_RPKM_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_SA58.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_SA58::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169146 ];

	UTGDmgType_SA58_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_SA58.DrawZoomedOverlay
// [0x00020102] 
// Parameters infos:
// class AHUD*                    H                              ( CPF_Parm )

void ATGWeap_SA58::DrawZoomedOverlay ( class AHUD* H )
{
	static UFunction* pFnDrawZoomedOverlay = NULL;

	if ( ! pFnDrawZoomedOverlay )
		pFnDrawZoomedOverlay = (UFunction*) UObject::GObjObjects()->Data[ 176763 ];

	ATGWeap_SA58_execDrawZoomedOverlay_Parms DrawZoomedOverlay_Parms;
	DrawZoomedOverlay_Parms.H = H;

	this->ProcessEvent ( pFnDrawZoomedOverlay, &DrawZoomedOverlay_Parms, NULL );
};

// Function TGWeapon.TGWeap_SA58.DrawWeaponCrosshairEx
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGWeap_SA58::DrawWeaponCrosshairEx ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshairEx = NULL;

	if ( ! pFnDrawWeaponCrosshairEx )
		pFnDrawWeaponCrosshairEx = (UFunction*) UObject::GObjObjects()->Data[ 176749 ];

	ATGWeap_SA58_execDrawWeaponCrosshairEx_Parms DrawWeaponCrosshairEx_Parms;
	DrawWeaponCrosshairEx_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshairEx, &DrawWeaponCrosshairEx_Parms, NULL );
};

// Function TGWeapon.TGWeap_SA58.DrawWeaponCrosshair
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGWeap_SA58::DrawWeaponCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshair = NULL;

	if ( ! pFnDrawWeaponCrosshair )
		pFnDrawWeaponCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 176747 ];

	ATGWeap_SA58_execDrawWeaponCrosshair_Parms DrawWeaponCrosshair_Parms;
	DrawWeaponCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshair, &DrawWeaponCrosshair_Parms, NULL );
};

// Function TGWeapon.TGWeap_SA58.ReplayIdleAnim
// [0x00020102] 
// Parameters infos:

void ATGWeap_SA58::ReplayIdleAnim ( )
{
	static UFunction* pFnReplayIdleAnim = NULL;

	if ( ! pFnReplayIdleAnim )
		pFnReplayIdleAnim = (UFunction*) UObject::GObjObjects()->Data[ 176745 ];

	ATGWeap_SA58_execReplayIdleAnim_Parms ReplayIdleAnim_Parms;

	this->ProcessEvent ( pFnReplayIdleAnim, &ReplayIdleAnim_Parms, NULL );
};

// Function TGWeapon.TGWeap_SA58.ToggleFireReference
// [0x00020102] 
// Parameters infos:
// unsigned long                  bTurnSecondaryAimFireRate      ( CPF_Parm )

void ATGWeap_SA58::ToggleFireReference ( unsigned long bTurnSecondaryAimFireRate )
{
	static UFunction* pFnToggleFireReference = NULL;

	if ( ! pFnToggleFireReference )
		pFnToggleFireReference = (UFunction*) UObject::GObjObjects()->Data[ 176742 ];

	ATGWeap_SA58_execToggleFireReference_Parms ToggleFireReference_Parms;
	ToggleFireReference_Parms.bTurnSecondaryAimFireRate = bTurnSecondaryAimFireRate;

	this->ProcessEvent ( pFnToggleFireReference, &ToggleFireReference_Parms, NULL );
};

// Function TGWeapon.TGWeap_SA58.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_SA58::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176732 ];

	ATGWeap_SA58_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_SA58.NotifySetCrossHair
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UTexture2D*              CrossHairHUD                   ( CPF_Parm )

void ATGWeap_SA58::eventNotifySetCrossHair ( class UTexture2D* CrossHairHUD )
{
	static UFunction* pFnNotifySetCrossHair = NULL;

	if ( ! pFnNotifySetCrossHair )
		pFnNotifySetCrossHair = (UFunction*) UObject::GObjObjects()->Data[ 176730 ];

	ATGWeap_SA58_eventNotifySetCrossHair_Parms NotifySetCrossHair_Parms;
	NotifySetCrossHair_Parms.CrossHairHUD = CrossHairHUD;

	this->ProcessEvent ( pFnNotifySetCrossHair, &NotifySetCrossHair_Parms, NULL );
};

// Function TGWeapon.TGWeap_SA58.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_SA58::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176728 ];

	ATGWeap_SA58_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_SCAR.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_SCAR::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169161 ];

	UTGDmgType_SCAR_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_SCAR.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_SCAR::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176778 ];

	ATGWeap_SCAR_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_SCAR.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_SCAR::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176776 ];

	ATGWeap_SCAR_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_SCAR_PHL.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_SCAR_PHL::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169172 ];

	UTGDmgType_SCAR_PHL_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_SCAR_PHL.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_SCAR_PHL::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176794 ];

	ATGWeap_SCAR_PHL_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_SCAR_PHL.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_SCAR_PHL::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176792 ];

	ATGWeap_SCAR_PHL_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_SCAR_RAZER.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_SCAR_RAZER::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169187 ];

	UTGDmgType_SCAR_RAZER_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_SCAR_RAZER.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_SCAR_RAZER::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176813 ];

	ATGWeap_SCAR_RAZER_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_SCAR_RAZER.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_SCAR_RAZER::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 176811 ];

	ATGWeap_SCAR_RAZER_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_SCAR_RAZER.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_SCAR_RAZER::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176809 ];

	ATGWeap_SCAR_RAZER_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_SCARDJ.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_SCARDJ::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169202 ];

	UTGDmgType_SCARDJ_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_SCARDJ.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_SCARDJ::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176833 ];

	ATGWeap_SCARDJ_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_SCARDJ.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_SCARDJ::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176831 ];

	ATGWeap_SCARDJ_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGWeap_SCARDJ.DisplaySpecial
// [0x00820102] 
// Parameters infos:
// class UCanvas*                 LocalCavas                     ( CPF_Parm )

void ATGWeap_SCARDJ::DisplaySpecial ( class UCanvas* LocalCavas )
{
	static UFunction* pFnDisplaySpecial = NULL;

	if ( ! pFnDisplaySpecial )
		pFnDisplaySpecial = (UFunction*) UObject::GObjObjects()->Data[ 176827 ];

	ATGWeap_SCARDJ_execDisplaySpecial_Parms DisplaySpecial_Parms;
	DisplaySpecial_Parms.LocalCavas = LocalCavas;

	this->ProcessEvent ( pFnDisplaySpecial, &DisplaySpecial_Parms, NULL );
};

// Function TGWeapon.TGDmgType_SCARDJ2.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_SCARDJ2::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169213 ];

	UTGDmgType_SCARDJ2_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_SCARGAI.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_SCARGAI::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169231 ];

	UTGDmgType_SCARGAI_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_SCARGAI.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_SCARGAI::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176852 ];

	ATGWeap_SCARGAI_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_SCARGAI.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_SCARGAI::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 176850 ];

	ATGWeap_SCARGAI_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_SCARGAI.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_SCARGAI::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176848 ];

	ATGWeap_SCARGAI_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_SCARSnake.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_SCARSnake::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169250 ];

	UTGDmgType_SCARSnake_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_SCARSnake.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_SCARSnake::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176868 ];

	ATGWeap_SCARSnake_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_SCARSnake.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_SCARSnake::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176866 ];

	ATGWeap_SCARSnake_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_SG551.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_SG551::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169265 ];

	UTGDmgType_SG551_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_SG551.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_SG551::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176884 ];

	ATGWeap_SG551_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_SG551.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_SG551::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176882 ];

	ATGWeap_SG551_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_SG551GAI.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_SG551GAI::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169276 ];

	UTGDmgType_SG551GAI_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_SG551GAI.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_SG551GAI::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176900 ];

	ATGWeap_SG551GAI_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_SG551GAI.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_SG551GAI::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176898 ];

	ATGWeap_SG551GAI_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_ShotGun.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_ShotGun::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169295 ];

	UTGDmgType_ShotGun_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_ShotgunFour.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_ShotgunFour::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169306 ];

	UTGDmgType_ShotgunFour_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_ShotgunFour.ServerWeaponClipChanged
// [0x002200C2] 
// Parameters infos:

void ATGWeap_ShotgunFour::ServerWeaponClipChanged ( )
{
	static UFunction* pFnServerWeaponClipChanged = NULL;

	if ( ! pFnServerWeaponClipChanged )
		pFnServerWeaponClipChanged = (UFunction*) UObject::GObjObjects()->Data[ 176933 ];

	ATGWeap_ShotgunFour_execServerWeaponClipChanged_Parms ServerWeaponClipChanged_Parms;

	this->ProcessEvent ( pFnServerWeaponClipChanged, &ServerWeaponClipChanged_Parms, NULL );
};

// Function TGWeapon.TGWeap_ShotgunFour.TimeWeaponClipChanging
// [0x00020102] 
// Parameters infos:

void ATGWeap_ShotgunFour::TimeWeaponClipChanging ( )
{
	static UFunction* pFnTimeWeaponClipChanging = NULL;

	if ( ! pFnTimeWeaponClipChanging )
		pFnTimeWeaponClipChanging = (UFunction*) UObject::GObjObjects()->Data[ 176918 ];

	ATGWeap_ShotgunFour_execTimeWeaponClipChanging_Parms TimeWeaponClipChanging_Parms;

	this->ProcessEvent ( pFnTimeWeaponClipChanging, &TimeWeaponClipChanging_Parms, NULL );
};

// Function TGWeapon.TGDmgType_sigACP.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_sigACP::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169325 ];

	UTGDmgType_sigACP_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_sigACP.CauseMuzzleFlashLight
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_sigACP::eventCauseMuzzleFlashLight ( )
{
	static UFunction* pFnCauseMuzzleFlashLight = NULL;

	if ( ! pFnCauseMuzzleFlashLight )
		pFnCauseMuzzleFlashLight = (UFunction*) UObject::GObjObjects()->Data[ 176979 ];

	ATGWeap_sigACP_eventCauseMuzzleFlashLight_Parms CauseMuzzleFlashLight_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlashLight, &CauseMuzzleFlashLight_Parms, NULL );
};

// Function TGWeapon.TGWeap_sigACP.CauseShellDrop
// [0x00820102] 
// Parameters infos:

void ATGWeap_sigACP::CauseShellDrop ( )
{
	static UFunction* pFnCauseShellDrop = NULL;

	if ( ! pFnCauseShellDrop )
		pFnCauseShellDrop = (UFunction*) UObject::GObjObjects()->Data[ 176974 ];

	ATGWeap_sigACP_execCauseShellDrop_Parms CauseShellDrop_Parms;

	this->ProcessEvent ( pFnCauseShellDrop, &CauseShellDrop_Parms, NULL );
};

// Function TGWeapon.TGWeap_sigACP.AttachMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGWeap_sigACP::AttachMuzzleFlash ( )
{
	static UFunction* pFnAttachMuzzleFlash = NULL;

	if ( ! pFnAttachMuzzleFlash )
		pFnAttachMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 176972 ];

	ATGWeap_sigACP_execAttachMuzzleFlash_Parms AttachMuzzleFlash_Parms;

	this->ProcessEvent ( pFnAttachMuzzleFlash, &AttachMuzzleFlash_Parms, NULL );
};

// Function TGWeapon.TGWeap_sigACP.MuzzleFlashTimer02
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_sigACP::eventMuzzleFlashTimer02 ( )
{
	static UFunction* pFnMuzzleFlashTimer02 = NULL;

	if ( ! pFnMuzzleFlashTimer02 )
		pFnMuzzleFlashTimer02 = (UFunction*) UObject::GObjObjects()->Data[ 176971 ];

	ATGWeap_sigACP_eventMuzzleFlashTimer02_Parms MuzzleFlashTimer02_Parms;

	this->ProcessEvent ( pFnMuzzleFlashTimer02, &MuzzleFlashTimer02_Parms, NULL );
};

// Function TGWeapon.TGWeap_sigACP.CauseMuzzleFlash
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_sigACP::eventCauseMuzzleFlash ( )
{
	static UFunction* pFnCauseMuzzleFlash = NULL;

	if ( ! pFnCauseMuzzleFlash )
		pFnCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 176968 ];

	ATGWeap_sigACP_eventCauseMuzzleFlash_Parms CauseMuzzleFlash_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlash, &CauseMuzzleFlash_Parms, NULL );
};

// Function TGWeapon.TGWeap_sigACP.PlayFireEffects
// [0x00024102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void ATGWeap_sigACP::PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation )
{
	static UFunction* pFnPlayFireEffects = NULL;

	if ( ! pFnPlayFireEffects )
		pFnPlayFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 176963 ];

	ATGWeap_sigACP_execPlayFireEffects_Parms PlayFireEffects_Parms;
	PlayFireEffects_Parms.FireModeNum = FireModeNum;
	memcpy ( &PlayFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayFireEffects, &PlayFireEffects_Parms, NULL );
};

// Function TGWeapon.TGWeap_sigACP.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_sigACP::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 176953 ];

	ATGWeap_sigACP_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_sigACP.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_sigACP::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 176951 ];

	ATGWeap_sigACP_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_sigACP.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_sigACP::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 176949 ];

	ATGWeap_sigACP_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_SnakeSword.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_SnakeSword::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169340 ];

	UTGDmgType_SnakeSword_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_SnakeSword.PlayFirstPersonAnim
// [0x00020102] 
// Parameters infos:

void ATGWeap_SnakeSword::PlayFirstPersonAnim ( )
{
	static UFunction* pFnPlayFirstPersonAnim = NULL;

	if ( ! pFnPlayFirstPersonAnim )
		pFnPlayFirstPersonAnim = (UFunction*) UObject::GObjObjects()->Data[ 176993 ];

	ATGWeap_SnakeSword_execPlayFirstPersonAnim_Parms PlayFirstPersonAnim_Parms;

	this->ProcessEvent ( pFnPlayFirstPersonAnim, &PlayFirstPersonAnim_Parms, NULL );
};

// Function TGWeapon.TGWeap_SnowBall.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGWeap_SnowBall::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 177002 ];

	ATGWeap_SnowBall_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGWeapon.TGDmgType_SPAS12.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_SPAS12::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169360 ];

	UTGDmgType_SPAS12_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_SPAS12.CalcWeaponFireEX
// [0x00C24102] 
// Parameters infos:
// struct FImpactInfo             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartTrace                     ( CPF_Parm )
// struct FVector                 EndTrace                       ( CPF_Parm )
// TArray< struct FImpactInfo >   ImpactList                     ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FClientAttackPawnInfo > AttackPInfoList                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

struct FImpactInfo ATGWeap_SPAS12::CalcWeaponFireEX ( struct FVector StartTrace, struct FVector EndTrace, TArray< struct FImpactInfo >* ImpactList, TArray< struct FClientAttackPawnInfo >* AttackPInfoList )
{
	static UFunction* pFnCalcWeaponFireEX = NULL;

	if ( ! pFnCalcWeaponFireEX )
		pFnCalcWeaponFireEX = (UFunction*) UObject::GObjObjects()->Data[ 177011 ];

	ATGWeap_SPAS12_execCalcWeaponFireEX_Parms CalcWeaponFireEX_Parms;
	memcpy ( &CalcWeaponFireEX_Parms.StartTrace, &StartTrace, 0xC );
	memcpy ( &CalcWeaponFireEX_Parms.EndTrace, &EndTrace, 0xC );

	this->ProcessEvent ( pFnCalcWeaponFireEX, &CalcWeaponFireEX_Parms, NULL );

	if ( ImpactList )
		memcpy ( ImpactList, &CalcWeaponFireEX_Parms.ImpactList, 0xC );

	if ( AttackPInfoList )
		memcpy ( AttackPInfoList, &CalcWeaponFireEX_Parms.AttackPInfoList, 0xC );

	return CalcWeaponFireEX_Parms.ReturnValue;
};

// Function TGWeapon.TGDmgType_SPAS12_dust.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_SPAS12_dust::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169371 ];

	UTGDmgType_SPAS12_dust_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_SuckGrenade.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGWeap_SuckGrenade::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 177028 ];

	ATGWeap_SuckGrenade_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGWeapon.TGDmgType_SVD.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_SVD::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169395 ];

	UTGDmgType_SVD_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_SVD.InstantFire
// [0x00020102] 
// Parameters infos:

void ATGWeap_SVD::InstantFire ( )
{
	static UFunction* pFnInstantFire = NULL;

	if ( ! pFnInstantFire )
		pFnInstantFire = (UFunction*) UObject::GObjObjects()->Data[ 177060 ];

	ATGWeap_SVD_execInstantFire_Parms InstantFire_Parms;

	this->ProcessEvent ( pFnInstantFire, &InstantFire_Parms, NULL );
};

// Function TGWeapon.TGWeap_SVD.EndFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGWeap_SVD::EndFire ( unsigned char FireModeNum )
{
	static UFunction* pFnEndFire = NULL;

	if ( ! pFnEndFire )
		pFnEndFire = (UFunction*) UObject::GObjObjects()->Data[ 177058 ];

	ATGWeap_SVD_execEndFire_Parms EndFire_Parms;
	EndFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnEndFire, &EndFire_Parms, NULL );
};

// Function TGWeapon.TGWeap_SVD.ServerGotoStateWeaponClipChanging
// [0x002200C2] 
// Parameters infos:

void ATGWeap_SVD::ServerGotoStateWeaponClipChanging ( )
{
	static UFunction* pFnServerGotoStateWeaponClipChanging = NULL;

	if ( ! pFnServerGotoStateWeaponClipChanging )
		pFnServerGotoStateWeaponClipChanging = (UFunction*) UObject::GObjObjects()->Data[ 177056 ];

	ATGWeap_SVD_execServerGotoStateWeaponClipChanging_Parms ServerGotoStateWeaponClipChanging_Parms;

	this->ProcessEvent ( pFnServerGotoStateWeaponClipChanging, &ServerGotoStateWeaponClipChanging_Parms, NULL );
};

// Function TGWeapon.TGWeap_SVD.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGWeap_SVD::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 177050 ];

	ATGWeap_SVD_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGWeapon.TGWeap_SVD.DisplaySpecial
// [0x00820102] 
// Parameters infos:
// class UCanvas*                 LocalCavas                     ( CPF_Parm )

void ATGWeap_SVD::DisplaySpecial ( class UCanvas* LocalCavas )
{
	static UFunction* pFnDisplaySpecial = NULL;

	if ( ! pFnDisplaySpecial )
		pFnDisplaySpecial = (UFunction*) UObject::GObjObjects()->Data[ 177046 ];

	ATGWeap_SVD_execDisplaySpecial_Parms DisplaySpecial_Parms;
	DisplaySpecial_Parms.LocalCavas = LocalCavas;

	this->ProcessEvent ( pFnDisplaySpecial, &DisplaySpecial_Parms, NULL );
};

// Function TGWeapon.TGWeap_SVD.FireAmmunition
// [0x00020102] 
// Parameters infos:

void ATGWeap_SVD::FireAmmunition ( )
{
	static UFunction* pFnFireAmmunition = NULL;

	if ( ! pFnFireAmmunition )
		pFnFireAmmunition = (UFunction*) UObject::GObjObjects()->Data[ 177040 ];

	ATGWeap_SVD_execFireAmmunition_Parms FireAmmunition_Parms;

	this->ProcessEvent ( pFnFireAmmunition, &FireAmmunition_Parms, NULL );
};

// Function TGWeapon.TGDmgType_SVDGAI.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_SVDGAI::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169406 ];

	UTGDmgType_SVDGAI_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_SVDGAI.InstantFire
// [0x00020102] 
// Parameters infos:

void ATGWeap_SVDGAI::InstantFire ( )
{
	static UFunction* pFnInstantFire = NULL;

	if ( ! pFnInstantFire )
		pFnInstantFire = (UFunction*) UObject::GObjObjects()->Data[ 177088 ];

	ATGWeap_SVDGAI_execInstantFire_Parms InstantFire_Parms;

	this->ProcessEvent ( pFnInstantFire, &InstantFire_Parms, NULL );
};

// Function TGWeapon.TGWeap_SVDGAI.EndFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGWeap_SVDGAI::EndFire ( unsigned char FireModeNum )
{
	static UFunction* pFnEndFire = NULL;

	if ( ! pFnEndFire )
		pFnEndFire = (UFunction*) UObject::GObjObjects()->Data[ 177086 ];

	ATGWeap_SVDGAI_execEndFire_Parms EndFire_Parms;
	EndFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnEndFire, &EndFire_Parms, NULL );
};

// Function TGWeapon.TGWeap_SVDGAI.ServerGotoStateWeaponClipChanging
// [0x002200C2] 
// Parameters infos:

void ATGWeap_SVDGAI::ServerGotoStateWeaponClipChanging ( )
{
	static UFunction* pFnServerGotoStateWeaponClipChanging = NULL;

	if ( ! pFnServerGotoStateWeaponClipChanging )
		pFnServerGotoStateWeaponClipChanging = (UFunction*) UObject::GObjObjects()->Data[ 177084 ];

	ATGWeap_SVDGAI_execServerGotoStateWeaponClipChanging_Parms ServerGotoStateWeaponClipChanging_Parms;

	this->ProcessEvent ( pFnServerGotoStateWeaponClipChanging, &ServerGotoStateWeaponClipChanging_Parms, NULL );
};

// Function TGWeapon.TGWeap_SVDGAI.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGWeap_SVDGAI::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 177078 ];

	ATGWeap_SVDGAI_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGWeapon.TGWeap_SVDGAI.DisplaySpecial
// [0x00820102] 
// Parameters infos:
// class UCanvas*                 LocalCavas                     ( CPF_Parm )

void ATGWeap_SVDGAI::DisplaySpecial ( class UCanvas* LocalCavas )
{
	static UFunction* pFnDisplaySpecial = NULL;

	if ( ! pFnDisplaySpecial )
		pFnDisplaySpecial = (UFunction*) UObject::GObjObjects()->Data[ 177074 ];

	ATGWeap_SVDGAI_execDisplaySpecial_Parms DisplaySpecial_Parms;
	DisplaySpecial_Parms.LocalCavas = LocalCavas;

	this->ProcessEvent ( pFnDisplaySpecial, &DisplaySpecial_Parms, NULL );
};

// Function TGWeapon.TGWeap_SVDGAI.FireAmmunition
// [0x00020102] 
// Parameters infos:

void ATGWeap_SVDGAI::FireAmmunition ( )
{
	static UFunction* pFnFireAmmunition = NULL;

	if ( ! pFnFireAmmunition )
		pFnFireAmmunition = (UFunction*) UObject::GObjObjects()->Data[ 177068 ];

	ATGWeap_SVDGAI_execFireAmmunition_Parms FireAmmunition_Parms;

	this->ProcessEvent ( pFnFireAmmunition, &FireAmmunition_Parms, NULL );
};

// Function TGWeapon.TGDmgType_SWM500.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_SWM500::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169425 ];

	UTGDmgType_SWM500_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_T2MK5.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_T2MK5::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169440 ];

	UTGDmgType_T2MK5_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_T2MK5.DrawZoomedOverlay
// [0x00020102] 
// Parameters infos:
// class AHUD*                    H                              ( CPF_Parm )

void ATGWeap_T2MK5::DrawZoomedOverlay ( class AHUD* H )
{
	static UFunction* pFnDrawZoomedOverlay = NULL;

	if ( ! pFnDrawZoomedOverlay )
		pFnDrawZoomedOverlay = (UFunction*) UObject::GObjObjects()->Data[ 177195 ];

	ATGWeap_T2MK5_execDrawZoomedOverlay_Parms DrawZoomedOverlay_Parms;
	DrawZoomedOverlay_Parms.H = H;

	this->ProcessEvent ( pFnDrawZoomedOverlay, &DrawZoomedOverlay_Parms, NULL );
};

// Function TGWeapon.TGWeap_T2MK5.DrawWeaponCrosshairEx
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGWeap_T2MK5::DrawWeaponCrosshairEx ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshairEx = NULL;

	if ( ! pFnDrawWeaponCrosshairEx )
		pFnDrawWeaponCrosshairEx = (UFunction*) UObject::GObjObjects()->Data[ 177181 ];

	ATGWeap_T2MK5_execDrawWeaponCrosshairEx_Parms DrawWeaponCrosshairEx_Parms;
	DrawWeaponCrosshairEx_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshairEx, &DrawWeaponCrosshairEx_Parms, NULL );
};

// Function TGWeapon.TGWeap_T2MK5.DrawWeaponCrosshair
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGWeap_T2MK5::DrawWeaponCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshair = NULL;

	if ( ! pFnDrawWeaponCrosshair )
		pFnDrawWeaponCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 177179 ];

	ATGWeap_T2MK5_execDrawWeaponCrosshair_Parms DrawWeaponCrosshair_Parms;
	DrawWeaponCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshair, &DrawWeaponCrosshair_Parms, NULL );
};

// Function TGWeapon.TGWeap_T2MK5.ReplayIdleAnim
// [0x00020102] 
// Parameters infos:

void ATGWeap_T2MK5::ReplayIdleAnim ( )
{
	static UFunction* pFnReplayIdleAnim = NULL;

	if ( ! pFnReplayIdleAnim )
		pFnReplayIdleAnim = (UFunction*) UObject::GObjObjects()->Data[ 177177 ];

	ATGWeap_T2MK5_execReplayIdleAnim_Parms ReplayIdleAnim_Parms;

	this->ProcessEvent ( pFnReplayIdleAnim, &ReplayIdleAnim_Parms, NULL );
};

// Function TGWeapon.TGWeap_T2MK5.ToggleFireReference
// [0x00020102] 
// Parameters infos:
// unsigned long                  bTurnSecondaryAimFireRate      ( CPF_Parm )

void ATGWeap_T2MK5::ToggleFireReference ( unsigned long bTurnSecondaryAimFireRate )
{
	static UFunction* pFnToggleFireReference = NULL;

	if ( ! pFnToggleFireReference )
		pFnToggleFireReference = (UFunction*) UObject::GObjObjects()->Data[ 177174 ];

	ATGWeap_T2MK5_execToggleFireReference_Parms ToggleFireReference_Parms;
	ToggleFireReference_Parms.bTurnSecondaryAimFireRate = bTurnSecondaryAimFireRate;

	this->ProcessEvent ( pFnToggleFireReference, &ToggleFireReference_Parms, NULL );
};

// Function TGWeapon.TGWeap_T2MK5.NotifySetCrossHair
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UTexture2D*              CrossHairHUD                   ( CPF_Parm )

void ATGWeap_T2MK5::eventNotifySetCrossHair ( class UTexture2D* CrossHairHUD )
{
	static UFunction* pFnNotifySetCrossHair = NULL;

	if ( ! pFnNotifySetCrossHair )
		pFnNotifySetCrossHair = (UFunction*) UObject::GObjObjects()->Data[ 177164 ];

	ATGWeap_T2MK5_eventNotifySetCrossHair_Parms NotifySetCrossHair_Parms;
	NotifySetCrossHair_Parms.CrossHairHUD = CrossHairHUD;

	this->ProcessEvent ( pFnNotifySetCrossHair, &NotifySetCrossHair_Parms, NULL );
};

// Function TGWeapon.TGWeap_T2MK5.NotifySetCrossHairHit
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UTexture2D*              CrossHairHitHUD                ( CPF_Parm )

void ATGWeap_T2MK5::eventNotifySetCrossHairHit ( class UTexture2D* CrossHairHitHUD )
{
	static UFunction* pFnNotifySetCrossHairHit = NULL;

	if ( ! pFnNotifySetCrossHairHit )
		pFnNotifySetCrossHairHit = (UFunction*) UObject::GObjObjects()->Data[ 177162 ];

	ATGWeap_T2MK5_eventNotifySetCrossHairHit_Parms NotifySetCrossHairHit_Parms;
	NotifySetCrossHairHit_Parms.CrossHairHitHUD = CrossHairHitHUD;

	this->ProcessEvent ( pFnNotifySetCrossHairHit, &NotifySetCrossHairHit_Parms, NULL );
};

// Function TGWeapon.TGWeap_T2MK5.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_T2MK5::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 177160 ];

	ATGWeap_T2MK5_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_T2MK5.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_T2MK5::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 177158 ];

	ATGWeap_T2MK5_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_TAR21.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_TAR21::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169455 ];

	UTGDmgType_TAR21_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_TAR21.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_TAR21::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 177213 ];

	ATGWeap_TAR21_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_TAR21.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_TAR21::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 177211 ];

	ATGWeap_TAR21_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_TAR21.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_TAR21::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 177209 ];

	ATGWeap_TAR21_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_TMP.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_TMP::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169470 ];

	UTGDmgType_TMP_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_TMP.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_TMP::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 177229 ];

	ATGWeap_TMP_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_TMP.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_TMP::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 177227 ];

	ATGWeap_TMP_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_TPG1.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_TPG1::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169485 ];

	UTGDmgType_TPG1_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_ULTIMAX100.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_ULTIMAX100::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169500 ];

	UTGDmgType_ULTIMAX100_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_ULTIMAX100.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_ULTIMAX100::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 177252 ];

	ATGWeap_ULTIMAX100_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_ULTIMAX100.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_ULTIMAX100::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 177250 ];

	ATGWeap_ULTIMAX100_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_ULTIMAX100.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_ULTIMAX100::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 177248 ];

	ATGWeap_ULTIMAX100_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_UMP.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_UMP::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169515 ];

	UTGDmgType_UMP_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_UMP.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_UMP::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 177268 ];

	ATGWeap_UMP_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_UMP.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_UMP::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 177266 ];

	ATGWeap_UMP_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_UMP45dust.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_UMP45dust::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169526 ];

	UTGDmgType_UMP45dust_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_UMP45dust.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_UMP45dust::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 177284 ];

	ATGWeap_UMP45dust_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_UMP45dust.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_UMP45dust::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 177282 ];

	ATGWeap_UMP45dust_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_USP.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_USP::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169545 ];

	UTGDmgType_USP_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_UZI.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_UZI::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169560 ];

	UTGDmgType_UZI_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZI.CauseMuzzleFlashLight
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_UZI::eventCauseMuzzleFlashLight ( )
{
	static UFunction* pFnCauseMuzzleFlashLight = NULL;

	if ( ! pFnCauseMuzzleFlashLight )
		pFnCauseMuzzleFlashLight = (UFunction*) UObject::GObjObjects()->Data[ 177343 ];

	ATGWeap_UZI_eventCauseMuzzleFlashLight_Parms CauseMuzzleFlashLight_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlashLight, &CauseMuzzleFlashLight_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZI.CauseShellDrop
// [0x00820102] 
// Parameters infos:

void ATGWeap_UZI::CauseShellDrop ( )
{
	static UFunction* pFnCauseShellDrop = NULL;

	if ( ! pFnCauseShellDrop )
		pFnCauseShellDrop = (UFunction*) UObject::GObjObjects()->Data[ 177338 ];

	ATGWeap_UZI_execCauseShellDrop_Parms CauseShellDrop_Parms;

	this->ProcessEvent ( pFnCauseShellDrop, &CauseShellDrop_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZI.AttachMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGWeap_UZI::AttachMuzzleFlash ( )
{
	static UFunction* pFnAttachMuzzleFlash = NULL;

	if ( ! pFnAttachMuzzleFlash )
		pFnAttachMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 177336 ];

	ATGWeap_UZI_execAttachMuzzleFlash_Parms AttachMuzzleFlash_Parms;

	this->ProcessEvent ( pFnAttachMuzzleFlash, &AttachMuzzleFlash_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZI.MuzzleFlashTimer02
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_UZI::eventMuzzleFlashTimer02 ( )
{
	static UFunction* pFnMuzzleFlashTimer02 = NULL;

	if ( ! pFnMuzzleFlashTimer02 )
		pFnMuzzleFlashTimer02 = (UFunction*) UObject::GObjObjects()->Data[ 177335 ];

	ATGWeap_UZI_eventMuzzleFlashTimer02_Parms MuzzleFlashTimer02_Parms;

	this->ProcessEvent ( pFnMuzzleFlashTimer02, &MuzzleFlashTimer02_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZI.CauseMuzzleFlash
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_UZI::eventCauseMuzzleFlash ( )
{
	static UFunction* pFnCauseMuzzleFlash = NULL;

	if ( ! pFnCauseMuzzleFlash )
		pFnCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 177332 ];

	ATGWeap_UZI_eventCauseMuzzleFlash_Parms CauseMuzzleFlash_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlash, &CauseMuzzleFlash_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZI.PlayFireEffects
// [0x00024102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void ATGWeap_UZI::PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation )
{
	static UFunction* pFnPlayFireEffects = NULL;

	if ( ! pFnPlayFireEffects )
		pFnPlayFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 177327 ];

	ATGWeap_UZI_execPlayFireEffects_Parms PlayFireEffects_Parms;
	PlayFireEffects_Parms.FireModeNum = FireModeNum;
	memcpy ( &PlayFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayFireEffects, &PlayFireEffects_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZI.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_UZI::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 177317 ];

	ATGWeap_UZI_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZI.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_UZI::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 177315 ];

	ATGWeap_UZI_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZI.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_UZI::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 177313 ];

	ATGWeap_UZI_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_UZI77.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_UZI77::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169571 ];

	UTGDmgType_UZI77_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZI77.CauseMuzzleFlashLight
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_UZI77::eventCauseMuzzleFlashLight ( )
{
	static UFunction* pFnCauseMuzzleFlashLight = NULL;

	if ( ! pFnCauseMuzzleFlashLight )
		pFnCauseMuzzleFlashLight = (UFunction*) UObject::GObjObjects()->Data[ 177389 ];

	ATGWeap_UZI77_eventCauseMuzzleFlashLight_Parms CauseMuzzleFlashLight_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlashLight, &CauseMuzzleFlashLight_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZI77.CauseShellDrop
// [0x00820102] 
// Parameters infos:

void ATGWeap_UZI77::CauseShellDrop ( )
{
	static UFunction* pFnCauseShellDrop = NULL;

	if ( ! pFnCauseShellDrop )
		pFnCauseShellDrop = (UFunction*) UObject::GObjObjects()->Data[ 177384 ];

	ATGWeap_UZI77_execCauseShellDrop_Parms CauseShellDrop_Parms;

	this->ProcessEvent ( pFnCauseShellDrop, &CauseShellDrop_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZI77.AttachMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGWeap_UZI77::AttachMuzzleFlash ( )
{
	static UFunction* pFnAttachMuzzleFlash = NULL;

	if ( ! pFnAttachMuzzleFlash )
		pFnAttachMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 177382 ];

	ATGWeap_UZI77_execAttachMuzzleFlash_Parms AttachMuzzleFlash_Parms;

	this->ProcessEvent ( pFnAttachMuzzleFlash, &AttachMuzzleFlash_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZI77.MuzzleFlashTimer02
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_UZI77::eventMuzzleFlashTimer02 ( )
{
	static UFunction* pFnMuzzleFlashTimer02 = NULL;

	if ( ! pFnMuzzleFlashTimer02 )
		pFnMuzzleFlashTimer02 = (UFunction*) UObject::GObjObjects()->Data[ 177381 ];

	ATGWeap_UZI77_eventMuzzleFlashTimer02_Parms MuzzleFlashTimer02_Parms;

	this->ProcessEvent ( pFnMuzzleFlashTimer02, &MuzzleFlashTimer02_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZI77.CauseMuzzleFlash
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_UZI77::eventCauseMuzzleFlash ( )
{
	static UFunction* pFnCauseMuzzleFlash = NULL;

	if ( ! pFnCauseMuzzleFlash )
		pFnCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 177378 ];

	ATGWeap_UZI77_eventCauseMuzzleFlash_Parms CauseMuzzleFlash_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlash, &CauseMuzzleFlash_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZI77.PlayFireEffects
// [0x00024102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void ATGWeap_UZI77::PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation )
{
	static UFunction* pFnPlayFireEffects = NULL;

	if ( ! pFnPlayFireEffects )
		pFnPlayFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 177373 ];

	ATGWeap_UZI77_execPlayFireEffects_Parms PlayFireEffects_Parms;
	PlayFireEffects_Parms.FireModeNum = FireModeNum;
	memcpy ( &PlayFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayFireEffects, &PlayFireEffects_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZI77.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_UZI77::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 177363 ];

	ATGWeap_UZI77_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZI77.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_UZI77::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 177361 ];

	ATGWeap_UZI77_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZI77.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_UZI77::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 177359 ];

	ATGWeap_UZI77_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_UZIacu.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_UZIacu::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169586 ];

	UTGDmgType_UZIacu_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZIacu.CauseMuzzleFlashLight
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_UZIacu::eventCauseMuzzleFlashLight ( )
{
	static UFunction* pFnCauseMuzzleFlashLight = NULL;

	if ( ! pFnCauseMuzzleFlashLight )
		pFnCauseMuzzleFlashLight = (UFunction*) UObject::GObjObjects()->Data[ 177435 ];

	ATGWeap_UZIacu_eventCauseMuzzleFlashLight_Parms CauseMuzzleFlashLight_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlashLight, &CauseMuzzleFlashLight_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZIacu.CauseShellDrop
// [0x00820102] 
// Parameters infos:

void ATGWeap_UZIacu::CauseShellDrop ( )
{
	static UFunction* pFnCauseShellDrop = NULL;

	if ( ! pFnCauseShellDrop )
		pFnCauseShellDrop = (UFunction*) UObject::GObjObjects()->Data[ 177430 ];

	ATGWeap_UZIacu_execCauseShellDrop_Parms CauseShellDrop_Parms;

	this->ProcessEvent ( pFnCauseShellDrop, &CauseShellDrop_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZIacu.AttachMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGWeap_UZIacu::AttachMuzzleFlash ( )
{
	static UFunction* pFnAttachMuzzleFlash = NULL;

	if ( ! pFnAttachMuzzleFlash )
		pFnAttachMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 177428 ];

	ATGWeap_UZIacu_execAttachMuzzleFlash_Parms AttachMuzzleFlash_Parms;

	this->ProcessEvent ( pFnAttachMuzzleFlash, &AttachMuzzleFlash_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZIacu.MuzzleFlashTimer02
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_UZIacu::eventMuzzleFlashTimer02 ( )
{
	static UFunction* pFnMuzzleFlashTimer02 = NULL;

	if ( ! pFnMuzzleFlashTimer02 )
		pFnMuzzleFlashTimer02 = (UFunction*) UObject::GObjObjects()->Data[ 177427 ];

	ATGWeap_UZIacu_eventMuzzleFlashTimer02_Parms MuzzleFlashTimer02_Parms;

	this->ProcessEvent ( pFnMuzzleFlashTimer02, &MuzzleFlashTimer02_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZIacu.CauseMuzzleFlash
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGWeap_UZIacu::eventCauseMuzzleFlash ( )
{
	static UFunction* pFnCauseMuzzleFlash = NULL;

	if ( ! pFnCauseMuzzleFlash )
		pFnCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 177424 ];

	ATGWeap_UZIacu_eventCauseMuzzleFlash_Parms CauseMuzzleFlash_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlash, &CauseMuzzleFlash_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZIacu.PlayFireEffects
// [0x00024102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void ATGWeap_UZIacu::PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation )
{
	static UFunction* pFnPlayFireEffects = NULL;

	if ( ! pFnPlayFireEffects )
		pFnPlayFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 177419 ];

	ATGWeap_UZIacu_execPlayFireEffects_Parms PlayFireEffects_Parms;
	PlayFireEffects_Parms.FireModeNum = FireModeNum;
	memcpy ( &PlayFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayFireEffects, &PlayFireEffects_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZIacu.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_UZIacu::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 177409 ];

	ATGWeap_UZIacu_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZIacu.ViewTargetReady
// [0x00020102] 
// Parameters infos:

void ATGWeap_UZIacu::ViewTargetReady ( )
{
	static UFunction* pFnViewTargetReady = NULL;

	if ( ! pFnViewTargetReady )
		pFnViewTargetReady = (UFunction*) UObject::GObjObjects()->Data[ 177407 ];

	ATGWeap_UZIacu_execViewTargetReady_Parms ViewTargetReady_Parms;

	this->ProcessEvent ( pFnViewTargetReady, &ViewTargetReady_Parms, NULL );
};

// Function TGWeapon.TGWeap_UZIacu.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_UZIacu::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 177405 ];

	ATGWeap_UZIacu_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_WA2000.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_WA2000::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169605 ];

	UTGDmgType_WA2000_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_WJQ.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_WJQ::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169620 ];

	UTGDmgType_WJQ_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_WJQworker.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_WJQworker::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169635 ];

	UTGDmgType_WJQworker_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGDmgType_XM8.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_XM8::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169658 ];

	UTGDmgType_XM8_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_XM8.DrawZoomedOverlay
// [0x00020102] 
// Parameters infos:
// class AHUD*                    H                              ( CPF_Parm )

void ATGWeap_XM8::DrawZoomedOverlay ( class AHUD* H )
{
	static UFunction* pFnDrawZoomedOverlay = NULL;

	if ( ! pFnDrawZoomedOverlay )
		pFnDrawZoomedOverlay = (UFunction*) UObject::GObjObjects()->Data[ 177596 ];

	ATGWeap_XM8_execDrawZoomedOverlay_Parms DrawZoomedOverlay_Parms;
	DrawZoomedOverlay_Parms.H = H;

	this->ProcessEvent ( pFnDrawZoomedOverlay, &DrawZoomedOverlay_Parms, NULL );
};

// Function TGWeapon.TGWeap_XM8.DrawWeaponCrosshairEx
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGWeap_XM8::DrawWeaponCrosshairEx ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshairEx = NULL;

	if ( ! pFnDrawWeaponCrosshairEx )
		pFnDrawWeaponCrosshairEx = (UFunction*) UObject::GObjObjects()->Data[ 177582 ];

	ATGWeap_XM8_execDrawWeaponCrosshairEx_Parms DrawWeaponCrosshairEx_Parms;
	DrawWeaponCrosshairEx_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshairEx, &DrawWeaponCrosshairEx_Parms, NULL );
};

// Function TGWeapon.TGWeap_XM8.DrawWeaponCrosshair
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGWeap_XM8::DrawWeaponCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshair = NULL;

	if ( ! pFnDrawWeaponCrosshair )
		pFnDrawWeaponCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 177580 ];

	ATGWeap_XM8_execDrawWeaponCrosshair_Parms DrawWeaponCrosshair_Parms;
	DrawWeaponCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshair, &DrawWeaponCrosshair_Parms, NULL );
};

// Function TGWeapon.TGWeap_XM8.ReplayIdleAnim
// [0x00020102] 
// Parameters infos:

void ATGWeap_XM8::ReplayIdleAnim ( )
{
	static UFunction* pFnReplayIdleAnim = NULL;

	if ( ! pFnReplayIdleAnim )
		pFnReplayIdleAnim = (UFunction*) UObject::GObjObjects()->Data[ 177578 ];

	ATGWeap_XM8_execReplayIdleAnim_Parms ReplayIdleAnim_Parms;

	this->ProcessEvent ( pFnReplayIdleAnim, &ReplayIdleAnim_Parms, NULL );
};

// Function TGWeapon.TGWeap_XM8.ToggleFireReference
// [0x00020102] 
// Parameters infos:
// unsigned long                  bTurnSecondaryAimFireRate      ( CPF_Parm )

void ATGWeap_XM8::ToggleFireReference ( unsigned long bTurnSecondaryAimFireRate )
{
	static UFunction* pFnToggleFireReference = NULL;

	if ( ! pFnToggleFireReference )
		pFnToggleFireReference = (UFunction*) UObject::GObjObjects()->Data[ 177575 ];

	ATGWeap_XM8_execToggleFireReference_Parms ToggleFireReference_Parms;
	ToggleFireReference_Parms.bTurnSecondaryAimFireRate = bTurnSecondaryAimFireRate;

	this->ProcessEvent ( pFnToggleFireReference, &ToggleFireReference_Parms, NULL );
};

// Function TGWeapon.TGWeap_XM8.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_XM8::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 177565 ];

	ATGWeap_XM8_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_XM8.NotifySetCrossHair
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UTexture2D*              CrossHairHUD                   ( CPF_Parm )

void ATGWeap_XM8::eventNotifySetCrossHair ( class UTexture2D* CrossHairHUD )
{
	static UFunction* pFnNotifySetCrossHair = NULL;

	if ( ! pFnNotifySetCrossHair )
		pFnNotifySetCrossHair = (UFunction*) UObject::GObjObjects()->Data[ 177563 ];

	ATGWeap_XM8_eventNotifySetCrossHair_Parms NotifySetCrossHair_Parms;
	NotifySetCrossHair_Parms.CrossHairHUD = CrossHairHUD;

	this->ProcessEvent ( pFnNotifySetCrossHair, &NotifySetCrossHair_Parms, NULL );
};

// Function TGWeapon.TGWeap_XM8.NotifySetCrossHairHit
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UTexture2D*              CrossHairHitHUD                ( CPF_Parm )

void ATGWeap_XM8::eventNotifySetCrossHairHit ( class UTexture2D* CrossHairHitHUD )
{
	static UFunction* pFnNotifySetCrossHairHit = NULL;

	if ( ! pFnNotifySetCrossHairHit )
		pFnNotifySetCrossHairHit = (UFunction*) UObject::GObjObjects()->Data[ 177561 ];

	ATGWeap_XM8_eventNotifySetCrossHairHit_Parms NotifySetCrossHairHit_Parms;
	NotifySetCrossHairHit_Parms.CrossHairHitHUD = CrossHairHitHUD;

	this->ProcessEvent ( pFnNotifySetCrossHairHit, &NotifySetCrossHairHit_Parms, NULL );
};

// Function TGWeapon.TGWeap_XM8.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_XM8::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 177559 ];

	ATGWeap_XM8_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGDmgType_XM8GAI.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGDmgType_XM8GAI::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 169669 ];

	UTGDmgType_XM8GAI_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function TGWeapon.TGWeap_XM8GAI.DrawZoomedOverlay
// [0x00020102] 
// Parameters infos:
// class AHUD*                    H                              ( CPF_Parm )

void ATGWeap_XM8GAI::DrawZoomedOverlay ( class AHUD* H )
{
	static UFunction* pFnDrawZoomedOverlay = NULL;

	if ( ! pFnDrawZoomedOverlay )
		pFnDrawZoomedOverlay = (UFunction*) UObject::GObjObjects()->Data[ 177707 ];

	ATGWeap_XM8GAI_execDrawZoomedOverlay_Parms DrawZoomedOverlay_Parms;
	DrawZoomedOverlay_Parms.H = H;

	this->ProcessEvent ( pFnDrawZoomedOverlay, &DrawZoomedOverlay_Parms, NULL );
};

// Function TGWeapon.TGWeap_XM8GAI.DrawWeaponCrosshairEx
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGWeap_XM8GAI::DrawWeaponCrosshairEx ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshairEx = NULL;

	if ( ! pFnDrawWeaponCrosshairEx )
		pFnDrawWeaponCrosshairEx = (UFunction*) UObject::GObjObjects()->Data[ 177693 ];

	ATGWeap_XM8GAI_execDrawWeaponCrosshairEx_Parms DrawWeaponCrosshairEx_Parms;
	DrawWeaponCrosshairEx_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshairEx, &DrawWeaponCrosshairEx_Parms, NULL );
};

// Function TGWeapon.TGWeap_XM8GAI.DrawWeaponCrosshair
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGWeap_XM8GAI::DrawWeaponCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshair = NULL;

	if ( ! pFnDrawWeaponCrosshair )
		pFnDrawWeaponCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 177691 ];

	ATGWeap_XM8GAI_execDrawWeaponCrosshair_Parms DrawWeaponCrosshair_Parms;
	DrawWeaponCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshair, &DrawWeaponCrosshair_Parms, NULL );
};

// Function TGWeapon.TGWeap_XM8GAI.ReplayIdleAnim
// [0x00020102] 
// Parameters infos:

void ATGWeap_XM8GAI::ReplayIdleAnim ( )
{
	static UFunction* pFnReplayIdleAnim = NULL;

	if ( ! pFnReplayIdleAnim )
		pFnReplayIdleAnim = (UFunction*) UObject::GObjObjects()->Data[ 177689 ];

	ATGWeap_XM8GAI_execReplayIdleAnim_Parms ReplayIdleAnim_Parms;

	this->ProcessEvent ( pFnReplayIdleAnim, &ReplayIdleAnim_Parms, NULL );
};

// Function TGWeapon.TGWeap_XM8GAI.ToggleFireReference
// [0x00020102] 
// Parameters infos:
// unsigned long                  bTurnSecondaryAimFireRate      ( CPF_Parm )

void ATGWeap_XM8GAI::ToggleFireReference ( unsigned long bTurnSecondaryAimFireRate )
{
	static UFunction* pFnToggleFireReference = NULL;

	if ( ! pFnToggleFireReference )
		pFnToggleFireReference = (UFunction*) UObject::GObjObjects()->Data[ 177686 ];

	ATGWeap_XM8GAI_execToggleFireReference_Parms ToggleFireReference_Parms;
	ToggleFireReference_Parms.bTurnSecondaryAimFireRate = bTurnSecondaryAimFireRate;

	this->ProcessEvent ( pFnToggleFireReference, &ToggleFireReference_Parms, NULL );
};

// Function TGWeapon.TGWeap_XM8GAI.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGWeap_XM8GAI::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 177676 ];

	ATGWeap_XM8GAI_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function TGWeapon.TGWeap_XM8GAI.NotifySetCrossHair
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UTexture2D*              CrossHairHUD                   ( CPF_Parm )

void ATGWeap_XM8GAI::eventNotifySetCrossHair ( class UTexture2D* CrossHairHUD )
{
	static UFunction* pFnNotifySetCrossHair = NULL;

	if ( ! pFnNotifySetCrossHair )
		pFnNotifySetCrossHair = (UFunction*) UObject::GObjObjects()->Data[ 177674 ];

	ATGWeap_XM8GAI_eventNotifySetCrossHair_Parms NotifySetCrossHair_Parms;
	NotifySetCrossHair_Parms.CrossHairHUD = CrossHairHUD;

	this->ProcessEvent ( pFnNotifySetCrossHair, &NotifySetCrossHair_Parms, NULL );
};

// Function TGWeapon.TGWeap_XM8GAI.NotifySetCrossHairHit
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UTexture2D*              CrossHairHitHUD                ( CPF_Parm )

void ATGWeap_XM8GAI::eventNotifySetCrossHairHit ( class UTexture2D* CrossHairHitHUD )
{
	static UFunction* pFnNotifySetCrossHairHit = NULL;

	if ( ! pFnNotifySetCrossHairHit )
		pFnNotifySetCrossHairHit = (UFunction*) UObject::GObjObjects()->Data[ 177672 ];

	ATGWeap_XM8GAI_eventNotifySetCrossHairHit_Parms NotifySetCrossHairHit_Parms;
	NotifySetCrossHairHit_Parms.CrossHairHitHUD = CrossHairHitHUD;

	this->ProcessEvent ( pFnNotifySetCrossHairHit, &NotifySetCrossHairHit_Parms, NULL );
};

// Function TGWeapon.TGWeap_XM8GAI.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGWeap_XM8GAI::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 177670 ];

	ATGWeap_XM8GAI_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGNewRealGun.PlayWeaponEquip
// [0x00020102] 
// Parameters infos:

void ATGNewRealGun::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 169691 ];

	ATGNewRealGun_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function TGWeapon.TGNewRealGun.SetExtraPower
// [0x00020002] 
// Parameters infos:
// int                            InPower                        ( CPF_Parm )

void ATGNewRealGun::SetExtraPower ( int InPower )
{
	static UFunction* pFnSetExtraPower = NULL;

	if ( ! pFnSetExtraPower )
		pFnSetExtraPower = (UFunction*) UObject::GObjObjects()->Data[ 169689 ];

	ATGNewRealGun_execSetExtraPower_Parms SetExtraPower_Parms;
	SetExtraPower_Parms.InPower = InPower;

	this->ProcessEvent ( pFnSetExtraPower, &SetExtraPower_Parms, NULL );
};

// Function TGWeapon.TGNewWeaponLogicHelper.CopyTGRealGunProperty
// [0x00022102] 
// Parameters infos:
// class ATGRealGun*              InDest                         ( CPF_Parm )
// class ATGRealGun*              InSrc                          ( CPF_Parm )

void UTGNewWeaponLogicHelper::CopyTGRealGunProperty ( class ATGRealGun* InDest, class ATGRealGun* InSrc )
{
	static UFunction* pFnCopyTGRealGunProperty = NULL;

	if ( ! pFnCopyTGRealGunProperty )
		pFnCopyTGRealGunProperty = (UFunction*) UObject::GObjObjects()->Data[ 169700 ];

	UTGNewWeaponLogicHelper_execCopyTGRealGunProperty_Parms CopyTGRealGunProperty_Parms;
	CopyTGRealGunProperty_Parms.InDest = InDest;
	CopyTGRealGunProperty_Parms.InSrc = InSrc;

	this->ProcessEvent ( pFnCopyTGRealGunProperty, &CopyTGRealGunProperty_Parms, NULL );
};

// Function TGWeapon.TGNewWeaponLogicHelper.CopyTGRealWeaponProperty
// [0x00022102] 
// Parameters infos:
// class ATGRealWeapon*           InDest                         ( CPF_Parm )
// class ATGRealWeapon*           InSrc                          ( CPF_Parm )

void UTGNewWeaponLogicHelper::CopyTGRealWeaponProperty ( class ATGRealWeapon* InDest, class ATGRealWeapon* InSrc )
{
	static UFunction* pFnCopyTGRealWeaponProperty = NULL;

	if ( ! pFnCopyTGRealWeaponProperty )
		pFnCopyTGRealWeaponProperty = (UFunction*) UObject::GObjObjects()->Data[ 169697 ];

	UTGNewWeaponLogicHelper_execCopyTGRealWeaponProperty_Parms CopyTGRealWeaponProperty_Parms;
	CopyTGRealWeaponProperty_Parms.InDest = InDest;
	CopyTGRealWeaponProperty_Parms.InSrc = InSrc;

	this->ProcessEvent ( pFnCopyTGRealWeaponProperty, &CopyTGRealWeaponProperty_Parms, NULL );
};

// Function TGWeapon.TGProj_Candy_Grenade.ProjectileHurtRadius
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGProj_Candy_Grenade::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 169738 ];

	ATGProj_Candy_Grenade_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function TGWeapon.TGProj_Candy_Grenade.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_Candy_Grenade::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 169722 ];

	ATGProj_Candy_Grenade_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function TGWeapon.TGProj_Candy_Grenade.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_Candy_Grenade::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 169718 ];

	ATGProj_Candy_Grenade_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function TGWeapon.TGProj_Candy_Grenade.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGProj_Candy_Grenade::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 169712 ];

	ATGProj_Candy_Grenade_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGWeapon.TGProj_Candy_Grenade.InitWithBaseVelocity
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 BaseVelocity                   ( CPF_Parm )

void ATGProj_Candy_Grenade::InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity )
{
	static UFunction* pFnInitWithBaseVelocity = NULL;

	if ( ! pFnInitWithBaseVelocity )
		pFnInitWithBaseVelocity = (UFunction*) UObject::GObjObjects()->Data[ 169709 ];

	ATGProj_Candy_Grenade_execInitWithBaseVelocity_Parms InitWithBaseVelocity_Parms;
	memcpy ( &InitWithBaseVelocity_Parms.Direction, &Direction, 0xC );
	memcpy ( &InitWithBaseVelocity_Parms.BaseVelocity, &BaseVelocity, 0xC );

	this->ProcessEvent ( pFnInitWithBaseVelocity, &InitWithBaseVelocity_Parms, NULL );
};

// Function TGWeapon.TGProj_Candy_Grenade.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGProj_Candy_Grenade::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 169708 ];

	ATGProj_Candy_Grenade_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGWeapon.TGProj_ChristGrenade.ProjectileHurtRadius
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGProj_ChristGrenade::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 169795 ];

	ATGProj_ChristGrenade_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function TGWeapon.TGProj_ChristGrenade.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_ChristGrenade::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 169779 ];

	ATGProj_ChristGrenade_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function TGWeapon.TGProj_ChristGrenade.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_ChristGrenade::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 169775 ];

	ATGProj_ChristGrenade_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function TGWeapon.TGProj_ChristGrenade.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGProj_ChristGrenade::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 169769 ];

	ATGProj_ChristGrenade_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGWeapon.TGProj_ChristGrenade.InitWithBaseVelocity
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 BaseVelocity                   ( CPF_Parm )

void ATGProj_ChristGrenade::InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity )
{
	static UFunction* pFnInitWithBaseVelocity = NULL;

	if ( ! pFnInitWithBaseVelocity )
		pFnInitWithBaseVelocity = (UFunction*) UObject::GObjObjects()->Data[ 169766 ];

	ATGProj_ChristGrenade_execInitWithBaseVelocity_Parms InitWithBaseVelocity_Parms;
	memcpy ( &InitWithBaseVelocity_Parms.Direction, &Direction, 0xC );
	memcpy ( &InitWithBaseVelocity_Parms.BaseVelocity, &BaseVelocity, 0xC );

	this->ProcessEvent ( pFnInitWithBaseVelocity, &InitWithBaseVelocity_Parms, NULL );
};

// Function TGWeapon.TGProj_ChristGrenade.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGProj_ChristGrenade::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 169765 ];

	ATGProj_ChristGrenade_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGWeapon.TGProj_CompoundBow.DelayAttachTargetToWall
// [0x00020102] 
// Parameters infos:

void ATGProj_CompoundBow::DelayAttachTargetToWall ( )
{
	static UFunction* pFnDelayAttachTargetToWall = NULL;

	if ( ! pFnDelayAttachTargetToWall )
		pFnDelayAttachTargetToWall = (UFunction*) UObject::GObjObjects()->Data[ 169858 ];

	ATGProj_CompoundBow_execDelayAttachTargetToWall_Parms DelayAttachTargetToWall_Parms;

	this->ProcessEvent ( pFnDelayAttachTargetToWall, &DelayAttachTargetToWall_Parms, NULL );
};

// Function TGWeapon.TGProj_CompoundBow.CreateSpikeToTarget
// [0x00820102] 
// Parameters infos:

void ATGProj_CompoundBow::CreateSpikeToTarget ( )
{
	static UFunction* pFnCreateSpikeToTarget = NULL;

	if ( ! pFnCreateSpikeToTarget )
		pFnCreateSpikeToTarget = (UFunction*) UObject::GObjObjects()->Data[ 169854 ];

	ATGProj_CompoundBow_execCreateSpikeToTarget_Parms CreateSpikeToTarget_Parms;

	this->ProcessEvent ( pFnCreateSpikeToTarget, &CreateSpikeToTarget_Parms, NULL );
};

// Function TGWeapon.TGProj_CompoundBow.AttachArrowToTarget
// [0x00020102] 
// Parameters infos:

void ATGProj_CompoundBow::AttachArrowToTarget ( )
{
	static UFunction* pFnAttachArrowToTarget = NULL;

	if ( ! pFnAttachArrowToTarget )
		pFnAttachArrowToTarget = (UFunction*) UObject::GObjObjects()->Data[ 169853 ];

	ATGProj_CompoundBow_execAttachArrowToTarget_Parms AttachArrowToTarget_Parms;

	this->ProcessEvent ( pFnAttachArrowToTarget, &AttachArrowToTarget_Parms, NULL );
};

// Function TGWeapon.TGProj_CompoundBow.UpdateHitPawnDetails
// [0x00020102] 
// Parameters infos:
// class APawn*                   Victim                         ( CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FRotator                HitRotation                    ( CPF_Parm )

void ATGProj_CompoundBow::UpdateHitPawnDetails ( class APawn* Victim, unsigned char HitGroup, struct FName BoneName, struct FVector HitLocation, struct FRotator HitRotation )
{
	static UFunction* pFnUpdateHitPawnDetails = NULL;

	if ( ! pFnUpdateHitPawnDetails )
		pFnUpdateHitPawnDetails = (UFunction*) UObject::GObjObjects()->Data[ 169847 ];

	ATGProj_CompoundBow_execUpdateHitPawnDetails_Parms UpdateHitPawnDetails_Parms;
	UpdateHitPawnDetails_Parms.Victim = Victim;
	UpdateHitPawnDetails_Parms.HitGroup = HitGroup;
	memcpy ( &UpdateHitPawnDetails_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &UpdateHitPawnDetails_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &UpdateHitPawnDetails_Parms.HitRotation, &HitRotation, 0xC );

	this->ProcessEvent ( pFnUpdateHitPawnDetails, &UpdateHitPawnDetails_Parms, NULL );
};

// Function TGWeapon.TGProj_CompoundBow.ProcessTouch
// [0x00820102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_CompoundBow::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 169834 ];

	ATGProj_CompoundBow_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function TGWeapon.TGProj_CompoundBow.Destroyed
// [0x00020102] 
// Parameters infos:

void ATGProj_CompoundBow::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 169833 ];

	ATGProj_CompoundBow_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGWeapon.TGProj_CompoundBow.ShutDown
// [0x00020102] 
// Parameters infos:

void ATGProj_CompoundBow::ShutDown ( )
{
	static UFunction* pFnShutDown = NULL;

	if ( ! pFnShutDown )
		pFnShutDown = (UFunction*) UObject::GObjObjects()->Data[ 169832 ];

	ATGProj_CompoundBow_execShutDown_Parms ShutDown_Parms;

	this->ProcessEvent ( pFnShutDown, &ShutDown_Parms, NULL );
};

// Function TGWeapon.TGProj_CompoundBow.SpawnFlightEffects
// [0x00020102] 
// Parameters infos:

void ATGProj_CompoundBow::SpawnFlightEffects ( )
{
	static UFunction* pFnSpawnFlightEffects = NULL;

	if ( ! pFnSpawnFlightEffects )
		pFnSpawnFlightEffects = (UFunction*) UObject::GObjObjects()->Data[ 169831 ];

	ATGProj_CompoundBow_execSpawnFlightEffects_Parms SpawnFlightEffects_Parms;

	this->ProcessEvent ( pFnSpawnFlightEffects, &SpawnFlightEffects_Parms, NULL );
};

// Function TGWeapon.TGProj_CompoundBow.Tick
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGProj_CompoundBow::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 169827 ];

	ATGProj_CompoundBow_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGWeapon.TGProj_CompoundBow.Init
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )

void ATGProj_CompoundBow::Init ( struct FVector Direction )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 169825 ];

	ATGProj_CompoundBow_execInit_Parms Init_Parms;
	memcpy ( &Init_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function TGWeapon.TGProj_CompoundBow.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGProj_CompoundBow::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 169823 ];

	ATGProj_CompoundBow_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGWeapon.TGProj_SpikeArrow.AdjustPhysicsForHit
// [0x00020102] 
// Parameters infos:

void ATGProj_SpikeArrow::AdjustPhysicsForHit ( )
{
	static UFunction* pFnAdjustPhysicsForHit = NULL;

	if ( ! pFnAdjustPhysicsForHit )
		pFnAdjustPhysicsForHit = (UFunction*) UObject::GObjObjects()->Data[ 172858 ];

	ATGProj_SpikeArrow_execAdjustPhysicsForHit_Parms AdjustPhysicsForHit_Parms;

	this->ProcessEvent ( pFnAdjustPhysicsForHit, &AdjustPhysicsForHit_Parms, NULL );
};

// Function TGWeapon.TGProj_SpikeArrow.ShutDown
// [0x00020102] 
// Parameters infos:

void ATGProj_SpikeArrow::ShutDown ( )
{
	static UFunction* pFnShutDown = NULL;

	if ( ! pFnShutDown )
		pFnShutDown = (UFunction*) UObject::GObjObjects()->Data[ 172857 ];

	ATGProj_SpikeArrow_execShutDown_Parms ShutDown_Parms;

	this->ProcessEvent ( pFnShutDown, &ShutDown_Parms, NULL );
};

// Function TGWeapon.TGProj_SpikeArrow.SpikeVictim
// [0x00020102] 
// Parameters infos:
// class AUTPawn*                 Victim                         ( CPF_Parm )
// struct FName                   VictimBone                     ( CPF_Parm )

void ATGProj_SpikeArrow::SpikeVictim ( class AUTPawn* Victim, struct FName VictimBone )
{
	static UFunction* pFnSpikeVictim = NULL;

	if ( ! pFnSpikeVictim )
		pFnSpikeVictim = (UFunction*) UObject::GObjObjects()->Data[ 172853 ];

	ATGProj_SpikeArrow_execSpikeVictim_Parms SpikeVictim_Parms;
	SpikeVictim_Parms.Victim = Victim;
	memcpy ( &SpikeVictim_Parms.VictimBone, &VictimBone, 0x8 );

	this->ProcessEvent ( pFnSpikeVictim, &SpikeVictim_Parms, NULL );
};

// Function TGWeapon.TGProj_SpikeArrow.HitWall
// [0x00020122] 
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGProj_SpikeArrow::HitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 172849 ];

	ATGProj_SpikeArrow_execHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGWeapon.TGProj_SpikeArrow.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGProj_SpikeArrow::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 172848 ];

	ATGProj_SpikeArrow_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGWeapon.TGProj_Cracker.ProjectileHurtRadius
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGProj_Cracker::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 169896 ];

	ATGProj_Cracker_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function TGWeapon.TGProj_Cracker.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_Cracker::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 169880 ];

	ATGProj_Cracker_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function TGWeapon.TGProj_Cracker.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_Cracker::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 169876 ];

	ATGProj_Cracker_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function TGWeapon.TGProj_Cracker.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGProj_Cracker::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 169870 ];

	ATGProj_Cracker_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGWeapon.TGProj_Cracker.InitWithBaseVelocity
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 BaseVelocity                   ( CPF_Parm )

void ATGProj_Cracker::InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity )
{
	static UFunction* pFnInitWithBaseVelocity = NULL;

	if ( ! pFnInitWithBaseVelocity )
		pFnInitWithBaseVelocity = (UFunction*) UObject::GObjObjects()->Data[ 169867 ];

	ATGProj_Cracker_execInitWithBaseVelocity_Parms InitWithBaseVelocity_Parms;
	memcpy ( &InitWithBaseVelocity_Parms.Direction, &Direction, 0xC );
	memcpy ( &InitWithBaseVelocity_Parms.BaseVelocity, &BaseVelocity, 0xC );

	this->ProcessEvent ( pFnInitWithBaseVelocity, &InitWithBaseVelocity_Parms, NULL );
};

// Function TGWeapon.TGProj_Cracker.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGProj_Cracker::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 169866 ];

	ATGProj_Cracker_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGWeapon.TGProj_FastSmoke.RemoveFromList
// [0x00020002] 
// Parameters infos:

void ATGProj_FastSmoke::RemoveFromList ( )
{
	static UFunction* pFnRemoveFromList = NULL;

	if ( ! pFnRemoveFromList )
		pFnRemoveFromList = (UFunction*) UObject::GObjObjects()->Data[ 169966 ];

	ATGProj_FastSmoke_execRemoveFromList_Parms RemoveFromList_Parms;

	this->ProcessEvent ( pFnRemoveFromList, &RemoveFromList_Parms, NULL );
};

// Function TGWeapon.TGProj_FastSmoke.AddToList
// [0x00020002] 
// Parameters infos:

void ATGProj_FastSmoke::AddToList ( )
{
	static UFunction* pFnAddToList = NULL;

	if ( ! pFnAddToList )
		pFnAddToList = (UFunction*) UObject::GObjObjects()->Data[ 169964 ];

	ATGProj_FastSmoke_execAddToList_Parms AddToList_Parms;

	this->ProcessEvent ( pFnAddToList, &AddToList_Parms, NULL );
};

// Function TGWeapon.TGProj_FastSmoke.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_FastSmoke::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 169953 ];

	ATGProj_FastSmoke_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function TGWeapon.TGProj_FastSmoke.ReleaseFastSmoke
// [0x00820102] 
// Parameters infos:

void ATGProj_FastSmoke::ReleaseFastSmoke ( )
{
	static UFunction* pFnReleaseFastSmoke = NULL;

	if ( ! pFnReleaseFastSmoke )
		pFnReleaseFastSmoke = (UFunction*) UObject::GObjObjects()->Data[ 169949 ];

	ATGProj_FastSmoke_execReleaseFastSmoke_Parms ReleaseFastSmoke_Parms;

	this->ProcessEvent ( pFnReleaseFastSmoke, &ReleaseFastSmoke_Parms, NULL );
};

// Function TGWeapon.TGProj_FastSmoke.Tick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGProj_FastSmoke::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 169947 ];

	ATGProj_FastSmoke_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGWeapon.TGProj_FastSmoke.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGProj_FastSmoke::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 169946 ];

	ATGProj_FastSmoke_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGWeapon.TGProj_FastSmoke.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_FastSmoke::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 169942 ];

	ATGProj_FastSmoke_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function TGWeapon.TGProj_FastSmoke.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGProj_FastSmoke::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 169935 ];

	ATGProj_FastSmoke_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGWeapon.TGProj_FastSmoke.InitWithBaseVelocity
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 BaseVelocity                   ( CPF_Parm )

void ATGProj_FastSmoke::InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity )
{
	static UFunction* pFnInitWithBaseVelocity = NULL;

	if ( ! pFnInitWithBaseVelocity )
		pFnInitWithBaseVelocity = (UFunction*) UObject::GObjObjects()->Data[ 169932 ];

	ATGProj_FastSmoke_execInitWithBaseVelocity_Parms InitWithBaseVelocity_Parms;
	memcpy ( &InitWithBaseVelocity_Parms.Direction, &Direction, 0xC );
	memcpy ( &InitWithBaseVelocity_Parms.BaseVelocity, &BaseVelocity, 0xC );

	this->ProcessEvent ( pFnInitWithBaseVelocity, &InitWithBaseVelocity_Parms, NULL );
};

// Function TGWeapon.TGProj_FastSmoke.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGProj_FastSmoke::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 169930 ];

	ATGProj_FastSmoke_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGWeapon.TGWeap_FastSmoke.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGWeap_FastSmoke::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 174600 ];

	ATGWeap_FastSmoke_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGWeapon.TGProj_FlashBang.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_FlashBang::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 172340 ];

	ATGProj_FlashBang_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function TGWeapon.TGProj_FlashBang.ProjectileHurtRadius
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGProj_FlashBang::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 169995 ];

	ATGProj_FlashBang_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function TGWeapon.TGProj_FlashBang.DelaySpawnExplosionEffect
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGProj_FlashBang::eventDelaySpawnExplosionEffect ( )
{
	static UFunction* pFnDelaySpawnExplosionEffect = NULL;

	if ( ! pFnDelaySpawnExplosionEffect )
		pFnDelaySpawnExplosionEffect = (UFunction*) UObject::GObjObjects()->Data[ 169994 ];

	ATGProj_FlashBang_eventDelaySpawnExplosionEffect_Parms DelaySpawnExplosionEffect_Parms;

	this->ProcessEvent ( pFnDelaySpawnExplosionEffect, &DelaySpawnExplosionEffect_Parms, NULL );
};

// Function TGWeapon.TGProj_FlashBang.Explode
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_FlashBang::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 169991 ];

	ATGProj_FlashBang_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function TGWeapon.TGProj_FlashBang.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_FlashBang::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 169987 ];

	ATGProj_FlashBang_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function TGWeapon.TGProj_FlashBang.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGProj_FlashBang::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 169980 ];

	ATGProj_FlashBang_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGWeapon.TGProj_FlashBang.InitWithBaseVelocity
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 BaseVelocity                   ( CPF_Parm )

void ATGProj_FlashBang::InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity )
{
	static UFunction* pFnInitWithBaseVelocity = NULL;

	if ( ! pFnInitWithBaseVelocity )
		pFnInitWithBaseVelocity = (UFunction*) UObject::GObjObjects()->Data[ 169977 ];

	ATGProj_FlashBang_execInitWithBaseVelocity_Parms InitWithBaseVelocity_Parms;
	memcpy ( &InitWithBaseVelocity_Parms.Direction, &Direction, 0xC );
	memcpy ( &InitWithBaseVelocity_Parms.BaseVelocity, &BaseVelocity, 0xC );

	this->ProcessEvent ( pFnInitWithBaseVelocity, &InitWithBaseVelocity_Parms, NULL );
};

// Function TGWeapon.TGProj_FlashBang.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGProj_FlashBang::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 169976 ];

	ATGProj_FlashBang_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGWeapon.TGWeap_FlashBang.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGWeap_FlashBang::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 174609 ];

	ATGWeap_FlashBang_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGWeapon.TGProj_FoolGrenade.ProjectileHurtRadius
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGProj_FoolGrenade::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 172386 ];

	ATGProj_FoolGrenade_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function TGWeapon.TGProj_FoolGrenade.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_FoolGrenade::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 172370 ];

	ATGProj_FoolGrenade_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function TGWeapon.TGProj_FoolGrenade.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_FoolGrenade::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 172366 ];

	ATGProj_FoolGrenade_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function TGWeapon.TGProj_FoolGrenade.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGProj_FoolGrenade::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 172360 ];

	ATGProj_FoolGrenade_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGWeapon.TGProj_FoolGrenade.InitWithBaseVelocity
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 BaseVelocity                   ( CPF_Parm )

void ATGProj_FoolGrenade::InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity )
{
	static UFunction* pFnInitWithBaseVelocity = NULL;

	if ( ! pFnInitWithBaseVelocity )
		pFnInitWithBaseVelocity = (UFunction*) UObject::GObjObjects()->Data[ 172357 ];

	ATGProj_FoolGrenade_execInitWithBaseVelocity_Parms InitWithBaseVelocity_Parms;
	memcpy ( &InitWithBaseVelocity_Parms.Direction, &Direction, 0xC );
	memcpy ( &InitWithBaseVelocity_Parms.BaseVelocity, &BaseVelocity, 0xC );

	this->ProcessEvent ( pFnInitWithBaseVelocity, &InitWithBaseVelocity_Parms, NULL );
};

// Function TGWeapon.TGProj_FoolGrenade.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGProj_FoolGrenade::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 172356 ];

	ATGProj_FoolGrenade_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGWeapon.TGProj_HEgame.ProjectileHurtRadius
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGProj_HEgame::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 172443 ];

	ATGProj_HEgame_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function TGWeapon.TGProj_HEgame.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_HEgame::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 172427 ];

	ATGProj_HEgame_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function TGWeapon.TGProj_HEgame.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_HEgame::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 172423 ];

	ATGProj_HEgame_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function TGWeapon.TGProj_HEgame.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGProj_HEgame::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 172417 ];

	ATGProj_HEgame_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGWeapon.TGProj_HEgame.InitWithBaseVelocity
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 BaseVelocity                   ( CPF_Parm )

void ATGProj_HEgame::InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity )
{
	static UFunction* pFnInitWithBaseVelocity = NULL;

	if ( ! pFnInitWithBaseVelocity )
		pFnInitWithBaseVelocity = (UFunction*) UObject::GObjObjects()->Data[ 172414 ];

	ATGProj_HEgame_execInitWithBaseVelocity_Parms InitWithBaseVelocity_Parms;
	memcpy ( &InitWithBaseVelocity_Parms.Direction, &Direction, 0xC );
	memcpy ( &InitWithBaseVelocity_Parms.BaseVelocity, &BaseVelocity, 0xC );

	this->ProcessEvent ( pFnInitWithBaseVelocity, &InitWithBaseVelocity_Parms, NULL );
};

// Function TGWeapon.TGProj_HEgame.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGProj_HEgame::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 172413 ];

	ATGProj_HEgame_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGWeapon.TGProj_HEGrenade.ProjectileHurtRadius
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGProj_HEGrenade::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 172500 ];

	ATGProj_HEGrenade_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function TGWeapon.TGProj_HEGrenade.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_HEGrenade::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 172484 ];

	ATGProj_HEGrenade_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function TGWeapon.TGProj_HEGrenade.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_HEGrenade::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 172480 ];

	ATGProj_HEGrenade_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function TGWeapon.TGProj_HEGrenade.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGProj_HEGrenade::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 172474 ];

	ATGProj_HEGrenade_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGWeapon.TGProj_HEGrenade.InitWithBaseVelocity
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 BaseVelocity                   ( CPF_Parm )

void ATGProj_HEGrenade::InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity )
{
	static UFunction* pFnInitWithBaseVelocity = NULL;

	if ( ! pFnInitWithBaseVelocity )
		pFnInitWithBaseVelocity = (UFunction*) UObject::GObjObjects()->Data[ 172471 ];

	ATGProj_HEGrenade_execInitWithBaseVelocity_Parms InitWithBaseVelocity_Parms;
	memcpy ( &InitWithBaseVelocity_Parms.Direction, &Direction, 0xC );
	memcpy ( &InitWithBaseVelocity_Parms.BaseVelocity, &BaseVelocity, 0xC );

	this->ProcessEvent ( pFnInitWithBaseVelocity, &InitWithBaseVelocity_Parms, NULL );
};

// Function TGWeapon.TGProj_HEGrenade.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGProj_HEGrenade::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 172470 ];

	ATGProj_HEGrenade_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGWeapon.TGProj_M26Grenade.ProjectileHurtRadius
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGProj_M26Grenade::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 172557 ];

	ATGProj_M26Grenade_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function TGWeapon.TGProj_M26Grenade.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_M26Grenade::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 172541 ];

	ATGProj_M26Grenade_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function TGWeapon.TGProj_M26Grenade.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_M26Grenade::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 172537 ];

	ATGProj_M26Grenade_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function TGWeapon.TGProj_M26Grenade.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGProj_M26Grenade::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 172531 ];

	ATGProj_M26Grenade_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGWeapon.TGProj_M26Grenade.InitWithBaseVelocity
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 BaseVelocity                   ( CPF_Parm )

void ATGProj_M26Grenade::InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity )
{
	static UFunction* pFnInitWithBaseVelocity = NULL;

	if ( ! pFnInitWithBaseVelocity )
		pFnInitWithBaseVelocity = (UFunction*) UObject::GObjObjects()->Data[ 172528 ];

	ATGProj_M26Grenade_execInitWithBaseVelocity_Parms InitWithBaseVelocity_Parms;
	memcpy ( &InitWithBaseVelocity_Parms.Direction, &Direction, 0xC );
	memcpy ( &InitWithBaseVelocity_Parms.BaseVelocity, &BaseVelocity, 0xC );

	this->ProcessEvent ( pFnInitWithBaseVelocity, &InitWithBaseVelocity_Parms, NULL );
};

// Function TGWeapon.TGProj_M26Grenade.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGProj_M26Grenade::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 172527 ];

	ATGProj_M26Grenade_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGWeapon.TGProj_MidAutumn.ProjectileHurtRadius
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGProj_MidAutumn::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 172614 ];

	ATGProj_MidAutumn_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function TGWeapon.TGProj_MidAutumn.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_MidAutumn::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 172598 ];

	ATGProj_MidAutumn_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function TGWeapon.TGProj_MidAutumn.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_MidAutumn::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 172594 ];

	ATGProj_MidAutumn_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function TGWeapon.TGProj_MidAutumn.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGProj_MidAutumn::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 172588 ];

	ATGProj_MidAutumn_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGWeapon.TGProj_MidAutumn.InitWithBaseVelocity
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 BaseVelocity                   ( CPF_Parm )

void ATGProj_MidAutumn::InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity )
{
	static UFunction* pFnInitWithBaseVelocity = NULL;

	if ( ! pFnInitWithBaseVelocity )
		pFnInitWithBaseVelocity = (UFunction*) UObject::GObjObjects()->Data[ 172585 ];

	ATGProj_MidAutumn_execInitWithBaseVelocity_Parms InitWithBaseVelocity_Parms;
	memcpy ( &InitWithBaseVelocity_Parms.Direction, &Direction, 0xC );
	memcpy ( &InitWithBaseVelocity_Parms.BaseVelocity, &BaseVelocity, 0xC );

	this->ProcessEvent ( pFnInitWithBaseVelocity, &InitWithBaseVelocity_Parms, NULL );
};

// Function TGWeapon.TGProj_MidAutumn.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGProj_MidAutumn::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 172584 ];

	ATGProj_MidAutumn_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGWeapon.TGProj_Pumpkin.ProjectileHurtRadius
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGProj_Pumpkin::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 172671 ];

	ATGProj_Pumpkin_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function TGWeapon.TGProj_Pumpkin.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_Pumpkin::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 172655 ];

	ATGProj_Pumpkin_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function TGWeapon.TGProj_Pumpkin.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_Pumpkin::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 172651 ];

	ATGProj_Pumpkin_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function TGWeapon.TGProj_Pumpkin.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGProj_Pumpkin::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 172645 ];

	ATGProj_Pumpkin_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGWeapon.TGProj_Pumpkin.InitWithBaseVelocity
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 BaseVelocity                   ( CPF_Parm )

void ATGProj_Pumpkin::InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity )
{
	static UFunction* pFnInitWithBaseVelocity = NULL;

	if ( ! pFnInitWithBaseVelocity )
		pFnInitWithBaseVelocity = (UFunction*) UObject::GObjObjects()->Data[ 172642 ];

	ATGProj_Pumpkin_execInitWithBaseVelocity_Parms InitWithBaseVelocity_Parms;
	memcpy ( &InitWithBaseVelocity_Parms.Direction, &Direction, 0xC );
	memcpy ( &InitWithBaseVelocity_Parms.BaseVelocity, &BaseVelocity, 0xC );

	this->ProcessEvent ( pFnInitWithBaseVelocity, &InitWithBaseVelocity_Parms, NULL );
};

// Function TGWeapon.TGProj_Pumpkin.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGProj_Pumpkin::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 172641 ];

	ATGProj_Pumpkin_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGWeapon.TGProj_RPKMPoison.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_RPKMPoison::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 172722 ];

	ATGProj_RPKMPoison_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function TGWeapon.TGProj_RPKMPoison.BeginPoisonDetaction
// [0x00820102] 
// Parameters infos:

void ATGProj_RPKMPoison::BeginPoisonDetaction ( )
{
	static UFunction* pFnBeginPoisonDetaction = NULL;

	if ( ! pFnBeginPoisonDetaction )
		pFnBeginPoisonDetaction = (UFunction*) UObject::GObjObjects()->Data[ 172711 ];

	ATGProj_RPKMPoison_execBeginPoisonDetaction_Parms BeginPoisonDetaction_Parms;

	this->ProcessEvent ( pFnBeginPoisonDetaction, &BeginPoisonDetaction_Parms, NULL );
};

// Function TGWeapon.TGProj_RPKMPoison.Explode
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_RPKMPoison::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 172707 ];

	ATGProj_RPKMPoison_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function TGWeapon.TGProj_RPKMPoison.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGProj_RPKMPoison::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 172703 ];

	ATGProj_RPKMPoison_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGWeapon.TGProj_RPKMPoison.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGProj_RPKMPoison::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 172701 ];

	ATGProj_RPKMPoison_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGWeapon.TGProj_Smoke.RemoveFromList
// [0x00020002] 
// Parameters infos:

void ATGProj_Smoke::RemoveFromList ( )
{
	static UFunction* pFnRemoveFromList = NULL;

	if ( ! pFnRemoveFromList )
		pFnRemoveFromList = (UFunction*) UObject::GObjObjects()->Data[ 172781 ];

	ATGProj_Smoke_execRemoveFromList_Parms RemoveFromList_Parms;

	this->ProcessEvent ( pFnRemoveFromList, &RemoveFromList_Parms, NULL );
};

// Function TGWeapon.TGProj_Smoke.AddToList
// [0x00020002] 
// Parameters infos:

void ATGProj_Smoke::AddToList ( )
{
	static UFunction* pFnAddToList = NULL;

	if ( ! pFnAddToList )
		pFnAddToList = (UFunction*) UObject::GObjObjects()->Data[ 172779 ];

	ATGProj_Smoke_execAddToList_Parms AddToList_Parms;

	this->ProcessEvent ( pFnAddToList, &AddToList_Parms, NULL );
};

// Function TGWeapon.TGProj_Smoke.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_Smoke::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 172768 ];

	ATGProj_Smoke_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function TGWeapon.TGProj_Smoke.ReleaseSmoke
// [0x00820102] 
// Parameters infos:

void ATGProj_Smoke::ReleaseSmoke ( )
{
	static UFunction* pFnReleaseSmoke = NULL;

	if ( ! pFnReleaseSmoke )
		pFnReleaseSmoke = (UFunction*) UObject::GObjObjects()->Data[ 172764 ];

	ATGProj_Smoke_execReleaseSmoke_Parms ReleaseSmoke_Parms;

	this->ProcessEvent ( pFnReleaseSmoke, &ReleaseSmoke_Parms, NULL );
};

// Function TGWeapon.TGProj_Smoke.Tick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGProj_Smoke::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 172762 ];

	ATGProj_Smoke_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGWeapon.TGProj_Smoke.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGProj_Smoke::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 172761 ];

	ATGProj_Smoke_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGWeapon.TGProj_Smoke.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_Smoke::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 172757 ];

	ATGProj_Smoke_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function TGWeapon.TGProj_Smoke.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGProj_Smoke::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 172750 ];

	ATGProj_Smoke_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGWeapon.TGProj_Smoke.InitWithBaseVelocity
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 BaseVelocity                   ( CPF_Parm )

void ATGProj_Smoke::InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity )
{
	static UFunction* pFnInitWithBaseVelocity = NULL;

	if ( ! pFnInitWithBaseVelocity )
		pFnInitWithBaseVelocity = (UFunction*) UObject::GObjObjects()->Data[ 172747 ];

	ATGProj_Smoke_execInitWithBaseVelocity_Parms InitWithBaseVelocity_Parms;
	memcpy ( &InitWithBaseVelocity_Parms.Direction, &Direction, 0xC );
	memcpy ( &InitWithBaseVelocity_Parms.BaseVelocity, &BaseVelocity, 0xC );

	this->ProcessEvent ( pFnInitWithBaseVelocity, &InitWithBaseVelocity_Parms, NULL );
};

// Function TGWeapon.TGProj_Smoke.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGProj_Smoke::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 172745 ];

	ATGProj_Smoke_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGWeapon.TGWeap_Smoke.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGWeap_Smoke::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 176984 ];

	ATGWeap_Smoke_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGWeapon.TGProj_SnowBall.ProjectileHurtRadius
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGProj_SnowBall::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 172819 ];

	ATGProj_SnowBall_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function TGWeapon.TGProj_SnowBall.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_SnowBall::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 172803 ];

	ATGProj_SnowBall_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function TGWeapon.TGProj_SnowBall.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_SnowBall::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 172799 ];

	ATGProj_SnowBall_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function TGWeapon.TGProj_SnowBall.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGProj_SnowBall::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 172793 ];

	ATGProj_SnowBall_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGWeapon.TGProj_SnowBall.InitWithBaseVelocity
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 BaseVelocity                   ( CPF_Parm )

void ATGProj_SnowBall::InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity )
{
	static UFunction* pFnInitWithBaseVelocity = NULL;

	if ( ! pFnInitWithBaseVelocity )
		pFnInitWithBaseVelocity = (UFunction*) UObject::GObjObjects()->Data[ 172790 ];

	ATGProj_SnowBall_execInitWithBaseVelocity_Parms InitWithBaseVelocity_Parms;
	memcpy ( &InitWithBaseVelocity_Parms.Direction, &Direction, 0xC );
	memcpy ( &InitWithBaseVelocity_Parms.BaseVelocity, &BaseVelocity, 0xC );

	this->ProcessEvent ( pFnInitWithBaseVelocity, &InitWithBaseVelocity_Parms, NULL );
};

// Function TGWeapon.TGProj_SnowBall.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGProj_SnowBall::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 172789 ];

	ATGProj_SnowBall_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGWeapon.TGProj_SuckGrenade.ProjectileHurtRadius
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGProj_SuckGrenade::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 172890 ];

	ATGProj_SuckGrenade_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function TGWeapon.TGProj_SuckGrenade.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_SuckGrenade::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 172880 ];

	ATGProj_SuckGrenade_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function TGWeapon.TGProj_SuckGrenade.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_SuckGrenade::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 172876 ];

	ATGProj_SuckGrenade_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function TGWeapon.TGProj_SuckGrenade.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGProj_SuckGrenade::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 172870 ];

	ATGProj_SuckGrenade_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGWeapon.TGProj_SuckGrenade.InitWithBaseVelocity
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 BaseVelocity                   ( CPF_Parm )

void ATGProj_SuckGrenade::InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity )
{
	static UFunction* pFnInitWithBaseVelocity = NULL;

	if ( ! pFnInitWithBaseVelocity )
		pFnInitWithBaseVelocity = (UFunction*) UObject::GObjObjects()->Data[ 172867 ];

	ATGProj_SuckGrenade_execInitWithBaseVelocity_Parms InitWithBaseVelocity_Parms;
	memcpy ( &InitWithBaseVelocity_Parms.Direction, &Direction, 0xC );
	memcpy ( &InitWithBaseVelocity_Parms.BaseVelocity, &BaseVelocity, 0xC );

	this->ProcessEvent ( pFnInitWithBaseVelocity, &InitWithBaseVelocity_Parms, NULL );
};

// Function TGWeapon.TGProj_SuckGrenade.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGProj_SuckGrenade::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 172866 ];

	ATGProj_SuckGrenade_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGWeapon.TGProj_XM25.ProjectileHurtRadius
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGProj_XM25::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 172951 ];

	ATGProj_XM25_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function TGWeapon.TGProj_XM25.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_XM25::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 172935 ];

	ATGProj_XM25_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function TGWeapon.TGProj_XM25.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGProj_XM25::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 172931 ];

	ATGProj_XM25_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function TGWeapon.TGProj_XM25.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGProj_XM25::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 172927 ];

	ATGProj_XM25_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGWeapon.TGProj_XM25.PlayFlyingSound
// [0x00084102] 
// Parameters infos:
// class UAudioComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USoundCue*               Sound                          ( CPF_Parm )
// class UAudioComponent*         AC                             ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )
// float                          FadeInTime                     ( CPF_OptionalParm | CPF_Parm )

class UAudioComponent* ATGProj_XM25::PlayFlyingSound ( class USoundCue* Sound, class UAudioComponent* AC, float FadeInTime )
{
	static UFunction* pFnPlayFlyingSound = NULL;

	if ( ! pFnPlayFlyingSound )
		pFnPlayFlyingSound = (UFunction*) UObject::GObjObjects()->Data[ 172921 ];

	ATGProj_XM25_execPlayFlyingSound_Parms PlayFlyingSound_Parms;
	PlayFlyingSound_Parms.Sound = Sound;
	PlayFlyingSound_Parms.AC = AC;
	PlayFlyingSound_Parms.FadeInTime = FadeInTime;

	this->ProcessEvent ( pFnPlayFlyingSound, &PlayFlyingSound_Parms, NULL );

	return PlayFlyingSound_Parms.ReturnValue;
};

// Function TGWeapon.TGProj_XM25.InitWithBaseVelocity
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 BaseVelocity                   ( CPF_Parm )

void ATGProj_XM25::InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity )
{
	static UFunction* pFnInitWithBaseVelocity = NULL;

	if ( ! pFnInitWithBaseVelocity )
		pFnInitWithBaseVelocity = (UFunction*) UObject::GObjObjects()->Data[ 172918 ];

	ATGProj_XM25_execInitWithBaseVelocity_Parms InitWithBaseVelocity_Parms;
	memcpy ( &InitWithBaseVelocity_Parms.Direction, &Direction, 0xC );
	memcpy ( &InitWithBaseVelocity_Parms.BaseVelocity, &BaseVelocity, 0xC );

	this->ProcessEvent ( pFnInitWithBaseVelocity, &InitWithBaseVelocity_Parms, NULL );
};

// Function TGWeapon.TGProj_XM25.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGProj_XM25::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 172917 ];

	ATGProj_XM25_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGWeapon.TGWeapFeedBack_ShowAmmo.UpdateAmmoCountDisplay
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGWeapFeedBack_ShowAmmo::UpdateAmmoCountDisplay ( )
{
	static UFunction* pFnUpdateAmmoCountDisplay = NULL;

	if ( ! pFnUpdateAmmoCountDisplay )
		pFnUpdateAmmoCountDisplay = (UFunction*) UObject::GObjObjects()->Data[ 177751 ];

	ATGWeapFeedBack_ShowAmmo_execUpdateAmmoCountDisplay_Parms UpdateAmmoCountDisplay_Parms;

	this->ProcessEvent ( pFnUpdateAmmoCountDisplay, &UpdateAmmoCountDisplay_Parms, NULL );

	return UpdateAmmoCountDisplay_Parms.ReturnValue;
};

// Function TGWeapon.TGWeapFeedBack_ShowAmmo.DeactivateComponent
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGWeapFeedBack_ShowAmmo::DeactivateComponent ( )
{
	static UFunction* pFnDeactivateComponent = NULL;

	if ( ! pFnDeactivateComponent )
		pFnDeactivateComponent = (UFunction*) UObject::GObjObjects()->Data[ 177749 ];

	ATGWeapFeedBack_ShowAmmo_execDeactivateComponent_Parms DeactivateComponent_Parms;

	this->ProcessEvent ( pFnDeactivateComponent, &DeactivateComponent_Parms, NULL );

	return DeactivateComponent_Parms.ReturnValue;
};

// Function TGWeapon.TGWeapFeedBack_ShowAmmo.ActivateComponent
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGWeapFeedBack_ShowAmmo::ActivateComponent ( )
{
	static UFunction* pFnActivateComponent = NULL;

	if ( ! pFnActivateComponent )
		pFnActivateComponent = (UFunction*) UObject::GObjObjects()->Data[ 177746 ];

	ATGWeapFeedBack_ShowAmmo_execActivateComponent_Parms ActivateComponent_Parms;

	this->ProcessEvent ( pFnActivateComponent, &ActivateComponent_Parms, NULL );

	return ActivateComponent_Parms.ReturnValue;
};

// Function TGWeapon.TGWeapFeedBack_ShowAmmo.SetMaterialOrder
// [0x00020102] 
// Parameters infos:
// int                            MatOrder                       ( CPF_Parm )

void ATGWeapFeedBack_ShowAmmo::SetMaterialOrder ( int MatOrder )
{
	static UFunction* pFnSetMaterialOrder = NULL;

	if ( ! pFnSetMaterialOrder )
		pFnSetMaterialOrder = (UFunction*) UObject::GObjObjects()->Data[ 177744 ];

	ATGWeapFeedBack_ShowAmmo_execSetMaterialOrder_Parms SetMaterialOrder_Parms;
	SetMaterialOrder_Parms.MatOrder = MatOrder;

	this->ProcessEvent ( pFnSetMaterialOrder, &SetMaterialOrder_Parms, NULL );
};

// Function TGWeapon.TGWeapFeedBack_AddAmmo.ActivateComponent
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGWeapFeedBack_AddAmmo::ActivateComponent ( )
{
	static UFunction* pFnActivateComponent = NULL;

	if ( ! pFnActivateComponent )
		pFnActivateComponent = (UFunction*) UObject::GObjObjects()->Data[ 177734 ];

	ATGWeapFeedBack_AddAmmo_execActivateComponent_Parms ActivateComponent_Parms;

	this->ProcessEvent ( pFnActivateComponent, &ActivateComponent_Parms, NULL );

	return ActivateComponent_Parms.ReturnValue;
};

// Function TGWeapon.TGWeapFeedBack_AddAmmo.InitFeedBackComponent
// [0x00020102] 
// Parameters infos:
// class ATGRealWeapon*           InputWeapon                    ( CPF_Parm )

void ATGWeapFeedBack_AddAmmo::InitFeedBackComponent ( class ATGRealWeapon* InputWeapon )
{
	static UFunction* pFnInitFeedBackComponent = NULL;

	if ( ! pFnInitFeedBackComponent )
		pFnInitFeedBackComponent = (UFunction*) UObject::GObjObjects()->Data[ 177730 ];

	ATGWeapFeedBack_AddAmmo_execInitFeedBackComponent_Parms InitFeedBackComponent_Parms;
	InitFeedBackComponent_Parms.InputWeapon = InputWeapon;

	this->ProcessEvent ( pFnInitFeedBackComponent, &InitFeedBackComponent_Parms, NULL );
};

// Function TGWeapon.TGWeap_M1014Crazy.PlayFireEffects
// [0x00024102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void ATGWeap_M1014Crazy::PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation )
{
	static UFunction* pFnPlayFireEffects = NULL;

	if ( ! pFnPlayFireEffects )
		pFnPlayFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 175126 ];

	ATGWeap_M1014Crazy_execPlayFireEffects_Parms PlayFireEffects_Parms;
	PlayFireEffects_Parms.FireModeNum = FireModeNum;
	memcpy ( &PlayFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayFireEffects, &PlayFireEffects_Parms, NULL );
};

// Function TGWeapon.TGWeap_XM25.ServerThrowGrenade
// [0x002200C2] 
// Parameters infos:
// float                          LocalClientTime                ( CPF_Parm )

void ATGWeap_XM25::ServerThrowGrenade ( float LocalClientTime )
{
	static UFunction* pFnServerThrowGrenade = NULL;

	if ( ! pFnServerThrowGrenade )
		pFnServerThrowGrenade = (UFunction*) UObject::GObjObjects()->Data[ 177492 ];

	ATGWeap_XM25_execServerThrowGrenade_Parms ServerThrowGrenade_Parms;
	ServerThrowGrenade_Parms.LocalClientTime = LocalClientTime;

	this->ProcessEvent ( pFnServerThrowGrenade, &ServerThrowGrenade_Parms, NULL );
};

// Function TGWeapon.TGWeap_XM25.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGWeap_XM25::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 177487 ];

	ATGWeap_XM25_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_XM25.GetProVelocity
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartLoc                       ( CPF_Parm )

struct FVector ATGWeap_XM25::GetProVelocity ( struct FVector StartLoc )
{
	static UFunction* pFnGetProVelocity = NULL;

	if ( ! pFnGetProVelocity )
		pFnGetProVelocity = (UFunction*) UObject::GObjObjects()->Data[ 177480 ];

	ATGWeap_XM25_execGetProVelocity_Parms GetProVelocity_Parms;
	memcpy ( &GetProVelocity_Parms.StartLoc, &StartLoc, 0xC );

	this->ProcessEvent ( pFnGetProVelocity, &GetProVelocity_Parms, NULL );

	return GetProVelocity_Parms.ReturnValue;
};

// Function TGWeapon.TGWeap_XM25.GetAimVector
// [0x00C20102] 
// Parameters infos:
// struct FVector                 StartLoc                       ( CPF_Parm )
// struct FVector                 vForward                       ( CPF_Parm | CPF_OutParm )
// struct FVector                 vRight                         ( CPF_Parm | CPF_OutParm )
// struct FVector                 vUp                            ( CPF_Parm | CPF_OutParm )

void ATGWeap_XM25::GetAimVector ( struct FVector StartLoc, struct FVector* vForward, struct FVector* vRight, struct FVector* vUp )
{
	static UFunction* pFnGetAimVector = NULL;

	if ( ! pFnGetAimVector )
		pFnGetAimVector = (UFunction*) UObject::GObjObjects()->Data[ 177474 ];

	ATGWeap_XM25_execGetAimVector_Parms GetAimVector_Parms;
	memcpy ( &GetAimVector_Parms.StartLoc, &StartLoc, 0xC );

	this->ProcessEvent ( pFnGetAimVector, &GetAimVector_Parms, NULL );

	if ( vForward )
		memcpy ( vForward, &GetAimVector_Parms.vForward, 0xC );

	if ( vRight )
		memcpy ( vRight, &GetAimVector_Parms.vRight, 0xC );

	if ( vUp )
		memcpy ( vUp, &GetAimVector_Parms.vUp, 0xC );
};

// Function TGWeapon.TGWeap_XM25.PlayFireEffects
// [0x00024102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void ATGWeap_XM25::PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation )
{
	static UFunction* pFnPlayFireEffects = NULL;

	if ( ! pFnPlayFireEffects )
		pFnPlayFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 177471 ];

	ATGWeap_XM25_execPlayFireEffects_Parms PlayFireEffects_Parms;
	PlayFireEffects_Parms.FireModeNum = FireModeNum;
	memcpy ( &PlayFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayFireEffects, &PlayFireEffects_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif