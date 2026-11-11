/*
#############################################################################################
# Assault Fire (1.0.0.26) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TGTankGame_classes.h
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
# Constants
# ========================================================================================= #
*/

#define CONST_MAX_HIT_INFO                                       4
#define CONST_MAX_TANKSHELL_TYPE                                 3
#define CONST_MAX_TANK_LICENSE_NUM                               7

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum TGTankGame.TGTankTypes.EPickupType
/*enum EPickupType
{
	PT_Repair                                          = 0,
	PT_Ammo                                            = 1,
	PT_MAX                                             = 2
};*/

// Enum TGTankGame.TGTankTypes.MoveState
/*enum MoveState
{
	MoveState_Motional                                 = 0,
	MoveState_Motionless                               = 1,
	MoveState_MAX                                      = 2
};*/

// Enum TGTankGame.TGTankTypes.TankShellTypes
/*enum TankShellTypes
{
	TankShellTypes_AP                                  = 0,
	TankShellTypes_HE                                  = 1,
	TankShellTypes_Normal                              = 2,
	TankShellTypes_MAX                                 = 3
};*/

// Enum TGTankGame.TGTankTypes.ETankLicenseType
/*enum ETankLicenseType
{
	TLT_None                                           = 0,
	TLT_T90                                            = 1,
	TLT_M1A2                                           = 2,
	TLT_Type99                                         = 3,
	TLT_Leopard2A6                                     = 4,
	TLT_BlackEagle                                     = 5,
	TLT_MK3                                            = 6,
	TLT_AllInOne                                       = 7,
	TLT_MAX                                            = 8
};*/

// Enum TGTankGame.TGTankTypes.TankTypes
/*enum TankTypes
{
	TankTypes_None                                     = 0,
	TankTypes_T90                                      = 1,
	TankTypes_M1A2                                     = 2,
	TankTypes_Type99                                   = 3,
	TankTypes_Leopard2A6                               = 4,
	TankTypes_BlackEagle                               = 5,
	TankTypes_MK3                                      = 6,
	TankTypes_MAX                                      = 7
};*/

// Enum TGTankGame.TGTankTypes.TankZoomStatus
/*enum TankZoomStatus
{
	TankZoomStatus_Normal                              = 0,
	TankZoomStatus_SecondaryAim1                       = 1,
	TankZoomStatus_SecondaryAim2                       = 2,
	TankZoomStatus_MAX                                 = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class TGTankGame.TGTankBlockingComponent
// 0x0000 (0x0264 - 0x0264)
class UTGTankBlockingComponent : public UStaticMeshComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2048 ];

		return pClassPointer;
	};

};

UClass* UTGTankBlockingComponent::pClassPointer = NULL;

// Class TGTankGame.TGTankGame
// 0x0000 (0x0674 - 0x0674)
class ATGTankGame : public ATGGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2049 ];

		return pClassPointer;
	};

};

UClass* ATGTankGame::pClassPointer = NULL;

// Class TGTankGame.TGTankProjectile
// 0x0064 (0x02B0 - 0x024C)
class ATGTankProjectile : public AUDKProjectile
{
public:
	unsigned long                                      bSuppressSounds : 1;                              		// 0x024C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bImportantAmbientSound : 1;                       		// 0x024C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAdvanceExplosionEffect : 1;                      		// 0x024C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bSuppressExplosionFX : 1;                         		// 0x024C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bWaitForEffects : 1;                              		// 0x024C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bAttachExplosionToVehicles : 1;                   		// 0x024C (0x0004) [0x0000000000000000] [0x00000020] 
	class USoundCue*                                   AmbientSound;                                     		// 0x0250 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ExplosionSound;                                   		// 0x0254 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    ProjEffects;                                      		// 0x0258 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             ProjFlightTemplate;                               		// 0x025C (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ProjExplosionTemplate;                            		// 0x0260 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          ExplosionDecal;                                   		// 0x0264 (0x0004) [0x0000000000000000]              
	float                                              DecalWidth;                                       		// 0x0268 (0x0004) [0x0000000000000000]              
	float                                              DecalHeight;                                      		// 0x026C (0x0004) [0x0000000000000000]              
	float                                              DurationOfDecal;                                  		// 0x0270 (0x0004) [0x0000000000000000]              
	struct FName                                       DecalDissolveParamName;                           		// 0x0274 (0x0008) [0x0000000000000000]              
	float                                              MaxEffectDistance;                                		// 0x027C (0x0004) [0x0000000000000000]              
	float                                              TossZ;                                            		// 0x0280 (0x0004) [0x0000000000000000]              
	float                                              GlobalCheckRadiusTweak;                           		// 0x0284 (0x0004) [0x0000000000000000]              
	class UClass*                                      ProjectileLightClass;                             		// 0x0288 (0x0004) [0x0000000000000000]              
	class UPointLightComponent*                        ProjectileLight;                                  		// 0x028C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UClass*                                      ExplosionLightClass;                              		// 0x0290 (0x0004) [0x0000000000000000]              
	float                                              MaxExplosionLightDistance;                        		// 0x0294 (0x0004) [0x0000000000000000]              
	struct FVector                                     ServerLocation;                                   		// 0x0298 (0x000C) [0x0000000000000020]              ( CPF_Net )
	struct FRotator                                    ServerRotation;                                   		// 0x02A4 (0x000C) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2050 ];

		return pClassPointer;
	};

	float GetRange ( );
	float GetTimeToLocation ( struct FVector TargetLoc );
	float StaticGetTimeToLocation ( struct FVector TargetLoc, struct FVector StartLoc, class AController* RequestedBy );
	float CalculateTravelTime ( float Dist, float MoveSpeed, float MaxMoveSpeed, float AccelMag );
	class APawn* GetPawnOwner ( );
	class AActor* eventGetHomingTarget ( class AUTProjectile* Seeker, class AController* InstigatedBy );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	void MyOnParticleSystemFinished ( class UParticleSystemComponent* PSC );
	void Destroyed ( );
	void HideProjectile ( );
	void eventTornOff ( );
	void ShutDown ( );
	bool ShouldSpawnExplosionLight ( struct FVector HitLocation, struct FVector HitNormal );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void SetExplosionEffectParameters ( class UParticleSystemComponent* ProjExplosion );
	void SpawnFlightEffects ( );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void Init ( struct FVector Direction );
	void eventSetInitialState ( );
	void PostBeginPlay ( );
	void eventPreBeginPlay ( );
	bool CanSplash ( );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void eventCreateProjectileLight ( );
};

UClass* ATGTankProjectile::pClassPointer = NULL;

// Class TGTankGame.TGTankTMGameReplicationInfo
// 0x001C (0x034C - 0x0330)
class ATGTankTMGameReplicationInfo : public ATGTeamGameReplicationInfo
{
public:
	class ATGPlayerReplicationInfo*                    MVPPRI;                                           		// 0x0330 (0x0004) [0x0000000000000000]              
	int                                                KillDistLess50;                                   		// 0x0334 (0x0004) [0x0000000000000000]              
	int                                                KillDist50To100;                                  		// 0x0338 (0x0004) [0x0000000000000000]              
	int                                                KillDist100To150;                                 		// 0x033C (0x0004) [0x0000000000000000]              
	int                                                KillDist150To200;                                 		// 0x0340 (0x0004) [0x0000000000000000]              
	int                                                KillDist200To250;                                 		// 0x0344 (0x0004) [0x0000000000000000]              
	int                                                KillDistMore250;                                  		// 0x0348 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2051 ];

		return pClassPointer;
	};

	bool InOrder ( class APlayerReplicationInfo* P1, class APlayerReplicationInfo* P2 );
	void CalcKillDistStatis ( struct FVector KillerLoc, struct FVector KilledLoc );
	void ProcessCharacterData ( class ATGPlayerReplicationInfo* PRI, unsigned long bTeamChange );
	void BeginProcessCharacterData ( class ATGPlayerReplicationInfo* PRI, unsigned long bTeamChange );
	void StartProcessingCharacterData ( );
};

UClass* ATGTankTMGameReplicationInfo::pClassPointer = NULL;

// Class TGTankGame.TGTankDBGameReplicationInfo
// 0x0004 (0x0350 - 0x034C)
class ATGTankDBGameReplicationInfo : public ATGTankTMGameReplicationInfo
{
public:
	class ATGPlayerReplicationInfo*                    BaseDestroyerPRI;                                 		// 0x034C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2052 ];

		return pClassPointer;
	};

};

UClass* ATGTankDBGameReplicationInfo::pClassPointer = NULL;

// Class TGTankGame.TGTankTMPlayerController
// 0x005C (0x0A54 - 0x09F8)
class ATGTankTMPlayerController : public ATGTeamPlayerController
{
public:
	class ATGRealTankBase*                             DrivingTank;                                      		// 0x09F8 (0x0004) [0x0000000000000000]              
	TArray< struct FSeeObjective >                     ClientSeeObjectives;                              		// 0x09FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector2D                                   ObjectiveSightRange;                              		// 0x0A08 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   ObjectiveIconScaleRange;                          		// 0x0A10 (0x0008) [0x0000000000000000]              
	float                                              ObjectiveInvisibleDelay;                          		// 0x0A18 (0x0004) [0x0000000000000000]              
	float                                              RespawnTime;                                      		// 0x0A1C (0x0004) [0x0000000000000000]              
	float                                              RespawnStartTime;                                 		// 0x0A20 (0x0004) [0x0000000000000000]              
	struct FRotator                                    DeadRot;                                          		// 0x0A24 (0x000C) [0x0000000000000000]              
	struct FVector                                     DeadLoc;                                          		// 0x0A30 (0x000C) [0x0000000000000000]              
	unsigned long                                      bIsStarting : 1;                                  		// 0x0A3C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseMouseDriveMode : 1;                           		// 0x0A3C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSelectingTankType : 1;                           		// 0x0A3C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bCanSelectTank : 1;                               		// 0x0A3C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bSelectionFadeOut : 1;                            		// 0x0A3C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bHaveUseTankMouse : 1;                            		// 0x0A3C (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              MouseDriveStrafe;                                 		// 0x0A40 (0x0004) [0x0000000000000000]              
	float                                              SelectionFadeOutStartTime;                        		// 0x0A44 (0x0004) [0x0000000000000000]              
	float                                              NormalDriveModeDuration;                          		// 0x0A48 (0x0004) [0x0000000000000000]              
	float                                              MouseDriveModeDuration;                           		// 0x0A4C (0x0004) [0x0000000000000000]              
	float                                              LastRecordTime;                                   		// 0x0A50 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2053 ];

		return pClassPointer;
	};

	void FractureActorDestroyed ( class AFracturedStaticMeshActor* fracturedActor );
	void NotifyClientAssistance ( );
	void ClientSetRespawnStartTime ( float RespTime, float RespDelay );
	void PlayCameraShake ( class UCameraShake* Shake, struct FVector Epicenter, float ShakeInnerRadius, float ShakeOuterRadius, float Falloff );
	void AdjustFOV ( float DeltaTime );
	void AcknowledgePossession ( class APawn* P );
	void ClientSetDeathCamera ( struct FVector CamLoc, struct FRotator CamRot );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	void eventGetPlayerViewPoint ( struct FVector* POVLocation, struct FRotator* POVRotation );
	void SetMouseDriveStrafe ( struct FRotator cameraRot );
	void DrawObjective ( class ATGTankTMHUD* H, class ATGRealTankBase* Objective );
	void DrawObjectives ( class ATGTankTMHUD* H );
	void DrawHUD ( class AHUD* H );
	void ClientReset ( );
	void EndSelectionFadeOut ( );
	void StartFadeOutSelection ( );
	void EndSelectingTankType ( );
	void EndZoom ( );
	void ClientRestart ( class APawn* NewPawn );
	void ClientEnableTankSelection ( );
	void NotifyTankDied ( class ATGRealTank* Tank );
	void ClearSeeObjectives ( );
	void ClearInvisibleObjectives ( );
	bool IsOjbectiveInsight ( class ATGRealTank* Tank );
	void AddSeeOjbective ( class ATGRealTank* Tank );
	void eventPlayerTick ( float DeltaTime );
	void NotifyClientHitEnemy ( struct FTankTargetHitInfo* HitInfoArray, unsigned long bDirectHit, unsigned long bKilled );
	void NextWeapon ( );
	void PrevWeapon ( );
	void Hit ( int DamageHP, int DamageAC );
	void Damage ( int HitGroup, int Damage, int AC );
	void Lift ( float Factor );
	void ServerSetHealth ( int NewHealth );
	void SetHealth ( int NewHealth );
	void SetDrivingTank ( class ATGRealTank* Tank );
	void DriveTank ( );
	class ATGTankFactory* GetTankFactory ( );
	unsigned char GetTankFactoryType ( );
	void ServerChangeTankType ( unsigned char ExpectedTankType );
	void eventInitInputSystem ( );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
};

UClass* ATGTankTMPlayerController::pClassPointer = NULL;

// Class TGTankGame.TGTankTMPlayerReplicationInfo
// 0x00A0 (0x0FF4 - 0x0F54)
class ATGTankTMPlayerReplicationInfo : public ATGTMPlayerReplicationInfo
{
public:
	int                                                TimesFireAP;                                      		// 0x0F54 (0x0004) [0x0000000000000000]              
	int                                                TimesFireHE;                                      		// 0x0F58 (0x0004) [0x0000000000000000]              
	int                                                TimesFireNormal;                                  		// 0x0F5C (0x0004) [0x0000000000000000]              
	int                                                TimesFireSmoke;                                   		// 0x0F60 (0x0004) [0x0000000000000000]              
	int                                                TimesTank;                                        		// 0x0F64 (0x0004) [0x0000000000000000]              
	int                                                TimesTankM1A2;                                    		// 0x0F68 (0x0004) [0x0000000000000000]              
	int                                                TimesTankLeopard2A6;                              		// 0x0F6C (0x0004) [0x0000000000000000]              
	int                                                TimesTankT90;                                     		// 0x0F70 (0x0004) [0x0000000000000000]              
	int                                                TimesTankType99;                                  		// 0x0F74 (0x0004) [0x0000000000000000]              
	int                                                TimesTankMouse;                                   		// 0x0F78 (0x0004) [0x0000000000000000]              
	int                                                RepairTimes;                                      		// 0x0F7C (0x0004) [0x0000000000000000]              
	int                                                TimesAssist;                                      		// 0x0F80 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                GameScore;                                        		// 0x0F84 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              LastGameScoreTime;                                		// 0x0F88 (0x0004) [0x0000000000000000]              
	unsigned char                                      TankType;                                         		// 0x0F8C (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      LicenseList[ 0x7 ];                               		// 0x0F8D (0x0007) [0x0000000000000020]              ( CPF_Net )
	TArray< unsigned char >                            NeedLicenseTypeList;                              		// 0x0F94 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< unsigned char >                            GovTankTypeList;                                  		// 0x0FA0 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< unsigned char >                            RebTankTypeList;                                  		// 0x0FAC (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                MaxKillTankInOneLifeNum;                          		// 0x0FB8 (0x0004) [0x0000000000000000]              
	int                                                KillTankInOneLifeCounter;                         		// 0x0FBC (0x0004) [0x0000000000000000]              
	int                                                KillTankAtItsFrontCounter;                        		// 0x0FC0 (0x0004) [0x0000000000000000]              
	int                                                KillTankAtItsLeftOrRightCounter;                  		// 0x0FC4 (0x0004) [0x0000000000000000]              
	int                                                KillTankAtItsBehindCounter;                       		// 0x0FC8 (0x0004) [0x0000000000000000]              
	int                                                KillTankWithAPShellCounter;                       		// 0x0FCC (0x0004) [0x0000000000000000]              
	int                                                KillTankWithHEShellCounter;                       		// 0x0FD0 (0x0004) [0x0000000000000000]              
	int                                                KillTankWithNormalShellCounter;                   		// 0x0FD4 (0x0004) [0x0000000000000000]              
	int                                                KillTankInAcclerateCounter;                       		// 0x0FD8 (0x0004) [0x0000000000000000]              
	int                                                Kill3TankWith3ShellCounter;                       		// 0x0FDC (0x0004) [0x0000000000000000]              
	int                                                MaxKill3TankWith3Shell;                           		// 0x0FE0 (0x0004) [0x0000000000000000]              
	int                                                AssistantInTankMatchNum;                          		// 0x0FE4 (0x0004) [0x0000000000000000]              
	int                                                Kill3TankWithRedBloodCounter;                     		// 0x0FE8 (0x0004) [0x0000000000000000]              
	int                                                MaxKill3TankWithRedBlood;                         		// 0x0FEC (0x0004) [0x0000000000000000]              
	int                                                Crash8FenceCounter;                               		// 0x0FF0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2054 ];

		return pClassPointer;
	};

	bool NeedLicenseFor ( unsigned char NewType );
	bool HasLicenseFor ( unsigned char NewType );
	bool HasLicense ( unsigned char LicenseType );
	void AddLicense ( unsigned char LicenseType );
	void CaluUseMouse ( unsigned long bHaveUseTankMouse );
	void CaluTankUser ( );
	int GetGameScoreForSort ( );
	float GetMvpValue ( );
	int GetGameScore ( );
	void CalcFireTimes ( unsigned char ShellType );
	void SetTankType ( unsigned char Type );
	void SetPlayerTeam ( class ATeamInfo* NewTeam );
};

UClass* ATGTankTMPlayerReplicationInfo::pClassPointer = NULL;

// Class TGTankGame.TGTankTypes
// 0x0000 (0x003C - 0x003C)
class UTGTankTypes : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2055 ];

		return pClassPointer;
	};

};

UClass* UTGTankTypes::pClassPointer = NULL;

// Class TGTankGame.TGRealTankBase
// 0x006C (0x0B54 - 0x0AE8)
class ATGRealTankBase : public AUTVehicle
{
public:
	unsigned long                                      bLongGripScaleOverride : 1;                       		// 0x0AE8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLatGripScaleOverride : 1;                        		// 0x0AE8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bTrackVelocityOverride : 1;                       		// 0x0AE8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHasWheelOnVehicle : 1;                           		// 0x0AE8 (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      bIsFirstPerson : 1;                               		// 0x0AE8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bTryToBoost : 1;                                  		// 0x0AE8 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bBeginToFadeOut : 1;                              		// 0x0AE8 (0x0004) [0x0000000000000000] [0x00000040] 
	struct FRotator                                    TurretDesiredRotation;                            		// 0x0AEC (0x000C) [0x0000000000000020]              ( CPF_Net )
	int                                                TurretFlashCount;                                 		// 0x0AF8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UAudioComponent*                             TankIdleSound;                                    		// 0x0AFC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             TankIdleSound1P;                                  		// 0x0B00 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             TankIdleSound3P;                                  		// 0x0B04 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             TankRunSound;                                     		// 0x0B08 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             TankRunSound1P;                                   		// 0x0B0C (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             TankRunSound3P;                                   		// 0x0B10 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             TankTreadSound;                                   		// 0x0B14 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             TankTreadSound1P;                                 		// 0x0B18 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             TankTreadSound3P;                                 		// 0x0B1C (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     CurrentCamLoc;                                    		// 0x0B20 (0x000C) [0x0000000000000000]              
	struct FRotator                                    CurrentCamRot;                                    		// 0x0B2C (0x000C) [0x0000000000000000]              
	float                                              WalkableSlope;                                    		// 0x0B38 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastSyncVStateTime;                               		// 0x0B3C (0x0004) [0x0000000000000000]              
	float                                              LastUnpackTime;                                   		// 0x0B40 (0x0004) [0x0000000000000000]              
	class UTGTankBlockingComponent*                    BlockingComponent;                                		// 0x0B44 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FRotator                                    CacheGunBaseRotation;                             		// 0x0B48 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2056 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* Collision );
	void Destroyed ( );
	struct FString GetHumanReadableName ( );
	void ClientRestart ( );
	void SetTurretDesiredRotation ( );
	void VehicleAdjustFlashCount ( int SeatIndex, unsigned char FireModeNum, unsigned long bClear );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
	void TerminateRBPhys ( );
	void ReInitRBPhys ( );
	void eventClientSyncVStateToServer ( float ClientTimeStamp );
	struct FRotator TransTurretRotation ( struct FRotator TurretRot, unsigned long bFromWorldToLocal );
	void ClearVState ( );
	void ServerSetTankPosition ( struct FTankState NewTankState );
	void AttachToScene ( class USkeletalMeshComponent* MeshComponent, class AActor* InOwner );
};

UClass* ATGRealTankBase::pClassPointer = NULL;

// Class TGTankGame.TGVehicleSimTank
// 0x0058 (0x014C - 0x00F4)
class UTGVehicleSimTank : public USVehicleSimTank
{
public:
	unsigned long                                      bDisableThrottleSpeed : 1;                        		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bForceThrottle : 1;                               		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHasForcedThrottle : 1;                           		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              ThrottleAcceleration;                             		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ThrottleDeceleration;                             		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ForwardInitThrottle;                              		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BackwardInitThrottle;                             		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FullDamageThrottleDecrease;                       		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RadialDamageThrottleDecrease;                     		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageThrottleDecreaseTime;                       		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UphillSpeedScaleFactor;                           		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DownhillSpeedScaleFactor;                         		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpeedScaleAcceleration;                           		// 0x011C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpeedScaleDeceleration;                           		// 0x0120 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostMaxEngineTorqueMultiplier;                   		// 0x0124 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FrontalCollisionGripFactor;                       		// 0x0128 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActualThrottle;                                   		// 0x012C (0x0004) [0x0000000000000000]              
	float                                              DesiredSlopeSpeedScale;                           		// 0x0130 (0x0004) [0x0000000000000000]              
	float                                              ActualSlopeSpeedScale;                            		// 0x0134 (0x0004) [0x0000000000000000]              
	float                                              LatGripScaleOverride;                             		// 0x0138 (0x0004) [0x0000000000000000]              
	float                                              LongGripScaleOverride;                            		// 0x013C (0x0004) [0x0000000000000000]              
	float                                              LeftTrackVelOverride;                             		// 0x0140 (0x0004) [0x0000000000000000]              
	float                                              RightTrackVelOverride;                            		// 0x0144 (0x0004) [0x0000000000000000]              
	float                                              EngineTorque;                                     		// 0x0148 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2057 ];

		return pClassPointer;
	};

};

UClass* UTGVehicleSimTank::pClassPointer = NULL;

// Class TGTankGame.TGTankSkelControl_TurretConstrained
// 0x0008 (0x014C - 0x0144)
class UTGTankSkelControl_TurretConstrained : public UUDKSkelControl_TurretConstrained
{
public:
	int                                                SkelControlGroup;                                 		// 0x0144 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsMainController : 1;                            		// 0x0148 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2058 ];

		return pClassPointer;
	};

};

UClass* UTGTankSkelControl_TurretConstrained::pClassPointer = NULL;

// Class TGTankGame.TGDmgType_TankShell
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_TankShell : public UTGDmgType_ExplodeGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216023 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_TankShell::pClassPointer = NULL;

// Class TGTankGame.TGTankWeapon
// 0x0050 (0x072C - 0x06DC)
class ATGTankWeapon : public AUTVehicleWeapon
{
public:
	class UTexture2D*                                  CircleCrosshairImage;                             		// 0x06DC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSize3P;                            		// 0x06E0 (0x0004) [0x0000000000000000]              
	float                                              MaxCrossHairSize3P;                               		// 0x06E4 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeChangeFactor3P;                      		// 0x06E8 (0x0004) [0x0000000000000000]              
	float                                              SecondaryAimOriginCrossHairSize3P;                		// 0x06EC (0x0004) [0x0000000000000000]              
	float                                              SecondaryAimMaxCrossHairSize3P;                   		// 0x06F0 (0x0004) [0x0000000000000000]              
	float                                              SecondaryAimCrossHairSizeChangeFactor3P;          		// 0x06F4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSize1P;                            		// 0x06F8 (0x0004) [0x0000000000000000]              
	float                                              MaxCrossHairSize1P;                               		// 0x06FC (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeChangeFactor1P;                      		// 0x0700 (0x0004) [0x0000000000000000]              
	float                                              SecondaryAimOriginCrossHairSize1P;                		// 0x0704 (0x0004) [0x0000000000000000]              
	float                                              SecondaryAimMaxCrossHairSize1P;                   		// 0x0708 (0x0004) [0x0000000000000000]              
	float                                              SecondaryAimCrossHairSizeChangeFactor1P;          		// 0x070C (0x0004) [0x0000000000000000]              
	float                                              FireImpulseFactor;                                		// 0x0710 (0x0004) [0x0000000000000000]              
	class UCameraShake*                                FireCameraShake;                                  		// 0x0714 (0x0004) [0x0000000000000000]              
	float                                              FireCameraShakeScale;                             		// 0x0718 (0x0004) [0x0000000000000000]              
	struct FName                                       FireTriggerTag1P;                                 		// 0x071C (0x0008) [0x0000000000000000]              
	struct FName                                       FireTriggerTag3P;                                 		// 0x0724 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216026 ];

		return pClassPointer;
	};

	float GetCurrReloadTime ( );
	void ShakeView ( );
	void TankShakeView ( class UCameraAnim* CurrCameraAnim );
	void SetZoom ( unsigned char ZoomSwitchingTo );
	bool CheckZoom ( unsigned char FireModeNum );
	void DrawWeaponCrosshair ( class AHUD* HUD );
};

UClass* ATGTankWeapon::pClassPointer = NULL;

// Class TGTankGame.TGTankWeap_Turret
// 0x003C (0x0768 - 0x072C)
class ATGTankWeap_Turret : public ATGTankWeapon
{
public:
	class ATGTankAmmoBox*                              AmmoBox;                                          		// 0x072C (0x0004) [0x0000000000000000]              
	unsigned char                                      CurrShellType;                                    		// 0x0730 (0x0001) [0x0000000000000000]              
	unsigned char                                      TankMoveState;                                    		// 0x0731 (0x0001) [0x0000000000000000]              
	int                                                LastShellType;                                    		// 0x0734 (0x0004) [0x0000000000000000]              
	unsigned long                                      bReloadComplete : 1;                              		// 0x0738 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bMaxAimDisperse : 1;                              		// 0x0738 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLessThanTurretMinPitch : 1;                      		// 0x0738 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              AimDisperseParm;                                  		// 0x073C (0x0004) [0x0000000000000000]              
	float                                              MotionalDisperseParm3P;                           		// 0x0740 (0x0004) [0x0000000000000000]              
	float                                              MotionlessDisperseParm3P;                         		// 0x0744 (0x0004) [0x0000000000000000]              
	float                                              MotionalDisperseParm1P;                           		// 0x0748 (0x0004) [0x0000000000000000]              
	float                                              MotionlessDisperseParm1P;                         		// 0x074C (0x0004) [0x0000000000000000]              
	float                                              DisperseParmDecrement3P;                          		// 0x0750 (0x0004) [0x0000000000000000]              
	float                                              DisperseParmIncrement3P;                          		// 0x0754 (0x0004) [0x0000000000000000]              
	float                                              DisperseParmDecrement1P;                          		// 0x0758 (0x0004) [0x0000000000000000]              
	float                                              DisperseParmIncrement1P;                          		// 0x075C (0x0004) [0x0000000000000000]              
	float                                              FireAimCheckThreshold;                            		// 0x0760 (0x0004) [0x0000000000000000]              
	float                                              FireLocationCheckThreshold;                       		// 0x0764 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216025 ];

		return pClassPointer;
	};

	void PlayFiringSound ( );
	struct FString GetHumanReadableName ( );
	float GetCurrReloadTime ( );
	void OnShellReloadTimer ( );
	void ServerStartFire ( unsigned char FireModeNum );
	void StartFire ( unsigned char FireModeNum );
	int AddAmmo ( int Amount );
	bool HasAmmo ( unsigned char FireModeNum, int Amount );
	void InitAmmoBox ( );
	void OnSetAimDisperseTimer ( );
	void eventTick ( float DeltaTime );
	float GetFireInterval ( unsigned char FireModeNum );
	void ServerSetCurrentShellType ( unsigned char DisiredShellType );
	void SwitchToLastUsedWeapon ( );
	struct FTextureCoordinates GetWeaponIconCoords ( );
	struct FString GetCurrentWeaponName ( );
	void PlayReloadCompleteSound ( );
	void SetCurrentShellType ( unsigned char DisiredShellType );
	void CheckTankSehllLocaionAndAim ( struct FRotator* TurretAim, struct FVector* FireStartLocation );
	void TankShellFire ( int InYaw, int InPitch, int InRoll, struct FVectorNoCompress InLocation );
	class AProjectile* ProjectileFire ( );
	struct FVector ModifyAimDirection ( struct FRotator AimRotation );
	void ClientSetAmmoBoxShellList ( struct FTGTankAmmoInfo* NewTankShellList );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGTankWeap_Turret::pClassPointer = NULL;

// Class TGTankGame.TGDmgType_TankAPShell
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_TankAPShell : public UTGDmgType_TankShell
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216029 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_TankAPShell::pClassPointer = NULL;

// Class TGTankGame.TGTankWeap_Turret_AP
// 0x0000 (0x0768 - 0x0768)
class ATGTankWeap_Turret_AP : public ATGTankWeap_Turret
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216031 ];

		return pClassPointer;
	};

};

UClass* ATGTankWeap_Turret_AP::pClassPointer = NULL;

// Class TGTankGame.TGDmgType_TankAPShell_HitTail
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_TankAPShell_HitTail : public UTGDmgType_TankAPShell
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216034 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_TankAPShell_HitTail::pClassPointer = NULL;

// Class TGTankGame.TGDmgType_TankHEShell
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_TankHEShell : public UTGDmgType_TankShell
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216038 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_TankHEShell::pClassPointer = NULL;

// Class TGTankGame.TGTankWeap_Turret_HE
// 0x0000 (0x0768 - 0x0768)
class ATGTankWeap_Turret_HE : public ATGTankWeap_Turret
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216040 ];

		return pClassPointer;
	};

};

UClass* ATGTankWeap_Turret_HE::pClassPointer = NULL;

// Class TGTankGame.TGDmgType_TankHEShell_HitTail
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_TankHEShell_HitTail : public UTGDmgType_TankHEShell
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216043 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_TankHEShell_HitTail::pClassPointer = NULL;

// Class TGTankGame.TGDmgType_TankNormalShell
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_TankNormalShell : public UTGDmgType_TankShell
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216047 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_TankNormalShell::pClassPointer = NULL;

// Class TGTankGame.TGTankWeap_Turret_Normal
// 0x0000 (0x0768 - 0x0768)
class ATGTankWeap_Turret_Normal : public ATGTankWeap_Turret
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216049 ];

		return pClassPointer;
	};

};

UClass* ATGTankWeap_Turret_Normal::pClassPointer = NULL;

// Class TGTankGame.TGDmgType_TankNormalShell_HitTail
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_TankNormalShell_HitTail : public UTGDmgType_TankNormalShell
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216052 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_TankNormalShell_HitTail::pClassPointer = NULL;

// Class TGTankGame.TGRealTank
// 0x0270 (0x0DC4 - 0x0B54)
class ATGRealTank : public ATGRealTankBase
{
public:
	class UUDKSkeletalMeshComponent*                   FirstPersonTurretMesh;                            		// 0x0B54 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ATGTankTurret*                               TankTurret;                                       		// 0x0B58 (0x0004) [0x0000000000000000]              
	class UClass*                                      TankTurretClassName;                              		// 0x0B5C (0x0004) [0x0000000000000000]              
	class USkeletalMeshComponent*                      AntennaMesh;                                      		// 0x0B60 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UUTSkelControl_CantileverBeam*               AntennaBeamControl;                               		// 0x0B64 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  FirstPersonImage;                                 		// 0x0B68 (0x0004) [0x0000000000000000]              
	struct FName                                       ThirdPersonSocketName;                            		// 0x0B6C (0x0008) [0x0000000000000000]              
	struct FRotator                                    RotationChangeLimit;                              		// 0x0B74 (0x000C) [0x0000000000000000]              
	struct FVector                                     FirstPersonCameraOffset;                          		// 0x0B80 (0x000C) [0x0000000000000000]              
	struct FVector                                     FirstPersonTurretOffset;                          		// 0x0B8C (0x000C) [0x0000000000000000]              
	float                                              TurretPitchMin3P;                                 		// 0x0B98 (0x0004) [0x0000000000000000]              
	float                                              TurretPitchMax3P;                                 		// 0x0B9C (0x0004) [0x0000000000000000]              
	float                                              TurretPitchMin1P;                                 		// 0x0BA0 (0x0004) [0x0000000000000000]              
	float                                              TurretPitchMax1P;                                 		// 0x0BA4 (0x0004) [0x0000000000000000]              
	struct FVector                                     CameraLocationCache1P;                            		// 0x0BA8 (0x000C) [0x0000000000000000]              
	struct FRotator                                    CameraRotationCache1P;                            		// 0x0BB4 (0x000C) [0x0000000000000000]              
	struct FRotator                                    CacheLocalViewRot;                                		// 0x0BC0 (0x000C) [0x0000000000000000]              
	TArray< float >                                    FirstPersonFOV;                                   		// 0x0BCC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    ThirdPersonFOV;                                   		// 0x0BD8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      WeaponZoomStatus;                                 		// 0x0BE4 (0x0001) [0x0000000000000000]              
	unsigned char                                      LastDirectHitGroup;                               		// 0x0BE5 (0x0001) [0x0000000000000020]              ( CPF_Net )
	class UCameraAnim*                                 TankFireCameraAnim1P;                             		// 0x0BE8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UCameraAnim*                                 TankFireCameraAnim3P;                             		// 0x0BEC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UCameraAnim*                                 TankImpactedCameraAnim1P;                         		// 0x0BF0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UCameraAnim*                                 TankImpactedCameraAnim3P;                         		// 0x0BF4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UMaterialInstanceConstant*                   OpacityTurretMIC;                                 		// 0x0BF8 (0x0004) [0x0000000000000000]              
	class UMaterial*                                   OpacityTurretMatOri;                              		// 0x0BFC (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          NormalTurretMIC;                                  		// 0x0C00 (0x0004) [0x0000000000000000]              
	int                                                TurretMaterialIndex;                              		// 0x0C04 (0x0004) [0x0000000000000000]              
	float                                              TankShellGravityScaling;                          		// 0x0C08 (0x0004) [0x0000000000000000]              
	float                                              TankShellAccelRate;                               		// 0x0C0C (0x0004) [0x0000000000000000]              
	float                                              TankShellMaxSpeed;                                		// 0x0C10 (0x0004) [0x0000000000000000]              
	unsigned long                                      bReadyToFire : 1;                                 		// 0x0C14 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRadarJammingActive : 1;                          		// 0x0C14 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bBoostersActivated : 1;                           		// 0x0C14 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bSteeringLimited : 1;                             		// 0x0C14 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDisableDamageThrottleDecrease : 1;               		// 0x0C14 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bOnEnemyCrosshair : 1;                            		// 0x0C14 (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              MinSocketFireDist;                                		// 0x0C18 (0x0004) [0x0000000000000000]              
	struct FTankTarget                                 FrontTankTarget;                                  		// 0x0C1C (0x0014) [0x0000000000000000]              
	struct FTankTarget                                 BackTankTarget;                                   		// 0x0C30 (0x0014) [0x0000000000000000]              
	struct FTankTarget                                 RightTankTarget;                                  		// 0x0C44 (0x0014) [0x0000000000000000]              
	struct FTankTarget                                 LeftTankTarget;                                   		// 0x0C58 (0x0014) [0x0000000000000000]              
	int                                                TankHealth;                                       		// 0x0C6C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                TankMaxHealth;                                    		// 0x0C70 (0x0004) [0x0000000000000000]              
	int                                                TankArmor;                                        		// 0x0C74 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                TankMaxArmor;                                     		// 0x0C78 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              DamageFireThreshold;                              		// 0x0C7C (0x0004) [0x0000000000000000]              
	TArray< struct ATGRealTank_FAssistInfo >           AssistCandidates;                                 		// 0x0C80 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              AssistDamageThreshold;                            		// 0x0C8C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              AssistTimeLimit;                                  		// 0x0C90 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              RadarJammingDuration;                             		// 0x0C94 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   LeftTreadMaterialInstance;                        		// 0x0C98 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   RightTreadMaterialInstance;                       		// 0x0C9C (0x0004) [0x0000000000000000]              
	int                                                TreadPannerSkinIndexLeft;                         		// 0x0CA0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TreadPannerSkinIndexRight;                        		// 0x0CA4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TreadPanLeft;                                     		// 0x0CA8 (0x0004) [0x0000000000000000]              
	float                                              TreadPanRight;                                    		// 0x0CAC (0x0004) [0x0000000000000000]              
	struct FName                                       TreadPannerParameterName;                         		// 0x0CB0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              TreadSpeedRatioLinear;                            		// 0x0CB8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TreadSpeedRatioTurning;                           		// 0x0CBC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TreadSpeedFactor;                                 		// 0x0CC0 (0x0004) [0x0000000000000000]              
	float                                              LeftTreadSpeed;                                   		// 0x0CC4 (0x0004) [0x0000000000000000]              
	float                                              RightTreadSpeed;                                  		// 0x0CC8 (0x0004) [0x0000000000000000]              
	float                                              BoostReleaseTime;                                 		// 0x0CCC (0x0004) [0x0000000000000000]              
	float                                              BoostReleaseDelay;                                		// 0x0CD0 (0x0004) [0x0000000000000000]              
	float                                              MaxBoostDuration;                                 		// 0x0CD4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostChargeDuration;                              		// 0x0CD8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostStartTime;                                   		// 0x0CDC (0x0004) [0x0000000000000000]              
	float                                              BoostChargeTime;                                  		// 0x0CE0 (0x0004) [0x0000000000000000]              
	float                                              RocketSpeed;                                      		// 0x0CE4 (0x0004) [0x0000000000000000]              
	float                                              BoosterFOVAngle;                                  		// 0x0CE8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoosterZoomInRate;                                		// 0x0CEC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoosterZoomOutRate;                               		// 0x0CF0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FMovementCheckInfo                          LastMovementCheckInfo;                            		// 0x0CF4 (0x0028) [0x0000000000000000]              
	float                                              CheckInfoClearInterval;                           		// 0x0D1C (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	float                                              TimeCheatThreshold;                               		// 0x0D20 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                MaxCheckFrameCount;                               		// 0x0D24 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	class UAudioComponent*                             TrackSound;                                       		// 0x0D28 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              TrackSoundParamScale;                             		// 0x0D2C (0x0004) [0x0000000000000000]              
	struct FName                                       VolumeParamName;                                  		// 0x0D30 (0x0008) [0x0000000000000000]              
	struct FName                                       PitchParamName;                                   		// 0x0D38 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   TankFireSound1P;                                  		// 0x0D40 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   TankFireSound3P;                                  		// 0x0D44 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   TankFireSoundOthers;                              		// 0x0D48 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   CollisionWorldSound;                              		// 0x0D4C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   CollisionVehicleSound;                            		// 0x0D50 (0x0004) [0x0000000000000000]              
	float                                              CollisionWorldIntervalSecs;                       		// 0x0D54 (0x0004) [0x0000000000000000]              
	float                                              CollisionVehicleIntervalSecs;                     		// 0x0D58 (0x0004) [0x0000000000000000]              
	float                                              CollisionSoundThreshold;                          		// 0x0D5C (0x0004) [0x0000000000000000]              
	float                                              LastCollisionWorldSoundTime;                      		// 0x0D60 (0x0004) [0x0000000000000000]              
	float                                              LastCollisionVehicleSoundTime;                    		// 0x0D64 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   TankSlightImpactedSound;                          		// 0x0D68 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   TankMediumImpactedSound;                          		// 0x0D6C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   TankHeavyImpactedSound;                           		// 0x0D70 (0x0004) [0x0000000000000000]              
	int                                                SlightImpactLimit;                                		// 0x0D74 (0x0004) [0x0000000000000000]              
	int                                                MediumImpactLimit;                                		// 0x0D78 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SmokeGrenadeFireSound1P;                          		// 0x0D7C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SmokeGrenadeFireSound3P;                          		// 0x0D80 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ChangeShellTypeSound;                             		// 0x0D84 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ShellReloadCompleteSound;                         		// 0x0D88 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             BoostSound;                                       		// 0x0D8C (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   BoostEndSound;                                    		// 0x0D90 (0x0004) [0x0000000000000000]              
	float                                              FireAimVerifyThreshold;                           		// 0x0D94 (0x0004) [0x0000000000000000]              
	int                                                TankLength;                                       		// 0x0D98 (0x0004) [0x0000000000000000]              
	int                                                TankWidth;                                        		// 0x0D9C (0x0004) [0x0000000000000000]              
	int                                                SmokeGrenadeNum;                                  		// 0x0DA0 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	class UTGTankHUD*                                  TankHUD;                                          		// 0x0DA4 (0x0004) [0x0000000000000000]              
	struct FString                                     HUDTypeClassName;                                 		// 0x0DA8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TestServerTankMove;                               		// 0x0DB4 (0x0004) [0x0000000000000000]              
	int                                                ActualServerMove;                                 		// 0x0DB8 (0x0004) [0x0000000000000000]              
	int                                                TestCallCount;                                    		// 0x0DBC (0x0004) [0x0000000000000000]              
	class ATGTankTMPlayerController*                   TankSpectator;                                    		// 0x0DC0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216161 ];

		return pClassPointer;
	};

	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* Collision );
	bool RecommendLongRangedAttack ( );
	bool ImportantVehicle ( );
	void DisplayWheelsDebug ( class AHUD* HUD, float YL );
	void GetSVehicleDebug ( TArray< struct FString >* DebugInfo );
	bool AddAmmo ( );
	bool Repair ( );
	void ServerUsePickup ( class ATGTankPickupFactory* Pickup );
	bool CanAddAmmo ( );
	bool CanBeRepaired ( );
	bool CanUsePickup ( unsigned char Type );
	void StopEngineSound ( );
	void StartEngineSound ( );
	bool HasSmokeGrenade ( );
	void FireSmokeGrenade ( );
	void OnRadarJammingActiveTimer ( );
	void ServerFireSmokeGrenade ( );
	void ResetDamageThrottleDecrease ( );
	void ClientSetThrottle ( float ActualThrottle );
	void NotifyThrottleDecrease ( unsigned long bDirectHit );
	class ATGTankTMPlayerController* GetDriverPC ( );
	void AddTechStatsInfo ( class AController* InstigatedBy, int Damage, unsigned long bKilled, int MaxHealth );
	void NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	void NotifyBeHit ( TArray< struct FTankTargetHitInfo > TankHitInfoList, class AController* InstigatorController, unsigned long bDirectHit, struct FVector HitOrigin, float DamageRadius, struct FVector Impulse );
	void SetOnCrosshair ( unsigned long bOnCrosshair );
	void PanTreads ( float DeltaTime );
	void TankExhaust ( );
	void PancakeOther ( class APawn* Other );
	void eventRanInto ( class AActor* Other );
	float AdjustFOVAngle ( float FOVAngle );
	void ServerSetTryBoost ( unsigned long Try );
	float GetNormalFOV ( );
	void eventDeactivateRocketBoosters ( );
	void eventActivateRocketBoosters ( );
	void eventTick ( float DeltaTime );
	void SetInputs ( float InForward, float InStrafe, float InUp );
	float GetHealthPct ( );
	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	void SetVehicleEffectParms ( struct FName TriggerName, class UParticleSystemComponent* PSC );
	void CheckDamageEffect ( );
	void NotifyClientTakeDamage ( struct FTankTargetHitInfo* HitInfoArray, unsigned long bDirectHit, struct FVector HitOrigin, struct FVector Impulse );
	void DisplayTankHud ( class AUTHUD* HUD, class UCanvas* Canvas );
	void DisplayHud ( class AUTHUD* HUD, class UCanvas* Canvas, struct FVector2D HudPOS, int SeatIndex );
	class ATGTankWeapon* GetCurrentWeapon ( );
	void eventRenderOuterMapIcon ( class UTGMapInfo* MP, class UCanvas* Canvas, int InYaw, struct FLinearColor FinalColor );
	void eventRenderLowerMapIcon ( class UTGMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, struct FLinearColor FinalColor );
	void eventRenderHigherMapIcon ( class UTGMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, struct FLinearColor FinalColor );
	void eventRenderNormalMapIcon ( class UTGMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, struct FLinearColor FinalColor );
	void NotifyDied ( );
	void BlowupVehicle ( );
	void Suicide ( );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	bool IsTankDestroyed ( );
	bool DriverEnter ( class APawn* P );
	bool IsTankHitGroupValid ( unsigned char TankHitGroup );
	void ClientUpdatePing ( float TimeStamp );
	void ServerTankMove ( struct FVehicleState NewVehicleState, float ClientTimeStamp );
	void eventClientSyncVStateToServer ( float ClientTimeStamp );
	struct FVector GetVelocity ( );
	void eventEndViewTarget ( class APlayerController* PC );
	void eventBecomeViewTarget ( class APlayerController* PC );
	void ClientSetCameraThirdPerson ( );
	void ServerSetCameraThirdPerson ( );
	void ClientSetCameraFirstPerson ( );
	void ServerSetCameraFirstPerson ( );
	void ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void GetTankViewPoint ( struct FVector* out_ViewLoc, struct FRotator* out_ViewRot );
	void VehicleCalcCamera ( float DeltaTime, int SeatIndex, unsigned long bPivotOnly, struct FVector* out_CamLoc, struct FRotator* out_CamRot, struct FVector* CamStart );
	float LimitCameraZ ( float CurrentCamZ, float OriginalCamZ, int SeatIndex );
	struct FVector GetCameraStart ( int SeatIndex );
	struct FVector GetCameraFocus ( int SeatIndex );
	void PlayVehicleAnimation ( struct FName EventTag );
	void VehicleWeaponFireEffects ( struct FVector HitLocation, int SeatIndex );
	struct FName GetTankFireTriggerTag ( int FireMode );
	void AddAssistCandidate ( class ATGTankTMPlayerReplicationInfo* InstigatorPRI, int Damage );
	void HurtTank ( class AController* InstigatedBy, int* out_HealthDamage, int* out_ArmorDamage );
	struct FTankTarget GetTankTarget ( unsigned char HitTankGroup );
	void SwitchWeapon ( unsigned char NewGroup );
	void StartFire ( unsigned char FireModeNum );
	struct FRotator GetWeaponAim ( class AUTVehicleWeapon* VWeapon );
	void SwitchToLastUsedWeapon ( );
	struct FVector GetPhysicalFireStartLoc ( class AUTWeapon* ForWeapon );
	void eventReplicatedEvent ( struct FName VarName );
	void TriggerVehicleEffect ( struct FName EventTag );
	void UpdateVehicleEffectFloatParam ( struct FName EffectStartTag, struct FName ParamName, float Param );
	void InitializeTurrets ( );
	void PostBeginPlay ( );
	void eventPreBeginPlay ( );
};

UClass* ATGRealTank::pClassPointer = NULL;

// Class TGTankGame.TGTankHUD
// 0x02B8 (0x02F4 - 0x003C)
class UTGTankHUD : public UObject
{
public:
	class UTexture2D*                                  CrossHairGov;                                     		// 0x003C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CrossHairReb;                                     		// 0x0040 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CrossHairZoomGov;                                 		// 0x0044 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CrossHairZoomReb;                                 		// 0x0048 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  EnemyStatusGov;                                   		// 0x004C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  EnemyStatusReb;                                   		// 0x0050 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CrossHair1PGov;                                   		// 0x0054 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CrossHair1PReb;                                   		// 0x0058 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CrossHair1PZoom1Gov;                              		// 0x005C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CrossHair1PZoom2Gov;                              		// 0x0060 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CrossHair1PZoom1Reb;                              		// 0x0064 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CrossHair1PZoom2Reb;                              		// 0x0068 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CircleCrossHairGov;                               		// 0x006C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CircleCrossHairReb;                               		// 0x0070 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CircleCrossHair1PGov;                             		// 0x0074 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CircleCrossHair1PReb;                             		// 0x0078 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CrossHairTurret;                                  		// 0x007C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  NaviRulerGov;                                     		// 0x0080 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  NaviRulerReb;                                     		// 0x0084 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  NaviBGGov;                                        		// 0x0088 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  NaviBGReb;                                        		// 0x008C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  NaviIndicatorGov;                                 		// 0x0090 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  NaviIndicatorReb;                                 		// 0x0094 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  SmokeIconTex;                                     		// 0x0098 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FAmmoReloadHUDInfo >                AmmoReloadHUDInfoList;                            		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FTextureCoordinates                         DashboardCoords;                                  		// 0x00A8 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         EnemyStatusCoords;                                		// 0x00B8 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         AmmoReloadCoords;                                 		// 0x00C8 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         AmmoReloadBarCoords;                              		// 0x00D8 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         NaviIndicatorCoords;                              		// 0x00E8 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      CrossHairColor;                                   		// 0x00F8 (0x0004) [0x0000000000000000]              
	int                                                CurrCrosshairAlpha;                               		// 0x00FC (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  AmmoReload;                                       		// 0x0100 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  CrossHair;                                        		// 0x0104 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  EnemyStatus;                                      		// 0x0108 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  CircleCrosshair;                                  		// 0x010C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  NaviBG;                                           		// 0x0110 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  NaviIndicator;                                    		// 0x0114 (0x0004) [0x0000000000000000]              
	float                                              FrameOffsetX1P;                                   		// 0x0118 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              FrameOffsetX3P;                                   		// 0x011C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              FrameOffsetDelta1P;                               		// 0x0120 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              FrameOffsetDelta3P;                               		// 0x0124 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              Margin;                                           		// 0x0128 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              FrameOffsetX;                                     		// 0x012C (0x0004) [0x0000000000000000]              
	float                                              ResScaleX;                                        		// 0x0130 (0x0004) [0x0000000000000000]              
	float                                              ResScale;                                         		// 0x0134 (0x0004) [0x0000000000000000]              
	float                                              CachedClipX;                                      		// 0x0138 (0x0004) [0x0000000000000000]              
	float                                              CachedClipY;                                      		// 0x013C (0x0004) [0x0000000000000000]              
	float                                              CentralOffset;                                    		// 0x0140 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  HEShellTex;                                       		// 0x0144 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  APShellTex;                                       		// 0x0148 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  NormalShellTex;                                   		// 0x014C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  ShellBarBkgTex;                                   		// 0x0150 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  ShellSplitBarTex;                                 		// 0x0154 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  ShellInfinityTex;                                 		// 0x0158 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         HEShellCoords;                                    		// 0x015C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         APShellCoords;                                    		// 0x016C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         NormalShellCoords;                                		// 0x017C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         ShellBarBkgCoords;                                		// 0x018C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         ShellSplitBarCoords;                              		// 0x019C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         ShellInfinityCoords;                              		// 0x01AC (0x0010) [0x0000000000000002]              ( CPF_Const )
	float                                              DefaultShellBarScale;                             		// 0x01BC (0x0004) [0x0000000000000000]              
	int                                                DefaultShellBarAlpha;                             		// 0x01C0 (0x0004) [0x0000000000000000]              
	float                                              CurrShellBarScale;                                		// 0x01C4 (0x0004) [0x0000000000000000]              
	int                                                CurrShellBarAlpha;                                		// 0x01C8 (0x0004) [0x0000000000000000]              
	int                                                ShellSlpitBarOffset;                              		// 0x01CC (0x0004) [0x0000000000000000]              
	unsigned char                                      CurrActiveShellType;                              		// 0x01D0 (0x0001) [0x0000000000000000]              
	unsigned char                                      LastActiveShellType;                              		// 0x01D1 (0x0001) [0x0000000000000000]              
	float                                              CurrShellActiveTime;                              		// 0x01D4 (0x0004) [0x0000000000000000]              
	float                                              LastShellActiveTime;                              		// 0x01D8 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  TankNormalMoveModeTex;                            		// 0x01DC (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         TankNormalMoveModeCoords;                         		// 0x01E0 (0x0010) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  TankMouseMoveModeTex;                             		// 0x01F0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         TankMouseMoveModeCoords;                          		// 0x01F4 (0x0010) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  TankDashboard;                                    		// 0x0204 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  TankTurretBlueTex;                                		// 0x0208 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  TankTurretYellowTex;                              		// 0x020C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  TankTurretRedTex;                                 		// 0x0210 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  TankBodyBlueTex;                                  		// 0x0214 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  TankBodyYellowTex;                                		// 0x0218 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  TankBodyRedTex;                                   		// 0x021C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  TankRevertWarningTex;                             		// 0x0220 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  HPBarTex;                                         		// 0x0224 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  ACBarTex;                                         		// 0x0228 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  BoostBarTex;                                      		// 0x022C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  SpeedBarTex;                                      		// 0x0230 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         HPBarCoords;                                      		// 0x0234 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         ACBarCoords;                                      		// 0x0244 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         BoostBarCoords;                                   		// 0x0254 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         SpeedBarCoords;                                   		// 0x0264 (0x0010) [0x0000000000000002]              ( CPF_Const )
	class UMaterialInstanceConstant*                   NaviMIC;                                          		// 0x0274 (0x0004) [0x0000000000000000]              
	class UMaterial*                                   NaviMaterial;                                     		// 0x0278 (0x0004) [0x0000000000000000]              
	TArray< struct FVector2D >                         DamageSizeRanges;                                 		// 0x027C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVector2D >                         DamageAlphaRanges;                                		// 0x0288 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    DamagePeriodsRanges;                              		// 0x0294 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ATGAnimTex*                                  NitroAnim;                                        		// 0x02A0 (0x0004) [0x0000000000000000]              
	TArray< class UTexture2D* >                        NitroAnimTexArray;                                		// 0x02A4 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class ATGTankWeap_Turret*                          Turret;                                           		// 0x02B0 (0x0004) [0x0000000000000000]              
	class ATGRealTank*                                 LastEnemyTankOnCrosshair;                         		// 0x02B4 (0x0004) [0x0000000000000000]              
	class ATGTankTMHUD*                                BaseHUD;                                          		// 0x02B8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsGovCamp : 1;                                   		// 0x02BC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowTankRevertWarning : 1;                       		// 0x02BC (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              RevertWarningDegree;                              		// 0x02C0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FCrossHairShock                             FireCrossHairShock;                               		// 0x02C4 (0x0024) [0x0000000000000000]              
	float                                              LastInCorrectAimTime;                             		// 0x02E8 (0x0004) [0x0000000000000000]              
	float                                              LastCorrectAimTime;                               		// 0x02EC (0x0004) [0x0000000000000000]              
	float                                              CurrInCorrectAimOffset;                           		// 0x02F0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216175 ];

		return pClassPointer;
	};

	void SetShellBarEffects ( unsigned char ShellType );
	void eventDisplayWeaponBar ( class ATGHUD* HUD );
	void DispalyFirstPersonImage ( class ATGHUD* HUD );
	void DisplayNavigator ( class ATGHUD* HUD );
	void DrawCrosshairEnemyInfo ( class ATGHUD* HUD );
	void DrawAmmoReload ( class ATGHUD* HUD );
	void DrawCircleCrosshair ( class ATGHUD* HUD );
	int GetFireShockOffset ( );
	int GetInCorrectAimOffset ( );
	int GetCrossHairShockOffset ( );
	void DisplayCentralHUD ( class ATGHUD* HUD );
	void NotifyTakeDamage ( unsigned char HitGroup, int Damage, int Armor );
	void SwitchRevertWarning ( );
	void DrawTankIcon ( class ATGHUD* HUD, struct FRotator Rot, struct FVector2D CenterPos );
	void DisplayDashboard ( class ATGHUD* HUD );
	void DisplayThirdPersonHUD ( class ATGHUD* HUD );
	void DisplayFirstPersonHUD ( class ATGHUD* HUD );
	void DisplayHud ( class AUTHUD* HUD, class UCanvas* Canvas );
	void Initialize ( );
};

UClass* UTGTankHUD::pClassPointer = NULL;

// Class TGTankGame.TGTankTurret
// 0x0004 (0x01D8 - 0x01D4)
class ATGTankTurret : public AActor
{
public:
	class UUDKSkeletalMeshComponent*                   Mesh;                                             		// 0x01D4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216279 ];

		return pClassPointer;
	};

};

UClass* ATGTankTurret::pClassPointer = NULL;

// Class TGTankGame.TGTankAmmoBox
// 0x0030 (0x0204 - 0x01D4)
class ATGTankAmmoBox : public AReplicationInfo
{
public:
	struct FTGTankAmmoInfo                             TankShellList[ 0x3 ];                             		// 0x01D4 (0x0030) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216335 ];

		return pClassPointer;
	};

	unsigned char GetBestSwitchShell ( );
	int AddAmmo ( int Amount, unsigned char CurrShellType );
	int GetTankShellCount ( unsigned char CurrShellType );
	class UClass* GetTankShellClass ( unsigned char CurrShellType );
};

UClass* ATGTankAmmoBox::pClassPointer = NULL;

// Class TGTankGame.TGTankTeamMatch
// 0x0018 (0x074C - 0x0734)
class ATGTankTeamMatch : public ATGTeamGame
{
public:
	float                                              TankHealthDamageReduction;                        		// 0x0734 (0x0004) [0x0000000000000000]              
	float                                              TankArmorDamageReduction;                         		// 0x0738 (0x0004) [0x0000000000000000]              
	TArray< struct FGroupedPickup >                    GroupedPickupArray;                               		// 0x073C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PickupRespawnTime;                                		// 0x0748 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216345 ];

		return pClassPointer;
	};

	void CalcAchiWhenKill ( class ATGTankTMPlayerReplicationInfo* Killer, class ATGTankTMPlayerReplicationInfo* Killed, class UClass* DamageType );
	void CalcMVP ( );
	void CalcACE ( );
	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	void StartMatch ( );
	void ChoosePickupFactory ( );
	void CheckAssistant ( class ATGRealTank* KilledTank, class ATGTankTMPlayerReplicationInfo* KillerPRI );
	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	void RestartPlayer ( class AController* NewPlayer );
	class APawn* SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot );
	void eventAddInventoryFor ( class APawn* PlayerPawn );
	void eventUpdateGameSpecificSettings ( struct FGameSpecificSettings Settings );
	void PostBeginPlay ( );
};

UClass* ATGTankTeamMatch::pClassPointer = NULL;

// Class TGTankGame.TGTankTMPlayerInput
// 0x0004 (0x0388 - 0x0384)
class UTGTankTMPlayerInput : public UTGPlayerInput
{
public:
	unsigned long                                      bIsShiftKeyDown : 1;                              		// 0x0384 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216608 ];

		return pClassPointer;
	};

	void SwitchToLastUsedWeapon ( );
	void SwitchWeapon ( unsigned char F );
	void SwitchTank ( unsigned char F );
	void GotoTopView ( );
	void GotoAlwaysSpectating ( );
	void ShowHelpMenu ( );
	void PressFKey ( );
	void Jump ( );
	void UnSnake ( );
	void Snake ( );
	void Use ( );
	void SwitchMoveMode ( );
	void PressVKey ( );
};

UClass* UTGTankTMPlayerInput::pClassPointer = NULL;

// Class TGTankGame.TGTankPickupFactory
// 0x0020 (0x03C8 - 0x03A8)
class ATGTankPickupFactory : public AUTPickupFactory
{
public:
	unsigned char                                      Type;                                             		// 0x03A8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      GroupIndex;                                       		// 0x03A9 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    PickupEffect;                                     		// 0x03AC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UTexture2D*                                  RadarIcon;                                        		// 0x03B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIconStartFlash : 1;                              		// 0x03B4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanBePickedUp : 1;                               		// 0x03B4 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	float                                              FlashStartTime;                                   		// 0x03B8 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  RepairRadarIcon;                                  		// 0x03BC (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  AmmoRadarIcon;                                    		// 0x03C0 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   RepairSuccessSound;                               		// 0x03C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216703 ];

		return pClassPointer;
	};

	class UTexture2D* GetRadarIcon ( );
	void EnablePickup ( );
	void ChooseNextPickupFactory ( );
	void SetPickupDisable ( );
	void Reset ( );
	void ClearIconFlash ( );
	void FlashIcon ( );
	void eventSetInitialState ( );
	void SetPickupMesh ( );
	void SetPickupHidden ( );
	void SetPickupVisible ( );
	void InitializePickup ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGTankPickupFactory::pClassPointer = NULL;

// Class TGTankGame.TGVehicleWheel_BlackEagle
// 0x0000 (0x0120 - 0x0120)
class UTGVehicleWheel_BlackEagle : public UUDKVehicleWheel
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216770 ];

		return pClassPointer;
	};

};

UClass* UTGVehicleWheel_BlackEagle::pClassPointer = NULL;

// Class TGTankGame.TGTank_BlackEagle
// 0x0000 (0x0DC4 - 0x0DC4)
class ATGTank_BlackEagle : public ATGRealTank
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216772 ];

		return pClassPointer;
	};

};

UClass* ATGTank_BlackEagle::pClassPointer = NULL;

// Class TGTankGame.TGVehicleWheel_Leopard2A6
// 0x0000 (0x0120 - 0x0120)
class UTGVehicleWheel_Leopard2A6 : public UUDKVehicleWheel
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216800 ];

		return pClassPointer;
	};

};

UClass* UTGVehicleWheel_Leopard2A6::pClassPointer = NULL;

// Class TGTankGame.TGTank_Leopard2A6
// 0x0000 (0x0DC4 - 0x0DC4)
class ATGTank_Leopard2A6 : public ATGRealTank
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216802 ];

		return pClassPointer;
	};

};

UClass* ATGTank_Leopard2A6::pClassPointer = NULL;

// Class TGTankGame.TGVehicleWheel_M1A2
// 0x0000 (0x0120 - 0x0120)
class UTGVehicleWheel_M1A2 : public UUDKVehicleWheel
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216830 ];

		return pClassPointer;
	};

};

UClass* UTGVehicleWheel_M1A2::pClassPointer = NULL;

// Class TGTankGame.TGTank_M1A2
// 0x0000 (0x0DC4 - 0x0DC4)
class ATGTank_M1A2 : public ATGRealTank
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216832 ];

		return pClassPointer;
	};

};

UClass* ATGTank_M1A2::pClassPointer = NULL;

// Class TGTankGame.TGVehicleWheel_MK3
// 0x0000 (0x0120 - 0x0120)
class UTGVehicleWheel_MK3 : public UUDKVehicleWheel
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216860 ];

		return pClassPointer;
	};

};

UClass* UTGVehicleWheel_MK3::pClassPointer = NULL;

// Class TGTankGame.TGTank_MK3
// 0x0000 (0x0DC4 - 0x0DC4)
class ATGTank_MK3 : public ATGRealTank
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216862 ];

		return pClassPointer;
	};

};

UClass* ATGTank_MK3::pClassPointer = NULL;

// Class TGTankGame.TGVehicleWheel_T90
// 0x0000 (0x0120 - 0x0120)
class UTGVehicleWheel_T90 : public UUDKVehicleWheel
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216888 ];

		return pClassPointer;
	};

};

UClass* UTGVehicleWheel_T90::pClassPointer = NULL;

// Class TGTankGame.TGTank_T90
// 0x0000 (0x0DC4 - 0x0DC4)
class ATGTank_T90 : public ATGRealTank
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216890 ];

		return pClassPointer;
	};

};

UClass* ATGTank_T90::pClassPointer = NULL;

// Class TGTankGame.TGVehicleWheel_Type99
// 0x0000 (0x0120 - 0x0120)
class UTGVehicleWheel_Type99 : public UUDKVehicleWheel
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216916 ];

		return pClassPointer;
	};

};

UClass* UTGVehicleWheel_Type99::pClassPointer = NULL;

// Class TGTankGame.TGTank_Type99
// 0x0000 (0x0DC4 - 0x0DC4)
class ATGTank_Type99 : public ATGRealTank
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216918 ];

		return pClassPointer;
	};

};

UClass* ATGTank_Type99::pClassPointer = NULL;

// Class TGTankGame.TGTankProj_Shell
// 0x0088 (0x0338 - 0x02B0)
class ATGTankProj_Shell : public ATGTankProjectile
{
public:
	class USoundCue*                                   JettingSound;                                     		// 0x02B0 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             JettingAC;                                        		// 0x02B4 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	unsigned long                                      bSpawnExplosionEffects : 1;                       		// 0x02B8 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bExploded : 1;                                    		// 0x02B8 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              DelayShutdownTime;                                		// 0x02BC (0x0004) [0x0000000000000000]              
	TArray< struct FMaterialImpactEffect >             TankSehllExplosionEffects;                        		// 0x02C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMaterialImpactEffect                       DefaultTankSehllExplosionEffect;                  		// 0x02CC (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              ShellReloadInterval;                              		// 0x0304 (0x0004) [0x0000000000000000]              
	float                                              ShellDamageRadius;                                		// 0x0308 (0x0004) [0x0000000000000000]              
	int                                                ArmorDamage;                                      		// 0x030C (0x0004) [0x0000000000000000]              
	int                                                HealthDamage;                                     		// 0x0310 (0x0004) [0x0000000000000000]              
	class UCameraShake*                                DamageCameraShake;                                		// 0x0314 (0x0004) [0x0000000000000000]              
	TArray< struct FTankTargetHitInfo >                TankHitInfoList;                                  		// 0x0318 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              HitImpulseScale;                                  		// 0x0324 (0x0004) [0x0000000000000000]              
	class UClass*                                      HitTailDamageType;                                		// 0x0328 (0x0004) [0x0000000000000000]              
	struct FVector                                     SpawnLoc;                                         		// 0x032C (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216946 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
	void Destroyed ( );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void ClientSpawnExplosionEffects ( );
	void SetTankHitInfo ( class ATGRealTank* Tank, unsigned char TankHitGroup, int TankHealthDamage, int TankArmorDamage );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	struct FMaterialImpactEffect GetTankShellExplosionEffect ( class UPhysicalMaterial* HitMaterial );
	class AActor* FindWeaponHitNormal ( struct FVector End, struct FVector Start, struct FVector* HitLocation, struct FVector* HitNormal, struct FTraceHitInfo* HitInfo );
	class UAudioComponent* PlayJettingSound ( class USoundCue* Sound, class UAudioComponent* AC, float FadeInTime );
	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
	void OnShutdownTimer ( );
};

UClass* ATGTankProj_Shell::pClassPointer = NULL;

// Class TGTankGame.TGTankBlockingBox
// 0x0000 (0x020C - 0x020C)
class ATGTankBlockingBox : public ADynamicSMActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216961 ];

		return pClassPointer;
	};

};

UClass* ATGTankBlockingBox::pClassPointer = NULL;

// Class TGTankGame.TGTankBodyHUD
// 0x001C (0x0058 - 0x003C)
class UTGTankBodyHUD : public UObject
{
public:
	unsigned char                                      HitGroup;                                         		// 0x003C (0x0001) [0x0000000000000000]              
	unsigned long                                      bFlashEffect : 1;                                 		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              FlashEffectTime;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              FlashRate;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  NormalTex;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  FlashTex;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  DrawTex;                                          		// 0x0054 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 216965 ];

		return pClassPointer;
	};

	void Draw ( class ATGHUD* HUD, struct FRotator Rot, struct FVector2D CenterPos );
	void Flash ( );
	void EndFlashEffect ( );
	void StartFlashEffect ( );
};

UClass* UTGTankBodyHUD::pClassPointer = NULL;

// Class TGTankGame.TGTankTMHUD
// 0x0118 (0x2048 - 0x1F30)
class ATGTankTMHUD : public ATGTMHUD
{
public:
	unsigned long                                      bShowFirstPersonTip : 1;                          		// 0x1F30 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowThirdPersonTip : 1;                          		// 0x1F30 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShowShiftUsage : 1;                              		// 0x1F30 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bShowSpaceUsage : 1;                              		// 0x1F30 (0x0004) [0x0000000000000000] [0x00000008] 
	class UTexture2D*                                  TankNewbieTip_Switch1st;                          		// 0x1F34 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  TankNewbieTip_Switch3rd;                          		// 0x1F38 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  TankNewbieTip_Space;                              		// 0x1F3C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  TankNewbieTip_Shift;                              		// 0x1F40 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  TankHealthBarTex;                                 		// 0x1F44 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  TankHealthBarBGTex;                               		// 0x1F48 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         TankHealthBarCoords;                              		// 0x1F4C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         TankHealthBarBGCoords;                            		// 0x1F5C (0x0010) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FVector2D >                         CrosshairEffectSizeRanges;                        		// 0x1F6C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVector2D >                         CrosshairEffectAlphaRanges;                       		// 0x1F78 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    CrosshairEffectPeriodsRanges;                     		// 0x1F84 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTexture2D*                                  HitTargetCrosshair;                               		// 0x1F90 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         HitTargetCrosshairCoords;                         		// 0x1F94 (0x0010) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  ObjectiveScreenIcon;                              		// 0x1FA4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  ObjectiveScreenIcon2;                             		// 0x1FA8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  ObjectiveScreenIcon3;                             		// 0x1FAC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  ObjectiveScreenFrame;                             		// 0x1FB0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  ObjectiveScreenFrame2;                            		// 0x1FB4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  ObjectiveScreenFrame3;                            		// 0x1FB8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  SelectPanel_Gov;                                  		// 0x1FBC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  SelectPanel_Reb;                                  		// 0x1FC0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  Selected_Gov;                                     		// 0x1FC4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  Selected_Reb;                                     		// 0x1FC8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  SelectDisabled;                                   		// 0x1FCC (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         SelectPanelCoords;                                		// 0x1FD0 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         SelectDisabledCoords;                             		// 0x1FE0 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         SelectedCoords;                                   		// 0x1FF0 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   SelectOffset;                                     		// 0x2000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              SelectCellWidth;                                  		// 0x2008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             TankHitFrontPS;                                   		// 0x200C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             TankHitRearPS;                                    		// 0x2010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             TankHitSidePS;                                    		// 0x2014 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             TankKillPS;                                       		// 0x2018 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             TankHitTailKillPS;                                		// 0x201C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             AssistantPS;                                      		// 0x2020 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              ResScaleX;                                        		// 0x2024 (0x0004) [0x0000000000000000]              
	float                                              ResScale;                                         		// 0x2028 (0x0004) [0x0000000000000000]              
	float                                              CachedClipX;                                      		// 0x202C (0x0004) [0x0000000000000000]              
	float                                              CachedClipY;                                      		// 0x2030 (0x0004) [0x0000000000000000]              
	float                                              AspectRatio;                                      		// 0x2034 (0x0004) [0x0000000000000000]              
	struct FVector                                     FeedbackPosOffset;                                		// 0x2038 (0x000C) [0x0000000000000000]              
	float                                              DefaultResScale;                                  		// 0x2044 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 217011 ];

		return pClassPointer;
	};

	void DebugFeedback ( int Index, int MultiKillLevel );
	void AddAssistantFeedback ( );
	void AddTankHitFeedback ( unsigned char HitGroup );
	void AddKillFeedBackMessage ( class UClass* DamageType, int MultiKillLevel, int Priority, unsigned long bUseInPriority, class APlayerReplicationInfo* KillerPRI, class APlayerReplicationInfo* KilledPRI, int OneShotKillNum, unsigned long bIsOneShotDeath, unsigned long bThroughWall );
	void NotifyHitEnemy ( int DamageHP, int DamageAC );
	void DisplayBigRadar ( );
	void DisplayMap ( );
	void DisplayNewbieHints ( );
	void DrawHealthBar ( float CenterPosX, float CenterPosY, float ProgressPct, float Scale );
	void DrawTankSelection ( );
	void DisplaySpectator ( );
	void DisplayAvatar ( );
	float GetResScale ( class UCanvas* DrawCanvas );
	void DrawGameHud ( );
	void DrawLivingHud ( );
};

UClass* ATGTankTMHUD::pClassPointer = NULL;

// Class TGTankGame.TGTankMapInfo
// 0x0004 (0x0438 - 0x0434)
class UTGTankMapInfo : public UTGMapInfo
{
public:
	float                                              SqureRadarSize;                                   		// 0x0434 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 217115 ];

		return pClassPointer;
	};

	float GetPickupSizeScale ( class ATGTankPickupFactory* Pickup );
	void DrawSquareMap ( class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float XPos, float YPos, float Width, float Height, unsigned long bFullDetail, float AspectRatio, unsigned long bShowHealth );
	void DrawMap ( class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float XPos, float YPos, float Width, float Height, unsigned long bFullDetail, float AspectRatio, float BkgImgAlpha );
};

UClass* UTGTankMapInfo::pClassPointer = NULL;

// Class TGTankGame.TGTankTMHUD_ProgressBar
// 0x0000 (0x0048 - 0x0048)
class UTGTankTMHUD_ProgressBar : public UTGHUD_ProgressBar
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 217168 ];

		return pClassPointer;
	};

	void UpdateRespawnTimeBar ( );
};

UClass* UTGTankTMHUD_ProgressBar::pClassPointer = NULL;

// Class TGTankGame.TGTankScoreBoard
// 0x0040 (0x06A0 - 0x0660)
class UTGTankScoreBoard : public UTGTeamHUDScoreBoard
{
public:
	struct FVector2D                                   LeftHPOffset;                                     		// 0x0660 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   LeftACOffset;                                     		// 0x0668 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   RightHPOffset;                                    		// 0x0670 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   RightACOffset;                                    		// 0x0678 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   FrontHPOffset;                                    		// 0x0680 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   FrontACOffset;                                    		// 0x0688 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   RearHPOffset;                                     		// 0x0690 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   RearACOffset;                                     		// 0x0698 (0x0008) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 217169 ];

		return pClassPointer;
	};

	void DrawItemText ( int PosX, int PosY, class ATGPlayerReplicationInfo* PRI, struct FColor* TextColor );
	void DrawItemTextSelf ( int PosX, int PosY, class ATGPlayerReplicationInfo* PRI, struct FColor* TextColor );
	void DrawScoreBoardBG ( );
};

UClass* UTGTankScoreBoard::pClassPointer = NULL;

// Class TGTankGame.TGTankDBHUD
// 0x0090 (0x20D8 - 0x2048)
class ATGTankDBHUD : public ATGTankTMHUD
{
public:
	class UTexture2D*                                  BaseBarReb;                                       		// 0x2048 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  BaseBarGov;                                       		// 0x204C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  BaseHitTex;                                       		// 0x2050 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         BaseBarCoords;                                    		// 0x2054 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         BaseHitCoords;                                    		// 0x2064 (0x0010) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  BaseHPTex;                                        		// 0x2074 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  BaseHPBGTex;                                      		// 0x2078 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         BaseHPCoords;                                     		// 0x207C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   BaseHPBGOffset;                                   		// 0x208C (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      HPGreen;                                          		// 0x2094 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      HPYellow;                                         		// 0x2098 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      HPRed;                                            		// 0x209C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             BaseHitPS;                                        		// 0x20A0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class USoundCue*                                   BaseIsAttackedSnd;                                		// 0x20A4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UClass*                                      BaseHealthClass;                                  		// 0x20A8 (0x0004) [0x0000000000000000]              
	class UTGTDBHUD_BaseHealth*                        BaseHealth;                                       		// 0x20AC (0x0004) [0x0000000000000000]              
	unsigned char                                      EnemyBaseAlpha;                                   		// 0x20B0 (0x0001) [0x0000000000000000]              
	unsigned char                                      SelfBaseAlpha;                                    		// 0x20B1 (0x0001) [0x0000000000000000]              
	float                                              EnemyBaseIconSize;                                		// 0x20B4 (0x0004) [0x0000000000000000]              
	float                                              SelfBaseIconSize;                                 		// 0x20B8 (0x0004) [0x0000000000000000]              
	float                                              BaseHitFlashTime;                                 		// 0x20BC (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bShowBaseHitMessage : 1;                          		// 0x20C0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BaseHitMessageEndOfLife;                          		// 0x20C4 (0x0004) [0x0000000000000000]              
	float                                              BaseHitMessageLifeTime;                           		// 0x20C8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     BaseIsUnderAttack;                                		// 0x20CC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 217170 ];

		return pClassPointer;
	};

	void AddBaseHitFeedback ( );
	void DisplayBaseHitMessage ( );
	void HideBaseHitMessage ( );
	void ShowBaseHitMessage ( );
	void DrawShadowedText ( struct FString Text, float X, float Y, float Scale );
	void DrawBaseHPBar ( struct FVector2D ScreenRelativePos, float ProgressPct, struct FString CenterText, class ATGTankDestructibleBase* DBase );
	void DrawCrosshairBaseHealthBar ( );
	void SwitchEnemyBaseAlpha ( );
	void SwitchSelfBaseAlpha ( );
	void DisplayTeamScore ( );
	void DrawLivingHud ( );
	void eventPostBeginPlay ( );
};

UClass* ATGTankDBHUD::pClassPointer = NULL;

// Class TGTankGame.TGTDBHUD_BaseHealth
// 0x0040 (0x007C - 0x003C)
class UTGTDBHUD_BaseHealth : public UObject
{
public:
	class UTexture2D*                                  HitBG;                                            		// 0x003C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  BaseHealthBG;                                     		// 0x0040 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  FlashBG;                                          		// 0x0044 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  HealthBar;                                        		// 0x0048 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  BaseHealthText;                                   		// 0x004C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UMaterial*                                   FlashMat;                                         		// 0x0050 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UMaterial*                                   BaseHealthMat;                                    		// 0x0054 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UMaterial*                                   BaseHealthTextMat;                                		// 0x0058 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UMaterialInstanceConstant*                   FlashMIC;                                         		// 0x005C (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   BaseHealthMIC;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   BaseHealthTextMIC;                                		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   CentralRelPos;                                    		// 0x0068 (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                OldBaseHealth;                                    		// 0x0070 (0x0004) [0x0000000000000000]              
	unsigned long                                      bShowHit : 1;                                     		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowHealthFlash : 1;                             		// 0x0074 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              ResScale;                                         		// 0x0078 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 217181 ];

		return pClassPointer;
	};

	void Display ( );
	void HideBaseHealthHitBG ( );
	void NotifyBaseTakeDamage ( );
	void UpateParameter ( );
	void InitMIC ( );
	void CreateMIC ( class UMaterial* Mat, class UMaterialInstanceConstant** MIC );
	void Draw ( );
};

UClass* UTGTDBHUD_BaseHealth::pClassPointer = NULL;

// Class TGTankGame.TGTankDBPlayerController
// 0x0028 (0x0A7C - 0x0A54)
class ATGTankDBPlayerController : public ATGTankTMPlayerController
{
public:
	TArray< class ATGTankDestructibleBase* >           BaseBuildings;                                    		// 0x0A54 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ATGTankDestructibleBase*                     SelfBase;                                         		// 0x0A60 (0x0004) [0x0000000000000000]              
	class ATGTankDestructibleBase*                     EnemyBase;                                        		// 0x0A64 (0x0004) [0x0000000000000000]              
	TArray< struct FSeeObjective >                     BaseInstigators;                                  		// 0x0A68 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              BaseInstigatorInvisibleDelay;                     		// 0x0A74 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bBaseIsAttackedSoundPlayed : 1;                   		// 0x0A78 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 217208 ];

		return pClassPointer;
	};

	bool IsOjbectiveInsight ( class ATGRealTank* Tank );
	void NotifyTankDied ( class ATGRealTank* Tank );
	void CheckBaseInstigators ( );
	void AddBaseInstigator ( class ATGRealTank* Tank );
	void NotifyClientHitBase ( int Damage );
	void AcknowledgePossession ( class APawn* P );
	void SetMyBase ( );
	void NotifyLocalPlayerTeamReceived ( );
	void eventPostBeginPlay ( );
};

UClass* ATGTankDBPlayerController::pClassPointer = NULL;

// Class TGTankGame.TGTankDestructibleBase
// 0x0030 (0x0204 - 0x01D4)
class ATGTankDestructibleBase : public AActor
{
public:
	unsigned char                                      TeamIndex;                                        		// 0x01D4 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Health;                                           		// 0x01D8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                LastHealth;                                       		// 0x01DC (0x0004) [0x0000000000000000]              
	float                                              HealthChangeTime;                                 		// 0x01E0 (0x0004) [0x0000000000000000]              
	float                                              AttackDistance;                                   		// 0x01E4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                HealthMax;                                        		// 0x01E8 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	class UStaticMeshComponent*                        NormalMesh;                                       		// 0x01EC (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        DamagedMesh;                                      		// 0x01F0 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        BrokenMesh;                                       		// 0x01F4 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        CurrentMesh;                                      		// 0x01F8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct ATGTankDestructibleBase_FInstigatorInfo     LastInstigator;                                   		// 0x01FC (0x0008) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 217211 ];

		return pClassPointer;
	};

	struct FColor GetHealthColor ( );
	void GetHealthLevel ( int* Level, float* LevelPct, float* TotalPct );
	class UStaticMeshComponent* GetCurrentMesh ( );
	void SetupMesh ( );
	void NotifyHealthChanged ( );
	unsigned char eventScriptGetTeamNum ( );
	void NotifyBaseInstigator ( struct ATGTankDestructibleBase_FInstigatorInfo Info );
	bool WithinAttackDistance ( class ATGTankProj_Shell* Shell );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void eventReset ( );
	void eventReplicatedEvent ( struct FName VarName );
	void eventPostBeginPlay ( );
};

UClass* ATGTankDestructibleBase::pClassPointer = NULL;

// Class TGTankGame.TGTankTMPawn
// 0x0000 (0x1110 - 0x1110)
class ATGTankTMPawn : public ATGTMPawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 217339 ];

		return pClassPointer;
	};

	void NotifyTeamChanged ( );
	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
};

UClass* ATGTankTMPawn::pClassPointer = NULL;

// Class TGTankGame.TGTankDBMatch
// 0x0000 (0x074C - 0x074C)
class ATGTankDBMatch : public ATGTankTeamMatch
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 217340 ];

		return pClassPointer;
	};

	void NotifyBaseDestroyed ( unsigned char OwnerTeamIndex, class ATGTankDBPlayerController* BaseDestroyer );
	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	void eventUpdateGameSpecificSettings ( struct FGameSpecificSettings Settings );
};

UClass* ATGTankDBMatch::pClassPointer = NULL;

// Class TGTankGame.TGTankDBPawn
// 0x0000 (0x1110 - 0x1110)
class ATGTankDBPawn : public ATGTankTMPawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 217357 ];

		return pClassPointer;
	};

};

UClass* ATGTankDBPawn::pClassPointer = NULL;

// Class TGTankGame.TGTankDBPlayerReplicationInfo
// 0x0004 (0x0FF8 - 0x0FF4)
class ATGTankDBPlayerReplicationInfo : public ATGTankTMPlayerReplicationInfo
{
public:
	int                                                BaseDamage;                                       		// 0x0FF4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 217358 ];

		return pClassPointer;
	};

	float GetMvpValue ( );
	int GetGameScore ( );
	void AddBaseDamage ( int Damage );
};

UClass* ATGTankDBPlayerReplicationInfo::pClassPointer = NULL;

// Class TGTankGame.TGTankPlayerInventoryManager
// 0x0000 (0x022C - 0x022C)
class ATGTankPlayerInventoryManager : public ATGInventoryManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 217386 ];

		return pClassPointer;
	};

	void AddAllFunctionalItem ( class ATGPlayerReplicationInfo* PRI );
};

UClass* ATGTankPlayerInventoryManager::pClassPointer = NULL;

// Class TGTankGame.TGTankMessage
// 0x0018 (0x007C - 0x0064)
class UTGTankMessage : public UUTLocalMessage
{
public:
	struct FString                                     AttackingSelfBase;                                		// 0x0064 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LicenseRequired;                                  		// 0x0070 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 217438 ];

		return pClassPointer;
	};

	float GetLifeTime ( int Switch );
	float GetPos ( int Switch, class AHUD* myHUD );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGTankMessage::pClassPointer = NULL;

// Class TGTankGame.TGTankFactory
// 0x0014 (0x0304 - 0x02F0)
class ATGTankFactory : public AUTVehicleFactory
{
public:
	class UDrawSphereComponent*                        ShapeComponent;                                   		// 0x02F0 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned char                                      TankType;                                         		// 0x02F4 (0x0001) [0x0000000000000000]              
	TArray< struct FString >                           VehicleClassPathList;                             		// 0x02F8 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 217444 ];

		return pClassPointer;
	};

	struct FString GetVehicleClassPath ( );
	void GetSpawnPosition ( class UClass* TankClass, struct FVector* SpawnLoc, struct FRotator* SpawnRot );
	void PostBeginPlay ( );
};

UClass* ATGTankFactory::pClassPointer = NULL;

// Class TGTankGame.TGTankMatchInfoMessage
// 0x0018 (0x007C - 0x0064)
class UTGTankMatchInfoMessage : public UUTLocalMessage
{
public:
	struct FString                                     TankTeamMatchMessage;                             		// 0x0064 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TankDBMatchMessage;                               		// 0x0070 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 217566 ];

		return pClassPointer;
	};

	float GetPos ( int Switch, class AHUD* myHUD );
	int GetFontSize ( int Switch, class APlayerReplicationInfo* RelatedPRI1, class APlayerReplicationInfo* RelatedPRI2, class APlayerReplicationInfo* LocalPlayer );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGTankMatchInfoMessage::pClassPointer = NULL;

// Class TGTankGame.TGTankSeqEvent_DestructibleHealthChanged
// 0x000C (0x010C - 0x0100)
class UTGTankSeqEvent_DestructibleHealthChanged : public USequenceEvent
{
public:
	int                                                Health;                                           		// 0x0100 (0x0004) [0x0000000000000000]              
	int                                                HealthMax;                                        		// 0x0104 (0x0004) [0x0000000000000000]              
	float                                              HealthPercent;                                    		// 0x0108 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 217745 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UTGTankSeqEvent_DestructibleHealthChanged::pClassPointer = NULL;

// Class TGTankGame.TGTTMPlayerStart
// 0x0004 (0x02C8 - 0x02C4)
class ATGTTMPlayerStart : public AUTTeamPlayerStart
{
public:
	class UDrawBoxComponent*                           ShapeComponent;                                   		// 0x02C4 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 217787 ];

		return pClassPointer;
	};

	bool IsBlocked ( class UClass* BaseClass, int TankLength, int TankWidth );
};

UClass* ATGTTMPlayerStart::pClassPointer = NULL;

// Class TGTankGame.TGTankPickupMessage
// 0x0018 (0x007C - 0x0064)
class UTGTankPickupMessage : public UUTLocalMessage
{
public:
	struct FString                                     RepairedMessage;                                  		// 0x0064 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NoNeedToRepairMessage;                            		// 0x0070 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 218230 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGTankPickupMessage::pClassPointer = NULL;

// Class TGTankGame.TGTankProj_APShell
// 0x0000 (0x0338 - 0x0338)
class ATGTankProj_APShell : public ATGTankProj_Shell
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 218470 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
};

UClass* ATGTankProj_APShell::pClassPointer = NULL;

// Class TGTankGame.TGTankProj_HEShell
// 0x000C (0x0344 - 0x0338)
class ATGTankProj_HEShell : public ATGTankProj_Shell
{
public:
	TArray< struct FSplashDamageLevel >                SplashDamageLevelList;                            		// 0x0338 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 218493 ];

		return pClassPointer;
	};

	int HurtTankRadius ( class ATGRealTank* VictimTank, struct FVector HurtOrigin );
	int HurtBaseRadius ( class ATGTankDestructibleBase* BaseBuilding, struct FVector HurtOrigin );
	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
};

UClass* ATGTankProj_HEShell::pClassPointer = NULL;

// Class TGTankGame.TGTankProj_NormalShell
// 0x0000 (0x0338 - 0x0338)
class ATGTankProj_NormalShell : public ATGTankProj_Shell
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 218551 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
};

UClass* ATGTankProj_NormalShell::pClassPointer = NULL;

// Class TGTankGame.TGTankWeaponSwitchMessage
// 0x0000 (0x0064 - 0x0064)
class UTGTankWeaponSwitchMessage : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 218718 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGTankWeaponSwitchMessage::pClassPointer = NULL;

// Class TGTankGame.TGTDBHUD_GameTime
// 0x0008 (0x0044 - 0x003C)
class UTGTDBHUD_GameTime : public UTGHUD_ItemBase
{
public:
	class UUIScene*                                    TimeLeftSceneTemplate;                            		// 0x003C (0x0004) [0x0000000000000000]              
	class UUIScene*                                    TimeLeftScene;                                    		// 0x0040 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 218816 ];

		return pClassPointer;
	};

	void UpdateTimeLeft ( );
	void Tick ( );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
};

UClass* UTGTDBHUD_GameTime::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif