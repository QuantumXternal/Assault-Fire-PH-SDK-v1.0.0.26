/*
#############################################################################################
# Assault Fire (1.0.0.26) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TGTankGame_functions.h
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

// Function TGTankGame.TGTankProjectile.GetRange
// [0x00022102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGTankProjectile::GetRange ( )
{
	static UFunction* pFnGetRange = NULL;

	if ( ! pFnGetRange )
		pFnGetRange = (UFunction*) UObject::GObjObjects()->Data[ 218356 ];

	ATGTankProjectile_execGetRange_Parms GetRange_Parms;

	this->ProcessEvent ( pFnGetRange, &GetRange_Parms, NULL );

	return GetRange_Parms.ReturnValue;
};

// Function TGTankGame.TGTankProjectile.GetTimeToLocation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 TargetLoc                      ( CPF_Parm )

float ATGTankProjectile::GetTimeToLocation ( struct FVector TargetLoc )
{
	static UFunction* pFnGetTimeToLocation = NULL;

	if ( ! pFnGetTimeToLocation )
		pFnGetTimeToLocation = (UFunction*) UObject::GObjObjects()->Data[ 218353 ];

	ATGTankProjectile_execGetTimeToLocation_Parms GetTimeToLocation_Parms;
	memcpy ( &GetTimeToLocation_Parms.TargetLoc, &TargetLoc, 0xC );

	this->ProcessEvent ( pFnGetTimeToLocation, &GetTimeToLocation_Parms, NULL );

	return GetTimeToLocation_Parms.ReturnValue;
};

// Function TGTankGame.TGTankProjectile.StaticGetTimeToLocation
// [0x00022102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 TargetLoc                      ( CPF_Parm )
// struct FVector                 StartLoc                       ( CPF_Parm )
// class AController*             RequestedBy                    ( CPF_Parm )

float ATGTankProjectile::StaticGetTimeToLocation ( struct FVector TargetLoc, struct FVector StartLoc, class AController* RequestedBy )
{
	static UFunction* pFnStaticGetTimeToLocation = NULL;

	if ( ! pFnStaticGetTimeToLocation )
		pFnStaticGetTimeToLocation = (UFunction*) UObject::GObjObjects()->Data[ 218348 ];

	ATGTankProjectile_execStaticGetTimeToLocation_Parms StaticGetTimeToLocation_Parms;
	memcpy ( &StaticGetTimeToLocation_Parms.TargetLoc, &TargetLoc, 0xC );
	memcpy ( &StaticGetTimeToLocation_Parms.StartLoc, &StartLoc, 0xC );
	StaticGetTimeToLocation_Parms.RequestedBy = RequestedBy;

	this->ProcessEvent ( pFnStaticGetTimeToLocation, &StaticGetTimeToLocation_Parms, NULL );

	return StaticGetTimeToLocation_Parms.ReturnValue;
};

// Function TGTankGame.TGTankProjectile.CalculateTravelTime
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Dist                           ( CPF_Parm )
// float                          MoveSpeed                      ( CPF_Parm )
// float                          MaxMoveSpeed                   ( CPF_Parm )
// float                          AccelMag                       ( CPF_Parm )

float ATGTankProjectile::CalculateTravelTime ( float Dist, float MoveSpeed, float MaxMoveSpeed, float AccelMag )
{
	static UFunction* pFnCalculateTravelTime = NULL;

	if ( ! pFnCalculateTravelTime )
		pFnCalculateTravelTime = (UFunction*) UObject::GObjObjects()->Data[ 218339 ];

	ATGTankProjectile_execCalculateTravelTime_Parms CalculateTravelTime_Parms;
	CalculateTravelTime_Parms.Dist = Dist;
	CalculateTravelTime_Parms.MoveSpeed = MoveSpeed;
	CalculateTravelTime_Parms.MaxMoveSpeed = MaxMoveSpeed;
	CalculateTravelTime_Parms.AccelMag = AccelMag;

	this->ProcessEvent ( pFnCalculateTravelTime, &CalculateTravelTime_Parms, NULL );

	return CalculateTravelTime_Parms.ReturnValue;
};

// Function TGTankGame.TGTankProjectile.GetPawnOwner
// [0x00020100] 
// Parameters infos:
// class APawn*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class APawn* ATGTankProjectile::GetPawnOwner ( )
{
	static UFunction* pFnGetPawnOwner = NULL;

	if ( ! pFnGetPawnOwner )
		pFnGetPawnOwner = (UFunction*) UObject::GObjObjects()->Data[ 218337 ];

	ATGTankProjectile_execGetPawnOwner_Parms GetPawnOwner_Parms;

	this->ProcessEvent ( pFnGetPawnOwner, &GetPawnOwner_Parms, NULL );

	return GetPawnOwner_Parms.ReturnValue;
};

// Function TGTankGame.TGTankProjectile.GetHomingTarget
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AUTProjectile*           Seeker                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )

class AActor* ATGTankProjectile::eventGetHomingTarget ( class AUTProjectile* Seeker, class AController* InstigatedBy )
{
	static UFunction* pFnGetHomingTarget = NULL;

	if ( ! pFnGetHomingTarget )
		pFnGetHomingTarget = (UFunction*) UObject::GObjObjects()->Data[ 218333 ];

	ATGTankProjectile_eventGetHomingTarget_Parms GetHomingTarget_Parms;
	GetHomingTarget_Parms.Seeker = Seeker;
	GetHomingTarget_Parms.InstigatedBy = InstigatedBy;

	this->ProcessEvent ( pFnGetHomingTarget, &GetHomingTarget_Parms, NULL );

	return GetHomingTarget_Parms.ReturnValue;
};

// Function TGTankGame.TGTankProjectile.CalcCamera
// [0x00420102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )
// float                          out_FOV                        ( CPF_Parm | CPF_OutParm )

bool ATGTankProjectile::CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
{
	static UFunction* pFnCalcCamera = NULL;

	if ( ! pFnCalcCamera )
		pFnCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 218327 ];

	ATGTankProjectile_execCalcCamera_Parms CalcCamera_Parms;
	CalcCamera_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnCalcCamera, &CalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &CalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &CalcCamera_Parms.out_CamRot, 0xC );

	if ( out_FOV )
		*out_FOV = CalcCamera_Parms.out_FOV;

	return CalcCamera_Parms.ReturnValue;
};

// Function TGTankGame.TGTankProjectile.MyOnParticleSystemFinished
// [0x00020102] 
// Parameters infos:
// class UParticleSystemComponent* PSC                            ( CPF_Parm | CPF_EditInline )

void ATGTankProjectile::MyOnParticleSystemFinished ( class UParticleSystemComponent* PSC )
{
	static UFunction* pFnMyOnParticleSystemFinished = NULL;

	if ( ! pFnMyOnParticleSystemFinished )
		pFnMyOnParticleSystemFinished = (UFunction*) UObject::GObjObjects()->Data[ 218322 ];

	ATGTankProjectile_execMyOnParticleSystemFinished_Parms MyOnParticleSystemFinished_Parms;
	MyOnParticleSystemFinished_Parms.PSC = PSC;

	this->ProcessEvent ( pFnMyOnParticleSystemFinished, &MyOnParticleSystemFinished_Parms, NULL );
};

// Function TGTankGame.TGTankProjectile.Destroyed
// [0x00020102] 
// Parameters infos:

void ATGTankProjectile::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 218321 ];

	ATGTankProjectile_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGTankGame.TGTankProjectile.HideProjectile
// [0x00020102] 
// Parameters infos:

void ATGTankProjectile::HideProjectile ( )
{
	static UFunction* pFnHideProjectile = NULL;

	if ( ! pFnHideProjectile )
		pFnHideProjectile = (UFunction*) UObject::GObjObjects()->Data[ 218319 ];

	ATGTankProjectile_execHideProjectile_Parms HideProjectile_Parms;

	this->ProcessEvent ( pFnHideProjectile, &HideProjectile_Parms, NULL );
};

// Function TGTankGame.TGTankProjectile.TornOff
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATGTankProjectile::eventTornOff ( )
{
	static UFunction* pFnTornOff = NULL;

	if ( ! pFnTornOff )
		pFnTornOff = (UFunction*) UObject::GObjObjects()->Data[ 218318 ];

	ATGTankProjectile_eventTornOff_Parms TornOff_Parms;

	this->ProcessEvent ( pFnTornOff, &TornOff_Parms, NULL );
};

// Function TGTankGame.TGTankProjectile.ShutDown
// [0x00820102] 
// Parameters infos:

void ATGTankProjectile::ShutDown ( )
{
	static UFunction* pFnShutDown = NULL;

	if ( ! pFnShutDown )
		pFnShutDown = (UFunction*) UObject::GObjObjects()->Data[ 218315 ];

	ATGTankProjectile_execShutDown_Parms ShutDown_Parms;

	this->ProcessEvent ( pFnShutDown, &ShutDown_Parms, NULL );
};

// Function TGTankGame.TGTankProjectile.ShouldSpawnExplosionLight
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGTankProjectile::ShouldSpawnExplosionLight ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnShouldSpawnExplosionLight = NULL;

	if ( ! pFnShouldSpawnExplosionLight )
		pFnShouldSpawnExplosionLight = (UFunction*) UObject::GObjObjects()->Data[ 218309 ];

	ATGTankProjectile_execShouldSpawnExplosionLight_Parms ShouldSpawnExplosionLight_Parms;
	memcpy ( &ShouldSpawnExplosionLight_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ShouldSpawnExplosionLight_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnShouldSpawnExplosionLight, &ShouldSpawnExplosionLight_Parms, NULL );

	return ShouldSpawnExplosionLight_Parms.ReturnValue;
};

// Function TGTankGame.TGTankProjectile.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGTankProjectile::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 218299 ];

	ATGTankProjectile_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function TGTankGame.TGTankProjectile.SetExplosionEffectParameters
// [0x00020100] 
// Parameters infos:
// class UParticleSystemComponent* ProjExplosion                  ( CPF_Parm | CPF_EditInline )

void ATGTankProjectile::SetExplosionEffectParameters ( class UParticleSystemComponent* ProjExplosion )
{
	static UFunction* pFnSetExplosionEffectParameters = NULL;

	if ( ! pFnSetExplosionEffectParameters )
		pFnSetExplosionEffectParameters = (UFunction*) UObject::GObjObjects()->Data[ 218297 ];

	ATGTankProjectile_execSetExplosionEffectParameters_Parms SetExplosionEffectParameters_Parms;
	SetExplosionEffectParameters_Parms.ProjExplosion = ProjExplosion;

	this->ProcessEvent ( pFnSetExplosionEffectParameters, &SetExplosionEffectParameters_Parms, NULL );
};

// Function TGTankGame.TGTankProjectile.SpawnFlightEffects
// [0x00020102] 
// Parameters infos:

void ATGTankProjectile::SpawnFlightEffects ( )
{
	static UFunction* pFnSpawnFlightEffects = NULL;

	if ( ! pFnSpawnFlightEffects )
		pFnSpawnFlightEffects = (UFunction*) UObject::GObjObjects()->Data[ 218296 ];

	ATGTankProjectile_execSpawnFlightEffects_Parms SpawnFlightEffects_Parms;

	this->ProcessEvent ( pFnSpawnFlightEffects, &SpawnFlightEffects_Parms, NULL );
};

// Function TGTankGame.TGTankProjectile.Explode
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGTankProjectile::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 218293 ];

	ATGTankProjectile_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function TGTankGame.TGTankProjectile.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGTankProjectile::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 218289 ];

	ATGTankProjectile_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function TGTankGame.TGTankProjectile.Init
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )

void ATGTankProjectile::Init ( struct FVector Direction )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 218287 ];

	ATGTankProjectile_execInit_Parms Init_Parms;
	memcpy ( &Init_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function TGTankGame.TGTankProjectile.SetInitialState
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGTankProjectile::eventSetInitialState ( )
{
	static UFunction* pFnSetInitialState = NULL;

	if ( ! pFnSetInitialState )
		pFnSetInitialState = (UFunction*) UObject::GObjObjects()->Data[ 218286 ];

	ATGTankProjectile_eventSetInitialState_Parms SetInitialState_Parms;

	this->ProcessEvent ( pFnSetInitialState, &SetInitialState_Parms, NULL );
};

// Function TGTankGame.TGTankProjectile.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGTankProjectile::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 218284 ];

	ATGTankProjectile_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGTankGame.TGTankProjectile.PreBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATGTankProjectile::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 218282 ];

	ATGTankProjectile_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function TGTankGame.TGTankProjectile.CanSplash
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGTankProjectile::CanSplash ( )
{
	static UFunction* pFnCanSplash = NULL;

	if ( ! pFnCanSplash )
		pFnCanSplash = (UFunction*) UObject::GObjObjects()->Data[ 218280 ];

	ATGTankProjectile_execCanSplash_Parms CanSplash_Parms;

	this->ProcessEvent ( pFnCanSplash, &CanSplash_Parms, NULL );

	return CanSplash_Parms.ReturnValue;
};

// Function TGTankGame.TGTankProjectile.Landed
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  FloorActor                     ( CPF_Parm )

void ATGTankProjectile::eventLanded ( struct FVector HitNormal, class AActor* FloorActor )
{
	static UFunction* pFnLanded = NULL;

	if ( ! pFnLanded )
		pFnLanded = (UFunction*) UObject::GObjObjects()->Data[ 218277 ];

	ATGTankProjectile_eventLanded_Parms Landed_Parms;
	memcpy ( &Landed_Parms.HitNormal, &HitNormal, 0xC );
	Landed_Parms.FloorActor = FloorActor;

	this->ProcessEvent ( pFnLanded, &Landed_Parms, NULL );
};

// Function TGTankGame.TGTankProjectile.CreateProjectileLight
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void ATGTankProjectile::eventCreateProjectileLight ( )
{
	static UFunction* pFnCreateProjectileLight = NULL;

	if ( ! pFnCreateProjectileLight )
		pFnCreateProjectileLight = (UFunction*) UObject::GObjObjects()->Data[ 218276 ];

	ATGTankProjectile_eventCreateProjectileLight_Parms CreateProjectileLight_Parms;

	this->ProcessEvent ( pFnCreateProjectileLight, &CreateProjectileLight_Parms, NULL );
};

// Function TGTankGame.TGTankTMGameReplicationInfo.InOrder
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerReplicationInfo*  P1                             ( CPF_Parm )
// class APlayerReplicationInfo*  P2                             ( CPF_Parm )

bool ATGTankTMGameReplicationInfo::InOrder ( class APlayerReplicationInfo* P1, class APlayerReplicationInfo* P2 )
{
	static UFunction* pFnInOrder = NULL;

	if ( ! pFnInOrder )
		pFnInOrder = (UFunction*) UObject::GObjObjects()->Data[ 217002 ];

	ATGTankTMGameReplicationInfo_execInOrder_Parms InOrder_Parms;
	InOrder_Parms.P1 = P1;
	InOrder_Parms.P2 = P2;

	this->ProcessEvent ( pFnInOrder, &InOrder_Parms, NULL );

	return InOrder_Parms.ReturnValue;
};

// Function TGTankGame.TGTankTMGameReplicationInfo.CalcKillDistStatis
// [0x00020002] 
// Parameters infos:
// struct FVector                 KillerLoc                      ( CPF_Parm )
// struct FVector                 KilledLoc                      ( CPF_Parm )

void ATGTankTMGameReplicationInfo::CalcKillDistStatis ( struct FVector KillerLoc, struct FVector KilledLoc )
{
	static UFunction* pFnCalcKillDistStatis = NULL;

	if ( ! pFnCalcKillDistStatis )
		pFnCalcKillDistStatis = (UFunction*) UObject::GObjObjects()->Data[ 216998 ];

	ATGTankTMGameReplicationInfo_execCalcKillDistStatis_Parms CalcKillDistStatis_Parms;
	memcpy ( &CalcKillDistStatis_Parms.KillerLoc, &KillerLoc, 0xC );
	memcpy ( &CalcKillDistStatis_Parms.KilledLoc, &KilledLoc, 0xC );

	this->ProcessEvent ( pFnCalcKillDistStatis, &CalcKillDistStatis_Parms, NULL );
};

// Function TGTankGame.TGTankTMGameReplicationInfo.ProcessCharacterData
// [0x00024120] 
// Parameters infos:
// class ATGPlayerReplicationInfo* PRI                            ( CPF_Parm )
// unsigned long                  bTeamChange                    ( CPF_OptionalParm | CPF_Parm )

void ATGTankTMGameReplicationInfo::ProcessCharacterData ( class ATGPlayerReplicationInfo* PRI, unsigned long bTeamChange )
{
	static UFunction* pFnProcessCharacterData = NULL;

	if ( ! pFnProcessCharacterData )
		pFnProcessCharacterData = (UFunction*) UObject::GObjObjects()->Data[ 216995 ];

	ATGTankTMGameReplicationInfo_execProcessCharacterData_Parms ProcessCharacterData_Parms;
	ProcessCharacterData_Parms.PRI = PRI;
	ProcessCharacterData_Parms.bTeamChange = bTeamChange;

	this->ProcessEvent ( pFnProcessCharacterData, &ProcessCharacterData_Parms, NULL );
};

// Function TGTankGame.TGTankTMGameReplicationInfo.BeginProcessCharacterData
// [0x00024100] 
// Parameters infos:
// class ATGPlayerReplicationInfo* PRI                            ( CPF_Parm )
// unsigned long                  bTeamChange                    ( CPF_OptionalParm | CPF_Parm )

void ATGTankTMGameReplicationInfo::BeginProcessCharacterData ( class ATGPlayerReplicationInfo* PRI, unsigned long bTeamChange )
{
	static UFunction* pFnBeginProcessCharacterData = NULL;

	if ( ! pFnBeginProcessCharacterData )
		pFnBeginProcessCharacterData = (UFunction*) UObject::GObjObjects()->Data[ 216992 ];

	ATGTankTMGameReplicationInfo_execBeginProcessCharacterData_Parms BeginProcessCharacterData_Parms;
	BeginProcessCharacterData_Parms.PRI = PRI;
	BeginProcessCharacterData_Parms.bTeamChange = bTeamChange;

	this->ProcessEvent ( pFnBeginProcessCharacterData, &BeginProcessCharacterData_Parms, NULL );
};

// Function TGTankGame.TGTankTMGameReplicationInfo.StartProcessingCharacterData
// [0x00020100] 
// Parameters infos:

void ATGTankTMGameReplicationInfo::StartProcessingCharacterData ( )
{
	static UFunction* pFnStartProcessingCharacterData = NULL;

	if ( ! pFnStartProcessingCharacterData )
		pFnStartProcessingCharacterData = (UFunction*) UObject::GObjObjects()->Data[ 216991 ];

	ATGTankTMGameReplicationInfo_execStartProcessingCharacterData_Parms StartProcessingCharacterData_Parms;

	this->ProcessEvent ( pFnStartProcessingCharacterData, &StartProcessingCharacterData_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.FractureActorDestroyed
// [0x002200C2] 
// Parameters infos:
// class AFracturedStaticMeshActor* fracturedActor                 ( CPF_Parm )

void ATGTankTMPlayerController::FractureActorDestroyed ( class AFracturedStaticMeshActor* fracturedActor )
{
	static UFunction* pFnFractureActorDestroyed = NULL;

	if ( ! pFnFractureActorDestroyed )
		pFnFractureActorDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 217608 ];

	ATGTankTMPlayerController_execFractureActorDestroyed_Parms FractureActorDestroyed_Parms;
	FractureActorDestroyed_Parms.fracturedActor = fracturedActor;

	this->ProcessEvent ( pFnFractureActorDestroyed, &FractureActorDestroyed_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.NotifyClientAssistance
// [0x010201C2] 
// Parameters infos:

void ATGTankTMPlayerController::NotifyClientAssistance ( )
{
	static UFunction* pFnNotifyClientAssistance = NULL;

	if ( ! pFnNotifyClientAssistance )
		pFnNotifyClientAssistance = (UFunction*) UObject::GObjObjects()->Data[ 217607 ];

	ATGTankTMPlayerController_execNotifyClientAssistance_Parms NotifyClientAssistance_Parms;

	this->ProcessEvent ( pFnNotifyClientAssistance, &NotifyClientAssistance_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.ClientSetRespawnStartTime
// [0x010201C2] 
// Parameters infos:
// float                          RespTime                       ( CPF_Parm )
// float                          RespDelay                      ( CPF_Parm )

void ATGTankTMPlayerController::ClientSetRespawnStartTime ( float RespTime, float RespDelay )
{
	static UFunction* pFnClientSetRespawnStartTime = NULL;

	if ( ! pFnClientSetRespawnStartTime )
		pFnClientSetRespawnStartTime = (UFunction*) UObject::GObjObjects()->Data[ 217596 ];

	ATGTankTMPlayerController_execClientSetRespawnStartTime_Parms ClientSetRespawnStartTime_Parms;
	ClientSetRespawnStartTime_Parms.RespTime = RespTime;
	ClientSetRespawnStartTime_Parms.RespDelay = RespDelay;

	this->ProcessEvent ( pFnClientSetRespawnStartTime, &ClientSetRespawnStartTime_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.PlayCameraShake
// [0x00024002] 
// Parameters infos:
// class UCameraShake*            Shake                          ( CPF_Parm )
// struct FVector                 Epicenter                      ( CPF_Parm )
// float                          ShakeInnerRadius               ( CPF_Parm )
// float                          ShakeOuterRadius               ( CPF_Parm )
// float                          Falloff                        ( CPF_OptionalParm | CPF_Parm )

void ATGTankTMPlayerController::PlayCameraShake ( class UCameraShake* Shake, struct FVector Epicenter, float ShakeInnerRadius, float ShakeOuterRadius, float Falloff )
{
	static UFunction* pFnPlayCameraShake = NULL;

	if ( ! pFnPlayCameraShake )
		pFnPlayCameraShake = (UFunction*) UObject::GObjObjects()->Data[ 217570 ];

	ATGTankTMPlayerController_execPlayCameraShake_Parms PlayCameraShake_Parms;
	PlayCameraShake_Parms.Shake = Shake;
	memcpy ( &PlayCameraShake_Parms.Epicenter, &Epicenter, 0xC );
	PlayCameraShake_Parms.ShakeInnerRadius = ShakeInnerRadius;
	PlayCameraShake_Parms.ShakeOuterRadius = ShakeOuterRadius;
	PlayCameraShake_Parms.Falloff = Falloff;

	this->ProcessEvent ( pFnPlayCameraShake, &PlayCameraShake_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.AdjustFOV
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGTankTMPlayerController::AdjustFOV ( float DeltaTime )
{
	static UFunction* pFnAdjustFOV = NULL;

	if ( ! pFnAdjustFOV )
		pFnAdjustFOV = (UFunction*) UObject::GObjObjects()->Data[ 217567 ];

	ATGTankTMPlayerController_execAdjustFOV_Parms AdjustFOV_Parms;
	AdjustFOV_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnAdjustFOV, &AdjustFOV_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.AcknowledgePossession
// [0x00020002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void ATGTankTMPlayerController::AcknowledgePossession ( class APawn* P )
{
	static UFunction* pFnAcknowledgePossession = NULL;

	if ( ! pFnAcknowledgePossession )
		pFnAcknowledgePossession = (UFunction*) UObject::GObjObjects()->Data[ 217564 ];

	ATGTankTMPlayerController_execAcknowledgePossession_Parms AcknowledgePossession_Parms;
	AcknowledgePossession_Parms.P = P;

	this->ProcessEvent ( pFnAcknowledgePossession, &AcknowledgePossession_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.ClientSetDeathCamera
// [0x010201C2] 
// Parameters infos:
// struct FVector                 CamLoc                         ( CPF_Parm )
// struct FRotator                CamRot                         ( CPF_Parm )

void ATGTankTMPlayerController::ClientSetDeathCamera ( struct FVector CamLoc, struct FRotator CamRot )
{
	static UFunction* pFnClientSetDeathCamera = NULL;

	if ( ! pFnClientSetDeathCamera )
		pFnClientSetDeathCamera = (UFunction*) UObject::GObjObjects()->Data[ 217561 ];

	ATGTankTMPlayerController_execClientSetDeathCamera_Parms ClientSetDeathCamera_Parms;
	memcpy ( &ClientSetDeathCamera_Parms.CamLoc, &CamLoc, 0xC );
	memcpy ( &ClientSetDeathCamera_Parms.CamRot, &CamRot, 0xC );

	this->ProcessEvent ( pFnClientSetDeathCamera, &ClientSetDeathCamera_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.CalcCamera
// [0x00C20102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )
// float                          out_FOV                        ( CPF_Parm | CPF_OutParm )

bool ATGTankTMPlayerController::CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
{
	static UFunction* pFnCalcCamera = NULL;

	if ( ! pFnCalcCamera )
		pFnCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 217551 ];

	ATGTankTMPlayerController_execCalcCamera_Parms CalcCamera_Parms;
	CalcCamera_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnCalcCamera, &CalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &CalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &CalcCamera_Parms.out_CamRot, 0xC );

	if ( out_FOV )
		*out_FOV = CalcCamera_Parms.out_FOV;

	return CalcCamera_Parms.ReturnValue;
};

// Function TGTankGame.TGTankTMPlayerController.GetPlayerViewPoint
// [0x00420902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 POVLocation                    ( CPF_Parm | CPF_OutParm )
// struct FRotator                POVRotation                    ( CPF_Parm | CPF_OutParm )

void ATGTankTMPlayerController::eventGetPlayerViewPoint ( struct FVector* POVLocation, struct FRotator* POVRotation )
{
	static UFunction* pFnGetPlayerViewPoint = NULL;

	if ( ! pFnGetPlayerViewPoint )
		pFnGetPlayerViewPoint = (UFunction*) UObject::GObjObjects()->Data[ 217546 ];

	ATGTankTMPlayerController_eventGetPlayerViewPoint_Parms GetPlayerViewPoint_Parms;

	this->ProcessEvent ( pFnGetPlayerViewPoint, &GetPlayerViewPoint_Parms, NULL );

	if ( POVLocation )
		memcpy ( POVLocation, &GetPlayerViewPoint_Parms.POVLocation, 0xC );

	if ( POVRotation )
		memcpy ( POVRotation, &GetPlayerViewPoint_Parms.POVRotation, 0xC );
};

// Function TGTankGame.TGTankTMPlayerController.SetMouseDriveStrafe
// [0x00820102] 
// Parameters infos:
// struct FRotator                cameraRot                      ( CPF_Parm )

void ATGTankTMPlayerController::SetMouseDriveStrafe ( struct FRotator cameraRot )
{
	static UFunction* pFnSetMouseDriveStrafe = NULL;

	if ( ! pFnSetMouseDriveStrafe )
		pFnSetMouseDriveStrafe = (UFunction*) UObject::GObjObjects()->Data[ 217541 ];

	ATGTankTMPlayerController_execSetMouseDriveStrafe_Parms SetMouseDriveStrafe_Parms;
	memcpy ( &SetMouseDriveStrafe_Parms.cameraRot, &cameraRot, 0xC );

	this->ProcessEvent ( pFnSetMouseDriveStrafe, &SetMouseDriveStrafe_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.DrawObjective
// [0x00820102] 
// Parameters infos:
// class ATGTankTMHUD*            H                              ( CPF_Parm )
// class ATGRealTankBase*         Objective                      ( CPF_Parm )

void ATGTankTMPlayerController::DrawObjective ( class ATGTankTMHUD* H, class ATGRealTankBase* Objective )
{
	static UFunction* pFnDrawObjective = NULL;

	if ( ! pFnDrawObjective )
		pFnDrawObjective = (UFunction*) UObject::GObjObjects()->Data[ 217516 ];

	ATGTankTMPlayerController_execDrawObjective_Parms DrawObjective_Parms;
	DrawObjective_Parms.H = H;
	DrawObjective_Parms.Objective = Objective;

	this->ProcessEvent ( pFnDrawObjective, &DrawObjective_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.DrawObjectives
// [0x00020102] 
// Parameters infos:
// class ATGTankTMHUD*            H                              ( CPF_Parm )

void ATGTankTMPlayerController::DrawObjectives ( class ATGTankTMHUD* H )
{
	static UFunction* pFnDrawObjectives = NULL;

	if ( ! pFnDrawObjectives )
		pFnDrawObjectives = (UFunction*) UObject::GObjObjects()->Data[ 217513 ];

	ATGTankTMPlayerController_execDrawObjectives_Parms DrawObjectives_Parms;
	DrawObjectives_Parms.H = H;

	this->ProcessEvent ( pFnDrawObjectives, &DrawObjectives_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.DrawHUD
// [0x00020002] 
// Parameters infos:
// class AHUD*                    H                              ( CPF_Parm )

void ATGTankTMPlayerController::DrawHUD ( class AHUD* H )
{
	static UFunction* pFnDrawHUD = NULL;

	if ( ! pFnDrawHUD )
		pFnDrawHUD = (UFunction*) UObject::GObjObjects()->Data[ 217511 ];

	ATGTankTMPlayerController_execDrawHUD_Parms DrawHUD_Parms;
	DrawHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawHUD, &DrawHUD_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.ClientReset
// [0x010201C2] 
// Parameters infos:

void ATGTankTMPlayerController::ClientReset ( )
{
	static UFunction* pFnClientReset = NULL;

	if ( ! pFnClientReset )
		pFnClientReset = (UFunction*) UObject::GObjObjects()->Data[ 217510 ];

	ATGTankTMPlayerController_execClientReset_Parms ClientReset_Parms;

	this->ProcessEvent ( pFnClientReset, &ClientReset_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.EndSelectionFadeOut
// [0x00020002] 
// Parameters infos:

void ATGTankTMPlayerController::EndSelectionFadeOut ( )
{
	static UFunction* pFnEndSelectionFadeOut = NULL;

	if ( ! pFnEndSelectionFadeOut )
		pFnEndSelectionFadeOut = (UFunction*) UObject::GObjObjects()->Data[ 217509 ];

	ATGTankTMPlayerController_execEndSelectionFadeOut_Parms EndSelectionFadeOut_Parms;

	this->ProcessEvent ( pFnEndSelectionFadeOut, &EndSelectionFadeOut_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.StartFadeOutSelection
// [0x00020002] 
// Parameters infos:

void ATGTankTMPlayerController::StartFadeOutSelection ( )
{
	static UFunction* pFnStartFadeOutSelection = NULL;

	if ( ! pFnStartFadeOutSelection )
		pFnStartFadeOutSelection = (UFunction*) UObject::GObjObjects()->Data[ 217508 ];

	ATGTankTMPlayerController_execStartFadeOutSelection_Parms StartFadeOutSelection_Parms;

	this->ProcessEvent ( pFnStartFadeOutSelection, &StartFadeOutSelection_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.EndSelectingTankType
// [0x00020002] 
// Parameters infos:

void ATGTankTMPlayerController::EndSelectingTankType ( )
{
	static UFunction* pFnEndSelectingTankType = NULL;

	if ( ! pFnEndSelectingTankType )
		pFnEndSelectingTankType = (UFunction*) UObject::GObjObjects()->Data[ 217506 ];

	ATGTankTMPlayerController_execEndSelectingTankType_Parms EndSelectingTankType_Parms;

	this->ProcessEvent ( pFnEndSelectingTankType, &EndSelectingTankType_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.EndZoom
// [0x00020102] 
// Parameters infos:

void ATGTankTMPlayerController::EndZoom ( )
{
	static UFunction* pFnEndZoom = NULL;

	if ( ! pFnEndZoom )
		pFnEndZoom = (UFunction*) UObject::GObjObjects()->Data[ 217505 ];

	ATGTankTMPlayerController_execEndZoom_Parms EndZoom_Parms;

	this->ProcessEvent ( pFnEndZoom, &EndZoom_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.ClientRestart
// [0x010201C2] 
// Parameters infos:
// class APawn*                   NewPawn                        ( CPF_Parm )

void ATGTankTMPlayerController::ClientRestart ( class APawn* NewPawn )
{
	static UFunction* pFnClientRestart = NULL;

	if ( ! pFnClientRestart )
		pFnClientRestart = (UFunction*) UObject::GObjObjects()->Data[ 217503 ];

	ATGTankTMPlayerController_execClientRestart_Parms ClientRestart_Parms;
	ClientRestart_Parms.NewPawn = NewPawn;

	this->ProcessEvent ( pFnClientRestart, &ClientRestart_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.ClientEnableTankSelection
// [0x010201C2] 
// Parameters infos:

void ATGTankTMPlayerController::ClientEnableTankSelection ( )
{
	static UFunction* pFnClientEnableTankSelection = NULL;

	if ( ! pFnClientEnableTankSelection )
		pFnClientEnableTankSelection = (UFunction*) UObject::GObjObjects()->Data[ 217502 ];

	ATGTankTMPlayerController_execClientEnableTankSelection_Parms ClientEnableTankSelection_Parms;

	this->ProcessEvent ( pFnClientEnableTankSelection, &ClientEnableTankSelection_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.NotifyTankDied
// [0x00020102] 
// Parameters infos:
// class ATGRealTank*             Tank                           ( CPF_Parm )

void ATGTankTMPlayerController::NotifyTankDied ( class ATGRealTank* Tank )
{
	static UFunction* pFnNotifyTankDied = NULL;

	if ( ! pFnNotifyTankDied )
		pFnNotifyTankDied = (UFunction*) UObject::GObjObjects()->Data[ 217498 ];

	ATGTankTMPlayerController_execNotifyTankDied_Parms NotifyTankDied_Parms;
	NotifyTankDied_Parms.Tank = Tank;

	this->ProcessEvent ( pFnNotifyTankDied, &NotifyTankDied_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.ClearSeeObjectives
// [0x00020102] 
// Parameters infos:

void ATGTankTMPlayerController::ClearSeeObjectives ( )
{
	static UFunction* pFnClearSeeObjectives = NULL;

	if ( ! pFnClearSeeObjectives )
		pFnClearSeeObjectives = (UFunction*) UObject::GObjObjects()->Data[ 217497 ];

	ATGTankTMPlayerController_execClearSeeObjectives_Parms ClearSeeObjectives_Parms;

	this->ProcessEvent ( pFnClearSeeObjectives, &ClearSeeObjectives_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.ClearInvisibleObjectives
// [0x00020102] 
// Parameters infos:

void ATGTankTMPlayerController::ClearInvisibleObjectives ( )
{
	static UFunction* pFnClearInvisibleObjectives = NULL;

	if ( ! pFnClearInvisibleObjectives )
		pFnClearInvisibleObjectives = (UFunction*) UObject::GObjObjects()->Data[ 217495 ];

	ATGTankTMPlayerController_execClearInvisibleObjectives_Parms ClearInvisibleObjectives_Parms;

	this->ProcessEvent ( pFnClearInvisibleObjectives, &ClearInvisibleObjectives_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.IsOjbectiveInsight
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGRealTank*             Tank                           ( CPF_Parm )

bool ATGTankTMPlayerController::IsOjbectiveInsight ( class ATGRealTank* Tank )
{
	static UFunction* pFnIsOjbectiveInsight = NULL;

	if ( ! pFnIsOjbectiveInsight )
		pFnIsOjbectiveInsight = (UFunction*) UObject::GObjObjects()->Data[ 217491 ];

	ATGTankTMPlayerController_execIsOjbectiveInsight_Parms IsOjbectiveInsight_Parms;
	IsOjbectiveInsight_Parms.Tank = Tank;

	this->ProcessEvent ( pFnIsOjbectiveInsight, &IsOjbectiveInsight_Parms, NULL );

	return IsOjbectiveInsight_Parms.ReturnValue;
};

// Function TGTankGame.TGTankTMPlayerController.AddSeeOjbective
// [0x00820102] 
// Parameters infos:
// class ATGRealTank*             Tank                           ( CPF_Parm )

void ATGTankTMPlayerController::AddSeeOjbective ( class ATGRealTank* Tank )
{
	static UFunction* pFnAddSeeOjbective = NULL;

	if ( ! pFnAddSeeOjbective )
		pFnAddSeeOjbective = (UFunction*) UObject::GObjObjects()->Data[ 217487 ];

	ATGTankTMPlayerController_execAddSeeOjbective_Parms AddSeeOjbective_Parms;
	AddSeeOjbective_Parms.Tank = Tank;

	this->ProcessEvent ( pFnAddSeeOjbective, &AddSeeOjbective_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.PlayerTick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGTankTMPlayerController::eventPlayerTick ( float DeltaTime )
{
	static UFunction* pFnPlayerTick = NULL;

	if ( ! pFnPlayerTick )
		pFnPlayerTick = (UFunction*) UObject::GObjObjects()->Data[ 217484 ];

	ATGTankTMPlayerController_eventPlayerTick_Parms PlayerTick_Parms;
	PlayerTick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnPlayerTick, &PlayerTick_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.NotifyClientHitEnemy
// [0x010201C2] 
// Parameters infos:
// struct FTankTargetHitInfo      HitInfoArray                   ( CPF_Parm )
// unsigned long                  bDirectHit                     ( CPF_Parm )
// unsigned long                  bKilled                        ( CPF_Parm )

void ATGTankTMPlayerController::NotifyClientHitEnemy ( struct FTankTargetHitInfo* HitInfoArray, unsigned long bDirectHit, unsigned long bKilled )
{
	static UFunction* pFnNotifyClientHitEnemy = NULL;

	if ( ! pFnNotifyClientHitEnemy )
		pFnNotifyClientHitEnemy = (UFunction*) UObject::GObjObjects()->Data[ 217476 ];

	ATGTankTMPlayerController_execNotifyClientHitEnemy_Parms NotifyClientHitEnemy_Parms;
	memcpy ( &NotifyClientHitEnemy_Parms.HitInfoArray, &HitInfoArray, 0x30 );
	NotifyClientHitEnemy_Parms.bDirectHit = bDirectHit;
	NotifyClientHitEnemy_Parms.bKilled = bKilled;

	this->ProcessEvent ( pFnNotifyClientHitEnemy, &NotifyClientHitEnemy_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.NextWeapon
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATGTankTMPlayerController::NextWeapon ( )
{
	static UFunction* pFnNextWeapon = NULL;

	if ( ! pFnNextWeapon )
		pFnNextWeapon = (UFunction*) UObject::GObjObjects()->Data[ 217473 ];

	ATGTankTMPlayerController_execNextWeapon_Parms NextWeapon_Parms;

	this->ProcessEvent ( pFnNextWeapon, &NextWeapon_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.PrevWeapon
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATGTankTMPlayerController::PrevWeapon ( )
{
	static UFunction* pFnPrevWeapon = NULL;

	if ( ! pFnPrevWeapon )
		pFnPrevWeapon = (UFunction*) UObject::GObjObjects()->Data[ 217470 ];

	ATGTankTMPlayerController_execPrevWeapon_Parms PrevWeapon_Parms;

	this->ProcessEvent ( pFnPrevWeapon, &PrevWeapon_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.Hit
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// int                            DamageHP                       ( CPF_Parm )
// int                            DamageAC                       ( CPF_Parm )

void ATGTankTMPlayerController::Hit ( int DamageHP, int DamageAC )
{
	static UFunction* pFnHit = NULL;

	if ( ! pFnHit )
		pFnHit = (UFunction*) UObject::GObjObjects()->Data[ 217466 ];

	ATGTankTMPlayerController_execHit_Parms Hit_Parms;
	Hit_Parms.DamageHP = DamageHP;
	Hit_Parms.DamageAC = DamageAC;

	this->ProcessEvent ( pFnHit, &Hit_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.Damage
// [0x00024202] ( FUNC_Exec )
// Parameters infos:
// int                            HitGroup                       ( CPF_Parm )
// int                            Damage                         ( CPF_OptionalParm | CPF_Parm )
// int                            AC                             ( CPF_OptionalParm | CPF_Parm )

void ATGTankTMPlayerController::Damage ( int HitGroup, int Damage, int AC )
{
	static UFunction* pFnDamage = NULL;

	if ( ! pFnDamage )
		pFnDamage = (UFunction*) UObject::GObjObjects()->Data[ 217461 ];

	ATGTankTMPlayerController_execDamage_Parms Damage_Parms;
	Damage_Parms.HitGroup = HitGroup;
	Damage_Parms.Damage = Damage;
	Damage_Parms.AC = AC;

	this->ProcessEvent ( pFnDamage, &Damage_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.Lift
// [0x00824202] ( FUNC_Exec )
// Parameters infos:
// float                          Factor                         ( CPF_OptionalParm | CPF_Parm )

void ATGTankTMPlayerController::Lift ( float Factor )
{
	static UFunction* pFnLift = NULL;

	if ( ! pFnLift )
		pFnLift = (UFunction*) UObject::GObjObjects()->Data[ 217457 ];

	ATGTankTMPlayerController_execLift_Parms Lift_Parms;
	Lift_Parms.Factor = Factor;

	this->ProcessEvent ( pFnLift, &Lift_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.ServerSetHealth
// [0x00220042] 
// Parameters infos:
// int                            NewHealth                      ( CPF_Parm )

void ATGTankTMPlayerController::ServerSetHealth ( int NewHealth )
{
	static UFunction* pFnServerSetHealth = NULL;

	if ( ! pFnServerSetHealth )
		pFnServerSetHealth = (UFunction*) UObject::GObjObjects()->Data[ 217455 ];

	ATGTankTMPlayerController_execServerSetHealth_Parms ServerSetHealth_Parms;
	ServerSetHealth_Parms.NewHealth = NewHealth;

	this->ProcessEvent ( pFnServerSetHealth, &ServerSetHealth_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.SetHealth
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// int                            NewHealth                      ( CPF_Parm )

void ATGTankTMPlayerController::SetHealth ( int NewHealth )
{
	static UFunction* pFnSetHealth = NULL;

	if ( ! pFnSetHealth )
		pFnSetHealth = (UFunction*) UObject::GObjObjects()->Data[ 217453 ];

	ATGTankTMPlayerController_execSetHealth_Parms SetHealth_Parms;
	SetHealth_Parms.NewHealth = NewHealth;

	this->ProcessEvent ( pFnSetHealth, &SetHealth_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.SetDrivingTank
// [0x00020002] 
// Parameters infos:
// class ATGRealTank*             Tank                           ( CPF_Parm )

void ATGTankTMPlayerController::SetDrivingTank ( class ATGRealTank* Tank )
{
	static UFunction* pFnSetDrivingTank = NULL;

	if ( ! pFnSetDrivingTank )
		pFnSetDrivingTank = (UFunction*) UObject::GObjObjects()->Data[ 217451 ];

	ATGTankTMPlayerController_execSetDrivingTank_Parms SetDrivingTank_Parms;
	SetDrivingTank_Parms.Tank = Tank;

	this->ProcessEvent ( pFnSetDrivingTank, &SetDrivingTank_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.DriveTank
// [0x00020002] 
// Parameters infos:

void ATGTankTMPlayerController::DriveTank ( )
{
	static UFunction* pFnDriveTank = NULL;

	if ( ! pFnDriveTank )
		pFnDriveTank = (UFunction*) UObject::GObjObjects()->Data[ 217446 ];

	ATGTankTMPlayerController_execDriveTank_Parms DriveTank_Parms;

	this->ProcessEvent ( pFnDriveTank, &DriveTank_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.GetTankFactory
// [0x00020002] 
// Parameters infos:
// class ATGTankFactory*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ATGTankFactory* ATGTankTMPlayerController::GetTankFactory ( )
{
	static UFunction* pFnGetTankFactory = NULL;

	if ( ! pFnGetTankFactory )
		pFnGetTankFactory = (UFunction*) UObject::GObjObjects()->Data[ 217442 ];

	ATGTankTMPlayerController_execGetTankFactory_Parms GetTankFactory_Parms;

	this->ProcessEvent ( pFnGetTankFactory, &GetTankFactory_Parms, NULL );

	return GetTankFactory_Parms.ReturnValue;
};

// Function TGTankGame.TGTankTMPlayerController.GetTankFactoryType
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char ATGTankTMPlayerController::GetTankFactoryType ( )
{
	static UFunction* pFnGetTankFactoryType = NULL;

	if ( ! pFnGetTankFactoryType )
		pFnGetTankFactoryType = (UFunction*) UObject::GObjObjects()->Data[ 217439 ];

	ATGTankTMPlayerController_execGetTankFactoryType_Parms GetTankFactoryType_Parms;

	this->ProcessEvent ( pFnGetTankFactoryType, &GetTankFactoryType_Parms, NULL );

	return GetTankFactoryType_Parms.ReturnValue;
};

// Function TGTankGame.TGTankTMPlayerController.ServerChangeTankType
// [0x002200C2] 
// Parameters infos:
// unsigned char                  ExpectedTankType               ( CPF_Parm )

void ATGTankTMPlayerController::ServerChangeTankType ( unsigned char ExpectedTankType )
{
	static UFunction* pFnServerChangeTankType = NULL;

	if ( ! pFnServerChangeTankType )
		pFnServerChangeTankType = (UFunction*) UObject::GObjObjects()->Data[ 217435 ];

	ATGTankTMPlayerController_execServerChangeTankType_Parms ServerChangeTankType_Parms;
	ServerChangeTankType_Parms.ExpectedTankType = ExpectedTankType;

	this->ProcessEvent ( pFnServerChangeTankType, &ServerChangeTankType_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.InitInputSystem
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATGTankTMPlayerController::eventInitInputSystem ( )
{
	static UFunction* pFnInitInputSystem = NULL;

	if ( ! pFnInitInputSystem )
		pFnInitInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 217434 ];

	ATGTankTMPlayerController_eventInitInputSystem_Parms InitInputSystem_Parms;

	this->ProcessEvent ( pFnInitInputSystem, &InitInputSystem_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGTankTMPlayerController::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 217433 ];

	ATGTankTMPlayerController_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGTankTMPlayerController::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 217432 ];

	ATGTankTMPlayerController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.NeedLicenseFor
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  NewType                        ( CPF_Parm )

bool ATGTankTMPlayerReplicationInfo::NeedLicenseFor ( unsigned char NewType )
{
	static UFunction* pFnNeedLicenseFor = NULL;

	if ( ! pFnNeedLicenseFor )
		pFnNeedLicenseFor = (UFunction*) UObject::GObjObjects()->Data[ 217689 ];

	ATGTankTMPlayerReplicationInfo_execNeedLicenseFor_Parms NeedLicenseFor_Parms;
	NeedLicenseFor_Parms.NewType = NewType;

	this->ProcessEvent ( pFnNeedLicenseFor, &NeedLicenseFor_Parms, NULL );

	return NeedLicenseFor_Parms.ReturnValue;
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.HasLicenseFor
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  NewType                        ( CPF_Parm )

bool ATGTankTMPlayerReplicationInfo::HasLicenseFor ( unsigned char NewType )
{
	static UFunction* pFnHasLicenseFor = NULL;

	if ( ! pFnHasLicenseFor )
		pFnHasLicenseFor = (UFunction*) UObject::GObjObjects()->Data[ 217089 ];

	ATGTankTMPlayerReplicationInfo_execHasLicenseFor_Parms HasLicenseFor_Parms;
	HasLicenseFor_Parms.NewType = NewType;

	this->ProcessEvent ( pFnHasLicenseFor, &HasLicenseFor_Parms, NULL );

	return HasLicenseFor_Parms.ReturnValue;
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.HasLicense
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LicenseType                    ( CPF_Parm )

bool ATGTankTMPlayerReplicationInfo::HasLicense ( unsigned char LicenseType )
{
	static UFunction* pFnHasLicense = NULL;

	if ( ! pFnHasLicense )
		pFnHasLicense = (UFunction*) UObject::GObjObjects()->Data[ 217683 ];

	ATGTankTMPlayerReplicationInfo_execHasLicense_Parms HasLicense_Parms;
	HasLicense_Parms.LicenseType = LicenseType;

	this->ProcessEvent ( pFnHasLicense, &HasLicense_Parms, NULL );

	return HasLicense_Parms.ReturnValue;
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.AddLicense
// [0x00020002] 
// Parameters infos:
// unsigned char                  LicenseType                    ( CPF_Parm )

void ATGTankTMPlayerReplicationInfo::AddLicense ( unsigned char LicenseType )
{
	static UFunction* pFnAddLicense = NULL;

	if ( ! pFnAddLicense )
		pFnAddLicense = (UFunction*) UObject::GObjObjects()->Data[ 217680 ];

	ATGTankTMPlayerReplicationInfo_execAddLicense_Parms AddLicense_Parms;
	AddLicense_Parms.LicenseType = LicenseType;

	this->ProcessEvent ( pFnAddLicense, &AddLicense_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.CaluUseMouse
// [0x002200C2] 
// Parameters infos:
// unsigned long                  bHaveUseTankMouse              ( CPF_Parm )

void ATGTankTMPlayerReplicationInfo::CaluUseMouse ( unsigned long bHaveUseTankMouse )
{
	static UFunction* pFnCaluUseMouse = NULL;

	if ( ! pFnCaluUseMouse )
		pFnCaluUseMouse = (UFunction*) UObject::GObjObjects()->Data[ 217678 ];

	ATGTankTMPlayerReplicationInfo_execCaluUseMouse_Parms CaluUseMouse_Parms;
	CaluUseMouse_Parms.bHaveUseTankMouse = bHaveUseTankMouse;

	this->ProcessEvent ( pFnCaluUseMouse, &CaluUseMouse_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.CaluTankUser
// [0x002200C2] 
// Parameters infos:

void ATGTankTMPlayerReplicationInfo::CaluTankUser ( )
{
	static UFunction* pFnCaluTankUser = NULL;

	if ( ! pFnCaluTankUser )
		pFnCaluTankUser = (UFunction*) UObject::GObjObjects()->Data[ 217677 ];

	ATGTankTMPlayerReplicationInfo_execCaluTankUser_Parms CaluTankUser_Parms;

	this->ProcessEvent ( pFnCaluTankUser, &CaluTankUser_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.GetGameScoreForSort
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ATGTankTMPlayerReplicationInfo::GetGameScoreForSort ( )
{
	static UFunction* pFnGetGameScoreForSort = NULL;

	if ( ! pFnGetGameScoreForSort )
		pFnGetGameScoreForSort = (UFunction*) UObject::GObjObjects()->Data[ 217008 ];

	ATGTankTMPlayerReplicationInfo_execGetGameScoreForSort_Parms GetGameScoreForSort_Parms;

	this->ProcessEvent ( pFnGetGameScoreForSort, &GetGameScoreForSort_Parms, NULL );

	return GetGameScoreForSort_Parms.ReturnValue;
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.GetMvpValue
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGTankTMPlayerReplicationInfo::GetMvpValue ( )
{
	static UFunction* pFnGetMvpValue = NULL;

	if ( ! pFnGetMvpValue )
		pFnGetMvpValue = (UFunction*) UObject::GObjObjects()->Data[ 217320 ];

	ATGTankTMPlayerReplicationInfo_execGetMvpValue_Parms GetMvpValue_Parms;

	this->ProcessEvent ( pFnGetMvpValue, &GetMvpValue_Parms, NULL );

	return GetMvpValue_Parms.ReturnValue;
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.GetGameScore
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ATGTankTMPlayerReplicationInfo::GetGameScore ( )
{
	static UFunction* pFnGetGameScore = NULL;

	if ( ! pFnGetGameScore )
		pFnGetGameScore = (UFunction*) UObject::GObjObjects()->Data[ 217311 ];

	ATGTankTMPlayerReplicationInfo_execGetGameScore_Parms GetGameScore_Parms;

	this->ProcessEvent ( pFnGetGameScore, &GetGameScore_Parms, NULL );

	return GetGameScore_Parms.ReturnValue;
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.CalcFireTimes
// [0x00020002] 
// Parameters infos:
// unsigned char                  ShellType                      ( CPF_Parm )

void ATGTankTMPlayerReplicationInfo::CalcFireTimes ( unsigned char ShellType )
{
	static UFunction* pFnCalcFireTimes = NULL;

	if ( ! pFnCalcFireTimes )
		pFnCalcFireTimes = (UFunction*) UObject::GObjObjects()->Data[ 217671 ];

	ATGTankTMPlayerReplicationInfo_execCalcFireTimes_Parms CalcFireTimes_Parms;
	CalcFireTimes_Parms.ShellType = ShellType;

	this->ProcessEvent ( pFnCalcFireTimes, &CalcFireTimes_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.SetTankType
// [0x00020002] 
// Parameters infos:
// unsigned char                  Type                           ( CPF_Parm )

void ATGTankTMPlayerReplicationInfo::SetTankType ( unsigned char Type )
{
	static UFunction* pFnSetTankType = NULL;

	if ( ! pFnSetTankType )
		pFnSetTankType = (UFunction*) UObject::GObjObjects()->Data[ 217669 ];

	ATGTankTMPlayerReplicationInfo_execSetTankType_Parms SetTankType_Parms;
	SetTankType_Parms.Type = Type;

	this->ProcessEvent ( pFnSetTankType, &SetTankType_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.SetPlayerTeam
// [0x00020002] 
// Parameters infos:
// class ATeamInfo*               NewTeam                        ( CPF_Parm )

void ATGTankTMPlayerReplicationInfo::SetPlayerTeam ( class ATeamInfo* NewTeam )
{
	static UFunction* pFnSetPlayerTeam = NULL;

	if ( ! pFnSetPlayerTeam )
		pFnSetPlayerTeam = (UFunction*) UObject::GObjObjects()->Data[ 217667 ];

	ATGTankTMPlayerReplicationInfo_execSetPlayerTeam_Parms SetPlayerTeam_Parms;
	SetPlayerTeam_Parms.NewTeam = NewTeam;

	this->ProcessEvent ( pFnSetPlayerTeam, &SetPlayerTeam_Parms, NULL );
};

// Function TGTankGame.TGRealTankBase.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGRealTankBase::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 216138 ];

	ATGRealTankBase_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGTankGame.TGRealTankBase.RigidBodyCollision
// [0x00C20902] ( FUNC_Event )
// Parameters infos:
// class UPrimitiveComponent*     HitComponent                   ( CPF_Parm | CPF_EditInline )
// class UPrimitiveComponent*     OtherComponent                 ( CPF_Parm | CPF_EditInline )
// int                            ContactIndex                   ( CPF_Parm )
// struct FCollisionImpactData    Collision                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ATGRealTankBase::eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* Collision )
{
	static UFunction* pFnRigidBodyCollision = NULL;

	if ( ! pFnRigidBodyCollision )
		pFnRigidBodyCollision = (UFunction*) UObject::GObjObjects()->Data[ 216131 ];

	ATGRealTankBase_eventRigidBodyCollision_Parms RigidBodyCollision_Parms;
	RigidBodyCollision_Parms.HitComponent = HitComponent;
	RigidBodyCollision_Parms.OtherComponent = OtherComponent;
	RigidBodyCollision_Parms.ContactIndex = ContactIndex;

	this->ProcessEvent ( pFnRigidBodyCollision, &RigidBodyCollision_Parms, NULL );

	if ( Collision )
		memcpy ( Collision, &RigidBodyCollision_Parms.Collision, 0x24 );
};

// Function TGTankGame.TGRealTankBase.Destroyed
// [0x00020102] 
// Parameters infos:

void ATGRealTankBase::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 216129 ];

	ATGRealTankBase_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGTankGame.TGRealTankBase.GetHumanReadableName
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ATGRealTankBase::GetHumanReadableName ( )
{
	static UFunction* pFnGetHumanReadableName = NULL;

	if ( ! pFnGetHumanReadableName )
		pFnGetHumanReadableName = (UFunction*) UObject::GObjObjects()->Data[ 216127 ];

	ATGRealTankBase_execGetHumanReadableName_Parms GetHumanReadableName_Parms;

	this->ProcessEvent ( pFnGetHumanReadableName, &GetHumanReadableName_Parms, NULL );

	return GetHumanReadableName_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTankBase.ClientRestart
// [0x00020102] 
// Parameters infos:

void ATGRealTankBase::ClientRestart ( )
{
	static UFunction* pFnClientRestart = NULL;

	if ( ! pFnClientRestart )
		pFnClientRestart = (UFunction*) UObject::GObjObjects()->Data[ 216126 ];

	ATGRealTankBase_execClientRestart_Parms ClientRestart_Parms;

	this->ProcessEvent ( pFnClientRestart, &ClientRestart_Parms, NULL );
};

// Function TGTankGame.TGRealTankBase.SetTurretDesiredRotation
// [0x00020102] 
// Parameters infos:

void ATGRealTankBase::SetTurretDesiredRotation ( )
{
	static UFunction* pFnSetTurretDesiredRotation = NULL;

	if ( ! pFnSetTurretDesiredRotation )
		pFnSetTurretDesiredRotation = (UFunction*) UObject::GObjObjects()->Data[ 216124 ];

	ATGRealTankBase_execSetTurretDesiredRotation_Parms SetTurretDesiredRotation_Parms;

	this->ProcessEvent ( pFnSetTurretDesiredRotation, &SetTurretDesiredRotation_Parms, NULL );
};

// Function TGTankGame.TGRealTankBase.VehicleAdjustFlashCount
// [0x00024102] 
// Parameters infos:
// int                            SeatIndex                      ( CPF_Parm )
// unsigned char                  FireModeNum                    ( CPF_Parm )
// unsigned long                  bClear                         ( CPF_OptionalParm | CPF_Parm )

void ATGRealTankBase::VehicleAdjustFlashCount ( int SeatIndex, unsigned char FireModeNum, unsigned long bClear )
{
	static UFunction* pFnVehicleAdjustFlashCount = NULL;

	if ( ! pFnVehicleAdjustFlashCount )
		pFnVehicleAdjustFlashCount = (UFunction*) UObject::GObjObjects()->Data[ 216120 ];

	ATGRealTankBase_execVehicleAdjustFlashCount_Parms VehicleAdjustFlashCount_Parms;
	VehicleAdjustFlashCount_Parms.SeatIndex = SeatIndex;
	VehicleAdjustFlashCount_Parms.FireModeNum = FireModeNum;
	VehicleAdjustFlashCount_Parms.bClear = bClear;

	this->ProcessEvent ( pFnVehicleAdjustFlashCount, &VehicleAdjustFlashCount_Parms, NULL );
};

// Function TGTankGame.TGRealTankBase.CalcCamera
// [0x00420102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )
// float                          out_FOV                        ( CPF_Parm | CPF_OutParm )

bool ATGRealTankBase::CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
{
	static UFunction* pFnCalcCamera = NULL;

	if ( ! pFnCalcCamera )
		pFnCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 216113 ];

	ATGRealTankBase_execCalcCamera_Parms CalcCamera_Parms;
	CalcCamera_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnCalcCamera, &CalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &CalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &CalcCamera_Parms.out_CamRot, 0xC );

	if ( out_FOV )
		*out_FOV = CalcCamera_Parms.out_FOV;

	return CalcCamera_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTankBase.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGRealTankBase::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 216112 ];

	ATGRealTankBase_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGTankGame.TGRealTankBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGRealTankBase::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 216110 ];

	ATGRealTankBase_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGTankGame.TGRealTankBase.TerminateRBPhys
// [0x00020500] ( FUNC_Native )
// Parameters infos:

void ATGRealTankBase::TerminateRBPhys ( )
{
	static UFunction* pFnTerminateRBPhys = NULL;

	if ( ! pFnTerminateRBPhys )
		pFnTerminateRBPhys = (UFunction*) UObject::GObjObjects()->Data[ 216109 ];

	ATGRealTankBase_execTerminateRBPhys_Parms TerminateRBPhys_Parms;

	pFnTerminateRBPhys->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTerminateRBPhys, &TerminateRBPhys_Parms, NULL );

	pFnTerminateRBPhys->FunctionFlags |= 0x400;
};

// Function TGTankGame.TGRealTankBase.ReInitRBPhys
// [0x00020500] ( FUNC_Native )
// Parameters infos:

void ATGRealTankBase::ReInitRBPhys ( )
{
	static UFunction* pFnReInitRBPhys = NULL;

	if ( ! pFnReInitRBPhys )
		pFnReInitRBPhys = (UFunction*) UObject::GObjObjects()->Data[ 216108 ];

	ATGRealTankBase_execReInitRBPhys_Parms ReInitRBPhys_Parms;

	pFnReInitRBPhys->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReInitRBPhys, &ReInitRBPhys_Parms, NULL );

	pFnReInitRBPhys->FunctionFlags |= 0x400;
};

// Function TGTankGame.TGRealTankBase.ClientSyncVStateToServer
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// float                          ClientTimeStamp                ( CPF_Parm )

void ATGRealTankBase::eventClientSyncVStateToServer ( float ClientTimeStamp )
{
	static UFunction* pFnClientSyncVStateToServer = NULL;

	if ( ! pFnClientSyncVStateToServer )
		pFnClientSyncVStateToServer = (UFunction*) UObject::GObjObjects()->Data[ 216106 ];

	ATGRealTankBase_eventClientSyncVStateToServer_Parms ClientSyncVStateToServer_Parms;
	ClientSyncVStateToServer_Parms.ClientTimeStamp = ClientTimeStamp;

	this->ProcessEvent ( pFnClientSyncVStateToServer, &ClientSyncVStateToServer_Parms, NULL );
};

// Function TGTankGame.TGRealTankBase.TransTurretRotation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                TurretRot                      ( CPF_Parm )
// unsigned long                  bFromWorldToLocal              ( CPF_Parm )

struct FRotator ATGRealTankBase::TransTurretRotation ( struct FRotator TurretRot, unsigned long bFromWorldToLocal )
{
	static UFunction* pFnTransTurretRotation = NULL;

	if ( ! pFnTransTurretRotation )
		pFnTransTurretRotation = (UFunction*) UObject::GObjObjects()->Data[ 216102 ];

	ATGRealTankBase_execTransTurretRotation_Parms TransTurretRotation_Parms;
	memcpy ( &TransTurretRotation_Parms.TurretRot, &TurretRot, 0xC );
	TransTurretRotation_Parms.bFromWorldToLocal = bFromWorldToLocal;

	pFnTransTurretRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTransTurretRotation, &TransTurretRotation_Parms, NULL );

	pFnTransTurretRotation->FunctionFlags |= 0x400;

	return TransTurretRotation_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTankBase.ClearVState
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATGRealTankBase::ClearVState ( )
{
	static UFunction* pFnClearVState = NULL;

	if ( ! pFnClearVState )
		pFnClearVState = (UFunction*) UObject::GObjObjects()->Data[ 216101 ];

	ATGRealTankBase_execClearVState_Parms ClearVState_Parms;

	pFnClearVState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearVState, &ClearVState_Parms, NULL );

	pFnClearVState->FunctionFlags |= 0x400;
};

// Function TGTankGame.TGRealTankBase.ServerSetTankPosition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FTankState              NewTankState                   ( CPF_Parm )

void ATGRealTankBase::ServerSetTankPosition ( struct FTankState NewTankState )
{
	static UFunction* pFnServerSetTankPosition = NULL;

	if ( ! pFnServerSetTankPosition )
		pFnServerSetTankPosition = (UFunction*) UObject::GObjObjects()->Data[ 216099 ];

	ATGRealTankBase_execServerSetTankPosition_Parms ServerSetTankPosition_Parms;
	memcpy ( &ServerSetTankPosition_Parms.NewTankState, &NewTankState, 0x44 );

	pFnServerSetTankPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnServerSetTankPosition, &ServerSetTankPosition_Parms, NULL );

	pFnServerSetTankPosition->FunctionFlags |= 0x400;
};

// Function TGTankGame.TGRealTankBase.AttachToScene
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// class USkeletalMeshComponent*  MeshComponent                  ( CPF_Parm | CPF_EditInline )
// class AActor*                  InOwner                        ( CPF_Parm )

void ATGRealTankBase::AttachToScene ( class USkeletalMeshComponent* MeshComponent, class AActor* InOwner )
{
	static UFunction* pFnAttachToScene = NULL;

	if ( ! pFnAttachToScene )
		pFnAttachToScene = (UFunction*) UObject::GObjObjects()->Data[ 216096 ];

	ATGRealTankBase_execAttachToScene_Parms AttachToScene_Parms;
	AttachToScene_Parms.MeshComponent = MeshComponent;
	AttachToScene_Parms.InOwner = InOwner;

	pFnAttachToScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAttachToScene, &AttachToScene_Parms, NULL );

	pFnAttachToScene->FunctionFlags |= 0x400;
};

// Function TGTankGame.TGTankWeap_Turret.PlayFiringSound
// [0x00020102] 
// Parameters infos:

void ATGTankWeap_Turret::PlayFiringSound ( )
{
	static UFunction* pFnPlayFiringSound = NULL;

	if ( ! pFnPlayFiringSound )
		pFnPlayFiringSound = (UFunction*) UObject::GObjObjects()->Data[ 218753 ];

	ATGTankWeap_Turret_execPlayFiringSound_Parms PlayFiringSound_Parms;

	this->ProcessEvent ( pFnPlayFiringSound, &PlayFiringSound_Parms, NULL );
};

// Function TGTankGame.TGTankWeap_Turret.GetHumanReadableName
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ATGTankWeap_Turret::GetHumanReadableName ( )
{
	static UFunction* pFnGetHumanReadableName = NULL;

	if ( ! pFnGetHumanReadableName )
		pFnGetHumanReadableName = (UFunction*) UObject::GObjObjects()->Data[ 218751 ];

	ATGTankWeap_Turret_execGetHumanReadableName_Parms GetHumanReadableName_Parms;

	this->ProcessEvent ( pFnGetHumanReadableName, &GetHumanReadableName_Parms, NULL );

	return GetHumanReadableName_Parms.ReturnValue;
};

// Function TGTankGame.TGTankWeap_Turret.GetCurrReloadTime
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGTankWeap_Turret::GetCurrReloadTime ( )
{
	static UFunction* pFnGetCurrReloadTime = NULL;

	if ( ! pFnGetCurrReloadTime )
		pFnGetCurrReloadTime = (UFunction*) UObject::GObjObjects()->Data[ 218040 ];

	ATGTankWeap_Turret_execGetCurrReloadTime_Parms GetCurrReloadTime_Parms;

	this->ProcessEvent ( pFnGetCurrReloadTime, &GetCurrReloadTime_Parms, NULL );

	return GetCurrReloadTime_Parms.ReturnValue;
};

// Function TGTankGame.TGTankWeap_Turret.OnShellReloadTimer
// [0x00020102] 
// Parameters infos:

void ATGTankWeap_Turret::OnShellReloadTimer ( )
{
	static UFunction* pFnOnShellReloadTimer = NULL;

	if ( ! pFnOnShellReloadTimer )
		pFnOnShellReloadTimer = (UFunction*) UObject::GObjObjects()->Data[ 218750 ];

	ATGTankWeap_Turret_execOnShellReloadTimer_Parms OnShellReloadTimer_Parms;

	this->ProcessEvent ( pFnOnShellReloadTimer, &OnShellReloadTimer_Parms, NULL );
};

// Function TGTankGame.TGTankWeap_Turret.ServerStartFire
// [0x002200C2] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGTankWeap_Turret::ServerStartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnServerStartFire = NULL;

	if ( ! pFnServerStartFire )
		pFnServerStartFire = (UFunction*) UObject::GObjObjects()->Data[ 218748 ];

	ATGTankWeap_Turret_execServerStartFire_Parms ServerStartFire_Parms;
	ServerStartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnServerStartFire, &ServerStartFire_Parms, NULL );
};

// Function TGTankGame.TGTankWeap_Turret.StartFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGTankWeap_Turret::StartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 218746 ];

	ATGTankWeap_Turret_execStartFire_Parms StartFire_Parms;
	StartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function TGTankGame.TGTankWeap_Turret.AddAmmo
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Amount                         ( CPF_Parm )

int ATGTankWeap_Turret::AddAmmo ( int Amount )
{
	static UFunction* pFnAddAmmo = NULL;

	if ( ! pFnAddAmmo )
		pFnAddAmmo = (UFunction*) UObject::GObjObjects()->Data[ 218741 ];

	ATGTankWeap_Turret_execAddAmmo_Parms AddAmmo_Parms;
	AddAmmo_Parms.Amount = Amount;

	this->ProcessEvent ( pFnAddAmmo, &AddAmmo_Parms, NULL );

	return AddAmmo_Parms.ReturnValue;
};

// Function TGTankGame.TGTankWeap_Turret.HasAmmo
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  FireModeNum                    ( CPF_Parm )
// int                            Amount                         ( CPF_OptionalParm | CPF_Parm )

bool ATGTankWeap_Turret::HasAmmo ( unsigned char FireModeNum, int Amount )
{
	static UFunction* pFnHasAmmo = NULL;

	if ( ! pFnHasAmmo )
		pFnHasAmmo = (UFunction*) UObject::GObjObjects()->Data[ 218737 ];

	ATGTankWeap_Turret_execHasAmmo_Parms HasAmmo_Parms;
	HasAmmo_Parms.FireModeNum = FireModeNum;
	HasAmmo_Parms.Amount = Amount;

	this->ProcessEvent ( pFnHasAmmo, &HasAmmo_Parms, NULL );

	return HasAmmo_Parms.ReturnValue;
};

// Function TGTankGame.TGTankWeap_Turret.InitAmmoBox
// [0x00020100] 
// Parameters infos:

void ATGTankWeap_Turret::InitAmmoBox ( )
{
	static UFunction* pFnInitAmmoBox = NULL;

	if ( ! pFnInitAmmoBox )
		pFnInitAmmoBox = (UFunction*) UObject::GObjObjects()->Data[ 218736 ];

	ATGTankWeap_Turret_execInitAmmoBox_Parms InitAmmoBox_Parms;

	this->ProcessEvent ( pFnInitAmmoBox, &InitAmmoBox_Parms, NULL );
};

// Function TGTankGame.TGTankWeap_Turret.OnSetAimDisperseTimer
// [0x00020102] 
// Parameters infos:

void ATGTankWeap_Turret::OnSetAimDisperseTimer ( )
{
	static UFunction* pFnOnSetAimDisperseTimer = NULL;

	if ( ! pFnOnSetAimDisperseTimer )
		pFnOnSetAimDisperseTimer = (UFunction*) UObject::GObjObjects()->Data[ 218734 ];

	ATGTankWeap_Turret_execOnSetAimDisperseTimer_Parms OnSetAimDisperseTimer_Parms;

	this->ProcessEvent ( pFnOnSetAimDisperseTimer, &OnSetAimDisperseTimer_Parms, NULL );
};

// Function TGTankGame.TGTankWeap_Turret.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGTankWeap_Turret::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 218731 ];

	ATGTankWeap_Turret_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGTankGame.TGTankWeap_Turret.GetFireInterval
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  FireModeNum                    ( CPF_Parm )

float ATGTankWeap_Turret::GetFireInterval ( unsigned char FireModeNum )
{
	static UFunction* pFnGetFireInterval = NULL;

	if ( ! pFnGetFireInterval )
		pFnGetFireInterval = (UFunction*) UObject::GObjObjects()->Data[ 218038 ];

	ATGTankWeap_Turret_execGetFireInterval_Parms GetFireInterval_Parms;
	GetFireInterval_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnGetFireInterval, &GetFireInterval_Parms, NULL );

	return GetFireInterval_Parms.ReturnValue;
};

// Function TGTankGame.TGTankWeap_Turret.ServerSetCurrentShellType
// [0x002200C2] 
// Parameters infos:
// unsigned char                  DisiredShellType               ( CPF_Parm )

void ATGTankWeap_Turret::ServerSetCurrentShellType ( unsigned char DisiredShellType )
{
	static UFunction* pFnServerSetCurrentShellType = NULL;

	if ( ! pFnServerSetCurrentShellType )
		pFnServerSetCurrentShellType = (UFunction*) UObject::GObjObjects()->Data[ 218726 ];

	ATGTankWeap_Turret_execServerSetCurrentShellType_Parms ServerSetCurrentShellType_Parms;
	ServerSetCurrentShellType_Parms.DisiredShellType = DisiredShellType;

	this->ProcessEvent ( pFnServerSetCurrentShellType, &ServerSetCurrentShellType_Parms, NULL );
};

// Function TGTankGame.TGTankWeap_Turret.SwitchToLastUsedWeapon
// [0x00020102] 
// Parameters infos:

void ATGTankWeap_Turret::SwitchToLastUsedWeapon ( )
{
	static UFunction* pFnSwitchToLastUsedWeapon = NULL;

	if ( ! pFnSwitchToLastUsedWeapon )
		pFnSwitchToLastUsedWeapon = (UFunction*) UObject::GObjObjects()->Data[ 218725 ];

	ATGTankWeap_Turret_execSwitchToLastUsedWeapon_Parms SwitchToLastUsedWeapon_Parms;

	this->ProcessEvent ( pFnSwitchToLastUsedWeapon, &SwitchToLastUsedWeapon_Parms, NULL );
};

// Function TGTankGame.TGTankWeap_Turret.GetWeaponIconCoords
// [0x00020102] 
// Parameters infos:
// struct FTextureCoordinates     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FTextureCoordinates ATGTankWeap_Turret::GetWeaponIconCoords ( )
{
	static UFunction* pFnGetWeaponIconCoords = NULL;

	if ( ! pFnGetWeaponIconCoords )
		pFnGetWeaponIconCoords = (UFunction*) UObject::GObjObjects()->Data[ 218723 ];

	ATGTankWeap_Turret_execGetWeaponIconCoords_Parms GetWeaponIconCoords_Parms;

	this->ProcessEvent ( pFnGetWeaponIconCoords, &GetWeaponIconCoords_Parms, NULL );

	return GetWeaponIconCoords_Parms.ReturnValue;
};

// Function TGTankGame.TGTankWeap_Turret.GetCurrentWeaponName
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ATGTankWeap_Turret::GetCurrentWeaponName ( )
{
	static UFunction* pFnGetCurrentWeaponName = NULL;

	if ( ! pFnGetCurrentWeaponName )
		pFnGetCurrentWeaponName = (UFunction*) UObject::GObjObjects()->Data[ 218721 ];

	ATGTankWeap_Turret_execGetCurrentWeaponName_Parms GetCurrentWeaponName_Parms;

	this->ProcessEvent ( pFnGetCurrentWeaponName, &GetCurrentWeaponName_Parms, NULL );

	return GetCurrentWeaponName_Parms.ReturnValue;
};

// Function TGTankGame.TGTankWeap_Turret.PlayReloadCompleteSound
// [0x00020102] 
// Parameters infos:

void ATGTankWeap_Turret::PlayReloadCompleteSound ( )
{
	static UFunction* pFnPlayReloadCompleteSound = NULL;

	if ( ! pFnPlayReloadCompleteSound )
		pFnPlayReloadCompleteSound = (UFunction*) UObject::GObjObjects()->Data[ 218719 ];

	ATGTankWeap_Turret_execPlayReloadCompleteSound_Parms PlayReloadCompleteSound_Parms;

	this->ProcessEvent ( pFnPlayReloadCompleteSound, &PlayReloadCompleteSound_Parms, NULL );
};

// Function TGTankGame.TGTankWeap_Turret.SetCurrentShellType
// [0x00020102] 
// Parameters infos:
// unsigned char                  DisiredShellType               ( CPF_Parm )

void ATGTankWeap_Turret::SetCurrentShellType ( unsigned char DisiredShellType )
{
	static UFunction* pFnSetCurrentShellType = NULL;

	if ( ! pFnSetCurrentShellType )
		pFnSetCurrentShellType = (UFunction*) UObject::GObjObjects()->Data[ 218715 ];

	ATGTankWeap_Turret_execSetCurrentShellType_Parms SetCurrentShellType_Parms;
	SetCurrentShellType_Parms.DisiredShellType = DisiredShellType;

	this->ProcessEvent ( pFnSetCurrentShellType, &SetCurrentShellType_Parms, NULL );
};

// Function TGTankGame.TGTankWeap_Turret.CheckTankSehllLocaionAndAim
// [0x00C20002] 
// Parameters infos:
// struct FRotator                TurretAim                      ( CPF_Parm | CPF_OutParm )
// struct FVector                 FireStartLocation              ( CPF_Parm | CPF_OutParm )

void ATGTankWeap_Turret::CheckTankSehllLocaionAndAim ( struct FRotator* TurretAim, struct FVector* FireStartLocation )
{
	static UFunction* pFnCheckTankSehllLocaionAndAim = NULL;

	if ( ! pFnCheckTankSehllLocaionAndAim )
		pFnCheckTankSehllLocaionAndAim = (UFunction*) UObject::GObjObjects()->Data[ 218710 ];

	ATGTankWeap_Turret_execCheckTankSehllLocaionAndAim_Parms CheckTankSehllLocaionAndAim_Parms;

	this->ProcessEvent ( pFnCheckTankSehllLocaionAndAim, &CheckTankSehllLocaionAndAim_Parms, NULL );

	if ( TurretAim )
		memcpy ( TurretAim, &CheckTankSehllLocaionAndAim_Parms.TurretAim, 0xC );

	if ( FireStartLocation )
		memcpy ( FireStartLocation, &CheckTankSehllLocaionAndAim_Parms.FireStartLocation, 0xC );
};

// Function TGTankGame.TGTankWeap_Turret.TankShellFire
// [0x00A200C2] 
// Parameters infos:
// int                            InYaw                          ( CPF_Parm )
// int                            InPitch                        ( CPF_Parm )
// int                            InRoll                         ( CPF_Parm )
// struct FVectorNoCompress       InLocation                     ( CPF_Parm )

void ATGTankWeap_Turret::TankShellFire ( int InYaw, int InPitch, int InRoll, struct FVectorNoCompress InLocation )
{
	static UFunction* pFnTankShellFire = NULL;

	if ( ! pFnTankShellFire )
		pFnTankShellFire = (UFunction*) UObject::GObjObjects()->Data[ 218691 ];

	ATGTankWeap_Turret_execTankShellFire_Parms TankShellFire_Parms;
	TankShellFire_Parms.InYaw = InYaw;
	TankShellFire_Parms.InPitch = InPitch;
	TankShellFire_Parms.InRoll = InRoll;
	memcpy ( &TankShellFire_Parms.InLocation, &InLocation, 0xC );

	this->ProcessEvent ( pFnTankShellFire, &TankShellFire_Parms, NULL );
};

// Function TGTankGame.TGTankWeap_Turret.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGTankWeap_Turret::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 218683 ];

	ATGTankWeap_Turret_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function TGTankGame.TGTankWeap_Turret.ModifyAimDirection
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                AimRotation                    ( CPF_Parm )

struct FVector ATGTankWeap_Turret::ModifyAimDirection ( struct FRotator AimRotation )
{
	static UFunction* pFnModifyAimDirection = NULL;

	if ( ! pFnModifyAimDirection )
		pFnModifyAimDirection = (UFunction*) UObject::GObjObjects()->Data[ 218675 ];

	ATGTankWeap_Turret_execModifyAimDirection_Parms ModifyAimDirection_Parms;
	memcpy ( &ModifyAimDirection_Parms.AimRotation, &AimRotation, 0xC );

	this->ProcessEvent ( pFnModifyAimDirection, &ModifyAimDirection_Parms, NULL );

	return ModifyAimDirection_Parms.ReturnValue;
};

// Function TGTankGame.TGTankWeap_Turret.ClientSetAmmoBoxShellList
// [0x010201C2] 
// Parameters infos:
// struct FTGTankAmmoInfo         NewTankShellList               ( CPF_Parm )

void ATGTankWeap_Turret::ClientSetAmmoBoxShellList ( struct FTGTankAmmoInfo* NewTankShellList )
{
	static UFunction* pFnClientSetAmmoBoxShellList = NULL;

	if ( ! pFnClientSetAmmoBoxShellList )
		pFnClientSetAmmoBoxShellList = (UFunction*) UObject::GObjObjects()->Data[ 218672 ];

	ATGTankWeap_Turret_execClientSetAmmoBoxShellList_Parms ClientSetAmmoBoxShellList_Parms;
	memcpy ( &ClientSetAmmoBoxShellList_Parms.NewTankShellList, &NewTankShellList, 0x30 );

	this->ProcessEvent ( pFnClientSetAmmoBoxShellList, &ClientSetAmmoBoxShellList_Parms, NULL );
};

// Function TGTankGame.TGTankWeap_Turret.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGTankWeap_Turret::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 218671 ];

	ATGTankWeap_Turret_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGTankGame.TGTankWeap_Turret.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGTankWeap_Turret::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 218669 ];

	ATGTankWeap_Turret_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGTankGame.TGTankWeapon.GetCurrReloadTime
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGTankWeapon::GetCurrReloadTime ( )
{
	static UFunction* pFnGetCurrReloadTime = NULL;

	if ( ! pFnGetCurrReloadTime )
		pFnGetCurrReloadTime = (UFunction*) UObject::GObjObjects()->Data[ 218041 ];

	ATGTankWeapon_execGetCurrReloadTime_Parms GetCurrReloadTime_Parms;

	this->ProcessEvent ( pFnGetCurrReloadTime, &GetCurrReloadTime_Parms, NULL );

	return GetCurrReloadTime_Parms.ReturnValue;
};

// Function TGTankGame.TGTankWeapon.ShakeView
// [0x00020100] 
// Parameters infos:

void ATGTankWeapon::ShakeView ( )
{
	static UFunction* pFnShakeView = NULL;

	if ( ! pFnShakeView )
		pFnShakeView = (UFunction*) UObject::GObjObjects()->Data[ 218652 ];

	ATGTankWeapon_execShakeView_Parms ShakeView_Parms;

	this->ProcessEvent ( pFnShakeView, &ShakeView_Parms, NULL );
};

// Function TGTankGame.TGTankWeapon.TankShakeView
// [0x00020102] 
// Parameters infos:
// class UCameraAnim*             CurrCameraAnim                 ( CPF_Parm )

void ATGTankWeapon::TankShakeView ( class UCameraAnim* CurrCameraAnim )
{
	static UFunction* pFnTankShakeView = NULL;

	if ( ! pFnTankShakeView )
		pFnTankShakeView = (UFunction*) UObject::GObjObjects()->Data[ 218649 ];

	ATGTankWeapon_execTankShakeView_Parms TankShakeView_Parms;
	TankShakeView_Parms.CurrCameraAnim = CurrCameraAnim;

	this->ProcessEvent ( pFnTankShakeView, &TankShakeView_Parms, NULL );
};

// Function TGTankGame.TGTankWeapon.SetZoom
// [0x00020102] 
// Parameters infos:
// unsigned char                  ZoomSwitchingTo                ( CPF_Parm )

void ATGTankWeapon::SetZoom ( unsigned char ZoomSwitchingTo )
{
	static UFunction* pFnSetZoom = NULL;

	if ( ! pFnSetZoom )
		pFnSetZoom = (UFunction*) UObject::GObjObjects()->Data[ 218645 ];

	ATGTankWeapon_execSetZoom_Parms SetZoom_Parms;
	SetZoom_Parms.ZoomSwitchingTo = ZoomSwitchingTo;

	this->ProcessEvent ( pFnSetZoom, &SetZoom_Parms, NULL );
};

// Function TGTankGame.TGTankWeapon.CheckZoom
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  FireModeNum                    ( CPF_Parm )

bool ATGTankWeapon::CheckZoom ( unsigned char FireModeNum )
{
	static UFunction* pFnCheckZoom = NULL;

	if ( ! pFnCheckZoom )
		pFnCheckZoom = (UFunction*) UObject::GObjObjects()->Data[ 218640 ];

	ATGTankWeapon_execCheckZoom_Parms CheckZoom_Parms;
	CheckZoom_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnCheckZoom, &CheckZoom_Parms, NULL );

	return CheckZoom_Parms.ReturnValue;
};

// Function TGTankGame.TGTankWeapon.DrawWeaponCrosshair
// [0x00020100] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGTankWeapon::DrawWeaponCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshair = NULL;

	if ( ! pFnDrawWeaponCrosshair )
		pFnDrawWeaponCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 218638 ];

	ATGTankWeapon_execDrawWeaponCrosshair_Parms DrawWeaponCrosshair_Parms;
	DrawWeaponCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshair, &DrawWeaponCrosshair_Parms, NULL );
};

// Function TGTankGame.TGRealTank.RigidBodyCollision
// [0x00C20902] ( FUNC_Event )
// Parameters infos:
// class UPrimitiveComponent*     HitComponent                   ( CPF_Parm | CPF_EditInline )
// class UPrimitiveComponent*     OtherComponent                 ( CPF_Parm | CPF_EditInline )
// int                            ContactIndex                   ( CPF_Parm )
// struct FCollisionImpactData    Collision                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ATGRealTank::eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* Collision )
{
	static UFunction* pFnRigidBodyCollision = NULL;

	if ( ! pFnRigidBodyCollision )
		pFnRigidBodyCollision = (UFunction*) UObject::GObjObjects()->Data[ 216734 ];

	ATGRealTank_eventRigidBodyCollision_Parms RigidBodyCollision_Parms;
	RigidBodyCollision_Parms.HitComponent = HitComponent;
	RigidBodyCollision_Parms.OtherComponent = OtherComponent;
	RigidBodyCollision_Parms.ContactIndex = ContactIndex;

	this->ProcessEvent ( pFnRigidBodyCollision, &RigidBodyCollision_Parms, NULL );

	if ( Collision )
		memcpy ( Collision, &RigidBodyCollision_Parms.Collision, 0x24 );
};

// Function TGTankGame.TGRealTank.RecommendLongRangedAttack
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGRealTank::RecommendLongRangedAttack ( )
{
	static UFunction* pFnRecommendLongRangedAttack = NULL;

	if ( ! pFnRecommendLongRangedAttack )
		pFnRecommendLongRangedAttack = (UFunction*) UObject::GObjObjects()->Data[ 216732 ];

	ATGRealTank_execRecommendLongRangedAttack_Parms RecommendLongRangedAttack_Parms;

	this->ProcessEvent ( pFnRecommendLongRangedAttack, &RecommendLongRangedAttack_Parms, NULL );

	return RecommendLongRangedAttack_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.ImportantVehicle
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGRealTank::ImportantVehicle ( )
{
	static UFunction* pFnImportantVehicle = NULL;

	if ( ! pFnImportantVehicle )
		pFnImportantVehicle = (UFunction*) UObject::GObjObjects()->Data[ 216730 ];

	ATGRealTank_execImportantVehicle_Parms ImportantVehicle_Parms;

	this->ProcessEvent ( pFnImportantVehicle, &ImportantVehicle_Parms, NULL );

	return ImportantVehicle_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.DisplayWheelsDebug
// [0x00820102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )
// float                          YL                             ( CPF_Parm )

void ATGRealTank::DisplayWheelsDebug ( class AHUD* HUD, float YL )
{
	static UFunction* pFnDisplayWheelsDebug = NULL;

	if ( ! pFnDisplayWheelsDebug )
		pFnDisplayWheelsDebug = (UFunction*) UObject::GObjObjects()->Data[ 216718 ];

	ATGRealTank_execDisplayWheelsDebug_Parms DisplayWheelsDebug_Parms;
	DisplayWheelsDebug_Parms.HUD = HUD;
	DisplayWheelsDebug_Parms.YL = YL;

	this->ProcessEvent ( pFnDisplayWheelsDebug, &DisplayWheelsDebug_Parms, NULL );
};

// Function TGTankGame.TGRealTank.GetSVehicleDebug
// [0x00420102] 
// Parameters infos:
// TArray< struct FString >       DebugInfo                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ATGRealTank::GetSVehicleDebug ( TArray< struct FString >* DebugInfo )
{
	static UFunction* pFnGetSVehicleDebug = NULL;

	if ( ! pFnGetSVehicleDebug )
		pFnGetSVehicleDebug = (UFunction*) UObject::GObjObjects()->Data[ 216712 ];

	ATGRealTank_execGetSVehicleDebug_Parms GetSVehicleDebug_Parms;

	this->ProcessEvent ( pFnGetSVehicleDebug, &GetSVehicleDebug_Parms, NULL );

	if ( DebugInfo )
		memcpy ( DebugInfo, &GetSVehicleDebug_Parms.DebugInfo, 0xC );
};

// Function TGTankGame.TGRealTank.AddAmmo
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGRealTank::AddAmmo ( )
{
	static UFunction* pFnAddAmmo = NULL;

	if ( ! pFnAddAmmo )
		pFnAddAmmo = (UFunction*) UObject::GObjObjects()->Data[ 216710 ];

	ATGRealTank_execAddAmmo_Parms AddAmmo_Parms;

	this->ProcessEvent ( pFnAddAmmo, &AddAmmo_Parms, NULL );

	return AddAmmo_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.Repair
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGRealTank::Repair ( )
{
	static UFunction* pFnRepair = NULL;

	if ( ! pFnRepair )
		pFnRepair = (UFunction*) UObject::GObjObjects()->Data[ 216706 ];

	ATGRealTank_execRepair_Parms Repair_Parms;

	this->ProcessEvent ( pFnRepair, &Repair_Parms, NULL );

	return Repair_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.ServerUsePickup
// [0x002200C2] 
// Parameters infos:
// class ATGTankPickupFactory*    Pickup                         ( CPF_Parm )

void ATGRealTank::ServerUsePickup ( class ATGTankPickupFactory* Pickup )
{
	static UFunction* pFnServerUsePickup = NULL;

	if ( ! pFnServerUsePickup )
		pFnServerUsePickup = (UFunction*) UObject::GObjObjects()->Data[ 216700 ];

	ATGRealTank_execServerUsePickup_Parms ServerUsePickup_Parms;
	ServerUsePickup_Parms.Pickup = Pickup;

	this->ProcessEvent ( pFnServerUsePickup, &ServerUsePickup_Parms, NULL );
};

// Function TGTankGame.TGRealTank.CanAddAmmo
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGRealTank::CanAddAmmo ( )
{
	static UFunction* pFnCanAddAmmo = NULL;

	if ( ! pFnCanAddAmmo )
		pFnCanAddAmmo = (UFunction*) UObject::GObjObjects()->Data[ 216698 ];

	ATGRealTank_execCanAddAmmo_Parms CanAddAmmo_Parms;

	this->ProcessEvent ( pFnCanAddAmmo, &CanAddAmmo_Parms, NULL );

	return CanAddAmmo_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.CanBeRepaired
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGRealTank::CanBeRepaired ( )
{
	static UFunction* pFnCanBeRepaired = NULL;

	if ( ! pFnCanBeRepaired )
		pFnCanBeRepaired = (UFunction*) UObject::GObjObjects()->Data[ 216696 ];

	ATGRealTank_execCanBeRepaired_Parms CanBeRepaired_Parms;

	this->ProcessEvent ( pFnCanBeRepaired, &CanBeRepaired_Parms, NULL );

	return CanBeRepaired_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.CanUsePickup
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Type                           ( CPF_Parm )

bool ATGRealTank::CanUsePickup ( unsigned char Type )
{
	static UFunction* pFnCanUsePickup = NULL;

	if ( ! pFnCanUsePickup )
		pFnCanUsePickup = (UFunction*) UObject::GObjObjects()->Data[ 216693 ];

	ATGRealTank_execCanUsePickup_Parms CanUsePickup_Parms;
	CanUsePickup_Parms.Type = Type;

	this->ProcessEvent ( pFnCanUsePickup, &CanUsePickup_Parms, NULL );

	return CanUsePickup_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.StopEngineSound
// [0x00020102] 
// Parameters infos:

void ATGRealTank::StopEngineSound ( )
{
	static UFunction* pFnStopEngineSound = NULL;

	if ( ! pFnStopEngineSound )
		pFnStopEngineSound = (UFunction*) UObject::GObjObjects()->Data[ 216692 ];

	ATGRealTank_execStopEngineSound_Parms StopEngineSound_Parms;

	this->ProcessEvent ( pFnStopEngineSound, &StopEngineSound_Parms, NULL );
};

// Function TGTankGame.TGRealTank.StartEngineSound
// [0x00020102] 
// Parameters infos:

void ATGRealTank::StartEngineSound ( )
{
	static UFunction* pFnStartEngineSound = NULL;

	if ( ! pFnStartEngineSound )
		pFnStartEngineSound = (UFunction*) UObject::GObjObjects()->Data[ 216690 ];

	ATGRealTank_execStartEngineSound_Parms StartEngineSound_Parms;

	this->ProcessEvent ( pFnStartEngineSound, &StartEngineSound_Parms, NULL );
};

// Function TGTankGame.TGRealTank.HasSmokeGrenade
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGRealTank::HasSmokeGrenade ( )
{
	static UFunction* pFnHasSmokeGrenade = NULL;

	if ( ! pFnHasSmokeGrenade )
		pFnHasSmokeGrenade = (UFunction*) UObject::GObjObjects()->Data[ 216688 ];

	ATGRealTank_execHasSmokeGrenade_Parms HasSmokeGrenade_Parms;

	this->ProcessEvent ( pFnHasSmokeGrenade, &HasSmokeGrenade_Parms, NULL );

	return HasSmokeGrenade_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.FireSmokeGrenade
// [0x00020102] 
// Parameters infos:

void ATGRealTank::FireSmokeGrenade ( )
{
	static UFunction* pFnFireSmokeGrenade = NULL;

	if ( ! pFnFireSmokeGrenade )
		pFnFireSmokeGrenade = (UFunction*) UObject::GObjObjects()->Data[ 216687 ];

	ATGRealTank_execFireSmokeGrenade_Parms FireSmokeGrenade_Parms;

	this->ProcessEvent ( pFnFireSmokeGrenade, &FireSmokeGrenade_Parms, NULL );
};

// Function TGTankGame.TGRealTank.OnRadarJammingActiveTimer
// [0x00020102] 
// Parameters infos:

void ATGRealTank::OnRadarJammingActiveTimer ( )
{
	static UFunction* pFnOnRadarJammingActiveTimer = NULL;

	if ( ! pFnOnRadarJammingActiveTimer )
		pFnOnRadarJammingActiveTimer = (UFunction*) UObject::GObjObjects()->Data[ 216686 ];

	ATGRealTank_execOnRadarJammingActiveTimer_Parms OnRadarJammingActiveTimer_Parms;

	this->ProcessEvent ( pFnOnRadarJammingActiveTimer, &OnRadarJammingActiveTimer_Parms, NULL );
};

// Function TGTankGame.TGRealTank.ServerFireSmokeGrenade
// [0x002200C2] 
// Parameters infos:

void ATGRealTank::ServerFireSmokeGrenade ( )
{
	static UFunction* pFnServerFireSmokeGrenade = NULL;

	if ( ! pFnServerFireSmokeGrenade )
		pFnServerFireSmokeGrenade = (UFunction*) UObject::GObjObjects()->Data[ 216683 ];

	ATGRealTank_execServerFireSmokeGrenade_Parms ServerFireSmokeGrenade_Parms;

	this->ProcessEvent ( pFnServerFireSmokeGrenade, &ServerFireSmokeGrenade_Parms, NULL );
};

// Function TGTankGame.TGRealTank.ResetDamageThrottleDecrease
// [0x00020002] 
// Parameters infos:

void ATGRealTank::ResetDamageThrottleDecrease ( )
{
	static UFunction* pFnResetDamageThrottleDecrease = NULL;

	if ( ! pFnResetDamageThrottleDecrease )
		pFnResetDamageThrottleDecrease = (UFunction*) UObject::GObjObjects()->Data[ 216682 ];

	ATGRealTank_execResetDamageThrottleDecrease_Parms ResetDamageThrottleDecrease_Parms;

	this->ProcessEvent ( pFnResetDamageThrottleDecrease, &ResetDamageThrottleDecrease_Parms, NULL );
};

// Function TGTankGame.TGRealTank.ClientSetThrottle
// [0x010201C2] 
// Parameters infos:
// float                          ActualThrottle                 ( CPF_Parm )

void ATGRealTank::ClientSetThrottle ( float ActualThrottle )
{
	static UFunction* pFnClientSetThrottle = NULL;

	if ( ! pFnClientSetThrottle )
		pFnClientSetThrottle = (UFunction*) UObject::GObjObjects()->Data[ 216680 ];

	ATGRealTank_execClientSetThrottle_Parms ClientSetThrottle_Parms;
	ClientSetThrottle_Parms.ActualThrottle = ActualThrottle;

	this->ProcessEvent ( pFnClientSetThrottle, &ClientSetThrottle_Parms, NULL );
};

// Function TGTankGame.TGRealTank.NotifyThrottleDecrease
// [0x00020002] 
// Parameters infos:
// unsigned long                  bDirectHit                     ( CPF_Parm )

void ATGRealTank::NotifyThrottleDecrease ( unsigned long bDirectHit )
{
	static UFunction* pFnNotifyThrottleDecrease = NULL;

	if ( ! pFnNotifyThrottleDecrease )
		pFnNotifyThrottleDecrease = (UFunction*) UObject::GObjObjects()->Data[ 216673 ];

	ATGRealTank_execNotifyThrottleDecrease_Parms NotifyThrottleDecrease_Parms;
	NotifyThrottleDecrease_Parms.bDirectHit = bDirectHit;

	this->ProcessEvent ( pFnNotifyThrottleDecrease, &NotifyThrottleDecrease_Parms, NULL );
};

// Function TGTankGame.TGRealTank.GetDriverPC
// [0x00020002] 
// Parameters infos:
// class ATGTankTMPlayerController* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ATGTankTMPlayerController* ATGRealTank::GetDriverPC ( )
{
	static UFunction* pFnGetDriverPC = NULL;

	if ( ! pFnGetDriverPC )
		pFnGetDriverPC = (UFunction*) UObject::GObjObjects()->Data[ 216670 ];

	ATGRealTank_execGetDriverPC_Parms GetDriverPC_Parms;

	this->ProcessEvent ( pFnGetDriverPC, &GetDriverPC_Parms, NULL );

	return GetDriverPC_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.AddTechStatsInfo
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// unsigned long                  bKilled                        ( CPF_Parm )
// int                            MaxHealth                      ( CPF_Parm )

void ATGRealTank::AddTechStatsInfo ( class AController* InstigatedBy, int Damage, unsigned long bKilled, int MaxHealth )
{
	static UFunction* pFnAddTechStatsInfo = NULL;

	if ( ! pFnAddTechStatsInfo )
		pFnAddTechStatsInfo = (UFunction*) UObject::GObjObjects()->Data[ 216663 ];

	ATGRealTank_execAddTechStatsInfo_Parms AddTechStatsInfo_Parms;
	AddTechStatsInfo_Parms.InstigatedBy = InstigatedBy;
	AddTechStatsInfo_Parms.Damage = Damage;
	AddTechStatsInfo_Parms.bKilled = bKilled;
	AddTechStatsInfo_Parms.MaxHealth = MaxHealth;

	this->ProcessEvent ( pFnAddTechStatsInfo, &AddTechStatsInfo_Parms, NULL );
};

// Function TGTankGame.TGRealTank.NotifyTakeHit
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )

void ATGRealTank::NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum )
{
	static UFunction* pFnNotifyTakeHit = NULL;

	if ( ! pFnNotifyTakeHit )
		pFnNotifyTakeHit = (UFunction*) UObject::GObjObjects()->Data[ 216657 ];

	ATGRealTank_execNotifyTakeHit_Parms NotifyTakeHit_Parms;
	NotifyTakeHit_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHit_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHit_Parms.Damage = Damage;
	NotifyTakeHit_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHit_Parms.Momentum, &Momentum, 0xC );

	this->ProcessEvent ( pFnNotifyTakeHit, &NotifyTakeHit_Parms, NULL );
};

// Function TGTankGame.TGRealTank.NotifyBeHit
// [0x00824002] 
// Parameters infos:
// TArray< struct FTankTargetHitInfo > TankHitInfoList                ( CPF_Parm | CPF_NeedCtorLink )
// class AController*             InstigatorController           ( CPF_Parm )
// unsigned long                  bDirectHit                     ( CPF_Parm )
// struct FVector                 HitOrigin                      ( CPF_Parm )
// float                          DamageRadius                   ( CPF_Parm )
// struct FVector                 Impulse                        ( CPF_OptionalParm | CPF_Parm )

void ATGRealTank::NotifyBeHit ( TArray< struct FTankTargetHitInfo > TankHitInfoList, class AController* InstigatorController, unsigned long bDirectHit, struct FVector HitOrigin, float DamageRadius, struct FVector Impulse )
{
	static UFunction* pFnNotifyBeHit = NULL;

	if ( ! pFnNotifyBeHit )
		pFnNotifyBeHit = (UFunction*) UObject::GObjObjects()->Data[ 216641 ];

	ATGRealTank_execNotifyBeHit_Parms NotifyBeHit_Parms;
	memcpy ( &NotifyBeHit_Parms.TankHitInfoList, &TankHitInfoList, 0xC );
	NotifyBeHit_Parms.InstigatorController = InstigatorController;
	NotifyBeHit_Parms.bDirectHit = bDirectHit;
	memcpy ( &NotifyBeHit_Parms.HitOrigin, &HitOrigin, 0xC );
	NotifyBeHit_Parms.DamageRadius = DamageRadius;
	memcpy ( &NotifyBeHit_Parms.Impulse, &Impulse, 0xC );

	this->ProcessEvent ( pFnNotifyBeHit, &NotifyBeHit_Parms, NULL );
};

// Function TGTankGame.TGRealTank.SetOnCrosshair
// [0x00020102] 
// Parameters infos:
// unsigned long                  bOnCrosshair                   ( CPF_Parm )

void ATGRealTank::SetOnCrosshair ( unsigned long bOnCrosshair )
{
	static UFunction* pFnSetOnCrosshair = NULL;

	if ( ! pFnSetOnCrosshair )
		pFnSetOnCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 216637 ];

	ATGRealTank_execSetOnCrosshair_Parms SetOnCrosshair_Parms;
	SetOnCrosshair_Parms.bOnCrosshair = bOnCrosshair;

	this->ProcessEvent ( pFnSetOnCrosshair, &SetOnCrosshair_Parms, NULL );
};

// Function TGTankGame.TGRealTank.PanTreads
// [0x00040103] ( FUNC_Final )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGRealTank::PanTreads ( float DeltaTime )
{
	static UFunction* pFnPanTreads = NULL;

	if ( ! pFnPanTreads )
		pFnPanTreads = (UFunction*) UObject::GObjObjects()->Data[ 216617 ];

	ATGRealTank_execPanTreads_Parms PanTreads_Parms;
	PanTreads_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnPanTreads, &PanTreads_Parms, NULL );
};

// Function TGTankGame.TGRealTank.TankExhaust
// [0x00040103] ( FUNC_Final )
// Parameters infos:

void ATGRealTank::TankExhaust ( )
{
	static UFunction* pFnTankExhaust = NULL;

	if ( ! pFnTankExhaust )
		pFnTankExhaust = (UFunction*) UObject::GObjObjects()->Data[ 216618 ];

	ATGRealTank_execTankExhaust_Parms TankExhaust_Parms;

	this->ProcessEvent ( pFnTankExhaust, &TankExhaust_Parms, NULL );
};

// Function TGTankGame.TGRealTank.PancakeOther
// [0x00020002] 
// Parameters infos:
// class APawn*                   Other                          ( CPF_Parm )

void ATGRealTank::PancakeOther ( class APawn* Other )
{
	static UFunction* pFnPancakeOther = NULL;

	if ( ! pFnPancakeOther )
		pFnPancakeOther = (UFunction*) UObject::GObjObjects()->Data[ 216632 ];

	ATGRealTank_execPancakeOther_Parms PancakeOther_Parms;
	PancakeOther_Parms.Other = Other;

	this->ProcessEvent ( pFnPancakeOther, &PancakeOther_Parms, NULL );
};

// Function TGTankGame.TGRealTank.RanInto
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void ATGRealTank::eventRanInto ( class AActor* Other )
{
	static UFunction* pFnRanInto = NULL;

	if ( ! pFnRanInto )
		pFnRanInto = (UFunction*) UObject::GObjObjects()->Data[ 216630 ];

	ATGRealTank_eventRanInto_Parms RanInto_Parms;
	RanInto_Parms.Other = Other;

	this->ProcessEvent ( pFnRanInto, &RanInto_Parms, NULL );
};

// Function TGTankGame.TGRealTank.AdjustFOVAngle
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          FOVAngle                       ( CPF_Parm )

float ATGRealTank::AdjustFOVAngle ( float FOVAngle )
{
	static UFunction* pFnAdjustFOVAngle = NULL;

	if ( ! pFnAdjustFOVAngle )
		pFnAdjustFOVAngle = (UFunction*) UObject::GObjObjects()->Data[ 216627 ];

	ATGRealTank_execAdjustFOVAngle_Parms AdjustFOVAngle_Parms;
	AdjustFOVAngle_Parms.FOVAngle = FOVAngle;

	this->ProcessEvent ( pFnAdjustFOVAngle, &AdjustFOVAngle_Parms, NULL );

	return AdjustFOVAngle_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.ServerSetTryBoost
// [0x002200C2] 
// Parameters infos:
// unsigned long                  Try                            ( CPF_Parm )

void ATGRealTank::ServerSetTryBoost ( unsigned long Try )
{
	static UFunction* pFnServerSetTryBoost = NULL;

	if ( ! pFnServerSetTryBoost )
		pFnServerSetTryBoost = (UFunction*) UObject::GObjObjects()->Data[ 216625 ];

	ATGRealTank_execServerSetTryBoost_Parms ServerSetTryBoost_Parms;
	ServerSetTryBoost_Parms.Try = Try;

	this->ProcessEvent ( pFnServerSetTryBoost, &ServerSetTryBoost_Parms, NULL );
};

// Function TGTankGame.TGRealTank.GetNormalFOV
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGRealTank::GetNormalFOV ( )
{
	static UFunction* pFnGetNormalFOV = NULL;

	if ( ! pFnGetNormalFOV )
		pFnGetNormalFOV = (UFunction*) UObject::GObjObjects()->Data[ 216623 ];

	ATGRealTank_execGetNormalFOV_Parms GetNormalFOV_Parms;

	this->ProcessEvent ( pFnGetNormalFOV, &GetNormalFOV_Parms, NULL );

	return GetNormalFOV_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.DeactivateRocketBoosters
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGRealTank::eventDeactivateRocketBoosters ( )
{
	static UFunction* pFnDeactivateRocketBoosters = NULL;

	if ( ! pFnDeactivateRocketBoosters )
		pFnDeactivateRocketBoosters = (UFunction*) UObject::GObjObjects()->Data[ 216621 ];

	ATGRealTank_eventDeactivateRocketBoosters_Parms DeactivateRocketBoosters_Parms;

	this->ProcessEvent ( pFnDeactivateRocketBoosters, &DeactivateRocketBoosters_Parms, NULL );
};

// Function TGTankGame.TGRealTank.ActivateRocketBoosters
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGRealTank::eventActivateRocketBoosters ( )
{
	static UFunction* pFnActivateRocketBoosters = NULL;

	if ( ! pFnActivateRocketBoosters )
		pFnActivateRocketBoosters = (UFunction*) UObject::GObjObjects()->Data[ 216620 ];

	ATGRealTank_eventActivateRocketBoosters_Parms ActivateRocketBoosters_Parms;

	this->ProcessEvent ( pFnActivateRocketBoosters, &ActivateRocketBoosters_Parms, NULL );
};

// Function TGTankGame.TGRealTank.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGRealTank::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 216613 ];

	ATGRealTank_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGTankGame.TGRealTank.SetInputs
// [0x00020102] 
// Parameters infos:
// float                          InForward                      ( CPF_Parm )
// float                          InStrafe                       ( CPF_Parm )
// float                          InUp                           ( CPF_Parm )

void ATGRealTank::SetInputs ( float InForward, float InStrafe, float InUp )
{
	static UFunction* pFnSetInputs = NULL;

	if ( ! pFnSetInputs )
		pFnSetInputs = (UFunction*) UObject::GObjObjects()->Data[ 216606 ];

	ATGRealTank_execSetInputs_Parms SetInputs_Parms;
	SetInputs_Parms.InForward = InForward;
	SetInputs_Parms.InStrafe = InStrafe;
	SetInputs_Parms.InUp = InUp;

	this->ProcessEvent ( pFnSetInputs, &SetInputs_Parms, NULL );
};

// Function TGTankGame.TGRealTank.GetHealthPct
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGRealTank::GetHealthPct ( )
{
	static UFunction* pFnGetHealthPct = NULL;

	if ( ! pFnGetHealthPct )
		pFnGetHealthPct = (UFunction*) UObject::GObjObjects()->Data[ 216603 ];

	ATGRealTank_execGetHealthPct_Parms GetHealthPct_Parms;

	this->ProcessEvent ( pFnGetHealthPct, &GetHealthPct_Parms, NULL );

	return GetHealthPct_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.PostRenderFor
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void ATGRealTank::eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnPostRenderFor = NULL;

	if ( ! pFnPostRenderFor )
		pFnPostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 216583 ];

	ATGRealTank_eventPostRenderFor_Parms PostRenderFor_Parms;
	PostRenderFor_Parms.PC = PC;
	PostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &PostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &PostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	this->ProcessEvent ( pFnPostRenderFor, &PostRenderFor_Parms, NULL );
};

// Function TGTankGame.TGRealTank.SetVehicleEffectParms
// [0x00020100] 
// Parameters infos:
// struct FName                   TriggerName                    ( CPF_Parm )
// class UParticleSystemComponent* PSC                            ( CPF_Parm | CPF_EditInline )

void ATGRealTank::SetVehicleEffectParms ( struct FName TriggerName, class UParticleSystemComponent* PSC )
{
	static UFunction* pFnSetVehicleEffectParms = NULL;

	if ( ! pFnSetVehicleEffectParms )
		pFnSetVehicleEffectParms = (UFunction*) UObject::GObjObjects()->Data[ 216580 ];

	ATGRealTank_execSetVehicleEffectParms_Parms SetVehicleEffectParms_Parms;
	memcpy ( &SetVehicleEffectParms_Parms.TriggerName, &TriggerName, 0x8 );
	SetVehicleEffectParms_Parms.PSC = PSC;

	this->ProcessEvent ( pFnSetVehicleEffectParms, &SetVehicleEffectParms_Parms, NULL );
};

// Function TGTankGame.TGRealTank.CheckDamageEffect
// [0x00020102] 
// Parameters infos:

void ATGRealTank::CheckDamageEffect ( )
{
	static UFunction* pFnCheckDamageEffect = NULL;

	if ( ! pFnCheckDamageEffect )
		pFnCheckDamageEffect = (UFunction*) UObject::GObjObjects()->Data[ 216579 ];

	ATGRealTank_execCheckDamageEffect_Parms CheckDamageEffect_Parms;

	this->ProcessEvent ( pFnCheckDamageEffect, &CheckDamageEffect_Parms, NULL );
};

// Function TGTankGame.TGRealTank.NotifyClientTakeDamage
// [0x010241C2] 
// Parameters infos:
// struct FTankTargetHitInfo      HitInfoArray                   ( CPF_Parm )
// unsigned long                  bDirectHit                     ( CPF_Parm )
// struct FVector                 HitOrigin                      ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 Impulse                        ( CPF_OptionalParm | CPF_Parm )

void ATGRealTank::NotifyClientTakeDamage ( struct FTankTargetHitInfo* HitInfoArray, unsigned long bDirectHit, struct FVector HitOrigin, struct FVector Impulse )
{
	static UFunction* pFnNotifyClientTakeDamage = NULL;

	if ( ! pFnNotifyClientTakeDamage )
		pFnNotifyClientTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 216570 ];

	ATGRealTank_execNotifyClientTakeDamage_Parms NotifyClientTakeDamage_Parms;
	memcpy ( &NotifyClientTakeDamage_Parms.HitInfoArray, &HitInfoArray, 0x30 );
	NotifyClientTakeDamage_Parms.bDirectHit = bDirectHit;
	memcpy ( &NotifyClientTakeDamage_Parms.HitOrigin, &HitOrigin, 0xC );
	memcpy ( &NotifyClientTakeDamage_Parms.Impulse, &Impulse, 0xC );

	this->ProcessEvent ( pFnNotifyClientTakeDamage, &NotifyClientTakeDamage_Parms, NULL );
};

// Function TGTankGame.TGRealTank.DisplayTankHud
// [0x00020102] 
// Parameters infos:
// class AUTHUD*                  HUD                            ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void ATGRealTank::DisplayTankHud ( class AUTHUD* HUD, class UCanvas* Canvas )
{
	static UFunction* pFnDisplayTankHud = NULL;

	if ( ! pFnDisplayTankHud )
		pFnDisplayTankHud = (UFunction*) UObject::GObjObjects()->Data[ 216567 ];

	ATGRealTank_execDisplayTankHud_Parms DisplayTankHud_Parms;
	DisplayTankHud_Parms.HUD = HUD;
	DisplayTankHud_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDisplayTankHud, &DisplayTankHud_Parms, NULL );
};

// Function TGTankGame.TGRealTank.DisplayHud
// [0x00024100] 
// Parameters infos:
// class AUTHUD*                  HUD                            ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector2D               HudPOS                         ( CPF_Parm )
// int                            SeatIndex                      ( CPF_OptionalParm | CPF_Parm )

void ATGRealTank::DisplayHud ( class AUTHUD* HUD, class UCanvas* Canvas, struct FVector2D HudPOS, int SeatIndex )
{
	static UFunction* pFnDisplayHud = NULL;

	if ( ! pFnDisplayHud )
		pFnDisplayHud = (UFunction*) UObject::GObjObjects()->Data[ 216562 ];

	ATGRealTank_execDisplayHud_Parms DisplayHud_Parms;
	DisplayHud_Parms.HUD = HUD;
	DisplayHud_Parms.Canvas = Canvas;
	memcpy ( &DisplayHud_Parms.HudPOS, &HudPOS, 0x8 );
	DisplayHud_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnDisplayHud, &DisplayHud_Parms, NULL );
};

// Function TGTankGame.TGRealTank.GetCurrentWeapon
// [0x00020102] 
// Parameters infos:
// class ATGTankWeapon*           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ATGTankWeapon* ATGRealTank::GetCurrentWeapon ( )
{
	static UFunction* pFnGetCurrentWeapon = NULL;

	if ( ! pFnGetCurrentWeapon )
		pFnGetCurrentWeapon = (UFunction*) UObject::GObjObjects()->Data[ 216560 ];

	ATGRealTank_execGetCurrentWeapon_Parms GetCurrentWeapon_Parms;

	this->ProcessEvent ( pFnGetCurrentWeapon, &GetCurrentWeapon_Parms, NULL );

	return GetCurrentWeapon_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.RenderOuterMapIcon
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UTGMapInfo*              MP                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// int                            InYaw                          ( CPF_Parm )
// struct FLinearColor            FinalColor                     ( CPF_Parm )

void ATGRealTank::eventRenderOuterMapIcon ( class UTGMapInfo* MP, class UCanvas* Canvas, int InYaw, struct FLinearColor FinalColor )
{
	static UFunction* pFnRenderOuterMapIcon = NULL;

	if ( ! pFnRenderOuterMapIcon )
		pFnRenderOuterMapIcon = (UFunction*) UObject::GObjObjects()->Data[ 216555 ];

	ATGRealTank_eventRenderOuterMapIcon_Parms RenderOuterMapIcon_Parms;
	RenderOuterMapIcon_Parms.MP = MP;
	RenderOuterMapIcon_Parms.Canvas = Canvas;
	RenderOuterMapIcon_Parms.InYaw = InYaw;
	memcpy ( &RenderOuterMapIcon_Parms.FinalColor, &FinalColor, 0x10 );

	this->ProcessEvent ( pFnRenderOuterMapIcon, &RenderOuterMapIcon_Parms, NULL );
};

// Function TGTankGame.TGRealTank.RenderLowerMapIcon
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UTGMapInfo*              MP                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// class AUTPlayerController*     PlayerOwner                    ( CPF_Parm )
// struct FLinearColor            FinalColor                     ( CPF_Parm )

void ATGRealTank::eventRenderLowerMapIcon ( class UTGMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, struct FLinearColor FinalColor )
{
	static UFunction* pFnRenderLowerMapIcon = NULL;

	if ( ! pFnRenderLowerMapIcon )
		pFnRenderLowerMapIcon = (UFunction*) UObject::GObjObjects()->Data[ 216550 ];

	ATGRealTank_eventRenderLowerMapIcon_Parms RenderLowerMapIcon_Parms;
	RenderLowerMapIcon_Parms.MP = MP;
	RenderLowerMapIcon_Parms.Canvas = Canvas;
	RenderLowerMapIcon_Parms.PlayerOwner = PlayerOwner;
	memcpy ( &RenderLowerMapIcon_Parms.FinalColor, &FinalColor, 0x10 );

	this->ProcessEvent ( pFnRenderLowerMapIcon, &RenderLowerMapIcon_Parms, NULL );
};

// Function TGTankGame.TGRealTank.RenderHigherMapIcon
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UTGMapInfo*              MP                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// class AUTPlayerController*     PlayerOwner                    ( CPF_Parm )
// struct FLinearColor            FinalColor                     ( CPF_Parm )

void ATGRealTank::eventRenderHigherMapIcon ( class UTGMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, struct FLinearColor FinalColor )
{
	static UFunction* pFnRenderHigherMapIcon = NULL;

	if ( ! pFnRenderHigherMapIcon )
		pFnRenderHigherMapIcon = (UFunction*) UObject::GObjObjects()->Data[ 216545 ];

	ATGRealTank_eventRenderHigherMapIcon_Parms RenderHigherMapIcon_Parms;
	RenderHigherMapIcon_Parms.MP = MP;
	RenderHigherMapIcon_Parms.Canvas = Canvas;
	RenderHigherMapIcon_Parms.PlayerOwner = PlayerOwner;
	memcpy ( &RenderHigherMapIcon_Parms.FinalColor, &FinalColor, 0x10 );

	this->ProcessEvent ( pFnRenderHigherMapIcon, &RenderHigherMapIcon_Parms, NULL );
};

// Function TGTankGame.TGRealTank.RenderNormalMapIcon
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UTGMapInfo*              MP                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// class AUTPlayerController*     PlayerOwner                    ( CPF_Parm )
// struct FLinearColor            FinalColor                     ( CPF_Parm )

void ATGRealTank::eventRenderNormalMapIcon ( class UTGMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, struct FLinearColor FinalColor )
{
	static UFunction* pFnRenderNormalMapIcon = NULL;

	if ( ! pFnRenderNormalMapIcon )
		pFnRenderNormalMapIcon = (UFunction*) UObject::GObjObjects()->Data[ 216540 ];

	ATGRealTank_eventRenderNormalMapIcon_Parms RenderNormalMapIcon_Parms;
	RenderNormalMapIcon_Parms.MP = MP;
	RenderNormalMapIcon_Parms.Canvas = Canvas;
	RenderNormalMapIcon_Parms.PlayerOwner = PlayerOwner;
	memcpy ( &RenderNormalMapIcon_Parms.FinalColor, &FinalColor, 0x10 );

	this->ProcessEvent ( pFnRenderNormalMapIcon, &RenderNormalMapIcon_Parms, NULL );
};

// Function TGTankGame.TGRealTank.NotifyDied
// [0x00020102] 
// Parameters infos:

void ATGRealTank::NotifyDied ( )
{
	static UFunction* pFnNotifyDied = NULL;

	if ( ! pFnNotifyDied )
		pFnNotifyDied = (UFunction*) UObject::GObjObjects()->Data[ 216538 ];

	ATGRealTank_execNotifyDied_Parms NotifyDied_Parms;

	this->ProcessEvent ( pFnNotifyDied, &NotifyDied_Parms, NULL );
};

// Function TGTankGame.TGRealTank.BlowupVehicle
// [0x00020102] 
// Parameters infos:

void ATGRealTank::BlowupVehicle ( )
{
	static UFunction* pFnBlowupVehicle = NULL;

	if ( ! pFnBlowupVehicle )
		pFnBlowupVehicle = (UFunction*) UObject::GObjObjects()->Data[ 216535 ];

	ATGRealTank_execBlowupVehicle_Parms BlowupVehicle_Parms;

	this->ProcessEvent ( pFnBlowupVehicle, &BlowupVehicle_Parms, NULL );
};

// Function TGTankGame.TGRealTank.Suicide
// [0x00020002] 
// Parameters infos:

void ATGRealTank::Suicide ( )
{
	static UFunction* pFnSuicide = NULL;

	if ( ! pFnSuicide )
		pFnSuicide = (UFunction*) UObject::GObjObjects()->Data[ 216523 ];

	ATGRealTank_execSuicide_Parms Suicide_Parms;

	this->ProcessEvent ( pFnSuicide, &Suicide_Parms, NULL );
};

// Function TGTankGame.TGRealTank.TakeDamage
// [0x00024902] ( FUNC_Event )
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ATGRealTank::eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 216505 ];

	ATGRealTank_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.Damage = Damage;
	TakeDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x20 );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function TGTankGame.TGRealTank.IsTankDestroyed
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGRealTank::IsTankDestroyed ( )
{
	static UFunction* pFnIsTankDestroyed = NULL;

	if ( ! pFnIsTankDestroyed )
		pFnIsTankDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 216503 ];

	ATGRealTank_execIsTankDestroyed_Parms IsTankDestroyed_Parms;

	this->ProcessEvent ( pFnIsTankDestroyed, &IsTankDestroyed_Parms, NULL );

	return IsTankDestroyed_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.DriverEnter
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

bool ATGRealTank::DriverEnter ( class APawn* P )
{
	static UFunction* pFnDriverEnter = NULL;

	if ( ! pFnDriverEnter )
		pFnDriverEnter = (UFunction*) UObject::GObjObjects()->Data[ 216491 ];

	ATGRealTank_execDriverEnter_Parms DriverEnter_Parms;
	DriverEnter_Parms.P = P;

	this->ProcessEvent ( pFnDriverEnter, &DriverEnter_Parms, NULL );

	return DriverEnter_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.IsTankHitGroupValid
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  TankHitGroup                   ( CPF_Parm )

bool ATGRealTank::IsTankHitGroupValid ( unsigned char TankHitGroup )
{
	static UFunction* pFnIsTankHitGroupValid = NULL;

	if ( ! pFnIsTankHitGroupValid )
		pFnIsTankHitGroupValid = (UFunction*) UObject::GObjObjects()->Data[ 216488 ];

	ATGRealTank_execIsTankHitGroupValid_Parms IsTankHitGroupValid_Parms;
	IsTankHitGroupValid_Parms.TankHitGroup = TankHitGroup;

	this->ProcessEvent ( pFnIsTankHitGroupValid, &IsTankHitGroupValid_Parms, NULL );

	return IsTankHitGroupValid_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.ClientUpdatePing
// [0x01020142] 
// Parameters infos:
// float                          TimeStamp                      ( CPF_Parm )

void ATGRealTank::ClientUpdatePing ( float TimeStamp )
{
	static UFunction* pFnClientUpdatePing = NULL;

	if ( ! pFnClientUpdatePing )
		pFnClientUpdatePing = (UFunction*) UObject::GObjObjects()->Data[ 216486 ];

	ATGRealTank_execClientUpdatePing_Parms ClientUpdatePing_Parms;
	ClientUpdatePing_Parms.TimeStamp = TimeStamp;

	this->ProcessEvent ( pFnClientUpdatePing, &ClientUpdatePing_Parms, NULL );
};

// Function TGTankGame.TGRealTank.ServerTankMove
// [0x00A20042] 
// Parameters infos:
// struct FVehicleState           NewVehicleState                ( CPF_Parm )
// float                          ClientTimeStamp                ( CPF_Parm )

void ATGRealTank::ServerTankMove ( struct FVehicleState NewVehicleState, float ClientTimeStamp )
{
	static UFunction* pFnServerTankMove = NULL;

	if ( ! pFnServerTankMove )
		pFnServerTankMove = (UFunction*) UObject::GObjObjects()->Data[ 216478 ];

	ATGRealTank_execServerTankMove_Parms ServerTankMove_Parms;
	memcpy ( &ServerTankMove_Parms.NewVehicleState, &NewVehicleState, 0x50 );
	ServerTankMove_Parms.ClientTimeStamp = ClientTimeStamp;

	this->ProcessEvent ( pFnServerTankMove, &ServerTankMove_Parms, NULL );
};

// Function TGTankGame.TGRealTank.ClientSyncVStateToServer
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          ClientTimeStamp                ( CPF_Parm )

void ATGRealTank::eventClientSyncVStateToServer ( float ClientTimeStamp )
{
	static UFunction* pFnClientSyncVStateToServer = NULL;

	if ( ! pFnClientSyncVStateToServer )
		pFnClientSyncVStateToServer = (UFunction*) UObject::GObjObjects()->Data[ 216476 ];

	ATGRealTank_eventClientSyncVStateToServer_Parms ClientSyncVStateToServer_Parms;
	ClientSyncVStateToServer_Parms.ClientTimeStamp = ClientTimeStamp;

	this->ProcessEvent ( pFnClientSyncVStateToServer, &ClientSyncVStateToServer_Parms, NULL );
};

// Function TGTankGame.TGRealTank.GetVelocity
// [0x00020002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ATGRealTank::GetVelocity ( )
{
	static UFunction* pFnGetVelocity = NULL;

	if ( ! pFnGetVelocity )
		pFnGetVelocity = (UFunction*) UObject::GObjObjects()->Data[ 216474 ];

	ATGRealTank_execGetVelocity_Parms GetVelocity_Parms;

	this->ProcessEvent ( pFnGetVelocity, &GetVelocity_Parms, NULL );

	return GetVelocity_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.EndViewTarget
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void ATGRealTank::eventEndViewTarget ( class APlayerController* PC )
{
	static UFunction* pFnEndViewTarget = NULL;

	if ( ! pFnEndViewTarget )
		pFnEndViewTarget = (UFunction*) UObject::GObjObjects()->Data[ 216472 ];

	ATGRealTank_eventEndViewTarget_Parms EndViewTarget_Parms;
	EndViewTarget_Parms.PC = PC;

	this->ProcessEvent ( pFnEndViewTarget, &EndViewTarget_Parms, NULL );
};

// Function TGTankGame.TGRealTank.BecomeViewTarget
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void ATGRealTank::eventBecomeViewTarget ( class APlayerController* PC )
{
	static UFunction* pFnBecomeViewTarget = NULL;

	if ( ! pFnBecomeViewTarget )
		pFnBecomeViewTarget = (UFunction*) UObject::GObjObjects()->Data[ 216470 ];

	ATGRealTank_eventBecomeViewTarget_Parms BecomeViewTarget_Parms;
	BecomeViewTarget_Parms.PC = PC;

	this->ProcessEvent ( pFnBecomeViewTarget, &BecomeViewTarget_Parms, NULL );
};

// Function TGTankGame.TGRealTank.ClientSetCameraThirdPerson
// [0x010201C2] 
// Parameters infos:

void ATGRealTank::ClientSetCameraThirdPerson ( )
{
	static UFunction* pFnClientSetCameraThirdPerson = NULL;

	if ( ! pFnClientSetCameraThirdPerson )
		pFnClientSetCameraThirdPerson = (UFunction*) UObject::GObjObjects()->Data[ 216467 ];

	ATGRealTank_execClientSetCameraThirdPerson_Parms ClientSetCameraThirdPerson_Parms;

	this->ProcessEvent ( pFnClientSetCameraThirdPerson, &ClientSetCameraThirdPerson_Parms, NULL );
};

// Function TGTankGame.TGRealTank.ServerSetCameraThirdPerson
// [0x002200C2] 
// Parameters infos:

void ATGRealTank::ServerSetCameraThirdPerson ( )
{
	static UFunction* pFnServerSetCameraThirdPerson = NULL;

	if ( ! pFnServerSetCameraThirdPerson )
		pFnServerSetCameraThirdPerson = (UFunction*) UObject::GObjObjects()->Data[ 216462 ];

	ATGRealTank_execServerSetCameraThirdPerson_Parms ServerSetCameraThirdPerson_Parms;

	this->ProcessEvent ( pFnServerSetCameraThirdPerson, &ServerSetCameraThirdPerson_Parms, NULL );
};

// Function TGTankGame.TGRealTank.ClientSetCameraFirstPerson
// [0x018201C2] 
// Parameters infos:

void ATGRealTank::ClientSetCameraFirstPerson ( )
{
	static UFunction* pFnClientSetCameraFirstPerson = NULL;

	if ( ! pFnClientSetCameraFirstPerson )
		pFnClientSetCameraFirstPerson = (UFunction*) UObject::GObjObjects()->Data[ 216456 ];

	ATGRealTank_execClientSetCameraFirstPerson_Parms ClientSetCameraFirstPerson_Parms;

	this->ProcessEvent ( pFnClientSetCameraFirstPerson, &ClientSetCameraFirstPerson_Parms, NULL );
};

// Function TGTankGame.TGRealTank.ServerSetCameraFirstPerson
// [0x00A200C2] 
// Parameters infos:

void ATGRealTank::ServerSetCameraFirstPerson ( )
{
	static UFunction* pFnServerSetCameraFirstPerson = NULL;

	if ( ! pFnServerSetCameraFirstPerson )
		pFnServerSetCameraFirstPerson = (UFunction*) UObject::GObjObjects()->Data[ 216446 ];

	ATGRealTank_execServerSetCameraFirstPerson_Parms ServerSetCameraFirstPerson_Parms;

	this->ProcessEvent ( pFnServerSetCameraFirstPerson, &ServerSetCameraFirstPerson_Parms, NULL );
};

// Function TGTankGame.TGRealTank.ProcessViewRotation
// [0x00C20102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_DeltaRot                   ( CPF_Parm | CPF_OutParm )

void ATGRealTank::ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 216437 ];

	ATGRealTank_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );

	if ( out_DeltaRot )
		memcpy ( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC );
};

// Function TGTankGame.TGRealTank.GetTankViewPoint
// [0x00420102] 
// Parameters infos:
// struct FVector                 out_ViewLoc                    ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_ViewRot                    ( CPF_Parm | CPF_OutParm )

void ATGRealTank::GetTankViewPoint ( struct FVector* out_ViewLoc, struct FRotator* out_ViewRot )
{
	static UFunction* pFnGetTankViewPoint = NULL;

	if ( ! pFnGetTankViewPoint )
		pFnGetTankViewPoint = (UFunction*) UObject::GObjObjects()->Data[ 216434 ];

	ATGRealTank_execGetTankViewPoint_Parms GetTankViewPoint_Parms;

	this->ProcessEvent ( pFnGetTankViewPoint, &GetTankViewPoint_Parms, NULL );

	if ( out_ViewLoc )
		memcpy ( out_ViewLoc, &GetTankViewPoint_Parms.out_ViewLoc, 0xC );

	if ( out_ViewRot )
		memcpy ( out_ViewRot, &GetTankViewPoint_Parms.out_ViewRot, 0xC );
};

// Function TGTankGame.TGRealTank.VehicleCalcCamera
// [0x00C24102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// int                            SeatIndex                      ( CPF_Parm )
// unsigned long                  bPivotOnly                     ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )
// struct FVector                 CamStart                       ( CPF_Parm | CPF_OutParm )

void ATGRealTank::VehicleCalcCamera ( float DeltaTime, int SeatIndex, unsigned long bPivotOnly, struct FVector* out_CamLoc, struct FRotator* out_CamRot, struct FVector* CamStart )
{
	static UFunction* pFnVehicleCalcCamera = NULL;

	if ( ! pFnVehicleCalcCamera )
		pFnVehicleCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 216397 ];

	ATGRealTank_execVehicleCalcCamera_Parms VehicleCalcCamera_Parms;
	VehicleCalcCamera_Parms.DeltaTime = DeltaTime;
	VehicleCalcCamera_Parms.SeatIndex = SeatIndex;
	VehicleCalcCamera_Parms.bPivotOnly = bPivotOnly;

	this->ProcessEvent ( pFnVehicleCalcCamera, &VehicleCalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &VehicleCalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &VehicleCalcCamera_Parms.out_CamRot, 0xC );

	if ( CamStart )
		memcpy ( CamStart, &VehicleCalcCamera_Parms.CamStart, 0xC );
};

// Function TGTankGame.TGRealTank.LimitCameraZ
// [0x00820102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          CurrentCamZ                    ( CPF_Parm )
// float                          OriginalCamZ                   ( CPF_Parm )
// int                            SeatIndex                      ( CPF_Parm )

float ATGRealTank::LimitCameraZ ( float CurrentCamZ, float OriginalCamZ, int SeatIndex )
{
	static UFunction* pFnLimitCameraZ = NULL;

	if ( ! pFnLimitCameraZ )
		pFnLimitCameraZ = (UFunction*) UObject::GObjObjects()->Data[ 216390 ];

	ATGRealTank_execLimitCameraZ_Parms LimitCameraZ_Parms;
	LimitCameraZ_Parms.CurrentCamZ = CurrentCamZ;
	LimitCameraZ_Parms.OriginalCamZ = OriginalCamZ;
	LimitCameraZ_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnLimitCameraZ, &LimitCameraZ_Parms, NULL );

	return LimitCameraZ_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.GetCameraStart
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )

struct FVector ATGRealTank::GetCameraStart ( int SeatIndex )
{
	static UFunction* pFnGetCameraStart = NULL;

	if ( ! pFnGetCameraStart )
		pFnGetCameraStart = (UFunction*) UObject::GObjObjects()->Data[ 216379 ];

	ATGRealTank_execGetCameraStart_Parms GetCameraStart_Parms;
	GetCameraStart_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnGetCameraStart, &GetCameraStart_Parms, NULL );

	return GetCameraStart_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.GetCameraFocus
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )

struct FVector ATGRealTank::GetCameraFocus ( int SeatIndex )
{
	static UFunction* pFnGetCameraFocus = NULL;

	if ( ! pFnGetCameraFocus )
		pFnGetCameraFocus = (UFunction*) UObject::GObjObjects()->Data[ 216372 ];

	ATGRealTank_execGetCameraFocus_Parms GetCameraFocus_Parms;
	GetCameraFocus_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnGetCameraFocus, &GetCameraFocus_Parms, NULL );

	return GetCameraFocus_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.PlayVehicleAnimation
// [0x00020102] 
// Parameters infos:
// struct FName                   EventTag                       ( CPF_Parm )

void ATGRealTank::PlayVehicleAnimation ( struct FName EventTag )
{
	static UFunction* pFnPlayVehicleAnimation = NULL;

	if ( ! pFnPlayVehicleAnimation )
		pFnPlayVehicleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 216367 ];

	ATGRealTank_execPlayVehicleAnimation_Parms PlayVehicleAnimation_Parms;
	memcpy ( &PlayVehicleAnimation_Parms.EventTag, &EventTag, 0x8 );

	this->ProcessEvent ( pFnPlayVehicleAnimation, &PlayVehicleAnimation_Parms, NULL );
};

// Function TGTankGame.TGRealTank.VehicleWeaponFireEffects
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            SeatIndex                      ( CPF_Parm )

void ATGRealTank::VehicleWeaponFireEffects ( struct FVector HitLocation, int SeatIndex )
{
	static UFunction* pFnVehicleWeaponFireEffects = NULL;

	if ( ! pFnVehicleWeaponFireEffects )
		pFnVehicleWeaponFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 216361 ];

	ATGRealTank_execVehicleWeaponFireEffects_Parms VehicleWeaponFireEffects_Parms;
	memcpy ( &VehicleWeaponFireEffects_Parms.HitLocation, &HitLocation, 0xC );
	VehicleWeaponFireEffects_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnVehicleWeaponFireEffects, &VehicleWeaponFireEffects_Parms, NULL );
};

// Function TGTankGame.TGRealTank.GetTankFireTriggerTag
// [0x00020102] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            FireMode                       ( CPF_Parm )

struct FName ATGRealTank::GetTankFireTriggerTag ( int FireMode )
{
	static UFunction* pFnGetTankFireTriggerTag = NULL;

	if ( ! pFnGetTankFireTriggerTag )
		pFnGetTankFireTriggerTag = (UFunction*) UObject::GObjObjects()->Data[ 216355 ];

	ATGRealTank_execGetTankFireTriggerTag_Parms GetTankFireTriggerTag_Parms;
	GetTankFireTriggerTag_Parms.FireMode = FireMode;

	this->ProcessEvent ( pFnGetTankFireTriggerTag, &GetTankFireTriggerTag_Parms, NULL );

	return GetTankFireTriggerTag_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.AddAssistCandidate
// [0x00820002] 
// Parameters infos:
// class ATGTankTMPlayerReplicationInfo* InstigatorPRI                  ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )

void ATGRealTank::AddAssistCandidate ( class ATGTankTMPlayerReplicationInfo* InstigatorPRI, int Damage )
{
	static UFunction* pFnAddAssistCandidate = NULL;

	if ( ! pFnAddAssistCandidate )
		pFnAddAssistCandidate = (UFunction*) UObject::GObjObjects()->Data[ 216351 ];

	ATGRealTank_execAddAssistCandidate_Parms AddAssistCandidate_Parms;
	AddAssistCandidate_Parms.InstigatorPRI = InstigatorPRI;
	AddAssistCandidate_Parms.Damage = Damage;

	this->ProcessEvent ( pFnAddAssistCandidate, &AddAssistCandidate_Parms, NULL );
};

// Function TGTankGame.TGRealTank.HurtTank
// [0x00420002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// int                            out_HealthDamage               ( CPF_Parm | CPF_OutParm )
// int                            out_ArmorDamage                ( CPF_Parm | CPF_OutParm )

void ATGRealTank::HurtTank ( class AController* InstigatedBy, int* out_HealthDamage, int* out_ArmorDamage )
{
	static UFunction* pFnHurtTank = NULL;

	if ( ! pFnHurtTank )
		pFnHurtTank = (UFunction*) UObject::GObjObjects()->Data[ 216341 ];

	ATGRealTank_execHurtTank_Parms HurtTank_Parms;
	HurtTank_Parms.InstigatedBy = InstigatedBy;

	this->ProcessEvent ( pFnHurtTank, &HurtTank_Parms, NULL );

	if ( out_HealthDamage )
		*out_HealthDamage = HurtTank_Parms.out_HealthDamage;

	if ( out_ArmorDamage )
		*out_ArmorDamage = HurtTank_Parms.out_ArmorDamage;
};

// Function TGTankGame.TGRealTank.GetTankTarget
// [0x00020102] 
// Parameters infos:
// struct FTankTarget             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  HitTankGroup                   ( CPF_Parm )

struct FTankTarget ATGRealTank::GetTankTarget ( unsigned char HitTankGroup )
{
	static UFunction* pFnGetTankTarget = NULL;

	if ( ! pFnGetTankTarget )
		pFnGetTankTarget = (UFunction*) UObject::GObjObjects()->Data[ 216338 ];

	ATGRealTank_execGetTankTarget_Parms GetTankTarget_Parms;
	GetTankTarget_Parms.HitTankGroup = HitTankGroup;

	this->ProcessEvent ( pFnGetTankTarget, &GetTankTarget_Parms, NULL );

	return GetTankTarget_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.SwitchWeapon
// [0x00020102] 
// Parameters infos:
// unsigned char                  NewGroup                       ( CPF_Parm )

void ATGRealTank::SwitchWeapon ( unsigned char NewGroup )
{
	static UFunction* pFnSwitchWeapon = NULL;

	if ( ! pFnSwitchWeapon )
		pFnSwitchWeapon = (UFunction*) UObject::GObjObjects()->Data[ 216331 ];

	ATGRealTank_execSwitchWeapon_Parms SwitchWeapon_Parms;
	SwitchWeapon_Parms.NewGroup = NewGroup;

	this->ProcessEvent ( pFnSwitchWeapon, &SwitchWeapon_Parms, NULL );
};

// Function TGTankGame.TGRealTank.StartFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGRealTank::StartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 216329 ];

	ATGRealTank_execStartFire_Parms StartFire_Parms;
	StartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function TGTankGame.TGRealTank.GetWeaponAim
// [0x00820002] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AUTVehicleWeapon*        VWeapon                        ( CPF_Parm )

struct FRotator ATGRealTank::GetWeaponAim ( class AUTVehicleWeapon* VWeapon )
{
	static UFunction* pFnGetWeaponAim = NULL;

	if ( ! pFnGetWeaponAim )
		pFnGetWeaponAim = (UFunction*) UObject::GObjObjects()->Data[ 216321 ];

	ATGRealTank_execGetWeaponAim_Parms GetWeaponAim_Parms;
	GetWeaponAim_Parms.VWeapon = VWeapon;

	this->ProcessEvent ( pFnGetWeaponAim, &GetWeaponAim_Parms, NULL );

	return GetWeaponAim_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.SwitchToLastUsedWeapon
// [0x00020102] 
// Parameters infos:

void ATGRealTank::SwitchToLastUsedWeapon ( )
{
	static UFunction* pFnSwitchToLastUsedWeapon = NULL;

	if ( ! pFnSwitchToLastUsedWeapon )
		pFnSwitchToLastUsedWeapon = (UFunction*) UObject::GObjObjects()->Data[ 216319 ];

	ATGRealTank_execSwitchToLastUsedWeapon_Parms SwitchToLastUsedWeapon_Parms;

	this->ProcessEvent ( pFnSwitchToLastUsedWeapon, &SwitchToLastUsedWeapon_Parms, NULL );
};

// Function TGTankGame.TGRealTank.GetPhysicalFireStartLoc
// [0x00020102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AUTWeapon*               ForWeapon                      ( CPF_Parm )

struct FVector ATGRealTank::GetPhysicalFireStartLoc ( class AUTWeapon* ForWeapon )
{
	static UFunction* pFnGetPhysicalFireStartLoc = NULL;

	if ( ! pFnGetPhysicalFireStartLoc )
		pFnGetPhysicalFireStartLoc = (UFunction*) UObject::GObjObjects()->Data[ 216316 ];

	ATGRealTank_execGetPhysicalFireStartLoc_Parms GetPhysicalFireStartLoc_Parms;
	GetPhysicalFireStartLoc_Parms.ForWeapon = ForWeapon;

	this->ProcessEvent ( pFnGetPhysicalFireStartLoc, &GetPhysicalFireStartLoc_Parms, NULL );

	return GetPhysicalFireStartLoc_Parms.ReturnValue;
};

// Function TGTankGame.TGRealTank.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGRealTank::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 216313 ];

	ATGRealTank_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGTankGame.TGRealTank.TriggerVehicleEffect
// [0x00020102] 
// Parameters infos:
// struct FName                   EventTag                       ( CPF_Parm )

void ATGRealTank::TriggerVehicleEffect ( struct FName EventTag )
{
	static UFunction* pFnTriggerVehicleEffect = NULL;

	if ( ! pFnTriggerVehicleEffect )
		pFnTriggerVehicleEffect = (UFunction*) UObject::GObjObjects()->Data[ 216310 ];

	ATGRealTank_execTriggerVehicleEffect_Parms TriggerVehicleEffect_Parms;
	memcpy ( &TriggerVehicleEffect_Parms.EventTag, &EventTag, 0x8 );

	this->ProcessEvent ( pFnTriggerVehicleEffect, &TriggerVehicleEffect_Parms, NULL );
};

// Function TGTankGame.TGRealTank.UpdateVehicleEffectFloatParam
// [0x00020102] 
// Parameters infos:
// struct FName                   EffectStartTag                 ( CPF_Parm )
// struct FName                   ParamName                      ( CPF_Parm )
// float                          Param                          ( CPF_Parm )

void ATGRealTank::UpdateVehicleEffectFloatParam ( struct FName EffectStartTag, struct FName ParamName, float Param )
{
	static UFunction* pFnUpdateVehicleEffectFloatParam = NULL;

	if ( ! pFnUpdateVehicleEffectFloatParam )
		pFnUpdateVehicleEffectFloatParam = (UFunction*) UObject::GObjObjects()->Data[ 216305 ];

	ATGRealTank_execUpdateVehicleEffectFloatParam_Parms UpdateVehicleEffectFloatParam_Parms;
	memcpy ( &UpdateVehicleEffectFloatParam_Parms.EffectStartTag, &EffectStartTag, 0x8 );
	memcpy ( &UpdateVehicleEffectFloatParam_Parms.ParamName, &ParamName, 0x8 );
	UpdateVehicleEffectFloatParam_Parms.Param = Param;

	this->ProcessEvent ( pFnUpdateVehicleEffectFloatParam, &UpdateVehicleEffectFloatParam_Parms, NULL );
};

// Function TGTankGame.TGRealTank.InitializeTurrets
// [0x00820102] 
// Parameters infos:

void ATGRealTank::InitializeTurrets ( )
{
	static UFunction* pFnInitializeTurrets = NULL;

	if ( ! pFnInitializeTurrets )
		pFnInitializeTurrets = (UFunction*) UObject::GObjObjects()->Data[ 216299 ];

	ATGRealTank_execInitializeTurrets_Parms InitializeTurrets_Parms;

	this->ProcessEvent ( pFnInitializeTurrets, &InitializeTurrets_Parms, NULL );
};

// Function TGTankGame.TGRealTank.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGRealTank::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 216296 ];

	ATGRealTank_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGTankGame.TGRealTank.PreBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGRealTank::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 216294 ];

	ATGRealTank_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function TGTankGame.TGTankHUD.SetShellBarEffects
// [0x00020002] 
// Parameters infos:
// unsigned char                  ShellType                      ( CPF_Parm )

void UTGTankHUD::SetShellBarEffects ( unsigned char ShellType )
{
	static UFunction* pFnSetShellBarEffects = NULL;

	if ( ! pFnSetShellBarEffects )
		pFnSetShellBarEffects = (UFunction*) UObject::GObjObjects()->Data[ 218081 ];

	UTGTankHUD_execSetShellBarEffects_Parms SetShellBarEffects_Parms;
	SetShellBarEffects_Parms.ShellType = ShellType;

	this->ProcessEvent ( pFnSetShellBarEffects, &SetShellBarEffects_Parms, NULL );
};

// Function TGTankGame.TGTankHUD.DisplayWeaponBar
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )

void UTGTankHUD::eventDisplayWeaponBar ( class ATGHUD* HUD )
{
	static UFunction* pFnDisplayWeaponBar = NULL;

	if ( ! pFnDisplayWeaponBar )
		pFnDisplayWeaponBar = (UFunction*) UObject::GObjObjects()->Data[ 218064 ];

	UTGTankHUD_eventDisplayWeaponBar_Parms DisplayWeaponBar_Parms;
	DisplayWeaponBar_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDisplayWeaponBar, &DisplayWeaponBar_Parms, NULL );
};

// Function TGTankGame.TGTankHUD.DispalyFirstPersonImage
// [0x00020002] 
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )

void UTGTankHUD::DispalyFirstPersonImage ( class ATGHUD* HUD )
{
	static UFunction* pFnDispalyFirstPersonImage = NULL;

	if ( ! pFnDispalyFirstPersonImage )
		pFnDispalyFirstPersonImage = (UFunction*) UObject::GObjObjects()->Data[ 218062 ];

	UTGTankHUD_execDispalyFirstPersonImage_Parms DispalyFirstPersonImage_Parms;
	DispalyFirstPersonImage_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDispalyFirstPersonImage, &DispalyFirstPersonImage_Parms, NULL );
};

// Function TGTankGame.TGTankHUD.DisplayNavigator
// [0x00820002] 
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )

void UTGTankHUD::DisplayNavigator ( class ATGHUD* HUD )
{
	static UFunction* pFnDisplayNavigator = NULL;

	if ( ! pFnDisplayNavigator )
		pFnDisplayNavigator = (UFunction*) UObject::GObjObjects()->Data[ 218053 ];

	UTGTankHUD_execDisplayNavigator_Parms DisplayNavigator_Parms;
	DisplayNavigator_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDisplayNavigator, &DisplayNavigator_Parms, NULL );
};

// Function TGTankGame.TGTankHUD.DrawCrosshairEnemyInfo
// [0x00020002] 
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )

void UTGTankHUD::DrawCrosshairEnemyInfo ( class ATGHUD* HUD )
{
	static UFunction* pFnDrawCrosshairEnemyInfo = NULL;

	if ( ! pFnDrawCrosshairEnemyInfo )
		pFnDrawCrosshairEnemyInfo = (UFunction*) UObject::GObjObjects()->Data[ 218044 ];

	UTGTankHUD_execDrawCrosshairEnemyInfo_Parms DrawCrosshairEnemyInfo_Parms;
	DrawCrosshairEnemyInfo_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawCrosshairEnemyInfo, &DrawCrosshairEnemyInfo_Parms, NULL );
};

// Function TGTankGame.TGTankHUD.DrawAmmoReload
// [0x00820002] 
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )

void UTGTankHUD::DrawAmmoReload ( class ATGHUD* HUD )
{
	static UFunction* pFnDrawAmmoReload = NULL;

	if ( ! pFnDrawAmmoReload )
		pFnDrawAmmoReload = (UFunction*) UObject::GObjObjects()->Data[ 218026 ];

	UTGTankHUD_execDrawAmmoReload_Parms DrawAmmoReload_Parms;
	DrawAmmoReload_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawAmmoReload, &DrawAmmoReload_Parms, NULL );
};

// Function TGTankGame.TGTankHUD.DrawCircleCrosshair
// [0x00820002] 
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )

void UTGTankHUD::DrawCircleCrosshair ( class ATGHUD* HUD )
{
	static UFunction* pFnDrawCircleCrosshair = NULL;

	if ( ! pFnDrawCircleCrosshair )
		pFnDrawCircleCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 217994 ];

	UTGTankHUD_execDrawCircleCrosshair_Parms DrawCircleCrosshair_Parms;
	DrawCircleCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawCircleCrosshair, &DrawCircleCrosshair_Parms, NULL );
};

// Function TGTankGame.TGTankHUD.GetFireShockOffset
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UTGTankHUD::GetFireShockOffset ( )
{
	static UFunction* pFnGetFireShockOffset = NULL;

	if ( ! pFnGetFireShockOffset )
		pFnGetFireShockOffset = (UFunction*) UObject::GObjObjects()->Data[ 217992 ];

	UTGTankHUD_execGetFireShockOffset_Parms GetFireShockOffset_Parms;

	this->ProcessEvent ( pFnGetFireShockOffset, &GetFireShockOffset_Parms, NULL );

	return GetFireShockOffset_Parms.ReturnValue;
};

// Function TGTankGame.TGTankHUD.GetInCorrectAimOffset
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UTGTankHUD::GetInCorrectAimOffset ( )
{
	static UFunction* pFnGetInCorrectAimOffset = NULL;

	if ( ! pFnGetInCorrectAimOffset )
		pFnGetInCorrectAimOffset = (UFunction*) UObject::GObjObjects()->Data[ 217990 ];

	UTGTankHUD_execGetInCorrectAimOffset_Parms GetInCorrectAimOffset_Parms;

	this->ProcessEvent ( pFnGetInCorrectAimOffset, &GetInCorrectAimOffset_Parms, NULL );

	return GetInCorrectAimOffset_Parms.ReturnValue;
};

// Function TGTankGame.TGTankHUD.GetCrossHairShockOffset
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UTGTankHUD::GetCrossHairShockOffset ( )
{
	static UFunction* pFnGetCrossHairShockOffset = NULL;

	if ( ! pFnGetCrossHairShockOffset )
		pFnGetCrossHairShockOffset = (UFunction*) UObject::GObjObjects()->Data[ 217987 ];

	UTGTankHUD_execGetCrossHairShockOffset_Parms GetCrossHairShockOffset_Parms;

	this->ProcessEvent ( pFnGetCrossHairShockOffset, &GetCrossHairShockOffset_Parms, NULL );

	return GetCrossHairShockOffset_Parms.ReturnValue;
};

// Function TGTankGame.TGTankHUD.DisplayCentralHUD
// [0x00820002] 
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )

void UTGTankHUD::DisplayCentralHUD ( class ATGHUD* HUD )
{
	static UFunction* pFnDisplayCentralHUD = NULL;

	if ( ! pFnDisplayCentralHUD )
		pFnDisplayCentralHUD = (UFunction*) UObject::GObjObjects()->Data[ 217979 ];

	UTGTankHUD_execDisplayCentralHUD_Parms DisplayCentralHUD_Parms;
	DisplayCentralHUD_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDisplayCentralHUD, &DisplayCentralHUD_Parms, NULL );
};

// Function TGTankGame.TGTankHUD.NotifyTakeDamage
// [0x00820002] 
// Parameters infos:
// unsigned char                  HitGroup                       ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// int                            Armor                          ( CPF_Parm )

void UTGTankHUD::NotifyTakeDamage ( unsigned char HitGroup, int Damage, int Armor )
{
	static UFunction* pFnNotifyTakeDamage = NULL;

	if ( ! pFnNotifyTakeDamage )
		pFnNotifyTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 217962 ];

	UTGTankHUD_execNotifyTakeDamage_Parms NotifyTakeDamage_Parms;
	NotifyTakeDamage_Parms.HitGroup = HitGroup;
	NotifyTakeDamage_Parms.Damage = Damage;
	NotifyTakeDamage_Parms.Armor = Armor;

	this->ProcessEvent ( pFnNotifyTakeDamage, &NotifyTakeDamage_Parms, NULL );
};

// Function TGTankGame.TGTankHUD.SwitchRevertWarning
// [0x00020002] 
// Parameters infos:

void UTGTankHUD::SwitchRevertWarning ( )
{
	static UFunction* pFnSwitchRevertWarning = NULL;

	if ( ! pFnSwitchRevertWarning )
		pFnSwitchRevertWarning = (UFunction*) UObject::GObjObjects()->Data[ 217961 ];

	UTGTankHUD_execSwitchRevertWarning_Parms SwitchRevertWarning_Parms;

	this->ProcessEvent ( pFnSwitchRevertWarning, &SwitchRevertWarning_Parms, NULL );
};

// Function TGTankGame.TGTankHUD.DrawTankIcon
// [0x00020002] 
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )
// struct FRotator                Rot                            ( CPF_Parm )
// struct FVector2D               CenterPos                      ( CPF_Parm )

void UTGTankHUD::DrawTankIcon ( class ATGHUD* HUD, struct FRotator Rot, struct FVector2D CenterPos )
{
	static UFunction* pFnDrawTankIcon = NULL;

	if ( ! pFnDrawTankIcon )
		pFnDrawTankIcon = (UFunction*) UObject::GObjObjects()->Data[ 217951 ];

	UTGTankHUD_execDrawTankIcon_Parms DrawTankIcon_Parms;
	DrawTankIcon_Parms.HUD = HUD;
	memcpy ( &DrawTankIcon_Parms.Rot, &Rot, 0xC );
	memcpy ( &DrawTankIcon_Parms.CenterPos, &CenterPos, 0x8 );

	this->ProcessEvent ( pFnDrawTankIcon, &DrawTankIcon_Parms, NULL );
};

// Function TGTankGame.TGTankHUD.DisplayDashboard
// [0x00820002] 
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )

void UTGTankHUD::DisplayDashboard ( class ATGHUD* HUD )
{
	static UFunction* pFnDisplayDashboard = NULL;

	if ( ! pFnDisplayDashboard )
		pFnDisplayDashboard = (UFunction*) UObject::GObjObjects()->Data[ 217937 ];

	UTGTankHUD_execDisplayDashboard_Parms DisplayDashboard_Parms;
	DisplayDashboard_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDisplayDashboard, &DisplayDashboard_Parms, NULL );
};

// Function TGTankGame.TGTankHUD.DisplayThirdPersonHUD
// [0x00020002] 
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )

void UTGTankHUD::DisplayThirdPersonHUD ( class ATGHUD* HUD )
{
	static UFunction* pFnDisplayThirdPersonHUD = NULL;

	if ( ! pFnDisplayThirdPersonHUD )
		pFnDisplayThirdPersonHUD = (UFunction*) UObject::GObjObjects()->Data[ 217935 ];

	UTGTankHUD_execDisplayThirdPersonHUD_Parms DisplayThirdPersonHUD_Parms;
	DisplayThirdPersonHUD_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDisplayThirdPersonHUD, &DisplayThirdPersonHUD_Parms, NULL );
};

// Function TGTankGame.TGTankHUD.DisplayFirstPersonHUD
// [0x00020002] 
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )

void UTGTankHUD::DisplayFirstPersonHUD ( class ATGHUD* HUD )
{
	static UFunction* pFnDisplayFirstPersonHUD = NULL;

	if ( ! pFnDisplayFirstPersonHUD )
		pFnDisplayFirstPersonHUD = (UFunction*) UObject::GObjObjects()->Data[ 217933 ];

	UTGTankHUD_execDisplayFirstPersonHUD_Parms DisplayFirstPersonHUD_Parms;
	DisplayFirstPersonHUD_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDisplayFirstPersonHUD, &DisplayFirstPersonHUD_Parms, NULL );
};

// Function TGTankGame.TGTankHUD.DisplayHud
// [0x00020002] 
// Parameters infos:
// class AUTHUD*                  HUD                            ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UTGTankHUD::DisplayHud ( class AUTHUD* HUD, class UCanvas* Canvas )
{
	static UFunction* pFnDisplayHud = NULL;

	if ( ! pFnDisplayHud )
		pFnDisplayHud = (UFunction*) UObject::GObjObjects()->Data[ 217929 ];

	UTGTankHUD_execDisplayHud_Parms DisplayHud_Parms;
	DisplayHud_Parms.HUD = HUD;
	DisplayHud_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDisplayHud, &DisplayHud_Parms, NULL );
};

// Function TGTankGame.TGTankHUD.Initialize
// [0x00020002] 
// Parameters infos:

void UTGTankHUD::Initialize ( )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 217928 ];

	UTGTankHUD_execInitialize_Parms Initialize_Parms;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};

// Function TGTankGame.TGTankAmmoBox.GetBestSwitchShell
// [0x00020102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char ATGTankAmmoBox::GetBestSwitchShell ( )
{
	static UFunction* pFnGetBestSwitchShell = NULL;

	if ( ! pFnGetBestSwitchShell )
		pFnGetBestSwitchShell = (UFunction*) UObject::GObjObjects()->Data[ 216956 ];

	ATGTankAmmoBox_execGetBestSwitchShell_Parms GetBestSwitchShell_Parms;

	this->ProcessEvent ( pFnGetBestSwitchShell, &GetBestSwitchShell_Parms, NULL );

	return GetBestSwitchShell_Parms.ReturnValue;
};

// Function TGTankGame.TGTankAmmoBox.AddAmmo
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Amount                         ( CPF_Parm )
// unsigned char                  CurrShellType                  ( CPF_Parm )

int ATGTankAmmoBox::AddAmmo ( int Amount, unsigned char CurrShellType )
{
	static UFunction* pFnAddAmmo = NULL;

	if ( ! pFnAddAmmo )
		pFnAddAmmo = (UFunction*) UObject::GObjObjects()->Data[ 216952 ];

	ATGTankAmmoBox_execAddAmmo_Parms AddAmmo_Parms;
	AddAmmo_Parms.Amount = Amount;
	AddAmmo_Parms.CurrShellType = CurrShellType;

	this->ProcessEvent ( pFnAddAmmo, &AddAmmo_Parms, NULL );

	return AddAmmo_Parms.ReturnValue;
};

// Function TGTankGame.TGTankAmmoBox.GetTankShellCount
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  CurrShellType                  ( CPF_Parm )

int ATGTankAmmoBox::GetTankShellCount ( unsigned char CurrShellType )
{
	static UFunction* pFnGetTankShellCount = NULL;

	if ( ! pFnGetTankShellCount )
		pFnGetTankShellCount = (UFunction*) UObject::GObjObjects()->Data[ 216336 ];

	ATGTankAmmoBox_execGetTankShellCount_Parms GetTankShellCount_Parms;
	GetTankShellCount_Parms.CurrShellType = CurrShellType;

	this->ProcessEvent ( pFnGetTankShellCount, &GetTankShellCount_Parms, NULL );

	return GetTankShellCount_Parms.ReturnValue;
};

// Function TGTankGame.TGTankAmmoBox.GetTankShellClass
// [0x00020102] 
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  CurrShellType                  ( CPF_Parm )

class UClass* ATGTankAmmoBox::GetTankShellClass ( unsigned char CurrShellType )
{
	static UFunction* pFnGetTankShellClass = NULL;

	if ( ! pFnGetTankShellClass )
		pFnGetTankShellClass = (UFunction*) UObject::GObjObjects()->Data[ 216948 ];

	ATGTankAmmoBox_execGetTankShellClass_Parms GetTankShellClass_Parms;
	GetTankShellClass_Parms.CurrShellType = CurrShellType;

	this->ProcessEvent ( pFnGetTankShellClass, &GetTankShellClass_Parms, NULL );

	return GetTankShellClass_Parms.ReturnValue;
};

// Function TGTankGame.TGTankTeamMatch.CalcAchiWhenKill
// [0x00020002] 
// Parameters infos:
// class ATGTankTMPlayerReplicationInfo* Killer                         ( CPF_Parm )
// class ATGTankTMPlayerReplicationInfo* Killed                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void ATGTankTeamMatch::CalcAchiWhenKill ( class ATGTankTMPlayerReplicationInfo* Killer, class ATGTankTMPlayerReplicationInfo* Killed, class UClass* DamageType )
{
	static UFunction* pFnCalcAchiWhenKill = NULL;

	if ( ! pFnCalcAchiWhenKill )
		pFnCalcAchiWhenKill = (UFunction*) UObject::GObjObjects()->Data[ 217322 ];

	ATGTankTeamMatch_execCalcAchiWhenKill_Parms CalcAchiWhenKill_Parms;
	CalcAchiWhenKill_Parms.Killer = Killer;
	CalcAchiWhenKill_Parms.Killed = Killed;
	CalcAchiWhenKill_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnCalcAchiWhenKill, &CalcAchiWhenKill_Parms, NULL );
};

// Function TGTankGame.TGTankTeamMatch.CalcMVP
// [0x00020002] 
// Parameters infos:

void ATGTankTeamMatch::CalcMVP ( )
{
	static UFunction* pFnCalcMVP = NULL;

	if ( ! pFnCalcMVP )
		pFnCalcMVP = (UFunction*) UObject::GObjObjects()->Data[ 217314 ];

	ATGTankTeamMatch_execCalcMVP_Parms CalcMVP_Parms;

	this->ProcessEvent ( pFnCalcMVP, &CalcMVP_Parms, NULL );
};

// Function TGTankGame.TGTankTeamMatch.CalcACE
// [0x00020002] 
// Parameters infos:

void ATGTankTeamMatch::CalcACE ( )
{
	static UFunction* pFnCalcACE = NULL;

	if ( ! pFnCalcACE )
		pFnCalcACE = (UFunction*) UObject::GObjObjects()->Data[ 217307 ];

	ATGTankTeamMatch_execCalcACE_Parms CalcACE_Parms;

	this->ProcessEvent ( pFnCalcACE, &CalcACE_Parms, NULL );
};

// Function TGTankGame.TGTankTeamMatch.EndGame
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  Winner                         ( CPF_Parm )
// struct FString                 Reason                         ( CPF_Parm | CPF_NeedCtorLink )

void ATGTankTeamMatch::EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
{
	static UFunction* pFnEndGame = NULL;

	if ( ! pFnEndGame )
		pFnEndGame = (UFunction*) UObject::GObjObjects()->Data[ 217304 ];

	ATGTankTeamMatch_execEndGame_Parms EndGame_Parms;
	EndGame_Parms.Winner = Winner;
	memcpy ( &EndGame_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnEndGame, &EndGame_Parms, NULL );
};

// Function TGTankGame.TGTankTeamMatch.StartMatch
// [0x00020002] 
// Parameters infos:

void ATGTankTeamMatch::StartMatch ( )
{
	static UFunction* pFnStartMatch = NULL;

	if ( ! pFnStartMatch )
		pFnStartMatch = (UFunction*) UObject::GObjObjects()->Data[ 217303 ];

	ATGTankTeamMatch_execStartMatch_Parms StartMatch_Parms;

	this->ProcessEvent ( pFnStartMatch, &StartMatch_Parms, NULL );
};

// Function TGTankGame.TGTankTeamMatch.ChoosePickupFactory
// [0x00020002] 
// Parameters infos:

void ATGTankTeamMatch::ChoosePickupFactory ( )
{
	static UFunction* pFnChoosePickupFactory = NULL;

	if ( ! pFnChoosePickupFactory )
		pFnChoosePickupFactory = (UFunction*) UObject::GObjObjects()->Data[ 217300 ];

	ATGTankTeamMatch_execChoosePickupFactory_Parms ChoosePickupFactory_Parms;

	this->ProcessEvent ( pFnChoosePickupFactory, &ChoosePickupFactory_Parms, NULL );
};

// Function TGTankGame.TGTankTeamMatch.CheckAssistant
// [0x00020002] 
// Parameters infos:
// class ATGRealTank*             KilledTank                     ( CPF_Parm )
// class ATGTankTMPlayerReplicationInfo* KillerPRI                      ( CPF_Parm )

void ATGTankTeamMatch::CheckAssistant ( class ATGRealTank* KilledTank, class ATGTankTMPlayerReplicationInfo* KillerPRI )
{
	static UFunction* pFnCheckAssistant = NULL;

	if ( ! pFnCheckAssistant )
		pFnCheckAssistant = (UFunction*) UObject::GObjObjects()->Data[ 217292 ];

	ATGTankTeamMatch_execCheckAssistant_Parms CheckAssistant_Parms;
	CheckAssistant_Parms.KilledTank = KilledTank;
	CheckAssistant_Parms.KillerPRI = KillerPRI;

	this->ProcessEvent ( pFnCheckAssistant, &CheckAssistant_Parms, NULL );
};

// Function TGTankGame.TGTankTeamMatch.Killed
// [0x00020002] 
// Parameters infos:
// class AController*             Killer                         ( CPF_Parm )
// class AController*             KilledPlayer                   ( CPF_Parm )
// class APawn*                   KilledPawn                     ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void ATGTankTeamMatch::Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType )
{
	static UFunction* pFnKilled = NULL;

	if ( ! pFnKilled )
		pFnKilled = (UFunction*) UObject::GObjObjects()->Data[ 217283 ];

	ATGTankTeamMatch_execKilled_Parms Killed_Parms;
	Killed_Parms.Killer = Killer;
	Killed_Parms.KilledPlayer = KilledPlayer;
	Killed_Parms.KilledPawn = KilledPawn;
	Killed_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnKilled, &Killed_Parms, NULL );
};

// Function TGTankGame.TGTankTeamMatch.CheckEndGame
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerReplicationInfo*  Winner                         ( CPF_Parm )
// struct FString                 Reason                         ( CPF_Parm | CPF_NeedCtorLink )

bool ATGTankTeamMatch::CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
{
	static UFunction* pFnCheckEndGame = NULL;

	if ( ! pFnCheckEndGame )
		pFnCheckEndGame = (UFunction*) UObject::GObjObjects()->Data[ 217277 ];

	ATGTankTeamMatch_execCheckEndGame_Parms CheckEndGame_Parms;
	CheckEndGame_Parms.Winner = Winner;
	memcpy ( &CheckEndGame_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCheckEndGame, &CheckEndGame_Parms, NULL );

	return CheckEndGame_Parms.ReturnValue;
};

// Function TGTankGame.TGTankTeamMatch.RestartPlayer
// [0x00020002] 
// Parameters infos:
// class AController*             NewPlayer                      ( CPF_Parm )

void ATGTankTeamMatch::RestartPlayer ( class AController* NewPlayer )
{
	static UFunction* pFnRestartPlayer = NULL;

	if ( ! pFnRestartPlayer )
		pFnRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 217274 ];

	ATGTankTeamMatch_execRestartPlayer_Parms RestartPlayer_Parms;
	RestartPlayer_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnRestartPlayer, &RestartPlayer_Parms, NULL );
};

// Function TGTankGame.TGTankTeamMatch.SpawnDefaultPawnFor
// [0x00020002] 
// Parameters infos:
// class APawn*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             NewPlayer                      ( CPF_Parm )
// class ANavigationPoint*        StartSpot                      ( CPF_Parm )

class APawn* ATGTankTeamMatch::SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot )
{
	static UFunction* pFnSpawnDefaultPawnFor = NULL;

	if ( ! pFnSpawnDefaultPawnFor )
		pFnSpawnDefaultPawnFor = (UFunction*) UObject::GObjObjects()->Data[ 217270 ];

	ATGTankTeamMatch_execSpawnDefaultPawnFor_Parms SpawnDefaultPawnFor_Parms;
	SpawnDefaultPawnFor_Parms.NewPlayer = NewPlayer;
	SpawnDefaultPawnFor_Parms.StartSpot = StartSpot;

	this->ProcessEvent ( pFnSpawnDefaultPawnFor, &SpawnDefaultPawnFor_Parms, NULL );

	return SpawnDefaultPawnFor_Parms.ReturnValue;
};

// Function TGTankGame.TGTankTeamMatch.AddInventoryFor
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class APawn*                   PlayerPawn                     ( CPF_Parm )

void ATGTankTeamMatch::eventAddInventoryFor ( class APawn* PlayerPawn )
{
	static UFunction* pFnAddInventoryFor = NULL;

	if ( ! pFnAddInventoryFor )
		pFnAddInventoryFor = (UFunction*) UObject::GObjObjects()->Data[ 217268 ];

	ATGTankTeamMatch_eventAddInventoryFor_Parms AddInventoryFor_Parms;
	AddInventoryFor_Parms.PlayerPawn = PlayerPawn;

	this->ProcessEvent ( pFnAddInventoryFor, &AddInventoryFor_Parms, NULL );
};

// Function TGTankGame.TGTankTeamMatch.UpdateGameSpecificSettings
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FGameSpecificSettings   Settings                       ( CPF_Parm )

void ATGTankTeamMatch::eventUpdateGameSpecificSettings ( struct FGameSpecificSettings Settings )
{
	static UFunction* pFnUpdateGameSpecificSettings = NULL;

	if ( ! pFnUpdateGameSpecificSettings )
		pFnUpdateGameSpecificSettings = (UFunction*) UObject::GObjObjects()->Data[ 217266 ];

	ATGTankTeamMatch_eventUpdateGameSpecificSettings_Parms UpdateGameSpecificSettings_Parms;
	memcpy ( &UpdateGameSpecificSettings_Parms.Settings, &Settings, 0x28 );

	this->ProcessEvent ( pFnUpdateGameSpecificSettings, &UpdateGameSpecificSettings_Parms, NULL );
};

// Function TGTankGame.TGTankTeamMatch.PostBeginPlay
// [0x00820002] 
// Parameters infos:

void ATGTankTeamMatch::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 217261 ];

	ATGTankTeamMatch_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerInput.SwitchToLastUsedWeapon
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTGTankTMPlayerInput::SwitchToLastUsedWeapon ( )
{
	static UFunction* pFnSwitchToLastUsedWeapon = NULL;

	if ( ! pFnSwitchToLastUsedWeapon )
		pFnSwitchToLastUsedWeapon = (UFunction*) UObject::GObjObjects()->Data[ 218629 ];

	UTGTankTMPlayerInput_execSwitchToLastUsedWeapon_Parms SwitchToLastUsedWeapon_Parms;

	this->ProcessEvent ( pFnSwitchToLastUsedWeapon, &SwitchToLastUsedWeapon_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerInput.SwitchWeapon
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// unsigned char                  F                              ( CPF_Parm )

void UTGTankTMPlayerInput::SwitchWeapon ( unsigned char F )
{
	static UFunction* pFnSwitchWeapon = NULL;

	if ( ! pFnSwitchWeapon )
		pFnSwitchWeapon = (UFunction*) UObject::GObjObjects()->Data[ 218627 ];

	UTGTankTMPlayerInput_execSwitchWeapon_Parms SwitchWeapon_Parms;
	SwitchWeapon_Parms.F = F;

	this->ProcessEvent ( pFnSwitchWeapon, &SwitchWeapon_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerInput.SwitchTank
// [0x00020002] 
// Parameters infos:
// unsigned char                  F                              ( CPF_Parm )

void UTGTankTMPlayerInput::SwitchTank ( unsigned char F )
{
	static UFunction* pFnSwitchTank = NULL;

	if ( ! pFnSwitchTank )
		pFnSwitchTank = (UFunction*) UObject::GObjObjects()->Data[ 218622 ];

	UTGTankTMPlayerInput_execSwitchTank_Parms SwitchTank_Parms;
	SwitchTank_Parms.F = F;

	this->ProcessEvent ( pFnSwitchTank, &SwitchTank_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerInput.GotoTopView
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTGTankTMPlayerInput::GotoTopView ( )
{
	static UFunction* pFnGotoTopView = NULL;

	if ( ! pFnGotoTopView )
		pFnGotoTopView = (UFunction*) UObject::GObjObjects()->Data[ 218621 ];

	UTGTankTMPlayerInput_execGotoTopView_Parms GotoTopView_Parms;

	this->ProcessEvent ( pFnGotoTopView, &GotoTopView_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerInput.GotoAlwaysSpectating
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTGTankTMPlayerInput::GotoAlwaysSpectating ( )
{
	static UFunction* pFnGotoAlwaysSpectating = NULL;

	if ( ! pFnGotoAlwaysSpectating )
		pFnGotoAlwaysSpectating = (UFunction*) UObject::GObjObjects()->Data[ 218620 ];

	UTGTankTMPlayerInput_execGotoAlwaysSpectating_Parms GotoAlwaysSpectating_Parms;

	this->ProcessEvent ( pFnGotoAlwaysSpectating, &GotoAlwaysSpectating_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerInput.ShowHelpMenu
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTGTankTMPlayerInput::ShowHelpMenu ( )
{
	static UFunction* pFnShowHelpMenu = NULL;

	if ( ! pFnShowHelpMenu )
		pFnShowHelpMenu = (UFunction*) UObject::GObjObjects()->Data[ 218619 ];

	UTGTankTMPlayerInput_execShowHelpMenu_Parms ShowHelpMenu_Parms;

	this->ProcessEvent ( pFnShowHelpMenu, &ShowHelpMenu_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerInput.PressFKey
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTGTankTMPlayerInput::PressFKey ( )
{
	static UFunction* pFnPressFKey = NULL;

	if ( ! pFnPressFKey )
		pFnPressFKey = (UFunction*) UObject::GObjObjects()->Data[ 218617 ];

	UTGTankTMPlayerInput_execPressFKey_Parms PressFKey_Parms;

	this->ProcessEvent ( pFnPressFKey, &PressFKey_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerInput.Jump
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTGTankTMPlayerInput::Jump ( )
{
	static UFunction* pFnJump = NULL;

	if ( ! pFnJump )
		pFnJump = (UFunction*) UObject::GObjObjects()->Data[ 218616 ];

	UTGTankTMPlayerInput_execJump_Parms Jump_Parms;

	this->ProcessEvent ( pFnJump, &Jump_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerInput.UnSnake
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTGTankTMPlayerInput::UnSnake ( )
{
	static UFunction* pFnUnSnake = NULL;

	if ( ! pFnUnSnake )
		pFnUnSnake = (UFunction*) UObject::GObjObjects()->Data[ 218615 ];

	UTGTankTMPlayerInput_execUnSnake_Parms UnSnake_Parms;

	this->ProcessEvent ( pFnUnSnake, &UnSnake_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerInput.Snake
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTGTankTMPlayerInput::Snake ( )
{
	static UFunction* pFnSnake = NULL;

	if ( ! pFnSnake )
		pFnSnake = (UFunction*) UObject::GObjObjects()->Data[ 218614 ];

	UTGTankTMPlayerInput_execSnake_Parms Snake_Parms;

	this->ProcessEvent ( pFnSnake, &Snake_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerInput.Use
// [0x00020200] ( FUNC_Exec )
// Parameters infos:

void UTGTankTMPlayerInput::Use ( )
{
	static UFunction* pFnUse = NULL;

	if ( ! pFnUse )
		pFnUse = (UFunction*) UObject::GObjObjects()->Data[ 218613 ];

	UTGTankTMPlayerInput_execUse_Parms Use_Parms;

	this->ProcessEvent ( pFnUse, &Use_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerInput.SwitchMoveMode
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTGTankTMPlayerInput::SwitchMoveMode ( )
{
	static UFunction* pFnSwitchMoveMode = NULL;

	if ( ! pFnSwitchMoveMode )
		pFnSwitchMoveMode = (UFunction*) UObject::GObjObjects()->Data[ 218612 ];

	UTGTankTMPlayerInput_execSwitchMoveMode_Parms SwitchMoveMode_Parms;

	this->ProcessEvent ( pFnSwitchMoveMode, &SwitchMoveMode_Parms, NULL );
};

// Function TGTankGame.TGTankTMPlayerInput.PressVKey
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTGTankTMPlayerInput::PressVKey ( )
{
	static UFunction* pFnPressVKey = NULL;

	if ( ! pFnPressVKey )
		pFnPressVKey = (UFunction*) UObject::GObjObjects()->Data[ 218610 ];

	UTGTankTMPlayerInput_execPressVKey_Parms PressVKey_Parms;

	this->ProcessEvent ( pFnPressVKey, &PressVKey_Parms, NULL );
};

// Function TGTankGame.TGTankPickupFactory.GetRadarIcon
// [0x00020102] 
// Parameters infos:
// class UTexture2D*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UTexture2D* ATGTankPickupFactory::GetRadarIcon ( )
{
	static UFunction* pFnGetRadarIcon = NULL;

	if ( ! pFnGetRadarIcon )
		pFnGetRadarIcon = (UFunction*) UObject::GObjObjects()->Data[ 218144 ];

	ATGTankPickupFactory_execGetRadarIcon_Parms GetRadarIcon_Parms;

	this->ProcessEvent ( pFnGetRadarIcon, &GetRadarIcon_Parms, NULL );

	return GetRadarIcon_Parms.ReturnValue;
};

// Function TGTankGame.TGTankPickupFactory.EnablePickup
// [0x00020002] 
// Parameters infos:

void ATGTankPickupFactory::EnablePickup ( )
{
	static UFunction* pFnEnablePickup = NULL;

	if ( ! pFnEnablePickup )
		pFnEnablePickup = (UFunction*) UObject::GObjObjects()->Data[ 218211 ];

	ATGTankPickupFactory_execEnablePickup_Parms EnablePickup_Parms;

	this->ProcessEvent ( pFnEnablePickup, &EnablePickup_Parms, NULL );
};

// Function TGTankGame.TGTankPickupFactory.ChooseNextPickupFactory
// [0x00020002] 
// Parameters infos:

void ATGTankPickupFactory::ChooseNextPickupFactory ( )
{
	static UFunction* pFnChooseNextPickupFactory = NULL;

	if ( ! pFnChooseNextPickupFactory )
		pFnChooseNextPickupFactory = (UFunction*) UObject::GObjObjects()->Data[ 218207 ];

	ATGTankPickupFactory_execChooseNextPickupFactory_Parms ChooseNextPickupFactory_Parms;

	this->ProcessEvent ( pFnChooseNextPickupFactory, &ChooseNextPickupFactory_Parms, NULL );
};

// Function TGTankGame.TGTankPickupFactory.SetPickupDisable
// [0x00020002] 
// Parameters infos:

void ATGTankPickupFactory::SetPickupDisable ( )
{
	static UFunction* pFnSetPickupDisable = NULL;

	if ( ! pFnSetPickupDisable )
		pFnSetPickupDisable = (UFunction*) UObject::GObjObjects()->Data[ 218205 ];

	ATGTankPickupFactory_execSetPickupDisable_Parms SetPickupDisable_Parms;

	this->ProcessEvent ( pFnSetPickupDisable, &SetPickupDisable_Parms, NULL );
};

// Function TGTankGame.TGTankPickupFactory.Reset
// [0x00020002] 
// Parameters infos:

void ATGTankPickupFactory::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 218204 ];

	ATGTankPickupFactory_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function TGTankGame.TGTankPickupFactory.ClearIconFlash
// [0x00020102] 
// Parameters infos:

void ATGTankPickupFactory::ClearIconFlash ( )
{
	static UFunction* pFnClearIconFlash = NULL;

	if ( ! pFnClearIconFlash )
		pFnClearIconFlash = (UFunction*) UObject::GObjObjects()->Data[ 218203 ];

	ATGTankPickupFactory_execClearIconFlash_Parms ClearIconFlash_Parms;

	this->ProcessEvent ( pFnClearIconFlash, &ClearIconFlash_Parms, NULL );
};

// Function TGTankGame.TGTankPickupFactory.FlashIcon
// [0x00020102] 
// Parameters infos:

void ATGTankPickupFactory::FlashIcon ( )
{
	static UFunction* pFnFlashIcon = NULL;

	if ( ! pFnFlashIcon )
		pFnFlashIcon = (UFunction*) UObject::GObjObjects()->Data[ 218202 ];

	ATGTankPickupFactory_execFlashIcon_Parms FlashIcon_Parms;

	this->ProcessEvent ( pFnFlashIcon, &FlashIcon_Parms, NULL );
};

// Function TGTankGame.TGTankPickupFactory.SetInitialState
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGTankPickupFactory::eventSetInitialState ( )
{
	static UFunction* pFnSetInitialState = NULL;

	if ( ! pFnSetInitialState )
		pFnSetInitialState = (UFunction*) UObject::GObjObjects()->Data[ 218201 ];

	ATGTankPickupFactory_eventSetInitialState_Parms SetInitialState_Parms;

	this->ProcessEvent ( pFnSetInitialState, &SetInitialState_Parms, NULL );
};

// Function TGTankGame.TGTankPickupFactory.SetPickupMesh
// [0x00020100] 
// Parameters infos:

void ATGTankPickupFactory::SetPickupMesh ( )
{
	static UFunction* pFnSetPickupMesh = NULL;

	if ( ! pFnSetPickupMesh )
		pFnSetPickupMesh = (UFunction*) UObject::GObjObjects()->Data[ 218200 ];

	ATGTankPickupFactory_execSetPickupMesh_Parms SetPickupMesh_Parms;

	this->ProcessEvent ( pFnSetPickupMesh, &SetPickupMesh_Parms, NULL );
};

// Function TGTankGame.TGTankPickupFactory.SetPickupHidden
// [0x00020102] 
// Parameters infos:

void ATGTankPickupFactory::SetPickupHidden ( )
{
	static UFunction* pFnSetPickupHidden = NULL;

	if ( ! pFnSetPickupHidden )
		pFnSetPickupHidden = (UFunction*) UObject::GObjObjects()->Data[ 218199 ];

	ATGTankPickupFactory_execSetPickupHidden_Parms SetPickupHidden_Parms;

	this->ProcessEvent ( pFnSetPickupHidden, &SetPickupHidden_Parms, NULL );
};

// Function TGTankGame.TGTankPickupFactory.SetPickupVisible
// [0x00020102] 
// Parameters infos:

void ATGTankPickupFactory::SetPickupVisible ( )
{
	static UFunction* pFnSetPickupVisible = NULL;

	if ( ! pFnSetPickupVisible )
		pFnSetPickupVisible = (UFunction*) UObject::GObjObjects()->Data[ 218198 ];

	ATGTankPickupFactory_execSetPickupVisible_Parms SetPickupVisible_Parms;

	this->ProcessEvent ( pFnSetPickupVisible, &SetPickupVisible_Parms, NULL );
};

// Function TGTankGame.TGTankPickupFactory.InitializePickup
// [0x00020102] 
// Parameters infos:

void ATGTankPickupFactory::InitializePickup ( )
{
	static UFunction* pFnInitializePickup = NULL;

	if ( ! pFnInitializePickup )
		pFnInitializePickup = (UFunction*) UObject::GObjObjects()->Data[ 218197 ];

	ATGTankPickupFactory_execInitializePickup_Parms InitializePickup_Parms;

	this->ProcessEvent ( pFnInitializePickup, &InitializePickup_Parms, NULL );
};

// Function TGTankGame.TGTankPickupFactory.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGTankPickupFactory::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 218195 ];

	ATGTankPickupFactory_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGTankGame.TGTankProj_Shell.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGTankProj_Shell::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 218465 ];

	ATGTankProj_Shell_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGTankGame.TGTankProj_Shell.Destroyed
// [0x00020102] 
// Parameters infos:

void ATGTankProj_Shell::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 218464 ];

	ATGTankProj_Shell_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGTankGame.TGTankProj_Shell.HitWall
// [0x00020922] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGTankProj_Shell::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 218456 ];

	ATGTankProj_Shell_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function TGTankGame.TGTankProj_Shell.Explode
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGTankProj_Shell::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 218453 ];

	ATGTankProj_Shell_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function TGTankGame.TGTankProj_Shell.ClientSpawnExplosionEffects
// [0x00020102] 
// Parameters infos:

void ATGTankProj_Shell::ClientSpawnExplosionEffects ( )
{
	static UFunction* pFnClientSpawnExplosionEffects = NULL;

	if ( ! pFnClientSpawnExplosionEffects )
		pFnClientSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 218452 ];

	ATGTankProj_Shell_execClientSpawnExplosionEffects_Parms ClientSpawnExplosionEffects_Parms;

	this->ProcessEvent ( pFnClientSpawnExplosionEffects, &ClientSpawnExplosionEffects_Parms, NULL );
};

// Function TGTankGame.TGTankProj_Shell.SetTankHitInfo
// [0x00820102] 
// Parameters infos:
// class ATGRealTank*             Tank                           ( CPF_Parm )
// unsigned char                  TankHitGroup                   ( CPF_Parm )
// int                            TankHealthDamage               ( CPF_Parm )
// int                            TankArmorDamage                ( CPF_Parm )

void ATGTankProj_Shell::SetTankHitInfo ( class ATGRealTank* Tank, unsigned char TankHitGroup, int TankHealthDamage, int TankArmorDamage )
{
	static UFunction* pFnSetTankHitInfo = NULL;

	if ( ! pFnSetTankHitInfo )
		pFnSetTankHitInfo = (UFunction*) UObject::GObjObjects()->Data[ 218445 ];

	ATGTankProj_Shell_execSetTankHitInfo_Parms SetTankHitInfo_Parms;
	SetTankHitInfo_Parms.Tank = Tank;
	SetTankHitInfo_Parms.TankHitGroup = TankHitGroup;
	SetTankHitInfo_Parms.TankHealthDamage = TankHealthDamage;
	SetTankHitInfo_Parms.TankArmorDamage = TankArmorDamage;

	this->ProcessEvent ( pFnSetTankHitInfo, &SetTankHitInfo_Parms, NULL );
};

// Function TGTankGame.TGTankProj_Shell.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGTankProj_Shell::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 218430 ];

	ATGTankProj_Shell_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function TGTankGame.TGTankProj_Shell.GetTankShellExplosionEffect
// [0x00020102] 
// Parameters infos:
// struct FMaterialImpactEffect   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class UPhysicalMaterial*       HitMaterial                    ( CPF_Parm )

struct FMaterialImpactEffect ATGTankProj_Shell::GetTankShellExplosionEffect ( class UPhysicalMaterial* HitMaterial )
{
	static UFunction* pFnGetTankShellExplosionEffect = NULL;

	if ( ! pFnGetTankShellExplosionEffect )
		pFnGetTankShellExplosionEffect = (UFunction*) UObject::GObjObjects()->Data[ 218425 ];

	ATGTankProj_Shell_execGetTankShellExplosionEffect_Parms GetTankShellExplosionEffect_Parms;
	GetTankShellExplosionEffect_Parms.HitMaterial = HitMaterial;

	this->ProcessEvent ( pFnGetTankShellExplosionEffect, &GetTankShellExplosionEffect_Parms, NULL );

	return GetTankShellExplosionEffect_Parms.ReturnValue;
};

// Function TGTankGame.TGTankProj_Shell.FindWeaponHitNormal
// [0x00420102] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 End                            ( CPF_Parm )
// struct FVector                 Start                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm | CPF_OutParm )
// struct FVector                 HitNormal                      ( CPF_Parm | CPF_OutParm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm | CPF_OutParm )

class AActor* ATGTankProj_Shell::FindWeaponHitNormal ( struct FVector End, struct FVector Start, struct FVector* HitLocation, struct FVector* HitNormal, struct FTraceHitInfo* HitInfo )
{
	static UFunction* pFnFindWeaponHitNormal = NULL;

	if ( ! pFnFindWeaponHitNormal )
		pFnFindWeaponHitNormal = (UFunction*) UObject::GObjObjects()->Data[ 218418 ];

	ATGTankProj_Shell_execFindWeaponHitNormal_Parms FindWeaponHitNormal_Parms;
	memcpy ( &FindWeaponHitNormal_Parms.End, &End, 0xC );
	memcpy ( &FindWeaponHitNormal_Parms.Start, &Start, 0xC );

	this->ProcessEvent ( pFnFindWeaponHitNormal, &FindWeaponHitNormal_Parms, NULL );

	if ( HitLocation )
		memcpy ( HitLocation, &FindWeaponHitNormal_Parms.HitLocation, 0xC );

	if ( HitNormal )
		memcpy ( HitNormal, &FindWeaponHitNormal_Parms.HitNormal, 0xC );

	if ( HitInfo )
		memcpy ( HitInfo, &FindWeaponHitNormal_Parms.HitInfo, 0x20 );

	return FindWeaponHitNormal_Parms.ReturnValue;
};

// Function TGTankGame.TGTankProj_Shell.PlayJettingSound
// [0x00084102] 
// Parameters infos:
// class UAudioComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USoundCue*               Sound                          ( CPF_Parm )
// class UAudioComponent*         AC                             ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )
// float                          FadeInTime                     ( CPF_OptionalParm | CPF_Parm )

class UAudioComponent* ATGTankProj_Shell::PlayJettingSound ( class USoundCue* Sound, class UAudioComponent* AC, float FadeInTime )
{
	static UFunction* pFnPlayJettingSound = NULL;

	if ( ! pFnPlayJettingSound )
		pFnPlayJettingSound = (UFunction*) UObject::GObjObjects()->Data[ 218412 ];

	ATGTankProj_Shell_execPlayJettingSound_Parms PlayJettingSound_Parms;
	PlayJettingSound_Parms.Sound = Sound;
	PlayJettingSound_Parms.AC = AC;
	PlayJettingSound_Parms.FadeInTime = FadeInTime;

	this->ProcessEvent ( pFnPlayJettingSound, &PlayJettingSound_Parms, NULL );

	return PlayJettingSound_Parms.ReturnValue;
};

// Function TGTankGame.TGTankProj_Shell.ProjectileHurtRadius
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGTankProj_Shell::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 218392 ];

	ATGTankProj_Shell_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function TGTankGame.TGTankProj_Shell.ProcessTouch
// [0x00820102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGTankProj_Shell::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 218381 ];

	ATGTankProj_Shell_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function TGTankGame.TGTankProj_Shell.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGTankProj_Shell::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 218380 ];

	ATGTankProj_Shell_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGTankGame.TGTankProj_Shell.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGTankProj_Shell::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 218378 ];

	ATGTankProj_Shell_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGTankGame.TGTankProj_Shell.OnShutdownTimer
// [0x00020102] 
// Parameters infos:

void ATGTankProj_Shell::OnShutdownTimer ( )
{
	static UFunction* pFnOnShutdownTimer = NULL;

	if ( ! pFnOnShutdownTimer )
		pFnOnShutdownTimer = (UFunction*) UObject::GObjObjects()->Data[ 218377 ];

	ATGTankProj_Shell_execOnShutdownTimer_Parms OnShutdownTimer_Parms;

	this->ProcessEvent ( pFnOnShutdownTimer, &OnShutdownTimer_Parms, NULL );
};

// Function TGTankGame.TGTankBodyHUD.Draw
// [0x00020002] 
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )
// struct FRotator                Rot                            ( CPF_Parm )
// struct FVector2D               CenterPos                      ( CPF_Parm )

void UTGTankBodyHUD::Draw ( class ATGHUD* HUD, struct FRotator Rot, struct FVector2D CenterPos )
{
	static UFunction* pFnDraw = NULL;

	if ( ! pFnDraw )
		pFnDraw = (UFunction*) UObject::GObjObjects()->Data[ 216976 ];

	UTGTankBodyHUD_execDraw_Parms Draw_Parms;
	Draw_Parms.HUD = HUD;
	memcpy ( &Draw_Parms.Rot, &Rot, 0xC );
	memcpy ( &Draw_Parms.CenterPos, &CenterPos, 0x8 );

	this->ProcessEvent ( pFnDraw, &Draw_Parms, NULL );
};

// Function TGTankGame.TGTankBodyHUD.Flash
// [0x00020002] 
// Parameters infos:

void UTGTankBodyHUD::Flash ( )
{
	static UFunction* pFnFlash = NULL;

	if ( ! pFnFlash )
		pFnFlash = (UFunction*) UObject::GObjObjects()->Data[ 216975 ];

	UTGTankBodyHUD_execFlash_Parms Flash_Parms;

	this->ProcessEvent ( pFnFlash, &Flash_Parms, NULL );
};

// Function TGTankGame.TGTankBodyHUD.EndFlashEffect
// [0x00020002] 
// Parameters infos:

void UTGTankBodyHUD::EndFlashEffect ( )
{
	static UFunction* pFnEndFlashEffect = NULL;

	if ( ! pFnEndFlashEffect )
		pFnEndFlashEffect = (UFunction*) UObject::GObjObjects()->Data[ 216974 ];

	UTGTankBodyHUD_execEndFlashEffect_Parms EndFlashEffect_Parms;

	this->ProcessEvent ( pFnEndFlashEffect, &EndFlashEffect_Parms, NULL );
};

// Function TGTankGame.TGTankBodyHUD.StartFlashEffect
// [0x00020002] 
// Parameters infos:

void UTGTankBodyHUD::StartFlashEffect ( )
{
	static UFunction* pFnStartFlashEffect = NULL;

	if ( ! pFnStartFlashEffect )
		pFnStartFlashEffect = (UFunction*) UObject::GObjObjects()->Data[ 216973 ];

	UTGTankBodyHUD_execStartFlashEffect_Parms StartFlashEffect_Parms;

	this->ProcessEvent ( pFnStartFlashEffect, &StartFlashEffect_Parms, NULL );
};

// Function TGTankGame.TGTankTMHUD.DebugFeedback
// [0x00024002] 
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// int                            MultiKillLevel                 ( CPF_OptionalParm | CPF_Parm )

void ATGTankTMHUD::DebugFeedback ( int Index, int MultiKillLevel )
{
	static UFunction* pFnDebugFeedback = NULL;

	if ( ! pFnDebugFeedback )
		pFnDebugFeedback = (UFunction*) UObject::GObjObjects()->Data[ 217162 ];

	ATGTankTMHUD_execDebugFeedback_Parms DebugFeedback_Parms;
	DebugFeedback_Parms.Index = Index;
	DebugFeedback_Parms.MultiKillLevel = MultiKillLevel;

	this->ProcessEvent ( pFnDebugFeedback, &DebugFeedback_Parms, NULL );
};

// Function TGTankGame.TGTankTMHUD.AddAssistantFeedback
// [0x00020002] 
// Parameters infos:

void ATGTankTMHUD::AddAssistantFeedback ( )
{
	static UFunction* pFnAddAssistantFeedback = NULL;

	if ( ! pFnAddAssistantFeedback )
		pFnAddAssistantFeedback = (UFunction*) UObject::GObjObjects()->Data[ 217161 ];

	ATGTankTMHUD_execAddAssistantFeedback_Parms AddAssistantFeedback_Parms;

	this->ProcessEvent ( pFnAddAssistantFeedback, &AddAssistantFeedback_Parms, NULL );
};

// Function TGTankGame.TGTankTMHUD.AddTankHitFeedback
// [0x00020002] 
// Parameters infos:
// unsigned char                  HitGroup                       ( CPF_Parm )

void ATGTankTMHUD::AddTankHitFeedback ( unsigned char HitGroup )
{
	static UFunction* pFnAddTankHitFeedback = NULL;

	if ( ! pFnAddTankHitFeedback )
		pFnAddTankHitFeedback = (UFunction*) UObject::GObjObjects()->Data[ 217158 ];

	ATGTankTMHUD_execAddTankHitFeedback_Parms AddTankHitFeedback_Parms;
	AddTankHitFeedback_Parms.HitGroup = HitGroup;

	this->ProcessEvent ( pFnAddTankHitFeedback, &AddTankHitFeedback_Parms, NULL );
};

// Function TGTankGame.TGTankTMHUD.AddKillFeedBackMessage
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

void ATGTankTMHUD::AddKillFeedBackMessage ( class UClass* DamageType, int MultiKillLevel, int Priority, unsigned long bUseInPriority, class APlayerReplicationInfo* KillerPRI, class APlayerReplicationInfo* KilledPRI, int OneShotKillNum, unsigned long bIsOneShotDeath, unsigned long bThroughWall )
{
	static UFunction* pFnAddKillFeedBackMessage = NULL;

	if ( ! pFnAddKillFeedBackMessage )
		pFnAddKillFeedBackMessage = (UFunction*) UObject::GObjObjects()->Data[ 217146 ];

	ATGTankTMHUD_execAddKillFeedBackMessage_Parms AddKillFeedBackMessage_Parms;
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

// Function TGTankGame.TGTankTMHUD.NotifyHitEnemy
// [0x00820002] 
// Parameters infos:
// int                            DamageHP                       ( CPF_Parm )
// int                            DamageAC                       ( CPF_Parm )

void ATGTankTMHUD::NotifyHitEnemy ( int DamageHP, int DamageAC )
{
	static UFunction* pFnNotifyHitEnemy = NULL;

	if ( ! pFnNotifyHitEnemy )
		pFnNotifyHitEnemy = (UFunction*) UObject::GObjObjects()->Data[ 217125 ];

	ATGTankTMHUD_execNotifyHitEnemy_Parms NotifyHitEnemy_Parms;
	NotifyHitEnemy_Parms.DamageHP = DamageHP;
	NotifyHitEnemy_Parms.DamageAC = DamageAC;

	this->ProcessEvent ( pFnNotifyHitEnemy, &NotifyHitEnemy_Parms, NULL );
};

// Function TGTankGame.TGTankTMHUD.DisplayBigRadar
// [0x00020002] 
// Parameters infos:

void ATGTankTMHUD::DisplayBigRadar ( )
{
	static UFunction* pFnDisplayBigRadar = NULL;

	if ( ! pFnDisplayBigRadar )
		pFnDisplayBigRadar = (UFunction*) UObject::GObjObjects()->Data[ 217116 ];

	ATGTankTMHUD_execDisplayBigRadar_Parms DisplayBigRadar_Parms;

	this->ProcessEvent ( pFnDisplayBigRadar, &DisplayBigRadar_Parms, NULL );
};

// Function TGTankGame.TGTankTMHUD.DisplayMap
// [0x00020002] 
// Parameters infos:

void ATGTankTMHUD::DisplayMap ( )
{
	static UFunction* pFnDisplayMap = NULL;

	if ( ! pFnDisplayMap )
		pFnDisplayMap = (UFunction*) UObject::GObjObjects()->Data[ 217111 ];

	ATGTankTMHUD_execDisplayMap_Parms DisplayMap_Parms;

	this->ProcessEvent ( pFnDisplayMap, &DisplayMap_Parms, NULL );
};

// Function TGTankGame.TGTankTMHUD.DisplayNewbieHints
// [0x00020002] 
// Parameters infos:

void ATGTankTMHUD::DisplayNewbieHints ( )
{
	static UFunction* pFnDisplayNewbieHints = NULL;

	if ( ! pFnDisplayNewbieHints )
		pFnDisplayNewbieHints = (UFunction*) UObject::GObjObjects()->Data[ 217102 ];

	ATGTankTMHUD_execDisplayNewbieHints_Parms DisplayNewbieHints_Parms;

	this->ProcessEvent ( pFnDisplayNewbieHints, &DisplayNewbieHints_Parms, NULL );
};

// Function TGTankGame.TGTankTMHUD.DrawHealthBar
// [0x00824002] 
// Parameters infos:
// float                          CenterPosX                     ( CPF_Parm )
// float                          CenterPosY                     ( CPF_Parm )
// float                          ProgressPct                    ( CPF_Parm )
// float                          Scale                          ( CPF_OptionalParm | CPF_Parm )

void ATGTankTMHUD::DrawHealthBar ( float CenterPosX, float CenterPosY, float ProgressPct, float Scale )
{
	static UFunction* pFnDrawHealthBar = NULL;

	if ( ! pFnDrawHealthBar )
		pFnDrawHealthBar = (UFunction*) UObject::GObjObjects()->Data[ 217091 ];

	ATGTankTMHUD_execDrawHealthBar_Parms DrawHealthBar_Parms;
	DrawHealthBar_Parms.CenterPosX = CenterPosX;
	DrawHealthBar_Parms.CenterPosY = CenterPosY;
	DrawHealthBar_Parms.ProgressPct = ProgressPct;
	DrawHealthBar_Parms.Scale = Scale;

	this->ProcessEvent ( pFnDrawHealthBar, &DrawHealthBar_Parms, NULL );
};

// Function TGTankGame.TGTankTMHUD.DrawTankSelection
// [0x00020002] 
// Parameters infos:

void ATGTankTMHUD::DrawTankSelection ( )
{
	static UFunction* pFnDrawTankSelection = NULL;

	if ( ! pFnDrawTankSelection )
		pFnDrawTankSelection = (UFunction*) UObject::GObjObjects()->Data[ 217068 ];

	ATGTankTMHUD_execDrawTankSelection_Parms DrawTankSelection_Parms;

	this->ProcessEvent ( pFnDrawTankSelection, &DrawTankSelection_Parms, NULL );
};

// Function TGTankGame.TGTankTMHUD.DisplaySpectator
// [0x00020000] 
// Parameters infos:

void ATGTankTMHUD::DisplaySpectator ( )
{
	static UFunction* pFnDisplaySpectator = NULL;

	if ( ! pFnDisplaySpectator )
		pFnDisplaySpectator = (UFunction*) UObject::GObjObjects()->Data[ 217067 ];

	ATGTankTMHUD_execDisplaySpectator_Parms DisplaySpectator_Parms;

	this->ProcessEvent ( pFnDisplaySpectator, &DisplaySpectator_Parms, NULL );
};

// Function TGTankGame.TGTankTMHUD.DisplayAvatar
// [0x00020000] 
// Parameters infos:

void ATGTankTMHUD::DisplayAvatar ( )
{
	static UFunction* pFnDisplayAvatar = NULL;

	if ( ! pFnDisplayAvatar )
		pFnDisplayAvatar = (UFunction*) UObject::GObjObjects()->Data[ 217066 ];

	ATGTankTMHUD_execDisplayAvatar_Parms DisplayAvatar_Parms;

	this->ProcessEvent ( pFnDisplayAvatar, &DisplayAvatar_Parms, NULL );
};

// Function TGTankGame.TGTankTMHUD.GetResScale
// [0x00022002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UCanvas*                 DrawCanvas                     ( CPF_Parm )

float ATGTankTMHUD::GetResScale ( class UCanvas* DrawCanvas )
{
	static UFunction* pFnGetResScale = NULL;

	if ( ! pFnGetResScale )
		pFnGetResScale = (UFunction*) UObject::GObjObjects()->Data[ 217063 ];

	ATGTankTMHUD_execGetResScale_Parms GetResScale_Parms;
	GetResScale_Parms.DrawCanvas = DrawCanvas;

	this->ProcessEvent ( pFnGetResScale, &GetResScale_Parms, NULL );

	return GetResScale_Parms.ReturnValue;
};

// Function TGTankGame.TGTankTMHUD.DrawGameHud
// [0x00020002] 
// Parameters infos:

void ATGTankTMHUD::DrawGameHud ( )
{
	static UFunction* pFnDrawGameHud = NULL;

	if ( ! pFnDrawGameHud )
		pFnDrawGameHud = (UFunction*) UObject::GObjObjects()->Data[ 217062 ];

	ATGTankTMHUD_execDrawGameHud_Parms DrawGameHud_Parms;

	this->ProcessEvent ( pFnDrawGameHud, &DrawGameHud_Parms, NULL );
};

// Function TGTankGame.TGTankTMHUD.DrawLivingHud
// [0x00020002] 
// Parameters infos:

void ATGTankTMHUD::DrawLivingHud ( )
{
	static UFunction* pFnDrawLivingHud = NULL;

	if ( ! pFnDrawLivingHud )
		pFnDrawLivingHud = (UFunction*) UObject::GObjObjects()->Data[ 217061 ];

	ATGTankTMHUD_execDrawLivingHud_Parms DrawLivingHud_Parms;

	this->ProcessEvent ( pFnDrawLivingHud, &DrawLivingHud_Parms, NULL );
};

// Function TGTankGame.TGTankMapInfo.GetPickupSizeScale
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGTankPickupFactory*    Pickup                         ( CPF_Parm )

float UTGTankMapInfo::GetPickupSizeScale ( class ATGTankPickupFactory* Pickup )
{
	static UFunction* pFnGetPickupSizeScale = NULL;

	if ( ! pFnGetPickupSizeScale )
		pFnGetPickupSizeScale = (UFunction*) UObject::GObjObjects()->Data[ 218147 ];

	UTGTankMapInfo_execGetPickupSizeScale_Parms GetPickupSizeScale_Parms;
	GetPickupSizeScale_Parms.Pickup = Pickup;

	this->ProcessEvent ( pFnGetPickupSizeScale, &GetPickupSizeScale_Parms, NULL );

	return GetPickupSizeScale_Parms.ReturnValue;
};

// Function TGTankGame.TGTankMapInfo.DrawSquareMap
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
// unsigned long                  bShowHealth                    ( CPF_Parm )

void UTGTankMapInfo::DrawSquareMap ( class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float XPos, float YPos, float Width, float Height, unsigned long bFullDetail, float AspectRatio, unsigned long bShowHealth )
{
	static UFunction* pFnDrawSquareMap = NULL;

	if ( ! pFnDrawSquareMap )
		pFnDrawSquareMap = (UFunction*) UObject::GObjObjects()->Data[ 218108 ];

	UTGTankMapInfo_execDrawSquareMap_Parms DrawSquareMap_Parms;
	DrawSquareMap_Parms.Canvas = Canvas;
	DrawSquareMap_Parms.PlayerOwner = PlayerOwner;
	DrawSquareMap_Parms.XPos = XPos;
	DrawSquareMap_Parms.YPos = YPos;
	DrawSquareMap_Parms.Width = Width;
	DrawSquareMap_Parms.Height = Height;
	DrawSquareMap_Parms.bFullDetail = bFullDetail;
	DrawSquareMap_Parms.AspectRatio = AspectRatio;
	DrawSquareMap_Parms.bShowHealth = bShowHealth;

	this->ProcessEvent ( pFnDrawSquareMap, &DrawSquareMap_Parms, NULL );
};

// Function TGTankGame.TGTankMapInfo.DrawMap
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

void UTGTankMapInfo::DrawMap ( class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float XPos, float YPos, float Width, float Height, unsigned long bFullDetail, float AspectRatio, float BkgImgAlpha )
{
	static UFunction* pFnDrawMap = NULL;

	if ( ! pFnDrawMap )
		pFnDrawMap = (UFunction*) UObject::GObjObjects()->Data[ 218084 ];

	UTGTankMapInfo_execDrawMap_Parms DrawMap_Parms;
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

// Function TGTankGame.TGTankTMHUD_ProgressBar.UpdateRespawnTimeBar
// [0x00020002] 
// Parameters infos:

void UTGTankTMHUD_ProgressBar::UpdateRespawnTimeBar ( )
{
	static UFunction* pFnUpdateRespawnTimeBar = NULL;

	if ( ! pFnUpdateRespawnTimeBar )
		pFnUpdateRespawnTimeBar = (UFunction*) UObject::GObjObjects()->Data[ 218606 ];

	UTGTankTMHUD_ProgressBar_execUpdateRespawnTimeBar_Parms UpdateRespawnTimeBar_Parms;

	this->ProcessEvent ( pFnUpdateRespawnTimeBar, &UpdateRespawnTimeBar_Parms, NULL );
};

// Function TGTankGame.TGTankScoreBoard.DrawItemText
// [0x00420002] 
// Parameters infos:
// int                            PosX                           ( CPF_Parm )
// int                            PosY                           ( CPF_Parm )
// class ATGPlayerReplicationInfo* PRI                            ( CPF_Parm )
// struct FColor                  TextColor                      ( CPF_Parm | CPF_OutParm )

void UTGTankScoreBoard::DrawItemText ( int PosX, int PosY, class ATGPlayerReplicationInfo* PRI, struct FColor* TextColor )
{
	static UFunction* pFnDrawItemText = NULL;

	if ( ! pFnDrawItemText )
		pFnDrawItemText = (UFunction*) UObject::GObjObjects()->Data[ 218591 ];

	UTGTankScoreBoard_execDrawItemText_Parms DrawItemText_Parms;
	DrawItemText_Parms.PosX = PosX;
	DrawItemText_Parms.PosY = PosY;
	DrawItemText_Parms.PRI = PRI;

	this->ProcessEvent ( pFnDrawItemText, &DrawItemText_Parms, NULL );

	if ( TextColor )
		memcpy ( TextColor, &DrawItemText_Parms.TextColor, 0x4 );
};

// Function TGTankGame.TGTankScoreBoard.DrawItemTextSelf
// [0x00420002] 
// Parameters infos:
// int                            PosX                           ( CPF_Parm )
// int                            PosY                           ( CPF_Parm )
// class ATGPlayerReplicationInfo* PRI                            ( CPF_Parm )
// struct FColor                  TextColor                      ( CPF_Parm | CPF_OutParm )

void UTGTankScoreBoard::DrawItemTextSelf ( int PosX, int PosY, class ATGPlayerReplicationInfo* PRI, struct FColor* TextColor )
{
	static UFunction* pFnDrawItemTextSelf = NULL;

	if ( ! pFnDrawItemTextSelf )
		pFnDrawItemTextSelf = (UFunction*) UObject::GObjObjects()->Data[ 218584 ];

	UTGTankScoreBoard_execDrawItemTextSelf_Parms DrawItemTextSelf_Parms;
	DrawItemTextSelf_Parms.PosX = PosX;
	DrawItemTextSelf_Parms.PosY = PosY;
	DrawItemTextSelf_Parms.PRI = PRI;

	this->ProcessEvent ( pFnDrawItemTextSelf, &DrawItemTextSelf_Parms, NULL );

	if ( TextColor )
		memcpy ( TextColor, &DrawItemTextSelf_Parms.TextColor, 0x4 );
};

// Function TGTankGame.TGTankScoreBoard.DrawScoreBoardBG
// [0x00020002] 
// Parameters infos:

void UTGTankScoreBoard::DrawScoreBoardBG ( )
{
	static UFunction* pFnDrawScoreBoardBG = NULL;

	if ( ! pFnDrawScoreBoardBG )
		pFnDrawScoreBoardBG = (UFunction*) UObject::GObjObjects()->Data[ 218582 ];

	UTGTankScoreBoard_execDrawScoreBoardBG_Parms DrawScoreBoardBG_Parms;

	this->ProcessEvent ( pFnDrawScoreBoardBG, &DrawScoreBoardBG_Parms, NULL );
};

// Function TGTankGame.TGTankDBHUD.AddBaseHitFeedback
// [0x00020002] 
// Parameters infos:

void ATGTankDBHUD::AddBaseHitFeedback ( )
{
	static UFunction* pFnAddBaseHitFeedback = NULL;

	if ( ! pFnAddBaseHitFeedback )
		pFnAddBaseHitFeedback = (UFunction*) UObject::GObjObjects()->Data[ 217252 ];

	ATGTankDBHUD_execAddBaseHitFeedback_Parms AddBaseHitFeedback_Parms;

	this->ProcessEvent ( pFnAddBaseHitFeedback, &AddBaseHitFeedback_Parms, NULL );
};

// Function TGTankGame.TGTankDBHUD.DisplayBaseHitMessage
// [0x00820002] 
// Parameters infos:

void ATGTankDBHUD::DisplayBaseHitMessage ( )
{
	static UFunction* pFnDisplayBaseHitMessage = NULL;

	if ( ! pFnDisplayBaseHitMessage )
		pFnDisplayBaseHitMessage = (UFunction*) UObject::GObjObjects()->Data[ 217243 ];

	ATGTankDBHUD_execDisplayBaseHitMessage_Parms DisplayBaseHitMessage_Parms;

	this->ProcessEvent ( pFnDisplayBaseHitMessage, &DisplayBaseHitMessage_Parms, NULL );
};

// Function TGTankGame.TGTankDBHUD.HideBaseHitMessage
// [0x00020002] 
// Parameters infos:

void ATGTankDBHUD::HideBaseHitMessage ( )
{
	static UFunction* pFnHideBaseHitMessage = NULL;

	if ( ! pFnHideBaseHitMessage )
		pFnHideBaseHitMessage = (UFunction*) UObject::GObjObjects()->Data[ 217242 ];

	ATGTankDBHUD_execHideBaseHitMessage_Parms HideBaseHitMessage_Parms;

	this->ProcessEvent ( pFnHideBaseHitMessage, &HideBaseHitMessage_Parms, NULL );
};

// Function TGTankGame.TGTankDBHUD.ShowBaseHitMessage
// [0x00020002] 
// Parameters infos:

void ATGTankDBHUD::ShowBaseHitMessage ( )
{
	static UFunction* pFnShowBaseHitMessage = NULL;

	if ( ! pFnShowBaseHitMessage )
		pFnShowBaseHitMessage = (UFunction*) UObject::GObjObjects()->Data[ 217241 ];

	ATGTankDBHUD_execShowBaseHitMessage_Parms ShowBaseHitMessage_Parms;

	this->ProcessEvent ( pFnShowBaseHitMessage, &ShowBaseHitMessage_Parms, NULL );
};

// Function TGTankGame.TGTankDBHUD.DrawShadowedText
// [0x00824002] 
// Parameters infos:
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          Scale                          ( CPF_OptionalParm | CPF_Parm )

void ATGTankDBHUD::DrawShadowedText ( struct FString Text, float X, float Y, float Scale )
{
	static UFunction* pFnDrawShadowedText = NULL;

	if ( ! pFnDrawShadowedText )
		pFnDrawShadowedText = (UFunction*) UObject::GObjObjects()->Data[ 217235 ];

	ATGTankDBHUD_execDrawShadowedText_Parms DrawShadowedText_Parms;
	memcpy ( &DrawShadowedText_Parms.Text, &Text, 0xC );
	DrawShadowedText_Parms.X = X;
	DrawShadowedText_Parms.Y = Y;
	DrawShadowedText_Parms.Scale = Scale;

	this->ProcessEvent ( pFnDrawShadowedText, &DrawShadowedText_Parms, NULL );
};

// Function TGTankGame.TGTankDBHUD.DrawBaseHPBar
// [0x00020002] 
// Parameters infos:
// struct FVector2D               ScreenRelativePos              ( CPF_Parm )
// float                          ProgressPct                    ( CPF_Parm )
// struct FString                 CenterText                     ( CPF_Parm | CPF_NeedCtorLink )
// class ATGTankDestructibleBase* DBase                          ( CPF_Parm )

void ATGTankDBHUD::DrawBaseHPBar ( struct FVector2D ScreenRelativePos, float ProgressPct, struct FString CenterText, class ATGTankDestructibleBase* DBase )
{
	static UFunction* pFnDrawBaseHPBar = NULL;

	if ( ! pFnDrawBaseHPBar )
		pFnDrawBaseHPBar = (UFunction*) UObject::GObjObjects()->Data[ 217222 ];

	ATGTankDBHUD_execDrawBaseHPBar_Parms DrawBaseHPBar_Parms;
	memcpy ( &DrawBaseHPBar_Parms.ScreenRelativePos, &ScreenRelativePos, 0x8 );
	DrawBaseHPBar_Parms.ProgressPct = ProgressPct;
	memcpy ( &DrawBaseHPBar_Parms.CenterText, &CenterText, 0xC );
	DrawBaseHPBar_Parms.DBase = DBase;

	this->ProcessEvent ( pFnDrawBaseHPBar, &DrawBaseHPBar_Parms, NULL );
};

// Function TGTankGame.TGTankDBHUD.DrawCrosshairBaseHealthBar
// [0x00020002] 
// Parameters infos:

void ATGTankDBHUD::DrawCrosshairBaseHealthBar ( )
{
	static UFunction* pFnDrawCrosshairBaseHealthBar = NULL;

	if ( ! pFnDrawCrosshairBaseHealthBar )
		pFnDrawCrosshairBaseHealthBar = (UFunction*) UObject::GObjObjects()->Data[ 217217 ];

	ATGTankDBHUD_execDrawCrosshairBaseHealthBar_Parms DrawCrosshairBaseHealthBar_Parms;

	this->ProcessEvent ( pFnDrawCrosshairBaseHealthBar, &DrawCrosshairBaseHealthBar_Parms, NULL );
};

// Function TGTankGame.TGTankDBHUD.SwitchEnemyBaseAlpha
// [0x00020002] 
// Parameters infos:

void ATGTankDBHUD::SwitchEnemyBaseAlpha ( )
{
	static UFunction* pFnSwitchEnemyBaseAlpha = NULL;

	if ( ! pFnSwitchEnemyBaseAlpha )
		pFnSwitchEnemyBaseAlpha = (UFunction*) UObject::GObjObjects()->Data[ 217216 ];

	ATGTankDBHUD_execSwitchEnemyBaseAlpha_Parms SwitchEnemyBaseAlpha_Parms;

	this->ProcessEvent ( pFnSwitchEnemyBaseAlpha, &SwitchEnemyBaseAlpha_Parms, NULL );
};

// Function TGTankGame.TGTankDBHUD.SwitchSelfBaseAlpha
// [0x00020002] 
// Parameters infos:

void ATGTankDBHUD::SwitchSelfBaseAlpha ( )
{
	static UFunction* pFnSwitchSelfBaseAlpha = NULL;

	if ( ! pFnSwitchSelfBaseAlpha )
		pFnSwitchSelfBaseAlpha = (UFunction*) UObject::GObjObjects()->Data[ 217215 ];

	ATGTankDBHUD_execSwitchSelfBaseAlpha_Parms SwitchSelfBaseAlpha_Parms;

	this->ProcessEvent ( pFnSwitchSelfBaseAlpha, &SwitchSelfBaseAlpha_Parms, NULL );
};

// Function TGTankGame.TGTankDBHUD.DisplayTeamScore
// [0x00020002] 
// Parameters infos:

void ATGTankDBHUD::DisplayTeamScore ( )
{
	static UFunction* pFnDisplayTeamScore = NULL;

	if ( ! pFnDisplayTeamScore )
		pFnDisplayTeamScore = (UFunction*) UObject::GObjObjects()->Data[ 217199 ];

	ATGTankDBHUD_execDisplayTeamScore_Parms DisplayTeamScore_Parms;

	this->ProcessEvent ( pFnDisplayTeamScore, &DisplayTeamScore_Parms, NULL );
};

// Function TGTankGame.TGTankDBHUD.DrawLivingHud
// [0x00020002] 
// Parameters infos:

void ATGTankDBHUD::DrawLivingHud ( )
{
	static UFunction* pFnDrawLivingHud = NULL;

	if ( ! pFnDrawLivingHud )
		pFnDrawLivingHud = (UFunction*) UObject::GObjObjects()->Data[ 217198 ];

	ATGTankDBHUD_execDrawLivingHud_Parms DrawLivingHud_Parms;

	this->ProcessEvent ( pFnDrawLivingHud, &DrawLivingHud_Parms, NULL );
};

// Function TGTankGame.TGTankDBHUD.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGTankDBHUD::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 217197 ];

	ATGTankDBHUD_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGTankGame.TGTDBHUD_BaseHealth.Display
// [0x00020002] 
// Parameters infos:

void UTGTDBHUD_BaseHealth::Display ( )
{
	static UFunction* pFnDisplay = NULL;

	if ( ! pFnDisplay )
		pFnDisplay = (UFunction*) UObject::GObjObjects()->Data[ 218810 ];

	UTGTDBHUD_BaseHealth_execDisplay_Parms Display_Parms;

	this->ProcessEvent ( pFnDisplay, &Display_Parms, NULL );
};

// Function TGTankGame.TGTDBHUD_BaseHealth.HideBaseHealthHitBG
// [0x00020002] 
// Parameters infos:

void UTGTDBHUD_BaseHealth::HideBaseHealthHitBG ( )
{
	static UFunction* pFnHideBaseHealthHitBG = NULL;

	if ( ! pFnHideBaseHealthHitBG )
		pFnHideBaseHealthHitBG = (UFunction*) UObject::GObjObjects()->Data[ 218809 ];

	UTGTDBHUD_BaseHealth_execHideBaseHealthHitBG_Parms HideBaseHealthHitBG_Parms;

	this->ProcessEvent ( pFnHideBaseHealthHitBG, &HideBaseHealthHitBG_Parms, NULL );
};

// Function TGTankGame.TGTDBHUD_BaseHealth.NotifyBaseTakeDamage
// [0x00020002] 
// Parameters infos:

void UTGTDBHUD_BaseHealth::NotifyBaseTakeDamage ( )
{
	static UFunction* pFnNotifyBaseTakeDamage = NULL;

	if ( ! pFnNotifyBaseTakeDamage )
		pFnNotifyBaseTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 218808 ];

	UTGTDBHUD_BaseHealth_execNotifyBaseTakeDamage_Parms NotifyBaseTakeDamage_Parms;

	this->ProcessEvent ( pFnNotifyBaseTakeDamage, &NotifyBaseTakeDamage_Parms, NULL );
};

// Function TGTankGame.TGTDBHUD_BaseHealth.UpateParameter
// [0x00020002] 
// Parameters infos:

void UTGTDBHUD_BaseHealth::UpateParameter ( )
{
	static UFunction* pFnUpateParameter = NULL;

	if ( ! pFnUpateParameter )
		pFnUpateParameter = (UFunction*) UObject::GObjObjects()->Data[ 218804 ];

	UTGTDBHUD_BaseHealth_execUpateParameter_Parms UpateParameter_Parms;

	this->ProcessEvent ( pFnUpateParameter, &UpateParameter_Parms, NULL );
};

// Function TGTankGame.TGTDBHUD_BaseHealth.InitMIC
// [0x00020002] 
// Parameters infos:

void UTGTDBHUD_BaseHealth::InitMIC ( )
{
	static UFunction* pFnInitMIC = NULL;

	if ( ! pFnInitMIC )
		pFnInitMIC = (UFunction*) UObject::GObjObjects()->Data[ 218803 ];

	UTGTDBHUD_BaseHealth_execInitMIC_Parms InitMIC_Parms;

	this->ProcessEvent ( pFnInitMIC, &InitMIC_Parms, NULL );
};

// Function TGTankGame.TGTDBHUD_BaseHealth.CreateMIC
// [0x00420002] 
// Parameters infos:
// class UMaterial*               Mat                            ( CPF_Parm )
// class UMaterialInstanceConstant* MIC                            ( CPF_Parm | CPF_OutParm )

void UTGTDBHUD_BaseHealth::CreateMIC ( class UMaterial* Mat, class UMaterialInstanceConstant** MIC )
{
	static UFunction* pFnCreateMIC = NULL;

	if ( ! pFnCreateMIC )
		pFnCreateMIC = (UFunction*) UObject::GObjObjects()->Data[ 218800 ];

	UTGTDBHUD_BaseHealth_execCreateMIC_Parms CreateMIC_Parms;
	CreateMIC_Parms.Mat = Mat;

	this->ProcessEvent ( pFnCreateMIC, &CreateMIC_Parms, NULL );

	if ( MIC )
		*MIC = CreateMIC_Parms.MIC;
};

// Function TGTankGame.TGTDBHUD_BaseHealth.Draw
// [0x00020002] 
// Parameters infos:

void UTGTDBHUD_BaseHealth::Draw ( )
{
	static UFunction* pFnDraw = NULL;

	if ( ! pFnDraw )
		pFnDraw = (UFunction*) UObject::GObjObjects()->Data[ 218799 ];

	UTGTDBHUD_BaseHealth_execDraw_Parms Draw_Parms;

	this->ProcessEvent ( pFnDraw, &Draw_Parms, NULL );
};

// Function TGTankGame.TGTankDBPlayerController.IsOjbectiveInsight
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGRealTank*             Tank                           ( CPF_Parm )

bool ATGTankDBPlayerController::IsOjbectiveInsight ( class ATGRealTank* Tank )
{
	static UFunction* pFnIsOjbectiveInsight = NULL;

	if ( ! pFnIsOjbectiveInsight )
		pFnIsOjbectiveInsight = (UFunction*) UObject::GObjObjects()->Data[ 217641 ];

	ATGTankDBPlayerController_execIsOjbectiveInsight_Parms IsOjbectiveInsight_Parms;
	IsOjbectiveInsight_Parms.Tank = Tank;

	this->ProcessEvent ( pFnIsOjbectiveInsight, &IsOjbectiveInsight_Parms, NULL );

	return IsOjbectiveInsight_Parms.ReturnValue;
};

// Function TGTankGame.TGTankDBPlayerController.NotifyTankDied
// [0x00020102] 
// Parameters infos:
// class ATGRealTank*             Tank                           ( CPF_Parm )

void ATGTankDBPlayerController::NotifyTankDied ( class ATGRealTank* Tank )
{
	static UFunction* pFnNotifyTankDied = NULL;

	if ( ! pFnNotifyTankDied )
		pFnNotifyTankDied = (UFunction*) UObject::GObjObjects()->Data[ 217638 ];

	ATGTankDBPlayerController_execNotifyTankDied_Parms NotifyTankDied_Parms;
	NotifyTankDied_Parms.Tank = Tank;

	this->ProcessEvent ( pFnNotifyTankDied, &NotifyTankDied_Parms, NULL );
};

// Function TGTankGame.TGTankDBPlayerController.CheckBaseInstigators
// [0x00020002] 
// Parameters infos:

void ATGTankDBPlayerController::CheckBaseInstigators ( )
{
	static UFunction* pFnCheckBaseInstigators = NULL;

	if ( ! pFnCheckBaseInstigators )
		pFnCheckBaseInstigators = (UFunction*) UObject::GObjObjects()->Data[ 217636 ];

	ATGTankDBPlayerController_execCheckBaseInstigators_Parms CheckBaseInstigators_Parms;

	this->ProcessEvent ( pFnCheckBaseInstigators, &CheckBaseInstigators_Parms, NULL );
};

// Function TGTankGame.TGTankDBPlayerController.AddBaseInstigator
// [0x00820002] 
// Parameters infos:
// class ATGRealTank*             Tank                           ( CPF_Parm )

void ATGTankDBPlayerController::AddBaseInstigator ( class ATGRealTank* Tank )
{
	static UFunction* pFnAddBaseInstigator = NULL;

	if ( ! pFnAddBaseInstigator )
		pFnAddBaseInstigator = (UFunction*) UObject::GObjObjects()->Data[ 217632 ];

	ATGTankDBPlayerController_execAddBaseInstigator_Parms AddBaseInstigator_Parms;
	AddBaseInstigator_Parms.Tank = Tank;

	this->ProcessEvent ( pFnAddBaseInstigator, &AddBaseInstigator_Parms, NULL );
};

// Function TGTankGame.TGTankDBPlayerController.NotifyClientHitBase
// [0x010201C2] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm )

void ATGTankDBPlayerController::NotifyClientHitBase ( int Damage )
{
	static UFunction* pFnNotifyClientHitBase = NULL;

	if ( ! pFnNotifyClientHitBase )
		pFnNotifyClientHitBase = (UFunction*) UObject::GObjObjects()->Data[ 217629 ];

	ATGTankDBPlayerController_execNotifyClientHitBase_Parms NotifyClientHitBase_Parms;
	NotifyClientHitBase_Parms.Damage = Damage;

	this->ProcessEvent ( pFnNotifyClientHitBase, &NotifyClientHitBase_Parms, NULL );
};

// Function TGTankGame.TGTankDBPlayerController.AcknowledgePossession
// [0x00020002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void ATGTankDBPlayerController::AcknowledgePossession ( class APawn* P )
{
	static UFunction* pFnAcknowledgePossession = NULL;

	if ( ! pFnAcknowledgePossession )
		pFnAcknowledgePossession = (UFunction*) UObject::GObjObjects()->Data[ 217627 ];

	ATGTankDBPlayerController_execAcknowledgePossession_Parms AcknowledgePossession_Parms;
	AcknowledgePossession_Parms.P = P;

	this->ProcessEvent ( pFnAcknowledgePossession, &AcknowledgePossession_Parms, NULL );
};

// Function TGTankGame.TGTankDBPlayerController.SetMyBase
// [0x00020102] 
// Parameters infos:

void ATGTankDBPlayerController::SetMyBase ( )
{
	static UFunction* pFnSetMyBase = NULL;

	if ( ! pFnSetMyBase )
		pFnSetMyBase = (UFunction*) UObject::GObjObjects()->Data[ 217625 ];

	ATGTankDBPlayerController_execSetMyBase_Parms SetMyBase_Parms;

	this->ProcessEvent ( pFnSetMyBase, &SetMyBase_Parms, NULL );
};

// Function TGTankGame.TGTankDBPlayerController.NotifyLocalPlayerTeamReceived
// [0x00020102] 
// Parameters infos:

void ATGTankDBPlayerController::NotifyLocalPlayerTeamReceived ( )
{
	static UFunction* pFnNotifyLocalPlayerTeamReceived = NULL;

	if ( ! pFnNotifyLocalPlayerTeamReceived )
		pFnNotifyLocalPlayerTeamReceived = (UFunction*) UObject::GObjObjects()->Data[ 217624 ];

	ATGTankDBPlayerController_execNotifyLocalPlayerTeamReceived_Parms NotifyLocalPlayerTeamReceived_Parms;

	this->ProcessEvent ( pFnNotifyLocalPlayerTeamReceived, &NotifyLocalPlayerTeamReceived_Parms, NULL );
};

// Function TGTankGame.TGTankDBPlayerController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGTankDBPlayerController::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 217622 ];

	ATGTankDBPlayerController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGTankGame.TGTankDestructibleBase.GetHealthColor
// [0x00820102] 
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FColor ATGTankDestructibleBase::GetHealthColor ( )
{
	static UFunction* pFnGetHealthColor = NULL;

	if ( ! pFnGetHealthColor )
		pFnGetHealthColor = (UFunction*) UObject::GObjObjects()->Data[ 217759 ];

	ATGTankDestructibleBase_execGetHealthColor_Parms GetHealthColor_Parms;

	this->ProcessEvent ( pFnGetHealthColor, &GetHealthColor_Parms, NULL );

	return GetHealthColor_Parms.ReturnValue;
};

// Function TGTankGame.TGTankDestructibleBase.GetHealthLevel
// [0x00424102] 
// Parameters infos:
// int                            Level                          ( CPF_Parm | CPF_OutParm )
// float                          LevelPct                       ( CPF_Parm | CPF_OutParm )
// float                          TotalPct                       ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

void ATGTankDestructibleBase::GetHealthLevel ( int* Level, float* LevelPct, float* TotalPct )
{
	static UFunction* pFnGetHealthLevel = NULL;

	if ( ! pFnGetHealthLevel )
		pFnGetHealthLevel = (UFunction*) UObject::GObjObjects()->Data[ 217751 ];

	ATGTankDestructibleBase_execGetHealthLevel_Parms GetHealthLevel_Parms;

	this->ProcessEvent ( pFnGetHealthLevel, &GetHealthLevel_Parms, NULL );

	if ( Level )
		*Level = GetHealthLevel_Parms.Level;

	if ( LevelPct )
		*LevelPct = GetHealthLevel_Parms.LevelPct;

	if ( TotalPct )
		*TotalPct = GetHealthLevel_Parms.TotalPct;
};

// Function TGTankGame.TGTankDestructibleBase.GetCurrentMesh
// [0x00020102] 
// Parameters infos:
// class UStaticMeshComponent*    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )

class UStaticMeshComponent* ATGTankDestructibleBase::GetCurrentMesh ( )
{
	static UFunction* pFnGetCurrentMesh = NULL;

	if ( ! pFnGetCurrentMesh )
		pFnGetCurrentMesh = (UFunction*) UObject::GObjObjects()->Data[ 217749 ];

	ATGTankDestructibleBase_execGetCurrentMesh_Parms GetCurrentMesh_Parms;

	this->ProcessEvent ( pFnGetCurrentMesh, &GetCurrentMesh_Parms, NULL );

	return GetCurrentMesh_Parms.ReturnValue;
};

// Function TGTankGame.TGTankDestructibleBase.SetupMesh
// [0x00020102] 
// Parameters infos:

void ATGTankDestructibleBase::SetupMesh ( )
{
	static UFunction* pFnSetupMesh = NULL;

	if ( ! pFnSetupMesh )
		pFnSetupMesh = (UFunction*) UObject::GObjObjects()->Data[ 217746 ];

	ATGTankDestructibleBase_execSetupMesh_Parms SetupMesh_Parms;

	this->ProcessEvent ( pFnSetupMesh, &SetupMesh_Parms, NULL );
};

// Function TGTankGame.TGTankDestructibleBase.NotifyHealthChanged
// [0x00020102] 
// Parameters infos:

void ATGTankDestructibleBase::NotifyHealthChanged ( )
{
	static UFunction* pFnNotifyHealthChanged = NULL;

	if ( ! pFnNotifyHealthChanged )
		pFnNotifyHealthChanged = (UFunction*) UObject::GObjObjects()->Data[ 217743 ];

	ATGTankDestructibleBase_execNotifyHealthChanged_Parms NotifyHealthChanged_Parms;

	this->ProcessEvent ( pFnNotifyHealthChanged, &NotifyHealthChanged_Parms, NULL );
};

// Function TGTankGame.TGTankDestructibleBase.ScriptGetTeamNum
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char ATGTankDestructibleBase::eventScriptGetTeamNum ( )
{
	static UFunction* pFnScriptGetTeamNum = NULL;

	if ( ! pFnScriptGetTeamNum )
		pFnScriptGetTeamNum = (UFunction*) UObject::GObjObjects()->Data[ 217741 ];

	ATGTankDestructibleBase_eventScriptGetTeamNum_Parms ScriptGetTeamNum_Parms;

	this->ProcessEvent ( pFnScriptGetTeamNum, &ScriptGetTeamNum_Parms, NULL );

	return ScriptGetTeamNum_Parms.ReturnValue;
};

// Function TGTankGame.TGTankDestructibleBase.NotifyBaseInstigator
// [0x00020102] 
// Parameters infos:
// struct ATGTankDestructibleBase_FInstigatorInfo Info                           ( CPF_Parm )

void ATGTankDestructibleBase::NotifyBaseInstigator ( struct ATGTankDestructibleBase_FInstigatorInfo Info )
{
	static UFunction* pFnNotifyBaseInstigator = NULL;

	if ( ! pFnNotifyBaseInstigator )
		pFnNotifyBaseInstigator = (UFunction*) UObject::GObjObjects()->Data[ 217738 ];

	ATGTankDestructibleBase_execNotifyBaseInstigator_Parms NotifyBaseInstigator_Parms;
	memcpy ( &NotifyBaseInstigator_Parms.Info, &Info, 0x8 );

	this->ProcessEvent ( pFnNotifyBaseInstigator, &NotifyBaseInstigator_Parms, NULL );
};

// Function TGTankGame.TGTankDestructibleBase.WithinAttackDistance
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGTankProj_Shell*       Shell                          ( CPF_Parm )

bool ATGTankDestructibleBase::WithinAttackDistance ( class ATGTankProj_Shell* Shell )
{
	static UFunction* pFnWithinAttackDistance = NULL;

	if ( ! pFnWithinAttackDistance )
		pFnWithinAttackDistance = (UFunction*) UObject::GObjObjects()->Data[ 217732 ];

	ATGTankDestructibleBase_execWithinAttackDistance_Parms WithinAttackDistance_Parms;
	WithinAttackDistance_Parms.Shell = Shell;

	this->ProcessEvent ( pFnWithinAttackDistance, &WithinAttackDistance_Parms, NULL );

	return WithinAttackDistance_Parms.ReturnValue;
};

// Function TGTankGame.TGTankDestructibleBase.TakeDamage
// [0x00824802] ( FUNC_Event )
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ATGTankDestructibleBase::eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 217717 ];

	ATGTankDestructibleBase_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.Damage = Damage;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x20 );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function TGTankGame.TGTankDestructibleBase.Reset
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATGTankDestructibleBase::eventReset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 217716 ];

	ATGTankDestructibleBase_eventReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function TGTankGame.TGTankDestructibleBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGTankDestructibleBase::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 217714 ];

	ATGTankDestructibleBase_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function TGTankGame.TGTankDestructibleBase.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGTankDestructibleBase::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 217713 ];

	ATGTankDestructibleBase_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGTankGame.TGTankTMPawn.NotifyTeamChanged
// [0x00020100] 
// Parameters infos:

void ATGTankTMPawn::NotifyTeamChanged ( )
{
	static UFunction* pFnNotifyTeamChanged = NULL;

	if ( ! pFnNotifyTeamChanged )
		pFnNotifyTeamChanged = (UFunction*) UObject::GObjObjects()->Data[ 217364 ];

	ATGTankTMPawn_execNotifyTeamChanged_Parms NotifyTeamChanged_Parms;

	this->ProcessEvent ( pFnNotifyTeamChanged, &NotifyTeamChanged_Parms, NULL );
};

// Function TGTankGame.TGTankTMPawn.PostRenderFor
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void ATGTankTMPawn::eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnPostRenderFor = NULL;

	if ( ! pFnPostRenderFor )
		pFnPostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 217359 ];

	ATGTankTMPawn_eventPostRenderFor_Parms PostRenderFor_Parms;
	PostRenderFor_Parms.PC = PC;
	PostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &PostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &PostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	this->ProcessEvent ( pFnPostRenderFor, &PostRenderFor_Parms, NULL );
};

// Function TGTankGame.TGTankDBMatch.NotifyBaseDestroyed
// [0x00020002] 
// Parameters infos:
// unsigned char                  OwnerTeamIndex                 ( CPF_Parm )
// class ATGTankDBPlayerController* BaseDestroyer                  ( CPF_Parm )

void ATGTankDBMatch::NotifyBaseDestroyed ( unsigned char OwnerTeamIndex, class ATGTankDBPlayerController* BaseDestroyer )
{
	static UFunction* pFnNotifyBaseDestroyed = NULL;

	if ( ! pFnNotifyBaseDestroyed )
		pFnNotifyBaseDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 217349 ];

	ATGTankDBMatch_execNotifyBaseDestroyed_Parms NotifyBaseDestroyed_Parms;
	NotifyBaseDestroyed_Parms.OwnerTeamIndex = OwnerTeamIndex;
	NotifyBaseDestroyed_Parms.BaseDestroyer = BaseDestroyer;

	this->ProcessEvent ( pFnNotifyBaseDestroyed, &NotifyBaseDestroyed_Parms, NULL );
};

// Function TGTankGame.TGTankDBMatch.CheckEndGame
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerReplicationInfo*  Winner                         ( CPF_Parm )
// struct FString                 Reason                         ( CPF_Parm | CPF_NeedCtorLink )

bool ATGTankDBMatch::CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
{
	static UFunction* pFnCheckEndGame = NULL;

	if ( ! pFnCheckEndGame )
		pFnCheckEndGame = (UFunction*) UObject::GObjObjects()->Data[ 217343 ];

	ATGTankDBMatch_execCheckEndGame_Parms CheckEndGame_Parms;
	CheckEndGame_Parms.Winner = Winner;
	memcpy ( &CheckEndGame_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCheckEndGame, &CheckEndGame_Parms, NULL );

	return CheckEndGame_Parms.ReturnValue;
};

// Function TGTankGame.TGTankDBMatch.UpdateGameSpecificSettings
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FGameSpecificSettings   Settings                       ( CPF_Parm )

void ATGTankDBMatch::eventUpdateGameSpecificSettings ( struct FGameSpecificSettings Settings )
{
	static UFunction* pFnUpdateGameSpecificSettings = NULL;

	if ( ! pFnUpdateGameSpecificSettings )
		pFnUpdateGameSpecificSettings = (UFunction*) UObject::GObjObjects()->Data[ 217341 ];

	ATGTankDBMatch_eventUpdateGameSpecificSettings_Parms UpdateGameSpecificSettings_Parms;
	memcpy ( &UpdateGameSpecificSettings_Parms.Settings, &Settings, 0x28 );

	this->ProcessEvent ( pFnUpdateGameSpecificSettings, &UpdateGameSpecificSettings_Parms, NULL );
};

// Function TGTankGame.TGTankDBPlayerReplicationInfo.GetMvpValue
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGTankDBPlayerReplicationInfo::GetMvpValue ( )
{
	static UFunction* pFnGetMvpValue = NULL;

	if ( ! pFnGetMvpValue )
		pFnGetMvpValue = (UFunction*) UObject::GObjObjects()->Data[ 217699 ];

	ATGTankDBPlayerReplicationInfo_execGetMvpValue_Parms GetMvpValue_Parms;

	this->ProcessEvent ( pFnGetMvpValue, &GetMvpValue_Parms, NULL );

	return GetMvpValue_Parms.ReturnValue;
};

// Function TGTankGame.TGTankDBPlayerReplicationInfo.GetGameScore
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ATGTankDBPlayerReplicationInfo::GetGameScore ( )
{
	static UFunction* pFnGetGameScore = NULL;

	if ( ! pFnGetGameScore )
		pFnGetGameScore = (UFunction*) UObject::GObjObjects()->Data[ 217696 ];

	ATGTankDBPlayerReplicationInfo_execGetGameScore_Parms GetGameScore_Parms;

	this->ProcessEvent ( pFnGetGameScore, &GetGameScore_Parms, NULL );

	return GetGameScore_Parms.ReturnValue;
};

// Function TGTankGame.TGTankDBPlayerReplicationInfo.AddBaseDamage
// [0x00020002] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm )

void ATGTankDBPlayerReplicationInfo::AddBaseDamage ( int Damage )
{
	static UFunction* pFnAddBaseDamage = NULL;

	if ( ! pFnAddBaseDamage )
		pFnAddBaseDamage = (UFunction*) UObject::GObjObjects()->Data[ 217694 ];

	ATGTankDBPlayerReplicationInfo_execAddBaseDamage_Parms AddBaseDamage_Parms;
	AddBaseDamage_Parms.Damage = Damage;

	this->ProcessEvent ( pFnAddBaseDamage, &AddBaseDamage_Parms, NULL );
};

// Function TGTankGame.TGTankPlayerInventoryManager.AddAllFunctionalItem
// [0x00020002] 
// Parameters infos:
// class ATGPlayerReplicationInfo* PRI                            ( CPF_Parm )

void ATGTankPlayerInventoryManager::AddAllFunctionalItem ( class ATGPlayerReplicationInfo* PRI )
{
	static UFunction* pFnAddAllFunctionalItem = NULL;

	if ( ! pFnAddAllFunctionalItem )
		pFnAddAllFunctionalItem = (UFunction*) UObject::GObjObjects()->Data[ 218241 ];

	ATGTankPlayerInventoryManager_execAddAllFunctionalItem_Parms AddAllFunctionalItem_Parms;
	AddAllFunctionalItem_Parms.PRI = PRI;

	this->ProcessEvent ( pFnAddAllFunctionalItem, &AddAllFunctionalItem_Parms, NULL );
};

// Function TGTankGame.TGTankMessage.GetLifeTime
// [0x00022002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Switch                         ( CPF_Parm )

float UTGTankMessage::GetLifeTime ( int Switch )
{
	static UFunction* pFnGetLifeTime = NULL;

	if ( ! pFnGetLifeTime )
		pFnGetLifeTime = (UFunction*) UObject::GObjObjects()->Data[ 218186 ];

	UTGTankMessage_execGetLifeTime_Parms GetLifeTime_Parms;
	GetLifeTime_Parms.Switch = Switch;

	this->ProcessEvent ( pFnGetLifeTime, &GetLifeTime_Parms, NULL );

	return GetLifeTime_Parms.ReturnValue;
};

// Function TGTankGame.TGTankMessage.GetPos
// [0x00022002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Switch                         ( CPF_Parm )
// class AHUD*                    myHUD                          ( CPF_Parm )

float UTGTankMessage::GetPos ( int Switch, class AHUD* myHUD )
{
	static UFunction* pFnGetPos = NULL;

	if ( ! pFnGetPos )
		pFnGetPos = (UFunction*) UObject::GObjObjects()->Data[ 218182 ];

	UTGTankMessage_execGetPos_Parms GetPos_Parms;
	GetPos_Parms.Switch = Switch;
	GetPos_Parms.myHUD = myHUD;

	this->ProcessEvent ( pFnGetPos, &GetPos_Parms, NULL );

	return GetPos_Parms.ReturnValue;
};

// Function TGTankGame.TGTankMessage.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGTankMessage::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 218175 ];

	UTGTankMessage_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGTankGame.TGTankFactory.GetVehicleClassPath
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ATGTankFactory::GetVehicleClassPath ( )
{
	static UFunction* pFnGetVehicleClassPath = NULL;

	if ( ! pFnGetVehicleClassPath )
		pFnGetVehicleClassPath = (UFunction*) UObject::GObjObjects()->Data[ 217794 ];

	ATGTankFactory_execGetVehicleClassPath_Parms GetVehicleClassPath_Parms;

	this->ProcessEvent ( pFnGetVehicleClassPath, &GetVehicleClassPath_Parms, NULL );

	return GetVehicleClassPath_Parms.ReturnValue;
};

// Function TGTankGame.TGTankFactory.GetSpawnPosition
// [0x00420002] 
// Parameters infos:
// class UClass*                  TankClass                      ( CPF_Parm )
// struct FVector                 SpawnLoc                       ( CPF_Parm | CPF_OutParm )
// struct FRotator                SpawnRot                       ( CPF_Parm | CPF_OutParm )

void ATGTankFactory::GetSpawnPosition ( class UClass* TankClass, struct FVector* SpawnLoc, struct FRotator* SpawnRot )
{
	static UFunction* pFnGetSpawnPosition = NULL;

	if ( ! pFnGetSpawnPosition )
		pFnGetSpawnPosition = (UFunction*) UObject::GObjObjects()->Data[ 217783 ];

	ATGTankFactory_execGetSpawnPosition_Parms GetSpawnPosition_Parms;
	GetSpawnPosition_Parms.TankClass = TankClass;

	this->ProcessEvent ( pFnGetSpawnPosition, &GetSpawnPosition_Parms, NULL );

	if ( SpawnLoc )
		memcpy ( SpawnLoc, &GetSpawnPosition_Parms.SpawnLoc, 0xC );

	if ( SpawnRot )
		memcpy ( SpawnRot, &GetSpawnPosition_Parms.SpawnRot, 0xC );
};

// Function TGTankGame.TGTankFactory.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGTankFactory::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 217771 ];

	ATGTankFactory_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TGTankGame.TGTankMatchInfoMessage.GetPos
// [0x00022002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Switch                         ( CPF_Parm )
// class AHUD*                    myHUD                          ( CPF_Parm )

float UTGTankMatchInfoMessage::GetPos ( int Switch, class AHUD* myHUD )
{
	static UFunction* pFnGetPos = NULL;

	if ( ! pFnGetPos )
		pFnGetPos = (UFunction*) UObject::GObjObjects()->Data[ 218168 ];

	UTGTankMatchInfoMessage_execGetPos_Parms GetPos_Parms;
	GetPos_Parms.Switch = Switch;
	GetPos_Parms.myHUD = myHUD;

	this->ProcessEvent ( pFnGetPos, &GetPos_Parms, NULL );

	return GetPos_Parms.ReturnValue;
};

// Function TGTankGame.TGTankMatchInfoMessage.GetFontSize
// [0x00022002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Switch                         ( CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI1                    ( CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI2                    ( CPF_Parm )
// class APlayerReplicationInfo*  LocalPlayer                    ( CPF_Parm )

int UTGTankMatchInfoMessage::GetFontSize ( int Switch, class APlayerReplicationInfo* RelatedPRI1, class APlayerReplicationInfo* RelatedPRI2, class APlayerReplicationInfo* LocalPlayer )
{
	static UFunction* pFnGetFontSize = NULL;

	if ( ! pFnGetFontSize )
		pFnGetFontSize = (UFunction*) UObject::GObjObjects()->Data[ 218162 ];

	UTGTankMatchInfoMessage_execGetFontSize_Parms GetFontSize_Parms;
	GetFontSize_Parms.Switch = Switch;
	GetFontSize_Parms.RelatedPRI1 = RelatedPRI1;
	GetFontSize_Parms.RelatedPRI2 = RelatedPRI2;
	GetFontSize_Parms.LocalPlayer = LocalPlayer;

	this->ProcessEvent ( pFnGetFontSize, &GetFontSize_Parms, NULL );

	return GetFontSize_Parms.ReturnValue;
};

// Function TGTankGame.TGTankMatchInfoMessage.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGTankMatchInfoMessage::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 218155 ];

	UTGTankMatchInfoMessage_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGTankGame.TGTankSeqEvent_DestructibleHealthChanged.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGTankSeqEvent_DestructibleHealthChanged::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 218602 ];

	UTGTankSeqEvent_DestructibleHealthChanged_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function TGTankGame.TGTTMPlayerStart.IsBlocked
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  BaseClass                      ( CPF_Parm )
// int                            TankLength                     ( CPF_Parm )
// int                            TankWidth                      ( CPF_Parm )

bool ATGTTMPlayerStart::IsBlocked ( class UClass* BaseClass, int TankLength, int TankWidth )
{
	static UFunction* pFnIsBlocked = NULL;

	if ( ! pFnIsBlocked )
		pFnIsBlocked = (UFunction*) UObject::GObjObjects()->Data[ 217792 ];

	ATGTTMPlayerStart_execIsBlocked_Parms IsBlocked_Parms;
	IsBlocked_Parms.BaseClass = BaseClass;
	IsBlocked_Parms.TankLength = TankLength;
	IsBlocked_Parms.TankWidth = TankWidth;

	this->ProcessEvent ( pFnIsBlocked, &IsBlocked_Parms, NULL );

	return IsBlocked_Parms.ReturnValue;
};

// Function TGTankGame.TGTankPickupMessage.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGTankPickupMessage::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 218233 ];

	UTGTankPickupMessage_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGTankGame.TGTankProj_APShell.ProjectileHurtRadius
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGTankProj_APShell::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 218471 ];

	ATGTankProj_APShell_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function TGTankGame.TGTankProj_HEShell.HurtTankRadius
// [0x00820002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGRealTank*             VictimTank                     ( CPF_Parm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )

int ATGTankProj_HEShell::HurtTankRadius ( class ATGRealTank* VictimTank, struct FVector HurtOrigin )
{
	static UFunction* pFnHurtTankRadius = NULL;

	if ( ! pFnHurtTankRadius )
		pFnHurtTankRadius = (UFunction*) UObject::GObjObjects()->Data[ 218536 ];

	ATGTankProj_HEShell_execHurtTankRadius_Parms HurtTankRadius_Parms;
	HurtTankRadius_Parms.VictimTank = VictimTank;
	memcpy ( &HurtTankRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );

	this->ProcessEvent ( pFnHurtTankRadius, &HurtTankRadius_Parms, NULL );

	return HurtTankRadius_Parms.ReturnValue;
};

// Function TGTankGame.TGTankProj_HEShell.HurtBaseRadius
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGTankDestructibleBase* BaseBuilding                   ( CPF_Parm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )

int ATGTankProj_HEShell::HurtBaseRadius ( class ATGTankDestructibleBase* BaseBuilding, struct FVector HurtOrigin )
{
	static UFunction* pFnHurtBaseRadius = NULL;

	if ( ! pFnHurtBaseRadius )
		pFnHurtBaseRadius = (UFunction*) UObject::GObjObjects()->Data[ 218532 ];

	ATGTankProj_HEShell_execHurtBaseRadius_Parms HurtBaseRadius_Parms;
	HurtBaseRadius_Parms.BaseBuilding = BaseBuilding;
	memcpy ( &HurtBaseRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );

	this->ProcessEvent ( pFnHurtBaseRadius, &HurtBaseRadius_Parms, NULL );

	return HurtBaseRadius_Parms.ReturnValue;
};

// Function TGTankGame.TGTankProj_HEShell.ProjectileHurtRadius
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGTankProj_HEShell::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 218501 ];

	ATGTankProj_HEShell_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function TGTankGame.TGTankProj_NormalShell.ProjectileHurtRadius
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGTankProj_NormalShell::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 218552 ];

	ATGTankProj_NormalShell_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function TGTankGame.TGTankWeaponSwitchMessage.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGTankWeaponSwitchMessage::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 218775 ];

	UTGTankWeaponSwitchMessage_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function TGTankGame.TGTDBHUD_GameTime.UpdateTimeLeft
// [0x00020002] 
// Parameters infos:

void UTGTDBHUD_GameTime::UpdateTimeLeft ( )
{
	static UFunction* pFnUpdateTimeLeft = NULL;

	if ( ! pFnUpdateTimeLeft )
		pFnUpdateTimeLeft = (UFunction*) UObject::GObjObjects()->Data[ 218823 ];

	UTGTDBHUD_GameTime_execUpdateTimeLeft_Parms UpdateTimeLeft_Parms;

	this->ProcessEvent ( pFnUpdateTimeLeft, &UpdateTimeLeft_Parms, NULL );
};

// Function TGTankGame.TGTDBHUD_GameTime.Tick
// [0x00020002] 
// Parameters infos:

void UTGTDBHUD_GameTime::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 218821 ];

	UTGTDBHUD_GameTime_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TGTankGame.TGTDBHUD_GameTime.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGTDBHUD_GameTime::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 218820 ];

	UTGTDBHUD_GameTime_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TGTankGame.TGTDBHUD_GameTime.PostBeginPlay
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void UTGTDBHUD_GameTime::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 218819 ];

	UTGTDBHUD_GameTime_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif