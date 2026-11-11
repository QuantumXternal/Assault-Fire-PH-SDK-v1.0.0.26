/*
#############################################################################################
# Assault Fire (1.0.0.26) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TGBioGame_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct TGBioGame.TGBioType.ZombieChangeNecessity
// 0x0014
struct FZombieChangeNecessity
{
	unsigned char                                      ZombieChangeType;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                ZombieLevel;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Data1;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Data2;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Data3;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGBioGame.TGBioType.BIOZombieInfo
// 0x001C
struct FBIOZombieInfo
{
	int                                                wType;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                wLevel;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                wTimesUse;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                wTimesInfection;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                wTimesBeKilled;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                TimesRebirthKilled;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                wPlayTime;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGBioGame.TGBioType.ZombieBaseInfo
// 0x000C
struct FZombieBaseInfo
{
	int                                                lev;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Type;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              TimesBegin;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGBioGame.TGBioType.DirectionalAnimInfo
// 0x000C
struct FDirectionalAnimInfo
{
	unsigned char                                      AnimDir;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       AnimName;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TGBioGame.TGBioType.CustomAnimInfo
// 0x0014
struct FCustomAnimInfo
{
	unsigned char                                      AnimType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       AnimName1P;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FName                                       AnimName3P;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TGBioGame.TGBioType.BioPawnFootPlacementInfo
// 0x0008
struct FBioPawnFootPlacementInfo
{
	unsigned long                                      bUseZombieFootPlacement : 1;                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGBioGame.TGBioType.InvisibleInfo
// 0x0008
struct FInvisibleInfo
{
	unsigned long                                      bZombieInvisible : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentInvisibleProgress;                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGBioGame.TGBioType.PermanentDeathRepInfo
// 0x003A
struct FPermanentDeathRepInfo
{
	unsigned long                                      bPermanentDeath : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       ToPlayDeathAnimName;                              		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              ToPlayDeathAnimRate;                              		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVectorNoCompress                           TearOffLocation;                                  		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVectorNoCompress                           TearOffMomentum;                                  		// 0x001C (0x000C) [0x0000000000000000]              
	class UClass*                                      HitDamageType;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FVectorNoCompress                           TakeHitLocation;                                  		// 0x002C (0x000C) [0x0000000000000000]              
	unsigned char                                      PlayDeathDir;                                     		// 0x0038 (0x0001) [0x0000000000000000]              
	unsigned char                                      bPlayHitGroup;                                    		// 0x0039 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TGBioGame.TGBioHostZombie.LevelUpInfo
// 0x0028
struct FLevelUpInfo
{
	int                                                LevelUPZPoint;                                    		// 0x0000 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              LevelMoveSpeedScale;                              		// 0x0004 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              LevelJumpScale;                                   		// 0x0008 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              LevelCrouchJumpScale;                             		// 0x000C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                LevelHealthAdd;                                   		// 0x0010 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                LevelHealthMaxAdd;                                		// 0x0014 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                LevelSkillFlag;                                   		// 0x0018 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     LevelCharInfoClassName;                           		// 0x001C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
};

// ScriptStruct TGBioGame.TGBioHostZombie.BaseHealthHostZombie
// 0x0010
struct FBaseHealthHostZombie
{
	int                                                BaseHealthMaxLev1;                                		// 0x0000 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                BaseHealthMaxLev2;                                		// 0x0004 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                BaseHealthMaxLev3;                                		// 0x0008 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                BaseHealthMaxLev4;                                		// 0x000C (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct TGBioGame.TGBioHostZombie.LevelInfo
// 0x0005
struct FLevelInfo
{
	int                                                Level;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      ZombieChangeType;                                 		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TGBioGame.TGBioGameReplicationInfo.HumanHeroRemainingTimeInfo
// 0x0008
struct FHumanHeroRemainingTimeInfo
{
	int                                                HumanHeroRemaining;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                HumanHeroRemainingStepNum;                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGBioGame.TGBioHUD_PlayerTip.BioMessageInfo
// 0x003C
struct FBioMessageInfo
{
	unsigned char                                      MessageType;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              BeginTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      FetchedPropType;                                  		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      UseSkillMsg;                                      		// 0x0011 (0x0001) [0x0000000000000000]              
	unsigned char                                      ReviveMsg;                                        		// 0x0012 (0x0001) [0x0000000000000000]              
	unsigned char                                      SkillFeedback;                                    		// 0x0013 (0x0001) [0x0000000000000000]              
	unsigned long                                      UseParticleSystemFeedBack : 1;                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ParticleSystemFeedBackPriority;                   		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Tipindex;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned char                                      FeedbackGroupindex;                               		// 0x0020 (0x0001) [0x0000000000000000]              
	struct FString                                     RealStr;                                          		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ExtraStr;                                         		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGBioGame.TGBioMatch.HostZombiePawnClassMap
// 0x0010
struct FHostZombiePawnClassMap
{
	unsigned char                                      ZombieType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     HostZombiePawnClass;                              		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGBioGame.TGBioMatch.PlayStartSortInfo
// 0x0008
struct FPlayStartSortInfo
{
	class AUTTeamPlayerStart*                          StartP;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Rating;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGBioGame.TGBioPlayerReplicationInfo.ZombiePawnReviveLocInfo
// 0x0014
struct FZombiePawnReviveLocInfo
{
	int                                                LocInfoTag;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ZombiePawnReviveType;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     ZombiePawnReviveLoc;                              		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TGBioGame.TGBioPlayerReplicationInfo.SelectBioZombie
// 0x0008
struct FSelectBioZombie
{
	int                                                ReplicationIndex;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSelectBioZombie : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TGBioGame.TGBioPlayerReplicationInfo.SelectBioZombieLazy
// 0x0008
struct FSelectBioZombieLazy
{
	int                                                ReplicationIndex;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSelectBioZombieLazy : 1;                         		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TGBioGame.TGBioPlayerReplicationInfo.SelectHeroWeapon
// 0x0008
struct FSelectHeroWeapon
{
	int                                                ReplicationIndex;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSelectHeroWeaponType : 1;                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TGBioGame.TGBioPlayerInventoryManager.BioSpecialWeaponDamageInfo
// 0x0010
struct FBioSpecialWeaponDamageInfo
{
	struct FString                                     WeaponClassName;                                  		// 0x0000 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              DamageScale;                                      		// 0x000C (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct TGBioGame.TGBioPlayerInventoryManager.WeaponPropertyPair
// 0x000C
struct ATGBioPlayerInventoryManager_FWeaponPropertyPair
{
	struct FName                                       PName;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              PValue;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGBioGame.TGBioPlayerInventoryManager.WeaponPropertySubstitution
// 0x0014
struct ATGBioPlayerInventoryManager_FWeaponPropertySubstitution
{
	struct FName                                       ClassName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct ATGBioPlayerInventoryManager_FWeaponPropertyPair > SubstitutedProperties;                            		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGBioGame.TGBioTerminatorZombie.TerminatorInfo
// 0x000C
struct FTerminatorInfo
{
	float                                              MoveSpeedScale;                                   		// 0x0000 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              JumpScale;                                        		// 0x0004 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CrouchJumpScale;                                  		// 0x0008 (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct TGBioGame.TGBioTerminatorZombie.SetTerminatorCharInfo
// 0x0005
struct FSetTerminatorCharInfo
{
	unsigned long                                      bSetTerminatorCharInfo : 1;                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      ZombieChangeType;                                 		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TGBioGame.TGBioWeap_HostZombieMeleeWeapon.WeaponLevelUpInfo
// 0x0030
struct FWeaponLevelUpInfo
{
	float                                              NormalHitDamage;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              StrongHitDamage;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              SwingAttackRange;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              StabAttackRange;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              FireSwing1;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              FireSwing2;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              FireStabing;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              DamageSwing1;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              DamageSwing2;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              DamageStabing;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              RestFirstAnim;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              ClawEquipTime;                                    		// 0x002C (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif