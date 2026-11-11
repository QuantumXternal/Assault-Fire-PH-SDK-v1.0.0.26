/*
#############################################################################################
# Assault Fire (1.0.0.26) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TGBioGame_classes.h
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

#define CONST_NEEDLOADFLAG_FirstPersonArms1Mesh                  0x00001
#define CONST_NEEDLOADFLAG_FirstPersonArms2Mesh                  0x00002
#define CONST_NEEDLOADFLAG_FirstPersonForeArmsMesh               0x00004
#define CONST_NEEDLOADFLAG_FirstPersonWeaponL                    0x00008
#define CONST_NEEDLOADFLAG_FirstPersonWeaponR                    0x00010
#define CONST_NEEDLOADFLAG_ThirdPersonMesh                       0x00020
#define CONST_NEEDLOADFLAG_ThirdPersonAnimTree                   0x00040
#define CONST_NEEDLOADFLAG_ThirdPersonAnimSet                    0x00080
#define CONST_NEEDLOADFLAG_ThirdPersonPhysAsset                  0x00100
#define CONST_NEEDLOADFLAG_ThirdPersonWeaponL                    0x00200
#define CONST_NEEDLOADFLAG_ThirdPersonWeaponR                    0x00400
#define CONST_NEEDLOADFLAG_ThirdPersonLevelMaterial              0x00800
#define CONST_NEEDLOADFLAG_FirstPersonLevelMaterial              0x01000
#define CONST_NEEDLOADFLAG_SERVER                                0x001E0
#define CONST_NEEDLOADFLAG_CURRENT_MAX                           0x7FFFF
#define CONST_NEEDLOADFLAG_MAX                                   0xFFFFFFFF
#define CONST_ZOMBIE_WEAPON_MAX_LEVEL                            3

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum TGBioGame.TGBioType.EZombieChangeType
/*enum EZombieChangeType
{
	ZombieChangeType_GeneralTurn                       = 0,
	ZombieChangeType_infection                         = 1,
	ZombieChangeType_Dead                              = 2,
	ZombieChangeType_LevelUp                           = 3,
	ZombieChangeType_None                              = 4,
	ZombieChangeType_MAX                               = 5
};*/

// Enum TGBioGame.TGBioType.EZombieType
/*enum EZombieType
{
	ZombieType_Hulk                                    = 0,
	ZombieType_GhostNinja                              = 1,
	ZombieType_Butcher                                 = 2,
	ZombieType_Invisible                               = 3,
	ZombieType_Terminator                              = 4,
	ZombieType_Bio3Smoker                              = 5,
	ZombieType_Bio3Hunter                              = 6,
	ZombieType_Bio3Invisible                           = 7,
	ZombieType_None                                    = 8,
	ZombieType_MAX                                     = 9
};*/

// Enum TGBioGame.TGBioType.ECustomPlayAnim
/*enum ECustomPlayAnim
{
	CustomPlayAnim_Evolution                           = 0,
	CustomPlayAnim_Angry                               = 1,
	CustomPlayAnim_MAX                                 = 2
};*/

// Enum TGBioGame.TGBioType.EHeroWeaponType
/*enum EHeroWeaponType
{
	HeroWeaponType_Gun                                 = 0,
	HeroWeaponType_Blade                               = 1,
	HeroWeaponType_MAX                                 = 2
};*/

// Enum TGBioGame.TGBioType.EZombieDeathType
/*enum EZombieDeathType
{
	ZombieDeathType_MeleeWeapon                        = 0,
	ZombieDeathType_NoMeleeWeapon                      = 1,
	ZombieDeathType_HumanHeroGun                       = 2,
	ZombieDeathType_None                               = 3,
	ZombieDeathType_MAX                                = 4
};*/

// Enum TGBioGame.TGBioType.EBioHUDDriveType
/*enum EBioHUDDriveType
{
	EBioHUDDriveType_ChangeHumanHero                   = 0,
	EBioHUDDriveType_Hurt100                           = 1,
	EBioHUDDriveType_Hurt200                           = 2,
	EBioHUDDriveType_Hurt300                           = 3,
	EBioHUDDriveType_Hurt400                           = 4,
	EBioHUDDriveType_Hurt500                           = 5,
	EBioHUDDriveType_OneKill                           = 6,
	EBioHUDDriveType_Skill                             = 7,
	EBioHUDDriveType_MAX                               = 8
};*/

// Enum TGBioGame.TGBioType.ESkillHitResult
/*enum ESkillHitResult
{
	SHR_None                                           = 0,
	SHR_Success                                        = 1,
	SHR_OutOfDistance                                  = 2,
	SHR_MissTarget                                     = 3,
	SHR_AccidentFail                                   = 4,
	SHR_MAX                                            = 5
};*/

// Enum TGBioGame.TGBioType.EZombieHealth
/*enum EZombieHealth
{
	ZombieHealth_Keep                                  = 0,
	ZombieHealth_Reset                                 = 1,
	ZombieHealth_MAX                                   = 2
};*/

// Enum TGBioGame.TGBioType.EHumanType
/*enum EHumanType
{
	Human_Player                                       = 0,
	Human_Hero                                         = 1,
	Human_None                                         = 2,
	Human_MAX                                          = 3
};*/

// Enum TGBioGame.TGBioType.EBioCampType
/*enum EBioCampType
{
	BioCamp_Human                                      = 0,
	BioCamp_Zombie                                     = 1,
	BioCamp_None                                       = 2,
	BioCamp_MAX                                        = 3
};*/

// Enum TGBioGame.TGBioType.ERestoreCondition
/*enum ERestoreCondition
{
	ERC_Walking                                        = 0,
	ERC_Attack                                         = 1,
	ERC_Attacked                                       = 2,
	ERC_Jumping                                        = 3,
	ERC_None                                           = 4,
	ERC_MAX                                            = 5
};*/

// Enum TGBioGame.TGBioType.ESkillFeedback
/*enum ESkillFeedback
{
	ZombieSkillFeedback_FastMove                       = 0,
	ZombieSkillFeedback_ObstructGrenade                = 1,
	ZombieSkillFeedback_Rage                           = 2,
	ZombieSkillFeedback_Shield                         = 3,
	ZombieSkillFeedback_MAX                            = 4
};*/

// Enum TGBioGame.TGBioType.EZombieReviveMsg
/*enum EZombieReviveMsg
{
	ZombieMsg_Revive                                   = 0,
	ZombieMsg_ReviveSucceed                            = 1,
	ZombieMsg_MAX                                      = 2
};*/

// Enum TGBioGame.TGBioType.EUseSkillMsg
/*enum EUseSkillMsg
{
	ZombieUseSkillMsg_FastMove                         = 0,
	ZombieUseSkillMsg_ObstructGrenade                  = 1,
	ZombieUseSkillMsg_Rage                             = 2,
	ZombieUseSkillMsg_Shield                           = 3,
	ZombieUseSkillMsg_Magnet                           = 4,
	ZombieUseSkillMsg_MAX                              = 5
};*/

// Enum TGBioGame.TGBioType.EBioMessageType
/*enum EBioMessageType
{
	BioMessageType_None                                = 0,
	BioMessageType_FetchProp                           = 1,
	BioMessageType_UseSkillCountDown                   = 2,
	BioMessageType_UseSkillAllow                       = 3,
	BioMessageType_AddHumanAttack                      = 4,
	BioMessageType_Terminator                          = 5,
	BioMessageType_RoundStartTimer                     = 6,
	BioMessageType_TerminatorByKill                    = 7,
	BioMessageType_ZombieRevive                        = 8,
	BioMessageType_HumanHeroDie                        = 9,
	BioMessageType_KillZombieUseMee                    = 10,
	BioMessageType_KillZombieUseHeroGun                = 11,
	BioMessageType_ZombieSelectSucceed                 = 12,
	BioMessageType_SkillFeedback                       = 13,
	BioMessageType_ZombieGiveFail                      = 14,
	BioMessageType_SkillFlyCutter_AgainstFeedback      = 15,
	BioMessageType_RandomPickup                        = 16,
	BioMessageType_ZombieAbsoreTitle                   = 17,
	BioMessageType_SkillTrampleCasualies_Feedback      = 18,
	BioMessageType_Protect                             = 19,
	BioMessageType_Protected                           = 20,
	BioMessageType_Protect2                            = 21,
	BioMessageType_Protected2                          = 22,
	BioMessageType_GeneAugmentationAddHp               = 23,
	BioMessageType_HeroZombieSkillFeedback             = 24,
	BioMessageType_HumanBoomingState                   = 25,
	BioMessageType_ZombieExpIncrease                   = 26,
	BioMessageType_EnterTipVolume                      = 27,
	BioMessageType_MAX                                 = 28
};*/

// Enum TGBioGame.TGBioType.EBioInventoryType
/*enum EBioInventoryType
{
	TGBioInventoryType_None                            = 0,
	TGBioInventoryType_EnemySlomo                      = 1,
	TGBioInventoryType_FastMove                        = 2,
	TGBioInventoryType_FastShoot                       = 3,
	TGBioInventoryType_FullAmmo                        = 4,
	TGBioInventoryType_Defence                         = 5,
	TGBioInventoryType_AllAmmo                         = 6,
	TGBioInventoryType_MAX                             = 7
};*/

// Enum TGBioGame.TGBioAnimBlendBySlotActive.BuildBoneList
/*enum BuildBoneList
{
	BBL_ResetBoneList2Root                             = 0,
	BBL_BuildBoneList2UpperBody                        = 1,
	BBL_BuildBoneList2LowerBody                        = 2,
	BBL_BuildBoneList2RightHand                        = 3,
	BBL_BuildBoneList2LeftHand                         = 4,
	BBL_NoThing                                        = 5,
	BBL_MAX                                            = 6
};*/

// Enum TGBioGame.TGBioSkillBase.EMovieState
/*enum EMovieState
{
	MovieState_None                                    = 0,
	MovieState_Ready                                   = 1,
	MovieState_Cooldowning                             = 2,
	MovieState_MAX                                     = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class TGBioGame.BioCharInfo
// 0x00CC (0x0108 - 0x003C)
class UBioCharInfo : public UObject
{
public:
	class USkeletalMesh*                               FirstPersonArms1Mesh;                             		// 0x003C (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               FirstPersonArms2Mesh;                             		// 0x0040 (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               FirstPersonForeArmsMesh;                          		// 0x0044 (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               FirstPersonWeaponL;                               		// 0x0048 (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               FirstPersonWeaponR;                               		// 0x004C (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               ThirdPersonMesh;                                  		// 0x0050 (0x0004) [0x0000000000000000]              
	class UAnimTree*                                   ThirdPersonAnimTree;                              		// 0x0054 (0x0004) [0x0000000000000000]              
	class UAnimSet*                                    ThirdPersonAnimSet;                               		// 0x0058 (0x0004) [0x0000000000000000]              
	class UPhysicsAsset*                               ThirdPersonPhysAsset;                             		// 0x005C (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               ThirdPersonWeaponL;                               		// 0x0060 (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               ThirdPersonWeaponR;                               		// 0x0064 (0x0004) [0x0000000000000000]              
	class UMaterialInstance*                           ThirdPersonLevelMaterial;                         		// 0x0068 (0x0004) [0x0000000000000000]              
	class UMaterialInstance*                           FirstPersonLevelMaterial;                         		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              ZombiePawnRateSlow;                               		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              ZombiePawnRateFast;                               		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              ZombiePawnSpeedBlendMax;                          		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              ZombiePawnSpeedBlendMin;                          		// 0x007C (0x0004) [0x0000000000000000]              
	struct FName                                       FirstPersonArms1MeshName;                         		// 0x0080 (0x0008) [0x0000000000000000]              
	struct FName                                       FirstPersonArms2MeshName;                         		// 0x0088 (0x0008) [0x0000000000000000]              
	struct FName                                       FirstPersonForeArmsMeshName;                      		// 0x0090 (0x0008) [0x0000000000000000]              
	struct FName                                       FirstPersonWeaponLName;                           		// 0x0098 (0x0008) [0x0000000000000000]              
	struct FName                                       FirstPersonWeaponRName;                           		// 0x00A0 (0x0008) [0x0000000000000000]              
	struct FName                                       ThirdPersonMeshName;                              		// 0x00A8 (0x0008) [0x0000000000000000]              
	struct FName                                       ThirdPersonAnimTreeName;                          		// 0x00B0 (0x0008) [0x0000000000000000]              
	struct FName                                       ThirdPersonAnimSetName;                           		// 0x00B8 (0x0008) [0x0000000000000000]              
	struct FName                                       ThirdPersonPhysAssetName;                         		// 0x00C0 (0x0008) [0x0000000000000000]              
	struct FName                                       ThirdPersonWeaponLName;                           		// 0x00C8 (0x0008) [0x0000000000000000]              
	struct FName                                       ThirdPersonWeaponRName;                           		// 0x00D0 (0x0008) [0x0000000000000000]              
	struct FName                                       ThirdPersonLevelMaterialName;                     		// 0x00D8 (0x0008) [0x0000000000000000]              
	struct FName                                       FirstPersonLevelMaterialName;                     		// 0x00E0 (0x0008) [0x0000000000000000]              
	int                                                NeedLoadFlag;                                     		// 0x00E8 (0x0004) [0x0000000000000000]              
	int                                                CompleteLoadFlag;                                 		// 0x00EC (0x0004) [0x0000000000000000]              
	unsigned long                                      bLoadComplete : 1;                                		// 0x00F0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLoadError : 1;                                   		// 0x00F0 (0x0004) [0x0000000000000000] [0x00000002] 
	class UTGBioCharInfoManager*                       LoadManager;                                      		// 0x00F4 (0x0004) [0x0000000000000000]              
	struct FString                                     CharLoadStringID;                                 		// 0x00F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ServerNeedLoadFlag;                               		// 0x0104 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2059 ];

		return pClassPointer;
	};

	void ClearAsyncLoad ( );
	void AsyncLoadBioCharInfoContent ( );
};

UClass* UBioCharInfo::pClassPointer = NULL;

// Class TGBioGame.TGAttachment_HeroBlade
// 0x000C (0x0524 - 0x0518)
class ATGAttachment_HeroBlade : public ATGWeaponAttachment
{
public:
	class USkeletalMeshComponent*                      MeshL;                                            		// 0x0518 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       MuzzleFlashSocketL;                               		// 0x051C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2060 ];

		return pClassPointer;
	};

	void DetachFrom ( class USkeletalMeshComponent* MeshCpnt );
	void AttachTo ( class AUTPawn* OwnerPawn );
	struct FMaterialImpactEffect GetImpactEffect ( class UPhysicalMaterial* HitMaterial );
	void PlayImpactEffects ( struct FVector HitLocation );
	void ChangeVisibility ( unsigned long bIsVisible );
	struct FVector GetEffectLocation ( );
	void FirstPersonFireEffects ( class AWeapon* PawnWeapon, struct FVector HitLocation );
	void SpawnTracer ( struct FVector EffectLocation, struct FVector HitLocation );
	void StopMuzzleFlash ( );
	void CauseMuzzleFlash ( );
	void MuzzleFlashTimer ( );
	void ThirdPersonFireEffects ( struct FVector HitLocation );
	void SetWeaponOverlayFlags ( class AUTPawn* OwnerPawn );
	void CreateOverlayMesh ( );
	void SetSkin ( class UMaterial* NewMaterial );
};

UClass* ATGAttachment_HeroBlade::pClassPointer = NULL;

// Class TGBioGame.TGAttachment_HeroGun
// 0x0000 (0x0518 - 0x0518)
class ATGAttachment_HeroGun : public ATGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2061 ];

		return pClassPointer;
	};

	void AttachTo ( class AUTPawn* OwnerPawn );
	void DetachFrom ( class USkeletalMeshComponent* MeshCpnt );
	void PlayImpactEffects ( struct FVector HitLocation );
};

UClass* ATGAttachment_HeroGun::pClassPointer = NULL;

// Class TGBioGame.TGBioCharInfoManager
// 0x0048 (0x0084 - 0x003C)
class UTGBioCharInfoManager : public UObject
{
public:
	TArray< struct FString >                           InitBioCharInfoNameList;                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           InitBioCacheInfo;                                 		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UBioCharInfo* >                      LoadedBioCharInfoList;                            		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UBioCharInfo* >                      LoadingBioCharInfoList;                           		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UBioCharInfo* >                      LoadErrorBioCharInfoList;                         		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            LoadedBioCacheInfo;                               		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2062 ];

		return pClassPointer;
	};

	int LoadBioCharInfo ( struct FString CharInfoName, class UBioCharInfo** LoadInfo );
	void PreloadInitResource ( );
};

UClass* UTGBioCharInfoManager::pClassPointer = NULL;

// Class TGBioGame.TGBioDroppedPickup
// 0x0000 (0x01F8 - 0x01F8)
class ATGBioDroppedPickup : public AUTDroppedPickup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2063 ];

		return pClassPointer;
	};

	void PickedUpBy ( class APawn* P );
	void eventPreBeginPlay ( );
};

UClass* ATGBioDroppedPickup::pClassPointer = NULL;

// Class TGBioGame.TGBioGameReplicationInfo
// 0x0068 (0x03E8 - 0x0380)
class ATGBioGameReplicationInfo : public ATGRoundGameReplicationInfo
{
public:
	class UClass*                                      CharInfoManagerClass;                             		// 0x0380 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRoundStarted : 1;                                		// 0x0384 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bCanChangeHumanHero : 1;                          		// 0x0384 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bHasChangeHero : 1;                               		// 0x0384 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                RoundCount;                                       		// 0x0388 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                ZombieLeftCount;                                  		// 0x038C (0x0004) [0x0000000000000000]              
	int                                                HumanLeftCount;                                   		// 0x0390 (0x0004) [0x0000000000000000]              
	int                                                iTotalZombieCount;                                		// 0x0394 (0x0004) [0x0000000000000000]              
	int                                                iTotalHumanCount;                                 		// 0x0398 (0x0004) [0x0000000000000000]              
	int                                                iTotalPlayerCount;                                		// 0x039C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                iGridNum;                                         		// 0x03A0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UTGBioCharInfoManager*                       BioCharInfoManager;                               		// 0x03A4 (0x0004) [0x0000000000000000]              
	int                                                TimesZombieWin;                                   		// 0x03A8 (0x0004) [0x0000000000000000]              
	int                                                TimesHumanWin;                                    		// 0x03AC (0x0004) [0x0000000000000000]              
	int                                                TotalGameTime;                                    		// 0x03B0 (0x0004) [0x0000000000000000]              
	TArray< class UClass* >                            InventoryPool;                                    		// 0x03B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            AttachmentPool;                                   		// 0x03C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fPostChangeHeroTimes;                             		// 0x03CC (0x0004) [0x0000000000000000]              
	float                                              fPreChangeHeroTimes;                              		// 0x03D0 (0x0004) [0x0000000000000000]              
	struct FHumanHeroRemainingTimeInfo                 RemainingTimeInfo;                                		// 0x03D4 (0x0008) [0x0000000000000020]              ( CPF_Net )
	int                                                wPostChangeEmpressTimes;                          		// 0x03DC (0x0004) [0x0000000000000000]              
	int                                                wPreChangeEmpressTimes;                           		// 0x03E0 (0x0004) [0x0000000000000000]              
	int                                                wMaxBeginerEmpressTimes;                          		// 0x03E4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2064 ];

		return pClassPointer;
	};

	void FlashNormalWeaponIcon ( );
	bool InOrder ( class APlayerReplicationInfo* P1, class APlayerReplicationInfo* P2 );
	void ZombieLastonePlaySound ( );
	void ComputerZombieLeftCount ( );
	void ComputerHumanLeftCount ( );
	void ComputerLeftCount ( );
	void ComputerChangeHeroPrePostTime ( );
	void AddToAttachmentPool ( class AUTWeaponAttachment* WeapAttachment );
	void AddToInventroyPool ( class AWeapon* InventoryWeapon );
	void CalculateGameTime ( );
	void UpdateHumanHeroDamage ( );
	void NotifyCanTurnToHumanHero ( );
	void AddChangeHumanHeroMsg ( );
	void SetRoundCount ( int iRound );
	bool IsCanTurnToHumanHero ( );
	void ComputerGridNum ( );
	void RoundClear ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGBioGameReplicationInfo::pClassPointer = NULL;

// Class TGBioGame.TGBioMatch
// 0x00B4 (0x0808 - 0x0754)
class ATGBioMatch : public ATGRoundMatch
{
public:
	float                                              IntervalToTurnZombie;                             		// 0x0754 (0x0004) [0x0000000000000000]              
	int                                                RandomWeaponRespawnTime;                          		// 0x0758 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< class ATGBioPickupFactoryBase* >           RandomWeaponPickupFactoryArray;                   		// 0x075C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RandomWeaponNumber;                               		// 0x0768 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bRoundStarted : 1;                                		// 0x076C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanUseThrowWeapon : 1;                           		// 0x076C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHumHeroFightStage : 1;                           		// 0x076C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              RoundStartTime;                                   		// 0x0770 (0x0004) [0x0000000000000000]              
	struct FString                                     DefaultPawnClassName;                             		// 0x0774 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     HumanHeroPawnClassName;                           		// 0x0780 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     HumanMaleHeroClassName;                           		// 0x078C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     HumanFemaleHeroClassName;                         		// 0x0798 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FHostZombiePawnClassMap >           HostZombiePawnClassName;                          		// 0x07A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TerminatorPawnClassName;                          		// 0x07B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FHostZombiePawnClassMap >           HostZombieWeaponClassName;                        		// 0x07BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DefaultTerminatorInventory;                       		// 0x07C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DefaultHumanHeroInventory;                        		// 0x07D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGBioItemManager*                           PropManager;                                      		// 0x07E0 (0x0004) [0x0000000000000000]              
	int                                                CurrentNumValidePlayers;                          		// 0x07E4 (0x0004) [0x0000000000000000]              
	class ATGBioRestoreManager*                        RestoreMsg;                                       		// 0x07E8 (0x0004) [0x0000000000000000]              
	int                                                BioTransMode;                                     		// 0x07EC (0x0004) [0x0000000000000000]              
	int                                                RoundStartLeftTimes;                              		// 0x07F0 (0x0004) [0x0000000000000000]              
	TArray< class ATGBioZombiePawn* >                  AbsoreZombiePawnMap;                              		// 0x07F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ATGBioPlayerController*                      FirstPerson;                                      		// 0x0800 (0x0004) [0x0000000000000000]              
	class ATGBioPlayerController*                      SecondPerson;                                     		// 0x0804 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2065 ];

		return pClassPointer;
	};

	bool TurnToHeroZombie ( class ATGBioPlayerReplicationInfo* PRI );
	void ResetAllJerrican ( );
	void ReduceDamage ( class APawn* injured, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, class AActor* DamageCauser, int* Damage, struct FVector* Momentum );
	void DirectEndRound ( int TeamIndex, struct FString Reason, class AActor* EndRoundFocus );
	void SetBioTransMode ( int NewMode );
	void RecheckPlayerCount ( class ATGPlayerReplicationInfo* Exiting, int* ZombieCount, int* HumanCount );
	void CheckPlayerCount ( int* ZombieCount, int* HumanCount );
	bool CheckTeamAllOut ( class ATGPlayerReplicationInfo* Exiting );
	void ChangeSpawnProtectionTime ( float fTime );
	void AddAllHumanAttack ( class ATGBioPlayerController* bioPC );
	void TurnPlayerToHumanHero ( class ATGBioPlayerReplicationInfo* PRI );
	void AddDefaultInventoryForHumanHero ( class ATGBioPlayerReplicationInfo* PRI, class ATGBioHumanHeroPawn* heroPawn, class ATGBioPlayerController* PC, int Count );
	void eventAddHumanHeroInventoryFor ( class APawn* PlayerPawn, class ATGBioPlayerController* PC );
	class APlayerStart* ChoosePlayerStart ( class AController* Player, unsigned char InTeam );
	float RatePlayerStart ( class APlayerStart* P, unsigned char Team, class AController* Player );
	void TryTossProp ( class APawn* P );
	int GetRoundLeftPlayerNum ( );
	void CalcGameTimeStatis ( );
	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	void EndRound ( class AActor* EndRoundFocus );
	void ResetRoundLevel ( );
	void ServerSpecialResetBioMatch ( );
	bool ChoosePlayerTurnZombie ( );
	void TurnToZombie ( class ATGBioPlayerReplicationInfo* PRI, struct FZombieChangeNecessity ZombieChange );
	void CheckZombieWhether ( unsigned char ZombieType, class ATGBioPlayerReplicationInfo* PRI );
	void ResetCurrentSpecifyZombieType ( class ATGBioPlayerReplicationInfo* PRI );
	bool FindAppropriateTransformSpot ( class UClass* TransformerClass, struct FVector* SpotLocation );
	class UClass* GetZombieClassFromZombieType ( unsigned char ZombieType );
	void eventAddZombieInventoryFor ( class APawn* PlayerPawn, class ATGBioPlayerController* PC );
	void AddDefaultInventoryForZombie ( class ATGBioPlayerReplicationInfo* PRI, class ATGBioZombiePawn* ZombiePawn, class ATGBioPlayerController* PC, int Count );
	struct FString GetInventoryListByZombieType ( unsigned char ZombieType );
	void AddDefaultInventoryEx ( class APawn* PlayerPawn, int Count );
	void eventAddFunctionalItemFor ( class APawn* PlayerPawn, class ATGPlayerReplicationInfo* PRI );
	void eventAddInventoryFor ( class APawn* PlayerPawn );
	void GetInventroyListForThisGame ( TArray< struct FFItemSimpleData >* BagWeaponList );
	void FilterBioGameInventory ( TArray< struct FFItemSimpleData >* BagWeaponList );
	void GetDesiredZombieCount ( int PlayerCount, int* HostZombieCount, int* TerminatorCount );
	void TimeToTurnZombie ( );
	void StartTimeToTurnZombie ( );
	void SecondPersonAnswer ( );
	void FirstPersonSpeak ( );
	void StartMatch ( );
	void RoundStartLeftTimer ( );
	void ResetRandomWeaponPickupFactory ( );
	void PlaySoundWeaponArrived ( );
	void ChooseRandomWeaponPickupFactory ( );
	void ComputerRandomWeaponDropNumber ( );
	class APlayerController* eventLogin ( struct FString Portal, struct FString Options, struct FUniqueNetId UniqueIdNet, struct FString* ErrorMessage );
	void eventPostLogin ( class APlayerController* NewPlayer );
	void eventPreLogin ( struct FString Options, struct FString Address, struct FString* ErrorMessage );
	void RestartPlayer ( class AController* NewPlayer );
	class APawn* SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot );
	void DrawEndRound ( class AActor* EndRoundFocus );
	int ComputeDamage ( );
	void GenericEndRound ( int TeamIndex, struct FString Reason, class AActor* EndRoundFocus );
	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
	void StatZombieNoReBirthInfo ( class ATGBioPlayerController* KilledController );
	void Logout ( class AController* Exiting );
	void InitGameReplicationInfo ( );
	void CalcACE ( );
	void eventUpdateGameSpecificSettings ( struct FGameSpecificSettings Settings );
	void PreBeginPlay ( );
};

UClass* ATGBioMatch::pClassPointer = NULL;

// Class TGBioGame.TGBioPawn
// 0x0088 (0x1188 - 0x1100)
class ATGBioPawn : public ATGPawn
{
public:
	struct FBioPawnFootPlacementInfo                   UseZombieFootPlacement;                           		// 0x1100 (0x0008) [0x0000000000000020]              ( CPF_Net )
	float                                              MoveSpeedScale;                                   		// 0x1108 (0x0004) [0x0000000000000000]              
	float                                              GeneralJumpSize;                                  		// 0x110C (0x0004) [0x0000000000000000]              
	float                                              CrouchJumpSize;                                   		// 0x1110 (0x0004) [0x0000000000000000]              
	float                                              DamageSlowdownMax;                                		// 0x1114 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DamageSlowdownInterval;                           		// 0x1118 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DamageSlowdownStep;                               		// 0x111C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SkillSpeedScale;                                  		// 0x1120 (0x0004) [0x0000000000000000]              
	float                                              BuffSpeedScale;                                   		// 0x1124 (0x0004) [0x0000000000000000]              
	float                                              DamageSlowdownNumScale;                           		// 0x1128 (0x0004) [0x0000000000000000]              
	float                                              DamageScale;                                      		// 0x112C (0x0004) [0x0000000000000000]              
	float                                              DamageSlowdownScale;                              		// 0x1130 (0x0004) [0x0000000000000000]              
	TArray< struct FDirectionalAnimInfo >              DeathAnimList;                                    		// 0x1134 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FDirectionalAnimInfo >              DeathLocalAnimList;                               		// 0x1140 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FDirectionalAnimInfo >              HitAnimList;                                      		// 0x114C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FCustomAnimInfo >                   CustomAnimList;                                   		// 0x1158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             MeleeFireFirstAnim;                               		// 0x1164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             MeleeFireSecondAnim;                              		// 0x1170 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             MeleeFireHeavyAnim;                               		// 0x117C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2066 ];

		return pClassPointer;
	};

	void ClientHandleZombieSkillState ( unsigned long bGoto, struct FName SklledState );
	void HandleZombieSkillState ( unsigned long bGoto, struct FName SklledState );
	void BioPlayDying ( unsigned long bPermanentDeath, class UClass* DamageType, struct FVector HitLoc, unsigned char DeathDir, unsigned char HitGroup );
	void PlayZombieAnim ( class UClass* DamageType, unsigned char DeathDir, unsigned long bDead, unsigned long bLocal );
	void PlayCustomAnim ( unsigned char AnimType, unsigned long bFirstPerson );
	void SetCrouchJumpSize ( float Scale );
	void SetGeneralJumpSize ( float Scale );
	void SetMoveSpeedScale ( float Scale );
	float NotifyCombiningSpeedScale ( );
	void SetLookLock ( unsigned long bEnable, class APlayerController* PC );
	void SetMovementLock ( unsigned long bEnable, class APlayerController* PC );
	void SetLegSkelControl ( unsigned long bOpen );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGBioPawn::pClassPointer = NULL;

// Class TGBioGame.TGBioPlayerPawnBase
// 0x0038 (0x11C0 - 0x1188)
class ATGBioPlayerPawnBase : public ATGBioPawn
{
public:
	unsigned long                                      bRestricted : 1;                                  		// 0x1188 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                bRestrictedCount;                                 		// 0x118C (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     NewPosition;                                      		// 0x1190 (0x000C) [0x0000000000000020]              ( CPF_Net )
	class UParticleSystem*                             FirstPersonRestrictEffect;                        		// 0x119C (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ThirdPersonRestrictEffect;                        		// 0x11A0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ThirdPersonBlackHoleEffect;                       		// 0x11A4 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    ThirdPersonRestrictEffectPSC;                     		// 0x11A8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ThirdPersonBlackHoleEffectPSC;                    		// 0x11AC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       ThirdPersonRestrictEffectSocket;                  		// 0x11B0 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BlackHoleThrowEffect;                             		// 0x11B8 (0x0004) [0x0000000000000000]              
	float                                              ExitRestrictDelayTime;                            		// 0x11BC (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2067 ];

		return pClassPointer;
	};

	void StopThirdPersonRestrictEfeect ( );
	void StopFirstPersonRestrictEffect ( );
	void PlayThirdPersonRestrictEfeect ( );
	void PlayFirstPersonRestrictEffect ( );
	void DelayUnlockPlayer ( );
	void SetRestrictState ( unsigned long Restrict );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGBioPlayerPawnBase::pClassPointer = NULL;

// Class TGBioGame.TGBioPlayerController
// 0x0040 (0x0A38 - 0x09F8)
class ATGBioPlayerController : public ATGRoundPlayerController
{
public:
	float                                              RespawnTime;                                      		// 0x09F8 (0x0004) [0x0000000000000000]              
	unsigned char                                      KillByWeaponType;                                 		// 0x09FC (0x0001) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     LastBeKilledLocation;                             		// 0x0A00 (0x000C) [0x0000000000000000]              
	class UClass*                                      ZombieClass;                                      		// 0x0A0C (0x0004) [0x0000000000000000]              
	class ATGBioSkillManager*                          BioSkillMgr;                                      		// 0x0A10 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     PermanentDeathLoc;                                		// 0x0A14 (0x000C) [0x0000000000000000]              
	class APlayerStart*                                PrePlayerStart;                                   		// 0x0A20 (0x0004) [0x0000000000000000]              
	unsigned long                                      bShowMatchInfo : 1;                               		// 0x0A24 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOpenColorEffect : 1;                             		// 0x0A24 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                iSkillSucCount;                                   		// 0x0A28 (0x0004) [0x0000000000000000]              
	class UMaterialEffect*                             LocalMaterialEffect;                              		// 0x0A2C (0x0004) [0x0000000000000000]              
	int                                                ZombiePawnLod;                                    		// 0x0A30 (0x0004) [0x0000000000000000]              
	float                                              TickCanSeeSomeThing;                              		// 0x0A34 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2068 ];

		return pClassPointer;
	};

	void DropCurWeapon ( );
	void SetLockPawnRotation ( unsigned long bLock );
	void SetMovementLock ( unsigned long bEnable );
	struct FVector GetSpawnPropLocation ( );
	void ServerSpawnItem ( unsigned char PropType );
	void SpawnProp ( int PropId );
	void RemovePropMessage ( );
	void RoundReset ( );
	void Reset ( );
	void ResetAnimTreeWhenSpectating ( );
	void ServerZombieMeleeSuicide ( );
	void ZombieMeleeSuicide ( );
	void ServerBioEndCurrentRound ( );
	void BioEndCurrentRound ( );
	void eventPlayerTick ( float DeltaTime );
	void ShowChangeBag ( );
	bool IsHumanCamp ( );
	bool IsZombieCamp ( );
	void ServerSetBioTransMode ( int NewGodMode );
	void SetBioTransMode ( int NewMode );
	void UnUse ( );
	void GotZPoint ( int GotPoint );
	void SetServerPermanentDeathLocation ( struct FVector DeathLoc );
	void ServerChangeToHumanHero ( );
	void InterServerTurnToHumanHero ( );
	void TurnToHumanHero ( );
	void InterServerTurnToHumanHeroEx2 ( );
	void T2HumanHero2 ( );
	void InterServerTurnToHumanHeroEx ( );
	void T2HumanHero ( );
	void ServerZombieLevelUP ( );
	void ZombieLevelUP ( );
	void AddTimerMessageFeedback ( int RemainingSeconds );
	void PlayRoundStartSound ( );
	void TimeFeedback ( int FeedbackTime );
	void AddKilledByHeroGunWeaponFeedback ( );
	void AddKilledByMeeWeaponFeedback ( );
	void AddWeaponArrivedSound ( );
	void AddWeaponArrivedFeedback ( );
	void PlaySoundBecomeHero ( );
	void AddBecomeHumanHeroStateFeedback ( int HeroType );
	void AddCanChangeHumanHeroFeedback ( );
	void AddRestrictStateFeedback ( unsigned long bRestriced );
	void AddKillHumanHeroFeedback ( );
	void AddMatchInfoMessageFeedback ( );
	bool IsSkillCoolingDown ( );
	void StartSkill ( );
	void ClientStartSkill ( );
	void AddZombieLastoneSound ( );
	void AddCanHumanHeroSound ( );
	void Use ( );
	void ChangeZ ( int I );
	void TestChangeZ ( unsigned char Type );
	void Changebag ( );
	void SwitchWeapon ( unsigned char T );
	void pSelectHumanHeroWeapon ( int I );
	void pSelectZ ( int I );
	void SelectHumanHeroWeaponServer ( unsigned char Type );
	void SelectHumanHeroWeapon ( unsigned char Type );
	void CloseSelectHumanHeroWeaponType ( );
	void OpenSelectHumanHeroWeaponType ( );
	void ServerBeginVoteToKickPlayer ( struct FString Uin, unsigned char KickReason, struct FString CustomKickReason );
	void BeginVoteToKickPlayer ( struct FString Uin, unsigned char KickReason, struct FString CustomKickReason );
	void ServerGetKickPlayerData ( );
	void SelectHostZombieTypeServer ( unsigned char Type );
	unsigned char ZombieTypeMap ( unsigned char ZombieType );
	bool CheckZombieTypeCharge ( unsigned char ZombieType, class ATGBioPlayerReplicationInfo* PRI );
	bool CheckZombieTypeWithoutBoss ( unsigned char ZombieType, unsigned long bWithoutBoss );
	void SelectHostZombieType ( unsigned char Type );
	void ToggleSelectHostZombieTypeLazy ( unsigned long bForceClose );
	void ToggleSelectHostZombieTypeLazyServer ( unsigned long bForceClose );
	void CloseSelectHostZombieType ( );
	void OpenSelectHostZombieType ( );
	void CreateSkillServer ( );
	void CreateSkill ( );
	void ServerGetZPoint ( );
	void UpdateGameSettingOption ( );
	void GetZPoint ( );
	void PressFKey ( );
	void NotifyClientPlayerResetSkill ( unsigned long ResetOnlyCoolTime, unsigned long ResetCoolTime, unsigned long ClientClearManagerCoolDownOver );
	void NotifyServerPlayerResetSkill ( unsigned long ResetOnlyCoolTime, unsigned long ResetCoolTime );
	void NotifyPlayerResetSkill ( unsigned long ResetOnlyCoolTime, unsigned long ResetCoolTime, unsigned long ClientClearManagerCoolDownOver );
	void PostLoadCharacter ( );
	void IgnoreLookInput ( unsigned long bNewLookInput );
	bool IsFiringDisabled ( );
	void StopFire ( unsigned char FireModeNum );
	void StartFire ( unsigned char FireModeNum );
	void PlayVoiceSound ( int Index );
	void eventPostBeginPlay ( );
	void CloseBioClientPostProcess ( );
	void UpdateBioClientPostProcess ( class UMaterial* OtherMaterial, unsigned long ForceClose );
	void ClientPlayTakeHit ( struct FVector AttackerPos, unsigned char Damage, class UClass* DamageType );
	void NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector AttackerPos );
	void NotifyLoadingProcessComplete ( );
	void ColorEffectSet ( unsigned long EffectSet );
};

UClass* ATGBioPlayerController::pClassPointer = NULL;

// Class TGBioGame.TGBioPlayerInput
// 0x0004 (0x0388 - 0x0384)
class UTGBioPlayerInput : public UTGPlayerInput
{
public:
	unsigned long                                      bLeftButtonDown : 1;                              		// 0x0384 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRightButtonDown : 1;                             		// 0x0384 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bMiddleButtonDown : 1;                            		// 0x0384 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bKeyControlDown : 1;                              		// 0x0384 (0x0004) [0x0000000000000000] [0x00000008] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2069 ];

		return pClassPointer;
	};

	void eventTGBioInputMiddleButtonDown ( unsigned long bButtonDown );
	void eventTGBioInputRightButtonDown ( unsigned long bButtonDown );
	void eventTGBioInputLeftButtonDown ( unsigned long bButtonDown );
};

UClass* UTGBioPlayerInput::pClassPointer = NULL;

// Class TGBioGame.TGBioPlayerReplicationInfo
// 0x01B0 (0x1100 - 0x0F50)
class ATGBioPlayerReplicationInfo : public ATGRoundPlayerReplicationInfo
{
public:
	class UClass*                                      BioSkillClasses;                                  		// 0x0F50 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                TimesBecomeZombie;                                		// 0x0F54 (0x0004) [0x0000000000000000]              
	int                                                TimesBecomeHuman;                                 		// 0x0F58 (0x0004) [0x0000000000000000]              
	int                                                TimesZombieWin;                                   		// 0x0F5C (0x0004) [0x0000000000000000]              
	int                                                TimesHumanWin;                                    		// 0x0F60 (0x0004) [0x0000000000000000]              
	float                                              LastTurnZombieTime;                               		// 0x0F64 (0x0004) [0x0000000000000000]              
	struct FZombieBaseInfo                             CurZombieInfo;                                    		// 0x0F68 (0x000C) [0x0000000000000000]              
	struct FZombieBaseInfo                             PreZombieInfo;                                    		// 0x0F74 (0x000C) [0x0000000000000000]              
	float                                              WaitChangeBioTime;                                		// 0x0F80 (0x0004) [0x0000000000000000]              
	unsigned long                                      bGeneralTurnZombie : 1;                           		// 0x0F84 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBoss : 1;                                        		// 0x0F84 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bKilled : 1;                                      		// 0x0F84 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bHasAddClipItem : 1;                              		// 0x0F84 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bCarryVirus : 1;                                  		// 0x0F84 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bCarryAntitoxic : 1;                              		// 0x0F84 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bCarryGeneAugmentation : 1;                       		// 0x0F84 (0x0004) [0x0000000000000020] [0x00000040] ( CPF_Net )
	unsigned long                                      bCarryEvolutionGene : 1;                          		// 0x0F84 (0x0004) [0x0000000000000020] [0x00000080] ( CPF_Net )
	unsigned long                                      bInvisibleZombie : 1;                             		// 0x0F84 (0x0004) [0x0000000000000020] [0x00000100] ( CPF_Net )
	unsigned long                                      bZombieLogoutPending : 1;                         		// 0x0F84 (0x0004) [0x0000000000000000] [0x00000200] 
	int                                                LastKillerHeath;                                  		// 0x0F88 (0x0004) [0x0000000000000000]              
	unsigned char                                      PlayerShowIconType;                               		// 0x0F8C (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      LastSpecifyHostZombieType;                        		// 0x0F8D (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentSpecifyZombieType;                         		// 0x0F8E (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      HeroWeaponType;                                   		// 0x0F8F (0x0001) [0x0000000000000020]              ( CPF_Net )
	struct FSelectBioZombie                            SetSelectBioZombie;                               		// 0x0F90 (0x0008) [0x0000000000000020]              ( CPF_Net )
	struct FSelectBioZombieLazy                        SetSelectBioZombieLazy;                           		// 0x0F98 (0x0008) [0x0000000000000020]              ( CPF_Net )
	struct FSelectHeroWeapon                           SetSelectHeroWeapon;                              		// 0x0FA0 (0x0008) [0x0000000000000020]              ( CPF_Net )
	int                                                KilledZombie;                                     		// 0x0FA8 (0x0004) [0x0000000000000000]              
	int                                                HumanHeroKilledTerminator;                        		// 0x0FAC (0x0004) [0x0000000000000000]              
	int                                                KilledTerminator;                                 		// 0x0FB0 (0x0004) [0x0000000000000000]              
	int                                                KilledPlayer;                                     		// 0x0FB4 (0x0004) [0x0000000000000000]              
	int                                                TerminatorKilledPlayer;                           		// 0x0FB8 (0x0004) [0x0000000000000000]              
	int                                                KilledHumanHero;                                  		// 0x0FBC (0x0004) [0x0000000000000000]              
	int                                                TerminatorKilledHumanHero;                        		// 0x0FC0 (0x0004) [0x0000000000000000]              
	int                                                SuvCount;                                         		// 0x0FC4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                CurrentTotalDamageKill;                           		// 0x0FC8 (0x0004) [0x0000000000000000]              
	int                                                CurrentTotalDamage;                               		// 0x0FCC (0x0004) [0x0000000000000000]              
	int                                                TotalGameScore;                                   		// 0x0FD0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                Points;                                           		// 0x0FD4 (0x0004) [0x0000000000000000]              
	int                                                TotalKillCount;                                   		// 0x0FD8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                GameCoin;                                         		// 0x0FDC (0x0004) [0x0000000000000000]              
	float                                              fGameTime;                                        		// 0x0FE0 (0x0004) [0x0000000000000000]              
	float                                              fBeginTime;                                       		// 0x0FE4 (0x0004) [0x0000000000000000]              
	float                                              fRate;                                            		// 0x0FE8 (0x0004) [0x0000000000000000]              
	int                                                iKilledCount;                                     		// 0x0FEC (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UClass*                                      BioLocal;                                         		// 0x0FF0 (0x0004) [0x0000000000000000]              
	int                                                TimesZombieInfeHumanLowhealth;                    		// 0x0FF4 (0x0004) [0x0000000000000000]              
	int                                                KillZombieUseLastBullet;                          		// 0x0FF8 (0x0004) [0x0000000000000000]              
	int                                                KillZombieWithMeleeWeapon;                        		// 0x0FFC (0x0004) [0x0000000000000000]              
	int                                                TimesZombieInfeHumanOneRound;                     		// 0x1000 (0x0004) [0x0000000000000000]              
	int                                                MaxTimesZombieInfeHumanOneRound;                  		// 0x1004 (0x0004) [0x0000000000000000]              
	int                                                TimesCollectSupplybox;                            		// 0x1008 (0x0004) [0x0000000000000000]              
	struct FZombiePawnReviveLocInfo                    ReviveLocInfo;                                    		// 0x100C (0x0014) [0x0000000000000020]              ( CPF_Net )
	float                                              PrePawnHealth;                                    		// 0x1020 (0x0004) [0x0000000000000000]              
	int                                                wTimesHuman;                                      		// 0x1024 (0x0004) [0x0000000000000000]              
	int                                                wTimesHero;                                       		// 0x1028 (0x0004) [0x0000000000000000]              
	int                                                wTimesHeroWin;                                    		// 0x102C (0x0004) [0x0000000000000000]              
	int                                                wTimesHeroLose;                                   		// 0x1030 (0x0004) [0x0000000000000000]              
	int                                                wTimesHeroKillZombie;                             		// 0x1034 (0x0004) [0x0000000000000000]              
	int                                                wTimesZombie;                                     		// 0x1038 (0x0004) [0x0000000000000000]              
	int                                                wTimesZombieInfeHuman;                            		// 0x103C (0x0004) [0x0000000000000000]              
	int                                                wTimesZombieBeKilled;                             		// 0x1040 (0x0004) [0x0000000000000000]              
	int                                                wZombieInfoCount;                                 		// 0x1044 (0x0004) [0x0000000000000000]              
	TArray< struct FBIOZombieInfo >                    astZombieInfo;                                    		// 0x1048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                wTimesTerminator;                                 		// 0x1054 (0x0004) [0x0000000000000000]              
	int                                                wTimesTerminatorInfeHuman;                        		// 0x1058 (0x0004) [0x0000000000000000]              
	int                                                wTimesBeZombie30;                                 		// 0x105C (0x0004) [0x0000000000000000]              
	int                                                wTimesBeZombie30To45;                             		// 0x1060 (0x0004) [0x0000000000000000]              
	int                                                wTimesBeZombie45To60;                             		// 0x1064 (0x0004) [0x0000000000000000]              
	int                                                wTimesBeZombie60To75;                             		// 0x1068 (0x0004) [0x0000000000000000]              
	int                                                wTimesBeZombie75To90;                             		// 0x106C (0x0004) [0x0000000000000000]              
	int                                                wTimesBeZombie90To105;                            		// 0x1070 (0x0004) [0x0000000000000000]              
	int                                                wTimesBeZombie105To120;                           		// 0x1074 (0x0004) [0x0000000000000000]              
	int                                                wTimesBeZombie120To135;                           		// 0x1078 (0x0004) [0x0000000000000000]              
	int                                                wTimesBeZombie135To150;                           		// 0x107C (0x0004) [0x0000000000000000]              
	int                                                wTimesBeHero30;                                   		// 0x1080 (0x0004) [0x0000000000000000]              
	int                                                wTimesBeHero30To45;                               		// 0x1084 (0x0004) [0x0000000000000000]              
	int                                                wTimesBeHero45To60;                               		// 0x1088 (0x0004) [0x0000000000000000]              
	int                                                wTimesBeHero60To75;                               		// 0x108C (0x0004) [0x0000000000000000]              
	int                                                wTimesBeHero75To90;                               		// 0x1090 (0x0004) [0x0000000000000000]              
	int                                                wTimesBeHero90To105;                              		// 0x1094 (0x0004) [0x0000000000000000]              
	int                                                wTimesBeHero105To120;                             		// 0x1098 (0x0004) [0x0000000000000000]              
	int                                                wTimesBeHero120To135;                             		// 0x109C (0x0004) [0x0000000000000000]              
	int                                                wTimesBeHero135To150;                             		// 0x10A0 (0x0004) [0x0000000000000000]              
	int                                                TimesHumanDamageZombie;                           		// 0x10A4 (0x0004) [0x0000000000000000]              
	int                                                TimesKillZombieNoRebirth;                         		// 0x10A8 (0x0004) [0x0000000000000000]              
	int                                                TimesHeadShot;                                    		// 0x10AC (0x0004) [0x0000000000000000]              
	int                                                wUseHumanGunTime;                                 		// 0x10B0 (0x0004) [0x0000000000000000]              
	int                                                wUseHumanMeleeTime;                               		// 0x10B4 (0x0004) [0x0000000000000000]              
	int                                                wUseHumanGunKillTime;                             		// 0x10B8 (0x0004) [0x0000000000000000]              
	int                                                wUseHumanMeleeKillTime;                           		// 0x10BC (0x0004) [0x0000000000000000]              
	int                                                iRoundCount;                                      		// 0x10C0 (0x0004) [0x0000000000000000]              
	int                                                iCurAttackUpCount;                                		// 0x10C4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ATGBioPlayerPawn*                            PlayerPawn;                                       		// 0x10C8 (0x0004) [0x0000000000000000]              
	int                                                CurrentKilledZombie;                              		// 0x10CC (0x0004) [0x0000000000000000]              
	int                                                HeroBladeDamage;                                  		// 0x10D0 (0x0004) [0x0000000000000000]              
	int                                                HeroGunDamage;                                    		// 0x10D4 (0x0004) [0x0000000000000000]              
	int                                                ZombiePickupNum;                                  		// 0x10D8 (0x0004) [0x0000000000000000]              
	int                                                HumanPickupNum;                                   		// 0x10DC (0x0004) [0x0000000000000000]              
	int                                                HumanHeroPickupNum;                               		// 0x10E0 (0x0004) [0x0000000000000000]              
	int                                                TurnZombieQueenTimes;                             		// 0x10E4 (0x0004) [0x0000000000000000]              
	int                                                UseSkillMagnetTimes;                              		// 0x10E8 (0x0004) [0x0000000000000000]              
	int                                                wTimesBeEmpress0To30;                             		// 0x10EC (0x0004) [0x0000000000000000]              
	int                                                wTimesBeEmpress30To60;                            		// 0x10F0 (0x0004) [0x0000000000000000]              
	int                                                wTimesBeEmpress60To90;                            		// 0x10F4 (0x0004) [0x0000000000000000]              
	int                                                wTimesBeEmpress90To120;                           		// 0x10F8 (0x0004) [0x0000000000000000]              
	int                                                wTimesBeEmpress120To145;                          		// 0x10FC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2070 ];

		return pClassPointer;
	};

	int GetGameScoreForSort ( );
	void AddTimesHeadShot ( );
	void AddTimesKillZombieNoRebirth ( );
	void AddTimesZombieBeKilled ( );
	void AddTimesHeroKillZombie ( );
	void AddKilledCount ( int iCount );
	void StatHumanHero ( );
	void StatZombieInfo ( unsigned char Type, int iLel, unsigned char Result, unsigned long bRebirth );
	void AddOneZombieInfo ( unsigned char Type, unsigned char Result, unsigned long bRebirth );
	void AddZombieInfectionHumanCount ( );
	bool IsHumanCamp ( );
	bool IsZombieCamp ( );
	void RoundClear ( );
	void AddSuvCount ( );
	void AddKilledTerminatorZombie ( );
	void AddKilledZombie ( );
	void AddKilledPlayer ( );
	void AddKilledHumanHero ( );
	void AddTerminatorKilledPlayer ( );
	void AddTerminatorKilledHumanHero ( );
	void AddHumanHeroKilledTerminatorZombie ( );
	void ComputerKillCount ( );
	void AddWeaponDamage ( int iDamage, class UClass* DamageType );
	void AddCurrentTotalDamage ( int iDamage, int iOneKillDamage );
	void ComputerGameScore ( );
	void ComputerGameScoreRate ( int PlayerCount );
	void ComputerGP ( );
	void SetBeginTime ( float fTime );
	void CalcGameTime ( );
	bool GetBioLocal ( );
	void eventReplicatedEvent ( struct FName VarName );
	void AddTimesHumanWin ( );
	void AddTimesZombieWin ( );
	void eventPostBeginPlay ( );
};

UClass* ATGBioPlayerReplicationInfo::pClassPointer = NULL;

// Class TGBioGame.TGBioType
// 0x0000 (0x003C - 0x003C)
class UTGBioType : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2071 ];

		return pClassPointer;
	};

};

UClass* UTGBioType::pClassPointer = NULL;

// Class TGBioGame.TGBioAnimBlendBySlotActive
// 0x003C (0x016C - 0x0130)
class UTGBioAnimBlendBySlotActive : public UUDKAnimBlendBySlotActive
{
public:
	int                                                FastSwitchSlotType;                               		// 0x0130 (0x0004) [0x0000000000000000]              
	int                                                OriginalSwitchSlotType;                           		// 0x0134 (0x0004) [0x0000000000000000]              
	float                                              FastSwitchTime;                                   		// 0x0138 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             BranchStartBoneNameUpperBody;                     		// 0x013C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             BranchStartBoneNameLowerBody;                     		// 0x0148 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             BranchStartBoneNameRightHand;                     		// 0x0154 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             BranchStartBoneNameLeftHand;                      		// 0x0160 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2072 ];

		return pClassPointer;
	};

};

UClass* UTGBioAnimBlendBySlotActive::pClassPointer = NULL;

// Class TGBioGame.TGBioAnimNodeCopyBoneTranslation
// 0x000C (0x0154 - 0x0148)
class UTGBioAnimNodeCopyBoneTranslation : public UUDKAnimNodeCopyBoneTranslation
{
public:
	TArray< class UTGBioAnimNodeSeqWeap* >             SeqBioWeaps;                                      		// 0x0148 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2073 ];

		return pClassPointer;
	};

};

UClass* UTGBioAnimNodeCopyBoneTranslation::pClassPointer = NULL;

// Class TGBioGame.TGBioAnimNodeSeqWeap
// 0x0028 (0x0174 - 0x014C)
class UTGBioAnimNodeSeqWeap : public UUDKAnimNodeSequence
{
public:
	struct FName                                       DefaultAnim;                                      		// 0x014C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ClawAnim;                                         		// 0x0154 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SkillWeapAnim;                                    		// 0x015C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       HumanHeroBladeAnim;                               		// 0x0164 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       HumanHeroGunAnim;                                 		// 0x016C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2074 ];

		return pClassPointer;
	};

	void eventWeapTypeChanged ( struct FName NewAimProfileName );
};

UClass* UTGBioAnimNodeSeqWeap::pClassPointer = NULL;

// Class TGBioGame.TGBioHumanHeroPawn
// 0x0074 (0x1234 - 0x11C0)
class ATGBioHumanHeroPawn : public ATGBioPlayerPawnBase
{
public:
	float                                              fGeneralJumpScale;                                		// 0x11C0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              fCrouchJumpScale;                                 		// 0x11C4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bInView : 1;                                      		// 0x11C8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlaySpawnEffect : 1;                             		// 0x11C8 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bPlayCircleEffect : 1;                            		// 0x11C8 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bPlayDeadEffect : 1;                              		// 0x11C8 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	unsigned long                                      bProcessCrouched : 1;                             		// 0x11C8 (0x0004) [0x0000000000000020] [0x00000010] ( CPF_Net )
	class UParticleSystem*                             SpawnEffectTemplet;                               		// 0x11CC (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    SpawnEffectComponent;                             		// 0x11D0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             CircleEffectTemplet;                              		// 0x11D4 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    CircleEffectComponent;                            		// 0x11D8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             WeaponEffectTemplet;                              		// 0x11DC (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    WeaponEffectComponent;                            		// 0x11E0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    WeaponEffectComponent2;                           		// 0x11E4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              HumanHeroEffectFadeout;                           		// 0x11E8 (0x0004) [0x0000000000000000]              
	int                                                CurrentTotalDamage;                               		// 0x11EC (0x0004) [0x0000000000000000]              
	int                                                OneKillDamage;                                    		// 0x11F0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                OneKillCount;                                     		// 0x11F4 (0x0004) [0x0000000000000000]              
	int                                                CurAccDamage;                                     		// 0x11F8 (0x0004) [0x0000000000000000]              
	int                                                CurAccDamageCount;                                		// 0x11FC (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                AccDamageValue;                                   		// 0x1200 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             ImpactEffectTemplet;                              		// 0x1204 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  HeroRadarIcon;                                    		// 0x1208 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SoundKillZombie1;                                 		// 0x120C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SoundKillZombie2;                                 		// 0x1210 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SoundBecomeHero1;                                 		// 0x1214 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SoundBecomeHero2;                                 		// 0x1218 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SoundBecomeHero3;                                 		// 0x121C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SoundBecomeHero4;                                 		// 0x1220 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SoundBecomeHero5;                                 		// 0x1224 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           HeroWeaponClasses;                                		// 0x1228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2075 ];

		return pClassPointer;
	};

	void PlayDying ( class UClass* DamageType, struct FVector HitLoc, unsigned char DeathDir, unsigned char HitGroup );
	void RsetTrampleSkillSpeedScale ( );
	void SetTrampleSkillSpeedScale ( );
	void ProcessCrouchedClientOther ( );
	void ProcessCrouched ( );
	class USoundCue* GetKillZombieSound ( );
	void NotifyArmMeshChanged ( class ATGPlayerReplicationInfo* UTPRI );
	void LeaveABloodSplatterDecal ( struct FVector HitLoc, struct FVector HitNorm );
	void UpdateGameSettingOption ( unsigned long IsUpdateLight );
	void NotifyTeamChanged ( );
	void timeSetRefireCheckTimer ( );
	void UpdateFadeOut ( );
	void PlayHeroDeadEffect ( );
	void PlayHeroCircleEffect ( );
	void PlayHeroWeaponEffect2 ( );
	void PlayHeroWeaponEffect ( );
	void PlayHeroSpawnEffect ( );
	void PlayThirdPersonSwingMeleeWeaponAnimBeforeDamage ( unsigned long bViaReplication );
	void PlayThirdPersonStabMeleeWeaponAnimBeforeDamage ( unsigned long bViaReplication, unsigned char LocalMeleeWeaponStabCount );
	void PlayTakeHitEffects ( );
	void PlayDiedAnim ( class UClass* DamageType, unsigned char DeathDir, unsigned char HitGrou );
	void PlaySpecialDiedAnim ( );
	void eventSetWeapAnimType ( unsigned char AnimType );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void ServerTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation, unsigned char DeathDir, unsigned char HitGroup );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	void HumanHeroWeaponSet ( );
	void PendingBioWeaponSetTimer ( );
	void eventReplicatedEvent ( struct FName VarName );
	void CheckWeaponByControllerRep ( );
	void ThrowWeaponOnDeath ( );
	bool DoJump ( unsigned long bUpdating );
	void AddOneKillFeedback ( int NumToAdd );
	void AddDamageValue ( int iDamage, class UClass* DamageType );
};

UClass* ATGBioHumanHeroPawn::pClassPointer = NULL;

// Class TGBioGame.TGBioPlayerPawn
// 0x0088 (0x1248 - 0x11C0)
class ATGBioPlayerPawn : public ATGBioPlayerPawnBase
{
public:
	float                                              fSlomoScale;                                      		// 0x11C0 (0x0004) [0x0000000000000000]              
	float                                              fSlomoTime;                                       		// 0x11C4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                CurrentTotalDamage;                               		// 0x11C8 (0x0004) [0x0000000000000000]              
	int                                                OneKillDamage;                                    		// 0x11CC (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                CurAccDamage;                                     		// 0x11D0 (0x0004) [0x0000000000000000]              
	int                                                CurAccDamageCount;                                		// 0x11D4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                AccDamageValue;                                   		// 0x11D8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bCanChangeToHumanHero : 1;                        		// 0x11DC (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      GunUselimitGrop3pDirty : 1;                       		// 0x11DC (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bPlayEffect1st : 1;                               		// 0x11DC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bAntitoxicImmune : 1;                             		// 0x11DC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bItemBegin : 1;                                   		// 0x11DC (0x0004) [0x0000000000000020] [0x00000010] ( CPF_Net )
	int                                                iCurAttackUpCount;                                		// 0x11E0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              fGeneralJumpScale;                                		// 0x11E4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              fCrouchJumpScale;                                 		// 0x11E8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                GunUselimitGrop;                                  		// 0x11EC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ImpactEffectTemplet;                              		// 0x11F0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             DisarmEffectTemplet;                              		// 0x11F4 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    DisarmEffectComponent;                            		// 0x11F8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             DisarmEffect1stTemplet;                           		// 0x11FC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HumItemEffect1stTemplet;                          		// 0x1200 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  PlayerRadarIcon;                                  		// 0x1204 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SoundKillZombie1;                                 		// 0x1208 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SoundKillZombie2;                                 		// 0x120C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SoundKillZombie3;                                 		// 0x1210 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   FirstPerson1Sound;                                		// 0x1214 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   FirstPerson2Sound;                                		// 0x1218 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   FirstPerson3Sound;                                		// 0x121C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   FirstPersonSound;                                 		// 0x1220 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SecondPerson1Sound;                               		// 0x1224 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SecondPerson2Sound;                               		// 0x1228 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SecondPerson3Sound;                               		// 0x122C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   CanHumanHeroSound;                                		// 0x1230 (0x0004) [0x0000000000000000]              
	class UClass*                                      SuperWeaponClass;                                 		// 0x1234 (0x0004) [0x0000000000000000]              
	int                                                iDefenceInfectionCount;                           		// 0x1238 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                iAntitoxicInfectionCount;                         		// 0x123C (0x0004) [0x0000000000000000]              
	int                                                iGeneAugmentationItem;                            		// 0x1240 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              fItemBeginCoolDownTime;                           		// 0x1244 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2076 ];

		return pClassPointer;
	};

	void RsetTrampleSkillSpeedScale ( );
	void SetTrampleSkillSpeedScale ( );
	bool Changebag ( unsigned char T );
	void TakeRadiusDamage ( class AController* InstigatedBy, float BaseDamage, float DamageRadius, class UClass* DamageTypeClass, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser, float DamageFalloffExponent );
	class USoundCue* GetSecondPersonSound ( );
	class USoundCue* GetFirstPersonSound ( );
	class USoundCue* GetKillZombieSound ( );
	void WeaponAttachmentChanged ( );
	void SwitchWeapon ( unsigned char NewGroup );
	void PlayTakeHitEffects ( );
	void UpdateGameSettingOption ( unsigned long IsUpdateLight );
	void Destroyed ( );
	void StopHumItemEffect ( );
	void StartHumItemEffect ( );
	void StopDisarmParticleEffect ( );
	void StartDisarmParticleEffect ( );
	void StartFire ( unsigned char FireModeNum );
	void RecoverGunUselimit ( );
	void SetClientGunUselimit ( float UselimitTime );
	void RecoverGunUselimitEffect ( );
	void SetServerGunUselimit ( float UselimitTime );
	void PlaySpecialDiedAnim ( );
	bool ChangeBagTime ( );
	bool IsInHomeZone ( );
	void AddAttackUpRate ( );
	void SetDefenceInfectionCount ( int iCount );
	void PlayDying ( class UClass* DamageType, struct FVector HitLoc, unsigned char DeathDir, unsigned char HitGroup );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation, unsigned char DeathDir, unsigned char HitGroup );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void CancelAntitoxicImmune ( );
	void ServerTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void ItemChangeDamageScale ( unsigned long DoubleScale );
	void ClientUnSetItemDamageScale ( );
	void UnSetItemDamageScale ( );
	void SetItemDamageScale ( );
	void ClientSetItemDamageScale ( );
	void ServerSetItemDamageScale ( );
	float GetItemCooldownRemainTime ( );
	float GetItemCooldownRemainPercent ( );
	void AddOneKillFeedback ( int NumToAdd );
	void StartDriverHurtPawn ( int iHurt, struct FVector vPos );
	void AddDamageValue ( int iDamage, class ATGBioZombiePawn* hurtPawn );
	void ThrowWeaponOnDeath ( );
	bool DoJump ( unsigned long bUpdating );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGBioPlayerPawn::pClassPointer = NULL;

// Class TGBioGame.TGBio3PlayerPawnBase
// 0x0010 (0x1258 - 0x1248)
class ATGBio3PlayerPawnBase : public ATGBioPlayerPawn
{
public:
	unsigned long                                      bHunterCapturePawned : 1;                         		// 0x1248 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bSmokerCapturePawned : 1;                         		// 0x1248 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bDragHitHardObject : 1;                           		// 0x1248 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      CurrentSmokerSimulatedState;                      		// 0x124C (0x0001) [0x0000000000000020]              ( CPF_Net )
	class ATGBio3HostZombieBase*                       HunterCapturePawned;                              		// 0x1250 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ATGBio3HostZombieBase*                       SmokerCapturePawned;                              		// 0x1254 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2077 ];

		return pClassPointer;
	};

};

UClass* ATGBio3PlayerPawnBase::pClassPointer = NULL;

// Class TGBioGame.TGBioZombiePawn
// 0x0190 (0x1318 - 0x1188)
class ATGBioZombiePawn : public ATGBioPawn
{
public:
	TArray< class UMaterialInstanceConstant* >         ArmsMesh0MICs;                                    		// 0x1188 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         ArmsMesh1MICs;                                    		// 0x1194 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         ForeArmsMeshMICs;                                 		// 0x11A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              DropItemPercent;                                  		// 0x11AC (0x0004) [0x0000000000000000]              
	int                                                RepsawnHP;                                        		// 0x11B0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                RepsawnMinHP;                                     		// 0x11B4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class ATGBioPlayerController*                      PC_PermanentDeath;                                		// 0x11B8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ATGBioPlayerController*                      PC_LastPossess;                                   		// 0x11BC (0x0004) [0x0000000000000000]              
	struct FVector                                     LastPermanentDeathLocation;                       		// 0x11C0 (0x000C) [0x0000000000000000]              
	struct FPermanentDeathRepInfo                      PermanentDeathInfo;                               		// 0x11CC (0x003C) [0x0000000000000020]              ( CPF_Net )
	int                                                CurrentZPoint;                                    		// 0x1208 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      RestoreCondition;                                 		// 0x120C (0x0001) [0x0000000000000000]              
	unsigned char                                      ZombieType;                                       		// 0x120D (0x0001) [0x0000000000000000]              
	class ATGBioSkillBase*                             UsingSkill;                                       		// 0x1210 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bSelectTag : 1;                                   		// 0x1214 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bHealthTag : 1;                                   		// 0x1214 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bLowHealthTag : 1;                                		// 0x1214 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bProcessCrouched : 1;                             		// 0x1214 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	unsigned long                                      bGeneAugmentHPAddition : 1;                       		// 0x1214 (0x0004) [0x0000000000000000] [0x00000010] 
	TArray< class UMaterial* >                         RememberMaterials;                                		// 0x1218 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UParticleSystem*                             ImpactEffectTemplet;                              		// 0x1224 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ImpactEffectTempletByHumHero;                     		// 0x1228 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HealthEffectTemplet;                              		// 0x122C (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    HealthEffectComponent;                            		// 0x1230 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             HealthEffectSoundComponent;                       		// 0x1234 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   HealthEffectSound;                                		// 0x1238 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             LevelUpEffectTemplet;                             		// 0x123C (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    LevelUpEffectComponent;                           		// 0x1240 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class USoundCue* >                         LevelUpVoiceSound;                                		// 0x1244 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LevelUpVoiceSoundNum;                             		// 0x1250 (0x0004) [0x0000000000000000]              
	TArray< class USoundCue* >                         RegenerateVoiceSound;                             		// 0x1254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RegenerateVoiceSoundNum;                          		// 0x1260 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             DeathEffectTemplet;                               		// 0x1264 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    DeathEffectComponent;                             		// 0x1268 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterial*                                   DeathMaterial;                                    		// 0x126C (0x0004) [0x0000000000000000]              
	float                                              DeathPercent;                                     		// 0x1270 (0x0004) [0x0000000000000000]              
	float                                              DeathEffectTime;                                  		// 0x1274 (0x0004) [0x0000000000000000]              
	float                                              DeathParticleDelay;                               		// 0x1278 (0x0004) [0x0000000000000000]              
	class APointLightMovable*                          DeathLightTemplet;                                		// 0x127C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   DeathEffectSound;                                 		// 0x1280 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             SelectEffectTemplet;                              		// 0x1284 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    SelectEffectComponent;                            		// 0x1288 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterial*                                   SelectMaterial;                                   		// 0x128C (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ChangeZombieEffectTemplet;                        		// 0x1290 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    ChangeZombieEffectComponent;                      		// 0x1294 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             InfectionEffectTemplet;                           		// 0x1298 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    InfectionEffectComponent;                         		// 0x129C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   InfectionEffectSound;                             		// 0x12A0 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   InfectionEffectSoundEx;                           		// 0x12A4 (0x0004) [0x0000000000000000]              
	TArray< class USoundCue* >                         InfectionVoiceSound;                              		// 0x12A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                InfectionVoiceSoundNum;                           		// 0x12B4 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    LvEffectComponent;                                		// 0x12B8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class USoundCue* >                         InfectionPlayerVoiceSound;                        		// 0x12BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                InfectionPlayerVoiceSoundNum;                     		// 0x12C8 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   HitSound;                                         		// 0x12CC (0x0004) [0x0000000000000000]              
	class USoundCue*                                   HitHumanHeroSound;                                		// 0x12D0 (0x0004) [0x0000000000000000]              
	class UBioCharInfo*                                CurrentBioCharInfo;                               		// 0x12D4 (0x0004) [0x0000000000000000]              
	class UBioCharInfo*                                PendingBioCharInfo;                               		// 0x12D8 (0x0004) [0x0000000000000000]              
	class UMaterialEffect*                             PostProcessMaterialEffect;                        		// 0x12DC (0x0004) [0x0000000000000000]              
	class UMaterial*                                   PostProcessMaterial;                              		// 0x12E0 (0x0004) [0x0000000000000000]              
	class UUDKSkeletalMeshComponent*                   WeaponComponent1PL;                               		// 0x12E4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UUDKSkeletalMeshComponent*                   WeaponComponent1PR;                               		// 0x12E8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UUDKSkeletalMeshComponent*                   WeaponComponent3PL;                               		// 0x12EC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UUDKSkeletalMeshComponent*                   WeaponComponent3PR;                               		// 0x12F0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   ZombieLastoneSound;                               		// 0x12F4 (0x0004) [0x0000000000000000]              
	class UAnimNodeScaleRateBySpeed*                   ZombiePawnAnimRateSlowNode;                       		// 0x12F8 (0x0004) [0x0000000000000000]              
	class UAnimNodeScaleRateBySpeed*                   ZombiePawnAnimRateFastNode;                       		// 0x12FC (0x0004) [0x0000000000000000]              
	class UUDKAnimBlendBySpeed*                        ZombiePawnSpeedBlendNode;                         		// 0x1300 (0x0004) [0x0000000000000000]              
	struct FString                                     PendingCharInfoClassName;                         		// 0x1304 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentTotalDamage;                               		// 0x1310 (0x0004) [0x0000000000000000]              
	int                                                OneKillDamage;                                    		// 0x1314 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2078 ];

		return pClassPointer;
	};

	void ProcessCrouchedClientOther ( );
	void ProcessCrouched ( );
	void MeleeSuicide ( class APawn* EventInstigator );
	void NotifySkillFired ( class ATGBioSkillBase* TheSkill );
	void CacheAnimNodes ( );
	void SpecializekillEffect ( );
	void SetMeshVisibility ( unsigned long bVisible );
	void eventBecomeViewTarget ( class APlayerController* PC );
	void NotifyArmMeshChanged ( class ATGPlayerReplicationInfo* UTPRI );
	void PlayDyingSound ( );
	void Destroyed ( );
	void SetWeapAnimType ( unsigned char AnimType );
	class USoundCue* GetRegenerateVoiceSound ( );
	class USoundCue* GetInfectionPlayerVoiceSound ( );
	class USoundCue* GetLevelUpVoiceSound ( );
	class USoundCue* GetInfectionVoiceSound ( );
	void PlayLevelUpSound ( );
	void PlayLevelUpEffect ( );
	void PlayRegenerateVoiceSound ( );
	void StopHealthSound ( );
	void PlayHealthSound ( );
	void PlayHitHumanHeroSound ( );
	void PlayHitSound ( );
	void DirtyLowHealthTag ( unsigned long LowHealthTag );
	void DirtyHealthTag ( unsigned long HealthTag );
	void DirtySelectTag ( );
	void DeathParticleEffect ( );
	void DeathLightEffect ( );
	void TickDeathEffectMaterial ( );
	void PlayDeathSound ( );
	void PlayDeathEffect ( );
	void ResetSelectMaterial ( );
	void PlaySelectEffect ( );
	void PlayChangeZombieEffect ( );
	void PlayInfectionSound ( );
	void PlayInfectionEffect ( );
	void StopLowHealthEffect ( );
	void PlayLowHealthEffect ( );
	void StopHealthEffect ( );
	void PlayHealthEffect ( );
	void PlaySpecialDiedAnim ( );
	void SleepRigidBody ( );
	void DoingDeathAnim ( );
	void LeaveABloodSplatterDecal ( struct FVector HitLoc, struct FVector HitNorm );
	void PlayBloodEffectInDying ( class UClass* TheDamageType, struct FTraceHitInfo HitInfo, struct FVector HitLocation );
	void PlayThirdPersonSwingMeleeWeaponAnimBeforeDamage ( unsigned long bViaReplication );
	void PlayThirdPersonStabMeleeWeaponAnimBeforeDamage ( unsigned long bViaReplication, unsigned char LocalMeleeWeaponStabCount );
	void PlayTakeHitEffects ( );
	void eventTick ( float DeltaTime );
	bool NotifyPendingBioCharInfo ( class UBioCharInfo* PendingCharInfo );
	bool SetCharInfo ( struct FString CharInfoClassName );
	bool LoadBioCharInfo ( );
	void WaitGRIToLoadBioCharInfo ( );
	bool LoadThirdPersonCharInfo ( class UBioCharInfo* CharInfo, unsigned long bimmediateSetMat );
	void TimeWeaponComponent ( );
	bool LoadFirstPersonCharInfo ( class UBioCharInfo* CharInfo, unsigned long bimmediateSetMat );
	void GotZPoint ( int GotPoint );
	void PlayDying ( class UClass* DamageType, struct FVector HitLoc, unsigned char DeathDir, unsigned char HitGroup );
	void PlayDiedLocalAnim ( class UClass* DamageType, unsigned char DeathDir, unsigned char HitGroup );
	void PlayDiedAnim ( class UClass* DamageType, unsigned char DeathDir, unsigned char HitGroup );
	bool DoJump ( unsigned long bUpdating );
	void UpdateGameSettingOption ( unsigned long IsUpdateLight );
	void NotifyTeamChanged ( );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation, unsigned char DeathDir, unsigned char HitGroup );
	bool FilterZombieKilledWeaponNoRevive ( class ATGBioPlayerController* PC, class UClass* DamageType );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	void ZombieWeaponSet ( );
	void PendingBioWeaponSetTimer ( );
	void SetBodyMaterialScalarParameterValue ( struct FName ParameterName, float Value );
	void SetArmsMaterialScalarParameterValue ( struct FName ParameterName, float Value );
	void VerifyArmsMaterialInstance ( );
	void AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, int* InDamage, struct FVector* Momentum, class UClass** DamageType );
	void BioZombieBasePostPossess ( unsigned long Open );
	void DelayedPermanentDeath ( );
	void ProcessPermanentDeath ( );
	void eventReplicatedEvent ( struct FName VarName );
	void CheckWeaponByControllerRep ( );
	void ThrowWeaponOnDeath ( );
	void CalcDamageSlowdown ( );
	void ResetBufferSlomoValue ( );
	int GetBaseHealthMaxByNumValidPlayers ( );
	void AntitoxicLevelAdd ( );
	void SetLevelInfo ( struct FZombieChangeNecessity ZombieChange );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void AddZombieDamageFeedback ( int Damage );
	void AddDamageValue ( int iDamage );
	void PlayTakeHitSound ( unsigned char Damage, class UClass* DamageType );
	void ServerTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	bool Changebag ( unsigned char T );
	bool IsInHomeZone ( );
	void UpdateAnimTreeForZombieDataChange ( class UBioCharInfo* CharInfo );
	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void ResetZombiePawnSimulateGravity ( unsigned long bGravity );
};

UClass* ATGBioZombiePawn::pClassPointer = NULL;

// Class TGBioGame.TGBioHostZombie
// 0x005C (0x1374 - 0x1318)
class ATGBioHostZombie : public ATGBioZombiePawn
{
public:
	int                                                ZOMBIE_MAX_LEVEL;                                 		// 0x1318 (0x0004) [0x0000000000000000]              
	TArray< struct FLevelUpInfo >                      LevelModifier;                                    		// 0x131C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FLevelInfo                                  CurrentLevel;                                     		// 0x1328 (0x0008) [0x0000000000000020]              ( CPF_Net )
	int                                                SavedCurrentLevel;                                		// 0x1330 (0x0004) [0x0000000000000000]              
	struct FBaseHealthHostZombie                       BaseHealthMaxs[ 0x3 ];                            		// 0x1334 (0x0030) [0x0000000000004000]              ( CPF_Config )
	class ATGBioZombiePawn*                            AbsoreObjectPawn;                                 		// 0x1364 (0x0004) [0x0000000000000000]              
	float                                              Interval_AbsoreZombieDeadBody;                    		// 0x1368 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              StartAbsoreTime;                                  		// 0x136C (0x0004) [0x0000000000000000]              
	unsigned long                                      bStartAbsoreZombieDeadBody : 1;                   		// 0x1370 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2079 ];

		return pClassPointer;
	};

	void SleepRelivePhysics ( );
	void DoingDeathRelivePhysics ( );
	void PlayChangeZombieEffect ( );
	void PlayLevelUpSound ( );
	void PlayLevelUpEffect ( );
	void LvParticleEffect ( int Level );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation, unsigned char DeathDir, unsigned char HitGroup );
	void CancelAbsoreZombieDeadBody ( );
	void ServerStopAbsoreZombieDeadBody ( );
	void StopAbsoreZombieDeadBody ( );
	void ClientPerformAsboreZombieDeadBody ( class ATGBioZombiePawn* AbsoreBodyPawn );
	void ServerPerformAsboreZombieDeadBody ( class ATGBioZombiePawn* AbsoreBodyPawn );
	void StartAbsoreZombieDeadBody ( );
	void PerformAsboreZombieDeadBody ( class ATGBioZombiePawn* ObjPawn );
	void GotZPoint ( int GotPoint );
	void DelayedPermanentDeath ( );
	void ProcessPermanentDeath ( );
	void AntitoxicLevelAdd ( );
	void eventReplicatedEvent ( struct FName VarName );
	void CheckWeaponByControllerRep ( );
	void InternalSetLevelInfo ( struct FZombieChangeNecessity ZombieChange );
	int GetBaseHealthMaxByNumValidPlayers ( );
	void SetLevelInfo ( struct FZombieChangeNecessity ZombieChange );
	int LevelUP ( );
	void eventTick ( float DeltaTime );
};

UClass* ATGBioHostZombie::pClassPointer = NULL;

// Class TGBioGame.TGBio3HostZombieBase
// 0x0008 (0x137C - 0x1374)
class ATGBio3HostZombieBase : public ATGBioHostZombie
{
public:
	class APZZombieSkillBase*                          Bio3UsingSkill;                                   		// 0x1374 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ATGBioPlayerController*                      SkilledController;                                		// 0x1378 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2080 ];

		return pClassPointer;
	};

	void eventReplicatedEvent ( struct FName VarName );
	void SkillTraceActors ( class UClass* BaseClass, struct FVector End, struct FVector Start, struct FVector Extent, int ExtraTraceFlags, class AActor** Actor, struct FVector* HitLoc, struct FVector* HitNorm, struct FTraceHitInfo* HitInfo );
	bool ProcessSlope ( float GlobalZ, float* ResultZ );
	bool SeekScarp ( struct FVector* ZombieSkillJustVector );
	struct FVector eventGetLastRopeOutput ( );
	void eventHunterSwoopActor ( struct FVector HitNormal, class AActor* FloorActor );
};

UClass* ATGBio3HostZombieBase::pClassPointer = NULL;

// Class TGBioGame.TGAttachment_HostZombieClaw
// 0x000C (0x0524 - 0x0518)
class ATGAttachment_HostZombieClaw : public ATGWeaponAttachment
{
public:
	class UMaterialInstanceConstant*                   ZombieImpactEffect01;                             		// 0x0518 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   ZombieImpactEffect02;                             		// 0x051C (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   ZombieImpactEffect03;                             		// 0x0520 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 218907 ];

		return pClassPointer;
	};

	struct FMaterialImpactEffect GetImpactEffect ( class UPhysicalMaterial* HitMaterial );
	float GetDecalRotation ( );
	void PlayImpactEffects ( struct FVector HitLocation );
	void CauseMuzzleFlash ( );
	void ThirdPersonFireEffects ( struct FVector HitLocation );
};

UClass* ATGAttachment_HostZombieClaw::pClassPointer = NULL;

// Class TGBioGame.TGAttachment_ButcherZombieClaw
// 0x0000 (0x0524 - 0x0524)
class ATGAttachment_ButcherZombieClaw : public ATGAttachment_HostZombieClaw
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 218939 ];

		return pClassPointer;
	};

	float GetDecalRotation ( );
};

UClass* ATGAttachment_ButcherZombieClaw::pClassPointer = NULL;

// Class TGBioGame.TGAttachment_GhostNinjaZombieClaw
// 0x0000 (0x0524 - 0x0524)
class ATGAttachment_GhostNinjaZombieClaw : public ATGAttachment_HostZombieClaw
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 218944 ];

		return pClassPointer;
	};

	float GetDecalRotation ( );
};

UClass* ATGAttachment_GhostNinjaZombieClaw::pClassPointer = NULL;

// Class TGBioGame.TGAttachment_HulkZombieClaw
// 0x0000 (0x0524 - 0x0524)
class ATGAttachment_HulkZombieClaw : public ATGAttachment_HostZombieClaw
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 219023 ];

		return pClassPointer;
	};

	float GetDecalRotation ( );
};

UClass* ATGAttachment_HulkZombieClaw::pClassPointer = NULL;

// Class TGBioGame.TGAttachment_InvisibleZombieClaw
// 0x0000 (0x0524 - 0x0524)
class ATGAttachment_InvisibleZombieClaw : public ATGAttachment_HostZombieClaw
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 219028 ];

		return pClassPointer;
	};

	float GetDecalRotation ( );
};

UClass* ATGAttachment_InvisibleZombieClaw::pClassPointer = NULL;

// Class TGBioGame.TGAttachment_TerminatorClaw
// 0x000C (0x0524 - 0x0518)
class ATGAttachment_TerminatorClaw : public ATGWeaponAttachment
{
public:
	class UMaterialInstanceConstant*                   ZombieImpactEffect01;                             		// 0x0518 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   ZombieImpactEffect02;                             		// 0x051C (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   ZombieImpactEffect03;                             		// 0x0520 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 219033 ];

		return pClassPointer;
	};

	struct FMaterialImpactEffect GetImpactEffect ( class UPhysicalMaterial* HitMaterial );
	float GetDecalRotation ( );
	void PlayImpactEffects ( struct FVector HitLocation );
	void ChangeVisibility ( unsigned long bIsVisible );
	struct FVector GetEffectLocation ( );
	void FirstPersonFireEffects ( class AWeapon* PawnWeapon, struct FVector HitLocation );
	void SpawnTracer ( struct FVector EffectLocation, struct FVector HitLocation );
	void StopMuzzleFlash ( );
	void CauseMuzzleFlash ( );
	void MuzzleFlashTimer ( );
	void ThirdPersonFireEffects ( struct FVector HitLocation );
	void DetachFrom ( class USkeletalMeshComponent* MeshCpnt );
	void SetWeaponOverlayFlags ( class AUTPawn* OwnerPawn );
	void CreateOverlayMesh ( );
	void SetSkin ( class UMaterial* NewMaterial );
};

UClass* ATGAttachment_TerminatorClaw::pClassPointer = NULL;

// Class TGBioGame.TGBioZombieMeleeWeapon
// 0x0010 (0x0814 - 0x0804)
class ATGBioZombieMeleeWeapon : public ATGRealMeleeWeapon
{
public:
	struct FName                                       SavedPlayAnimSeq;                                 		// 0x0804 (0x0008) [0x0000000000000000]              
	float                                              SavedPlayDuration;                                		// 0x080C (0x0004) [0x0000000000000000]              
	float                                              ZombieMeleeWeaponNotifyTime;                      		// 0x0810 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 219197 ];

		return pClassPointer;
	};

	class UAnimNodeSequence* GetWeaponAnimNodeSeq ( );
	void TimeToAnimEnd ( );
	void PlayWeaponAnimation ( struct FName Sequence, float fDesiredDuration, unsigned long bLoop, class USkeletalMeshComponent* SkelMesh );
};

UClass* ATGBioZombieMeleeWeapon::pClassPointer = NULL;

// Class TGBioGame.TGBioSkillBase
// 0x00B4 (0x0288 - 0x01D4)
class ATGBioSkillBase : public AActor
{
public:
	class APlayerController*                           OwnerPC;                                          		// 0x01D4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ATGBioSkillManager*                          OwnerSkillManager;                                		// 0x01D8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      ZombieType;                                       		// 0x01DC (0x0001) [0x0000000000000000]              
	class ATGBioSkillBase*                             Next;                                             		// 0x01E0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FString                                     Title;                                            		// 0x01E4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bInitiative : 1;                                  		// 0x01F0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSuccessfulEnd : 1;                               		// 0x01F0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bForceQuitCoolDown : 1;                           		// 0x01F0 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bCooldownTimeSuccessful : 1;                      		// 0x01F0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bSkillFov : 1;                                    		// 0x01F0 (0x0004) [0x0000000000004000] [0x00000010] ( CPF_Config )
	unsigned long                                      bLifeCycleTime : 1;                               		// 0x01F0 (0x0004) [0x0000000000004000] [0x00000020] ( CPF_Config )
	unsigned long                                      bQuitSkillFiring : 1;                             		// 0x01F0 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bLastingSkill : 1;                                		// 0x01F0 (0x0004) [0x0000000000000000] [0x00000080] 
	float                                              SingTime;                                         		// 0x01F4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              FireTime;                                         		// 0x01F8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              PlusTime;                                         		// 0x01FC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CooldownTime;                                     		// 0x0200 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class ATGBioSkillComponentBase*                    SkillComponentChain;                              		// 0x0204 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              LastSingTime;                                     		// 0x0208 (0x0004) [0x0000000000000000]              
	float                                              LastFireTime;                                     		// 0x020C (0x0004) [0x0000000000000000]              
	float                                              LastPlusTime;                                     		// 0x0210 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  SkillLogo;                                        		// 0x0214 (0x0004) [0x0000000000000000]              
	class ATGBioZombiePawn*                            PlayingEffectPawn;                                		// 0x0218 (0x0004) [0x0000000000000000]              
	class UMaterialEffect*                             FirstPersonPostProcessMaterialEffect;             		// 0x021C (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FirstPersonEffectTemplate;                        		// 0x0220 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    FirstPersonEffectPSC;                             		// 0x0224 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterial*                                   FirstPersonPostProcessEffectPSC;                  		// 0x0228 (0x0004) [0x0000000000000000]              
	float                                              SkillFov;                                         		// 0x022C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CurrentSkillFov;                                  		// 0x0230 (0x0004) [0x0000000000000000]              
	struct FName                                       FirstPersonAnimName;                              		// 0x0234 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             ThirdPersonEffectTemplate1;                       		// 0x023C (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    ThirdPersonEffectPSC1;                            		// 0x0240 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       ThirdPersonEffectSocketName1;                     		// 0x0244 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             ThirdPersonEffectTemplate2;                       		// 0x024C (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    ThirdPersonEffectPSC2;                            		// 0x0250 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       ThirdPersonEffectSocketName2;                     		// 0x0254 (0x0008) [0x0000000000000000]              
	struct FName                                       ThirdPersonAnimName;                              		// 0x025C (0x0008) [0x0000000000000000]              
	struct FName                                       EffectMICParameterName;                           		// 0x0264 (0x0008) [0x0000000000000000]              
	float                                              EffectMICValue;                                   		// 0x026C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   EffectSound;                                      		// 0x0270 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   EffectSoundEx;                                    		// 0x0274 (0x0004) [0x0000000000000000]              
	float                                              CostHealth;                                       		// 0x0278 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                CycleTime;                                        		// 0x027C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                CurrentCycleTime;                                 		// 0x0280 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              ModifCooldownTime;                                		// 0x0284 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 219323 ];

		return pClassPointer;
	};

	bool CanDoSpecailMove ( float TolerateTime );
	void PlayerEffect ( );
	void CheckAllowUseSkill ( );
	void Abort ( );
	void Start ( );
	void UnexpectedStopEffect ( );
	void UnexpectedStopSkillValue ( );
	void ResetSkillCoolTime ( );
	void ResetSkill ( unsigned long ResetCoolTime );
	void StopThirdPersonEffect ( );
	void StopFirstPersonEffect ( );
	void StopEffect ( );
	void PlayThirdPersonEffect ( );
	void PlayFirstPersonEffect ( );
	void PlayEffect ( class ATGBioZombiePawn* P );
	void TimerUnNudgeSkillComponents ( );
	void UnNudgeSkillComponents ( );
	void NudgeSkillComponents ( );
	bool SkillPreProcesses ( );
	bool CanNudgeSkillComponents ( );
	float GetPlusRemainTime ( );
	bool IsPlusing ( );
	float GetCooldownRemainPercent ( );
	float GetCooldownElipseTime ( );
	float GetCooldownRemainTime ( );
	bool IsCooldowning ( );
	void SetModifCooldownTime ( float Time );
	bool Initialize ( class APlayerController* InOwnerPC, class ATGBioSkillManager* InOwnerSkillManager );
	void PostBeginInitialize ( );
	bool AddSkillComponent ( class ATGBioSkillComponentBase* NewItem );
	void eventDestroyed ( );
};

UClass* ATGBioSkillBase::pClassPointer = NULL;

// Class TGBioGame.TGBioDmgType_HeroBlade
// 0x0000 (0x0610 - 0x0610)
class UTGBioDmgType_HeroBlade : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 219353 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGBioDmgType_HeroBlade::pClassPointer = NULL;

// Class TGBioGame.TGBioHUD
// 0x00E0 (0x2010 - 0x1F30)
class ATGBioHUD : public ATGTeamHUD
{
public:
	struct FVector                                     ViewPoint;                                        		// 0x1F30 (0x000C) [0x0000000000000000]              
	struct FRotator                                    ViewRotation;                                     		// 0x1F3C (0x000C) [0x0000000000000000]              
	class UTGBioHUD_PlayerTip*                         HUDPlayerTip;                                     		// 0x1F48 (0x0004) [0x0000000000000000]              
	class UTGBioHUD_ChangeHumanHero*                   HUDHumanHero;                                     		// 0x1F4C (0x0004) [0x0000000000000000]              
	class UTGBioZombieHUD_SkillInfo*                   HUDSkillInfo;                                     		// 0x1F50 (0x0004) [0x0000000000000000]              
	class UTGBioHumHUD_ItemInfo*                       HUDHumItemInfo;                                   		// 0x1F54 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             MHMRemainingSecondsPS;                            		// 0x1F58 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             MechaDamage100PS;                                 		// 0x1F5C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             DirverKillPS;                                     		// 0x1F60 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             MatchInfoPS;                                      		// 0x1F64 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             HumanHeroState;                                   		// 0x1F68 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             CanChangeHumanHero;                               		// 0x1F6C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             BecomeHumanHeroState;                             		// 0x1F70 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             WeaponArrived;                                    		// 0x1F74 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             KilledByMeeWeapon;                                		// 0x1F78 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             KilledByHeroGun;                                  		// 0x1F7C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             InfectedEffects;                                  		// 0x1F80 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             KillHumanHeroFeedback;                            		// 0x1F84 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class USoundCue*                                   Sound10SecRoundStart;                             		// 0x1F88 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   Sound9SecRoundStart;                              		// 0x1F8C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   Sound8SecRoundStart;                              		// 0x1F90 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   Sound7SecRoundStart;                              		// 0x1F94 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   Sound6SecRoundStart;                              		// 0x1F98 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   Sound5SecRoundStart;                              		// 0x1F9C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   Sound4SecRoundStart;                              		// 0x1FA0 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   Sound3SecRoundStart;                              		// 0x1FA4 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   Sound2SecRoundStart;                              		// 0x1FA8 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   Sound1SecRoundStart;                              		// 0x1FAC (0x0004) [0x0000000000000000]              
	class USoundCue*                                   Sound20SecRoundStart;                             		// 0x1FB0 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SoundRandomWeaponArrived;                         		// 0x1FB4 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SoundChangeToHero;                                		// 0x1FB8 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SoundChangeToHero2;                               		// 0x1FBC (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SoundChangeToFemaleHero;                          		// 0x1FC0 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  MechaScreenUp;                                    		// 0x1FC4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  MechaScreenDown;                                  		// 0x1FC8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  MechaScreenLeft;                                  		// 0x1FCC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  MechaScreenRight;                                 		// 0x1FD0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  MechaScreenIconBorder;                            		// 0x1FD4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  HumanHeroBBIcon;                                  		// 0x1FD8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  VSIcon;                                           		// 0x1FDC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  T2PScreenIconIcon;                                		// 0x1FE0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  P2TScreenIconIcon;                                		// 0x1FE4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  HumUseItemIcon;                                   		// 0x1FE8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class USoundCue*                                   NormalKillSound;                                  		// 0x1FEC (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  DriftIcon100;                                     		// 0x1FF0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  DriftIcon500;                                     		// 0x1FF4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     FeedbackScreenLoc;                                		// 0x1FF8 (0x000C) [0x0000000000000000]              
	class UTGBioHUDDriveManage*                        HUDDriveMgr;                                      		// 0x2004 (0x0004) [0x0000000000000000]              
	int                                                iShowHurtValue;                                   		// 0x2008 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             CTMRocketKillPS;                                  		// 0x200C (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 219363 ];

		return pClassPointer;
	};

	void DeletePlayerTipMessage ( );
	void ShowVolumeTip ( struct FString Tip, float Duration );
	void RemovePropMessage ( );
	void ClientRoundReset ( );
	void RoundReset ( );
	void AddGeneAugmentationAddHpMessage ( class APlayerReplicationInfo* PRI, float Duration );
	void AddProtectTitleMessage ( class APlayerReplicationInfo* PRI, int Switch, float Duration );
	void DeleteZombieAbsoreTitleMessage ( );
	void AddZombieAbsoreTitleMessage ( class APlayerReplicationInfo* PRI, float Duration );
	void AddZombieSelectSucceedMessage ( class APlayerReplicationInfo* PRI, float Duration );
	void UseSkillTrampleCasualiesFeedbackMessage ( class APlayerReplicationInfo* PRI, float Duration );
	void UseFlyCutterSkillAgainstFeedbackMessage ( class APlayerReplicationInfo* PRI, float Duration );
	void UseSkillFeedBackMessage ( class APlayerReplicationInfo* PRI, float Duration, int inSwitch );
	void DeleteUseSkillCountDownMessage ( );
	void AddUseSkillCountDownMessage ( class APlayerReplicationInfo* PRI, float Duration );
	void AddUseSkillAllowMessage ( class APlayerReplicationInfo* PRI, float Duration, int inSwitch );
	void DeleteZombieReviveMessage ( );
	void AddZombieReviveMessage ( class APlayerReplicationInfo* PRI, float Duration, int inSwitch );
	void AddTerminatorByKillMessage ( class APlayerReplicationInfo* PRI, float Duration );
	void AddKillZombieUseHeroGunMessage ( class APlayerReplicationInfo* PRI, float Duration );
	void AddKillZombieUseMeeMessage ( class APlayerReplicationInfo* PRI, float Duration );
	void AddZombieGiveFailMessage ( class APlayerReplicationInfo* PRI, float Duration );
	void AddHumanHeroDieMessage ( class APlayerReplicationInfo* PRI, float Duration );
	void AddRoundStartTimerMessage ( class APlayerReplicationInfo* PRI, int Duration );
	void AddTerminatorMessage ( class APlayerReplicationInfo* PRI, float Duration );
	void AddHumanAttackMessage ( class APlayerReplicationInfo* PRI, float Duration );
	void AddRandomPickupMessage ( class APlayerReplicationInfo* PRI, float Duration, struct FString weaponStr );
	void AddFetchedPropMessage ( class APlayerReplicationInfo* PRI, unsigned char FetchedPropType, float Duration );
	void AddKilledByHeroGunWeaponFeedback ( );
	void AddKilledByMeeWeaponFeedback ( );
	void AddWeaponArrivedFeedback ( );
	void AddBecomeHumanHeroStateFeedback ( );
	void AddCanChangeHumanHeroFeedback ( );
	void AddHumanHeroStateFeedback ( );
	void AddKillHumanHeroFeedback ( );
	void AddMatchInfoMessageFeedback ( );
	void DebugFeedback ( int Index, int MultiKillLevel );
	void AddZombieDamageFeedback ( int Damage );
	void AddOneKillFeedback ( int NumToAdd );
	void DisplayZombieAbsoringProgressBar ( );
	void AddKillFeedBackMessage ( class UClass* DamageType, int MultiKillLevel, int Priority, unsigned long bUseInPriority, class APlayerReplicationInfo* KillerPRI, class APlayerReplicationInfo* KilledPRI, int OneShotKillNum, unsigned long bIsOneShotDeath, unsigned long bThroughWall );
	void DisplayAvatar ( );
	void NotifyZombieRestoreHP ( unsigned long bRestore );
	void AddTimerMessageFeedback ( int RemainingSeconds );
	void DisplayTeamPopulation ( );
	void DisplayTeamScore ( );
	void DisplayVS ( );
	void DrawLivingHud ( );
	void DisplayAccumulateScore ( );
	void DrawRandomWeaponIcon ( class ATGBioPickupFactoryBase* inputWF, struct FVector CameraPosition, struct FRotator cameraRot );
	void DrawRadWeaponIcon ( );
	void DrawOneHumanHero ( class ATGBioHumanHeroPawn* TPawn, struct FVector CameraPosition, struct FRotator cameraRot );
	void DrawHumanHeroNameAndIcon ( );
	void DrawHumUseItemScreenLoc ( );
	void DrawTerminatorScreenLoc ( );
	void DisplaySpawnProtectionProgress ( );
	void DrawHUD ( );
	void AddEndGameIcon ( int EndGameIndex );
	void PostBeginPlay ( );
	void ShowHurtPawn ( );
	void SetHurtValue ( );
	void DropDriverSkill ( );
	void StartDriverSkill ( );
	void StartDriverChangeHumanHero ( );
	void StartDriverHurtPawn ( int iHurt, struct FVector vPos );
	void StartDriveOneKill ( );
	void UpdateFeedbackScreenLoc ( );
	bool DrawDriveTexture ( float StartTime, float Duration, class UTexture2D* Tex, struct FVector2D StartPos, struct FVector2D DestPos, struct FVector2D ScaleRange, struct FVector2D AlphaRange, unsigned long bAlwaysDisplay );
};

UClass* ATGBioHUD::pClassPointer = NULL;

// Class TGBioGame.TGDmgType_HeroGun
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_HeroGun : public UTGDmgType_XM25
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 219421 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_HeroGun::pClassPointer = NULL;

// Class TGBioGame.TGBioDmgType_HeroBow
// 0x0000 (0x0638 - 0x0638)
class UTGBioDmgType_HeroBow : public UTGDmgType_HeroGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 219422 ];

		return pClassPointer;
	};

};

UClass* UTGBioDmgType_HeroBow::pClassPointer = NULL;

// Class TGBioGame.TGBioDmgType_HeroBowArrow
// 0x0000 (0x0638 - 0x0638)
class UTGBioDmgType_HeroBowArrow : public UTGDmgType_ExplodeGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 219423 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGBioDmgType_HeroBowArrow::pClassPointer = NULL;

// Class TGBioGame.TGBioMessage_KillZombieUseMee
// 0x0000 (0x0064 - 0x0064)
class UTGBioMessage_KillZombieUseMee : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 219433 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMessage_KillZombieUseMee::pClassPointer = NULL;

// Class TGBioGame.TGBioMessage_KillZombieUseHeroGun
// 0x0000 (0x0064 - 0x0064)
class UTGBioMessage_KillZombieUseHeroGun : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 219434 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMessage_KillZombieUseHeroGun::pClassPointer = NULL;

// Class TGBioGame.TGBioZombieInventoryManager
// 0x0000 (0x022C - 0x022C)
class ATGBioZombieInventoryManager : public ATGInventoryManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 219652 ];

		return pClassPointer;
	};

	bool HandlePickupQuery ( class UClass* ItemClass, class AActor* Pickup );
};

UClass* ATGBioZombieInventoryManager::pClassPointer = NULL;

// Class TGBioGame.TGBioMessage_GeneAugmentationAddHp
// 0x0000 (0x0064 - 0x0064)
class UTGBioMessage_GeneAugmentationAddHp : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 219689 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMessage_GeneAugmentationAddHp::pClassPointer = NULL;

// Class TGBioGame.TGBioWeap_HostZombieMeleeWeapon
// 0x0090 (0x08A4 - 0x0814)
class ATGBioWeap_HostZombieMeleeWeapon : public ATGBioZombieMeleeWeapon
{
public:
	struct FWeaponLevelUpInfo                          WeaponLevelModifier[ 0x3 ];                       		// 0x0814 (0x0090) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 219712 ];

		return pClassPointer;
	};

	void SetupArmsAnim ( );
	void PlayFirstPersonAnim ( );
	void UpdateLevelInfoFromInstigator ( );
};

UClass* ATGBioWeap_HostZombieMeleeWeapon::pClassPointer = NULL;

// Class TGBioGame.TGBioMessage_ZombieAbsoreTitle
// 0x0000 (0x0064 - 0x0064)
class UTGBioMessage_ZombieAbsoreTitle : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 219745 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMessage_ZombieAbsoreTitle::pClassPointer = NULL;

// Class TGBioGame.TGBioPlayerInventoryManager
// 0x0038 (0x0264 - 0x022C)
class ATGBioPlayerInventoryManager : public ATGInventoryManager
{
public:
	float                                              HumanWeaponDamageScale;                           		// 0x022C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              HumanClipAmmoCountScale;                          		// 0x0230 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              HumanCarriedAmmoCountScale;                       		// 0x0234 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              fAddDamageScale;                                  		// 0x0238 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              fMaxDamageScale;                                  		// 0x023C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              fCurDamageScale;                                  		// 0x0240 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                iCurDamageScale;                                  		// 0x0244 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bSkillDamageDoubleScale : 1;                      		// 0x0248 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FBioSpecialWeaponDamageInfo >       WeaponDamageInfos;                                		// 0x024C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct ATGBioPlayerInventoryManager_FWeaponPropertySubstitution > WeaponPropertySubstitutions;                      		// 0x0258 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 219969 ];

		return pClassPointer;
	};

	void AddAllFunctionalItem ( class ATGPlayerReplicationInfo* PRI );
	bool HandlePickupQuery ( class UClass* ItemClass, class AActor* Pickup );
	bool CanPickup ( class UClass* ItemClass );
	float ProcessBioSpecialWeaponDamage ( class AWeapon* InWeap );
	void AddDamageScale ( );
	void UpdateDamageScale ( );
	void SetWeaponDamageScale ( class ATGRealWeapon* CreatedWeapon );
	class AInventory* CreateInventory ( class UClass* NewInventoryItemClass, unsigned long bDoNotActivate );
	bool AddInventory ( class AInventory* NewItem, unsigned long bDoNotActivate );
	bool AddInventoryByGroup ( class AInventory* NewItem, unsigned long bDoNotActivate );
	bool IsUseableInventory ( class UClass* ItemClass );
	void ClientWeaponSet ( class AWeapon* NewWeapon, unsigned long bOptionalSet, unsigned long bDoNotActivate );
	void eventPostBeginPlay ( );
};

UClass* ATGBioPlayerInventoryManager::pClassPointer = NULL;

// Class TGBioGame.TGBioDmgType_MeleeWeapon
// 0x0000 (0x0610 - 0x0610)
class UTGBioDmgType_MeleeWeapon : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 219991 ];

		return pClassPointer;
	};

};

UClass* UTGBioDmgType_MeleeWeapon::pClassPointer = NULL;

// Class TGBioGame.TGBioMessage_HumProtect
// 0x0000 (0x0064 - 0x0064)
class UTGBioMessage_HumProtect : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 219992 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMessage_HumProtect::pClassPointer = NULL;

// Class TGBioGame.TGBioTerminatorZombie
// 0x0030 (0x1348 - 0x1318)
class ATGBioTerminatorZombie : public ATGBioZombiePawn
{
public:
	int                                                BaseHealthMaxLev1;                                		// 0x1318 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                BaseHealthMaxLev2;                                		// 0x131C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                BaseHealthMaxLev3;                                		// 0x1320 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                BaseHealthMaxLev4;                                		// 0x1324 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FSetTerminatorCharInfo                      TerminatorCharInfo;                               		// 0x1328 (0x0008) [0x0000000000000020]              ( CPF_Net )
	struct FTerminatorInfo                             Info;                                             		// 0x1330 (0x000C) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     CharInfoClassName;                                		// 0x133C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 219995 ];

		return pClassPointer;
	};

	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation, unsigned char DeathDir, unsigned char HitGroup );
	void DeathParticleEffect ( );
	void PlayChangeZombieEffect ( );
	int GetBaseHealthMaxByNumValidPlayers ( );
	void SetTerminatorInfo ( unsigned char ZombieChangeType );
	void SetLevelInfo ( struct FZombieChangeNecessity ZombieChange );
	void eventTick ( float DeltaTime );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGBioTerminatorZombie::pClassPointer = NULL;

// Class TGBioGame.TGBioMessage_FlyCutterSkillAgainstFeedback
// 0x0000 (0x0064 - 0x0064)
class UTGBioMessage_FlyCutterSkillAgainstFeedback : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220033 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMessage_FlyCutterSkillAgainstFeedback::pClassPointer = NULL;

// Class TGBioGame.TGBioItem_Jerrican
// 0x002C (0x0200 - 0x01D4)
class ATGBioItem_Jerrican : public AActor
{
public:
	int                                                CurDamage;                                        		// 0x01D4 (0x0004) [0x0000000000000000]              
	class ULightEnvironmentComponent*                  LightEnvironment;                                 		// 0x01D8 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	class UClass*                                      ExplosionTemplateClass;                           		// 0x01DC (0x0004) [0x0000000000000000]              
	class UTGBioJerricanExplosion*                     ExplosionTemplate;                                		// 0x01E0 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        SMesh1;                                           		// 0x01E4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        SMesh2;                                           		// 0x01E8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                DefaultNPCDamage;                                 		// 0x01EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DefaultPlayerDamage;                              		// 0x01F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DefaultDamageRadius;                              		// 0x01F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DefaultMaxDamageToExplode;                        		// 0x01F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      BIsExplode : 1;                                   		// 0x01FC (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220073 ];

		return pClassPointer;
	};

	void JerricanReset ( );
	void NotifyJerricanBomb ( );
	void ProcExplode ( unsigned long BombBySelf );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void eventPostBeginPlay ( );
	void ReallyExplode ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGBioItem_Jerrican::pClassPointer = NULL;

// Class TGBioGame.TGBioJerricanDmgType_Explosion
// 0x0000 (0x0610 - 0x0610)
class UTGBioJerricanDmgType_Explosion : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220083 ];

		return pClassPointer;
	};

};

UClass* UTGBioJerricanDmgType_Explosion::pClassPointer = NULL;

// Class TGBioGame.TGBioJerricanExplosion
// 0x0004 (0x00E8 - 0x00E4)
class UTGBioJerricanExplosion : public UGameExplosion
{
public:
	int                                                PlayerDamage;                                     		// 0x00E4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220085 ];

		return pClassPointer;
	};

};

UClass* UTGBioJerricanExplosion::pClassPointer = NULL;

// Class TGBioGame.TGBioDmgType_FlyCutter
// 0x0004 (0x0614 - 0x0610)
class UTGBioDmgType_FlyCutter : public UUTDmgType_Burning
{
public:
	float                                              MomentumTransfer;                                 		// 0x0610 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220190 ];

		return pClassPointer;
	};

};

UClass* UTGBioDmgType_FlyCutter::pClassPointer = NULL;

// Class TGBioGame.TGBioWeap_FlyCutter
// 0x0004 (0x07C4 - 0x07C0)
class ATGBioWeap_FlyCutter : public ATGWeap_Grenade
{
public:
	class ATGBioSkillBase*                             RelativiteSkill;                                  		// 0x07C0 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220193 ];

		return pClassPointer;
	};

	void PlayFiringSound ( );
	class AProjectile* ProjectileFire ( );
	void PostBeginPlay ( );
};

UClass* ATGBioWeap_FlyCutter::pClassPointer = NULL;

// Class TGBioGame.TGBioDmgType_Grenade
// 0x0000 (0x0638 - 0x0638)
class UTGBioDmgType_Grenade : public UTGDmgType_ExplodeGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220196 ];

		return pClassPointer;
	};

};

UClass* UTGBioDmgType_Grenade::pClassPointer = NULL;

// Class TGBioGame.TGBioGrenade
// 0x0000 (0x07C0 - 0x07C0)
class ATGBioGrenade : public ATGWeap_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220198 ];

		return pClassPointer;
	};

	class AProjectile* ProjectileFire ( );
	void PostBeginPlay ( );
};

UClass* ATGBioGrenade::pClassPointer = NULL;

// Class TGBioGame.TGBioWeap_HeroBlade
// 0x0008 (0x0828 - 0x0820)
class ATGBioWeap_HeroBlade : public ATGRealT2MeleeWeapon
{
public:
	int                                                HeroBladeHitSwingDamage;                          		// 0x0820 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                HeroBladeHitStabDamage;                           		// 0x0824 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220208 ];

		return pClassPointer;
	};

	void eventReplicatedEvent ( struct FName VarName );
	void PlayThirdSwingAnim ( );
};

UClass* ATGBioWeap_HeroBlade::pClassPointer = NULL;

// Class TGBioGame.TGBioDmgType_HeroBladeHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGBioDmgType_HeroBladeHeadShot : public UTGBioDmgType_HeroBlade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220211 ];

		return pClassPointer;
	};

};

UClass* UTGBioDmgType_HeroBladeHeadShot::pClassPointer = NULL;

// Class TGBioGame.TGBioWeap_HeroGun
// 0x0000 (0x0B7C - 0x0B7C)
class ATGBioWeap_HeroGun : public ATGWeap_XM25
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220216 ];

		return pClassPointer;
	};

	bool CheckFireInterval ( float LocalClientTime );
	void DrawWeaponCrosshair ( class AHUD* HUD );
};

UClass* ATGBioWeap_HeroGun::pClassPointer = NULL;

// Class TGBioGame.TGBioWeap_HeroBow
// 0x0000 (0x0C0C - 0x0C0C)
class ATGBioWeap_HeroBow : public ATGWeap_CrossBow
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220220 ];

		return pClassPointer;
	};

};

UClass* ATGBioWeap_HeroBow::pClassPointer = NULL;

// Class TGBioGame.TGBioDmgType_HostZombieClaw
// 0x0000 (0x0610 - 0x0610)
class UTGBioDmgType_HostZombieClaw : public UTGBioDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220235 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGBioDmgType_HostZombieClaw::pClassPointer = NULL;

// Class TGBioGame.TGBioWeap_HostZombieClaw
// 0x0000 (0x08A4 - 0x08A4)
class ATGBioWeap_HostZombieClaw : public ATGBioWeap_HostZombieMeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220243 ];

		return pClassPointer;
	};

};

UClass* ATGBioWeap_HostZombieClaw::pClassPointer = NULL;

// Class TGBioGame.TGBioDmgType_HostZombieClawHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGBioDmgType_HostZombieClawHeadShot : public UTGBioDmgType_HostZombieClaw
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220246 ];

		return pClassPointer;
	};

};

UClass* UTGBioDmgType_HostZombieClawHeadShot::pClassPointer = NULL;

// Class TGBioGame.TGBioDmgType_TerminatorClaw
// 0x0000 (0x0610 - 0x0610)
class UTGBioDmgType_TerminatorClaw : public UTGBioDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220250 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGBioDmgType_TerminatorClaw::pClassPointer = NULL;

// Class TGBioGame.TGBioWeap_TerminatorClaw
// 0x0000 (0x0814 - 0x0814)
class ATGBioWeap_TerminatorClaw : public ATGBioZombieMeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220258 ];

		return pClassPointer;
	};

};

UClass* ATGBioWeap_TerminatorClaw::pClassPointer = NULL;

// Class TGBioGame.TGBioDmgType_TerminatorClawHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGBioDmgType_TerminatorClawHeadShot : public UTGBioDmgType_TerminatorClaw
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220261 ];

		return pClassPointer;
	};

};

UClass* UTGBioDmgType_TerminatorClawHeadShot::pClassPointer = NULL;

// Class TGBioGame.TGBioItemManager
// 0x0028 (0x0064 - 0x003C)
class UTGBioItemManager : public UObject
{
public:
	TArray< struct FString >                           PropClasses;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CanSpawnCount;                                    		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                CurSpawnedCount;                                  		// 0x004C (0x0004) [0x0000000000000000]              
	class UClass*                                      LastTossPropClass;                                		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DropedPercent;                                    		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UClass* >                            ItemList;                                         		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220280 ];

		return pClassPointer;
	};

	void TryTossProp ( class APawn* P );
	void ComputerCanSpawnCount ( );
	class UClass* GetNextPropClass ( );
	class UClass* PropType2Class ( unsigned char PropType );
	void Reset ( );
	void PreBeginPlay ( );
};

UClass* UTGBioItemManager::pClassPointer = NULL;

// Class TGBioGame.TGBioFountainVolume
// 0x0014 (0x0214 - 0x0200)
class ATGBioFountainVolume : public AVolume
{
public:
	float                                              AddAditionalVelocityX;                            		// 0x0200 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AddAditionalVelocityY;                            		// 0x0204 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AddAditionalVelocityZ;                            		// 0x0208 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KeepAditionalVelocityZ;                           		// 0x020C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KeepVelocityZRemainTime;                          		// 0x0210 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220284 ];

		return pClassPointer;
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ATGBioFountainVolume::pClassPointer = NULL;

// Class TGBioGame.TGBioPickupFactoryBase
// 0x0030 (0x03D8 - 0x03A8)
class ATGBioPickupFactoryBase : public AUTPickupFactory
{
public:
	TArray< class UClass* >                            WeaponPickupClassGroup;                           		// 0x03A8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UClass*                                      WeaponPickupClass;                                		// 0x03B4 (0x0004) [0x0000000000000000]              
	class UClass*                                      NewInventoryType;                                 		// 0x03B8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bWeaponStay : 1;                                  		// 0x03BC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIconStartFlash : 1;                              		// 0x03BC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsActive : 1;                                    		// 0x03BC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bCanPickup : 1;                                   		// 0x03BC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bRandomPickupEnabled : 1;                         		// 0x03BC (0x0004) [0x0000000000000000] [0x00000010] 
	int                                                CurrentWeaponIndex;                               		// 0x03C0 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    BaseGlow;                                         		// 0x03C4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              WeaponPickupScaling;                              		// 0x03C8 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  WeaponRadarIcon;                                  		// 0x03CC (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  RadarIcon;                                        		// 0x03D0 (0x0004) [0x0000000000000000]              
	float                                              FlashStartTime;                                   		// 0x03D4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220398 ];

		return pClassPointer;
	};

	void Initialize ( );
};

UClass* ATGBioPickupFactoryBase::pClassPointer = NULL;

// Class TGBioGame.TGBioWeaponPickupFactory
// 0x0004 (0x03DC - 0x03D8)
class ATGBioWeaponPickupFactory : public ATGBioPickupFactoryBase
{
public:
	class UParticleSystemComponent*                    WeaponSpawnEffect;                                		// 0x03D8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220397 ];

		return pClassPointer;
	};

	void NotifyLocalPlayerDead ( class APlayerController* PC );
	void ShowHidden ( );
	void ShowActive ( );
	void SpawnCopyFor ( class APawn* Recipient );
	void PickedUpBy ( class APawn* P );
	void StartSleeping ( );
	void SetWeaponStay ( );
	bool CheckForErrors ( );
	void eventReplicatedEvent ( struct FName VarName );
	void SetPickupMesh ( );
	void SetPickupHidden ( );
	void SetPickupVisible ( );
	void Reset ( );
	void ClearIconFlash ( );
	void FlashIcon ( );
	void InitializePickup ( );
};

UClass* ATGBioWeaponPickupFactory::pClassPointer = NULL;

// Class TGBioGame.TGBioProj_Grenade
// 0x000C (0x02C4 - 0x02B8)
class ATGBioProj_Grenade : public AUTProj_Grenade
{
public:
	float                                              WallBounceRate;                                   		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GroundBounceRate;                                 		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExplodeTime;                                      		// 0x02C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220402 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity );
	void PostBeginPlay ( );
};

UClass* ATGBioProj_Grenade::pClassPointer = NULL;

// Class TGBioGame.TGBioHUDDriveManage
// 0x0014 (0x0050 - 0x003C)
class UTGBioHUDDriveManage : public UObject
{
public:
	class UTGBioHUDDrive*                              DriveChain;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	class ATGBioHUD*                                   myHUD;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           DriveClasses;                                     		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220415 ];

		return pClassPointer;
	};

	void RoundReset ( );
	class UTGBioHUDDrive* GetHUDDrive ( int Index );
	void AddHUDDrive ( class UTGBioHUDDrive* NewItem );
	void Update ( );
	void SetHUD ( class ATGBioHUD* HUD );
	class UClass* DriveType2Class ( unsigned char Type );
	void Init ( );
};

UClass* UTGBioHUDDriveManage::pClassPointer = NULL;

// Class TGBioGame.TGBioHumHUD_ItemInfo
// 0x0014 (0x0050 - 0x003C)
class UTGBioHumHUD_ItemInfo : public UTGHUD_ItemBase
{
public:
	class UUIScene*                                    ItemInfoTemplate;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	class UUIScene*                                    ItemInfo;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  ItemTip;                                          		// 0x0044 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  DriftIconItemTrample;                             		// 0x0048 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  CurDriftIconItem;                                 		// 0x004C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220458 ];

		return pClassPointer;
	};

	void UpdateItemInfoCoolDown ( );
	void SetItemTipVisible ( unsigned long bVis );
	void SetTipVisible ( unsigned long bVis );
	void UpdateItemInfoState ( );
	void Tick ( );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
};

UClass* UTGBioHumHUD_ItemInfo::pClassPointer = NULL;

// Class TGBioGame.TGBioZombieHUD_SkillInfo
// 0x0058 (0x0094 - 0x003C)
class UTGBioZombieHUD_SkillInfo : public UTGHUD_ItemBase
{
public:
	class UUIScene*                                    SkillInfoTemplate;                                		// 0x003C (0x0004) [0x0000000000000000]              
	class UUIScene*                                    SkillInfo;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  SkillLogo1;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  SkillLogo2;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  SkillLogo3;                                       		// 0x004C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  SkillLogo4;                                       		// 0x0050 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  SkillLogo5;                                       		// 0x0054 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  SkillTip1;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  SkillTip2;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  SkillTip3;                                        		// 0x0060 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  SkillTip4;                                        		// 0x0064 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  SkillTip5;                                        		// 0x0068 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   SkillLogoMaterialInstance;                        		// 0x006C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  DriftIconSkillShield;                             		// 0x0070 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  DriftIconSkillRage;                               		// 0x0074 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  DriftIconSkillWind;                               		// 0x0078 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  DriftIconSkillTrample;                            		// 0x007C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  DriftIconSkillInvisible;                          		// 0x0080 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  CurDriftIconSkill;                                		// 0x0084 (0x0004) [0x0000000000000000]              
	unsigned char                                      CurrentZombieType;                                		// 0x0088 (0x0001) [0x0000000000000000]              
	unsigned long                                      bChangeZombie : 1;                                		// 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
	class ATGBioSkillBase*                             CurrentSkill;                                     		// 0x0090 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220460 ];

		return pClassPointer;
	};

	void UpdateSkillInfoCoolDown ( );
	void UpdateSkillInfoBackground ( );
	void SetFSkillTipVisible ( unsigned long bVis );
	void SetCoolingDownTip2Visible ( unsigned long bVis );
	void SetCoolingDownTip1Visible ( unsigned long bVis );
	void SetTipVisible ( unsigned long bVis );
	void UpdateSkillInfoState ( );
	void Tick ( );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
};

UClass* UTGBioZombieHUD_SkillInfo::pClassPointer = NULL;

// Class TGBioGame.TGBioHUD_ChangeHumanHero
// 0x0028 (0x0064 - 0x003C)
class UTGBioHUD_ChangeHumanHero : public UTGHUD_ItemBase
{
public:
	class UUIScene*                                    ChangeHumanHeroSceneTemplate;                     		// 0x003C (0x0004) [0x0000000000000000]              
	class UUIScene*                                    ChangeHumanHeroScene;                             		// 0x0040 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  ActiveBg;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  InActiveBg;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  ActiveAttackBg;                                   		// 0x004C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  InActiveAttackBg;                                 		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
	struct FString                                     attackUpText;                                     		// 0x0058 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220462 ];

		return pClassPointer;
	};

	void UpdateHumanHeroScene ( );
	void SetBgHide ( );
	void Tick ( );
	void eventDestroyed ( );
};

UClass* UTGBioHUD_ChangeHumanHero::pClassPointer = NULL;

// Class TGBioGame.TGBioHUD_PlayerTip
// 0x01C8 (0x0204 - 0x003C)
class UTGBioHUD_PlayerTip : public UTGHUD_ItemBase
{
public:
	class UUIScene*                                    MessageTipSceneTemplate;                          		// 0x003C (0x0004) [0x0000000000000000]              
	class UUIScene*                                    MessageTipScene;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	TArray< struct FBioMessageInfo >                   MessageInfoList;                                  		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FullAmmoStr;                                      		// 0x0050 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     EnemySlomoStr;                                    		// 0x005C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FastShootStr;                                     		// 0x0068 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FastMoveStr;                                      		// 0x0074 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DefenceStr;                                       		// 0x0080 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AllAmmoStr;                                       		// 0x008C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     UseSkill_FastMoveInfo;                            		// 0x0098 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     UseSkill_RageInfo;                                		// 0x00A4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     UseSkill_ObstructGrenadeInfo;                     		// 0x00B0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     UseSkill_Shield;                                  		// 0x00BC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     UseSkill_CountDown;                               		// 0x00C8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     UseSkill_Magnet;                                  		// 0x00D4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AddHumanAttackInfo;                               		// 0x00E0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Terminator;                                       		// 0x00EC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HumanHeroDie;                                     		// 0x00F8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     killZombieUseMee;                                 		// 0x0104 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     killZombieUseHeroGun;                             		// 0x0110 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TerminatorByKill;                                 		// 0x011C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ZombieRevive;                                     		// 0x0128 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ZombieReviveSucceed;                              		// 0x0134 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ZombieSelectSucceed;                              		// 0x0140 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RoundStartTimerFront;                             		// 0x014C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RoundStartTimerBack;                              		// 0x0158 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ZombieGiveFail;                                   		// 0x0164 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RandomPickupStr;                                  		// 0x0170 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ZombieAbsoreTitle;                                		// 0x017C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ItemProtectTitle;                                 		// 0x0188 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ItemProtectedTitle;                               		// 0x0194 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     GeneAugmentationAddHpTitle;                       		// 0x01A0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UParticleSystem*                             UseSkill_FastMoveInfo_PS;                         		// 0x01AC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             UseSkill_RageInfo_PS;                             		// 0x01B0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             UseSkill_ObstructGrenadeInfo_PS;                  		// 0x01B4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             UseSkill_Shield_PS;                               		// 0x01B8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             UseSkill_Magnet_PS;                               		// 0x01BC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             Skill_FlyCutter_Feedback_PS;                      		// 0x01C0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ZombieReviveSucceed_PS;                           		// 0x01C4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HumanHeroDiePS;                                   		// 0x01C8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             DefenceDS;                                        		// 0x01CC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             Skill_FlyCutter_AgainstFeedback_PS;               		// 0x01D0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HitHumanHero;                                     		// 0x01D4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HitHumanHero1000;                                 		// 0x01D8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HitHumanHero1200;                                 		// 0x01DC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HitHumanHero1400;                                 		// 0x01E0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HitHumanHero1500;                                 		// 0x01E4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HitHumanHero1750;                                 		// 0x01E8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HitHumanHero2000;                                 		// 0x01EC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HitHumanHero3000;                                 		// 0x01F0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             Skill_Trample_Feedback_PS;                        		// 0x01F4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ItemProtectTitlePS;                               		// 0x01F8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ItemProtectedTitlePS;                             		// 0x01FC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             GeneAugmentationAddHpTitlePS;                     		// 0x0200 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220464 ];

		return pClassPointer;
	};

	struct FString GetMessageInfoString ( struct FBioMessageInfo Info );
	class UParticleSystem* GetMessageInfoParticle ( struct FBioMessageInfo Info );
	void ShowVolumeTip ( struct FString Tip, float Duration );
	void AddGeneAugmentationAddHpTitle ( class APlayerReplicationInfo* PRI, float Duration );
	void AddProtectTitle ( class APlayerReplicationInfo* PRI, float Duration, int inSwitch );
	void AddZombieAbsoreTitle ( class APlayerReplicationInfo* PRI, float Duration );
	void AddZombieSelectSucceed ( class APlayerReplicationInfo* PRI, float Duration );
	void AddUseSkillCountDown ( class APlayerReplicationInfo* PRI, float Duration );
	void AddSkillTrampleCasualiesFeedback ( class APlayerReplicationInfo* PRI, float Duration );
	void AddFlyCutterSkillAgainstFeedback ( class APlayerReplicationInfo* PRI, float Duration );
	void AddSkillFeedback ( class APlayerReplicationInfo* PRI, float Duration, int inSwitch );
	void AddUseSkillAllow ( class APlayerReplicationInfo* PRI, float Duration, int inSwitch );
	void AddZombieRevive ( class APlayerReplicationInfo* PRI, float Duration, int inSwitch );
	void AddTerminatorByKill ( class APlayerReplicationInfo* PRI, float Duration );
	void AddFetchedPropMessage ( class APlayerReplicationInfo* PRI, unsigned char FetchedPropType, float Duration );
	void AddRandomPickupMessage ( class APlayerReplicationInfo* PRI, float Duration, struct FString weaponStr );
	void RemovePropMessage ( );
	void AddTerminatorMessage ( class APlayerReplicationInfo* PRI, float Duration );
	void AddHumanAttackMessage ( class APlayerReplicationInfo* PRI, float Duration );
	void AddTimerMessageFeedback ( int RemainingSeconds );
	void AddRoundStartTimerMessage ( class APlayerReplicationInfo* PRI, int Duration );
	void AddHumanHeroDieMessage ( class APlayerReplicationInfo* PRI, float Duration );
	void AddZombieGiveFailMessage ( class APlayerReplicationInfo* PRI, float Duration );
	void AddKillZombieUseHeroGunMessage ( class APlayerReplicationInfo* PRI, float Duration );
	void AddKillZombieUseMeeMessage ( class APlayerReplicationInfo* PRI, float Duration );
	void RemoveMessageFromList ( unsigned char InputType );
	void AddItemToMessageList ( struct FBioMessageInfo NewInfo, unsigned char InputType, unsigned long bShouldLast );
	int MessageType2Tipindex ( unsigned char MsgType );
	void UpdateMessageTip ( );
	void RoundReset ( );
	void UpdatePlayerTips ( );
	void Tick ( );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
};

UClass* UTGBioHUD_PlayerTip::pClassPointer = NULL;

// Class TGBioGame.TGBioHUDDrive
// 0x0038 (0x0074 - 0x003C)
class UTGBioHUDDrive : public UObject
{
public:
	class UTGBioHUDDrive*                              Next;                                             		// 0x003C (0x0004) [0x0000000000000000]              
	class UTGBioHUDDriveManage*                        DriveMgr;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      bShowDrive : 1;                                   		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fStartTime;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  Icon;                                             		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              fDuration;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   StartPos;                                         		// 0x0054 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   EndPos;                                           		// 0x005C (0x0008) [0x0000000000000000]              
	struct FVector2D                                   ScaleRange;                                       		// 0x0064 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   AlphaRange;                                       		// 0x006C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220496 ];

		return pClassPointer;
	};

	void Update ( class ATGBioHUD* myHUD );
	void SetEndPos ( struct FVector2D pos );
};

UClass* UTGBioHUDDrive::pClassPointer = NULL;

// Class TGBioGame.TGBioHUDDriveOneKill
// 0x0000 (0x0074 - 0x0074)
class UTGBioHUDDriveOneKill : public UTGBioHUDDrive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220495 ];

		return pClassPointer;
	};

	void Update ( class ATGBioHUD* myHUD );
};

UClass* UTGBioHUDDriveOneKill::pClassPointer = NULL;

// Class TGBioGame.TGBioHUDDriveHurt
// 0x001C (0x0090 - 0x0074)
class UTGBioHUDDriveHurt : public UTGBioHUDDrive
{
public:
	struct FVector                                     HurtPawnScreenLoc;                                		// 0x0074 (0x000C) [0x0000000000000000]              
	struct FVector                                     WorldPos;                                         		// 0x0080 (0x000C) [0x0000000000000000]              
	int                                                iHurt;                                            		// 0x008C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220506 ];

		return pClassPointer;
	};

	void Update ( class ATGBioHUD* myHUD );
	void GetHurtPawnScreenLoc ( class ATGBioHUD* myHUD );
};

UClass* UTGBioHUDDriveHurt::pClassPointer = NULL;

// Class TGBioGame.TGBioRandomWeaponPickupFactory
// 0x003C (0x0414 - 0x03D8)
class ATGBioRandomWeaponPickupFactory : public ATGBioPickupFactoryBase
{
public:
	class UParticleSystemComponent*                    PickupPSC;                                        		// 0x03D8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FPawnToucher >                      Customers;                                        		// 0x03DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UPrimitiveComponent*                         RealPickupFactoryMesh;                            		// 0x03E8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bInView : 1;                                      		// 0x03EC (0x0004) [0x0000000000000000] [0x00000001] 
	class UParticleSystem*                             NormalPickupEffectTemplate;                       		// 0x03F0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ElitePickupEffectTemplate;                        		// 0x03F4 (0x0004) [0x0000000000000000]              
	TArray< class UClass* >                            NormalWeaponPickupClassGroup;                     		// 0x03F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            EliteWeaponPickupClassGroup;                      		// 0x0404 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                EliteDropRate;                                    		// 0x0410 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220603 ];

		return pClassPointer;
	};

	void NotifyLocalPlayerDead ( class APlayerController* PC );
	void ShowHidden ( );
	void ShowActive ( );
	void SpawnCopyFor ( class APawn* Recipient );
	void PickedUpBy ( class APawn* P );
	bool AllowPickup ( class AUTBot* Bot );
	bool HasCustomer ( class APawn* P );
	void StartSleeping ( );
	void SetWeaponStay ( );
	bool CheckForErrors ( );
	void eventReplicatedEvent ( struct FName VarName );
	void SetPickupMesh ( );
	void SetPickupHidden ( );
	void SetPickupVisible ( );
	void eventSetInitialState ( );
	void Initialize ( );
	void ClearIconFlash ( );
	void InitializePickup ( );
	void PostBeginPlay ( );
};

UClass* ATGBioRandomWeaponPickupFactory::pClassPointer = NULL;

// Class TGBioGame.TGBioTabScoreBoard
// 0x0030 (0x068C - 0x065C)
class UTGBioTabScoreBoard : public UTGTabScoreBoard
{
public:
	struct FVector2D                                   PlayerItemInitPos_normal;                         		// 0x065C (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FVector2D                                   ExtraIcon_Offset_normal;                          		// 0x0664 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FVector2D                                   PlayerItemInitPos_800X600;                        		// 0x066C (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FVector2D                                   ExtraIcon_Offset_800X600;                         		// 0x0674 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FVector2D                                   PlayerItemInitPos;                                		// 0x067C (0x0008) [0x0000000000000000]              
	struct FVector2D                                   ExtraIcon_Offset;                                 		// 0x0684 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220787 ];

		return pClassPointer;
	};

	void DrawLocalPlayerInfo ( struct FVector2D pos );
	void DrawItemText ( int PosX, int PosY, class ATGPlayerReplicationInfo* PRI, struct FColor* TextColor );
	void DrawItemTextSelf ( int PosX, int PosY, class ATGPlayerReplicationInfo* PRI, struct FColor* TextColor );
	void DrawExtraIcons ( struct FVector2D pos, class APlayerReplicationInfo* PRI );
	void DrawScoreItem ( struct FVector2D StartPos, class ATGPlayerReplicationInfo* PRI, int Index );
	void DisplayTabScore ( );
	void InitItemPosition ( );
	void DrawScoreBoard ( );
};

UClass* UTGBioTabScoreBoard::pClassPointer = NULL;

// Class TGBioGame.TGBioHUD_Defence
// 0x0008 (0x0044 - 0x003C)
class UTGBioHUD_Defence : public UTGHUD_ItemBase
{
public:
	class UUIScene*                                    DefenceSceneTemplate;                             		// 0x003C (0x0004) [0x0000000000000000]              
	class UUIScene*                                    DefenceScene;                                     		// 0x0040 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 220809 ];

		return pClassPointer;
	};

	void UpdateDefence ( );
	void Tick ( );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
};

UClass* UTGBioHUD_Defence::pClassPointer = NULL;

// Class TGBioGame.TGBioHUDDriveChangeHumanHero
// 0x0000 (0x0074 - 0x0074)
class UTGBioHUDDriveChangeHumanHero : public UTGBioHUDDrive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221031 ];

		return pClassPointer;
	};

	void Update ( class ATGBioHUD* myHUD );
};

UClass* UTGBioHUDDriveChangeHumanHero::pClassPointer = NULL;

// Class TGBioGame.TGBioHUDDriveSkill
// 0x0000 (0x0074 - 0x0074)
class UTGBioHUDDriveSkill : public UTGBioHUDDrive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221073 ];

		return pClassPointer;
	};

	void Update ( class ATGBioHUD* myHUD );
};

UClass* UTGBioHUDDriveSkill::pClassPointer = NULL;

// Class TGBioGame.TGBioHumanHeroHUD_BaseInfo
// 0x0008 (0x0044 - 0x003C)
class UTGBioHumanHeroHUD_BaseInfo : public UTGHUD_ItemBase
{
public:
	class UUIScene*                                    BaseInfoTemplate;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	class UUIScene*                                    BaseInfo;                                         		// 0x0040 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221079 ];

		return pClassPointer;
	};

	void UpdateHumanHeroBaseInfo ( );
	void Tick ( );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
};

UClass* UTGBioHumanHeroHUD_BaseInfo::pClassPointer = NULL;

// Class TGBioGame.TGBioHumanHeroInventoryManager
// 0x0000 (0x022C - 0x022C)
class ATGBioHumanHeroInventoryManager : public ATGInventoryManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221090 ];

		return pClassPointer;
	};

	bool HandlePickupQuery ( class UClass* ItemClass, class AActor* Pickup );
};

UClass* ATGBioHumanHeroInventoryManager::pClassPointer = NULL;

// Class TGBioGame.TGBioMessage_HumanHeroDie
// 0x0000 (0x0064 - 0x0064)
class UTGBioMessage_HumanHeroDie : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221157 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMessage_HumanHeroDie::pClassPointer = NULL;

// Class TGBioGame.TGBioInventory
// 0x0008 (0x0228 - 0x0220)
class ATGBioInventory : public AInventory
{
public:
	unsigned char                                      InventoryType;                                    		// 0x0220 (0x0001) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x0224 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221275 ];

		return pClassPointer;
	};

	void GivenTo ( class APawn* thisPawn, unsigned long bDoNotActivate );
	void AnnouncePickup ( class APawn* Other );
	void DropFrom ( struct FVector StartLocation, struct FVector StartVelocity );
};

UClass* ATGBioInventory::pClassPointer = NULL;

// Class TGBioGame.TGBioMessage_InventoryGiveTo
// 0x0000 (0x0064 - 0x0064)
class UTGBioMessage_InventoryGiveTo : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221288 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMessage_InventoryGiveTo::pClassPointer = NULL;

// Class TGBioGame.TGBioInventory_AllAmmo
// 0x0004 (0x022C - 0x0228)
class ATGBioInventory_AllAmmo : public ATGBioInventory
{
public:
	int                                                AllAmmoTimeleft;                                  		// 0x0228 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221290 ];

		return pClassPointer;
	};

	void TimerAllAmmo ( );
	void BeginAllAmmo ( );
	void ModifyAllAmmo ( unsigned long bAllAmmo );
	void GivenTo ( class APawn* thisPawn, unsigned long bDoNotActivate );
};

UClass* ATGBioInventory_AllAmmo::pClassPointer = NULL;

// Class TGBioGame.TGBioInventory_DefenceInfection
// 0x0004 (0x022C - 0x0228)
class ATGBioInventory_DefenceInfection : public ATGBioInventory
{
public:
	int                                                iDefenceCount;                                    		// 0x0228 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221303 ];

		return pClassPointer;
	};

	void ModifyDefence ( int iCount );
	void TimerResetDefence ( );
	void BeginDefence ( );
	void GivenTo ( class APawn* thisPawn, unsigned long bDoNotActivate );
};

UClass* ATGBioInventory_DefenceInfection::pClassPointer = NULL;

// Class TGBioGame.TGBioInventory_EnemySlomo
// 0x0008 (0x0230 - 0x0228)
class ATGBioInventory_EnemySlomo : public ATGBioInventory
{
public:
	float                                              EnemySlomoScale;                                  		// 0x0228 (0x0004) [0x0000000000000000]              
	int                                                EnemySlomoTimeleft;                               		// 0x022C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221316 ];

		return pClassPointer;
	};

	void ModifyEnemySlomo ( float InEnemySlomoScale );
	void TimerEnemySlomo ( );
	void BeginEnemySlomo ( );
	void GivenTo ( class APawn* thisPawn, unsigned long bDoNotActivate );
};

UClass* ATGBioInventory_EnemySlomo::pClassPointer = NULL;

// Class TGBioGame.TGBioInventory_FastMove
// 0x0008 (0x0230 - 0x0228)
class ATGBioInventory_FastMove : public ATGBioInventory
{
public:
	float                                              FastMoveScale;                                    		// 0x0228 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                FastMoveTimeleft;                                 		// 0x022C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221330 ];

		return pClassPointer;
	};

	void ModifyFastMove ( float InFastMoveScale );
	void TimerFastMove ( );
	void BeginFastMove ( );
	void GivenTo ( class APawn* thisPawn, unsigned long bDoNotActivate );
};

UClass* ATGBioInventory_FastMove::pClassPointer = NULL;

// Class TGBioGame.TGBioInventory_FastShoot
// 0x0008 (0x0230 - 0x0228)
class ATGBioInventory_FastShoot : public ATGBioInventory
{
public:
	float                                              FastShootScale;                                   		// 0x0228 (0x0004) [0x0000000000000000]              
	int                                                FastShootTimeleft;                                		// 0x022C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221344 ];

		return pClassPointer;
	};

	void ModifyFastShoot ( float InFastShootScale );
	void TimerFastShoot ( );
	void BeginFastShoot ( );
	void GivenTo ( class APawn* thisPawn, unsigned long bDoNotActivate );
};

UClass* ATGBioInventory_FastShoot::pClassPointer = NULL;

// Class TGBioGame.TGBioInventory_FullAmmo
// 0x0000 (0x0228 - 0x0228)
class ATGBioInventory_FullAmmo : public ATGBioInventory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221358 ];

		return pClassPointer;
	};

	void BeginFullAmmo ( );
	void GivenTo ( class APawn* thisPawn, unsigned long bDoNotActivate );
};

UClass* ATGBioInventory_FullAmmo::pClassPointer = NULL;

// Class TGBioGame.TGBioInvisibleZombie
// 0x0014 (0x1388 - 0x1374)
class ATGBioInvisibleZombie : public ATGBioHostZombie
{
public:
	struct FInvisibleInfo                              CurrentInvisibleInfo;                             		// 0x1374 (0x0008) [0x0000000000000020]              ( CPF_Net )
	float                                              CurrentInvisibleProgress;                         		// 0x137C (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   InvisibleMat;                                     		// 0x1380 (0x0004) [0x0000000000000000]              
	class UMaterial*                                   InvisibleMatOrigin;                               		// 0x1384 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221372 ];

		return pClassPointer;
	};

	void PlayDying ( class UClass* DamageType, struct FVector HitLoc, unsigned char DeathDir, unsigned char HitGroup );
	void Invisible ( unsigned long bInvisible );
	void Visibling ( );
	void Invisibling ( );
	bool NotifyPendingBioCharInfo ( class UBioCharInfo* PendingCharInfo );
	void RsetInvisibleZombieSpeedScale ( );
	void SetInvisibleZombieSpeedScale ( float SpeedScale );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGBioInvisibleZombie::pClassPointer = NULL;

// Class TGBioGame.TGBioSkill_Invisible
// 0x0030 (0x02B8 - 0x0288)
class ATGBioSkill_Invisible : public ATGBioSkillBase
{
public:
	float                                              InvisibleDurationLevel1;                          		// 0x0288 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              InvisibleDurationLevel2;                          		// 0x028C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              InvisibleDurationLevel3;                          		// 0x0290 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              InvisibleProgressMinLevel1;                       		// 0x0294 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              InvisibleProgressMinLevel2;                       		// 0x0298 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              InvisibleProgressMinLevel3;                       		// 0x029C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              InvisibleSpeedScaleLevel1;                        		// 0x02A0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              InvisibleSpeedScaleLevel2;                        		// 0x02A4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              InvisibleSpeedScaleLevel3;                        		// 0x02A8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CurrenFiretTime;                                  		// 0x02AC (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              CurrenProgressMin;                                		// 0x02B0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ATGBioSkillComponent_Invisible*              Invisible;                                        		// 0x02B4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221388 ];

		return pClassPointer;
	};

	void CheckAllowUseSkill ( );
	void UnexpectedStopSkillValue ( );
	void PostBeginInitialize ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGBioSkill_Invisible::pClassPointer = NULL;

// Class TGBioGame.TGBioJerricanExplosionActor
// 0x0000 (0x022C - 0x022C)
class ATGBioJerricanExplosionActor : public AGameExplosionActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221434 ];

		return pClassPointer;
	};

	void SpawnExplosionParticleSystem ( class UParticleSystem* Template );
};

UClass* ATGBioJerricanExplosionActor::pClassPointer = NULL;

// Class TGBioGame.TGBioItem_Switch
// 0x000C (0x01E0 - 0x01D4)
class ATGBioItem_Switch : public AActor
{
public:
	unsigned long                                      bSwitchOn : 1;                                    		// 0x01D4 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	class UStaticMeshComponent*                        SwitchOnMesh;                                     		// 0x01D8 (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        SwitchOffMesh;                                    		// 0x01DC (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221452 ];

		return pClassPointer;
	};

	void SetSwitch ( unsigned long SwitchState );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGBioItem_Switch::pClassPointer = NULL;

// Class TGBioGame.TGBioLocal
// 0x0010 (0x004C - 0x003C)
class UTGBioLocal : public UObject
{
public:
	class UParticleSystem*                             RegenerateEffectTemplet[ 0x4 ];                   		// 0x003C (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221505 ];

		return pClassPointer;
	};

};

UClass* UTGBioLocal::pClassPointer = NULL;

// Class TGBioGame.TGBioMapInfo
// 0x0000 (0x0434 - 0x0434)
class UTGBioMapInfo : public UTGMapInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221508 ];

		return pClassPointer;
	};

	void DrawBigRadar ( class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float XPos, float YPos, float Width, float Height, unsigned long bFullDetail, float AspectRatio );
	float GetWeaponSizeScale ( class ATGBioWeaponPickupFactory* WP );
	float GetRandomWeaponSizeScale ( class ATGBioRandomWeaponPickupFactory* RWP );
	void DrawMap ( class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float XPos, float YPos, float Width, float Height, unsigned long bFullDetail, float AspectRatio, float BkgImgAlpha );
};

UClass* UTGBioMapInfo::pClassPointer = NULL;

// Class TGBioGame.TGBioRestoreManager
// 0x0008 (0x01DC - 0x01D4)
class ATGBioRestoreManager : public AActor
{
public:
	class ATGGameReplicationInfo*                      TGR;                                              		// 0x01D4 (0x0004) [0x0000000000000000]              
	class ATGBioRestore*                               Restores;                                         		// 0x01D8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221573 ];

		return pClassPointer;
	};

	bool DeleteRestore ( class APlayerController* InController );
	class ATGBioRestore* GetRestore ( class APlayerController* InController );
	bool AddRestore ( class APlayerController* InController );
	bool CreateRestores ( );
	bool InitializeRestoreMsg ( class ATGGameReplicationInfo* InTGR );
	void eventDiscardRestore ( );
	bool Add2Restores ( class ATGBioRestore* NewItem );
	void RsetRestoreManager ( );
	void eventDestroyed ( );
	void eventTick ( float DeltaTime );
};

UClass* ATGBioRestoreManager::pClassPointer = NULL;

// Class TGBioGame.TGBioMessage_TerminatorByKill
// 0x0000 (0x0064 - 0x0064)
class UTGBioMessage_TerminatorByKill : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221627 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMessage_TerminatorByKill::pClassPointer = NULL;

// Class TGBioGame.TGBioMessage_ZombieRevive
// 0x0000 (0x0064 - 0x0064)
class UTGBioMessage_ZombieRevive : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221668 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMessage_ZombieRevive::pClassPointer = NULL;

// Class TGBioGame.TGBioRefInvManager
// 0x0000 (0x0244 - 0x0244)
class ATGBioRefInvManager : public ATGRefInventoryManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221676 ];

		return pClassPointer;
	};

};

UClass* ATGBioRefInvManager::pClassPointer = NULL;

// Class TGBioGame.TGBioMessage_Terminator
// 0x0000 (0x0064 - 0x0064)
class UTGBioMessage_Terminator : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221796 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMessage_Terminator::pClassPointer = NULL;

// Class TGBioGame.TGBioSeqEvent_ServerGlassNeedReset
// 0x0000 (0x0100 - 0x0100)
class UTGBioSeqEvent_ServerGlassNeedReset : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221822 ];

		return pClassPointer;
	};

};

UClass* UTGBioSeqEvent_ServerGlassNeedReset::pClassPointer = NULL;

// Class TGBioGame.TGBioMessage_AddHumanAttack
// 0x0000 (0x0064 - 0x0064)
class UTGBioMessage_AddHumanAttack : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221905 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMessage_AddHumanAttack::pClassPointer = NULL;

// Class TGBioGame.TGBioMatchInfoMessage
// 0x000C (0x0070 - 0x0064)
class UTGBioMatchInfoMessage : public UUTLocalMessage
{
public:
	struct FString                                     MatchInfoMessage;                                 		// 0x0064 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 221959 ];

		return pClassPointer;
	};

	float GetPos ( int Switch, class AHUD* myHUD );
	int GetFontSize ( int Switch, class APlayerReplicationInfo* RelatedPRI1, class APlayerReplicationInfo* RelatedPRI2, class APlayerReplicationInfo* LocalPlayer );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMatchInfoMessage::pClassPointer = NULL;

// Class TGBioGame.TGBioMessage_GiveFail
// 0x0000 (0x0064 - 0x0064)
class UTGBioMessage_GiveFail : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 222021 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMessage_GiveFail::pClassPointer = NULL;

// Class TGBioGame.TGBioMessage_RandomPickup
// 0x0000 (0x0064 - 0x0064)
class UTGBioMessage_RandomPickup : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 222106 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMessage_RandomPickup::pClassPointer = NULL;

// Class TGBioGame.TGBioMessage_RestoreHPNotify
// 0x0000 (0x0064 - 0x0064)
class UTGBioMessage_RestoreHPNotify : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 222121 ];

		return pClassPointer;
	};

	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMessage_RestoreHPNotify::pClassPointer = NULL;

// Class TGBioGame.TGBioMessage_RoundStartTimer
// 0x0000 (0x0064 - 0x0064)
class UTGBioMessage_RoundStartTimer : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 222129 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMessage_RoundStartTimer::pClassPointer = NULL;

// Class TGBioGame.TGBioMessage_SkillTrampleCasualiesFeedback
// 0x0000 (0x0064 - 0x0064)
class UTGBioMessage_SkillTrampleCasualiesFeedback : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 222144 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMessage_SkillTrampleCasualiesFeedback::pClassPointer = NULL;

// Class TGBioGame.TGBioMessage_UseSkill
// 0x0000 (0x0064 - 0x0064)
class UTGBioMessage_UseSkill : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 222187 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMessage_UseSkill::pClassPointer = NULL;

// Class TGBioGame.TGBioMessage_UseSkillFeedback
// 0x0000 (0x0064 - 0x0064)
class UTGBioMessage_UseSkillFeedback : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 222202 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMessage_UseSkillFeedback::pClassPointer = NULL;

// Class TGBioGame.TGBioMessage_ZombieSelectSucceed
// 0x0000 (0x0064 - 0x0064)
class UTGBioMessage_ZombieSelectSucceed : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 222245 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioMessage_ZombieSelectSucceed::pClassPointer = NULL;

// Class TGBioGame.TGBioSkillManager
// 0x0014 (0x01E8 - 0x01D4)
class ATGBioSkillManager : public AActor
{
public:
	class APlayerController*                           OwnerPC;                                          		// 0x01D4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ATGBioSkillBase*                             SkillChain;                                       		// 0x01D8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bNotifiyUseSkill : 1;                             		// 0x01DC (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              InitCoolDownTime;                                 		// 0x01E0 (0x0004) [0x0000000000000000]              
	float                                              BeginCoolDownTime;                                		// 0x01E4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 222282 ];

		return pClassPointer;
	};

	void UnNudgeSkills ( );
	int GetUnInitiativeSkillIndex ( class ATGBioSkillBase* Skill );
	int GetInitiativeSkillIndex ( class ATGBioSkillBase* Skill );
	int GetSkillIndex ( class ATGBioSkillBase* Skill );
	class ATGBioSkillBase* GetInitiativeSkillByIndex ( int Index );
	class ATGBioSkillBase* GetInitiativeSkill ( unsigned char ZombieType );
	class ATGBioSkillBase* GetSkillByIndex ( int Index );
	class ATGBioSkillBase* GetSkill ( unsigned char ZombieType );
	void AbortSkillByIndex ( int Index );
	void AbortSkill ( unsigned char ZombieType );
	void ServerStartSkill ( unsigned char ZombieType );
	void StartSkill ( unsigned char ZombieType );
	bool IsCooldowning ( );
	void ClearManagerCoolDownOver ( );
	void ManagerCoolDownOver ( );
	void SkillManagerCoolDown ( );
	float GetCooldownRemainTime ( );
	float GetSkillLastPercent ( unsigned char ZombieType );
	float GetCooldownRemainPercent ( );
	void SetModifCooldownTime ( float Time );
	class ATGBioSkillBase* GetSkillByType ( );
	bool CreateAndInitializeSkill ( struct FString ClassName );
	bool Initialize ( class APlayerController* InOwnerPC );
	int FindSkill ( class ATGBioSkillBase* ItemToFind );
	void eventDiscardSkill ( );
	bool AddSkill ( class ATGBioSkillBase* NewItem );
	void RsetSkillsCoolTime ( );
	void RsetSkills ( unsigned long ResetCoolTime );
	void eventDestroyed ( );
};

UClass* ATGBioSkillManager::pClassPointer = NULL;

// Class TGBioGame.TGBioPlayerStart
// 0x0000 (0x02C4 - 0x02C4)
class ATGBioPlayerStart : public AUTTeamPlayerStart
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 222795 ];

		return pClassPointer;
	};

};

UClass* ATGBioPlayerStart::pClassPointer = NULL;

// Class TGBioGame.TGBioProj_FlyCutter
// 0x0010 (0x02C8 - 0x02B8)
class ATGBioProj_FlyCutter : public AUTProj_Grenade
{
public:
	float                                              WallBounceRate;                                   		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GroundBounceRate;                                 		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExplodeTime;                                      		// 0x02C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ImpactEffect;                                     		// 0x02C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 222798 ];

		return pClassPointer;
	};

	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity );
	void PostBeginPlay ( );
};

UClass* ATGBioProj_FlyCutter::pClassPointer = NULL;

// Class TGBioGame.TGBioProj_HeroGun
// 0x0000 (0x02C4 - 0x02C4)
class ATGBioProj_HeroGun : public ATGProj_XM25
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 222877 ];

		return pClassPointer;
	};

	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
};

UClass* ATGBioProj_HeroGun::pClassPointer = NULL;

// Class TGBioGame.TGBioProj_Thunder
// 0x0000 (0x02C8 - 0x02C8)
class ATGBioProj_Thunder : public ATGProj_Thunder
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 222886 ];

		return pClassPointer;
	};

	void DoThunderChain ( class AUTPawn* TraceFrom );
};

UClass* ATGBioProj_Thunder::pClassPointer = NULL;

// Class TGBioGame.TGBioRestore
// 0x0020 (0x01F4 - 0x01D4)
class ATGBioRestore : public AActor
{
public:
	class APlayerController*                           OwnerPC;                                          		// 0x01D4 (0x0004) [0x0000000000000000]              
	class ATGBioRestoreManager*                        RestoreMsg;                                       		// 0x01D8 (0x0004) [0x0000000000000000]              
	class ATGBioRestore*                               Next;                                             		// 0x01DC (0x0004) [0x0000000000000000]              
	float                                              ConditionTimeNum;                                 		// 0x01E0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bValid : 1;                                       		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              HealthStep;                                       		// 0x01E8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              WaitRestoreTime;                                  		// 0x01EC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              RestoreIntervalTime;                              		// 0x01F0 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 222977 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void RestoreHP ( );
	void eventTick ( float DeltaTime );
	void eventCalculateTimer ( );
	bool RestoreCondition ( );
	bool RestoreInitialize ( class APlayerController* InOwnerPC, class ATGBioRestoreManager* InRestoreMsg );
};

UClass* ATGBioRestore::pClassPointer = NULL;

// Class TGBioGame.TGBioSeqAct_AllJerricanReset
// 0x0004 (0x00EC - 0x00E8)
class UTGBioSeqAct_AllJerricanReset : public USequenceAction
{
public:
	class UClass*                                      TurretClass;                                      		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223049 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UTGBioSeqAct_AllJerricanReset::pClassPointer = NULL;

// Class TGBioGame.TGBioSeqAct_ResetGlass
// 0x000C (0x00F4 - 0x00E8)
class UTGBioSeqAct_ResetGlass : public USequenceAction
{
public:
	TArray< class AFracturedStaticMeshActor* >         GlassListToReset;                                 		// 0x00E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223053 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UTGBioSeqAct_ResetGlass::pClassPointer = NULL;

// Class TGBioGame.TGBioSeqAct_ServerTurnSwitch
// 0x0010 (0x00F8 - 0x00E8)
class UTGBioSeqAct_ServerTurnSwitch : public USequenceAction
{
public:
	TArray< class ATGBioItem_Switch* >                 SwitchList;                                       		// 0x00E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bCurrentGateOpen : 1;                             		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223060 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UTGBioSeqAct_ServerTurnSwitch::pClassPointer = NULL;

// Class TGBioGame.TGBioSeqEvent_ClientGlassNeedReset
// 0x0000 (0x0100 - 0x0100)
class UTGBioSeqEvent_ClientGlassNeedReset : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223067 ];

		return pClassPointer;
	};

};

UClass* UTGBioSeqEvent_ClientGlassNeedReset::pClassPointer = NULL;

// Class TGBioGame.TGBioSkillComponentBase
// 0x002C (0x0200 - 0x01D4)
class ATGBioSkillComponentBase : public AActor
{
public:
	class APlayerController*                           OwnerPC;                                          		// 0x01D4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ATGBioSkillBase*                             OwnerSkill;                                       		// 0x01D8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ATGBioSkillComponentBase*                    Next;                                             		// 0x01DC (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bNudged : 1;                                      		// 0x01E0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CostHealth;                                       		// 0x01E4 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __NudgeHandleFunction__Delegate;                  		// 0x01E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __UnNudgeHandleFunction__Delegate;                		// 0x01F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223099 ];

		return pClassPointer;
	};

	void OnClientUnNudge ( class ATGBioSkillComponentBase* SkillComponent );
	void OnClientNudge ( class ATGBioSkillComponentBase* SkillComponent );
	void ClientUnNudge ( );
	void ClientNudge ( );
	void OnUnNudge ( class ATGBioSkillComponentBase* SkillComponent );
	void OnNudge ( class ATGBioSkillComponentBase* SkillComponent );
	bool OnPreProcess ( class ATGBioSkillComponentBase* SkillComponent );
	void UnNudge ( );
	void Nudge ( );
	bool PreProcess ( );
	bool CanUnNudge ( );
	bool CanNudge ( );
	void Initialize ( class APlayerController* InOwnerPC, class ATGBioSkillBase* InOwnerSkill, struct FScriptDelegate NudgeHandleFunctionDelegate, struct FScriptDelegate UnNudgeHandleFunctionDelegate );
	void UnNudgeHandleFunction ( class ATGBioSkillComponentBase* SkillComponent );
	void NudgeHandleFunction ( class ATGBioSkillComponentBase* SkillComponent );
};

UClass* ATGBioSkillComponentBase::pClassPointer = NULL;

// Class TGBioGame.TGBioSkill_FastMove
// 0x0010 (0x0298 - 0x0288)
class ATGBioSkill_FastMove : public ATGBioSkillBase
{
public:
	float                                              MoveSpeedScaleLevel1;                             		// 0x0288 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MoveSpeedScaleLevel2;                             		// 0x028C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MoveSpeedScaleLevel3;                             		// 0x0290 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class ATGBioSkillComponent_FastMove*               FastMove;                                         		// 0x0294 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223200 ];

		return pClassPointer;
	};

	void CheckAllowUseSkill ( );
	void UnexpectedStopSkillValue ( );
	void PostBeginInitialize ( );
};

UClass* ATGBioSkill_FastMove::pClassPointer = NULL;

// Class TGBioGame.TGBioSkillComponent_FastMove
// 0x000C (0x020C - 0x0200)
class ATGBioSkillComponent_FastMove : public ATGBioSkillComponentBase
{
public:
	float                                              MoveSpeedScaleLevel1;                             		// 0x0200 (0x0004) [0x0000000000000000]              
	float                                              MoveSpeedScaleLevel2;                             		// 0x0204 (0x0004) [0x0000000000000000]              
	float                                              MoveSpeedScaleLevel3;                             		// 0x0208 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223202 ];

		return pClassPointer;
	};

	bool CanNudge ( );
	void OnUnNudge ( class ATGBioSkillComponentBase* SkillComponent );
	void OnNudge ( class ATGBioSkillComponentBase* SkillComponent );
};

UClass* ATGBioSkillComponent_FastMove::pClassPointer = NULL;

// Class TGBioGame.TGBioSkill_FlyCutter
// 0x001C (0x02A4 - 0x0288)
class ATGBioSkill_FlyCutter : public ATGBioSkillBase
{
public:
	class ATGBioSkillComponent_FlyCutter*              FlyCutter;                                        		// 0x0288 (0x0004) [0x0000000000000000]              
	float                                              FlyCutterLevel1;                                  		// 0x028C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              FlyCutterLevel2;                                  		// 0x0290 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              FlyCutterLevel3;                                  		// 0x0294 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              FlyCutterTimeLevel1;                              		// 0x0298 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              FlyCutterTimeLevel2;                              		// 0x029C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              FlyCutterTimeLevel3;                              		// 0x02A0 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223214 ];

		return pClassPointer;
	};

	void CheckAllowUseSkill ( );
	void UnexpectedStopSkillValue ( );
	void PostBeginInitialize ( );
};

UClass* ATGBioSkill_FlyCutter::pClassPointer = NULL;

// Class TGBioGame.TGBioSkillComponent_FlyCutter
// 0x0028 (0x0228 - 0x0200)
class ATGBioSkillComponent_FlyCutter : public ATGBioSkillComponentBase
{
public:
	float                                              FlyCutterLevel1;                                  		// 0x0200 (0x0004) [0x0000000000000000]              
	float                                              FlyCutterLevel2;                                  		// 0x0204 (0x0004) [0x0000000000000000]              
	float                                              FlyCutterLevel3;                                  		// 0x0208 (0x0004) [0x0000000000000000]              
	float                                              FlyCutterTimeLevel1;                              		// 0x020C (0x0004) [0x0000000000000000]              
	float                                              FlyCutterTimeLevel2;                              		// 0x0210 (0x0004) [0x0000000000000000]              
	float                                              FlyCutterTimeLevel3;                              		// 0x0214 (0x0004) [0x0000000000000000]              
	struct FString                                     FlyCutterClassName;                               		// 0x0218 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      LocalFlyCutterClass;                              		// 0x0224 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223222 ];

		return pClassPointer;
	};

	bool CanNudge ( );
	void OnUnNudge ( class ATGBioSkillComponentBase* SkillComponent );
	void OnNudge ( class ATGBioSkillComponentBase* SkillComponent );
	bool OnPreProcess ( class ATGBioSkillComponentBase* SkillComponent );
};

UClass* ATGBioSkillComponent_FlyCutter::pClassPointer = NULL;

// Class TGBioGame.TGBioSkillComponent_Invisible
// 0x0024 (0x0224 - 0x0200)
class ATGBioSkillComponent_Invisible : public ATGBioSkillComponentBase
{
public:
	float                                              InvisibleDurationLevel1;                          		// 0x0200 (0x0004) [0x0000000000000000]              
	float                                              InvisibleDurationLevel2;                          		// 0x0204 (0x0004) [0x0000000000000000]              
	float                                              InvisibleDurationLevel3;                          		// 0x0208 (0x0004) [0x0000000000000000]              
	float                                              InvisibleProgressMinLevel1;                       		// 0x020C (0x0004) [0x0000000000000000]              
	float                                              InvisibleProgressMinLevel2;                       		// 0x0210 (0x0004) [0x0000000000000000]              
	float                                              InvisibleProgressMinLevel3;                       		// 0x0214 (0x0004) [0x0000000000000000]              
	float                                              InvisibleSpeedScaleLevel1;                        		// 0x0218 (0x0004) [0x0000000000000000]              
	float                                              InvisibleSpeedScaleLevel2;                        		// 0x021C (0x0004) [0x0000000000000000]              
	float                                              InvisibleSpeedScaleLevel3;                        		// 0x0220 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223234 ];

		return pClassPointer;
	};

	bool CanNudge ( );
	void OnUnNudge ( class ATGBioSkillComponentBase* SkillComponent );
	void OnNudge ( class ATGBioSkillComponentBase* SkillComponent );
};

UClass* ATGBioSkillComponent_Invisible::pClassPointer = NULL;

// Class TGBioGame.TGBioSkill_Shield
// 0x000C (0x0294 - 0x0288)
class ATGBioSkill_Shield : public ATGBioSkillBase
{
public:
	float                                              DamageScale;                                      		// 0x0288 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MoveSpeedScale;                                   		// 0x028C (0x0004) [0x0000000000004000]              ( CPF_Config )
	class ATGBioSkillComponent_Shield*                 Shield;                                           		// 0x0290 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223260 ];

		return pClassPointer;
	};

	void CheckAllowUseSkill ( );
	void UnexpectedStopSkillValue ( );
	void PostBeginInitialize ( );
};

UClass* ATGBioSkill_Shield::pClassPointer = NULL;

// Class TGBioGame.TGBioSkillComponent_Shield
// 0x0008 (0x0208 - 0x0200)
class ATGBioSkillComponent_Shield : public ATGBioSkillComponentBase
{
public:
	float                                              DamageScale;                                      		// 0x0200 (0x0004) [0x0000000000000000]              
	float                                              MoveSpeedScale;                                   		// 0x0204 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223262 ];

		return pClassPointer;
	};

	bool CanNudge ( );
	void OnUnNudge ( class ATGBioSkillComponentBase* SkillComponent );
	void OnNudge ( class ATGBioSkillComponentBase* SkillComponent );
};

UClass* ATGBioSkillComponent_Shield::pClassPointer = NULL;

// Class TGBioGame.TGBioSkill_Trample
// 0x0004 (0x028C - 0x0288)
class ATGBioSkill_Trample : public ATGBioSkillBase
{
public:
	class ATGBioSkillComponent_Trample*                TrampleComponent;                                 		// 0x0288 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223271 ];

		return pClassPointer;
	};

	void CheckAllowUseSkill ( );
	void UnexpectedStopSkillValue ( );
	void PostBeginInitialize ( );
};

UClass* ATGBioSkill_Trample::pClassPointer = NULL;

// Class TGBioGame.TGBioSkillComponent_Trample
// 0x0000 (0x0200 - 0x0200)
class ATGBioSkillComponent_Trample : public ATGBioSkillComponentBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223273 ];

		return pClassPointer;
	};

	bool CanNudge ( );
	void TrampleFindPawnPlayer ( );
	void OnUnNudge ( class ATGBioSkillComponentBase* SkillComponent );
	void OnNudge ( class ATGBioSkillComponentBase* SkillComponent );
};

UClass* ATGBioSkillComponent_Trample::pClassPointer = NULL;

// Class TGBioGame.TGBioSkillNotifyMessage
// 0x000C (0x0070 - 0x0064)
class UTGBioSkillNotifyMessage : public UUTLocalMessage
{
public:
	TArray< class UParticleSystem* >                   AllSkillMessages;                                 		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223480 ];

		return pClassPointer;
	};

	void ClientReceive ( class APlayerController* PC, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioSkillNotifyMessage::pClassPointer = NULL;

// Class TGBioGame.TGDmgType_HeroGunHeadShot
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_HeroGunHeadShot : public UTGDmgType_HeroGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223639 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_HeroGunHeadShot::pClassPointer = NULL;

// Class TGBioGame.TGBioWeaponPickupMessage
// 0x000C (0x0070 - 0x0064)
class UTGBioWeaponPickupMessage : public UUTLocalMessage
{
public:
	struct FString                                     RandomWeaponSpawned;                              		// 0x0064 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223757 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UTGBioWeaponPickupMessage::pClassPointer = NULL;

// Class TGBioGame.TGBioZombieHUD_BaseInfo
// 0x001C (0x0058 - 0x003C)
class UTGBioZombieHUD_BaseInfo : public UTGHUD_ItemBase
{
public:
	class UUIScene*                                    BaseInfoTemplate;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	class UUIScene*                                    BaseInfo;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  BaseInfoTexture1;                                 		// 0x0044 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  BaseInfoTexture2;                                 		// 0x0048 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  BaseInfoTexture3;                                 		// 0x004C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  BaseInfoTexture4;                                 		// 0x0050 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  BaseInfoTexture5;                                 		// 0x0054 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223767 ];

		return pClassPointer;
	};

	void UpdateZombieBaseInfo ( );
	void Tick ( );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
};

UClass* UTGBioZombieHUD_BaseInfo::pClassPointer = NULL;

// Class TGBioGame.TGBioZombieHUD_HeroSelectWeap
// 0x0018 (0x0054 - 0x003C)
class UTGBioZombieHUD_HeroSelectWeap : public UTGHUD_ItemBase
{
public:
	class UUIScene*                                    SelectInfoTemplate;                               		// 0x003C (0x0004) [0x0000000000000000]              
	class UUIScene*                                    SelectInfo;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              TimerSelect;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              FirstEntryTime;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  MaleHeroTexBase;                                  		// 0x004C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  FemaleHeroTexBase;                                		// 0x0050 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223783 ];

		return pClassPointer;
	};

	void UpdateHeroSelectWeapInfo ( );
	void Tick ( );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
};

UClass* UTGBioZombieHUD_HeroSelectWeap::pClassPointer = NULL;

// Class TGBioGame.TGBioZombieHUD_LevelUpInfo
// 0x0008 (0x0044 - 0x003C)
class UTGBioZombieHUD_LevelUpInfo : public UTGHUD_ItemBase
{
public:
	class UUIScene*                                    LevelUpInfoTemplate;                              		// 0x003C (0x0004) [0x0000000000000000]              
	class UUIScene*                                    LevelUpInfo;                                      		// 0x0040 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223800 ];

		return pClassPointer;
	};

	void UpdateLevelUpInfo ( );
	void Tick ( );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
};

UClass* UTGBioZombieHUD_LevelUpInfo::pClassPointer = NULL;

// Class TGBioGame.TGBioZombieHUD_Select
// 0x0010 (0x004C - 0x003C)
class UTGBioZombieHUD_Select : public UTGHUD_ItemBase
{
public:
	class UUIScene*                                    SelectInfoTemplate;                               		// 0x003C (0x0004) [0x0000000000000000]              
	class UUIScene*                                    SelectInfo;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              TimerSelect;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              FirstEntryTime;                                   		// 0x0048 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223812 ];

		return pClassPointer;
	};

	void UpdateZombieSelectInfo ( );
	void Tick ( );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
};

UClass* UTGBioZombieHUD_Select::pClassPointer = NULL;

// Class TGBioGame.TGBioZombieStart
// 0x0000 (0x02C4 - 0x02C4)
class ATGBioZombieStart : public AUTTeamPlayerStart
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 223883 ];

		return pClassPointer;
	};

};

UClass* ATGBioZombieStart::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif