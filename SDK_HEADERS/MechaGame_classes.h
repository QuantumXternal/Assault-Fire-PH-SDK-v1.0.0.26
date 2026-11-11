/*
#############################################################################################
# Assault Fire (1.0.0.26) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: MechaGame_classes.h
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

#define CONST_MAX_TEXT_MSG_COUNT                                 5
#define CONST_MAX_MECHA_TYPE_COUNT                               5
#define CONST_MAX_MECHA_LICENSE_NUM                              6

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum MechaGame.MechaTypes.EMechaSpecialMove
/*enum EMechaSpecialMove
{
	MechaSpecialMove_None                              = 0,
	MechaSpecialMove_Death                             = 1,
	MechaSpecialMove_MAX                               = 2
};*/

// Enum MechaGame.MechaDestructibleItem.EHealthChangeType
/*enum EHealthChangeType
{
	HCT_None                                           = 0,
	HCT_Dec_Normal                                     = 1,
	HCT_Dec_Special                                    = 2,
	HCT_Inc_Fix                                        = 3,
	HCT_MAX                                            = 4
};*/

// Enum MechaGame.MechaDestructibleItem.ItemType
/*enum ItemType
{
	IT_FrontCore                                       = 0,
	IT_BaseCore                                        = 1,
	IT_MAX                                             = 2
};*/

// Enum MechaGame.MechaGameHUD.ETextInfoType
/*enum ETextInfoType
{
	TIT_DoorIsToOpenIn                                 = 0,
	TIT_DoorIsToOpenIn01                               = 1,
	TIT_DoorIsToOpenIn02                               = 2,
	TIT_DoorIsToOpenIn03                               = 3,
	TIT_DoorOpened_Attacker                            = 4,
	TIT_DoorOpened_Defender                            = 5,
	TIT_DoorSwitch_Attacker                            = 6,
	TIT_DoorSwitch_Defender                            = 7,
	TIT_RoundStart_Attacker                            = 8,
	TIT_RoundStart_Defender                            = 9,
	TIT_EnemyInBase_Defender                           = 10,
	TIT_RoundEnd_BaseDestroyed                         = 11,
	TIT_RoundEnd_BaseDefended                          = 12,
	TIT_MAX                                            = 13
};*/

// Enum MechaGame.TGMechaTypes.EMechaWeaponType
/*enum EMechaWeaponType
{
	MechaWeaponType_MachineGun                         = 0,
	MechaWeaponType_RocketLauncher                     = 1,
	MechaWeaponType_LaserBlade                         = 2,
	MechaWeaponType_ShockCannon                        = 3,
	MechaWeaponType_PenetrativeCannon                  = 4,
	MechaWeaponType_HPFDetector                        = 5,
	MechaWeaponType_Howitzer                           = 6,
	MechaWeaponType_Aerogun                            = 7,
	MechaWeaponType_Thunder                            = 8,
	MechaWeaponType_Electrowelding                     = 9,
	MechaWeaponType_Unclassified                       = 10,
	MechaWeaponType_MAX                                = 11
};*/

// Enum MechaGame.TGMechaTypes.EMechaLicenseType
/*enum EMechaLicenseType
{
	LT_None                                            = 0,
	LT_TheOne                                          = 1,
	LT_HulkBuster                                      = 2,
	LT_Punisher                                        = 3,
	LT_Havok                                           = 4,
	LT_SpiderSence                                     = 5,
	LT_AllInOne                                        = 6,
	LT_MAX                                             = 7
};*/

// Enum MechaGame.TGMechaTypes.EMechaWeaponPosition
/*enum EMechaWeaponPosition
{
	MWP_None                                           = 0,
	MWP_RightHand                                      = 1,
	MWP_LeftHand                                       = 2,
	MWP_RightShoulder                                  = 3,
	MWP_LeftShoulder                                   = 4,
	MWP_MAX                                            = 5
};*/

// Enum MechaGame.TGMechaTypes.EMovementState
/*enum EMovementState
{
	MovementState_None                                 = 0,
	MovementState_Normal                               = 1,
	MovementState_GroundBoosting                       = 2,
	MovementState_AirBoosting                          = 3,
	MovementState_MAX                                  = 4
};*/

// Enum MechaGame.TGMechaTypes.EMechaWeaponAimDisperseType
/*enum EMechaWeaponAimDisperseType
{
	AimDisperseType_Motionless                         = 0,
	AimDisperseType_Jump                               = 1,
	AimDisperseType_Move                               = 2,
	AimDisperseType_MAX                                = 3
};*/

// Enum MechaGame.TGMechaTypes.EMechaType
/*enum EMechaType
{
	MechaType_TheOne                                   = 0,
	MechaType_HulkBuster                               = 1,
	MechaType_Punisher                                 = 2,
	MechaType_Havok                                    = 3,
	MechaType_SpiderSence                              = 4,
	MechaType_MAX                                      = 5
};*/

// Enum MechaGame.MechaHalfRoundGame.ERoundState
/*enum ERoundState
{
	RS_FirstHalf                                       = 0,
	RS_SecondHalf                                      = 1,
	RS_MAX                                             = 2
};*/

// Enum MechaGame.MechaSkillBase.ESkillLevel
/*enum ESkillLevel
{
	SkillLevel_None                                    = 0,
	SkillLevel                                         = 1,
	SkillLevel01                                       = 2,
	SkillLevel02                                       = 3,
	SkillLevel_MAX                                     = 4
};*/

// Enum MechaGame.TGMechaVolume.EVolumeType
/*enum EVolumeType
{
	VT_SpawnArea                                       = 0,
	VT_BaseArea                                        = 1,
	VT_MAX                                             = 2
};*/

// Enum MechaGame.TGMechaAnimBlendByFlying.EMechaFlyingState
/*enum EMechaFlyingState
{
	MechaFlying_Start                                  = 0,
	MechaFlying_Idle                                   = 1,
	MechaFlying_Fly                                    = 2,
	MechaFlying_None                                   = 3,
	MechaFlying_MAX                                    = 4
};*/

// Enum MechaGame.TGMechaDoomMatch.EDoorState
/*enum EDoorState
{
	DoorState_Neutral                                  = 0,
	DoorState_Attacker                                 = 1,
	DoorState_Defender                                 = 2,
	DoorState_MAX                                      = 3
};*/

// Enum MechaGame.TGMechaDoomMatch.ESpeedState
/*enum ESpeedState
{
	Speed_Normal                                       = 0,
	Speed_Accelerate                                   = 1,
	Speed_Decelerate                                   = 2,
	Speed_MAX                                          = 3
};*/

// Enum MechaGame.TGMechaDoomMatch.EPhaseType
/*enum EPhaseType
{
	PhaseType_P1                                       = 0,
	PhaseType_P2                                       = 1,
	PhaseType_P3                                       = 2,
	PhaseType_MAX                                      = 3
};*/

// Enum MechaGame.TGMechaGameHUD.TipSoundType
/*enum TipSoundType
{
	TS_KillMecha                                       = 0,
	TS_MechaImpaired                                   = 1,
	TS_LackEnergy                                      = 2,
	TS_AmmoReload                                      = 3,
	TS_DoubleDamage                                    = 4,
	TS_CoreIsAttacked                                  = 5,
	TS_MAX                                             = 6
};*/

// Enum MechaGame.TGMechaPlayerReplicationInfo.EXPIncType
/*enum EXPIncType
{
	IncType_MechaKill                                  = 0,
	IncType_MechaDamage                                = 1,
	IncType_ItemDamage                                 = 2,
	IncType_TakenDamage                                = 3,
	IncType_CoreSupply                                 = 4,
	IncType_DoorSwitch                                 = 5,
	IncType_FixMecha                                   = 6,
	IncType_FixBase                                    = 7,
	IncType_MAX                                        = 8
};*/

// Enum MechaGame.TGMechaPickupFactory.EMechaPickupType
/*enum EMechaPickupType
{
	PT_Repair                                          = 0,
	PT_MAX                                             = 1
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class MechaGame.MechaFactoryBase
// 0x002C (0x02D8 - 0x02AC)
class AMechaFactoryBase : public ANavigationPoint
{
public:
	struct FString                                     VehicleClassPath;                                 		// 0x02AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHasLockedVehicle : 1;                            		// 0x02B8 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bReplicateChildVehicle : 1;                       		// 0x02B8 (0x0004) [0x0000000000000000] [0x00000002] 
	class UClass*                                      VehicleClass;                                     		// 0x02BC (0x0004) [0x0000000000000000]              
	class AMechaBase*                                  ChildVehicle;                                     		// 0x02C0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              RespawnProgress;                                  		// 0x02C4 (0x0004) [0x0000000000000000]              
	struct FVector                                     HUDLocation;                                      		// 0x02C8 (0x000C) [0x0000000000000000]              
	int                                                TeamNum;                                          		// 0x02D4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2019 ];

		return pClassPointer;
	};

	unsigned char GetTeamNum ( );
	void SetHUDLocation ( struct FVector NewHUDLocation );
	void eventSpawnVehicle ( );
};

UClass* AMechaFactoryBase::pClassPointer = NULL;

// Class MechaGame.MechaGame
// 0x0004 (0x0738 - 0x0734)
class AMechaGame : public ATGTeamGame
{
public:
	float                                              MechaMaxFlyHeight;                                		// 0x0734 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2020 ];

		return pClassPointer;
	};

	void CheckAssistant ( class ATGRealMecha* KilledMecha, class ATGMechaPlayerReplicationInfo* KillerPRI );
	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
	void CalcACE ( );
	void CalcMVP ( );
	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	void ScoreKill ( class AController* Killer, class AController* Other );
	void SetMechaMaxFlayHeight ( float MaxHeight );
	void AddDefaultInventoryEx ( class APawn* PlayerPawn, int Count );
	void NotifyItemDestroyed ( class AMechaDestructibleItem* Item, class AMechaGamePlayerController* InstigatorPC );
	void NotifyCurrentTarget ( class AMechaDestructibleItem* Item );
};

UClass* AMechaGame::pClassPointer = NULL;

// Class MechaGame.MechaGamePlayerController
// 0x002C (0x0A24 - 0x09F8)
class AMechaGamePlayerController : public ATGTeamPlayerController
{
public:
	TArray< struct FMechaObjective >                   ClientObjectives;                                 		// 0x09F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMechaSpecialMoveStruct                     PendingMoveStruct;                                		// 0x0A04 (0x0010) [0x0000000000000000]              
	class APawn*                                       ViewTargetDriver;                                 		// 0x0A14 (0x0004) [0x0000000000000000]              
	unsigned char                                      CurrentViewTeamIndex;                             		// 0x0A18 (0x0001) [0x0000000000000000]              
	float                                              RespawnTime;                                      		// 0x0A1C (0x0004) [0x0000000000000000]              
	float                                              RespawnStartTime;                                 		// 0x0A20 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2021 ];

		return pClassPointer;
	};

	void ReceiveTextInfo ( unsigned char Type );
	void ReceiveParticleMessage ( int MessageSwitch );
	void ReinforceWeapon ( float DamageScaleDelta, float Duration );
	void NotifySkillUsed ( class AMechaSkillBase* Skill );
	void TimerServerToClientDoSpecialMove ( );
	void ServerToClientDoSpecialMove ( struct FMechaSpecialMoveStruct NewMoveStruct, unsigned long bForceMove );
	void eventServerDictateAdditivSpecialMove ( unsigned char NewMove, int InSpecialMoveFlags );
	void eventServerDictatSpecialMove ( unsigned char NewMove, int InSpecialMoveFlags );
	void ClientToServerDoSpecialMove ( struct FMechaSpecialMoveStruct NewMoveStruct, unsigned long bForceMove, int RotYaw );
	void eventDoAdditivSpecialMove ( unsigned char NewMove, unsigned long bForceMove, int InSpecialMoveFlags );
	void eventDoSpecialMove ( unsigned char NewMove, unsigned long bForceMove, int InSpecialMoveFlags );
	void ServerSetHealth ( int NewHealth );
	void SetHealth ( int NewHealth );
	void eventClientHearSound ( class USoundCue* ASound, class AActor* SourceActor, struct FVector SourceLocation, unsigned long bStopWhenOwnerDestroyed, unsigned long bIsOccluded );
	void ClientSetRespawnStartTime ( float RespTime, float RespDelay );
	void NotifyViewTargetUpdate ( );
	void eventClientSetViewTarget ( class AActor* A, struct FViewTargetTransitionParams TransitionParams );
	void ProcessFrozenStart ( struct FVector* newAccel );
	float eventGetFOVAngle ( );
	void eventGetPlayerViewPoint ( struct FVector* POVLocation, struct FRotator* POVRotation );
	void NotifySkillCreated ( class AMechaSkillBase* Skill );
	void DrawObjectives ( class AHUD* H );
	void DrawHUD ( class AHUD* H );
	void ClientReset ( );
	void ClientRestart ( class APawn* NewPawn );
	void ClearObjectives ( );
	bool IsObjectiveInsight ( class AMecha* Mecha );
	void AddObjective ( class AMecha* Mecha, unsigned long bInSight, unsigned long bEnemy );
	void eventPlayerTick ( float DeltaTime );
};

UClass* AMechaGamePlayerController::pClassPointer = NULL;

// Class MechaGame.MechaGamePlayerReplicationInfo
// 0x0040 (0x0F74 - 0x0F34)
class AMechaGamePlayerReplicationInfo : public ATGTeamPlayerReplicationInfo
{
public:
	float                                              GameScore;                                        		// 0x0F34 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              LastGameScoreTime;                                		// 0x0F38 (0x0004) [0x0000000000000000]              
	int                                                TimesAssist;                                      		// 0x0F3C (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FPlayerStat                                 PlayerStat;                                       		// 0x0F40 (0x0020) [0x0000000000000000]              
	unsigned char                                      LicenseList[ 0x6 ];                               		// 0x0F60 (0x0006) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      MechaType;                                        		// 0x0F66 (0x0001) [0x0000000000000020]              ( CPF_Net )
	TArray< unsigned char >                            NeedLicenseMechaTypeList;                         		// 0x0F68 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2022 ];

		return pClassPointer;
	};

	bool NeedLicenseFor ( unsigned char NewType );
	bool HasLicenseFor ( unsigned char NewType );
	bool HasMechaLicense ( unsigned char LicenseType );
	void AddMechaLicense ( unsigned char LicenseType );
	void NotifyMechaSelected ( unsigned char Type );
	void SetMechaType ( unsigned char NewType );
	float GetMvpValue ( );
	void RoundClear ( );
};

UClass* AMechaGamePlayerReplicationInfo::pClassPointer = NULL;

// Class MechaGame.MechaGameReplicationInfo
// 0x001C (0x034C - 0x0330)
class AMechaGameReplicationInfo : public ATGTeamGameReplicationInfo
{
public:
	class ATGPlayerReplicationInfo*                    MVPPRI;                                           		// 0x0330 (0x0004) [0x0000000000000000]              
	TArray< struct FGameMechaStat >                    GameMechaStats;                                   		// 0x0334 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMechaWeaponStat >                  MechaWeaponStatistics;                            		// 0x0340 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2023 ];

		return pClassPointer;
	};

	unsigned char GetMechaTypeForWeapon ( unsigned char WeapType );
	void NotifyMechaWeaponDamage ( unsigned char MechaWeaponType, int Damage );
	void NotifyMechaSelected ( unsigned char MechaType );
};

UClass* AMechaGameReplicationInfo::pClassPointer = NULL;

// Class MechaGame.MechaRoundGameReplicationInfo
// 0x0028 (0x0374 - 0x034C)
class AMechaRoundGameReplicationInfo : public AMechaGameReplicationInfo
{
public:
	TArray< struct FMechaRoundStat >                   RoundStats;                                       		// 0x034C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FDoorSwitchStat                             DoorStat;                                         		// 0x0358 (0x0010) [0x0000000000000000]              
	unsigned char                                      AttackerTimesWin;                                 		// 0x0368 (0x0001) [0x0000000000000000]              
	unsigned char                                      DefencerTimesWin;                                 		// 0x0369 (0x0001) [0x0000000000000000]              
	unsigned long                                      bRoundStarted : 1;                                		// 0x036C (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	int                                                RoundCount;                                       		// 0x0370 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2024 ];

		return pClassPointer;
	};

	void ClientRoundClear ( );
	void RoundClear ( );
};

UClass* AMechaRoundGameReplicationInfo::pClassPointer = NULL;

// Class MechaGame.MechaSpecialMove
// 0x0020 (0x005C - 0x003C)
class UMechaSpecialMove : public UObject
{
public:
	unsigned char                                      MyMove;                                           		// 0x003C (0x0001) [0x0000000000000000]              
	class AMechaBase*                                  MechaOwner;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	class AMechaGamePlayerController*                  PCOwner;                                          		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              SpeedModifier;                                    		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCanFireWeapon : 1;                               		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLockPawnRotation : 1;                            		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPawnRotationLocked : 1;                          		// 0x004C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDisableMovement : 1;                             		// 0x004C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bMovementDisabled : 1;                            		// 0x004C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bDisableLook : 1;                                 		// 0x004C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bLastCanDoSpecialMove : 1;                        		// 0x004C (0x0004) [0x0000000000000000] [0x00000040] 
	float                                              LastCanDoSpecialMoveTime;                         		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAnimNodeSequence*                           SequenceNode;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                Flags;                                            		// 0x0058 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2025 ];

		return pClassPointer;
	};

	bool eventGetAimOffsetOverride ( struct FRotator* DeltaRot );
	void eventRigidBodyWorldCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, struct FCollisionImpactData* RigidCollisionDate );
	void OnRigidBodySpringOverextension ( class URB_BodyInstance* BodyInstance );
	bool ShouldReplicate ( );
	void FirePressedNotification ( );
	void RootMotionExtracted ( class USkeletalMeshComponent* SkelComp, struct FBoneAtom* ExtractedRootMotionDelta );
	void RootMotionModeChanged ( class USkeletalMeshComponent* SkelComp );
	void LimitViewRotation ( struct FRotator* out_ViewRotation );
	bool IsPawnRotationLocked ( );
	void BS_AnimEndNotify ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void Tick ( float DeltaTime );
	void SetLockPawnRotation ( unsigned long bLock );
	void SetMovementLock ( unsigned long bEnable );
	void SpecialMoveEnded ( unsigned char PrevMove, unsigned char NextMove );
	void SpecialMoveStarted ( unsigned long bForced, unsigned char PrevMove );
	bool CanInteractWithPawn ( class APVEPawn* OtherPawn );
	bool InternalCanDoSpecialMove ( );
	bool CanDoSpecialMove ( unsigned long bForceCheck );
	bool CanOverridSpecialMove ( unsigned char InMove );
	bool CanOverrideMoveWith ( unsigned char NewMove );
	bool CanChainMove ( unsigned char NextMove );
};

UClass* UMechaSpecialMove::pClassPointer = NULL;

// Class MechaGame.MechaTypes
// 0x0000 (0x003C - 0x003C)
class UMechaTypes : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2026 ];

		return pClassPointer;
	};

};

UClass* UMechaTypes::pClassPointer = NULL;

// Class MechaGame.TGMechaTypes
// 0x0000 (0x003C - 0x003C)
class UTGMechaTypes : public UMechaTypes
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2027 ];

		return pClassPointer;
	};

};

UClass* UTGMechaTypes::pClassPointer = NULL;

// Class MechaGame.TGMechaProj_TracerBase
// 0x002C (0x023C - 0x0210)
class ATGMechaProj_TracerBase : public AProjectile
{
public:
	unsigned long                                      bSuppressAudio : 1;                               		// 0x0210 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAutoStartInFlightAudio : 1;                      		// 0x0210 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      bAddBaseVelocity : 1;                             		// 0x0210 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bIgnoreInstigatorCollision : 1;                   		// 0x0210 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bStoppedByGrenadeBlockingVolume : 1;              		// 0x0210 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              GravityScale;                                     		// 0x0214 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             InFlightSound;                                    		// 0x0218 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class USoundCue*                                   InFlightSoundTemplate;                            		// 0x021C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     InitialFrameOfRefVelocity;                        		// 0x0220 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UParticleSystem*                             TrailTemplate;                                    		// 0x022C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class AUTEmitter*                                  TrailEmitter;                                     		// 0x0230 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UDynamicLightEnvironmentComponent*           ProjLightEnvironment;                             		// 0x0234 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              FluidForceRadius;                                 		// 0x0238 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2028 ];

		return pClassPointer;
	};

	void ApplyFluidSurfaceImpact ( class AFluidSurfaceActor* Fluid, struct FVector HitLocation );
	void StopSimulating ( );
	void Init ( struct FVector Direction );
	void SuppressAudio ( unsigned long bSuppress );
	void StopInFlightAudio ( );
	void StartInFlightAudio ( );
	void StopTrailEmitter ( );
	void SpawnTrail ( );
	void Destroyed ( );
	void PostBeginPlay ( );
};

UClass* ATGMechaProj_TracerBase::pClassPointer = NULL;

// Class MechaGame.TGMechaProjectileBase
// 0x0068 (0x02B4 - 0x024C)
class ATGMechaProjectileBase : public AUDKProjectile
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
	class UAudioComponent*                             AmbientComponent;                                 		// 0x0258 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ProjEffects;                                      		// 0x025C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             ProjFlightTemplate;                               		// 0x0260 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ProjExplosionTemplate;                            		// 0x0264 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          ExplosionDecal;                                   		// 0x0268 (0x0004) [0x0000000000000000]              
	float                                              DecalWidth;                                       		// 0x026C (0x0004) [0x0000000000000000]              
	float                                              DecalHeight;                                      		// 0x0270 (0x0004) [0x0000000000000000]              
	float                                              DurationOfDecal;                                  		// 0x0274 (0x0004) [0x0000000000000000]              
	struct FName                                       DecalDissolveParamName;                           		// 0x0278 (0x0008) [0x0000000000000000]              
	float                                              MaxEffectDistance;                                		// 0x0280 (0x0004) [0x0000000000000000]              
	float                                              TossZ;                                            		// 0x0284 (0x0004) [0x0000000000000000]              
	float                                              GlobalCheckRadiusTweak;                           		// 0x0288 (0x0004) [0x0000000000000000]              
	class UClass*                                      ProjectileLightClass;                             		// 0x028C (0x0004) [0x0000000000000000]              
	class UPointLightComponent*                        ProjectileLight;                                  		// 0x0290 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UClass*                                      ExplosionLightClass;                              		// 0x0294 (0x0004) [0x0000000000000000]              
	float                                              MaxExplosionLightDistance;                        		// 0x0298 (0x0004) [0x0000000000000000]              
	struct FVector                                     ServerLocation;                                   		// 0x029C (0x000C) [0x0000000000000020]              ( CPF_Net )
	struct FRotator                                    ServerRotation;                                   		// 0x02A8 (0x000C) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2029 ];

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

UClass* ATGMechaProjectileBase::pClassPointer = NULL;

// Class MechaGame.TGMechaProjectile
// 0x0038 (0x02EC - 0x02B4)
class ATGMechaProjectile : public ATGMechaProjectileBase
{
public:
	struct FExplosionInfo                              ExplosionRepInfo;                                 		// 0x02B4 (0x0018) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bExploded : 1;                                    		// 0x02CC (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DelayShutdownTime;                                		// 0x02D0 (0x0004) [0x0000000000000000]              
	float                                              ExplosionEffectScale;                             		// 0x02D4 (0x0004) [0x0000000000000000]              
	float                                              FlightEffectScale;                                		// 0x02D8 (0x0004) [0x0000000000000000]              
	struct FVector                                     RealStartLoc;                                     		// 0x02DC (0x000C) [0x0000000000000020]              ( CPF_Net )
	float                                              ExplodeTime;                                      		// 0x02E8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2030 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void SpawnFlightEffects ( );
	void Destroyed ( );
	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void ClientSpawnExplosionEffects ( );
	class AActor* FindWeaponHitNormal ( struct FVector End, struct FVector Start, struct FVector* HitLocation, struct FVector* HitNormal, struct FTraceHitInfo* HitInfo );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void ExplodeTimer ( );
	void Init ( struct FVector Direction );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
	void OnShutdownTimer ( );
};

UClass* ATGMechaProjectile::pClassPointer = NULL;

// Class MechaGame.TGMechaProj_Aerogun
// 0x0108 (0x03F4 - 0x02EC)
class ATGMechaProj_Aerogun : public ATGMechaProjectile
{
public:
	struct FVector                                     ProjStartLocation;                                		// 0x02EC (0x000C) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bProjStartLocationReplicated : 1;                 		// 0x02F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsLeftSide : 1;                                  		// 0x02F8 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bIsFirstPhase : 1;                                		// 0x02F8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsSecondPhase : 1;                               		// 0x02F8 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FVector                                     TargetLocation;                                   		// 0x02FC (0x000C) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0308 (0x0008) MISSED OFFSET
	struct FMatrix                                     LocalToWorldMatrix;                               		// 0x0310 (0x0040) [0x0000000000000000]              
	float                                              SpeedFirstPhase;                                  		// 0x0350 (0x0004) [0x0000000000000000]              
	float                                              FirstPhaseDistance;                               		// 0x0354 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              CurrFirstPhaseDistance;                           		// 0x0358 (0x0004) [0x0000000000000000]              
	struct FVector                                     FirstPhaseEndPoint;                               		// 0x035C (0x000C) [0x0000000000000020]              ( CPF_Net )
	float                                              SecondPhaseLocalAccelYRate;                       		// 0x0368 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              SecondPhaseTravelTimeRate;                        		// 0x036C (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              SecondPhaseLocalVYMax;                            		// 0x0370 (0x0004) [0x0000000000000000]              
	float                                              SecondPhaseTravelTime;                            		// 0x0374 (0x0004) [0x0000000000000000]              
	float                                              ThirdPhaseTravelTime;                             		// 0x0378 (0x0004) [0x0000000000000000]              
	float                                              LocalAccelX;                                      		// 0x037C (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              LocalAccelY;                                      		// 0x0380 (0x0004) [0x0000000000000000]              
	float                                              LocalAccelZ;                                      		// 0x0384 (0x0004) [0x0000000000000000]              
	struct FVector                                     CurrLocalVX;                                      		// 0x0388 (0x000C) [0x0000000000000000]              
	struct FVector                                     CurrLocalVY;                                      		// 0x0394 (0x000C) [0x0000000000000000]              
	struct FVector                                     CurrLocalVZ;                                      		// 0x03A0 (0x000C) [0x0000000000000000]              
	struct FReplicatedMatrixInfo                       RepMatrixInfo;                                    		// 0x03AC (0x0048) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2031 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventPostBeginPlay ( );
	void eventPrecisionExplode ( );
	void SetRepMatrixInfo ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGMechaProj_Aerogun::pClassPointer = NULL;

// Class MechaGame.TGMechaWeap_FlameThrowerSprayBase
// 0x0200 (0x03D4 - 0x01D4)
class ATGMechaWeap_FlameThrowerSprayBase : public AActor
{
public:
	float                                              CurrentAge;                                       		// 0x01D4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bSkeletonHasBeenUpdated : 1;                      		// 0x01D8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bDoPerBoneFireFX : 1;                             		// 0x01D8 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      bSplashActive : 1;                                		// 0x01D8 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bFlameMeshCollidedThisTick : 1;                   		// 0x01D8 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bFlameMeshCollidedLastTick : 1;                   		// 0x01D8 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bLeaveStickyFire : 1;                             		// 0x01D8 (0x0004) [0x0000000000004003] [0x00000020] ( CPF_Edit | CPF_Const | CPF_Config )
	unsigned long                                      bDebugShowBones : 1;                              		// 0x01D8 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bDebugShowContacts : 1;                           		// 0x01D8 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bDebugShowCollision : 1;                          		// 0x01D8 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bDebugShowAttackLine : 1;                         		// 0x01D8 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bDebugShowSplashRadius : 1;                       		// 0x01D8 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      bDebugForceNonPlayerParticles : 1;                		// 0x01D8 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      bTestCollideComplex : 1;                          		// 0x01D8 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      bDebugShowSeeds : 1;                              		// 0x01D8 (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	unsigned long                                      bWaitingToDestroy : 1;                            		// 0x01D8 (0x0004) [0x0000000000002000] [0x00004000] ( CPF_Transient )
	unsigned long                                      bDetached : 1;                                    		// 0x01D8 (0x0004) [0x0000000000002000] [0x00008000] ( CPF_Transient )
	unsigned long                                      bStasis : 1;                                      		// 0x01D8 (0x0004) [0x0000000000000000] [0x00010000] 
	class USkeletalMeshComponent*                      SkeletalSprayMesh;                                		// 0x01DC (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UTGSkelCtrl_Prune*                           PruneSkelControl;                                 		// 0x01E0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       PruneSkelControlName;                             		// 0x01E4 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UTGMechaSkelCtrl_FlamethrowerScaling*        ScalingSkelControl;                               		// 0x01EC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   GravityScaleRange;                                		// 0x01F0 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              GravityScaleInTime;                               		// 0x01F8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FMechaFlameBoneInfo >               BoneChain;                                        		// 0x01FC (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	float                                              PerBoneFireFXGlobalScale;                         		// 0x0208 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector2D                                   PerBoneFireFXActivationDelayRange;                		// 0x020C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              PerBoneFireFXActivationDelayTimer;                		// 0x0214 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PerBoneFireFXActivationDist;                      		// 0x0218 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UParticleSystem*                             SplashGlancingEffect;                             		// 0x021C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             SplashDirectEffect;                               		// 0x0220 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             SplashPawnEffect;                                 		// 0x0224 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystemComponent*                    CurrentSplashEffect;                              		// 0x0228 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    SplashGlancingPSC;                                		// 0x022C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    SplashDirectPSC;                                  		// 0x0230 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    SplashPawnPSC;                                    		// 0x0234 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    SplashMaterialBasedPSC;                           		// 0x0238 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             SplashPawnAC;                                     		// 0x023C (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             SplashDirectAC;                                   		// 0x0240 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             SplashGlancingAC;                                 		// 0x0244 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             SplashMaterialBasedAC;                            		// 0x0248 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             CurrentSplashAC;                                  		// 0x024C (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	float                                              SplashGlancingDotLimit;                           		// 0x0250 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                LastBoneChainIndexThatCanSpawnSplashEffects;      		// 0x0254 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              SplashRotInterpSpeed;                             		// 0x0258 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              SplashLocInterpSpeed;                             		// 0x025C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FRotator                                    LastSplashRot;                                    		// 0x0260 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastSplashLoc;                                    		// 0x026C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UParticleSystemComponent*                    PSC_OwnerGlow;                                    		// 0x0278 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                OwnerGlowBoneChainIndex;                          		// 0x027C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              OwnerGlowScaleInTime;                             		// 0x0280 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FMechaFlameSprayLight >             FlameLights;                                      		// 0x0284 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	class UMaterialInstanceConstant*                   MIC_FlameMat0;                                    		// 0x0290 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MIC_FlameMat1;                                    		// 0x0294 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MIC_FlameMat2;                                    		// 0x0298 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   MaterialHeatRange;                                		// 0x029C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MaterialHeatRampTime;                             		// 0x02A4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MatFadePow;                                       		// 0x02A8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MaterialFadeOutTime;                              		// 0x02AC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MaterialCurrentFadeVal;                           		// 0x02B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UParticleSystemComponent*                    StartFirePSC;                                     		// 0x02B4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector2D                                   FlameDamagePerSec;                                		// 0x02B8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnergyDamagePerSecond;                            		// 0x02C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   FlameDamageScaleDistRange;                        		// 0x02C4 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UClass*                                      MyDamageType;                                     		// 0x02CC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              SplashDamageRadius;                               		// 0x02D0 (0x0004) [0x0000000000004003]              ( CPF_Edit | CPF_Const | CPF_Config )
	float                                              SplashDamagePerSecond;                            		// 0x02D4 (0x0004) [0x0000000000004003]              ( CPF_Edit | CPF_Const | CPF_Config )
	float                                              SplashDamagePerSecondAR;                          		// 0x02D8 (0x0004) [0x0000000000004003]              ( CPF_Edit | CPF_Const | CPF_Config )
	float                                              SplashDamageFalloffExponent;                      		// 0x02DC (0x0004) [0x0000000000004003]              ( CPF_Edit | CPF_Const | CPF_Config )
	float                                              MomentumScale;                                    		// 0x02E0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USoundCue*                                   FireSprayStartSound;                              		// 0x02E4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USoundCue*                                   FireSprayStopSound;                               		// 0x02E8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USoundCue*                                   FireSprayLoopSound;                               		// 0x02EC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAudioComponent*                             AC_FireSprayLoop;                                 		// 0x02F0 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	struct FVector2D                                   FireAudioAdj_RotVelRange;                         		// 0x02F4 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector2D                                   FireAudioAdj_PitchRange;                          		// 0x02FC (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector2D                                   FireAudioAdj_VolumeRange;                         		// 0x0304 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              SprayAudioAdjInterpSpeed;                         		// 0x030C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              CurrentSprayPitchMult;                            		// 0x0310 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentSprayVolumeMult;                           		// 0x0314 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    LastRotation;                                     		// 0x0318 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              RotationSpeed;                                    		// 0x0324 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FMechaFlameMeshContact                      HighestFlameMeshContactThisTick;                  		// 0x0328 (0x0024) [0x0000000000002000]              ( CPF_Transient )
	float                                              bFlameMeshCollisionDuration;                      		// 0x034C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTGAnim_BlendList*                           AnimBlendNode;                                    		// 0x0350 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAnimNodeSequence*                           StartFireSeqNode;                                 		// 0x0354 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAnimNodeSequence*                           EndFireSeqNode;                                   		// 0x0358 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              StickyFireOwnerSafeRadius;                        		// 0x035C (0x0004) [0x0000000000004003]              ( CPF_Edit | CPF_Const | CPF_Config )
	float                                              StickyFireMinTimeBetweenSpawns;                   		// 0x0360 (0x0004) [0x0000000000004003]              ( CPF_Edit | CPF_Const | CPF_Config )
	float                                              StickyFireLastSpawnTime;                          		// 0x0364 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              StickyFireInitialDelay;                           		// 0x0368 (0x0004) [0x0000000000004003]              ( CPF_Edit | CPF_Const | CPF_Config )
	struct FVector                                     StickyFireTestLocation;                           		// 0x036C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              StickyFireTestLocInterpSpeed;                     		// 0x0378 (0x0004) [0x0000000000004003]              ( CPF_Edit | CPF_Const | CPF_Config )
	float                                              StickyFireTestLocThreshold;                       		// 0x037C (0x0004) [0x0000000000004003]              ( CPF_Edit | CPF_Const | CPF_Config )
	TArray< struct FMechaFlameSpraySeed >              Seeds;                                            		// 0x0380 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              SeedSprayVel;                                     		// 0x038C (0x0004) [0x0000000000000000]              
	float                                              SeedDecel;                                        		// 0x0390 (0x0004) [0x0000000000000000]              
	float                                              SeedMaxAge;                                       		// 0x0394 (0x0004) [0x0000000000000000]              
	float                                              SeedMinChainLength;                               		// 0x0398 (0x0004) [0x0000000000000000]              
	float                                              SeedSimFreq;                                      		// 0x039C (0x0004) [0x0000000000000000]              
	float                                              SeedSimTimeRemaining;                             		// 0x03A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SeedWarmupTime;                                   		// 0x03A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ATGMechaBase*                                OwnerMecha;                                       		// 0x03A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TotalDamageInterval;                              		// 0x03AC (0x0004) [0x0000000000000000]              
	float                                              DamageInterval;                                   		// 0x03B0 (0x0004) [0x0000000000000000]              
	float                                              TotalTimeCalcDamage;                              		// 0x03B4 (0x0004) [0x0000000000000000]              
	class USkeletalMeshComponent*                      CacheAttchWeapMesh;                               		// 0x03B8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       CacheAttchSocketName;                             		// 0x03BC (0x0008) [0x0000000000000000]              
	struct FVector                                     CacheLocationLastTick;                            		// 0x03C4 (0x000C) [0x0000000000000000]              
	float                                              LastDamageTime;                                   		// 0x03D0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2032 ];

		return pClassPointer;
	};

	void ParticleSystemCleanUp ( );
	void ScorchDecalTraceFunc ( float RandomOffsetRadius, struct FVector ForceStartLocation, struct FVector* out_TraceStart, struct FVector* out_TraceDest );
	void UpdateFireLoopSound ( float DeltaTime );
	void UpdateSplashes ( float DeltaTime );
	void GetAimVector ( struct FVector StartLoc, struct FVector* vForward, struct FVector* vRight, struct FVector* vUp );
	struct FVector GetFireLineTraceVector ( struct FVector StartLoc );
	void Tick ( float DeltaTime );
	void DoFlameCollisionDetection ( float DeltaTime );
	void DebugRenderBones ( );
	void SetBoneSpawnParticlesActive ( class UParticleSystemComponent* PSC, unsigned long bActive );
	void UpdatePerBoneFireFX ( float DeltaTime );
	void SetupUpParaForFrameDamage ( float MinDamagePerSeconds, float MaxDamagePerSeconds, float LocalEnergyDamagePerSecond, float SprayDamageInterval, float WeaponSeedSprayVel, float WeaponSeedDecel, float WeaponSeedMaxAge, float WeaponSeedMinChainLength, float WeaponSeedSimFreq );
	void AttachToWeapon ( class AActor* InOwner, struct FName SocketName, class USkeletalMeshComponent* MeshToAttachTo, float LocalMinDamagePerSeconds, float LocalMaxDamagePerSeconds, float LocalEnergyDamagePerSecond, float LocalDamageInterval, float LocalWeaponSeedSprayVel, float LocalWeaponSeedDecel, float LocalWeaponSeedMaxAge, float LocalWeaponSeedMinChainLength, float LocalWeaponSeedSimFreq );
	void SetupPerBoneFireFX ( );
	void DestroyIfAllEmittersFinished ( );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void DetachAndFinish ( );
	void ClearMeshPruning ( );
	void Destroyed ( );
	void BeginSpray ( );
	void PostBeginPlay ( );
	void FinishActiveReloadSpray ( );
	class UAudioComponent* PlayLoopingSound ( class USoundCue* Cue, class UAudioComponent* AC, float FadeInTime );
	float GetEnergyDamage ( float BurnTime );
	float GetDamage ( float BurnTime, float HitDist );
	float GetFlickerVal ( float BaseVal, float Intensity, float Last, float DeltaTime, float InterpSpeed );
	void ClearAnimNodes ( );
	void CacheAnimNodes ( );
	bool FlameSetLocation ( );
	void UpdateFlameSeeds ( float DeltaTime, struct FVector VelDirection );
};

UClass* ATGMechaWeap_FlameThrowerSprayBase::pClassPointer = NULL;

// Class MechaGame.TGMechaWeaponBase
// 0x0018 (0x062C - 0x0614)
class ATGMechaWeaponBase : public AUTWeapon
{
public:
	TArray< struct FVector >                           CacheProjTrajectory;                              		// 0x0614 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MinSimDeltaTime;                                  		// 0x0620 (0x0004) [0x0000000000000000]              
	int                                                MaxSimCachePointNum;                              		// 0x0624 (0x0004) [0x0000000000000000]              
	int                                                LastCachePointIndex;                              		// 0x0628 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2033 ];

		return pClassPointer;
	};

	void CalcProjTrajectory ( struct FVector StartLoc, struct FVector AimDir, float ProjLifeSpan, float projSpeed, float ProjMaxSpeed, float ProjAccelRate, float ProjGravityScaling );
};

UClass* ATGMechaWeaponBase::pClassPointer = NULL;

// Class MechaGame.TGMechaAnimBlendByDriving
// 0x0000 (0x0128 - 0x0128)
class UTGMechaAnimBlendByDriving : public UUDKAnimBlendBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2034 ];

		return pClassPointer;
	};

};

UClass* UTGMechaAnimBlendByDriving::pClassPointer = NULL;

// Class MechaGame.TGMechaAnimBlendByFall
// 0x0000 (0x0144 - 0x0144)
class UTGMechaAnimBlendByFall : public UUDKAnimBlendByFall
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2035 ];

		return pClassPointer;
	};

};

UClass* UTGMechaAnimBlendByFall::pClassPointer = NULL;

// Class MechaGame.TGMechaAnimBlendByFlying
// 0x0014 (0x013C - 0x0128)
class UTGMechaAnimBlendByFlying : public UUDKAnimBlendBase
{
public:
	unsigned char                                      FlyingState;                                      		// 0x0128 (0x0001) [0x0000000000000000]              
	float                                              FlyingIdleSpeedThreshold;                         		// 0x012C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       StartingAnimName;                                 		// 0x0130 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bHasStartingAnim : 1;                             		// 0x0138 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2036 ];

		return pClassPointer;
	};

	void UpdateFlyingState ( );
};

UClass* UTGMechaAnimBlendByFlying::pClassPointer = NULL;

// Class MechaGame.TGMechaAnimBlendByGroundBoostState
// 0x0000 (0x0128 - 0x0128)
class UTGMechaAnimBlendByGroundBoostState : public UUDKAnimBlendBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2037 ];

		return pClassPointer;
	};

};

UClass* UTGMechaAnimBlendByGroundBoostState::pClassPointer = NULL;

// Class MechaGame.TGMechaAnimBlendByIdle
// 0x0004 (0x012C - 0x0128)
class UTGMechaAnimBlendByIdle : public UUDKAnimBlendBase
{
public:
	float                                              WalkingSpeedThreshold;                            		// 0x0128 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2038 ];

		return pClassPointer;
	};

};

UClass* UTGMechaAnimBlendByIdle::pClassPointer = NULL;

// Class MechaGame.TGMechaAnimBlendByTurnInPlace
// 0x000C (0x0134 - 0x0128)
class UTGMechaAnimBlendByTurnInPlace : public UUDKAnimBlendBase
{
public:
	float                                              RootYawSpeedThresh;                               		// 0x0128 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TurnInPlaceBlendSpeed;                            		// 0x012C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ATGMechaBase*                                OwnerMecha;                                       		// 0x0130 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2039 ];

		return pClassPointer;
	};

};

UClass* UTGMechaAnimBlendByTurnInPlace::pClassPointer = NULL;

// Class MechaGame.TGMechaAnimNodeCopyBoneTranslation
// 0x000C (0x0154 - 0x0148)
class UTGMechaAnimNodeCopyBoneTranslation : public UUDKAnimNodeCopyBoneTranslation
{
public:
	TArray< class UTGMechaAnimNodeSeqWeap* >           SeqMechaWeaps;                                    		// 0x0148 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2040 ];

		return pClassPointer;
	};

};

UClass* UTGMechaAnimNodeCopyBoneTranslation::pClassPointer = NULL;

// Class MechaGame.TGMechaAnimNodeScaleRateBySpeed
// 0x0000 (0x00F8 - 0x00F8)
class UTGMechaAnimNodeScaleRateBySpeed : public UAnimNodeScalePlayRate
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2041 ];

		return pClassPointer;
	};

};

UClass* UTGMechaAnimNodeScaleRateBySpeed::pClassPointer = NULL;

// Class MechaGame.TGMechaAnimNodeSeqWeap
// 0x0030 (0x017C - 0x014C)
class UTGMechaAnimNodeSeqWeap : public UUDKAnimNodeSequence
{
public:
	struct FName                                       DefaultAnim;                                      		// 0x014C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MachineGunAnim;                                   		// 0x0154 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       LaserBladeAnim;                                   		// 0x015C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PenetrativeCannonAnim;                            		// 0x0164 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       HowitzerAnim;                                     		// 0x016C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ShotGunAnim;                                      		// 0x0174 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2042 ];

		return pClassPointer;
	};

	void eventWeapTypeChanged ( struct FName NewAimProfileName );
};

UClass* UTGMechaAnimNodeSeqWeap::pClassPointer = NULL;

// Class MechaGame.TGMechaSkelCtrl_Flamethrower
// 0x0000 (0x00BC - 0x00BC)
class UTGMechaSkelCtrl_Flamethrower : public USkelControlBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2043 ];

		return pClassPointer;
	};

};

UClass* UTGMechaSkelCtrl_Flamethrower::pClassPointer = NULL;

// Class MechaGame.TGMechaSkelCtrl_FlamethrowerScaling
// 0x001C (0x00D8 - 0x00BC)
class UTGMechaSkelCtrl_FlamethrowerScaling : public USkelControlBase
{
public:
	float                                              CurrentAge;                                       		// 0x00BC (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              CurrentVel;                                       		// 0x00C0 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              LastVel;                                          		// 0x00C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              VelocitySmoothingInterpSpeed;                     		// 0x00C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FMechaFlameBoneScaleParams >        ScaleParams;                                      		// 0x00CC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2044 ];

		return pClassPointer;
	};

	void ResetTransients ( );
};

UClass* UTGMechaSkelCtrl_FlamethrowerScaling::pClassPointer = NULL;

// Class MechaGame.MechaBase
// 0x00B8 (0x05CC - 0x0514)
class AMechaBase : public AVehicle
{
public:
	class AMechaFactory*                               ParentFactory;                                    		// 0x0514 (0x0004) [0x0000000000000000]              
	float                                              SpawnRadius;                                      		// 0x0518 (0x0004) [0x0000000000000000]              
	float                                              RespawnTime;                                      		// 0x051C (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              InitialSpawnDelay;                                		// 0x0520 (0x0004) [0x0000000000000000]              
	float                                              SpawnInTime;                                      		// 0x0524 (0x0004) [0x0000000000000000]              
	class UAnimTree*                                   AnimTreeRootNode;                                 		// 0x0528 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UAnimNodeSlot* >                     BodyStanceNodes;                                  		// 0x052C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UAnimNodeAimOffset*                          AimNode;                                          		// 0x0538 (0x0004) [0x0000000000000000]              
	struct FMechaTakeHitInfo                           LastTakeHitInfo;                                  		// 0x053C (0x0038) [0x0000000000000020]              ( CPF_Net )
	float                                              LastTakeHitTimeout;                               		// 0x0574 (0x0004) [0x0000000000000000]              
	unsigned char                                      SpecialMove;                                      		// 0x0578 (0x0001) [0x0000000000000000]              
	unsigned char                                      PreviousSpecialMove;                              		// 0x0579 (0x0001) [0x0000000000000000]              
	TArray< unsigned char >                            AdditivSpecialMoves;                              		// 0x057C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FMechaSpecialMoveStruct                     PendingSpecialMoveStruct;                         		// 0x0588 (0x0010) [0x0000000000000000]              
	unsigned long                                      bEndingSpecialMove : 1;                           		// 0x0598 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< class UClass* >                            SpecialMoveClasses;                               		// 0x059C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMechaSpecialMove* >                 SpecialMoves;                                     		// 0x05A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FMechaSpecialMoveStruct                     ReplicatedSpecialMoveStruct;                      		// 0x05B4 (0x0010) [0x0000000000000020]              ( CPF_Net )
	float                                              PawnRotationInterpolationTime;                    		// 0x05C4 (0x0004) [0x0000000000000000]              
	float                                              PawnRotationBlendTimeToGo;                        		// 0x05C8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2045 ];

		return pClassPointer;
	};

	void SetMovementPhysics ( );
	class UMechaSpecialMove* GetCurrentSpecialMove ( );
	bool IsDoingAdditivSpecialMove ( unsigned char AMove );
	bool IsDoingASpecialMove ( );
	bool IsDoingSpecialMove ( unsigned char AMove );
	struct FMechaSpecialMoveStruct FillSpecialMoveStructFromParams ( unsigned char InSpecialMove, int InSpecialMoveFlags, unsigned long bInAdditive );
	bool VerifySpecialMoveHasBeenInstanced ( unsigned char AMove );
	bool CanChainSpecialMove ( unsigned char NextMove );
	bool eventCanDoSpecialMove ( unsigned char AMove, unsigned long bForceCheck );
	void SpecialMoveAssigned ( unsigned char NewMove, unsigned char PrevMove );
	void SpecialMoveEnded ( unsigned char PrevMove, unsigned char NextMove );
	void SpecialMoveStarted ( unsigned char NewMove, unsigned char PrevMove, unsigned long bForced );
	void EndSpecialMove ( unsigned char SpecialMoveToEnd );
	void ServerEndSpecialMove ( unsigned char SpecialMoveToEnd );
	void DoSpecialMoveFromStruct ( struct FMechaSpecialMoveStruct InSpecialMoveStruct, unsigned long bForceMove );
	void eventDoAdditivSpecialMove ( unsigned char NewMove, unsigned long bForceMove, int InSpecialMoveFlags );
	void eventDoSpecialMove ( unsigned char NewMove, unsigned long bForceMove, int InSpecialMoveFlags );
	void ServerDoSpecialMove ( unsigned char NewMove, unsigned long bForceMove, int InSpecialMoveFlags );
	void LocalDoAdditivSpecialMove ( unsigned char NewMove, unsigned long bForceMove, int InSpecialMoveFlags );
	void LocalDoSpecialMove ( unsigned char NewMove, unsigned long bForceMove, int InSpecialMoveFlags );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void BS_AnimEndNotify ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	float BS_GetAnimPlaybackLength ( struct FMechaBodyStance Stance );
	void BS_SetRootBoneAxisOptions ( struct FMechaBodyStance Stance, unsigned char AxisX, unsigned char AxisY, unsigned char AxisZ );
	void BS_SetAnimEndNotify ( struct FMechaBodyStance Stance, unsigned long bNewStatus );
	void BS_Stop ( struct FMechaBodyStance Stance, float BlendOutTime );
	float BS_PlayByDuration ( class UMechaSpecialMove* Move, struct FMechaBodyStance Stance, float Duration, float BlendInTime, float BlendOutTime, unsigned long bLooping, unsigned long bOverride, struct FName GroupName );
	float BS_Play ( class UMechaSpecialMove* Move, struct FMechaBodyStance Stance, float Rate, float BlendInTime, float BlendOutTime, unsigned long bLooping, unsigned long bOverride, struct FName GroupName, float StartTime );
	void InterpolatePawnRotation ( float RotationInterpTime );
	void PlayTakeHitEffects ( );
	void PlayHit ( float Damage, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FVector Momentum, struct FTraceHitInfo HitInfo, unsigned char AnimDir );
	void Destroyed ( );
	void StopAllAnimations ( );
	void CacheAnimNodes ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* AMechaBase::pClassPointer = NULL;

// Class MechaGame.Mecha
// 0x0114 (0x06E0 - 0x05CC)
class AMecha : public AMechaBase
{
public:
	struct FMechaPointOfView                           POV1st;                                           		// 0x05CC (0x0014) [0x0000000000004020]              ( CPF_Net | CPF_Config )
	struct FMechaPointOfView                           POV3rd;                                           		// 0x05E0 (0x0014) [0x0000000000004020]              ( CPF_Net | CPF_Config )
	unsigned long                                      bFixedView : 1;                                   		// 0x05F4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bStopDeathCamera : 1;                             		// 0x05F4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPlayFireCameraShake : 1;                         		// 0x05F4 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     FixedViewLoc;                                     		// 0x05F8 (0x000C) [0x0000000000000000]              
	struct FRotator                                    FixedViewRot;                                     		// 0x0604 (0x000C) [0x0000000000000000]              
	struct FVector                                     CurrentCamLoc;                                    		// 0x0610 (0x000C) [0x0000000000000000]              
	struct FVector                                     OldCameraPosition;                                		// 0x061C (0x000C) [0x0000000000000000]              
	float                                              CameraZOffset;                                    		// 0x0628 (0x0004) [0x0000000000000000]              
	class UCameraShake*                                FireCameraShake;                                  		// 0x062C (0x0004) [0x0000000000000000]              
	float                                              FireCameraShakeScale;                             		// 0x0630 (0x0004) [0x0000000000000000]              
	int                                                RootYaw;                                          		// 0x0634 (0x0004) [0x0000000000000000]              
	float                                              RootYawSpeed;                                     		// 0x0638 (0x0004) [0x0000000000000000]              
	int                                                MaxYawAim;                                        		// 0x063C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   CurrentSkelAim;                                   		// 0x0640 (0x0008) [0x0000000000000020]              ( CPF_Net )
	float                                              LimitMaxSandCDistance;                            		// 0x0648 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                iGunShooting;                                     		// 0x064C (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     GunFlashLocation[ 0xC ];                          		// 0x0650 (0x0090) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2046 ];

		return pClassPointer;
	};

	void PlayDying ( class UClass* DamageType, struct FVector HitLoc, unsigned char DeathDir, unsigned char HitGroup );
	void ServerTakeWallDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, int wallcount );
	void ServerTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	struct FVector eventGetWeaponStartTraceLocation ( class AWeapon* CurrentWeapon );
	void SetGunFlashLocation ( class AWeapon* Who, unsigned char FireModeNum, TArray< struct FVector > NewLoc );
	void ClientSetFireCameraShake ( unsigned long bInPlayFireCameraShake, class UCameraShake* InFireCameraShake, float InFireCameraShakeScale );
	void SetFireCameraShake ( unsigned long bInPlayFireCameraShake, class UCameraShake* InFireCameraShake, float InFireCameraShakeScale );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	void ClientSetViewPitch ( float InViewPitchMin, float InViewPitchMax );
	void SetViewPitch ( float InViewPitchMin, float InViewPitchMax );
	void SetPointOfView3rd ( struct FMechaPointOfView POV );
	void SetPointOfView1st ( struct FMechaPointOfView POV );
	void SetMeshVisibility ( unsigned long bVisible );
	void FixedView ( struct FString VisibleMeshes );
	bool IsFirstPerson ( );
	bool CalcFirstPersonCam ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	bool CalcThirdPersonCam ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	void FaceRotation ( struct FRotator NewRotation, float DeltaTime );
	void SetMechaHidden ( unsigned long bInHidden );
	void ClientStopMovement ( );
	bool eventDriverLeave ( unsigned long bForceLeave );
	bool DriverEnter ( class APawn* P );
};

UClass* AMecha::pClassPointer = NULL;

// Class MechaGame.TGMechaBase
// 0x0034 (0x0714 - 0x06E0)
class ATGMechaBase : public AMecha
{
public:
	int                                                MechaHealthMax;                                   		// 0x06E0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MechaGroundSpeed;                                 		// 0x06E4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MechaGroundBoostSpeed;                            		// 0x06E8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MechaAirSpeed;                                    		// 0x06EC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AirBoostAccelRate;                                		// 0x06F0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AirBoostMaxHeight;                                		// 0x06F4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              CustomGravityScaling;                             		// 0x06F8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MechaJumpZ;                                       		// 0x06FC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MechaMaxStepHeight;                               		// 0x0700 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SpeedScale;                                       		// 0x0704 (0x0004) [0x0000000000000000]              
	unsigned char                                      MovementState;                                    		// 0x0708 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      MechaType;                                        		// 0x0709 (0x0001) [0x0000000000000000]              
	unsigned long                                      bLandOnMecha : 1;                                 		// 0x070C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LandOnMechaSpeed;                                 		// 0x0710 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2047 ];

		return pClassPointer;
	};

	void SetMaxStepHeight ( float InMaxSetpHeight );
	void OnKeyUp_F ( class UTGMechaPlayerInput* Input );
	void OnKeyUp_E ( class UTGMechaPlayerInput* Input );
	void OnKeyUp_Shift ( class UTGMechaPlayerInput* Input );
	void OnKeyUp_Space ( class UTGMechaPlayerInput* Input );
	void OnKeyDown_F ( class UTGMechaPlayerInput* Input );
	void OnKeyDown_E ( class UTGMechaPlayerInput* Input );
	void OnKeyDown_Shift ( class UTGMechaPlayerInput* Input );
	void OnKeyDown_Space ( class UTGMechaPlayerInput* Input );
	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation, unsigned char DeathDir, unsigned char HitGroup );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void Heal ( int HealthToAdd, class AController* HealInstigator, unsigned long bTriggerEffect, unsigned long bInstantHeal, float HealInterval );
	void ClearSpeedScale ( );
	void TimerClearSpeedScale ( );
	void SetSpeedScaleTimer ( float Scale, float Duration );
	void SetSpeedScale ( float Scale );
	bool IsBoosting ( );
	void ChangeMovementState ( unsigned char NewState );
	void TakeFallingDamage ( );
	void SetupConfigParameters ( );
	void eventPostBeginPlay ( );
};

UClass* ATGMechaBase::pClassPointer = NULL;

// Class MechaGame.MechaFactory
// 0x0008 (0x02E0 - 0x02D8)
class AMechaFactory : public AMechaFactoryBase
{
public:
	float                                              SpawnZOffset;                                     		// 0x02D8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDisabled : 1;                                    		// 0x02DC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAutoActive : 1;                                  		// 0x02DC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bNoCollisionFail : 1;                             		// 0x02DC (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208273 ];

		return pClassPointer;
	};

	class AMechaBase* ForceSpawnVehicle ( );
	struct FRotator GetSpawnRotation ( );
	void OnToggle ( class USeqAct_Toggle* Action );
	void TriggerSpawnedEvent ( );
	void VehicleDestroyed ( class AMechaBase* V );
	void VehicleTaken ( );
	void Deactivate ( );
	void Activate ( unsigned char T );
	void eventSetInitialState ( );
	void PostBeginPlay ( );
};

UClass* AMechaFactory::pClassPointer = NULL;

// Class MechaGame.MechaDestructibleItem
// 0x0070 (0x0244 - 0x01D4)
class AMechaDestructibleItem : public AActor
{
public:
	unsigned char                                      Type;                                             		// 0x01D4 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      TeamIndex;                                        		// 0x01D5 (0x0001) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	float                                              OverlayZOffset;                                   		// 0x01D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bKeyItem : 1;                                     		// 0x01DC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEnabled : 1;                                     		// 0x01DC (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bShowHit : 1;                                     		// 0x01DC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDamageSoundTipPlayed : 1;                        		// 0x01DC (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              DamageScale;                                      		// 0x01E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UClass* >                            IgnoreDamageScaleDamageTypes;                     		// 0x01E4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class AMechaDestructibleItem*                      NextItem;                                         		// 0x01F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Health;                                           		// 0x01F4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                HealthMax;                                        		// 0x01F8 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	struct FString                                     ItemName;                                         		// 0x01FC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UStaticMeshComponent*                        NormalMesh;                                       		// 0x0208 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        DamagedMesh;                                      		// 0x020C (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        BrokenMesh;                                       		// 0x0210 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        CurrentMesh;                                      		// 0x0214 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FHealthChangeInfo                           HealthInfo;                                       		// 0x0218 (0x0008) [0x0000000000000020]              ( CPF_Net )
	int                                                LastHealth;                                       		// 0x0220 (0x0004) [0x0000000000000000]              
	float                                              NotifyHitInfoInterval;                            		// 0x0224 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              LastNotifyHitInfoTime;                            		// 0x0228 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __TakeDamageDelegate__Delegate;                   		// 0x022C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __HealDelegate__Delegate;                         		// 0x0238 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208602 ];

		return pClassPointer;
	};

	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	struct FColor GetHealthColor ( );
	void GetHealthLevel ( int* Level, float* LevelPct, float* TotalPct );
	bool IsDestroyed ( );
	class UStaticMeshComponent* GetCurrentMesh ( );
	void SetupMesh ( );
	void HideHit ( );
	void NotifyHealthInfoChanged ( );
	unsigned char eventScriptGetTeamNum ( );
	void RecordMechaWeapDamage ( int InDamage, class UClass* DamageType );
	bool DoDamageScale ( class UClass* DamageType );
	void Heal ( int HealthToAdd );
	void SetHealDelegate ( struct FScriptDelegate NewHealDelegate );
	void HealDelegate ( int HealthToAdd );
	void SetHealthRepInfo ( int CurrentHealth, unsigned char InType );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void SpecialTakeDamage ( int Damage );
	void SetTakeDamageDelegate ( struct FScriptDelegate NewTakeDamageDelegate );
	void TakeDamageDelegate ( class AActor* Target, int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void AdjustDamageOnScale ( class ATGMechaGamePlayerController* InstigatedBy, int* InDamage );
	bool IsKeyItem ( );
	void SetKeyItem ( unsigned long bIsKeyItem );
	void SetEnabled ( unsigned long bInEnabled );
	void eventReset ( );
	void eventReplicatedEvent ( struct FName VarName );
	void eventPostBeginPlay ( );
};

UClass* AMechaDestructibleItem::pClassPointer = NULL;

// Class MechaGame.TGMechaGamePlayerController
// 0x0060 (0x0A84 - 0x0A24)
class ATGMechaGamePlayerController : public AMechaGamePlayerController
{
public:
	class ATGMechaBase*                                DrivingMecha;                                     		// 0x0A24 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSelectMechaEnabled : 1;                          		// 0x0A28 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bClearView : 1;                                   		// 0x0A28 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              MechaSelectedTime;                                		// 0x0A2C (0x0004) [0x0000000000000000]              
	class AMechaSkillManager*                          MechaSkillMgr;                                    		// 0x0A30 (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< struct FHealthInfo >                       HealthInfoList;                                   		// 0x0A34 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TargetSmiteDamage;                                		// 0x0A40 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SmiteDamageInterval;                              		// 0x0A44 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FSmiteInfo >                        SmiteInfoList;                                    		// 0x0A48 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CachedItemSmiteDamage;                            		// 0x0A54 (0x0004) [0x0000000000000000]              
	float                                              LastCacheItemSmiteDamageTime;                     		// 0x0A58 (0x0004) [0x0000000000000000]              
	int                                                ItemTargetSmiteDamage;                            		// 0x0A5C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ItemSmiteDamageInterval;                          		// 0x0A60 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              BalanceDmgScalePerPerson;                         		// 0x0A64 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MaxBalanceDmgScale;                               		// 0x0A68 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              BalanceHealthScalePerPerson;                      		// 0x0A6C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MaxBalanceHealthScale;                            		// 0x0A70 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DmgScaleDeltaForXP;                               		// 0x0A74 (0x0004) [0x0000000000000000]              
	float                                              DmgScaleDeltaForBalance;                          		// 0x0A78 (0x0004) [0x0000000000000000]              
	class ATGMechaVolume*                              LastSpawnArea;                                    		// 0x0A7C (0x0004) [0x0000000000000000]              
	class APlayerReplicationInfo*                      LastRealViewTarget;                               		// 0x0A80 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208626 ];

		return pClassPointer;
	};

	void SetViewTarget ( class AActor* NewViewTarget, struct FViewTargetTransitionParams TransitionParams );
	void SwitchClip ( );
	void ClientPlayTipSound ( unsigned char SndType );
	void eventClientReceiveTextMessage ( class UClass* Message, int Switch, int NumValue1, int NumValue2, struct FString StrValue, class UObject* OptionalObject );
	void eventClientPlayCameraAnim ( class UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, unsigned long bLoop, unsigned long bRandomStartTime, unsigned char Space, struct FRotator CustomPlaySpace );
	void PlayLocalCameraShake ( class UCameraShake* Shake, float Scale, unsigned long bTryForceFeedback, unsigned char PlaySpace, struct FRotator UserPlaySpaceRot );
	void NotifyClientAssistance ( );
	void NotifyClientFrozen ( );
	void NotifyClientItemSmite ( );
	void NotifyClientSmite ( );
	void NotifyFrozen ( );
	void NotifyItemSmite ( );
	void NotifySmite ( );
	void NotifyMechaDied ( class ATGRealMecha* Mecha );
	void CheckItemSmite ( int Damage );
	void CheckSmite ( int Damage, class ATGRealMecha* Mecha );
	void NotifyClientMechaHealthChange ( struct FHealthInfo Info );
	void CheckMechaHealthEffect ( unsigned long bWeakPoint, int HealthChange, class ATGRealMecha* Mecha );
	void CheckBalance ( );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
	void ClearReinforceWeapon ( );
	void ReinforceWeapon ( float DamageScaleDelta, float Duration );
	float GetDamageScaleDecrement ( );
	float GetDamageScaleIncrement ( );
	void Reset ( );
	void EndZoom ( );
	void PawnDied ( class APawn* inPawn );
	bool ShouldDrawActorOverlays ( );
	void VehicleEvent ( struct FName EventName );
	void ClientNotifySkillUsed ( class AMechaSkillBase* Skill );
	void NotifySkillUsed ( class AMechaSkillBase* Skill );
	void UseXPSkill ( );
	void NotifySkillCreated ( class AMechaSkillBase* Skill );
	void SetSkillLevel ( struct FName SkillName, unsigned char Level );
	void ServerSetSkillStartSignal ( struct FName SkillName, unsigned long bInEnabled );
	bool HasSkill ( struct FName SkillName );
	bool IsSkillInEffect ( struct FName SkillName );
	void PerformedStopSkillByName ( struct FName SkillName );
	void ServerStopSkillByName ( struct FName SkillName );
	void StopSkillByName ( struct FName SkillName );
	void PerformedStartSkillByName ( struct FName SkillName );
	void ServerStartSkillByName ( struct FName SkillName );
	void StartSkillByName ( struct FName SkillName );
	void SetDrivingMecha ( class ATGMechaBase* Mecha );
	void DriveMecha ( );
	class ATGMechaFactory* GetMechaFactory ( );
	unsigned char GetMechaFactoryType ( );
	void CheckSpectator ( );
	void ServerChangeMechaType ( unsigned char NewType );
	bool CanSelectMecha ( );
	void ClientSetSelectMechaEnable ( unsigned long bEnable );
	void ServerSetSelectMechaEnable ( unsigned long bEnable );
	void SetSelectMechaEnable ( unsigned long bEnable );
	void Restart ( unsigned long bVehicleTransition );
	void AcknowledgePossession ( class APawn* P );
	void InitSkillSystem ( );
	void eventInitInputSystem ( );
	void eventPostBeginPlay ( );
};

UClass* ATGMechaGamePlayerController::pClassPointer = NULL;

// Class MechaGame.TGMechaPlayerReplicationInfo
// 0x00AC (0x1020 - 0x0F74)
class ATGMechaPlayerReplicationInfo : public AMechaGamePlayerReplicationInfo
{
public:
	float                                              DamageToScoreCoef;                                		// 0x0F74 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MechaSmiteScore;                                  		// 0x0F78 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MechaKillScore;                                   		// 0x0F7C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MechaFrozenScore;                                 		// 0x0F80 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SkillLevelUpScore;                                		// 0x0F84 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              HealMechaToScoreCoef;                             		// 0x0F88 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                XPSkillLevelUpPoint;                              		// 0x0F8C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              KillToXPCoef;                                     		// 0x0F90 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              NormalDamageToXPCoef;                             		// 0x0F94 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SpecialDamageToXPCoef;                            		// 0x0F98 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DamageTakenToXPCoef;                              		// 0x0F9C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              HealMechaToXPCoef;                                		// 0x0FA0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FString >                           XPIncTypeNames;                                   		// 0x0FA4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FXPIncInfo >                        XPIncInfoList;                                    		// 0x0FB0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FXPIncInfo                                  XPRepInfo;                                        		// 0x0FBC (0x000C) [0x0000000000000020]              ( CPF_Net )
	float                                              XPRepInfoNotifyInterval;                          		// 0x0FC8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              XP;                                               		// 0x0FCC (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      XPSkillLevel;                                     		// 0x0FD0 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      MaxXPSkillLevel;                                  		// 0x0FD1 (0x0001) [0x0000000000000002]              ( CPF_Const )
	int                                                KillEnemyMechaFlyingNum;                          		// 0x0FD4 (0x0004) [0x0000000000000000]              
	int                                                RepairAllianceInLifeNum;                          		// 0x0FD8 (0x0004) [0x0000000000000000]              
	int                                                RepairAllianceInLifeMax;                          		// 0x0FDC (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           RepairAlliance10PercentInThisLifeArray;           		// 0x0FE0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RepairAlliance10PercentAllianceInLifeMax;         		// 0x0FEC (0x0004) [0x0000000000000000]              
	int                                                RepairPointWithAnotherNum;                        		// 0x0FF0 (0x0004) [0x0000000000000000]              
	int                                                RepairPointWithAnotherMax;                        		// 0x0FF4 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           DoctorInThisLifeArray;                            		// 0x0FF8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BeRepairByAllianceInLifeMax;                      		// 0x1004 (0x0004) [0x0000000000000000]              
	int                                                KillEnemyInSameCareer;                            		// 0x1008 (0x0004) [0x0000000000000000]              
	int                                                OneShotKillFullBloodEnemyWithHawkEye;             		// 0x100C (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           KillEnemyInExModeArray;                           		// 0x1010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                KillEnemyInExModeMax;                             		// 0x101C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208650 ];

		return pClassPointer;
	};

	void IncrementDeaths ( int Amt, class UClass* DamageType );
	void OnXPIncInfoNotification ( );
	void NotifyXPSkillLevelUp ( );
	void NotifySuperSkillUsed ( );
	void CheckXPIncrementNotify ( float IncPoint, unsigned char XPIncType );
	void AddXP ( float Point, unsigned char XPIncType );
	void AddDamageTaken ( int Damage );
	void AddDamageForSkill ( int Damage, unsigned long bSpecialDamage );
	void AddKillForSkill ( int Kill );
	void AddGameScore ( float ScoreToAdd );
	void NotifyHealBase ( int Heal );
	void NotifyHealMecha ( int Heal );
	void NotifySkillLevelUp ( );
	void NotifyMechaFrozen ( );
	void NotifyMechaKill ( );
	void NotifyMechaSmite ( );
	void AddMechaDamage ( int DamageToAdd );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGMechaPlayerReplicationInfo::pClassPointer = NULL;

// Class MechaGame.MechaRoundGame
// 0x0014 (0x074C - 0x0738)
class AMechaRoundGame : public AMechaGame
{
public:
	int                                                RoundCount;                                       		// 0x0738 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRoundStarted : 1;                                		// 0x073C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanMove : 1;                                     		// 0x073C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              RoundStartTime;                                   		// 0x0740 (0x0004) [0x0000000000000000]              
	unsigned char                                      DefenceTeamIndex;                                 		// 0x0744 (0x0001) [0x0000000000000000]              
	int                                                RoundCountDown;                                   		// 0x0748 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208660 ];

		return pClassPointer;
	};

	void CheckObservers ( );
	void BroadcastRoundMessage ( unsigned long bRoundStart, unsigned long bGameOver );
	void SetRoundStarted ( unsigned long bStarted );
	void RoundEnded ( unsigned long bGameOver );
	void RoundStarted ( );
	void IncrementRoundCount ( );
	void InitRound ( );
	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	void CalculateRoundReport ( int WinnerTeamIndex );
	void AddTeamScore ( int TeamIndex );
	void EndRound ( class AActor* EndRoundFocus );
	void DirectEndRound ( int TeamIndex, struct FString Reason, class AActor* EndRoundFocus );
	void GenericEndRound ( int TeamIndex, struct FString Reason, class AActor* EndRoundFocus );
	void Reset ( );
	void ResetRoundLevel ( );
	int GetGamePlayerCount ( unsigned char TeamIndex );
	void CheckGamePlayerCount ( class ATGPlayerReplicationInfo* Exiting, int* RebCount, int* GovCount );
	void Logout ( class AController* Exiting );
	void StartMatch ( );
	void eventUpdateGameSpecificSettings ( struct FGameSpecificSettings Settings );
};

UClass* AMechaRoundGame::pClassPointer = NULL;

// Class MechaGame.TGMechaDamageType
// 0x0010 (0x0620 - 0x0610)
class UTGMechaDamageType : public UTGDamageType
{
public:
	float                                              FlashPosition;                                    		// 0x0610 (0x0004) [0x0000000000000000]              
	unsigned char                                      OwnerMechaWeapType;                               		// 0x0614 (0x0001) [0x0000000000000000]              
	struct FName                                       HitEventTag;                                      		// 0x0618 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208662 ];

		return pClassPointer;
	};

};

UClass* UTGMechaDamageType::pClassPointer = NULL;

// Class MechaGame.TGRealMechaBase
// 0x00E8 (0x07FC - 0x0714)
class ATGRealMechaBase : public ATGMechaBase
{
public:
	class ATGMechaInventoryManager*                    DeputyInvManager;                                 		// 0x0714 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UClass*                                      DeputyInventoryManagerClass;                      		// 0x0718 (0x0004) [0x0000000000000000]              
	class UClass*                                      MainWeaponClass;                                  		// 0x071C (0x0004) [0x0000000000000000]              
	class UClass*                                      DeputyWeaponClass;                                		// 0x0720 (0x0004) [0x0000000000000000]              
	class ATGMechaWeapon*                              MainWeapon;                                       		// 0x0724 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ATGMechaWeapon*                              DeputyWeapon;                                     		// 0x0728 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UClass*                                      CurrentMainWeaponAttachmentClass;                 		// 0x072C (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UClass*                                      CurrentDeputyWeaponAttachmentClass;               		// 0x0730 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class AUTWeaponAttachment*                         CurrentMainWeaponAttachment;                      		// 0x0734 (0x0004) [0x0000000000000000]              
	class AUTWeaponAttachment*                         CurrentDeputyWeaponAttachment;                    		// 0x0738 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             WeaponSocketList;                                 		// 0x073C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMeshMaterial >                     MeshMaterialList;                                 		// 0x0748 (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	unsigned long                                      bFriendSilhouette : 1;                            		// 0x0754 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bEnemySilhouette : 1;                             		// 0x0754 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bHasSilhouette : 1;                               		// 0x0754 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bShowDebugInfo : 1;                               		// 0x0754 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bInSight : 1;                                     		// 0x0754 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bSkillInitialized : 1;                            		// 0x0754 (0x0004) [0x0000000000000000] [0x00000020] 
	struct FLinearColor                                FriendSilhouetteColor;                            		// 0x0758 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FLinearColor                                EnemySilhouetteColor;                             		// 0x0768 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FLinearColor                                SilhouetteColor;                                  		// 0x0778 (0x0010) [0x0000000000000000]              
	TArray< struct ATGRealMechaBase_FVehicleEffect >   VehicleEffects;                                   		// 0x0788 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	TArray< struct ATGRealMechaBase_FVehicleSound >    VehicleSounds;                                    		// 0x0794 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x07A0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              SpawnZOffset;                                     		// 0x07A4 (0x0004) [0x0000000000000000]              
	struct FVector                                     HUDLocation;                                      		// 0x07A8 (0x000C) [0x0000000000000000]              
	struct FVector                                     MechaScreenLoc;                                   		// 0x07B4 (0x000C) [0x0000000000000000]              
	float                                              EnergyMax;                                        		// 0x07C0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Energy;                                           		// 0x07C4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              EnergyRecoverPerSec;                              		// 0x07C8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              EnergyRecoverInterval;                            		// 0x07CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              EnergyRecoverFrozenTime;                          		// 0x07D0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< class UClass* >                            SkillClasses;                                     		// 0x07D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGroupSkillRepInfo                          SkillRepInfo;                                     		// 0x07E0 (0x0008) [0x0000000000000020]              ( CPF_Net )
	struct FAnimationRepInfo                           AnimRepInfo;                                      		// 0x07E8 (0x0014) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208664 ];

		return pClassPointer;
	};

	void PlayeDyingEffect ( );
	void PlayDying ( class UClass* DamageType, struct FVector HitLoc, unsigned char DeathDir, unsigned char HitGroup );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation, unsigned char DeathDir, unsigned char HitGroup );
	void AdjustDriverDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, int* Damage, struct FVector* Momentum );
	void DriverRadiusDamage ( float DamageAmount, float DamageRadius, class AController* EventInstigator, class UClass* DamageType, float Momentum, struct FVector HitLocation, class AActor* DamageCauser, float DamageFalloffExponent );
	void SetMechaHidden ( unsigned long bInHidden );
	void NotifySkillStartSignal ( class AMechaSkillBase* Skill );
	void StopSkillByName ( struct FName SkillName );
	void StartSkillByName ( struct FName SkillName );
	bool HasSkill ( struct FName SkillName );
	void OnGroupSkillNotification ( );
	void NotifyGroupSkillApplied ( class UClass* SkillCompClass );
	void NotifySkillStateChanged ( class UClass* SkillCompClass, unsigned long bActive );
	void SetHUDLocation ( struct FVector NewHUDLocation );
	void TriggerVehicleSound ( struct FName SoundTag, unsigned long bMultiInstance );
	void SetVehicleEffectParmsColor ( struct FName EventTag, struct FName ParameterName, struct FColor Param );
	void SetVehicleEffectParmsVector ( struct FName EventTag, struct FName ParameterName, struct FVector Param );
	void SetVehicleEffectParmsFloat ( struct FName EventTag, struct FName ParameterName, float Param );
	void SetVehicleEffectParms ( struct FName TriggerName, class UParticleSystemComponent* PSC );
	void CreateVehicleEffect ( int EffectIndex, struct FName EventTag );
	void TriggerVehicleEffect ( struct FName EventTag );
	void VehicleEvent ( struct FName EventTag, unsigned long bMultiInstance );
	void OnAnimationNotification ( );
	void TimerStopAllAnimations ( );
	void PlayReplicatedAnimation ( struct FName AnimName, float BlendInTime, float BlendOutTime, unsigned char BodyStance );
	void eventSetWeapAnimType ( unsigned char AnimType );
	void ResetMaterials ( );
	void SetMaterialVectorParam ( struct FName ParameterName, struct FLinearColor* Value );
	void SetMaterialScalarParam ( struct FName ParameterName, float Value );
	void CheckSilhouetteFlag ( );
	void OnControllerNotification ( );
	void NotifyTeamChanged ( );
	void SetupOccludedMeshForExistingMecha ( );
	void SetSilhouetteEnabled ( unsigned long bInEnabled, struct FLinearColor InColor );
	void AddMeshMaterial ( class USkeletalMeshComponent* InMesh );
	void NotifyWeaponMeshAttached ( class USkeletalMeshComponent* WeaponMesh );
	void SetupBodyMaterialInstance ( );
	void WeaponAttachmentChanged ( );
	void OnInventoryManagerNotification ( struct FName VarName );
	void OnWeaponNotification ( struct FName VarName );
	void WeaponFired ( class AWeapon* InWeapon, unsigned long bViaReplication, struct FVector HitLocation );
	void ProjFlashLocationUpdated ( struct FReplicatedEffectsInfo InProjWeapEffectsInfo, unsigned long bViaReplication );
	void GunFlashLocationUpdated ( class AWeapon* InWeapon, unsigned long bViaReplication );
	void SetGunFlashLocation ( class AWeapon* Who, unsigned char FireModeNum, TArray< struct FVector > NewLoc );
	class ATGMechaWeaponAttachment* GetAttachedWeaponAttachmentByClass ( class UClass* AttachmentClass );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void StopFire ( unsigned char FireModeNum );
	void NotifyWeaponStartFire ( unsigned long bStartFire, class ATGMechaWeapon* MechaWeapon );
	void SetWeaponFired ( unsigned long bMainWeapon );
	bool StopFiring ( );
	void StartFire ( unsigned char FireModeNum );
	void ReloadWeapon ( );
	void ActiveWeapons ( );
	void AddAllMechaInventory ( );
	bool DriverEnter ( class APawn* P );
	void Destroyed ( );
	void eventPostBeginPlay ( );
	void eventPreBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGRealMechaBase::pClassPointer = NULL;

// Class MechaGame.TGRealMecha
// 0x0154 (0x0950 - 0x07FC)
class ATGRealMecha : public ATGRealMechaBase
{
public:
	unsigned long                                      bInBurningState : 1;                              		// 0x07FC (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bThunderCritShot : 1;                             		// 0x07FC (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bTransparencyEnabled : 1;                         		// 0x07FC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsTransparent : 1;                               		// 0x07FC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bJumpBoostStarted : 1;                            		// 0x07FC (0x0004) [0x0000000000000020] [0x00000010] ( CPF_Net )
	unsigned long                                      bWeaponReinforceStarted : 1;                      		// 0x07FC (0x0004) [0x0000000000000020] [0x00000020] ( CPF_Net )
	unsigned long                                      bStartHeal : 1;                                   		// 0x07FC (0x0004) [0x0000000000000020] [0x00000040] ( CPF_Net )
	unsigned long                                      bStartSelfHeal : 1;                               		// 0x07FC (0x0004) [0x0000000000000020] [0x00000080] ( CPF_Net )
	unsigned long                                      bIsAttacker : 1;                                  		// 0x07FC (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bEnableShowAttacker : 1;                          		// 0x07FC (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bShocked : 1;                                     		// 0x07FC (0x0004) [0x0000000000000020] [0x00000400] ( CPF_Net )
	unsigned long                                      bHasFired : 1;                                    		// 0x07FC (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bIsAttackingBase : 1;                             		// 0x07FC (0x0004) [0x0000000000000020] [0x00001000] ( CPF_Net )
	unsigned long                                      bCachedPressedJump : 1;                           		// 0x07FC (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bIgnoreJumpInput : 1;                             		// 0x07FC (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bIsAimLocked : 1;                                 		// 0x07FC (0x0004) [0x0000000000000020] [0x00008000] ( CPF_Net )
	unsigned long                                      bHasBeenInSwitchVolume : 1;                       		// 0x07FC (0x0004) [0x0000000000000000] [0x00010000] 
	float                                              FireLastTimeOut;                                  		// 0x0800 (0x0004) [0x0000000000000000]              
	float                                              FireTakeDamageFrequency;                          		// 0x0804 (0x0004) [0x0000000000000000]              
	float                                              ContinuousFireDamage;                             		// 0x0808 (0x0004) [0x0000000000000000]              
	float                                              FireLastTime;                                     		// 0x080C (0x0004) [0x0000000000000000]              
	struct FReplicatedEffectsInfo                      ProjWeapEffectsInfo;                              		// 0x0810 (0x0010) [0x0000000000000020]              ( CPF_Net )
	struct FMechaElectroweldingFixingInfo              MechaFixingInfo;                                  		// 0x0820 (0x0014) [0x0000000000000020]              ( CPF_Net )
	struct FName                                       FixingEffectSocketName;                           		// 0x0834 (0x0008) [0x0000000000000000]              
	class UTGMechaEffectComponent*                     MechaEffectComponent;                             		// 0x083C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              TransparentDist;                                  		// 0x0840 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     CacheCameraLoc;                                   		// 0x0844 (0x000C) [0x0000000000000000]              
	struct FRotator                                    CacheCameraRot;                                   		// 0x0850 (0x000C) [0x0000000000000000]              
	float                                              DamageLevelOnSmallSmoke;                          		// 0x085C (0x0004) [0x0000000000000000]              
	float                                              DamageLevelOnSmoke;                               		// 0x0860 (0x0004) [0x0000000000000000]              
	float                                              DamageLevelOnSmallFire;                           		// 0x0864 (0x0004) [0x0000000000000000]              
	float                                              DamageLevelOnFireAndSmoke;                        		// 0x0868 (0x0004) [0x0000000000000000]              
	float                                              SpawnProtectionTime;                              		// 0x086C (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              LastSpawnProtectionEffectTimeout;                 		// 0x0870 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   BodyOpacityMIC;                                   		// 0x0874 (0x0004) [0x0000000000000000]              
	float                                              EndFireRedEffectTime;                             		// 0x0878 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                LandedCount;                                      		// 0x087C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                LandedEventMinVelocityZ;                          		// 0x0880 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              JumpBoostDuration;                                		// 0x0884 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTGRealMechaHUD*                             MechaHUD;                                         		// 0x0888 (0x0004) [0x0000000000000000]              
	struct FString                                     HUDTypeClassName;                                 		// 0x088C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              WeakPointDamageScale;                             		// 0x0898 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      BalanceLevel;                                     		// 0x089C (0x0001) [0x0000000000000020]              ( CPF_Net )
	int                                                HealCount;                                        		// 0x08A0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< class ATGRealMecha* >                      DoctorArray;                                      		// 0x08A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TypeName;                                         		// 0x08B0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class ATGRealMecha*                                LockingMecha;                                     		// 0x08BC (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                LastHealth;                                       		// 0x08C0 (0x0004) [0x0000000000000000]              
	float                                              LastImpactAnimTime;                               		// 0x08C4 (0x0004) [0x0000000000000000]              
	float                                              ImpactAnimLength;                                 		// 0x08C8 (0x0004) [0x0000000000000000]              
	float                                              ShowAttackerTime;                                 		// 0x08CC (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FAttacker                                   LastAttacker;                                     		// 0x08D0 (0x0008) [0x0000000000000020]              ( CPF_Net )
	float                                              ShowAttackerStartTime;                            		// 0x08D8 (0x0004) [0x0000000000000000]              
	float                                              ChangeMechaTimeLimit;                             		// 0x08DC (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< class ATGMechaVolume* >                    BaseVolumeList;                                   		// 0x08E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              bInBaseAreaTime;                                  		// 0x08EC (0x0004) [0x0000000000000000]              
	float                                              LandDisableMoveDelay;                             		// 0x08F0 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	float                                              LandDisableMoveTime;                              		// 0x08F4 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	float                                              PressSpaceTimeForFly;                             		// 0x08F8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              LandDisableJumpTime;                              		// 0x08FC (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	TArray< class USkeletalMeshComponentOccluded* >    OccludedMeshList;                                 		// 0x0900 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	class UMaterial*                                   OccludedMaterial;                                 		// 0x090C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       OccludedColorParamName;                           		// 0x0910 (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                CachedOldHealth;                                  		// 0x0918 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 ReferenceMovementMesh;                            		// 0x091C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class AMechaMovementEffect*                        MovementEffect;                                   		// 0x0920 (0x0004) [0x0000000000000000]              
	class ATGRealMecha*                                MechaLockingMe;                                   		// 0x0924 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ATGMechaDoorSwitchVolume*                    DoorSwitchVolume;                                 		// 0x0928 (0x0004) [0x0000000000000000]              
	TArray< struct ATGRealMecha_FInstigatorInfo >      InstigatorList;                                   		// 0x092C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             ShieldAbsorbDelegate;                             		// 0x0938 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __ShieldAbsorb__Delegate;                         		// 0x0944 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208663 ];

		return pClassPointer;
	};

	void Health_CalcAchi ( int HealthPoint );
	void StopRepaired ( class ATGRealMecha* Doctor );
	void StartRepaired ( class ATGRealMecha* Doctor );
	void SetThunderAttachmentCritEffect ( );
	class UAudioComponent* PlayACSound ( class USoundCue* Sound, class UAudioComponent* AC, float FadeInTime );
	bool IsDefender ( );
	bool IsAttacker ( );
	void SetMovementEffect ( unsigned long bSetActive );
	void ServerUsePickup ( class ATGMechaPickupFactory* Pickup );
	void eventTick ( float DeltaTime );
	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	void ClearShowAttacker ( );
	void SetShowAttacker ( );
	void OnAttackerNotification ( );
	void ClearAttackingBase ( );
	void SetAttackingBase ( );
	void OnKeyDown_E ( class UTGMechaPlayerInput* Input );
	void NotifySkillUsed ( class AMechaSkillBase* Skill );
	void NotifyXPSkillLevelUp ( );
	bool DoJump ( unsigned long bUpdating );
	void NotifySkillStartSignal ( class AMechaSkillBase* Skill );
	void SetSpeedScaleTimer ( float Scale, float Duration );
	void OnSetSetMechaMovableTimer ( );
	void ClientSetSetMechaMoveless ( float Duration );
	void SetMechaMoveless ( float Duration );
	bool IsInBaseArea ( );
	void SetBaseAreaVolume ( class ATGMechaVolume* Vol, unsigned long bTouch );
	bool IsInSpawnArea ( );
	bool IsInZone ( unsigned char ZoneType );
	int GetChangeMechaTimeRemain ( );
	void TimerSelectTimeLimit ( );
	void SetWeaponFired ( unsigned long bMainWeapon );
	void SetSelectMechaEnable ( unsigned long bEnable );
	void SetBurningDamageParms ( class UClass* inDamageType, float InFireLastTime, float InContinuousFireDamage, float InFireTakeDamageFrequency, class AController* InstigatedBy );
	void RecordMechaWeapDamage ( int InDamage, class UClass* DamageType );
	void AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, int* InDamage, struct FVector* Momentum, class UClass** DamageType );
	void AddInstigatorPRI ( class ATGMechaPlayerReplicationInfo* InstigatorPRI, int Damage );
	void AddTechStatsInfo ( class AController* InstigatedBy, struct FString VictimName, int Damage, unsigned long bKilled, unsigned long bIsHeadShot, int MaxHealth );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void Suicide ( );
	void PlayeDyingEffect ( );
	void TimerEndSpawnProtectionEffect ( );
	void PlaySpawnProtectionEffect ( );
	void TimerEndFireRedEffect ( );
	void SetTransparent ( unsigned long bTransparent );
	void UpdateDamageEffect ( );
	void OnDeceletationEffectTimer ( );
	void PlayDeceletationEffect ( );
	void TimerEndTrapDamageEffect ( );
	void CheckTrapDamageEffect ( );
	void PlayTakeHitEffects ( );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	void OnSelfHealStateChanged ( );
	void OnShockedStateChanged ( );
	void OnHealStateChanged ( );
	void OnHealCountUpdate ( );
	void TimerEndHeal ( );
	void TimerEndSelfHeal ( );
	void Heal ( int HealthToAdd, class AController* HealInstigator, unsigned long bTriggerEffect, unsigned long bInstantHeal, float HealInterval );
	void OnKeyUp_Shift ( class UTGMechaPlayerInput* Input );
	void OnKeyDown_Shift ( class UTGMechaPlayerInput* Input );
	void OnKeyDown_Space ( class UTGMechaPlayerInput* Input );
	void TimerEnableMovementInput ( );
	void TimerDisableMovementInput ( );
	void TimerSetJumpInputEnable ( );
	void HandleLimitationAfterLand ( );
	void OnLandedCountUpdate ( );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void OnNotifyWeaponReinforce ( );
	void NotifyWeaponReinforce ( unsigned long bStarted );
	void NotifyJumpBoostStateChanged ( );
	void SetJumpBoostStarted ( unsigned long bStarted );
	void ClearJumpBoost ( );
	void StartJumpBoost ( );
	void DrivingStatusChanged ( );
	void PlayWeapReplicatedEffects ( struct FName VarName );
	void SetEnemyColor ( );
	void NotifyTeamChanged ( );
	void DisplayHud ( class ATGHUD* HUD, class UCanvas* Canvas );
	void CreateHUD ( );
	void ClientSetDoorSwitchVolume ( class ATGMechaDoorSwitchVolume* TouchingVolume );
	void SetDoorSwitchVolume ( class ATGMechaDoorSwitchVolume* TouchingVolume );
	void PlayDying ( class UClass* DamageType, struct FVector HitLoc, unsigned char DeathDir, unsigned char HitGroup );
	void UpdateOccludedMeshColor ( );
	bool NeedOccludedEffect ( class ATGRealMecha* Mecha );
	void SetOccludedMeshHidden ( unsigned long bInHidden );
	void SetupOccludedMesh ( class USkeletalMeshComponent* MeshComp );
	void SetupOccludedMeshForExistingMecha ( );
	void OnControllerNotification ( );
	void SetupOccludedMeshForOwnerMecha ( class USkeletalMeshComponent* MeshComp );
	void NotifyWeaponMeshAttached ( class USkeletalMeshComponent* WeaponMesh );
	void eventPostBeginPlay ( );
	void eventPreBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
	void ShieldAbsorb ( int* Damage );
};

UClass* ATGRealMecha::pClassPointer = NULL;

// Class MechaGame.TGMechaDMPlayerController
// 0x0014 (0x0A98 - 0x0A84)
class ATGMechaDMPlayerController : public ATGMechaGamePlayerController
{
public:
	TArray< class ATGMechaVolume* >                    BaseAreaVolumeList;                               		// 0x0A84 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ATGMechaDoorSwitchVolume*                    DoorSwitchVol;                                    		// 0x0A90 (0x0004) [0x0000000000000000]              
	int                                                FrozenCountDown;                                  		// 0x0A94 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208692 ];

		return pClassPointer;
	};

	void TimerCountDown ( );
	void ClientFrozenCountDown ( int CountDown );
	void ReceiveTextInfo ( unsigned char Type );
	void ReceiveParticleMessage ( int MessageSwitch );
	void CheckAttackerCountInBaseVolume ( );
	void SetupMechaVolume ( );
	bool IsDefender ( );
	bool IsAttacker ( );
	float GetDamageScaleDecrement ( );
	void UseXPSkill ( );
	bool ShouldDrawActorOverlays ( );
	void ClientSetHUD ( class UClass* newHUDType );
	void eventPostBeginPlay ( );
};

UClass* ATGMechaDMPlayerController::pClassPointer = NULL;

// Class MechaGame.TGSeqEvent_ItemHealthChanged
// 0x0004 (0x0104 - 0x0100)
class UTGSeqEvent_ItemHealthChanged : public USequenceEvent
{
public:
	float                                              HealthPercent;                                    		// 0x0100 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208693 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UTGSeqEvent_ItemHealthChanged::pClassPointer = NULL;

// Class MechaGame.MechaTextMessage
// 0x000C (0x0070 - 0x0064)
class UMechaTextMessage : public UUTLocalMessage
{
public:
	TArray< struct FMessageInfo >                      MessageInfoList;                                  		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208699 ];

		return pClassPointer;
	};

	struct FColor GetColorEx ( int Switch );
	void ClientReceiveEx ( class APlayerController* P, int Switch, int NumValue1, int NumValue2, struct FString StrValue, class UObject* OptionalObject );
	struct FString GetStringEx ( int Switch, int NumValue1, int NumValue2, struct FString StrValue, class UObject* OptionalObject );
};

UClass* UMechaTextMessage::pClassPointer = NULL;

// Class MechaGame.TGMechaDMGameReplicationInfo
// 0x0054 (0x03C8 - 0x0374)
class ATGMechaDMGameReplicationInfo : public AMechaRoundGameReplicationInfo
{
public:
	class AMechaDestructibleItem*                      BaseCore;                                         		// 0x0374 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                AttackerTeamScore;                                		// 0x0378 (0x0004) [0x0000000000000000]              
	int                                                DefencerTeamScore;                                		// 0x037C (0x0004) [0x0000000000000000]              
	int                                                KillToDefencePoint;                               		// 0x0380 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                DefenceLevelUpPoint;                              		// 0x0384 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxDefenceLevel;                                  		// 0x0388 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DefenceDamageReduction;                           		// 0x038C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                AttackerDefenceLevel;                             		// 0x0390 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              AttackerDefenceProgress;                          		// 0x0394 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                DefencerDefenceLevel;                             		// 0x0398 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              DefencerDefenceProgress;                          		// 0x039C (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      DefenceTeamIndex;                                 		// 0x03A0 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      DoorOpenSpeedState;                               		// 0x03A1 (0x0001) [0x0000000000000020]              ( CPF_Net )
	int                                                KillDefencerNumForBaseDamage;                     		// 0x03A4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                BaseDamageForKillDefencer;                        		// 0x03A8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MinBaseHealth;                                    		// 0x03AC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                CurrentKillDefencerNum;                           		// 0x03B0 (0x0004) [0x0000000000000000]              
	int                                                DoorOpenDelay;                                    		// 0x03B4 (0x0004) [0x0000000000000000]              
	int                                                DoorOpenRemainingTime;                            		// 0x03B8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              DoorOpenMaxProgress;                              		// 0x03BC (0x0004) [0x0000000000000000]              
	float                                              CurrentDoorOpenProgress;                          		// 0x03C0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bDoorOpenProgressStarted : 1;                     		// 0x03C4 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bOpenTimeLeftNotified : 1;                        		// 0x03C4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOpenTimeLeftNotified01 : 1;                      		// 0x03C4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bOpenTimeLeftNotified02 : 1;                      		// 0x03C4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bOpenTimeLeftNotified03 : 1;                      		// 0x03C4 (0x0004) [0x0000000000000000] [0x00000010] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208700 ];

		return pClassPointer;
	};

	void AddRemainingTimeFeedback ( int Time );
	void AddTextInfo ( unsigned char Type );
	void NotifyDoorOpenProgress ( );
	bool IsDoorOpened ( );
	void NotifyDefenceProgresUpdate ( struct FName VarName );
	void NotifyDefenceLevelUp ( struct FName VarName );
	void CalcDefenceLevel ( );
	void CheckKillDefencerCauseBaseDamage ( );
	void AddTeamKill ( unsigned char KillerTeamIndex, unsigned char KillerMechaType );
	void ClientRoundClear ( );
	void RoundClear ( );
	void eventTimer ( );
	bool InOrder ( class APlayerReplicationInfo* P1, class APlayerReplicationInfo* P2 );
	void ProcessCharacterData ( class ATGPlayerReplicationInfo* PRI, unsigned long bTeamChange );
	void BeginProcessCharacterData ( class ATGPlayerReplicationInfo* PRI, unsigned long bTeamChange );
	void StartProcessingCharacterData ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGMechaDMGameReplicationInfo::pClassPointer = NULL;

// Class MechaGame.MechaGameHUD
// 0x00D8 (0x2008 - 0x1F30)
class AMechaGameHUD : public ATGTeamHUD
{
public:
	struct FTextMessage                                TextMessageList[ 0x5 ];                           		// 0x1F30 (0x0050) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TextMessageGap;                                   		// 0x1F80 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              TextMessageLifeTime;                              		// 0x1F84 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              TextMessageEndOfLife;                             		// 0x1F88 (0x0004) [0x0000000000000000]              
	TArray< struct FTextInfo >                         TextInfoList;                                     		// 0x1F8C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FTextInfo                                   CurrentTextInfo;                                  		// 0x1F98 (0x0024) [0x0000000000000000]              
	class UTexture2D*                                  GameInfoImage;                                    		// 0x1FBC (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   ObjSightRange;                                    		// 0x1FC0 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   ObjIconScaleRange;                                		// 0x1FC8 (0x0008) [0x0000000000000000]              
	TArray< struct FTextureInfo >                      HeadOverlayList;                                  		// 0x1FD0 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class UTexture2D*                                  HeadOverlayHPBar_G;                               		// 0x1FDC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  HeadOverlayHPBar_R;                               		// 0x1FE0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  HeadOverlayHPBar_Y;                               		// 0x1FE4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         HeadOverlayHPBarCoords;                           		// 0x1FE8 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   HeadOverlayHPBarOffset;                           		// 0x1FF8 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   HeadOverlayBalanceOffset;                         		// 0x2000 (0x0008) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208747 ];

		return pClassPointer;
	};

	void DrawObjective ( class AMecha* Obj, unsigned long bInSight, unsigned long bEnemy );
	void DrawTextInfo ( );
	void AddTextInfo ( unsigned char Type );
	void DrawTextMessage ( );
	void AddTextMessage ( struct FString Message, struct FColor DrawColor );
	void DrawLivingHud ( );
};

UClass* AMechaGameHUD::pClassPointer = NULL;

// Class MechaGame.TGMechaGameHUD
// 0x0254 (0x225C - 0x2008)
class ATGMechaGameHUD : public AMechaGameHUD
{
public:
	class UParticleSystem*                             MechaSmitePS;                                     		// 0x2008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             MechaItemSmitePS;                                 		// 0x200C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             MechaFrozenPS;                                    		// 0x2010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             MechaSkillKillPS;                                 		// 0x2014 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             XPSkillUsablePS;                                  		// 0x2018 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             XPSkillStartedPS;                                 		// 0x201C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             AssistantPS;                                      		// 0x2020 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             RemainingSecondsPS;                               		// 0x2024 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             RemainingMinute1PS;                               		// 0x2028 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             RemainingMinute2PS;                               		// 0x202C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             RemainingMinute3PS;                               		// 0x2030 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class USoundCue*                                   RemainingSecondsSnd;                              		// 0x2034 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class USoundCue*                                   XPSkillUsableSnd;                                 		// 0x2038 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class USoundCue*                                   DoorSwitchEnterSnd;                               		// 0x203C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class USoundCue*                                   DoorSwitchExitSnd;                                		// 0x2040 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FTipSoundInfo >                     TipSoundList;                                     		// 0x2044 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class UTexture2D*                                  HUDIconAttack;                                    		// 0x2050 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  HUDIconProtect;                                   		// 0x2054 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  HUDIconDoorSwitch;                                		// 0x2058 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  HUDIconDoorSwitch_Taken;                          		// 0x205C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         HUDIconCoords;                                    		// 0x2060 (0x0010) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CoreHPBG;                                         		// 0x2070 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CoreHPBar;                                        		// 0x2074 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         CoreHPBGCoords;                                   		// 0x2078 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         CoreHPBarCoords;                                  		// 0x2088 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   CoreHPBarOffset;                                  		// 0x2098 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bDrawBaseOverlayHP : 1;                           		// 0x20A0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisplayDriftingXPSkill : 1;                      		// 0x20A0 (0x0004) [0x0000000000000000] [0x00000002] 
	class UTexture2D*                                  MechaAttackerIcon;                                		// 0x20A4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  MechaScreenIconGreen;                             		// 0x20A8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  MechaScreenIconYellow;                            		// 0x20AC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  MechaScreenIconRed;                               		// 0x20B0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  MechaAttackIcon;                                  		// 0x20B4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         MechaAttackIconCoords;                            		// 0x20B8 (0x0010) [0x0000000000000000]              
	TArray< struct FTextureInfo >                      AvatarBGList;                                     		// 0x20C8 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FTextureInfo >                      AvatarHPList;                                     		// 0x20D4 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class UTexture2D*                                  AvatarEnergy;                                     		// 0x20E0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         AvatarEnergyCoords;                               		// 0x20E4 (0x0010) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FVector2D >                         AvatarHPOffsetList;                               		// 0x20F4 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FVector2D                                   AvatarEnergyOffset;                               		// 0x2100 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   AvatarBoostOffset;                                		// 0x2108 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   AvatarHPTextOffset;                               		// 0x2110 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   AvatarBalanceOffset;                              		// 0x2118 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  XPBG;                                             		// 0x2120 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  XPBG_Usable;                                      		// 0x2124 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  XPBar;                                            		// 0x2128 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  XPBar_Usable;                                     		// 0x212C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         XPBGCoords;                                       		// 0x2130 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         XPBarCoords;                                      		// 0x2140 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   XPBarOffset;                                      		// 0x2150 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  TipArrow;                                         		// 0x2158 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  TipSkillE;                                        		// 0x215C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  TipSkillF;                                        		// 0x2160 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         TipArrowCoords;                                   		// 0x2164 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         TipSkillCoords;                                   		// 0x2174 (0x0010) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  SelectPanel;                                      		// 0x2184 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  SelectedText;                                     		// 0x2188 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  SelectDisabled;                                   		// 0x218C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  SelectDisabled_Left;                              		// 0x2190 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  SelectDisabled_Right;                             		// 0x2194 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         SelectPanelCoords;                                		// 0x2198 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         SelectDisabledCoords;                             		// 0x21A8 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         SelectedTextCoords;                               		// 0x21B8 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   SelectOffset;                                     		// 0x21C8 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   SelectedOffset;                                   		// 0x21D0 (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              SelectCellWidth;                                  		// 0x21D8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FTextureInfo >                      SelectedList;                                     		// 0x21DC (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class UTexture2D*                                  BasePoint;                                        		// 0x21E8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  DoorSwitchPoint;                                  		// 0x21EC (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         BasePointCoords;                                  		// 0x21F0 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         DoorSwitchPointCoords;                            		// 0x2200 (0x0010) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  DoorTexture;                                      		// 0x2210 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UMaterial*                                   MapMaterialReference;                             		// 0x2214 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  LockWarning;                                      		// 0x2218 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         LockWarningCoords;                                		// 0x221C (0x0010) [0x0000000000000002]              ( CPF_Const )
	float                                              CachedClipX;                                      		// 0x222C (0x0004) [0x0000000000000000]              
	float                                              CachedClipY;                                      		// 0x2230 (0x0004) [0x0000000000000000]              
	struct FVector                                     FeedbackScreenLoc;                                		// 0x2234 (0x000C) [0x0000000000000000]              
	float                                              DriftDuration;                                    		// 0x2240 (0x0004) [0x0000000000000000]              
	float                                              XPIconStartTime;                                  		// 0x2244 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  DriftXPIcon;                                      		// 0x2248 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         DriftXPCoords;                                    		// 0x224C (0x0010) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208746 ];

		return pClassPointer;
	};

	void AddKillFeedBackMessage ( class UClass* DamageType, int MultiKillLevel, int Priority, unsigned long bUseInPriority, class APlayerReplicationInfo* KillerPRI, class APlayerReplicationInfo* KilledPRI, int OneShotKillNum, unsigned long bIsOneShotDeath, unsigned long bThroughWall );
	void UpdateFeedbackScreenLoc ( );
	void AddRemainingTimeFeedback ( int RemainingSeconds );
	void AddAssistantFeedback ( );
	void NotifyFrozen ( );
	void ClearDriftingXPSkill ( );
	void StartDriftingXPSkill ( );
	void NotifyXPSkillStarted ( );
	void NotifyXPSkillUsable ( );
	void NotifyItemSmite ( );
	void NotifySmite ( );
	void DrawProgressBarEx ( struct FVector2D RelPos, float ProgressPct, class UTexture2D* BGTex, class UTexture2D* BarTex, struct FTextureCoordinates BGCoords, struct FTextureCoordinates BarCoords, struct FVector2D BarOffset );
	void DrawLockWarning ( );
	void DrawDriftingEffect ( );
	void NotifyMechaHealthChange ( class ATGRealMecha* Mecha, unsigned long bWeakPoint, int HealthChange );
	void DrawMechaSelection ( );
	void DisplayHit ( struct FVector AttackerPos, int Damage, class UClass* DamageType );
	void DisplayACE ( );
	void DisplaySpectator ( );
	void DisplayAvatar ( );
	void DrawLivingHud ( );
};

UClass* ATGMechaGameHUD::pClassPointer = NULL;

// Class MechaGame.MechaDestructibleItemLink
// 0x000C (0x0250 - 0x0244)
class AMechaDestructibleItemLink : public AMechaDestructibleItem
{
public:
	TArray< class AMechaDestructibleItem* >            LinkTargets;                                      		// 0x0244 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208777 ];

		return pClassPointer;
	};

	void UnifiedHeal ( int HealthToAdd );
	void eventUnifiedTakeDamage ( class AActor* Target, int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void eventPostBeginPlay ( );
};

UClass* AMechaDestructibleItemLink::pClassPointer = NULL;

// Class MechaGame.MechaGameExplosion_Blaster
// 0x0000 (0x00E4 - 0x00E4)
class UMechaGameExplosion_Blaster : public UGameExplosion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208903 ];

		return pClassPointer;
	};

};

UClass* UMechaGameExplosion_Blaster::pClassPointer = NULL;

// Class MechaGame.TGMechaDamageType_Skill
// 0x0000 (0x0620 - 0x0620)
class UTGMechaDamageType_Skill : public UTGMechaDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208906 ];

		return pClassPointer;
	};

};

UClass* UTGMechaDamageType_Skill::pClassPointer = NULL;

// Class MechaGame.TGMechaDmgType_Skill_BlasterExplosion
// 0x0000 (0x0620 - 0x0620)
class UTGMechaDmgType_Skill_BlasterExplosion : public UTGMechaDamageType_Skill
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208905 ];

		return pClassPointer;
	};

};

UClass* UTGMechaDmgType_Skill_BlasterExplosion::pClassPointer = NULL;

// Class MechaGame.MechaGameExplosion_Trample
// 0x0000 (0x00E4 - 0x00E4)
class UMechaGameExplosion_Trample : public UGameExplosion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208908 ];

		return pClassPointer;
	};

};

UClass* UMechaGameExplosion_Trample::pClassPointer = NULL;

// Class MechaGame.TGMechaDmgType_Skill_TrampleExplosion
// 0x0000 (0x0620 - 0x0620)
class UTGMechaDmgType_Skill_TrampleExplosion : public UTGMechaDamageType_Skill
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208910 ];

		return pClassPointer;
	};

};

UClass* UTGMechaDmgType_Skill_TrampleExplosion::pClassPointer = NULL;

// Class MechaGame.MechaGameExplosionActor
// 0x0000 (0x022C - 0x022C)
class AMechaGameExplosionActor : public AGameExplosionActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 208912 ];

		return pClassPointer;
	};

	void DoExplosionDamage ( unsigned long bCauseDamage, unsigned long bCauseEffects );
	void SpawnExplosionParticleSystem ( class UParticleSystem* Template );
};

UClass* AMechaGameExplosionActor::pClassPointer = NULL;

// Class MechaGame.TGRealMechaHUD
// 0x012C (0x0168 - 0x003C)
class UTGRealMechaHUD : public UObject
{
public:
	class UTexture2D*                                  LeftWeapState;                                    		// 0x003C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  RightWeapState;                                   		// 0x0040 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         LeftWeapStateCoords;                              		// 0x0044 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         RightWeapStateCoords;                             		// 0x0054 (0x0010) [0x0000000000000002]              ( CPF_Const )
	int                                                WeaponBarOffset;                                  		// 0x0064 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  MechaWeaponBar;                                   		// 0x0068 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  MechaWeaponBarBkg;                                		// 0x006C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  MainWeaponOverheatBar;                            		// 0x0070 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  DeputyWeaponOverheatBar;                          		// 0x0074 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  AmmoInfinityTex;                                  		// 0x0078 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         MechaWeaponBarBkgCoords;                          		// 0x007C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         MainWeaponBarCoords;                              		// 0x008C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         DeputyWeaponBarCoords;                            		// 0x009C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         MainWeaponOverheatBarCoords;                      		// 0x00AC (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         DeputyWeaponOverheatBarCoords;                    		// 0x00BC (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         AmmoInfinityCoords;                               		// 0x00CC (0x0010) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CrossHair;                                        		// 0x00DC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  SemiCircle;                                       		// 0x00E0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CentralPoint;                                     		// 0x00E4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         CrosshairCoords;                                  		// 0x00E8 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         SemiCircleCoords;                                 		// 0x00F8 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         CentralPointCoords;                               		// 0x0108 (0x0010) [0x0000000000000002]              ( CPF_Const )
	float                                              MaxCrosshairOffset;                               		// 0x0118 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              MinCrosshairOffset;                               		// 0x011C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CrosshairOffsetDelta;                             		// 0x0120 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SemiCircleOffsetX;                                		// 0x0124 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CrosshairOffset;                                  		// 0x0128 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  PlusIcon;                                         		// 0x012C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         PlusIconCoords;                                   		// 0x0130 (0x0010) [0x0000000000000002]              ( CPF_Const )
	class AMechaSkillBase*                             XPSkill;                                          		// 0x0140 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  ClearViewBG;                                      		// 0x0144 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class ATGAnimTex*                                  NitroAnim;                                        		// 0x0148 (0x0004) [0x0000000000000000]              
	TArray< class UTexture2D* >                        NitroAnimTexArray;                                		// 0x014C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class UMaterial*                                   SkillMat;                                         		// 0x0158 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              XPFlashStartTime;                                 		// 0x015C (0x0004) [0x0000000000000000]              
	float                                              FArrowFlashStartTime;                             		// 0x0160 (0x0004) [0x0000000000000000]              
	float                                              EArrowFlashStartTime;                             		// 0x0164 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209034 ];

		return pClassPointer;
	};

	void DisplayClearViewHUD ( class ATGHUD* HUD, class UCanvas* Canvas );
	void DisplayCentralArea ( class ATGHUD* HUD, class UCanvas* Canvas );
	void eventDisplayWeaponBar ( class ATGHUD* HUD, class UCanvas* Canvas );
	void DisplayAvatar ( class ATGHUD* HUD, class UCanvas* Canvas );
	void DisplayXPSkill ( class ATGHUD* HUD, class UCanvas* Canvas );
	void DisplaySkills ( class ATGHUD* HUD, class UCanvas* Canvas );
	void CreateMIC ( class UMaterial* Mat, class UMaterialInstanceConstant** MIC );
	void DisplayHud ( class ATGHUD* HUD, class UCanvas* Canvas );
	void Initialize ( );
};

UClass* UTGRealMechaHUD::pClassPointer = NULL;

// Class MechaGame.MechaGamePawn
// 0x0000 (0x1100 - 0x1100)
class AMechaGamePawn : public ATGPawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209045 ];

		return pClassPointer;
	};

	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation, unsigned char DeathDir, unsigned char HitGroup );
};

UClass* AMechaGamePawn::pClassPointer = NULL;

// Class MechaGame.MechaSkillBase
// 0x00A8 (0x027C - 0x01D4)
class AMechaSkillBase : public AActor
{
public:
	class ATGMechaGamePlayerController*                OwnerPC;                                          		// 0x01D4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class AMechaSkillManager*                          OwnerSkillMgr;                                    		// 0x01D8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ATGRealMecha*                                OwnerMecha;                                       		// 0x01DC (0x0004) [0x0000000000000020]              ( CPF_Net )
	class AMechaSkillBase*                             Next;                                             		// 0x01E0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class AMechaSkillComponentBase*                    SkillComponentChain;                              		// 0x01E4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FString                                     FriendlyName;                                     		// 0x01E8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Usage;                                            		// 0x01F4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	float                                              TimeCoolDown;                                     		// 0x0200 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              EnergyConsumePerSec;                              		// 0x0204 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              EnergyConsumeInterval;                            		// 0x0208 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bInitiative : 1;                                  		// 0x020C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bSuperSkill : 1;                                  		// 0x020C (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bDisplayHUD : 1;                                  		// 0x020C (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	unsigned long                                      bNeedManualStop : 1;                              		// 0x020C (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      bNeedStartSignal : 1;                             		// 0x020C (0x0004) [0x0000000000000002] [0x00000010] ( CPF_Const )
	unsigned long                                      bHasStartSignal : 1;                              		// 0x020C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bCoolingDownStarted : 1;                          		// 0x020C (0x0004) [0x0000000000000020] [0x00000040] ( CPF_Net )
	unsigned long                                      bInEffect : 1;                                    		// 0x020C (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bShowSkillTip : 1;                                		// 0x020C (0x0004) [0x0000000000000020] [0x00000100] ( CPF_Net )
	unsigned long                                      bNotifyStartMessage : 1;                          		// 0x020C (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bNeedOccluedEffect : 1;                           		// 0x020C (0x0004) [0x0000000000000002] [0x00000400] ( CPF_Const )
	struct FName                                       UniqueName;                                       		// 0x0210 (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              ActiveDuration;                                   		// 0x0218 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CoolDownStartTime;                                		// 0x021C (0x0004) [0x0000000000000000]              
	unsigned char                                      CurrentLevel;                                     		// 0x0220 (0x0001) [0x0000000000000020]              ( CPF_Net )
	class UMaterialInstanceConstant*                   SkillMIC;                                         		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  SkillIcon;                                        		// 0x0228 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  SkillDisabled;                                    		// 0x022C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  SkillKeyIcon;                                     		// 0x0230 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  SkillTip;                                         		// 0x0234 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         SkillIconCoords;                                  		// 0x0238 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         SkillKeyIconCoords;                               		// 0x0248 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         SkillTipCoords;                                   		// 0x0258 (0x0010) [0x0000000000000002]              ( CPF_Const )
	float                                              IconScale;                                        		// 0x0268 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              KeyScale;                                         		// 0x026C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     KeyName;                                          		// 0x0270 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209114 ];

		return pClassPointer;
	};

	struct FString GetHumanReadableName ( );
	void SetLevel ( unsigned char Level );
	void Cleanup ( );
	void TimerEnergyConsume ( );
	bool IsConsumeEnergy ( );
	bool HasEnoughEnergy ( );
	float GetCoolDownPercent ( );
	float GetCoolDownRemainingTime ( );
	bool IsCoolingDown ( );
	bool NeedsCoolDown ( );
	bool IsInstant ( );
	bool IsInEffect ( );
	void ResetSkill ( );
	void Stop ( );
	void Start ( );
	bool CheckStartSignal ( );
	void SetStartSignal ( unsigned long bStartSignal );
	void DeActivateSkillComponents ( );
	void ActivateSkillComponents ( );
	bool CanActivateSkillComponents ( );
	bool AddSkillComponent ( class AMechaSkillComponentBase* NewItem );
	void CreateSkillComponents ( );
	bool Initialize ( class ATGMechaGamePlayerController* InOwnerPC, class AMechaSkillManager* InOwnerSkillMgr );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* AMechaSkillBase::pClassPointer = NULL;

// Class MechaGame.TGSeqEvent_RoundStarted
// 0x0000 (0x0100 - 0x0100)
class UTGSeqEvent_RoundStarted : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209369 ];

		return pClassPointer;
	};

};

UClass* UTGSeqEvent_RoundStarted::pClassPointer = NULL;

// Class MechaGame.TGSeqEvent_RoundEnded
// 0x0000 (0x0100 - 0x0100)
class UTGSeqEvent_RoundEnded : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209372 ];

		return pClassPointer;
	};

};

UClass* UTGSeqEvent_RoundEnded::pClassPointer = NULL;

// Class MechaGame.MechaHalfRoundGame
// 0x0010 (0x075C - 0x074C)
class AMechaHalfRoundGame : public AMechaRoundGame
{
public:
	unsigned char                                      RoundState;                                       		// 0x074C (0x0001) [0x0000000000000000]              
	int                                                FirstHalfTime;                                    		// 0x0750 (0x0004) [0x0000000000000000]              
	int                                                SecondHalfTime;                                   		// 0x0754 (0x0004) [0x0000000000000000]              
	int                                                MaxRoundCount;                                    		// 0x0758 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209393 ];

		return pClassPointer;
	};

	void AddTeamScore ( int TeamIndex );
	void DirectEndRound ( int TeamIndex, struct FString Reason, class AActor* EndRoundFocus );
	void IncrementRoundCount ( );
	void SetRoundState ( unsigned char State );
	void Reset ( );
	void InitGameReplicationInfo ( );
};

UClass* AMechaHalfRoundGame::pClassPointer = NULL;

// Class MechaGame.MechaHalfRoundGameReplicationInfo
// 0x000C (0x0380 - 0x0374)
class AMechaHalfRoundGameReplicationInfo : public AMechaRoundGameReplicationInfo
{
public:
	int                                                MaxRoundCount;                                    		// 0x0374 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      RoundState;                                       		// 0x0378 (0x0001) [0x0000000000000020]              ( CPF_Net )
	int                                                FirstHalfTime;                                    		// 0x037C (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209401 ];

		return pClassPointer;
	};

};

UClass* AMechaHalfRoundGameReplicationInfo::pClassPointer = NULL;

// Class MechaGame.MechaMapInfo
// 0x0008 (0x043C - 0x0434)
class UMechaMapInfo : public UTGMapInfo
{
public:
	class UTexture2D*                                  DoorTexture;                                      		// 0x0434 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DoorFlashStartTime;                               		// 0x0438 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209429 ];

		return pClassPointer;
	};

	float GetPickupSizeScale ( class ATGMechaPickupFactory* Pickup );
	void DrawObserverBigRadar ( class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float XPos, float YPos, float Width, float Height, unsigned long bFullDetail, float AspectRatio );
	void DrawObserverMap ( class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float XPos, float YPos, float Width, float Height, unsigned long bFullDetail, float AspectRatio, float BkgImgAlpha );
	void DrawBigRadar ( class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float XPos, float YPos, float Width, float Height, unsigned long bFullDetail, float AspectRatio );
	void DrawMap ( class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float XPos, float YPos, float Width, float Height, unsigned long bFullDetail, float AspectRatio, float BkgImgAlpha );
	void DrawBigRadarDoorImage ( class UCanvas* Canvas, float X, float Y, float W, float H, struct FRotator R );
	void SetBaseDoorVisible ( unsigned long bVisible );
	void FindObjectives ( );
};

UClass* UMechaMapInfo::pClassPointer = NULL;

// Class MechaGame.TGMechaPickupFactory
// 0x0020 (0x03C8 - 0x03A8)
class ATGMechaPickupFactory : public AUTPickupFactory
{
public:
	unsigned char                                      Type;                                             		// 0x03A8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                RespawnTime;                                      		// 0x03AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HealthHeal;                                       		// 0x03B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    PickupEffect;                                     		// 0x03B4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UTexture2D*                                  RepairRadarIcon;                                  		// 0x03B8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIconStartFlash : 1;                              		// 0x03BC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanBePickedUp : 1;                               		// 0x03BC (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	float                                              FlashStartTime;                                   		// 0x03C0 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   RepairSuccessSound;                               		// 0x03C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209449 ];

		return pClassPointer;
	};

	class UTexture2D* GetRadarIcon ( );
	void SetPickupEnable ( );
	void SetPickupDisable ( );
	void NotifyRoundStarted ( );
	void ClearIconFlash ( );
	void FlashIcon ( );
	void SetPickupMesh ( );
	void SetPickupHidden ( );
	void SetPickupVisible ( );
	void InitializePickup ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGMechaPickupFactory::pClassPointer = NULL;

// Class MechaGame.MechaMovementEffect
// 0x0000 (0x01F0 - 0x01F0)
class AMechaMovementEffect : public AUDKVehicleMovementEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209597 ];

		return pClassPointer;
	};

};

UClass* AMechaMovementEffect::pClassPointer = NULL;

// Class MechaGame.MechaSkillComponentBase
// 0x002C (0x0200 - 0x01D4)
class AMechaSkillComponentBase : public AActor
{
public:
	class AMechaSkillBase*                             OwnerSkill;                                       		// 0x01D4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ATGRealMecha*                                OwnerMecha;                                       		// 0x01D8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class AMechaSkillComponentBase*                    Next;                                             		// 0x01DC (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bClientCallActivate : 1;                          		// 0x01E0 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bClientCallDeActivate : 1;                        		// 0x01E0 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bTriggerOwnerEvent : 1;                           		// 0x01E0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bActivated : 1;                                   		// 0x01E0 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	TArray< struct FName >                             EffectStartTags;                                  		// 0x01E4 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FName >                             EffectEndTags;                                    		// 0x01F0 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                ActivateCount;                                    		// 0x01FC (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209608 ];

		return pClassPointer;
	};

	void OnStateChanged ( );
	void OnActivateCountUpdate ( );
	void UpdateActivateCount ( );
	void SetActive ( unsigned long bNowActive );
	void ClientDeActivate ( );
	void ClientActivate ( );
	void OnDeactivate ( class AMechaSkillComponentBase* SkillComponent );
	void OnActivate ( class AMechaSkillComponentBase* SkillComponent );
	bool CanDeActivate ( );
	bool CanActivate ( );
	void Deactivate ( );
	void Activate ( );
	void Initialize ( class AMechaSkillBase* InOwnerSkill );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* AMechaSkillComponentBase::pClassPointer = NULL;

// Class MechaGame.MechaSkillManager
// 0x000C (0x01E0 - 0x01D4)
class AMechaSkillManager : public AActor
{
public:
	class ATGMechaGamePlayerController*                OwnerPC;                                          		// 0x01D4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class AMechaSkillBase*                             SkillChain;                                       		// 0x01D8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ATGMechaEnergy*                              MechaEnergy;                                      		// 0x01DC (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209611 ];

		return pClassPointer;
	};

	float GetEnergy ( );
	void ConsumeEnergy ( float Consume );
	void NotifyOwnerPawnDied ( );
	void NotifySkillStopped ( class AMechaSkillBase* Item );
	void DeActivateSkills ( );
	bool HasSkill ( struct FName SkillName );
	class AMechaSkillBase* GetInitiativeSkillByName ( struct FName SkillName );
	class AMechaSkillBase* GetInitiativeSkill ( int Index );
	class AMechaSkillBase* GetSkill ( int Index );
	bool IsSkillInEffect ( struct FName SkillName );
	void NotifyEnergyEmpty ( );
	void ResetSkills ( );
	void SetSkillLevel ( struct FName SkillName, unsigned char Level );
	void StopSkillByName ( struct FName SkillName );
	void StopSkill ( int Index );
	void StartSkillByName ( struct FName SkillName );
	void StartSkill ( int Index );
	void SetStartSignal ( struct FName SkillName, unsigned long bHasStartSignal );
	void DiscardSkills ( );
	void eventDestroyed ( );
	bool CheckUniqueName ( class AMechaSkillBase* NewItem );
	bool AddSkill ( class AMechaSkillBase* NewItem );
	bool CreateSkill ( class UClass* SkillClass );
	void SetupSkills ( );
	void SetupEngery ( );
	void AcknowledgePawnPossession ( );
	bool Initialize ( class ATGMechaGamePlayerController* InOwnerPC );
};

UClass* AMechaSkillManager::pClassPointer = NULL;

// Class MechaGame.MechaSkill_AirBoost
// 0x0000 (0x027C - 0x027C)
class AMechaSkill_AirBoost : public AMechaSkillBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209710 ];

		return pClassPointer;
	};

	void CreateSkillComponents ( );
};

UClass* AMechaSkill_AirBoost::pClassPointer = NULL;

// Class MechaGame.MechaSkillComponent_AirBoost
// 0x0000 (0x0200 - 0x0200)
class AMechaSkillComponent_AirBoost : public AMechaSkillComponentBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209713 ];

		return pClassPointer;
	};

	void OnDeactivate ( class AMechaSkillComponentBase* SkillComponent );
	void OnActivate ( class AMechaSkillComponentBase* SkillComponent );
};

UClass* AMechaSkillComponent_AirBoost::pClassPointer = NULL;

// Class MechaGame.MechaSkill_Blaster
// 0x0014 (0x0290 - 0x027C)
class AMechaSkill_Blaster : public AMechaSkillBase
{
public:
	float                                              Damage;                                           		// 0x027C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DamageRadius;                                     		// 0x0280 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DamageFalloffExponent;                            		// 0x0284 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MomentumTransferScale;                            		// 0x0288 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DirectionalExplosionAngleDeg;                     		// 0x028C (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209715 ];

		return pClassPointer;
	};

	void CreateSkillComponents ( );
};

UClass* AMechaSkill_Blaster::pClassPointer = NULL;

// Class MechaGame.MechaSkillComponent_Blaster
// 0x001C (0x021C - 0x0200)
class AMechaSkillComponent_Blaster : public AMechaSkillComponentBase
{
public:
	float                                              Damage;                                           		// 0x0200 (0x0004) [0x0000000000000000]              
	float                                              DamageRadius;                                     		// 0x0204 (0x0004) [0x0000000000000000]              
	float                                              DamageFalloffExponent;                            		// 0x0208 (0x0004) [0x0000000000000000]              
	float                                              MomentumTransferScale;                            		// 0x020C (0x0004) [0x0000000000000000]              
	float                                              DirectionalExplosionAngleDeg;                     		// 0x0210 (0x0004) [0x0000000000000000]              
	class UMechaGameExplosion_Blaster*                 ExplosionTemplate;                                		// 0x0214 (0x0004) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	float                                              ExplosionHeight;                                  		// 0x0218 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209723 ];

		return pClassPointer;
	};

	void OnActivate ( class AMechaSkillComponentBase* SkillComponent );
};

UClass* AMechaSkillComponent_Blaster::pClassPointer = NULL;

// Class MechaGame.MechaSkill_ClearView
// 0x0000 (0x027C - 0x027C)
class AMechaSkill_ClearView : public AMechaSkillBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209730 ];

		return pClassPointer;
	};

	void CreateSkillComponents ( );
};

UClass* AMechaSkill_ClearView::pClassPointer = NULL;

// Class MechaGame.MechaSkillComponent_ClearView
// 0x0000 (0x0200 - 0x0200)
class AMechaSkillComponent_ClearView : public AMechaSkillComponentBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209733 ];

		return pClassPointer;
	};

	void OnDeactivate ( class AMechaSkillComponentBase* SkillComponent );
	void OnActivate ( class AMechaSkillComponentBase* SkillComponent );
};

UClass* AMechaSkillComponent_ClearView::pClassPointer = NULL;

// Class MechaGame.MechaSkill_GroundBoost
// 0x0000 (0x027C - 0x027C)
class AMechaSkill_GroundBoost : public AMechaSkillBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209735 ];

		return pClassPointer;
	};

	void CreateSkillComponents ( );
};

UClass* AMechaSkill_GroundBoost::pClassPointer = NULL;

// Class MechaGame.MechaSkillComponent_GroundBoost
// 0x0000 (0x0200 - 0x0200)
class AMechaSkillComponent_GroundBoost : public AMechaSkillComponentBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209738 ];

		return pClassPointer;
	};

	void OnDeactivate ( class AMechaSkillComponentBase* SkillComponent );
	void OnActivate ( class AMechaSkillComponentBase* SkillComponent );
};

UClass* AMechaSkillComponent_GroundBoost::pClassPointer = NULL;

// Class MechaGame.MechaSkill_HealArea
// 0x0010 (0x028C - 0x027C)
class AMechaSkill_HealArea : public AMechaSkillBase
{
public:
	float                                              HealPerSec;                                       		// 0x027C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              HealInterval;                                     		// 0x0280 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              HealRadius;                                       		// 0x0284 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MaxLifeTime;                                      		// 0x0288 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209740 ];

		return pClassPointer;
	};

	void CreateSkillComponents ( );
};

UClass* AMechaSkill_HealArea::pClassPointer = NULL;

// Class MechaGame.MechaSkillComponent_HealArea
// 0x001C (0x021C - 0x0200)
class AMechaSkillComponent_HealArea : public AMechaSkillComponentBase
{
public:
	float                                              HealPerSec;                                       		// 0x0200 (0x0004) [0x0000000000000000]              
	float                                              HealInterval;                                     		// 0x0204 (0x0004) [0x0000000000000000]              
	float                                              HealRadius;                                       		// 0x0208 (0x0004) [0x0000000000000000]              
	float                                              MaxLifeTime;                                      		// 0x020C (0x0004) [0x0000000000000000]              
	struct FString                                     HealAreaClassName;                                		// 0x0210 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209747 ];

		return pClassPointer;
	};

	void OnActivate ( class AMechaSkillComponentBase* SkillComponent );
};

UClass* AMechaSkillComponent_HealArea::pClassPointer = NULL;

// Class MechaGame.MechaSkill_SelfHeal
// 0x0008 (0x0284 - 0x027C)
class AMechaSkill_SelfHeal : public AMechaSkillBase
{
public:
	float                                              HealHealthRatePerSec;                             		// 0x027C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              HealInterval;                                     		// 0x0280 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209753 ];

		return pClassPointer;
	};

	void CreateSkillComponents ( );
};

UClass* AMechaSkill_SelfHeal::pClassPointer = NULL;

// Class MechaGame.MechaSkillComponent_SelfHeal
// 0x0008 (0x0208 - 0x0200)
class AMechaSkillComponent_SelfHeal : public AMechaSkillComponentBase
{
public:
	float                                              HealPerSec;                                       		// 0x0200 (0x0004) [0x0000000000000000]              
	float                                              HealInterval;                                     		// 0x0204 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209758 ];

		return pClassPointer;
	};

	void Timer ( );
	void OnDeactivate ( class AMechaSkillComponentBase* SkillComponent );
	void OnActivate ( class AMechaSkillComponentBase* SkillComponent );
};

UClass* AMechaSkillComponent_SelfHeal::pClassPointer = NULL;

// Class MechaGame.MechaSkill_Shield
// 0x0008 (0x0284 - 0x027C)
class AMechaSkill_Shield : public AMechaSkillBase
{
public:
	float                                              MaxShieldHealthRate;                              		// 0x027C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DamageAbsorptionRate;                             		// 0x0280 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209762 ];

		return pClassPointer;
	};

	void CreateSkillComponents ( );
};

UClass* AMechaSkill_Shield::pClassPointer = NULL;

// Class MechaGame.MechaSkillComponent_Shield
// 0x0038 (0x0238 - 0x0200)
class AMechaSkillComponent_Shield : public AMechaSkillComponentBase
{
public:
	int                                                MaxShieldStrength;                                		// 0x0200 (0x0004) [0x0000000000000000]              
	int                                                ShieldStrength;                                   		// 0x0204 (0x0004) [0x0000000000000000]              
	float                                              DamageAbsorptionRate;                             		// 0x0208 (0x0004) [0x0000000000000000]              
	int                                                ShieldDestroyedCount;                             		// 0x020C (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bTriggerDamageEffect : 1;                         		// 0x0210 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	float                                              ShieldColorChangeThreshold;                       		// 0x0214 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       ShiledColorName;                                  		// 0x0218 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     DefaultShieldColor;                               		// 0x0220 (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     DamagedShieldColor;                               		// 0x022C (0x000C) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209767 ];

		return pClassPointer;
	};

	void OnTriggerDamageEffect ( );
	void OnShieldDestroyedCountUpdate ( );
	void AbsorbDamage ( int* Damage );
	void OnDeactivate ( class AMechaSkillComponentBase* SkillComponent );
	void OnActivate ( class AMechaSkillComponentBase* SkillComponent );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* AMechaSkillComponent_Shield::pClassPointer = NULL;

// Class MechaGame.MechaSkill_Trample
// 0x0010 (0x028C - 0x027C)
class AMechaSkill_Trample : public AMechaSkillBase
{
public:
	float                                              Damage;                                           		// 0x027C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DamageRadius;                                     		// 0x0280 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DamageFalloffExponent;                            		// 0x0284 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MomentumTransferScale;                            		// 0x0288 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209772 ];

		return pClassPointer;
	};

	void CreateSkillComponents ( );
};

UClass* AMechaSkill_Trample::pClassPointer = NULL;

// Class MechaGame.MechaSkillComponent_Trample
// 0x0018 (0x0218 - 0x0200)
class AMechaSkillComponent_Trample : public AMechaSkillComponentBase
{
public:
	float                                              Damage;                                           		// 0x0200 (0x0004) [0x0000000000000000]              
	float                                              DamageRadius;                                     		// 0x0204 (0x0004) [0x0000000000000000]              
	float                                              DamageFalloffExponent;                            		// 0x0208 (0x0004) [0x0000000000000000]              
	float                                              MomentumTransferScale;                            		// 0x020C (0x0004) [0x0000000000000000]              
	class UMechaGameExplosion_Trample*                 ExplosionTemplate;                                		// 0x0210 (0x0004) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	float                                              ExplosionHeight;                                  		// 0x0214 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209779 ];

		return pClassPointer;
	};

	void OnActivate ( class AMechaSkillComponentBase* SkillComponent );
};

UClass* AMechaSkillComponent_Trample::pClassPointer = NULL;

// Class MechaGame.MechaSkill_Trap
// 0x000C (0x0288 - 0x027C)
class AMechaSkill_Trap : public AMechaSkillBase
{
public:
	float                                              DamagePerSec;                                     		// 0x027C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DamageInterval;                                   		// 0x0280 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DamageRadius;                                     		// 0x0284 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209785 ];

		return pClassPointer;
	};

	void CreateSkillComponents ( );
};

UClass* AMechaSkill_Trap::pClassPointer = NULL;

// Class MechaGame.MechaSkillComponent_Trap
// 0x001C (0x021C - 0x0200)
class AMechaSkillComponent_Trap : public AMechaSkillComponentBase
{
public:
	float                                              DamagePerSec;                                     		// 0x0200 (0x0004) [0x0000000000000000]              
	float                                              DamageInterval;                                   		// 0x0204 (0x0004) [0x0000000000000000]              
	float                                              DamageRadius;                                     		// 0x0208 (0x0004) [0x0000000000000000]              
	float                                              MaxLifeTime;                                      		// 0x020C (0x0004) [0x0000000000000000]              
	struct FString                                     TrapClassName;                                    		// 0x0210 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209791 ];

		return pClassPointer;
	};

	void OnActivate ( class AMechaSkillComponentBase* SkillComponent );
};

UClass* AMechaSkillComponent_Trap::pClassPointer = NULL;

// Class MechaGame.MechaSkill_XP
// 0x0004 (0x0280 - 0x027C)
class AMechaSkill_XP : public AMechaSkillBase
{
public:
	float                                              WeaponDamageScaleDelta;                           		// 0x027C (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209797 ];

		return pClassPointer;
	};

	void CreateSkillComponents ( );
};

UClass* AMechaSkill_XP::pClassPointer = NULL;

// Class MechaGame.MechaSkillComponent_ReinforceWeapon
// 0x0004 (0x0204 - 0x0200)
class AMechaSkillComponent_ReinforceWeapon : public AMechaSkillComponentBase
{
public:
	float                                              WeaponDamageScaleDelta;                           		// 0x0200 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209801 ];

		return pClassPointer;
	};

	void OnActivate ( class AMechaSkillComponentBase* SkillComponent );
};

UClass* AMechaSkillComponent_ReinforceWeapon::pClassPointer = NULL;

// Class MechaGame.MechaSkillComponent_EnemyHit
// 0x0010 (0x0210 - 0x0200)
class AMechaSkillComponent_EnemyHit : public AMechaSkillComponentBase
{
public:
	int                                                EnemyDamage_Level1;                               		// 0x0200 (0x0004) [0x0000000000000000]              
	int                                                EnemyDamage_Level2;                               		// 0x0204 (0x0004) [0x0000000000000000]              
	int                                                EnemyDamage_Level3;                               		// 0x0208 (0x0004) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x020C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209856 ];

		return pClassPointer;
	};

	void OnActivate ( class AMechaSkillComponentBase* SkillComponent );
};

UClass* AMechaSkillComponent_EnemyHit::pClassPointer = NULL;

// Class MechaGame.TGMechaDmgType_Skill_EnemyHit
// 0x0000 (0x0620 - 0x0620)
class UTGMechaDmgType_Skill_EnemyHit : public UTGMechaDamageType_Skill
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209866 ];

		return pClassPointer;
	};

};

UClass* UTGMechaDmgType_Skill_EnemyHit::pClassPointer = NULL;

// Class MechaGame.MechaSkillComponent_Heal
// 0x0018 (0x0218 - 0x0200)
class AMechaSkillComponent_Heal : public AMechaSkillComponentBase
{
public:
	int                                                SelfHeal_Level1;                                  		// 0x0200 (0x0004) [0x0000000000000000]              
	int                                                SelfHeal_Level2;                                  		// 0x0204 (0x0004) [0x0000000000000000]              
	int                                                SelfHeal_Level3;                                  		// 0x0208 (0x0004) [0x0000000000000000]              
	int                                                TeammateHeal_Level1;                              		// 0x020C (0x0004) [0x0000000000000000]              
	int                                                TeammateHeal_Level2;                              		// 0x0210 (0x0004) [0x0000000000000000]              
	int                                                TeammateHeal_Level3;                              		// 0x0214 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209872 ];

		return pClassPointer;
	};

	void OnActivate ( class AMechaSkillComponentBase* SkillComponent );
};

UClass* AMechaSkillComponent_Heal::pClassPointer = NULL;

// Class MechaGame.TGMechaHealArea
// 0x0020 (0x01F4 - 0x01D4)
class ATGMechaHealArea : public AActor
{
public:
	float                                              HealInterval;                                     		// 0x01D4 (0x0004) [0x0000000000000000]              
	float                                              HealPerSec;                                       		// 0x01D8 (0x0004) [0x0000000000000000]              
	float                                              HealRadius;                                       		// 0x01DC (0x0004) [0x0000000000000000]              
	class AController*                                 HealInstigator;                                   		// 0x01E0 (0x0004) [0x0000000000000000]              
	class UDrawSphereComponent*                        DebugAreaComponent;                               		// 0x01E4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bDrawDebug : 1;                                   		// 0x01E8 (0x0004) [0x0000000000000000] [0x00000001] 
	class UParticleSystem*                             EffectTemplate;                                   		// 0x01EC (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    EffectRef;                                        		// 0x01F0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209889 ];

		return pClassPointer;
	};

	void CauseHealTo ( class ATGRealMecha* Mecha );
	void eventTimer ( );
	void Deactivate ( );
	void Activate ( );
	void SetEffectsVisible ( unsigned long bVisible );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
};

UClass* ATGMechaHealArea::pClassPointer = NULL;

// Class MechaGame.TGMechaTrapArea
// 0x0024 (0x01F8 - 0x01D4)
class ATGMechaTrapArea : public AActor
{
public:
	float                                              DamageInterval;                                   		// 0x01D4 (0x0004) [0x0000000000000000]              
	float                                              DamagePerSec;                                     		// 0x01D8 (0x0004) [0x0000000000000000]              
	float                                              DamageRadius;                                     		// 0x01DC (0x0004) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x01E0 (0x0004) [0x0000000000000000]              
	class AController*                                 DamageInstigator;                                 		// 0x01E4 (0x0004) [0x0000000000000000]              
	class UDrawSphereComponent*                        DebugAreaComponent;                               		// 0x01E8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bDrawDebug : 1;                                   		// 0x01EC (0x0004) [0x0000000000000000] [0x00000001] 
	class UParticleSystem*                             EffectTemplate;                                   		// 0x01F0 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    EffectRef;                                        		// 0x01F4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209936 ];

		return pClassPointer;
	};

	void CauseDamageTo ( class ATGRealMecha* Mecha );
	void eventTimer ( );
	void Deactivate ( );
	void Activate ( );
	void SetEffectsVisible ( unsigned long bVisible );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
};

UClass* ATGMechaTrapArea::pClassPointer = NULL;

// Class MechaGame.TGMechaEnergy
// 0x001C (0x01F0 - 0x01D4)
class ATGMechaEnergy : public AActor
{
public:
	float                                              Energy;                                           		// 0x01D4 (0x0004) [0x0000000000000000]              
	float                                              EnergyMax;                                        		// 0x01D8 (0x0004) [0x0000000000000000]              
	float                                              RecoverPerSec;                                    		// 0x01DC (0x0004) [0x0000000000000000]              
	float                                              RecoverInterval;                                  		// 0x01E0 (0x0004) [0x0000000000000000]              
	float                                              RecoverFrozenTime;                                		// 0x01E4 (0x0004) [0x0000000000000000]              
	class AMechaSkillManager*                          OwnerSkillMgr;                                    		// 0x01E8 (0x0004) [0x0000000000000000]              
	class ATGRealMecha*                                OwnerMecha;                                       		// 0x01EC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 209945 ];

		return pClassPointer;
	};

	float GetEnergy ( );
	bool HasEnergy ( );
	void NotifyEnergyEmpty ( );
	void NotifyEnergyFull ( );
	void TimerEnergyRecover ( );
	void EnergyRecover ( float Rate );
	void EnergyConsume ( float Rate );
	void Initialize ( class ATGRealMecha* Mecha, class AMechaSkillManager* SkillMgr );
};

UClass* ATGMechaEnergy::pClassPointer = NULL;

// Class MechaGame.MechaSpecialMove__Death
// 0x000C (0x0068 - 0x005C)
class UMechaSpecialMove__Death : public UMechaSpecialMove
{
public:
	struct FMechaBodyStance                            BS_Animation;                                     		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 210085 ];

		return pClassPointer;
	};

	void SpecialMoveEnded ( unsigned char PrevMove, unsigned char NextMove );
	void SpecialMoveStarted ( unsigned long bForced, unsigned char PrevMove );
	bool CanOverrideSpecialMove ( unsigned char InMove );
};

UClass* UMechaSpecialMove__Death::pClassPointer = NULL;

// Class MechaGame.SkeletalMeshComponentOccluded
// 0x0000 (0x05EC - 0x05EC)
class USkeletalMeshComponentOccluded : public USkeletalMeshComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 210122 ];

		return pClassPointer;
	};

};

UClass* USkeletalMeshComponentOccluded::pClassPointer = NULL;

// Class MechaGame.TGMechaPlayerInput
// 0x0000 (0x0384 - 0x0384)
class UTGMechaPlayerInput : public UTGPlayerInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 210204 ];

		return pClassPointer;
	};

	void PressVKey ( );
	void UnUse ( );
	void Use ( );
	void ReleaseFKey ( );
	void PressFKey ( );
	void UnSnake ( );
	void Snake ( );
	void UnJump ( );
	void Jump ( );
	void SwitchToLastUsedWeapon ( );
	void SwitchWeapon ( unsigned char F );
};

UClass* UTGMechaPlayerInput::pClassPointer = NULL;

// Class MechaGame.TGMechaWeapon
// 0x0080 (0x06AC - 0x062C)
class ATGMechaWeapon : public ATGMechaWeaponBase
{
public:
	unsigned long                                      bIsMainWeapon : 1;                                		// 0x062C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMaxOverheatingCooldownComplete : 1;              		// 0x062C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOverheatCooldownOver : 1;                        		// 0x062C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDisableOverheatingWarning : 1;                   		// 0x062C (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      bWeaponReloadOver : 1;                            		// 0x062C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bDrawOverrideCrosshair : 1;                       		// 0x062C (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              LastFireStopTime;                                 		// 0x0630 (0x0004) [0x0000000000000000]              
	float                                              CurrOverheatingValue;                             		// 0x0634 (0x0004) [0x0000000000000000]              
	struct FRepOverheatInfo                            CurrRepOverheatInfo;                              		// 0x0638 (0x0008) [0x0000000000000000]              
	float                                              LastNotfiyOverheatTime;                           		// 0x0640 (0x0004) [0x0000000000000000]              
	float                                              LastNotifyAboutToOverheatTime;                    		// 0x0644 (0x0004) [0x0000000000000000]              
	float                                              NotfiyOverheatInterval;                           		// 0x0648 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              AboutToOverheatRatio;                             		// 0x064C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      MechaWeapType;                                    		// 0x0650 (0x0001) [0x0000000000000000]              
	unsigned char                                      bHit;                                             		// 0x0651 (0x0001) [0x0000000000000000]              
	float                                              MaxOverheatingValue;                              		// 0x0654 (0x0004) [0x0000000000000000]              
	float                                              SingleShotOverheatingValue;                       		// 0x0658 (0x0004) [0x0000000000000000]              
	float                                              MaxOverheatingCooldownRate;                       		// 0x065C (0x0004) [0x0000000000000000]              
	float                                              NormalOverheatingCooldownRate;                    		// 0x0660 (0x0004) [0x0000000000000000]              
	float                                              CooldownPreparationTime;                          		// 0x0664 (0x0004) [0x0000000000000000]              
	int                                                MaxClipAmmoCount;                                 		// 0x0668 (0x0004) [0x0000000000000000]              
	float                                              ReloadTime;                                       		// 0x066C (0x0004) [0x0000000000000000]              
	int                                                CurrAmmoCount;                                    		// 0x0670 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                SmoothGamePingLimit;                              		// 0x0674 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                SAndCStartFireLocationFudge;                      		// 0x0678 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                SAndCPawnLocationFudge;                           		// 0x067C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                MaxPingSAndCPawnLocationFudge;                    		// 0x0680 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  WeaponName;                                       		// 0x0684 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         WeaponNameCoords;                                 		// 0x0688 (0x0010) [0x0000000000000002]              ( CPF_Const )
	class USoundCue*                                   WeaponFireSnd1st;                                 		// 0x0698 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   WeaponFireSnd3rd;                                 		// 0x069C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   FireLoopCue;                                      		// 0x06A0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UAudioComponent*                             FireLoopAC;                                       		// 0x06A4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   FireLoopCue_Player;                               		// 0x06A8 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 210257 ];

		return pClassPointer;
	};

	void PlayLocalImpactAnim ( struct FVector HitLocation, class AActor* HitActor );
	void PlayFiringSound ( );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	void FlameThrowerServerTakeDamage ( class AActor* DamageActor, int HitDamage, int HitEnergyDamage, struct FVector HitLocation, struct FVector Momentum, class UClass* MyDamageType );
	void ClientSyncOverheatInfo ( unsigned long bServerMaxOverheatingCooldownComplete );
	void ServerResetOverheatInfo ( );
	void StartFire ( unsigned char FireModeNum );
	void eventTick ( float DeltaTime );
	void ServerHandleFinishedFiring ( );
	void HandleFinishedFiring ( );
	void OnOverheatCooldownTimer ( );
	void ServerStartFire ( unsigned char FireModeNum );
	void ServerReloadWeapon ( );
	void ReloadWeapon ( );
	void OnWeaponReloadTimer ( );
	void ClientWeaponReloadOver ( );
	void ServerReFireAmmunition ( );
	class UAudioComponent* WeaponPlaySoundLocalEx ( class USoundCue* Sound, class USoundCue* AltLocalSound, class UAudioComponent* AC, float FadeInTime );
	unsigned char GetCurrAimDisperseType ( );
	struct FVector GetPhysicalFireStartLoc ( struct FVector AimDir );
	void WeaponEmpty ( );
	void DetachWeapon ( );
	void AttachWeaponTo ( class USkeletalMeshComponent* MeshCpnt, struct FName SocketName );
	void ConsumeAmmo ( unsigned char FireModeNum );
	int AddAmmo ( int Amount );
	bool HasAnyAmmo ( );
	bool HasAmmo ( unsigned char FireModeNum, int Amount );
	float MaxRange ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGMechaWeapon::pClassPointer = NULL;

// Class MechaGame.TGMechaInventoryManager
// 0x0000 (0x0220 - 0x0220)
class ATGMechaInventoryManager : public AUTInventoryManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 210261 ];

		return pClassPointer;
	};

	void SetCurrentWeapon ( class AWeapon* DesiredWeapon );
};

UClass* ATGMechaInventoryManager::pClassPointer = NULL;

// Class MechaGame.TGMechaWeaponAttachment
// 0x00DB (0x03A0 - 0x02C5)
class ATGMechaWeaponAttachment : public AUTWeaponAttachment
{
public:
	class ATGRealMechaBase*                            OwnerMecha;                                       		// 0x02C8 (0x0004) [0x0000000000000000]              
	class USkeletalMeshComponent*                      MeshLeft;                                         		// 0x02CC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned char                                      WeaponPosition1;                                  		// 0x02D0 (0x0001) [0x0000000000000000]              
	unsigned char                                      WeaponPosition2;                                  		// 0x02D1 (0x0001) [0x0000000000000000]              
	struct FName                                       AttachmentSocketLeft;                             		// 0x02D4 (0x0008) [0x0000000000000000]              
	unsigned long                                      bFireFromDoubleSideTogether : 1;                  		// 0x02DC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFireFromSocketLeft : 1;                          		// 0x02DC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFireFromSingleSocket : 1;                        		// 0x02DC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bPlayFireOverAnim : 1;                            		// 0x02DC (0x0004) [0x0000000000000000] [0x00000008] 
	struct FName                                       MuzzleFlashSocketLeft;                            		// 0x02E0 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    MuzzleFlashPSCLeft;                               		// 0x02E8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UUDKExplosionLight*                          MuzzleFlashLightLeft;                             		// 0x02EC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              MuzzleFlashPSCScale;                              		// 0x02F0 (0x0004) [0x0000000000000000]              
	float                                              ImpactPSCScale;                                   		// 0x02F4 (0x0004) [0x0000000000000000]              
	float                                              ShowTracerDistance;                               		// 0x02F8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             TracerSmokeTrailEffect;                           		// 0x02FC (0x0004) [0x0000000000000000]              
	float                                              SpawnTracerSmokeTrailRate;                        		// 0x0300 (0x0004) [0x0000000000000000]              
	class UClass*                                      TracerClass;                                      		// 0x0304 (0x0004) [0x0000000000000000]              
	float                                              FireAnimRate;                                     		// 0x0308 (0x0004) [0x0000000000000000]              
	float                                              FireAnimBlendInTime;                              		// 0x030C (0x0004) [0x0000000000000000]              
	float                                              FireAnimBlendOutTime;                             		// 0x0310 (0x0004) [0x0000000000000000]              
	float                                              ReloadAnimRate;                                   		// 0x0314 (0x0004) [0x0000000000000000]              
	float                                              ReloadAnimBlendInTime;                            		// 0x0318 (0x0004) [0x0000000000000000]              
	float                                              ReloadAnimBlendOutTime;                           		// 0x031C (0x0004) [0x0000000000000000]              
	class UCameraShake*                                FireCameraShake;                                  		// 0x0320 (0x0004) [0x0000000000000000]              
	float                                              FireCameraShakeScale;                             		// 0x0324 (0x0004) [0x0000000000000000]              
	float                                              ShakeOscillationDuration;                         		// 0x0328 (0x0004) [0x0000000000000000]              
	float                                              ShakePitchAmplitude;                              		// 0x032C (0x0004) [0x0000000000000000]              
	float                                              ShakePitchAmplitudeFrequency;                     		// 0x0330 (0x0004) [0x0000000000000000]              
	float                                              ShakeYawAmplitude;                                		// 0x0334 (0x0004) [0x0000000000000000]              
	float                                              ShakeYawAmplitudeFrequency;                       		// 0x0338 (0x0004) [0x0000000000000000]              
	float                                              ShakeAmplitudeX;                                  		// 0x033C (0x0004) [0x0000000000000000]              
	float                                              ShakeAmplitudeXFrequency;                         		// 0x0340 (0x0004) [0x0000000000000000]              
	float                                              ShakeAmplitudeY;                                  		// 0x0344 (0x0004) [0x0000000000000000]              
	float                                              ShakeAmplitudeYFrequency;                         		// 0x0348 (0x0004) [0x0000000000000000]              
	float                                              ShakeAmplitudeZ;                                  		// 0x034C (0x0004) [0x0000000000000000]              
	float                                              ShakeAmplitudeZFrequency;                         		// 0x0350 (0x0004) [0x0000000000000000]              
	class UCameraShake*                                HitCameraShake;                                   		// 0x0354 (0x0004) [0x0000000000000000]              
	class UAnimSet*                                    WeaponAnimSet;                                    		// 0x0358 (0x0004) [0x0000000000000000]              
	struct FName                                       LeftFireAnim;                                     		// 0x035C (0x0008) [0x0000000000000000]              
	struct FName                                       RightFireAnim;                                    		// 0x0364 (0x0008) [0x0000000000000000]              
	struct FName                                       ReloadAnimName;                                   		// 0x036C (0x0008) [0x0000000000000000]              
	struct FName                                       MeleeFireAnimFirst;                               		// 0x0374 (0x0008) [0x0000000000000000]              
	struct FName                                       MeleeFireAnimSecond;                              		// 0x037C (0x0008) [0x0000000000000000]              
	struct FName                                       MeleeFireAnimHeavy;                               		// 0x0384 (0x0008) [0x0000000000000000]              
	struct FName                                       MeleeFireAnimRecover;                             		// 0x038C (0x0008) [0x0000000000000000]              
	struct FName                                       FireOverAnimName;                                 		// 0x0394 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   ReloadSound;                                      		// 0x039C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 210330 ];

		return pClassPointer;
	};

	void PlayMeleeHitCameraShake ( );
	void PlayFireCameraEffects ( );
	struct FVector GetPhysicalFireStartLoc ( int Index );
	void SetFireSocket ( );
	void ThirdPersonProjFireEffects ( struct FReplicatedEffectsInfo InProjWeapEffectsInfo );
	void ThirdPersonFireEffects ( struct FVector HitLocation );
	void PlayFireOverAnim ( );
	void PlayMechaProjWeaponFireAnim ( struct FReplicatedEffectsInfo InProjWeapEffectsInfo );
	void PlayMechaWeaponReloadSound ( );
	void PlayMechaWeaponReloadAnim ( );
	void PlayMechaWeaponFireAnim ( );
	void PlayImpactEffects ( struct FVector HitLocation );
	void SpawnTracerEffect ( struct FVector HitLocation );
	void GetCurrEffectSocketAndMesh ( struct FName* CurrSocketName, class USkeletalMeshComponent** CurrMesh );
	void MuzzleFlashTimer ( );
	void StopMuzzleFlash ( );
	void PlayReplicatedEffects ( struct FName VarName );
	void ProjWeapCauseReplicatedMuzzleFlash ( struct FReplicatedEffectsInfo RepEffectsInfo );
	void CauseMuzzleFlash ( );
	void DetachMuzzleFlash ( );
	void AttachMuzzleFlash ( );
	void DetachFrom ( class USkeletalMeshComponent* MeshCpnt );
	void AttachToMecha ( class ATGRealMechaBase* AttachOwnerMecha );
	void eventPostBeginPlay ( );
};

UClass* ATGMechaWeaponAttachment::pClassPointer = NULL;

// Class MechaGame.TGMechaVolume
// 0x0001 (0x0205 - 0x0204)
class ATGMechaVolume : public ATriggerVolume
{
public:
	unsigned char                                      Type;                                             		// 0x0204 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 210507 ];

		return pClassPointer;
	};

	int GetAttackerCount ( );
	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ATGMechaVolume::pClassPointer = NULL;

// Class MechaGame.TGMechaDoorSwitchVolume
// 0x0009 (0x020D - 0x0204)
class ATGMechaDoorSwitchVolume : public ATriggerVolume
{
public:
	float                                              OverlayZOffset;                                   		// 0x0204 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnabled : 1;                                     		// 0x0208 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      DoorState;                                        		// 0x020C (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 210538 ];

		return pClassPointer;
	};

	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	void SetEnabled ( unsigned long bInEnabled );
	void eventReset ( );
	void CheckSwitchState ( class ATGRealMecha* UnTouchPawn );
	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ATGMechaDoorSwitchVolume::pClassPointer = NULL;

// Class MechaGame.TGMechaEffectComponent
// 0x0028 (0x0214 - 0x01EC)
class UTGMechaEffectComponent : public UPrimitiveComponent
{
public:
	unsigned long                                      bInSelfBurningState : 1;                          		// 0x01EC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShouldNotSpawnANewFireEffect : 1;                		// 0x01EC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bInBurningState : 1;                              		// 0x01EC (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              CurrentBurnTime;                                  		// 0x01F0 (0x0004) [0x0000000000000000]              
	float                                              TotalBurnTime;                                    		// 0x01F4 (0x0004) [0x0000000000000000]              
	float                                              FireLastTimeOut;                                  		// 0x01F8 (0x0004) [0x0000000000000000]              
	float                                              FireLastTimeRecording;                            		// 0x01FC (0x0004) [0x0000000000000000]              
	float                                              FireTakeDamageFrequency;                          		// 0x0200 (0x0004) [0x0000000000000000]              
	float                                              ContinuousFireDamage;                             		// 0x0204 (0x0004) [0x0000000000000000]              
	float                                              SpawnBurnEffectDuration;                          		// 0x0208 (0x0004) [0x0000000000000000]              
	float                                              ReSpawnEffectTimeOut;                             		// 0x020C (0x0004) [0x0000000000000000]              
	class AController*                                 AttackByController;                               		// 0x0210 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 210577 ];

		return pClassPointer;
	};

	void EndBuring ( );
	void UpdateFireDamageTimer ( class UClass* DamageType, float FireLastTimeOutTemp, float ContinuousFireDamageTemp, float FireTakeDamageFrequencyTemp, class AController* InstigatedBy );
	void FireTimer ( );
	void TakeFiringDamage ( );
	void EveryTickUpdate ( float DeltaSeconds );
	void PlayFireHitEffect ( class UClass* DamageType, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
	void PlayFireEffect ( class UClass* DamageType, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
	void ProcessFireEffect ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FName BoneName, class AActor* DamageCauser );
	void ProcessTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void Initialize ( TArray< class USkeletalMeshComponent* > MeshList );
	bool IsFlameThrowerDamageType ( class UClass* DamageType );
};

UClass* UTGMechaEffectComponent::pClassPointer = NULL;

// Class MechaGame.TGMechaDmgType_Skill_Trap
// 0x0000 (0x0620 - 0x0620)
class UTGMechaDmgType_Skill_Trap : public UTGMechaDamageType_Skill
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 210719 ];

		return pClassPointer;
	};

};

UClass* UTGMechaDmgType_Skill_Trap::pClassPointer = NULL;

// Class MechaGame.TGMechaDmgType_Thunder
// 0x0008 (0x0628 - 0x0620)
class UTGMechaDmgType_Thunder : public UTGMechaDamageType
{
public:
	float                                              FrozenDuration;                                   		// 0x0620 (0x0004) [0x0000000000000000]              
	float                                              FrozenVelocityScale;                              		// 0x0624 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 210723 ];

		return pClassPointer;
	};

};

UClass* UTGMechaDmgType_Thunder::pClassPointer = NULL;

// Class MechaGame.TGMechaDMPlayerReplicationInfo
// 0x0028 (0x1048 - 0x1020)
class ATGMechaDMPlayerReplicationInfo : public ATGMechaPlayerReplicationInfo
{
public:
	float                                              DefenderIncScoreInterval;                         		// 0x1020 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DefenderIncScorePerSec;                           		// 0x1024 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              RoundWinScore;                                    		// 0x1028 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ItemSmiteScore;                                   		// 0x102C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              HealBaseToScoreCoef;                              		// 0x1030 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              HealBaseToXPCoef;                                 		// 0x1034 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DefenderIncXPInterval;                            		// 0x1038 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DefenderIncXPPerSec;                              		// 0x103C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DoorSwitchIncXPInterval;                          		// 0x1040 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DoorSwitchIncXPPerSec;                            		// 0x1044 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 210882 ];

		return pClassPointer;
	};

	void IncrementDeaths ( int Amt, class UClass* DamageType );
	void RoundClear ( );
	void TimerAddXPForDoorSwitch ( );
	void SetContinuousXPSupplyEnabled ( unsigned long bInVolume );
	void NotifyHealBase ( int Heal );
	void NotifyItemSmite ( );
	void NotifyRoundWin ( );
	void TimerAddXP ( );
	void TimerAddGameScore ( );
	void SetPlayerTeam ( class ATeamInfo* NewTeam );
	void NotifyChangeSides ( );
	void SetupOffendDefend ( );
	bool IsDefender ( );
	bool IsAttacker ( );
};

UClass* ATGMechaDMPlayerReplicationInfo::pClassPointer = NULL;

// Class MechaGame.TGMechaWeapAttachment_Thunder
// 0x00C8 (0x0468 - 0x03A0)
class ATGMechaWeapAttachment_Thunder : public ATGMechaWeaponAttachment
{
public:
	unsigned long                                      bThunderCritShot : 1;                             		// 0x03A0 (0x0004) [0x0000000000000000] [0x00000001] 
	class UParticleSystem*                             PSC_CritFirePSCTemplate;                          		// 0x03A4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             PSC_FireTracerPSCTemplate;                        		// 0x03A8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             PSC_FireTracerCritPSCTemplate;                    		// 0x03AC (0x0004) [0x0000000000000000]              
	class UUTParticleSystemComponent*                  PSC_FireTracer;                                   		// 0x03B0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UUTParticleSystemComponent*                  PSC_FireTracerLeft;                               		// 0x03B4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UUTParticleSystemComponent*                  PSC_CritFire;                                     		// 0x03B8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UUTParticleSystemComponent*                  PSC_CritFireLeft;                                 		// 0x03BC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FMaterialImpactEffect                       NormalImpactEffect;                               		// 0x03C0 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMaterialImpactEffect                       CritImpactEffect;                                 		// 0x03F8 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMaterialImpactEffect                       NullImpactEffect;                                 		// 0x0430 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 210898 ];

		return pClassPointer;
	};

	void PlayImpactEffects ( struct FVector HitLocation );
	struct FMaterialImpactEffect GetThunderImpactEffect ( class AActor* HitActor );
	void GetCurrEffectSocketAndMesh ( struct FName* CurrSocketName, class USkeletalMeshComponent** CurrMesh );
	void SpawnTracerEffect ( struct FVector HitLocation );
	void DeactiveCritFireEffect ( );
	void ActiveCritFireEffect ( );
	void SetThunderAttachmentCritEffect ( unsigned long bCritShot );
	void DetachFrom ( class USkeletalMeshComponent* MeshCpnt );
	void AttachToMecha ( class ATGRealMechaBase* AttachOwnerMecha );
};

UClass* ATGMechaWeapAttachment_Thunder::pClassPointer = NULL;

// Class MechaGame.TGMecha_Havok
// 0x0000 (0x0950 - 0x0950)
class ATGMecha_Havok : public ATGRealMecha
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 210924 ];

		return pClassPointer;
	};

	void OnKeyDown_Space ( class UTGMechaPlayerInput* Input );
	void OnKeyDown_F ( class UTGMechaPlayerInput* Input );
};

UClass* ATGMecha_Havok::pClassPointer = NULL;

// Class MechaGame.TGMecha_HulkBuster
// 0x003C (0x098C - 0x0950)
class ATGMecha_HulkBuster : public ATGRealMecha
{
public:
	TArray< struct FShieldItem >                       ShieldItemList;                                   		// 0x0950 (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	TArray< class USkeletalMeshComponent* >            ShieldMeshComponentList;                          		// 0x095C (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	unsigned long                                      bShieldItemAttached : 1;                          		// 0x0968 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       ShieldCloseAnimName;                              		// 0x096C (0x0008) [0x0000000000000000]              
	struct FName                                       ShieldOpenAnimName;                               		// 0x0974 (0x0008) [0x0000000000000000]              
	struct FName                                       ShieldCloseToOpenAnimName;                        		// 0x097C (0x0008) [0x0000000000000000]              
	struct FName                                       ShieldOpenToCloseAnimName;                        		// 0x0984 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 210934 ];

		return pClassPointer;
	};

	void OnKeyDown_Space ( class UTGMechaPlayerInput* Input );
	void OnKeyDown_F ( class UTGMechaPlayerInput* Input );
	void NotifySkillStateChanged ( class UClass* SkillCompClass, unsigned long bActive );
	void PlayShieldAnimation ( unsigned long bShieldActive );
	void AttachShieldItem ( );
	void eventPostBeginPlay ( );
};

UClass* ATGMecha_HulkBuster::pClassPointer = NULL;

// Class MechaGame.TGMecha_Punisher
// 0x0000 (0x0950 - 0x0950)
class ATGMecha_Punisher : public ATGRealMecha
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 210975 ];

		return pClassPointer;
	};

	void OnKeyDown_Space ( class UTGMechaPlayerInput* Input );
	void OnKeyDown_F ( class UTGMechaPlayerInput* Input );
	void PlayeDyingEffect ( );
};

UClass* ATGMecha_Punisher::pClassPointer = NULL;

// Class MechaGame.TGMechaWeap_HPFDetector
// 0x00D4 (0x0780 - 0x06AC)
class ATGMechaWeap_HPFDetector : public ATGMechaWeapon
{
public:
	unsigned long                                      bHPFDetectorEnable : 1;                           		// 0x06AC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHPFReady : 1;                                    		// 0x06AC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLockingAvtive : 1;                               		// 0x06AC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bFire : 1;                                        		// 0x06AC (0x0004) [0x0000000000000000] [0x00000008] 
	class UTexture2D*                                  HudMaterial;                                      		// 0x06B0 (0x0004) [0x0000000000000000]              
	float                                              CrosshairSize;                                    		// 0x06B4 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLength;                              		// 0x06B8 (0x0004) [0x0000000000000000]              
	struct FColor                                      MiddlePointColor;                                 		// 0x06BC (0x0004) [0x0000000000000000]              
	int                                                HPFDetectorFOV;                                   		// 0x06C0 (0x0004) [0x0000000000000000]              
	float                                              LockingDuration;                                  		// 0x06C4 (0x0004) [0x0000000000000000]              
	class ATGRealMecha*                                LockingMecha;                                     		// 0x06C8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              StartLockingTime;                                 		// 0x06CC (0x0004) [0x0000000000000000]              
	float                                              LastFireTime;                                     		// 0x06D0 (0x0004) [0x0000000000000000]              
	float                                              SpecialFireInterval;                              		// 0x06D4 (0x0004) [0x0000000000000000]              
	struct FString                                     HPFPreparationStr;                                		// 0x06D8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HPFLockingStr;                                    		// 0x06E4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UTexture2D*                                  LockProgressBG;                                   		// 0x06F0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  LockProgressBar;                                  		// 0x06F4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         LockProgressBGCoords;                             		// 0x06F8 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         LockProgressBarCoords;                            		// 0x0708 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   ProgressBarOffset;                                		// 0x0718 (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              ZoomInStartTime;                                  		// 0x0720 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  ZoomInCenter;                                     		// 0x0724 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  ZoomInFrame;                                      		// 0x0728 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         ZoomInCenterCoords;                               		// 0x072C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         ZoomInFrameCoordsUL;                              		// 0x073C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         ZoomInFrameCoordsUR;                              		// 0x074C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         ZoomInFrameCoordsDL;                              		// 0x075C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         ZoomInFrameCoordsDR;                              		// 0x076C (0x0010) [0x0000000000000002]              ( CPF_Const )
	float                                              ZoomInFireTime;                                   		// 0x077C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 210978 ];

		return pClassPointer;
	};

	void DrawWeaponZoomInHUD ( class ATGHUD* HUD );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	void SpecialFire ( );
	void HolderDied ( );
	void ServerSetLockingTarget ( class ATGRealMecha* NewMecha );
	void SetLockingTarget ( class ATGRealMecha* NewMecha );
	void CheckLockingTarget ( );
	void eventTick ( float DeltaTime );
	void ServerSwitchZoom ( );
	void StartFire ( unsigned char FireModeNum );
	void SwitchZoom ( );
};

UClass* ATGMechaWeap_HPFDetector::pClassPointer = NULL;

// Class MechaGame.TGMecha_SpiderSence
// 0x0004 (0x0954 - 0x0950)
class ATGMecha_SpiderSence : public ATGRealMecha
{
public:
	unsigned long                                      bStartFixingSound : 1;                            		// 0x0950 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 210989 ];

		return pClassPointer;
	};

	void StartFire ( unsigned char FireModeNum );
	void TimerStartAirBoost ( );
	void OnKeyUp_Space ( class UTGMechaPlayerInput* Input );
	void OnKeyDown_Space ( class UTGMechaPlayerInput* Input );
	void OnKeyDown_F ( class UTGMechaPlayerInput* Input );
	void PlayWeapReplicatedEffects ( struct FName VarName );
	void NotifyWeaponStartFire ( unsigned long bStartFire, class ATGMechaWeapon* MechaWeapon );
};

UClass* ATGMecha_SpiderSence::pClassPointer = NULL;

// Class MechaGame.TGMecha_TheOne
// 0x0004 (0x0954 - 0x0950)
class ATGMecha_TheOne : public ATGRealMecha
{
public:
	unsigned long                                      bMachineGunStartFire : 1;                         		// 0x0950 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211013 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void TimerStartAirBoost ( );
	void OnKeyUp_Space ( class UTGMechaPlayerInput* Input );
	void OnKeyDown_Space ( class UTGMechaPlayerInput* Input );
	void OnKeyDown_F ( class UTGMechaPlayerInput* Input );
	void TimerPlayShellDropSound ( );
	void OnMachineGunStartFire ( );
	void NotifyWeaponStartFire ( unsigned long bStartFire, class ATGMechaWeapon* MechaWeapon );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGMecha_TheOne::pClassPointer = NULL;

// Class MechaGame.TGMechaAccurateGun
// 0x00D0 (0x077C - 0x06AC)
class ATGMechaAccurateGun : public ATGMechaWeapon
{
public:
	struct FVector                                     FireStartTrace;                                   		// 0x06AC (0x000C) [0x0000000000000000]              
	struct FVector                                     RealForwardDirection;                             		// 0x06B8 (0x000C) [0x0000000000000000]              
	unsigned long                                      bIsHitAPawn : 1;                                  		// 0x06C4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bServerCheckError : 1;                            		// 0x06C4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAlreadyColdDown : 1;                             		// 0x06C4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bChangeShotsFiredMode : 1;                        		// 0x06C4 (0x0004) [0x0000000000000000] [0x00000008] 
	TArray< struct FVector >                           HitLocationWithNoPawn;                            		// 0x06C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fMaxDamage;                                       		// 0x06D4 (0x0004) [0x0000000000000000]              
	float                                              fMinDamage;                                       		// 0x06D8 (0x0004) [0x0000000000000000]              
	int                                                MaxHitWallNum;                                    		// 0x06DC (0x0004) [0x0000000000000000]              
	float                                              PenetrationDistance;                              		// 0x06E0 (0x0004) [0x0000000000000000]              
	float                                              PenetrationPower;                                 		// 0x06E4 (0x0004) [0x0000000000000000]              
	float                                              PenetrationDamageModifer;                         		// 0x06E8 (0x0004) [0x0000000000000000]              
	float                                              WeaponHitTurnRedInterval;                         		// 0x06EC (0x0004) [0x0000000000000000]              
	int                                                ShotsFired;                                       		// 0x06F0 (0x0004) [0x0000000000000000]              
	float                                              SingleShotsFiredAssist;                           		// 0x06F4 (0x0004) [0x0000000000000000]              
	int                                                MaxShotsFired;                                    		// 0x06F8 (0x0004) [0x0000000000000000]              
	float                                              Accuracy;                                         		// 0x06FC (0x0004) [0x0000000000000000]              
	float                                              AccuracyVertical;                                 		// 0x0700 (0x0004) [0x0000000000000000]              
	float                                              ShotSpread;                                       		// 0x0704 (0x0004) [0x0000000000000000]              
	float                                              ShotSpreadVertical;                               		// 0x0708 (0x0004) [0x0000000000000000]              
	float                                              MinInaccuracy;                                    		// 0x070C (0x0004) [0x0000000000000000]              
	float                                              MaxInaccuracy;                                    		// 0x0710 (0x0004) [0x0000000000000000]              
	float                                              AccuracyDivisor;                                  		// 0x0714 (0x0004) [0x0000000000000000]              
	float                                              AccuracyOffset;                                   		// 0x0718 (0x0004) [0x0000000000000000]              
	float                                              MinInaccuracyVertical;                            		// 0x071C (0x0004) [0x0000000000000000]              
	float                                              MaxInaccuracyVertical;                            		// 0x0720 (0x0004) [0x0000000000000000]              
	float                                              AccuracyDivisorVertical;                          		// 0x0724 (0x0004) [0x0000000000000000]              
	float                                              AccuracyOffsetVertical;                           		// 0x0728 (0x0004) [0x0000000000000000]              
	float                                              VelFastThreshold;                                 		// 0x072C (0x0004) [0x0000000000000000]              
	float                                              VelSlowThreshold;                                 		// 0x0730 (0x0004) [0x0000000000000000]              
	float                                              VelFastThresholdZeroAccel;                        		// 0x0734 (0x0004) [0x0000000000000000]              
	float                                              VelSlowThresholdZeroAccel;                        		// 0x0738 (0x0004) [0x0000000000000000]              
	float                                              DisperseBaseJumping;                              		// 0x073C (0x0004) [0x0000000000000000]              
	float                                              DisperseBase;                                     		// 0x0740 (0x0004) [0x0000000000000000]              
	float                                              DisperseBaseFastMoving;                           		// 0x0744 (0x0004) [0x0000000000000000]              
	float                                              DisperseModifierJumping;                          		// 0x0748 (0x0004) [0x0000000000000000]              
	float                                              DisperseModifier;                                 		// 0x074C (0x0004) [0x0000000000000000]              
	float                                              DisperseModifierFastMoving;                       		// 0x0750 (0x0004) [0x0000000000000000]              
	float                                              DisperseBaseJumpingVertical;                      		// 0x0754 (0x0004) [0x0000000000000000]              
	float                                              DisperseBaseVertical;                             		// 0x0758 (0x0004) [0x0000000000000000]              
	float                                              DisperseBaseFastMovingVertical;                   		// 0x075C (0x0004) [0x0000000000000000]              
	float                                              DisperseModifierJumpingVertical;                  		// 0x0760 (0x0004) [0x0000000000000000]              
	float                                              DisperseModifierVertical;                         		// 0x0764 (0x0004) [0x0000000000000000]              
	float                                              DisperseModifierFastMovingVertical;               		// 0x0768 (0x0004) [0x0000000000000000]              
	float                                              SingleShotsAccuracyStep;                          		// 0x076C (0x0004) [0x0000000000000000]              
	int                                                ShotFiredNum;                                     		// 0x0770 (0x0004) [0x0000000000000000]              
	float                                              StartColdDownTime;                                		// 0x0774 (0x0004) [0x0000000000000000]              
	float                                              flRangeModifier;                                  		// 0x0778 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211021 ];

		return pClassPointer;
	};

	float FallOffFactor ( float HitDistance );
	void WeaponCalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot );
	void EndFire ( unsigned char FireModeNum );
	void BeginFire ( unsigned char FireModeNum );
	void StartColdDown ( );
	unsigned char GetCurrAimDisperseType ( );
	void FireAmmunition ( );
	void SetGunFlashLocation ( TArray< struct FVector > HitLocationTemp );
	void ServerDefenseDoorTakeDamage ( struct FImpactInfo HitInfo );
	void InstantFire ( );
	void Timer_StopHitTurnRed ( );
	bool GunServerTakeDamage ( class APawn* DamageActor, unsigned char WallNum, unsigned char HitGroup, int HitDamage, struct FVector HitLocation, struct FVector HitDir, struct FVector DamagePawnLoc, struct FName HitBoneName, float SandCDis );
	struct FImpactInfo CalcWeaponFireEX ( struct FVector StartTrace, struct FVector EndTrace, TArray< struct FImpactInfo >* ImpactList, TArray< struct FClientAttackPawnInfo >* AttackPInfoList );
	bool ServerFireAmmunition ( int ControllerP, int ControllerR, int ControllerY, int PunchAnglePitch, int PunchAngleYaw, struct FVectorNoCompress FireStartLocation, int DeltaPunchAnglePitch, float ClientTime, unsigned long HitAPawn, struct FVector FireEndLocation, struct FVectorNoCompress ClientForwardDirection, struct FVector HitLocationTemp0, struct FVector HitLocationTemp1, struct FVector HitLocationTemp2, struct FVector HitLocationTemp3, struct FVector HitLocationTemp4, struct FVector HitLocationTemp5 );
	bool CheckForwardDirection ( struct FVector ClientForwardDirection, struct FRotator AimAngle );
	struct FVector ModifyForWardDirection ( struct FRotator AimAngle );
	void SetFireStartLocation ( struct FVector FireStartLocation );
	bool CheckFireStartLocation ( struct FVector FireStartLocation, float ClientTime );
	void SetFireRotator ( struct FRotator ControllerRotator );
	bool CheckFireRotator ( struct FRotator ControllerRotator, float ClientTime );
	void ServerFireAmmunition4P ( int ControllerP, int ControllerR, int ControllerY, int PunchAnglePitch, int PunchAngleYaw, struct FVectorNoCompress FireStartLocation, int DeltaPunchAnglePitch, float ClientTime, class APawn* DamagePawn1, unsigned char WallNum1, unsigned char HitGroup1, int HitDamage1, struct FVector HitLocation1, struct FVector HitDir1, struct FVectorNoCompress DamagePawnLoc1, struct FName HitBoneName1, class APawn* DamagePawn2, unsigned char WallNum2, unsigned char HitGroup2, int HitDamage2, struct FVector HitLocation2, struct FVector HitDir2, struct FVectorNoCompress DamagePawnLoc2, struct FName HitBoneName2, class APawn* DamagePawn3, unsigned char WallNum3, unsigned char HitGroup3, int HitDamage3, struct FVector HitLocation3, struct FVector HitDir3, struct FVectorNoCompress DamagePawnLoc3, struct FName HitBoneName3, class APawn* DamagePawn4, unsigned char WallNum4, unsigned char HitGroup4, int HitDamage4, struct FVector HitLocation4, struct FVector HitDir4, struct FVectorNoCompress DamagePawnLoc4, struct FName HitBoneName4, struct FVector FireEndLocation, float SandCDis1, float SandCDis2, float SandCDis3, float SandCDis4, struct FVectorNoCompress ClientForwardDirection );
	void ServerFireAmmunition3P ( int ControllerP, int ControllerR, int ControllerY, int PunchAnglePitch, int PunchAngleYaw, struct FVectorNoCompress FireStartLocation, int DeltaPunchAnglePitch, float ClientTime, class APawn* DamagePawn1, unsigned char WallNum1, unsigned char HitGroup1, int HitDamage1, struct FVector HitLocation1, struct FVector HitDir1, struct FVectorNoCompress DamagePawnLoc1, struct FName HitBoneName1, class APawn* DamagePawn2, unsigned char WallNum2, unsigned char HitGroup2, int HitDamage2, struct FVector HitLocation2, struct FVector HitDir2, struct FVectorNoCompress DamagePawnLoc2, struct FName HitBoneName2, class APawn* DamagePawn3, unsigned char WallNum3, unsigned char HitGroup3, int HitDamage3, struct FVector HitLocation3, struct FVector HitDir3, struct FVectorNoCompress DamagePawnLoc3, struct FName HitBoneName3, struct FVector FireEndLocation, float SandCDis1, float SandCDis2, float SandCDis3, struct FVectorNoCompress ClientForwardDirection );
	void ServerFireAmmunition2P ( int ControllerP, int ControllerR, int ControllerY, int PunchAnglePitch, int PunchAngleYaw, struct FVectorNoCompress FireStartLocation, int DeltaPunchAnglePitch, float ClientTime, class APawn* DamagePawn1, unsigned char WallNum1, unsigned char HitGroup1, int HitDamage1, struct FVector HitLocation1, struct FVector HitDir1, struct FVectorNoCompress DamagePawnLoc1, struct FName HitBoneName1, class APawn* DamagePawn2, unsigned char WallNum2, unsigned char HitGroup2, int HitDamage2, struct FVector HitLocation2, struct FVector HitDir2, struct FVectorNoCompress DamagePawnLoc2, struct FName HitBoneName2, struct FVector FireEndLocation, float SandCDis1, float SandCDis2, struct FVectorNoCompress ClientForwardDirection );
	void ServerFireAmmunition1P ( int ControllerP, int ControllerR, int ControllerY, int PunchAnglePitch, int PunchAngleYaw, struct FVectorNoCompress FireStartLocation, int DeltaPunchAnglePitch, float ClientTime, class APawn* DamagePawn, unsigned char WallNum, unsigned char HitGroup, int HitDamage, struct FVector HitLocation, struct FVector HitDir, struct FVectorNoCompress DamagePawnLoc, struct FName HitBoneName, struct FVector FireEndLocation, float SandCDis, struct FVectorNoCompress ClientForwardDirection );
	struct FVector InstantFireEndTrace ( struct FVector StartTrace );
};

UClass* ATGMechaAccurateGun::pClassPointer = NULL;

// Class MechaGame.TGMechaWeap_MachineGun
// 0x000C (0x0788 - 0x077C)
class ATGMechaWeap_MachineGun : public ATGMechaAccurateGun
{
public:
	class USoundCue*                                   MachineGunRecoverSound;                           		// 0x077C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MachineGunRecoverSoundDelay;                      		// 0x0780 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             MachineGunRecoverAC;                              		// 0x0784 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211020 ];

		return pClassPointer;
	};

	void DetachMuzzleFlash ( );
	void StartFire ( unsigned char FireModeNum );
};

UClass* ATGMechaWeap_MachineGun::pClassPointer = NULL;

// Class MechaGame.TGMechaAnimNotify_ViewShake
// 0x0000 (0x00A0 - 0x00A0)
class UTGMechaAnimNotify_ViewShake : public UAnimNotify_ViewShake
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211586 ];

		return pClassPointer;
	};

	void eventNotify ( class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator );
};

UClass* UTGMechaAnimNotify_ViewShake::pClassPointer = NULL;

// Class MechaGame.TGMechaDoomMatch
// 0x0040 (0x078C - 0x074C)
class ATGMechaDoomMatch : public AMechaRoundGame
{
public:
	float                                              CheckBalanceDelay;                                		// 0x074C (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bCheckBalance : 1;                                		// 0x0750 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDynamicBalanceEnabled : 1;                       		// 0x0750 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bBaseDestroyed : 1;                               		// 0x0750 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDoorOpenProgressStarted : 1;                     		// 0x0750 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                DoorOpenDelay;                                    		// 0x0754 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DoorOpenMaxProgress;                              		// 0x0758 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DoorOpenProgressPerSec;                           		// 0x075C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DoorOpenProgressInterval;                         		// 0x0760 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DoorOpenProgressScaleNormal;                      		// 0x0764 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              DoorOpenProgressScaleAttacker;                    		// 0x0768 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DoorOpenProgressScaleDefender;                    		// 0x076C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CurrentDoorOpenProgress;                          		// 0x0770 (0x0004) [0x0000000000000000]              
	float                                              CurrentDoorOpenSpeedScale;                        		// 0x0774 (0x0004) [0x0000000000000000]              
	float                                              DoorOpenStartTime;                                		// 0x0778 (0x0004) [0x0000000000000000]              
	float                                              DoorOpenTime;                                     		// 0x077C (0x0004) [0x0000000000000000]              
	unsigned char                                      DoorOpenSpeedState;                               		// 0x0780 (0x0001) [0x0000000000000000]              
	float                                              AccelerateStartTime;                              		// 0x0784 (0x0004) [0x0000000000000000]              
	float                                              DecelerateStartTime;                              		// 0x0788 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211601 ];

		return pClassPointer;
	};

	void Killed_CalcAchi ( class ATGMechaDMPlayerController* Killer, class ATGMechaDMPlayerController* Killed, class ATGPawn* KilledPawn, class UClass* DamageType );
	void NotifyDoorSwitchStateChanged ( unsigned char DoorState );
	void SetDoorOpenSpeedState ( unsigned char NewState );
	void SetDoorOpenSpeedScale ( float SpeedScale );
	void SetDoorOpenProgress ( float Progress );
	void SetDoorOpenProgressStarted ( unsigned long bStart );
	void TimerDoorOpenProgress ( );
	void StopDoorOpenProgress ( );
	void TimerStartDoorOpenProgress ( );
	void BroadcastRoundMessage ( unsigned long bRoundStart, unsigned long bGameOver );
	void GenericEndRound ( int TeamIndex, struct FString Reason, class AActor* EndRoundFocus );
	void NotifyItemDestroyed ( class AMechaDestructibleItem* Item, class AMechaGamePlayerController* InstigatorPC );
	void SetTarget ( class AMechaDestructibleItem* Item, unsigned long bEnabled );
	void AddTeamScore ( int TeamIndex );
	void ScoreKill ( class AController* Killer, class AController* Other );
	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
	class APawn* SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot );
	void Bombing ( float DamageHealthPercent );
	void RestartAllPlayers ( );
	void RestartPlayer ( class AController* NewPlayer );
	void ChangeSides ( );
	bool ShouldChangeSides ( );
	void SwitchCamp ( );
	void RoundEnded ( unsigned long bGameOver );
	void ResetRoundLevel ( );
	void eventAddInventoryFor ( class APawn* PlayerPawn );
	void SetupPlayerStart ( unsigned char Type );
	void TimerEnableCheckBalance ( );
	void StartMatch ( );
	void InitRound ( );
	void Reset ( );
	void RoundStarted ( );
	void InitGameReplicationInfo ( );
	void eventUpdateGameSpecificSettings ( struct FGameSpecificSettings Settings );
	void PostBeginPlay ( );
};

UClass* ATGMechaDoomMatch::pClassPointer = NULL;

// Class MechaGame.TGMechaPlayerStart
// 0x0008 (0x02CC - 0x02C4)
class ATGMechaPlayerStart : public AUTTeamPlayerStart
{
public:
	unsigned char                                      PhaseType;                                        		// 0x02C4 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UDrawCylinderComponent*                      ShapeComponent;                                   		// 0x02C8 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211626 ];

		return pClassPointer;
	};

	bool IsBlockedBy ( class UClass* BaseClass, float Radius );
};

UClass* ATGMechaPlayerStart::pClassPointer = NULL;

// Class MechaGame.TGMechaDMMessage
// 0x0018 (0x007C - 0x0064)
class UTGMechaDMMessage : public UUTLocalMessage
{
public:
	struct FString                                     BaseDestroyedBy;                                  		// 0x0064 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MechaLicenseRequired;                             		// 0x0070 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211685 ];

		return pClassPointer;
	};

	float GetLifeTime ( int Switch );
	float GetPos ( int Switch, class AHUD* myHUD );
	int GetFontSize ( int Switch, class APlayerReplicationInfo* RelatedPRI1, class APlayerReplicationInfo* RelatedPRI2, class APlayerReplicationInfo* LocalPlayer );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGMechaDMMessage::pClassPointer = NULL;

// Class MechaGame.TGSeqEvent_DoorOpen
// 0x0000 (0x0100 - 0x0100)
class UTGSeqEvent_DoorOpen : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211710 ];

		return pClassPointer;
	};

};

UClass* UTGSeqEvent_DoorOpen::pClassPointer = NULL;

// Class MechaGame.TGSeqEvent_DoorSwitchStateChanged
// 0x0004 (0x0104 - 0x0100)
class UTGSeqEvent_DoorSwitchStateChanged : public USequenceEvent
{
public:
	int                                                DoorSwitchState;                                  		// 0x0100 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211729 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UTGSeqEvent_DoorSwitchStateChanged::pClassPointer = NULL;

// Class MechaGame.TGMechaGamePawn
// 0x0000 (0x1100 - 0x1100)
class ATGMechaGamePawn : public AMechaGamePawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211751 ];

		return pClassPointer;
	};

	void NotifyTeamChanged ( );
	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
};

UClass* ATGMechaGamePawn::pClassPointer = NULL;

// Class MechaGame.TGMechaDMPawn
// 0x0000 (0x1100 - 0x1100)
class ATGMechaDMPawn : public ATGMechaGamePawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211750 ];

		return pClassPointer;
	};

};

UClass* ATGMechaDMPawn::pClassPointer = NULL;

// Class MechaGame.TGMechaDMHUD
// 0x01C0 (0x241C - 0x225C)
class ATGMechaDMHUD : public ATGMechaGameHUD
{
public:
	TArray< struct FSRadarInfo >                       RadarInfo;                                        		// 0x225C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMaterial*                                   PointerMaterial;                                  		// 0x2268 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             RoundStartAttackerPS;                             		// 0x226C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             RoundStartDefenderPS;                             		// 0x2270 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             RoundEndTransitionPS;                             		// 0x2274 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             DefenceLevelUpPS;                                 		// 0x2278 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     BaseIsUnderAttack;                                		// 0x227C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UTexture2D*                                  GoalScoreAttackBGTex;                             		// 0x2288 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  GoalScoreDefendBGTex;                             		// 0x228C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  BaseBG;                                           		// 0x2290 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  BaseHitBG;                                        		// 0x2294 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  BaseHPBar;                                        		// 0x2298 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  BaseDoorBar_N;                                    		// 0x229C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  BaseDoorBar_S;                                    		// 0x22A0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  BaseDoorBar_F;                                    		// 0x22A4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         BaseBGCoords;                                     		// 0x22A8 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         BaseHitBGCoords;                                  		// 0x22B8 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         BaseBarCoords;                                    		// 0x22C8 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   BaseBarOffset;                                    		// 0x22D8 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   BaseHitOffset;                                    		// 0x22E0 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   BaseCentralTextOffset;                            		// 0x22E8 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   BaseTitleTextOffset;                              		// 0x22F0 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  BaseTextImage;                                    		// 0x22F8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         TextCoords_BaseCore;                              		// 0x22FC (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         TextCoords_DoorIsToOpen;                          		// 0x230C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         TextCoords_DoorIsOpenning;                        		// 0x231C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         TextCoords_DoorIsOpenningFaster;                  		// 0x232C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         TextCoords_DoorIsOpenningSlower;                  		// 0x233C (0x0010) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  DefenceTex;                                       		// 0x234C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         DefenceBGCoords;                                  		// 0x2350 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         NumTextCoords;                                    		// 0x2360 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         NumTextCoords01;                                  		// 0x2370 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         NumTextCoords02;                                  		// 0x2380 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         NumTextCoords03;                                  		// 0x2390 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   DefenceNumOffset;                                 		// 0x23A0 (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                DefenceCellHeight;                                		// 0x23A8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      HPGreen;                                          		// 0x23AC (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      HPYellow;                                         		// 0x23B0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      HPRed;                                            		// 0x23B4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              LastIndicatorRenderTime;                          		// 0x23B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     DoorOpenAboutToStart;                             		// 0x23BC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DoorOpenningNormal;                               		// 0x23C8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DoorOpenningAccelerate;                           		// 0x23D4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DoorOpenningDecelerate;                           		// 0x23E0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DoorOpened;                                       		// 0x23EC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     BaseCoreName;                                     		// 0x23F8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FirstHalf;                                        		// 0x2404 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SecondHalf;                                       		// 0x2410 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211801 ];

		return pClassPointer;
	};

	bool InternalCheckCrosshairOnFriendly ( class APawn* CheckPawn, struct FRotator TraceRot );
	float GetAngle ( struct FVector PointB, struct FVector PointC );
	void DrawIndicator ( );
	void eventPostRender ( );
	void DrawBaseHitMessage ( );
	void NotifyDefenceLevelUp ( );
	void DrawDefenceLevel ( );
	void DrawShadowedText ( struct FString Text, float X, float Y, float Scale );
	void DrawBaseInfo ( );
	void DisplayTeamScore ( );
	void DrawOverlays ( );
	void DrawLivingHud ( );
};

UClass* ATGMechaDMHUD::pClassPointer = NULL;

// Class MechaGame.TGMechaDmgType_Aerogun
// 0x0000 (0x0620 - 0x0620)
class UTGMechaDmgType_Aerogun : public UTGMechaDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211819 ];

		return pClassPointer;
	};

};

UClass* UTGMechaDmgType_Aerogun::pClassPointer = NULL;

// Class MechaGame.TGMechaProjectiveWeapon
// 0x002C (0x06D8 - 0x06AC)
class ATGMechaProjectiveWeapon : public ATGMechaWeapon
{
public:
	float                                              ShellDamage;                                      		// 0x06AC (0x0004) [0x0000000000000000]              
	float                                              ShellDamageRadius;                                		// 0x06B0 (0x0004) [0x0000000000000000]              
	float                                              ShellGravityScaling;                              		// 0x06B4 (0x0004) [0x0000000000000000]              
	float                                              ShellAccelRate;                                   		// 0x06B8 (0x0004) [0x0000000000000000]              
	float                                              ShellMaxSpeed;                                    		// 0x06BC (0x0004) [0x0000000000000000]              
	float                                              ProjAimDisperseParmBase;                          		// 0x06C0 (0x0004) [0x0000000000000000]              
	float                                              ProjAimDisperseParmJump;                          		// 0x06C4 (0x0004) [0x0000000000000000]              
	float                                              ProjAimDisperseParmMove;                          		// 0x06C8 (0x0004) [0x0000000000000000]              
	float                                              ExplodeTime;                                      		// 0x06CC (0x0004) [0x0000000000000000]              
	int                                                CurrRocketIndex;                                  		// 0x06D0 (0x0004) [0x0000000000000000]              
	int                                                MaxRocketNumPerSide;                              		// 0x06D4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211822 ];

		return pClassPointer;
	};

	void FireAmmunition ( );
	void SetProjectileParms ( class ATGMechaProjectile** NewProj );
	class AProjectile* ProjectileFire ( );
	void IncrementFlashCount ( );
	struct FVector GetProjectileAim ( struct FVector StartFireLoc );
	struct FVector ModifyAimDirection ( struct FRotator AimRotation );
	TArray< struct FMechaAeroProjFireInfo > GetAllProjFireInfo ( );
	struct FVector GetPhysicalFireStartLoc ( struct FVector AimDir );
};

UClass* ATGMechaProjectiveWeapon::pClassPointer = NULL;

// Class MechaGame.TGMechaWeap_Aerogun
// 0x0074 (0x074C - 0x06D8)
class ATGMechaWeap_Aerogun : public ATGMechaProjectiveWeapon
{
public:
	float                                              MinFiringRange;                                   		// 0x06D8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SpeedFirstPhase;                                  		// 0x06DC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              FirstPhaseDistance;                               		// 0x06E0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              LocalAccelX;                                      		// 0x06E4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ExplosionRadius;                                  		// 0x06E8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FVector2D                                   SrartDirOffsetX;                                  		// 0x06EC (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FVector2D                                   SrartDirOffsetY;                                  		// 0x06F4 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FVector2D                                   SrartDirOffsetZ;                                  		// 0x06FC (0x0008) [0x0000000000004000]              ( CPF_Config )
	float                                              DeltaOffsetX;                                     		// 0x0704 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DeltaOffsetY;                                     		// 0x0708 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DeltaOffsetZ;                                     		// 0x070C (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FVector                                     LocalStartDirTemplate;                            		// 0x0710 (0x000C) [0x0000000000004000]              ( CPF_Config )
	float                                              SpeedFirstPhaseOffset;                            		// 0x071C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              FirstPhaseDistanceOffset;                         		// 0x0720 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SecondPhaseLocalAccelYRate;                       		// 0x0724 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SecondPhaseTravelTimeRate;                        		// 0x0728 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              HideTrajectoryDelayTime;                          		// 0x072C (0x0004) [0x0000000000000000]              
	unsigned long                                      bShowTrajectory : 1;                              		// 0x0730 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWillingToFire : 1;                               		// 0x0730 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAbleToFire : 1;                                  		// 0x0730 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsAiming : 1;                                    		// 0x0730 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FVector                                     AimingLoc;                                        		// 0x0734 (0x000C) [0x0000000000000000]              
	class UParticleSystemComponent*                    PSC_ProjTrajectoryFinalPoint;                     		// 0x0740 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             PS_ProjTrajectoryFinalPoint;                      		// 0x0744 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  UnableFireCrosshairImage;                         		// 0x0748 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211821 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	void AerogunServerStopFire ( unsigned char FireModeNum, unsigned long bClientAbleToFire );
	class AProjectile* ProjectileFire ( );
	struct FVector GetRandomProjTargetLoc ( struct FVector LocalTargetLoc, unsigned long bRightSide, struct FMatrix TransMatrix );
	void ServerProjectileFire ( struct FVectorNoCompress TargetLoc );
	void eventPostBeginPlay ( );
};

UClass* ATGMechaWeap_Aerogun::pClassPointer = NULL;

// Class MechaGame.TGMechaDmgType_Electrowelding
// 0x0000 (0x0620 - 0x0620)
class UTGMechaDmgType_Electrowelding : public UTGMechaDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211825 ];

		return pClassPointer;
	};

};

UClass* UTGMechaDmgType_Electrowelding::pClassPointer = NULL;

// Class MechaGame.TGMechaWeap_Electrowelding
// 0x0074 (0x0720 - 0x06AC)
class ATGMechaWeap_Electrowelding : public ATGMechaWeapon
{
public:
	int                                                CureAmountMecha;                                  		// 0x06AC (0x0004) [0x0000000000000000]              
	int                                                CureAmountBuilding;                               		// 0x06B0 (0x0004) [0x0000000000000000]              
	float                                              MaxOverheatingValueMecha;                         		// 0x06B4 (0x0004) [0x0000000000000000]              
	float                                              SingleShotOverheatingValueMecha;                  		// 0x06B8 (0x0004) [0x0000000000000000]              
	float                                              MaxOverheatingCooldownRateMecha;                  		// 0x06BC (0x0004) [0x0000000000000000]              
	float                                              NormalOverheatingCooldownRateMecha;               		// 0x06C0 (0x0004) [0x0000000000000000]              
	float                                              CooldownPreparationTimeMecha;                     		// 0x06C4 (0x0004) [0x0000000000000000]              
	float                                              MaxOverheatingValueBuilding;                      		// 0x06C8 (0x0004) [0x0000000000000000]              
	float                                              SingleShotOverheatingValueBuilding;               		// 0x06CC (0x0004) [0x0000000000000000]              
	float                                              MaxOverheatingCooldownRateBuilding;               		// 0x06D0 (0x0004) [0x0000000000000000]              
	float                                              NormalOverheatingCooldownRateBuilding;            		// 0x06D4 (0x0004) [0x0000000000000000]              
	float                                              CooldownPreparationTimeBuilding;                  		// 0x06D8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsElectroweldingActive : 1;                      		// 0x06DC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInvalidFixing : 1;                               		// 0x06DC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bTraced : 1;                                      		// 0x06DC (0x0004) [0x0000000000000000] [0x00000004] 
	class AActor*                                      LastFixingActor;                                  		// 0x06E0 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastFixingPoint;                                  		// 0x06E4 (0x000C) [0x0000000000000000]              
	float                                              FixingLocationDiffThreshold;                      		// 0x06F0 (0x0004) [0x0000000000000000]              
	class AActor*                                      FixingActor;                                      		// 0x06F4 (0x0004) [0x0000000000000000]              
	float                                              ServerCheckFixingActorThreshold;                  		// 0x06F8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     FixingStr;                                        		// 0x06FC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NoneFixingStr;                                    		// 0x0708 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     InvalidFixingStr;                                 		// 0x0714 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211827 ];

		return pClassPointer;
	};

	void DrawWeaponCrosshair ( class AHUD* HUD );
	bool StillFiring ( unsigned char FireMode );
	void CustomFire ( );
	void eventTick ( float DeltaTime );
	void SetOverheatingParms ( class AActor* CurrFixingActor );
	void PlayFixingMechaEffect ( );
	void ServerSetFixingEffect ( class AActor* CurrFixingActor, struct FVector CurrHitLocation );
	void ServerSetFixingActor ( class AActor* CurrFixingActor, struct FVector CurrHitLocation );
	bool ServerCheckFixingActor ( class AActor* CurrFixingActor );
	void ConsumeAmmo ( unsigned char FireModeNum );
	void eventPostBeginPlay ( );
};

UClass* ATGMechaWeap_Electrowelding::pClassPointer = NULL;

// Class MechaGame.TGMechaDmgType_FlamethrowerSpray
// 0x0000 (0x0620 - 0x0620)
class UTGMechaDmgType_FlamethrowerSpray : public UTGMechaDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211830 ];

		return pClassPointer;
	};

};

UClass* UTGMechaDmgType_FlamethrowerSpray::pClassPointer = NULL;

// Class MechaGame.TGMechaWeap_FlameThrower
// 0x00BC (0x0768 - 0x06AC)
class ATGMechaWeap_FlameThrower : public ATGMechaWeapon
{
public:
	unsigned long                                      bFireSpraying : 1;                                		// 0x06AC (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class ATGMechaWeap_FlameThrowerSprayBase*          ActiveFlameSpray;                                 		// 0x06B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MuzzleHeatFadeInTime;                             		// 0x06B4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MuzzleHeatFadeOutTime;                            		// 0x06B8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MuzzleHeatPow;                                    		// 0x06BC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USoundCue*                                   PilotLightLoopSound;                              		// 0x06C0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAudioComponent*                             AC_PilotLoop;                                     		// 0x06C4 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class USoundCue*                                   PilotLightIgniteSound;                            		// 0x06C8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USoundCue*                                   PilotLightExtinguishSound;                        		// 0x06CC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UUTParticleSystemComponent*                  PSC_PilotLight;                                   		// 0x06D0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    PSC_UnignitedFuel;                                		// 0x06D4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              FiringLookRightScale;                             		// 0x06D8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              FiringLookUpScale;                                		// 0x06DC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              SpinUpTime;                                       		// 0x06E0 (0x0004) [0x0000000000000000]              
	float                                              SpinUpProgress;                                   		// 0x06E4 (0x0004) [0x0000000000000000]              
	class UClass*                                      FlameSprayClass;                                  		// 0x06E8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class USkeletalMeshComponent*                      WeaponAttachmentMesh;                             		// 0x06EC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ATGMechaWeaponAttachment*                    WeaponAttachment;                                 		// 0x06F0 (0x0004) [0x0000000000000000]              
	struct FName                                       PilotLightSocketName;                             		// 0x06F4 (0x0008) [0x0000000000000000]              
	float                                              MinFireDuration;                                  		// 0x06FC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FRotator                                    AimOffsetAdjusment;                               		// 0x0700 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              BurstDelay;                                       		// 0x070C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                NextFlamePoolIdx;                                 		// 0x0710 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ATGMechaWeap_FlameThrowerSprayBase*          FlamePool[ 0x2 ];                                 		// 0x0714 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              MinDamagePerSeconds;                              		// 0x071C (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              MaxDamagePerSeconds;                              		// 0x0720 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              DamageInterval;                                   		// 0x0724 (0x0004) [0x0000000000000000]              
	float                                              EnergyDamagePerSecond;                            		// 0x0728 (0x0004) [0x0000000000000000]              
	float                                              m_fFlameAttackDuckMaxSpeed;                       		// 0x072C (0x0004) [0x0000000000000000]              
	float                                              m_fFlameAttackSnakeMaxSpeed;                      		// 0x0730 (0x0004) [0x0000000000000000]              
	float                                              m_fFlameAttackWalkMaxSpeed;                       		// 0x0734 (0x0004) [0x0000000000000000]              
	float                                              WeaponSeedSprayVel;                               		// 0x0738 (0x0004) [0x0000000000000000]              
	float                                              WeaponSeedDecel;                                  		// 0x073C (0x0004) [0x0000000000000000]              
	float                                              WeaponSeedMaxAge;                                 		// 0x0740 (0x0004) [0x0000000000000000]              
	float                                              WeaponSeedMinChainLength;                         		// 0x0744 (0x0004) [0x0000000000000000]              
	float                                              WeaponSeedSimFreq;                                		// 0x0748 (0x0004) [0x0000000000000000]              
	float                                              WeaponFireLastTime;                               		// 0x074C (0x0004) [0x0000000000000000]              
	float                                              WeaponFireTakeDamageFrequency;                    		// 0x0750 (0x0004) [0x0000000000000000]              
	float                                              WeaponContinuousFireDamage;                       		// 0x0754 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              SprayingFireVelocityPenalty;                      		// 0x0758 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             PSC_PilotLightPSCTemplate;                        		// 0x075C (0x0004) [0x0000000000000000]              
	class UUTParticleSystemComponent*                  PSC_FireSprayInFirstPersonSpectate;               		// 0x0760 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             PSC_FireSprayIn1stSpectateTemplate;               		// 0x0764 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211832 ];

		return pClassPointer;
	};

	void FlameThrowerServerTakeDamage ( class AActor* DamageActor, int HitDamage, int HitEnergyDamage, struct FVector HitLocation, struct FVector Momentum, class UClass* MyDamageType );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	void TurnOffFireSprayInFirstPersonSpectate ( );
	void TurnOnFireSprayInFirstPersonSpectate ( );
	void AttachPliotLight ( );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	void EndOfBurstDelay ( );
	bool CanDoSpecialMeleeAttack ( );
	float GetWeaponDistanceForEnemyTrace ( );
	bool IsActiveReloadActive ( class ATGPawn* TPawn );
	float GetCrossHairScale ( );
	void GetRotationControlScale ( float* TurnScale, float* LookUpScale );
	struct FRotator GetHumanAimRotationAdjustment ( );
	void Destroyed ( );
	void CustomFire ( );
	int GetBurstsToFire ( );
	int GetBurstFireCount ( );
	void FireAmmunition ( );
	void StartFire ( unsigned char FireModeNum );
	void DoDelayedEndFire ( );
	float GetWeaponRating ( );
	void eventWeaponStoppedFiring ( unsigned char FiringMode );
	void TurnOffFireSpray ( );
	void TurnOnFireSpray ( );
	void CheckFlamePool ( );
	void GetActualMuzzleLocationAndRotation ( struct FVector* Out_Loc, struct FRotator* out_Rot );
	class ATGMechaWeap_FlameThrowerSprayBase* GetFlameSprayFromPool ( );
	void TurnOffPilot ( );
	void TurnOnPilot ( );
	void SetWeaponAttachment ( class ATGMechaWeaponAttachment* WeapAttach, struct FName SocketName );
	void eventPostBeginPlay ( );
	void eventWeaponFired ( unsigned char FiringMode, struct FVector HitLocation );
};

UClass* ATGMechaWeap_FlameThrower::pClassPointer = NULL;

// Class MechaGame.TGMechaDmgType_FrostMissile
// 0x0000 (0x0620 - 0x0620)
class UTGMechaDmgType_FrostMissile : public UTGMechaDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211835 ];

		return pClassPointer;
	};

};

UClass* UTGMechaDmgType_FrostMissile::pClassPointer = NULL;

// Class MechaGame.TGMechaWeap_RocketLauncher
// 0x0000 (0x06D8 - 0x06D8)
class ATGMechaWeap_RocketLauncher : public ATGMechaProjectiveWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211837 ];

		return pClassPointer;
	};

	void SetProjectileParms ( class ATGMechaProjectile** NewProj );
};

UClass* ATGMechaWeap_RocketLauncher::pClassPointer = NULL;

// Class MechaGame.TGMechaDmgType_FrozenGrenade
// 0x0000 (0x0620 - 0x0620)
class UTGMechaDmgType_FrozenGrenade : public UTGMechaDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211840 ];

		return pClassPointer;
	};

};

UClass* UTGMechaDmgType_FrozenGrenade::pClassPointer = NULL;

// Class MechaGame.TGMechaWeap_FrozenGrenade
// 0x0014 (0x06EC - 0x06D8)
class ATGMechaWeap_FrozenGrenade : public ATGMechaProjectiveWeapon
{
public:
	float                                              WallBounceRate;                                   		// 0x06D8 (0x0004) [0x0000000000000000]              
	float                                              GroundBounceRate;                                 		// 0x06DC (0x0004) [0x0000000000000000]              
	float                                              PawnBounceRate;                                   		// 0x06E0 (0x0004) [0x0000000000000000]              
	float                                              FrozenDuration;                                   		// 0x06E4 (0x0004) [0x0000000000000000]              
	float                                              FrozenVelocityScale;                              		// 0x06E8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211842 ];

		return pClassPointer;
	};

	void SetProjectileParms ( class ATGMechaProjectile** NewProj );
};

UClass* ATGMechaWeap_FrozenGrenade::pClassPointer = NULL;

// Class MechaGame.TGMechaDmgType_Howitzer
// 0x0000 (0x0620 - 0x0620)
class UTGMechaDmgType_Howitzer : public UTGMechaDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211845 ];

		return pClassPointer;
	};

};

UClass* UTGMechaDmgType_Howitzer::pClassPointer = NULL;

// Class MechaGame.TGMechaWeap_Howitzer
// 0x002C (0x0704 - 0x06D8)
class ATGMechaWeap_Howitzer : public ATGMechaProjectiveWeapon
{
public:
	float                                              PitchAngleOffset;                                 		// 0x06D8 (0x0004) [0x0000000000000000]              
	float                                              HideTrajectoryDelayTime;                          		// 0x06DC (0x0004) [0x0000000000000000]              
	unsigned long                                      bShowTrajectory : 1;                              		// 0x06E0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWillingToFire : 1;                               		// 0x06E0 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< class UParticleSystemComponent* >          PSC_ProjTrajectoryPointList;                      		// 0x06E4 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	class UParticleSystem*                             PS_ProjTrajectoryPoint;                           		// 0x06F0 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    PSC_ProjTrajectoryFinalPoint;                     		// 0x06F4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             PS_ProjTrajectoryFinalPoint;                      		// 0x06F8 (0x0004) [0x0000000000000000]              
	struct FName                                       SimFireStartLocSocketName;                        		// 0x06FC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211847 ];

		return pClassPointer;
	};

	void SetProjectileParms ( class ATGMechaProjectile** NewProj );
	struct FVector GetSimFireStartLoc ( );
	void eventDestroyed ( );
	struct FVector GetProjectileAim ( struct FVector StartFireLoc );
	void eventPostBeginPlay ( );
};

UClass* ATGMechaWeap_Howitzer::pClassPointer = NULL;

// Class MechaGame.TGMechaDmgType_HPFDetector
// 0x0000 (0x0620 - 0x0620)
class UTGMechaDmgType_HPFDetector : public UTGMechaDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211850 ];

		return pClassPointer;
	};

};

UClass* UTGMechaDmgType_HPFDetector::pClassPointer = NULL;

// Class MechaGame.TGMechaDmgType_LaserBlade
// 0x0000 (0x0620 - 0x0620)
class UTGMechaDmgType_LaserBlade : public UTGMechaDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211854 ];

		return pClassPointer;
	};

};

UClass* UTGMechaDmgType_LaserBlade::pClassPointer = NULL;

// Class MechaGame.TGMechaMeleeWeapon
// 0x00E0 (0x078C - 0x06AC)
class ATGMechaMeleeWeapon : public ATGMechaWeapon
{
public:
	float                                              LastFireTime;                                     		// 0x06AC (0x0004) [0x0000000000000000]              
	int                                                ShotCount;                                        		// 0x06B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bForceReturnToActive : 1;                         		// 0x06B4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlaySecondAnim : 1;                              		// 0x06B4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsFireInFiringState : 1;                          		// 0x06B4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bPlayRecoverAnim : 1;                             		// 0x06B4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bPlayHeavyAnim : 1;                               		// 0x06B4 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bIsHeavyHit : 1;                                  		// 0x06B4 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bShouldUseServerCheck : 1;                        		// 0x06B4 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bCanCombo : 1;                                    		// 0x06B4 (0x0004) [0x0000000000000000] [0x00000080] 
	class UMaterialInstanceConstant*                   WeaponMaterialInstance;                           		// 0x06B8 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   BloodMIC;                                         		// 0x06BC (0x0004) [0x0000000000000000]              
	float                                              BeginKnifeFireTime;                               		// 0x06C0 (0x0004) [0x0000000000000000]              
	float                                              AuxIntervalTime;                                  		// 0x06C4 (0x0004) [0x0000000000000000]              
	float                                              TimeBeforeDamageSwinging1;                        		// 0x06C8 (0x0004) [0x0000000000000000]              
	float                                              TimeBeforeDamageSwinging2;                        		// 0x06CC (0x0004) [0x0000000000000000]              
	float                                              TimeBeforeDamageSwingingHeavy;                    		// 0x06D0 (0x0004) [0x0000000000000000]              
	float                                              TimeFromSwing2ToSwingHeavy;                       		// 0x06D4 (0x0004) [0x0000000000000000]              
	float                                              TimeFromSwing1ToSwing2;                           		// 0x06D8 (0x0004) [0x0000000000000000]              
	float                                              TimeFromSwingHeavyToSwing1;                       		// 0x06DC (0x0004) [0x0000000000000000]              
	float                                              SwingFireInterval2;                               		// 0x06E0 (0x0004) [0x0000000000000000]              
	float                                              RestTimeOfFirstAnim;                              		// 0x06E4 (0x0004) [0x0000000000000000]              
	float                                              RestTimeOfSecondAnim;                             		// 0x06E8 (0x0004) [0x0000000000000000]              
	float                                              SwingFireInterval1;                               		// 0x06EC (0x0004) [0x0000000000000000]              
	float                                              SwingFireIntervalHeavy;                           		// 0x06F0 (0x0004) [0x0000000000000000]              
	float                                              AttackSectorAngle;                                		// 0x06F4 (0x0004) [0x0000000000000000]              
	TArray< float >                                    CurrKnifeRange;                                   		// 0x06F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    CurrKnifeAngle;                                   		// 0x0704 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    KnifeNormalRange;                                 		// 0x0710 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    KnifeNormalAngle;                                 		// 0x071C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              InstantHitSwingDamage;                            		// 0x0728 (0x0004) [0x0000000000000000]              
	TArray< float >                                    KnifeHeavyRange;                                  		// 0x072C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    KnifeHeavyAngle;                                  		// 0x0738 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              InstantHitSwingHeavyDamage;                       		// 0x0744 (0x0004) [0x0000000000000000]              
	struct FVector                                     MeleeTraceDir;                                    		// 0x0748 (0x000C) [0x0000000000000000]              
	float                                              FirstFireTimeStamp;                               		// 0x0754 (0x0004) [0x0000000000000000]              
	float                                              SecondFireTimeStamp;                              		// 0x0758 (0x0004) [0x0000000000000000]              
	float                                              MinTimeFireInterval;                              		// 0x075C (0x0004) [0x0000000000000000]              
	float                                              FirstSwingSoundDelayTime;                         		// 0x0760 (0x0004) [0x0000000000000000]              
	float                                              SecondSwingSoundDelayTime;                        		// 0x0764 (0x0004) [0x0000000000000000]              
	float                                              HeavySwingSoundDelayTime;                         		// 0x0768 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ImpactFleshSnd;                                   		// 0x076C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   MeleeRecoverSound;                                		// 0x0770 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FirstMeleeRecoverSoundDelay;                      		// 0x0774 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SecondMeleeRecoverSoundDelay;                     		// 0x0778 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HeavyMeleeRecoverSoundDelay;                      		// 0x077C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             MeleeRecoverAC;                                   		// 0x0780 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              TestRate;                                         		// 0x0784 (0x0004) [0x0000000000000000]              
	float                                              CrossColorTurnBackInterval;                       		// 0x0788 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211857 ];

		return pClassPointer;
	};

	void PlayMeleeHitCameraShake ( );
	bool CheckFireStartLocation ( struct FVector ServerStartLocation, struct FVector FireStartLocation );
	void OnPlayMeleeRecoverSound ( );
	void PlayRecoverSwingAnim ( );
	void PlayHeavySwingAnim ( );
	void PlaySecondSwingAnim ( );
	void PlayFirstSwingAnim ( );
	void PlayMeleeFireAnim ( );
	struct FImpactInfo CalcWeaponFire ( struct FVector StartTrace, struct FVector EndTrace, struct FVector Extent, TArray< struct FImpactInfo >* ImpactList );
	void KnifeServerTakeDamage ( class APawn* DamagePawn, struct FVector HitLocation, struct FVector HitDir, struct FVector StartTraceLoc, struct FVector DamagePawnLoc, unsigned char HitGroup, struct FName HitBoneName, float ClientTime, int NumHits, float ClientAttackSectorAngle, float SandCDis );
	bool CheckTraceDir ( float ClientAttackSectorAngle );
	bool CheckHitGroup ( );
	bool KnifeServerCheckFire ( class APawn* DamagePawn, struct FVectorNoCompress TraceDir, struct FVectorNoCompress StartTraceLoc, struct FVector DamagePawnLoc, unsigned char HitGroup, struct FName HitBoneName, float ClientTime, float ClientAttackSectorAngle, float SandCDis );
	void ProcessInstantHitMeleeWeapon ( unsigned char FiringMode, struct FImpactInfo Impact, struct FVectorNoCompress TraceDir, struct FVectorNoCompress StartTraceLoc, float ClientTime, int NumHits, float ClientAttackSectorAngle, struct FVectorNoCompress HitPawnLoc, float SandCDis );
	void ProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, int NumHits );
	struct FRotator MeleeWeaponGetAdjustedAim ( struct FVector StartFireLoc, int SectorAngleOffset );
	struct FVector MeleeWeaponInstantFireEndTrace ( struct FVector StartTrace, int SectorAngleOffset );
	void ServerProcessMeleeWeaponInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, float ClientTime, struct FVectorNoCompress TraceDir, int NumHits, unsigned long bShouldServerCheck, struct FVectorNoCompress StartTraceLoc, float ClientAttackSectorAngle, struct FVectorNoCompress HitPawnLoc, float SandCDis );
	void TurnBackCrossHairColor ( );
	struct FVector T2MeleeWeaponInstantFireEndTrace ( struct FVector StartTrace, struct FVector TraceDirection );
	void SetMeleeImpactEffectInfo ( );
	void InstantFire ( );
	struct FVector GetMeleeFireStartTrace ( );
	void SetMeleeDamageCheckingParms ( );
	void PlayImpactEffect ( unsigned char FiringMode, struct FImpactInfo Impact );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void FullyCooled ( );
	void FireAmmunition ( );
	void SetTimerInstantFire ( );
	void ServerHandleFinishedFiring ( );
	void HandleFinishedFiring ( );
	void OnComboTimer ( );
	bool HasAnyAmmo ( );
	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	struct FName GetFireAnim ( int FireModeNum );
	void TrackShotCount ( );
	unsigned char BestMode ( );
	struct FRotator AddSpread ( struct FRotator BaseAim );
	float GetFireInterval ( unsigned char FireModeNum );
	void eventReplicatedEvent ( struct FName VarName );
	void eventStopMuzzleFlash ( );
	void eventCauseMuzzleFlash ( );
	void eventCauseMuzzleFlashLight ( );
	void eventMuzzleFlashTimerRight ( );
	void eventMuzzleFlashTimerLeft ( );
	void eventMuzzleFlashOff ( int Index );
	void DetachMuzzleFlash ( );
	void AttachMuzzleFlash ( );
	void eventPostBeginPlay ( );
};

UClass* ATGMechaMeleeWeapon::pClassPointer = NULL;

// Class MechaGame.TGMechaWeap_LaserBlade
// 0x0000 (0x078C - 0x078C)
class ATGMechaWeap_LaserBlade : public ATGMechaMeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211856 ];

		return pClassPointer;
	};

	bool HasAnyAmmo ( );
	bool HasAmmo ( unsigned char FireModeNum, int Amount );
	void ConsumeAmmo ( unsigned char FireModeNum );
};

UClass* ATGMechaWeap_LaserBlade::pClassPointer = NULL;

// Class MechaGame.TGMechaDmgType_MachineGun
// 0x0000 (0x0620 - 0x0620)
class UTGMechaDmgType_MachineGun : public UTGMechaDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211860 ];

		return pClassPointer;
	};

};

UClass* UTGMechaDmgType_MachineGun::pClassPointer = NULL;

// Class MechaGame.TGMechaDmgType_PenetrativeCannon
// 0x0000 (0x0620 - 0x0620)
class UTGMechaDmgType_PenetrativeCannon : public UTGMechaDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211864 ];

		return pClassPointer;
	};

};

UClass* UTGMechaDmgType_PenetrativeCannon::pClassPointer = NULL;

// Class MechaGame.TGMechaWeap_PenetrativeCannon
// 0x0044 (0x07C0 - 0x077C)
class ATGMechaWeap_PenetrativeCannon : public ATGMechaAccurateGun
{
public:
	unsigned long                                      bHPFDetectorEnable : 1;                           		// 0x077C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DisperseBaseJumpingHPF;                           		// 0x0780 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DisperseBaseHPF;                                  		// 0x0784 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DisperseBaseFastMovingHPF;                        		// 0x0788 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DisperseModifierJumpingHPF;                       		// 0x078C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DisperseModifierHPF;                              		// 0x0790 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DisperseModifierFastMovingHPF;                    		// 0x0794 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DisperseBaseJumpingVerticalHPF;                   		// 0x0798 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DisperseBaseVerticalHPF;                          		// 0x079C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DisperseBaseFastMovingVerticalHPF;                		// 0x07A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DisperseModifierJumpingVerticalHPF;               		// 0x07A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DisperseModifierVerticalHPF;                      		// 0x07A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DisperseModifierFastMovingVerticalHPF;            		// 0x07AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  HudMaterial;                                      		// 0x07B0 (0x0004) [0x0000000000000000]              
	float                                              CrosshairSize;                                    		// 0x07B4 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLength;                              		// 0x07B8 (0x0004) [0x0000000000000000]              
	struct FColor                                      MiddlePointColor;                                 		// 0x07BC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211866 ];

		return pClassPointer;
	};

	void StartFire ( unsigned char FireModeNum );
	void ServerSpecialFire ( class ATGRealMecha* TargetMecha, struct FVectorNoCompress HitLocation, struct FVectorNoCompress HitDir, struct FTraceHitInfo HitInfo );
	void ServerFireAmmunition1P ( int ControllerP, int ControllerR, int ControllerY, int PunchAnglePitch, int PunchAngleYaw, struct FVectorNoCompress FireStartLocation, int DeltaPunchAnglePitch, float ClientTime, class APawn* DamagePawn, unsigned char WallNum, unsigned char HitGroup, int HitDamage, struct FVector HitLocation, struct FVector HitDir, struct FVectorNoCompress DamagePawnLoc, struct FName HitBoneName, struct FVector FireEndLocation, float SandCDis, struct FVectorNoCompress ClientForwardDirection );
	void SpecialFire ( class ATGRealMecha* TargetMecha );
	void SetFlashLocation ( struct FVector HitLocation );
	bool ServerFireAmmunition ( int ControllerP, int ControllerR, int ControllerY, int PunchAnglePitch, int PunchAngleYaw, struct FVectorNoCompress FireStartLocation, int DeltaPunchAnglePitch, float ClientTime, unsigned long HitAPawn, struct FVector FireEndLocation, struct FVectorNoCompress ClientForwardDirection, struct FVector HitLocationTemp0, struct FVector HitLocationTemp1, struct FVector HitLocationTemp2, struct FVector HitLocationTemp3, struct FVector HitLocationTemp4, struct FVector HitLocationTemp5 );
	void InstantFire ( );
	void FireAmmunition ( );
	struct FVector ModifyForWardDirection ( struct FRotator AimAngle );
};

UClass* ATGMechaWeap_PenetrativeCannon::pClassPointer = NULL;

// Class MechaGame.TGMechaDmgType_RocketLauncher
// 0x0008 (0x0628 - 0x0620)
class UTGMechaDmgType_RocketLauncher : public UTGMechaDamageType
{
public:
	float                                              FrozenDuration;                                   		// 0x0620 (0x0004) [0x0000000000000000]              
	float                                              FrozenVelocityScale;                              		// 0x0624 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211869 ];

		return pClassPointer;
	};

};

UClass* UTGMechaDmgType_RocketLauncher::pClassPointer = NULL;

// Class MechaGame.TGMechaDmgType_ShockCannon
// 0x0000 (0x0620 - 0x0620)
class UTGMechaDmgType_ShockCannon : public UTGMechaDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211875 ];

		return pClassPointer;
	};

};

UClass* UTGMechaDmgType_ShockCannon::pClassPointer = NULL;

// Class MechaGame.TGMechaWeap_ShockCannon
// 0x0008 (0x06E0 - 0x06D8)
class ATGMechaWeap_ShockCannon : public ATGMechaProjectiveWeapon
{
public:
	float                                              ShockDuration;                                    		// 0x06D8 (0x0004) [0x0000000000000000]              
	float                                              TouchExtent;                                      		// 0x06DC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211877 ];

		return pClassPointer;
	};

	void ServerStartFire ( unsigned char FireModeNum );
	void ConsumeAmmo ( unsigned char FireModeNum );
	void ServerStopFire ( unsigned char FireModeNum );
	void SetProjectileParms ( class ATGMechaProjectile** NewProj );
};

UClass* ATGMechaWeap_ShockCannon::pClassPointer = NULL;

// Class MechaGame.TGMechaDmgType_ShotGun
// 0x0000 (0x0620 - 0x0620)
class UTGMechaDmgType_ShotGun : public UTGMechaDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211880 ];

		return pClassPointer;
	};

};

UClass* UTGMechaDmgType_ShotGun::pClassPointer = NULL;

// Class MechaGame.TGMechaWeap_ShotGun
// 0x0010 (0x078C - 0x077C)
class ATGMechaWeap_ShotGun : public ATGMechaAccurateGun
{
public:
	int                                                m_iOneShotAmmoNum;                                		// 0x077C (0x0004) [0x0000000000000000]              
	unsigned long                                      ClipFireFlag : 1;                                 		// 0x0780 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              EquipRecordTime;                                  		// 0x0784 (0x0004) [0x0000000000000000]              
	float                                              CrossColorTurnBackInterval;                       		// 0x0788 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211882 ];

		return pClassPointer;
	};

	void TurnBackCrossHairColor ( );
	void InstantFire ( );
};

UClass* ATGMechaWeap_ShotGun::pClassPointer = NULL;

// Class MechaGame.TGMechaWeap_Skill_Blaster
// 0x0000 (0x06AC - 0x06AC)
class ATGMechaWeap_Skill_Blaster : public ATGMechaWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211886 ];

		return pClassPointer;
	};

};

UClass* ATGMechaWeap_Skill_Blaster::pClassPointer = NULL;

// Class MechaGame.TGMechaWeap_Skill_EnemyHit
// 0x0000 (0x06AC - 0x06AC)
class ATGMechaWeap_Skill_EnemyHit : public ATGMechaWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211890 ];

		return pClassPointer;
	};

};

UClass* ATGMechaWeap_Skill_EnemyHit::pClassPointer = NULL;

// Class MechaGame.TGMechaWeap_Skill_Trample
// 0x0000 (0x06AC - 0x06AC)
class ATGMechaWeap_Skill_Trample : public ATGMechaWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211894 ];

		return pClassPointer;
	};

};

UClass* ATGMechaWeap_Skill_Trample::pClassPointer = NULL;

// Class MechaGame.TGMechaWeap_Skill_Trap
// 0x0000 (0x06AC - 0x06AC)
class ATGMechaWeap_Skill_Trap : public ATGMechaWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211898 ];

		return pClassPointer;
	};

};

UClass* ATGMechaWeap_Skill_Trap::pClassPointer = NULL;

// Class MechaGame.TGMechaWeap_Thunder
// 0x0054 (0x07D0 - 0x077C)
class ATGMechaWeap_Thunder : public ATGMechaAccurateGun
{
public:
	float                                              CritDamageScale;                                  		// 0x077C (0x0004) [0x0000000000000000]              
	int                                                TimesHit;                                         		// 0x0780 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                TimesHitForCirt;                                  		// 0x0784 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CritBG;                                           		// 0x0788 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CritPoint;                                        		// 0x078C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         CirtBGCoords;                                     		// 0x0790 (0x0010) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FTextureCoordinates >               LeftCritPointCoords;                              		// 0x07A0 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FTextureCoordinates >               RightCritPointCoords;                             		// 0x07AC (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FVector2D >                         LeftCritPointOffset;                              		// 0x07B8 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FVector2D >                         RightCritPointOffset;                             		// 0x07C4 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 211903 ];

		return pClassPointer;
	};

	void DrawCritInfo ( class ATGHUD* HUD, int BaseOffsetX, int DynamicOffsetX );
	bool GunServerTakeDamage ( class APawn* DamageActor, unsigned char WallNum, unsigned char HitGroup, int HitDamage, struct FVector HitLocation, struct FVector HitDir, struct FVector DamagePawnLoc, struct FName HitBoneName, float SandCDis );
	void ServerFireAmmunition1P ( int ControllerP, int ControllerR, int ControllerY, int PunchAnglePitch, int PunchAngleYaw, struct FVectorNoCompress FireStartLocation, int DeltaPunchAnglePitch, float ClientTime, class APawn* DamagePawn, unsigned char WallNum, unsigned char HitGroup, int HitDamage, struct FVector HitLocation, struct FVector HitDir, struct FVectorNoCompress DamagePawnLoc, struct FName HitBoneName, struct FVector FireEndLocation, float SandCDis, struct FVectorNoCompress ClientForwardDirection );
	void SetFlashLocation ( struct FVector HitLocation );
	bool ServerFireAmmunition ( int ControllerP, int ControllerR, int ControllerY, int PunchAnglePitch, int PunchAngleYaw, struct FVectorNoCompress FireStartLocation, int DeltaPunchAnglePitch, float ClientTime, unsigned long HitAPawn, struct FVector FireEndLocation, struct FVectorNoCompress ClientForwardDirection, struct FVector HitLocationTemp0, struct FVector HitLocationTemp1, struct FVector HitLocationTemp2, struct FVector HitLocationTemp3, struct FVector HitLocationTemp4, struct FVector HitLocationTemp5 );
	void InstantFire ( );
	void FireAmmunition ( );
	struct FVector ModifyForWardDirection ( struct FRotator AimAngle );
};

UClass* ATGMechaWeap_Thunder::pClassPointer = NULL;

// Class MechaGame.TGMechaGameHUD_ProgressBar
// 0x0000 (0x0048 - 0x0048)
class UTGMechaGameHUD_ProgressBar : public UTGHUD_ProgressBar
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 212083 ];

		return pClassPointer;
	};

	void UpdateRespawnTimeBar ( );
};

UClass* UTGMechaGameHUD_ProgressBar::pClassPointer = NULL;

// Class MechaGame.TGMechaDMScoreBoard
// 0x0000 (0x0660 - 0x0660)
class UTGMechaDMScoreBoard : public UTGTeamHUDScoreBoard
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 212219 ];

		return pClassPointer;
	};

	void DrawItemText ( int PosX, int PosY, class ATGPlayerReplicationInfo* PRI, struct FColor* TextColor );
	void DrawItemTextSelf ( int PosX, int PosY, class ATGPlayerReplicationInfo* PRI, struct FColor* TextColor );
	void DrawScoreBoardBG ( );
};

UClass* UTGMechaDMScoreBoard::pClassPointer = NULL;

// Class MechaGame.TGMechaPlayerInventoryManager
// 0x0000 (0x022C - 0x022C)
class ATGMechaPlayerInventoryManager : public ATGInventoryManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 212274 ];

		return pClassPointer;
	};

	void AddAllFunctionalItem ( class ATGPlayerReplicationInfo* PRI );
};

UClass* ATGMechaPlayerInventoryManager::pClassPointer = NULL;

// Class MechaGame.TGMechaFactory
// 0x0024 (0x0304 - 0x02E0)
class ATGMechaFactory : public AMechaFactory
{
public:
	unsigned long                                      bPlayFireCameraShake : 1;                         		// 0x02E0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UCameraShake*                                FireCameraShake;                                  		// 0x02E4 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	float                                              FireCameraShakeScale;                             		// 0x02E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDrawSphereComponent*                        ShapeComponent;                                   		// 0x02EC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned char                                      TeamIndex;                                        		// 0x02F0 (0x0001) [0x0000000000000000]              
	unsigned char                                      MechaType;                                        		// 0x02F1 (0x0001) [0x0000000000000000]              
	TArray< struct FString >                           VehicleClassPathList;                             		// 0x02F4 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class ATGMechaPlayerStart*                         CurrentStartSpot;                                 		// 0x0300 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 212356 ];

		return pClassPointer;
	};

	struct FString GetVehicleClassPath ( );
	void GetSpawnPosition ( class UClass* MechaClass, struct FVector* SpawnLoc, struct FRotator* SpawnRot );
};

UClass* ATGMechaFactory::pClassPointer = NULL;

// Class MechaGame.TGMechaDMRoundMessage
// 0x0024 (0x0088 - 0x0064)
class UTGMechaDMRoundMessage : public UUTLocalMessage
{
public:
	struct FString                                     RoundStartAttacker;                               		// 0x0064 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RoundStartDefender;                               		// 0x0070 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RoundEndTransitionTip;                            		// 0x007C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 212646 ];

		return pClassPointer;
	};

	float GetPos ( int Switch, class AHUD* myHUD );
	int GetFontSize ( int Switch, class APlayerReplicationInfo* RelatedPRI1, class APlayerReplicationInfo* RelatedPRI2, class APlayerReplicationInfo* LocalPlayer );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGMechaDMRoundMessage::pClassPointer = NULL;

// Class MechaGame.TGMechaFactory_MTM
// 0x0000 (0x0304 - 0x0304)
class ATGMechaFactory_MTM : public ATGMechaFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 212859 ];

		return pClassPointer;
	};

};

UClass* ATGMechaFactory_MTM::pClassPointer = NULL;

// Class MechaGame.TGMechaHUD_Havok
// 0x0000 (0x0168 - 0x0168)
class UTGMechaHUD_Havok : public UTGRealMechaHUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 213056 ];

		return pClassPointer;
	};

};

UClass* UTGMechaHUD_Havok::pClassPointer = NULL;

// Class MechaGame.TGMechaHUD_HulkBuster
// 0x0000 (0x0168 - 0x0168)
class UTGMechaHUD_HulkBuster : public UTGRealMechaHUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 213058 ];

		return pClassPointer;
	};

	void eventDisplayWeaponBar ( class ATGHUD* HUD, class UCanvas* Canvas );
};

UClass* UTGMechaHUD_HulkBuster::pClassPointer = NULL;

// Class MechaGame.TGMechaHUD_Punisher
// 0x0000 (0x0168 - 0x0168)
class UTGMechaHUD_Punisher : public UTGRealMechaHUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 213072 ];

		return pClassPointer;
	};

};

UClass* UTGMechaHUD_Punisher::pClassPointer = NULL;

// Class MechaGame.TGMechaHUD_SpiderSence
// 0x0000 (0x0168 - 0x0168)
class UTGMechaHUD_SpiderSence : public UTGRealMechaHUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 213074 ];

		return pClassPointer;
	};

};

UClass* UTGMechaHUD_SpiderSence::pClassPointer = NULL;

// Class MechaGame.TGMechaHUD_TheOne
// 0x0000 (0x0168 - 0x0168)
class UTGMechaHUD_TheOne : public UTGRealMechaHUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 213076 ];

		return pClassPointer;
	};

};

UClass* UTGMechaHUD_TheOne::pClassPointer = NULL;

// Class MechaGame.TGMechaWeapAttachment_LaserBlade
// 0x0024 (0x03C4 - 0x03A0)
class ATGMechaWeapAttachment_LaserBlade : public ATGMechaWeaponAttachment
{
public:
	class UUTParticleSystemComponent*                  PSC_OnLaserBladeActiveEmitterR;                   		// 0x03A0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UUTParticleSystemComponent*                  PSC_OnLaserBladeActiveEmitterL;                   		// 0x03A4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             PSC_OnLaserBladeActiveEmitterTemplate;            		// 0x03A8 (0x0004) [0x0000000000000000]              
	struct FName                                       LaserBladeActiveSockName;                         		// 0x03AC (0x0008) [0x0000000000000000]              
	float                                              FirstAttackDecalRotation;                         		// 0x03B4 (0x0004) [0x0000000000000000]              
	float                                              SecondAttackDecalRotation;                        		// 0x03B8 (0x0004) [0x0000000000000000]              
	float                                              HeavyAttackDecalRotation;                         		// 0x03BC (0x0004) [0x0000000000000000]              
	float                                              CurrAttackDecalRotation;                          		// 0x03C0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 213254 ];

		return pClassPointer;
	};

	void PlayImpactEffects ( struct FVector HitLocation );
	void DetachFrom ( class USkeletalMeshComponent* MeshCpnt );
	void AttachToMecha ( class ATGRealMechaBase* AttachOwnerMecha );
	void DetachLaserBladeEffects ( );
	void AttachLaserBladeEffects ( );
};

UClass* ATGMechaWeapAttachment_LaserBlade::pClassPointer = NULL;

// Class MechaGame.TGMechaPickupMessage
// 0x000C (0x0070 - 0x0064)
class UTGMechaPickupMessage : public UUTLocalMessage
{
public:
	struct FString                                     RepairedMessage;                                  		// 0x0064 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 213417 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGMechaPickupMessage::pClassPointer = NULL;

// Class MechaGame.TGMechaProj_Tracer
// 0x0018 (0x0254 - 0x023C)
class ATGMechaProj_Tracer : public ATGMechaProj_TracerBase
{
public:
	float                                              AccelRate;                                        		// 0x023C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPrimitiveComponent*                         Mesh;                                             		// 0x0240 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              MeshScaleUpTime;                                  		// 0x0244 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeshScaleDownTime;                                		// 0x0248 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bScaledUp : 1;                                    		// 0x024C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bScalingDown : 1;                                 		// 0x024C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              CurScale;                                         		// 0x0250 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 213717 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void ScaleUpFinishedNotify ( );
	void ScaleDownFinishedNotify ( );
	void SpawnImpactEffect ( struct FVector HitLocation, struct FVector HitNormal );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void KillProjectile ( );
	void Init ( struct FVector Direction );
	void CalcTraceAccel ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGMechaProj_Tracer::pClassPointer = NULL;

// Class MechaGame.TGMechaProj_BulletTracer
// 0x0010 (0x0264 - 0x0254)
class ATGMechaProj_BulletTracer : public ATGMechaProj_Tracer
{
public:
	struct FVector                                     DestinationLoc;                                   		// 0x0254 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bAllowTracersMovingFromTarget : 1;                		// 0x0260 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 213747 ];

		return pClassPointer;
	};

	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventOutsideWorldBounds ( );
	void ScaleUpFinishedNotify ( );
	void ScaleDownFinishedNotify ( );
	void KillProjectile ( );
	void Tick ( float DeltaTime );
	void WakeProjectile ( );
	void Reset ( );
	void Recycle ( );
	void InitTracer ( struct FVector Start, struct FVector End );
};

UClass* ATGMechaProj_BulletTracer::pClassPointer = NULL;

// Class MechaGame.TGMechaProj_FlameBeam
// 0x0120 (0x02F4 - 0x01D4)
class ATGMechaProj_FlameBeam : public AActor
{
public:
	float                                              PreWarmupTimeSec;                                 		// 0x01D4 (0x0004) [0x0000000000004021]              ( CPF_Edit | CPF_Net | CPF_Config )
	float                                              WarmupTimeSec;                                    		// 0x01D8 (0x0004) [0x0000000000004021]              ( CPF_Edit | CPF_Net | CPF_Config )
	float                                              CooldownTimeSec;                                  		// 0x01DC (0x0004) [0x0000000000004021]              ( CPF_Edit | CPF_Net | CPF_Config )
	float                                              FireDurationSec;                                  		// 0x01E0 (0x0004) [0x0000000000004021]              ( CPF_Edit | CPF_Net | CPF_Config )
	float                                              BaseDamagePerSecond;                              		// 0x01E4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	class UGameExplosion*                              InitialExplosionTemplate;                         		// 0x01E8 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	float                                              InitialSplashDamage;                              		// 0x01EC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              InitialSplashDamageRadius;                        		// 0x01F0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              InitialSplashDamageFalloff;                       		// 0x01F4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              InitialSplashDamageMomemtum;                      		// 0x01F8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              BaseDamageRadius;                                 		// 0x01FC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      bZeroExtentBeam : 1;                              		// 0x0200 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHurtBelowBeam : 1;                               		// 0x0200 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bActuallyFiring : 1;                              		// 0x0200 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bWarmedUp : 1;                                    		// 0x0200 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bOkToFire : 1;                                    		// 0x0200 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bAutoFire : 1;                                    		// 0x0200 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      bBeamLightFadingAway : 1;                         		// 0x0200 (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	unsigned long                                      bOXMHack : 1;                                     		// 0x0200 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bDrawDamageCylinder : 1;                          		// 0x0200 (0x0004) [0x0000000000004000] [0x00000100] ( CPF_Config )
	unsigned long                                      bImpactTrailIntact : 1;                           		// 0x0200 (0x0004) [0x0000000000002000] [0x00000200] ( CPF_Transient )
	unsigned long                                      bSpecialHitLogic : 1;                             		// 0x0200 (0x0004) [0x0000000000000000] [0x00000400] 
	float                                              MaxBeamScale;                                     		// 0x0204 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurBeamScale;                                     		// 0x0208 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    PSC_MainBeam;                                     		// 0x020C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             PS_TendrilBeam;                                   		// 0x0210 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PS_TendrilImpact;                                 		// 0x0214 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumWarmupTendrils;                                		// 0x0218 (0x0004) [0x0000000000004021]              ( CPF_Edit | CPF_Net | CPF_Config )
	float                                              TendrilInitialRadius;                             		// 0x021C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct ATGMechaProj_FlameBeam_FTendrilBeam > TendrilBeams;                                     		// 0x0220 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              WarmupEffectsStartedTime;                         		// 0x022C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USoundCue*                                   BeamLaunchSound;                                  		// 0x0230 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   BeamEndSound;                                     		// 0x0234 (0x0004) [0x0000000000000000]              
	class UPointLightComponent*                        BeamLight;                                        		// 0x0238 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              BeamLightFadeRate;                                		// 0x023C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FScreenShakeStruct                          HODCamShake;                                      		// 0x0240 (0x0078) [0x0000000000000001]              ( CPF_Edit )
	float                                              HODCamShakeOuterRadius;                           		// 0x02B8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              HODCamShakeInnerRadius;                           		// 0x02BC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UParticleSystem*                             PS_GroundDamage;                                  		// 0x02C0 (0x0004) [0x0000000000000000]              
	float                                              ImpactEmitterSpawnRate_OXMHACK;                   		// 0x02C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinEmitterSpawnRate_OXMHACK;                      		// 0x02C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LeftOverSpawnTime_OXMHACK;                        		// 0x02CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      BeamDamageType;                                   		// 0x02D0 (0x0004) [0x0000000000000000]              
	float                                              TimeUntilNextFractureCheck;                       		// 0x02D4 (0x0004) [0x0000000000000000]              
	float                                              DragFractureRadius;                               		// 0x02D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DragFracturePartVel;                              		// 0x02DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      bDoInitialExplosionEffect;                        		// 0x02E0 (0x0001) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     DirectionToDeathRayOriginNorm;                    		// 0x02E4 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class ATGMechaWeap_Flame*                          LauncherWeap;                                     		// 0x02F0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 213774 ];

		return pClassPointer;
	};

	void HurtBeam ( float BaseDamage, struct FVector CylinderEndPt1, struct FVector CylinderEndPt2, float CylinderRadius, class UClass* DamageType );
	bool IsWarmingUp ( );
	void Destroyed ( );
	void DoHODFireEffects ( );
	void NotifyWarmupFinished ( );
	bool IsReadyToFire ( );
	void DoInitialExplosion ( );
	bool Fire ( );
	float DoHODCooldownEffects ( );
	void NotifyFireFinished ( );
	void BeginWarmup ( struct FVector TargetLoc, unsigned long bShouldAutoFire );
	void DoHODWarmupEffects ( );
	void SpawnTendrilBeam ( int BeamIdx );
	void ActivateTendrilBeam ( int BeamIdx );
	void DestroyTendrilBeams ( );
	void NotifyPreWarmupFinished ( );
	void DoNearbyActorEffects ( );
	void Tick ( float DeltaTime );
	float TimeSince ( float Time );
	float GetBeamLength ( );
	struct FVector GetBeamDirection ( );
	void StickToGround ( struct FVector* HitNormal, class AActor** HitActor );
	void FindGround ( struct FVector BaseLoc, float TraceDist, struct FVector* HitLocation, struct FVector* HitNormal, class AActor** HitActor );
	void Init ( class APawn* ShotInstigator );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGMechaProj_FlameBeam::pClassPointer = NULL;

// Class MechaGame.TGMechaWeap_Flame
// 0x0090 (0x073C - 0x06AC)
class ATGMechaWeap_Flame : public ATGMechaWeapon
{
public:
	struct FVector                                     InitTargetLoc;                                    		// 0x06AC (0x000C) [0x0000000000000000]              
	class USoundCue*                                   BombPlantedSnd;                                   		// 0x06B8 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ClickBombSnd;                                     		// 0x06BC (0x0004) [0x0000000000000000]              
	class USoundCue*                                   PlantErrorSnd;                                    		// 0x06C0 (0x0004) [0x0000000000000000]              
	float                                              PlantTime;                                        		// 0x06C4 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    PSC_LockFireAtSpotEmitter;                        		// 0x06C8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             PS_LockFireAtSpotTemplate;                        		// 0x06CC (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          LockFireAtSpotDecal;                              		// 0x06D0 (0x0004) [0x0000000000000000]              
	float                                              LockDecalWidth;                                   		// 0x06D4 (0x0004) [0x0000000000000000]              
	float                                              LockDecalHeight;                                  		// 0x06D8 (0x0004) [0x0000000000000000]              
	class APVEDecalActorMovable*                       LockDecalActor;                                   		// 0x06DC (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    PSC_ScanFireAtSpotEmitter;                        		// 0x06E0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             PS_ScanFireAtSpotTemplate;                        		// 0x06E4 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          ScanFireAtSpotDecal;                              		// 0x06E8 (0x0004) [0x0000000000000000]              
	float                                              ScanDecalWidth;                                   		// 0x06EC (0x0004) [0x0000000000000000]              
	float                                              ScanDecalHeight;                                  		// 0x06F0 (0x0004) [0x0000000000000000]              
	class APVEDecalActorMovable*                       ScanDecalActor;                                   		// 0x06F4 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  UnableFireCrosshairImage;                         		// 0x06F8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bStartSeekingFirePosition : 1;                    		// 0x06FC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlantedToFire : 1;                               		// 0x06FC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPlayingOpenMovie : 1;                            		// 0x06FC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHaveCancelCalling : 1;                           		// 0x06FC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bMovementDisabled : 1;                            		// 0x06FC (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bPawnRotationLocked : 1;                          		// 0x06FC (0x0004) [0x0000000000000000] [0x00000020] 
	class UClass*                                      BeamClass;                                        		// 0x0700 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class ATGMechaProj_FlameBeam*                      ActiveBeam;                                       		// 0x0704 (0x0004) [0x0000000000000000]              
	float                                              WeaponOpenIdleToSeekInterval;                     		// 0x0708 (0x0004) [0x0000000000000000]              
	float                                              WeaponSeekToOpenInterval;                         		// 0x070C (0x0004) [0x0000000000000000]              
	float                                              WeaponTrueCallInterval;                           		// 0x0710 (0x0004) [0x0000000000000000]              
	float                                              WeaponNotifyFireInterval;                         		// 0x0714 (0x0004) [0x0000000000000000]              
	struct FName                                       ScannerSockName;                                  		// 0x0718 (0x0008) [0x0000000000000000]              
	float                                              PlantMaxZ;                                        		// 0x0720 (0x0004) [0x0000000000000000]              
	float                                              PlantableFloorZ;                                  		// 0x0724 (0x0004) [0x0000000000000000]              
	float                                              PlantMaxDistFromAim;                              		// 0x0728 (0x0004) [0x0000000000000000]              
	float                                              EnergyStoringDuration;                            		// 0x072C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   FireLoadingSound;                                 		// 0x0730 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UAudioComponent*                             AC_FireLoading;                                   		// 0x0734 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class USoundCue*                                   WeaponTargetLockedSnd;                            		// 0x0738 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 213779 ];

		return pClassPointer;
	};

	void ChangeVisibility ( unsigned long bIsVisible );
	void SetLockPawnRotation ( unsigned long bLock );
	void SetMovementLock ( unsigned long bEnable );
	void KillLocationPS ( unsigned long bKill );
	void ActivateFireAtSpotPS ( unsigned long bCanFire, unsigned long bLock, class AActor* AimActor, struct FVector AimSpot, struct FVector AimSpotNormal, struct FVector FireAtSpot, struct FVector FireAtSpotNormal );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	bool TestCanFire ( class AActor** AimActor, struct FVector* AimSpot, struct FVector* AimNormal, struct FVector* FireSpot, struct FVector* FireSpotNormal );
	void CustomFire ( );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	void NotifyBeamFireFinished ( );
	void ClientPlantBeam ( );
	void PlayBombPlantEffect ( );
	void PlayStartPlantingEffect ( );
	void ReBombCheckTimer ( );
	void TimePlanting ( );
	void EndPlanting ( );
	bool IsPlanting ( );
	void eventPostBeginPlay ( );
};

UClass* ATGMechaWeap_Flame::pClassPointer = NULL;

// Class MechaGame.TGMechaProj_FrostMissile
// 0x0008 (0x02F4 - 0x02EC)
class ATGMechaProj_FrostMissile : public ATGMechaProjectile
{
public:
	float                                              FrozenDuration;                                   		// 0x02EC (0x0004) [0x0000000000000000]              
	float                                              FrozenVelocityScale;                              		// 0x02F0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 213927 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
};

UClass* ATGMechaProj_FrostMissile::pClassPointer = NULL;

// Class MechaGame.TGMechaProj_Grenade
// 0x0008 (0x02F4 - 0x02EC)
class ATGMechaProj_Grenade : public ATGMechaProjectile
{
public:
	unsigned long                                      bReachToMax : 1;                                  		// 0x02EC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHitWallIgnoreReachToMax : 1;                     		// 0x02EC (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              RealMaxSpeed;                                     		// 0x02F0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 213937 ];

		return pClassPointer;
	};

	void PhysicsVolumeChange ( class APhysicsVolume* NewVolume );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void Timer ( );
	void Init ( struct FVector Direction );
	void PostBeginPlay ( );
};

UClass* ATGMechaProj_Grenade::pClassPointer = NULL;

// Class MechaGame.TGMechaProj_FrozenShell
// 0x0014 (0x0308 - 0x02F4)
class ATGMechaProj_FrozenShell : public ATGMechaProj_Grenade
{
public:
	float                                              WallBounceRate;                                   		// 0x02F4 (0x0004) [0x0000000000000000]              
	float                                              GroundBounceRate;                                 		// 0x02F8 (0x0004) [0x0000000000000000]              
	float                                              PawnBounceRate;                                   		// 0x02FC (0x0004) [0x0000000000000000]              
	float                                              FrozenDuration;                                   		// 0x0300 (0x0004) [0x0000000000000000]              
	float                                              FrozenVelocityScale;                              		// 0x0304 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 213953 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void Init ( struct FVector Direction );
	void PostBeginPlay ( );
};

UClass* ATGMechaProj_FrozenShell::pClassPointer = NULL;

// Class MechaGame.TGMechaProj_ShockShell
// 0x0008 (0x02F4 - 0x02EC)
class ATGMechaProj_ShockShell : public ATGMechaProjectile
{
public:
	float                                              ShockDuration;                                    		// 0x02EC (0x0004) [0x0000000000000000]              
	float                                              TouchExtent;                                      		// 0x02F0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 213993 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGMechaProj_ShockShell::pClassPointer = NULL;

// Class MechaGame.TGMechaProj_Thunder
// 0x000C (0x02F8 - 0x02EC)
class ATGMechaProj_Thunder : public ATGMechaProjectile
{
public:
	float                                              FrozenDuration;                                   		// 0x02EC (0x0004) [0x0000000000000000]              
	float                                              FrozenVelocityScale;                              		// 0x02F0 (0x0004) [0x0000000000000000]              
	class ATGMechaWeap_Thunder*                        InsigatorWeapon;                                  		// 0x02F4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 214015 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ATGMechaProj_Thunder::pClassPointer = NULL;

// Class MechaGame.TGMechaProjWeapAttachment
// 0x0048 (0x03E8 - 0x03A0)
class ATGMechaProjWeapAttachment : public ATGMechaWeaponAttachment
{
public:
	TArray< struct FName >                             MuzzleFlashSocketList;                            		// 0x03A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UUDKExplosionLight* >                MuzzleFlashLightList;                             		// 0x03AC (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UUDKExplosionLight* >                MuzzleFlashLightList2;                            		// 0x03B8 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UParticleSystemComponent* >          MuzzleFlashPSCList;                               		// 0x03C4 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UParticleSystemComponent* >          MuzzleFlashPSCList2;                              		// 0x03D0 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	struct FName                                       CurrEffectSocket;                                 		// 0x03DC (0x0008) [0x0000000000000000]              
	int                                                CurrEffectIndex;                                  		// 0x03E4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 214057 ];

		return pClassPointer;
	};

	void PlayImpactEffects ( struct FVector HitLocation );
	TArray< struct FMechaAeroProjFireInfo > GetAllProjFireInfo ( );
	struct FVector GetPhysicalFireStartLoc ( int Index );
	void PlayMechaProjWeaponFireAnim ( struct FReplicatedEffectsInfo InProjWeapEffectsInfo );
	void ProjWeapCauseMuzzleFlash ( struct FReplicatedEffectsInfo RepEffectsInfo );
	void ThirdPersonProjFireEffects ( struct FReplicatedEffectsInfo InProjWeapEffectsInfo );
	void DetachMuzzleFlash ( );
	void AttachMuzzleFlash ( );
};

UClass* ATGMechaProjWeapAttachment::pClassPointer = NULL;

// Class MechaGame.TGMechaShip
// 0x0088 (0x025C - 0x01D4)
class ATGMechaShip : public AActor
{
public:
	float                                              DamageInterval;                                   		// 0x01D4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DamagePerSec;                                     		// 0x01D8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DamageIncPct;                                     		// 0x01DC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                DamageIncMaxTimes;                                		// 0x01E0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                DamageIncKillCount;                               		// 0x01E4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              HealInterval;                                     		// 0x01E8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              HealPerSec;                                       		// 0x01EC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              HealRadius;                                       		// 0x01F0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FVector                                     HealCenterTrans;                                  		// 0x01F4 (0x000C) [0x0000000000004000]              ( CPF_Config )
	float                                              StartMovingDelay;                                 		// 0x0200 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MoveSpeed;                                        		// 0x0204 (0x0004) [0x0000000000000000]              
	unsigned char                                      TeamIndex;                                        		// 0x0208 (0x0001) [0x0000000000000000]              
	class UStaticMeshComponent*                        StaticMeshComponent;                              		// 0x020C (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	class AMechaDestructibleItem*                      InitTarget;                                       		// 0x0210 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ATGMechaWayPoint*                            InitPoint;                                        		// 0x0214 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ATGMechaWayPoint*                            CurrentPoint;                                     		// 0x0218 (0x0004) [0x0000000000000000]              
	class UDrawSphereComponent*                        DebugAreaComponent;                               		// 0x021C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bDrawDebug : 1;                                   		// 0x0220 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bStartMove : 1;                                   		// 0x0220 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	class AMechaDestructibleItem*                      CurrentTarget;                                    		// 0x0224 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class AUTEmitter*                                  EndPointEmitter;                                  		// 0x0228 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             EndPointPS;                                       		// 0x022C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             AttackPS;                                         		// 0x0230 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystemComponent*                    AttackPSC;                                        		// 0x0234 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       EndPointParamName;                                		// 0x0238 (0x0008) [0x0000000000000000]              
	struct FVector                                     AttackEffectStartOffset;                          		// 0x0240 (0x000C) [0x0000000000000000]              
	struct FVector                                     AttackEffectEndOffset;                            		// 0x024C (0x000C) [0x0000000000000000]              
	int                                                AttackCount;                                      		// 0x0258 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 214262 ];

		return pClassPointer;
	};

	void HideAttackEffect ( );
	void PlayAttackEffect ( );
	void OnAttackNotification ( );
	void NotifyAttack ( );
	void eventTick ( float DeltaTime );
	unsigned char eventScriptGetTeamNum ( );
	void SetAttackTarget ( unsigned long bAttack );
	void SetTarget ( class AMechaDestructibleItem* Item );
	void UpdateTarget ( );
	int GetDamage ( );
	void TimerDamage ( );
	void TimerHeal ( );
	void SetMove ( unsigned long bMove );
	void Reset ( );
	bool SetupMovement ( );
	void Initialize ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGMechaShip::pClassPointer = NULL;

// Class MechaGame.TGMechaWayPoint
// 0x000C (0x01E0 - 0x01D4)
class ATGMechaWayPoint : public AActor
{
public:
	class ATGMechaWayPoint*                            NextPoint;                                        		// 0x01D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeReachNextPoint;                               		// 0x01D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bStopWhenArrived : 1;                             		// 0x01DC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAttackWhenStopped : 1;                           		// 0x01DC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 214276 ];

		return pClassPointer;
	};

};

UClass* ATGMechaWayPoint::pClassPointer = NULL;

// Class MechaGame.TGMechaTeamMatch
// 0x0000 (0x0738 - 0x0738)
class ATGMechaTeamMatch : public AMechaGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 214362 ];

		return pClassPointer;
	};

	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	class APawn* SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot );
	void RestartPlayer ( class AController* NewPlayer );
	void eventAddInventoryFor ( class APawn* PlayerPawn );
	void StartMatch ( );
	void eventUpdateGameSpecificSettings ( struct FGameSpecificSettings Settings );
};

UClass* ATGMechaTeamMatch::pClassPointer = NULL;

// Class MechaGame.TGMechaTMPlayerController
// 0x0000 (0x0A84 - 0x0A84)
class ATGMechaTMPlayerController : public ATGMechaGamePlayerController
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 214371 ];

		return pClassPointer;
	};

	void UseXPSkill ( );
};

UClass* ATGMechaTMPlayerController::pClassPointer = NULL;

// Class MechaGame.TGMechaTMPawn
// 0x0000 (0x1100 - 0x1100)
class ATGMechaTMPawn : public ATGMechaGamePawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 214384 ];

		return pClassPointer;
	};

};

UClass* ATGMechaTMPawn::pClassPointer = NULL;

// Class MechaGame.TGMechaTMPlayerReplicationInfo
// 0x0000 (0x1020 - 0x1020)
class ATGMechaTMPlayerReplicationInfo : public ATGMechaPlayerReplicationInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 214385 ];

		return pClassPointer;
	};

};

UClass* ATGMechaTMPlayerReplicationInfo::pClassPointer = NULL;

// Class MechaGame.TGMechaTMGameReplicationInfo
// 0x0000 (0x034C - 0x034C)
class ATGMechaTMGameReplicationInfo : public AMechaGameReplicationInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 214386 ];

		return pClassPointer;
	};

	void ProcessCharacterData ( class ATGPlayerReplicationInfo* PRI, unsigned long bTeamChange );
	void BeginProcessCharacterData ( class ATGPlayerReplicationInfo* PRI, unsigned long bTeamChange );
	void StartProcessingCharacterData ( );
};

UClass* ATGMechaTMGameReplicationInfo::pClassPointer = NULL;

// Class MechaGame.TGMechaTMHUD
// 0x0000 (0x225C - 0x225C)
class ATGMechaTMHUD : public ATGMechaGameHUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 214395 ];

		return pClassPointer;
	};

};

UClass* ATGMechaTMHUD::pClassPointer = NULL;

// Class MechaGame.TGMechaWeapAttachment_Electrowelding
// 0x001C (0x03BC - 0x03A0)
class ATGMechaWeapAttachment_Electrowelding : public ATGMechaWeaponAttachment
{
public:
	class UUTParticleSystemComponent*                  PSC_OnFixingEmitter;                              		// 0x03A0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             PSC_OnFixingEmitterTemplate;                      		// 0x03A4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFixingTarget : 1;                                		// 0x03A8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       FixingEffectSocketName;                           		// 0x03AC (0x0008) [0x0000000000000000]              
	struct FName                                       OnFixingPointParmName;                            		// 0x03B4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 214619 ];

		return pClassPointer;
	};

	void PlayImpactEffects ( struct FVector HitLocation );
	void eventTick ( float DeltaTime );
	void PlayReplicatedEffects ( struct FName VarName );
	void SetFixingMechaEffect ( );
	void PlayFixingMechaEffect ( );
	void AttachToMecha ( class ATGRealMechaBase* AttachOwnerMecha );
	void eventPostBeginPlay ( );
};

UClass* ATGMechaWeapAttachment_Electrowelding::pClassPointer = NULL;

// Class MechaGame.TGMechaWeapAttachment_Aerogun
// 0x0000 (0x03E8 - 0x03E8)
class ATGMechaWeapAttachment_Aerogun : public ATGMechaProjWeapAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 215677 ];

		return pClassPointer;
	};

	TArray< struct FMechaAeroProjFireInfo > GetAllProjFireInfo ( );
	void ProjWeapCauseMuzzleFlash ( struct FReplicatedEffectsInfo RepEffectsInfo );
};

UClass* ATGMechaWeapAttachment_Aerogun::pClassPointer = NULL;

// Class MechaGame.TGMechaWeapAttachment_Flame
// 0x0000 (0x03A0 - 0x03A0)
class ATGMechaWeapAttachment_Flame : public ATGMechaWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 215727 ];

		return pClassPointer;
	};

};

UClass* ATGMechaWeapAttachment_Flame::pClassPointer = NULL;

// Class MechaGame.TGMechaWeapAttachment_FlameThrower
// 0x0008 (0x03A8 - 0x03A0)
class ATGMechaWeapAttachment_FlameThrower : public ATGMechaWeaponAttachment
{
public:
	class USoundCue*                                   FiringLoopSound;                                  		// 0x03A0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UAudioComponent*                             AC_Firing;                                        		// 0x03A4 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 215733 ];

		return pClassPointer;
	};

	void CauseFlashEffect ( unsigned long bBeginSprayFlame );
	class UAudioComponent* TGAttachmentSoundLocalEx ( class USoundCue* Sound, class USoundCue* AltLocalSound, class UAudioComponent* AC, float FadeInTime, unsigned long bAllowSpatialization );
	void ThirdPersonFireEffects ( struct FVector HitLocation );
	void AttachToMecha ( class ATGRealMechaBase* AttachOwnerMecha );
};

UClass* ATGMechaWeapAttachment_FlameThrower::pClassPointer = NULL;

// Class MechaGame.TGMechaWeapAttachment_FrozenGrenade
// 0x0000 (0x03E8 - 0x03E8)
class ATGMechaWeapAttachment_FrozenGrenade : public ATGMechaProjWeapAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 215757 ];

		return pClassPointer;
	};

};

UClass* ATGMechaWeapAttachment_FrozenGrenade::pClassPointer = NULL;

// Class MechaGame.TGMechaWeapAttachment_Howitzer
// 0x0000 (0x03E8 - 0x03E8)
class ATGMechaWeapAttachment_Howitzer : public ATGMechaProjWeapAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 215763 ];

		return pClassPointer;
	};

};

UClass* ATGMechaWeapAttachment_Howitzer::pClassPointer = NULL;

// Class MechaGame.TGMechaWeapAttachment_HPFDetector
// 0x0000 (0x03A0 - 0x03A0)
class ATGMechaWeapAttachment_HPFDetector : public ATGMechaWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 215769 ];

		return pClassPointer;
	};

	void DetachFrom ( class USkeletalMeshComponent* MeshCpnt );
};

UClass* ATGMechaWeapAttachment_HPFDetector::pClassPointer = NULL;

// Class MechaGame.TGMechaWeapAttachment_MachineGun
// 0x0000 (0x03A0 - 0x03A0)
class ATGMechaWeapAttachment_MachineGun : public ATGMechaWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 215809 ];

		return pClassPointer;
	};

	struct FMaterialImpactEffect GetImpactEffect ( class UPhysicalMaterial* HitMaterial );
};

UClass* ATGMechaWeapAttachment_MachineGun::pClassPointer = NULL;

// Class MechaGame.TGMechaWeapAttachment_PenetrativeCannon
// 0x0018 (0x03B8 - 0x03A0)
class ATGMechaWeapAttachment_PenetrativeCannon : public ATGMechaWeaponAttachment
{
public:
	class ATGRealMecha*                                LockingMecha;                                     		// 0x03A0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLocking : 1;                                     		// 0x03A4 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       LockingPointParmName;                             		// 0x03A8 (0x0008) [0x0000000000000000]              
	class UUTParticleSystemComponent*                  PSC_OnLockingEmitter;                             		// 0x03B0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             PSC_OnLockingEmitterTemplate;                     		// 0x03B4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 215818 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
	void PlayReplicatedEffects ( struct FName VarName );
	void PlayLockingMechaEffect ( );
	void PlayImpactEffects ( struct FVector HitLocation );
	struct FMaterialImpactEffect GetImpactEffect ( class UPhysicalMaterial* HitMaterial );
	void SpawnTracerEffect ( struct FVector HitLocation );
	void eventPostBeginPlay ( );
};

UClass* ATGMechaWeapAttachment_PenetrativeCannon::pClassPointer = NULL;

// Class MechaGame.TGMechaWeapAttachment_RocketLauncher
// 0x0000 (0x03E8 - 0x03E8)
class ATGMechaWeapAttachment_RocketLauncher : public ATGMechaProjWeapAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 215848 ];

		return pClassPointer;
	};

};

UClass* ATGMechaWeapAttachment_RocketLauncher::pClassPointer = NULL;

// Class MechaGame.TGMechaWeapAttachment_ShockCannon
// 0x0008 (0x03F0 - 0x03E8)
class ATGMechaWeapAttachment_ShockCannon : public ATGMechaProjWeapAttachment
{
public:
	struct FName                                       StartLocSocketName;                               		// 0x03E8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 215854 ];

		return pClassPointer;
	};

	void ProjWeapCauseMuzzleFlash ( struct FReplicatedEffectsInfo RepEffectsInfo );
	void AttachMuzzleFlash ( );
	struct FVector GetPhysicalFireStartLoc ( int Index );
};

UClass* ATGMechaWeapAttachment_ShockCannon::pClassPointer = NULL;

// Class MechaGame.TGMechaWeapAttachment_ShotGun
// 0x0000 (0x03A0 - 0x03A0)
class ATGMechaWeapAttachment_ShotGun : public ATGMechaWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 215869 ];

		return pClassPointer;
	};

};

UClass* ATGMechaWeapAttachment_ShotGun::pClassPointer = NULL;

// Class MechaGame.TGSeqAct_Bombing
// 0x0004 (0x00EC - 0x00E8)
class UTGSeqAct_Bombing : public USequenceAction
{
public:
	float                                              DamageHealthPercent;                              		// 0x00E8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 215925 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UTGSeqAct_Bombing::pClassPointer = NULL;

// Class MechaGame.TGSeqAct_ResetAllPlayers
// 0x0000 (0x00E8 - 0x00E8)
class UTGSeqAct_ResetAllPlayers : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 215930 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UTGSeqAct_ResetAllPlayers::pClassPointer = NULL;

// Class MechaGame.TGSeqAct_SetKeyTarget
// 0x0008 (0x00F0 - 0x00E8)
class UTGSeqAct_SetKeyTarget : public USequenceAction
{
public:
	class AMechaDestructibleItem*                      Target;                                           		// 0x00E8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bKeyItem : 1;                                     		// 0x00EC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 215934 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UTGSeqAct_SetKeyTarget::pClassPointer = NULL;

// Class MechaGame.TGSeqAct_SetMechaMaxFlyHeight
// 0x0004 (0x00EC - 0x00E8)
class UTGSeqAct_SetMechaMaxFlyHeight : public USequenceAction
{
public:
	float                                              MaxFlyHeight;                                     		// 0x00E8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 215939 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UTGSeqAct_SetMechaMaxFlyHeight::pClassPointer = NULL;

// Class MechaGame.TGSeqAct_SetStopCountDown
// 0x0004 (0x00EC - 0x00E8)
class UTGSeqAct_SetStopCountDown : public USequenceAction
{
public:
	unsigned long                                      bStopCountDown : 1;                               		// 0x00E8 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 215944 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UTGSeqAct_SetStopCountDown::pClassPointer = NULL;

// Class MechaGame.TGSeqAct_SetTarget
// 0x0008 (0x00F0 - 0x00E8)
class UTGSeqAct_SetTarget : public USequenceAction
{
public:
	class AMechaDestructibleItem*                      Target;                                           		// 0x00E8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnabled : 1;                                     		// 0x00EC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 215949 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UTGSeqAct_SetTarget::pClassPointer = NULL;

// Class MechaGame.TGSeqAct_SetupPlayerStart
// 0x0004 (0x00EC - 0x00E8)
class UTGSeqAct_SetupPlayerStart : public USequenceAction
{
public:
	int                                                PhaseType;                                        		// 0x00E8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 215955 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UTGSeqAct_SetupPlayerStart::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif