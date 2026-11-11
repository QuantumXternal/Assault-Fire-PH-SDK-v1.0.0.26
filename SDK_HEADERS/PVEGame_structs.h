/*
#############################################################################################
# Assault Fire (1.0.0.26) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PVEGame_structs.h
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

// ScriptStruct PVEGame.PVETypes.PVEMessageInfo
// 0x0028
struct FPVEMessageInfo
{
	unsigned char                                      MessageType;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              BeginTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      FetchedPropType;                                  		// 0x0010 (0x0001) [0x0000000000000000]              
	class UClass*                                      RolledWeaponClass;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	class ASkillBase*                                  Skill;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     WeaponName;                                       		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PVEGame.PVETypes.ExplodeData
// 0x0018
struct FExplodeData
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVETypes.PointOfView
// 0x0014
struct FPointOfView
{
	struct FVector                                     Offset;                                           		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              fZAdjust;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOV;                                              		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PVEGame.PVETypes.BodyStance
// 0x000C
struct FBodyStance
{
	TArray< struct FName >                             AnimName;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct PVEGame.PVETypes.SMStruct
// 0x0014
struct FSMStruct
{
	unsigned char                                      SpecialMove;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	class APVEPawn*                                    InteractionPawn;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Flags;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAdditive : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TimeSeconds;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVEAIController.HitObstacle
// 0x0010
struct FHitObstacle
{
	class AAIObstacle*                                 HitTarget;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct PVEGame.AIObstacleManager.ObstacleState
// 0x0010
struct FObstacleState
{
	class AAIObstacle*                                 Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastLocation;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct PVEGame.AIReactionManager.IntrinsicChannel
// 0x000C
struct FIntrinsicChannel
{
	struct FName                                       ChannelName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	class UClass*                                      ChannelClass;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PZTypes.RopeRepInfo
// 0x002C
struct FRopeRepInfo
{
	int                                                FlageStamp;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     RopeNodes[ 0x3 ];                                 		// 0x0004 (0x0024) [0x0000000000000000]              
	int                                                RopeNodeNum;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PZTypes.PZClientSkillStateInfo
// 0x000C
struct FPZClientSkillStateInfo
{
	unsigned char                                      ClientSkillState;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              FinalCooldownTime;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              ModifCooldownTime;                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PZTypes.PZRoundStat
// 0x0014
struct FPZRoundStat
{
	unsigned char                                      WinType;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                HumanCount;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ZombieCount;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ZombieTeamPoint;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                HumanTeamPoint;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PZTypes.PlayerHumanStat
// 0x002C
struct FPlayerHumanStat
{
	int                                                AsHumanCount;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TimesKillZombie;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TimesKillAI;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TimesUseResouce;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TimesRescue;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                TimesBeKilled;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                TimesBeKilledByAI;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                TimesSuicide;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              PlayerPoint;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              GameTime;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PZTypes.PlayerZombieStat
// 0x0324
struct FPlayerZombieStat
{
	int                                                AsZombieCount;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                UseCount[ 0x14 ];                                 		// 0x0004 (0x0050) [0x0000000000000000]              
	int                                                KillHumanCount[ 0x14 ];                           		// 0x0054 (0x0050) [0x0000000000000000]              
	int                                                TimesSkillKillHuman[ 0x14 ];                      		// 0x00A4 (0x0050) [0x0000000000000000]              
	int                                                TimesSkillHitHuman[ 0x14 ];                       		// 0x00F4 (0x0050) [0x0000000000000000]              
	int                                                TimesSkillUse[ 0x14 ];                            		// 0x0144 (0x0050) [0x0000000000000000]              
	int                                                TimesBeKilled[ 0x14 ];                            		// 0x0194 (0x0050) [0x0000000000000000]              
	int                                                TimesAssist[ 0x14 ];                              		// 0x01E4 (0x0050) [0x0000000000000000]              
	float                                              Damage[ 0x14 ];                                   		// 0x0234 (0x0050) [0x0000000000000000]              
	float                                              PlayerPoint[ 0x14 ];                              		// 0x0284 (0x0050) [0x0000000000000000]              
	float                                              GameTime[ 0x14 ];                                 		// 0x02D4 (0x0050) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PZTypes.PZPlayerRoundStat
// 0x0018
struct FPZPlayerRoundStat
{
	unsigned char                                      WinFlag;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsZombie : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                PlayerCount;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              PlayerPoint;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              GameTime;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PZTypes.PZRespawnInfo
// 0x0004
struct FPZRespawnInfo
{
	unsigned long                                      bCanRespawn : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlayerLeaveSafeArea : 1;                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bTooClose : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bInView : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct PVEGame.PZTypes.PZSpawnPointInfo
// 0x0009
struct FPZSpawnPointInfo
{
	class APZAISpawnPoint*                             SpawnPoint;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DistanceToTarget;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      Priority;                                         		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PZTypes.PZZombieChangeNecessity
// 0x0014
struct FPZZombieChangeNecessity
{
	unsigned char                                      ZombieChangeType;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                ZombieLevel;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Data1;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Data2;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Data3;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PZTypes.ChargerSimulateEffect
// 0x0008
struct FChargerSimulateEffect
{
	unsigned char                                      ChargerStateType;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                ExtraInfo;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PZTypes.SmokerSimulateEffect
// 0x0008
struct FSmokerSimulateEffect
{
	unsigned char                                      SmokerStateType;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                ExtraInfo;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PZTypes.FallDownInfo
// 0x0010
struct FFallDownInfo
{
	unsigned char                                      FallFlageType;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Index2FallType;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      ZombieType;                                       		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned long                                      bLoop : 1;                                        		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PVEGame.PVEGameReplicationInfo.ClientLevelStreamingStatus
// 0x0004
struct FClientLevelStreamingStatus
{
	unsigned long                                      bShouldBeLoaded : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShouldBeVisible : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct PVEGame.PVEPlayerReplicationInfo.PVEWeaponDetailStatis
// 0x0038
struct FPVEWeaponDetailStatis
{
	int                                                ProficientType;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                WeaponSubType;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                WeaponSubID;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsSuperWeapon : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                TimesKill;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                TimesBeKill;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                TimesHeadShot;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                NumberShotBullet;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                NumberShotBulletHit;                              		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                CalcedShotBulletHit;                              		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                UseTime;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      HaveCalcCount : 1;                                		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                UseCount;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                Damagevalue;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVEPlayerReplicationInfo.LevelValuedScore
// 0x000C
struct FLevelValuedScore
{
	unsigned char                                      Level;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.ATDPlayerReplicationInfoBase.TrapInfo
// 0x0018
struct FTrapInfo
{
	int                                                UsedCount;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SoldCount;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                KillCount;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                DestoryCount;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              UsedTime;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                DamageAmount;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.MergeAIPawnMesh.AIPawnMeshState
// 0x0034
struct FAIPawnMeshState
{
	class UTexture2DComposite*                         HeadTextures[ 0x5 ];                              		// 0x0000 (0x0014) [0x0000000000000000]              
	class UTexture2DComposite*                         BodyTextures[ 0x5 ];                              		// 0x0014 (0x0014) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   HeadMIC;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   BodyMIC;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               Mesh;                                             		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.MergeAIPawnMesh.AIPawnBodyUnit
// 0x0020
struct FAIPawnBodyUnit
{
	class USkeletalMesh*                               Mesh;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  Texture[ 0x5 ];                                   		// 0x0004 (0x0014) [0x0000000000000000]              
	unsigned char                                      BodyIndicate;                                     		// 0x0018 (0x0001) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MIC;                                              		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.NavigationHandleEx.WallPathCost
// 0x000C
struct FWallPathCost
{
	class AAIWallCornerPathNode*                       StartAnchor;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class AAIWallCornerPathNode*                       EndAnchor;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Cost;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVEWeapon.CanAttackInfo
// 0x0028
struct FCanAttackInfo
{
	class APawn*                                       Instigator;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     InstigatorLocation;                               		// 0x0004 (0x000C) [0x0000000000000000]              
	class AActor*                                      Other;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FVector                                     OtherLocation;                                    		// 0x0014 (0x000C) [0x0000000000000000]              
	unsigned long                                      bCanAttack : 1;                                   		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TimeSeconds;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVEAIController.LocalTargetInfo
// 0x0028
struct FLocalTargetInfo
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSeenLastFrame : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              InitialVisibleTime;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              LastVisibleTime;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector                                     AsyncVisibleLocation;                             		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              LastFailedPathTime;                               		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned char                                      FootStepCount;                                    		// 0x0020 (0x0001) [0x0000000000000000]              
	float                                              LastFootStepTime;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVEAIController.EnemyPositionInfo
// 0x001C
struct FEnemyPositionInfo
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVEPhysicsBodyImpactComponent.PhysicsImpactRBRemap
// 0x0010
struct FPhysicsImpactRBRemap
{
	struct FName                                       RB_FromName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       RB_ToName;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVEAIPawn.PlayDyingStruct
// 0x0014
struct FPlayDyingStruct
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	class AController*                                 Killer;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVEAnimBlend_TurnInPlace.RotTransitionInfo
// 0x000C
struct FRotTransitionInfo
{
	float                                              RotationOffset;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       TransName;                                        		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PVEGame.PVEAnimBlend_TurnInPlace_Player.TIP_Transition
// 0x0010
struct FTIP_Transition
{
	struct FName                                       TransName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PVEGame.PVEAnimNodeIndex.IndexAnimInfo
// 0x001C
struct FIndexAnimInfo
{
	int                                                LoopCount;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendInTime;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   PlayRateRange;                                    		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bStillFrame : 1;                                  		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      LoopIndex;                                        		// 0x0014 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastPosition;                                     		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct PVEGame.PVEVendingMachineVolume.FacingActorSurface
// 0x000C
struct FFacingActorSurface
{
	int                                                MaterialInstanceConstantIndex;                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   EnabledMIC;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   DisableMIC;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PVEGame.PVEPlayerPawn.EGroupSkillRepInfo
// 0x0010
struct FEGroupSkillRepInfo
{
	class UClass*                                      ActiveSkill;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class APVEPlayerPawn*                              CastBy;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSkillEnable : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                RepIndex;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVEPlayerPawn.ESkillRepInfo
// 0x0010
struct FESkillRepInfo
{
	unsigned char                                      ActiveSkill;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      bSkillEnable : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                RepIndex;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              PlusTime;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVEGroupSkillEffectManager.ThirdPersonGroupEffect
// 0x0008
struct FThirdPersonGroupEffect
{
	class UClass*                                      SkillClass;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUTParticleSystemComponent*                  PSC;                                              		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct PVEGame.PVEGroupSkillEffectManager.FirstPersonGroupEffect
// 0x001C
struct FFirstPersonGroupEffect
{
	class UClass*                                      SkillClass;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             PS;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPSStart : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTexture2D*                                  Buff;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< class APVEPlayerPawn* >                    OwnerArray;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PVEGame.PVEHUD.ShowChestInfo
// 0x0024
struct FShowChestInfo
{
	int                                                ShowChestTipTime;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AwardItemIdx;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AwardTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsExcellent : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     WeaponName;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTexture2D*                                  WeaponPic;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	class UClass*                                      ChestWeapon;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVEHUD_SkillsBase.SkillBuffData
// 0x0008
struct FSkillBuffData
{
	class UTexture2D*                                  Image;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVEHUD_MoneyBase.ChangeMoneyEffect
// 0x0024
struct FChangeMoneyEffect
{
	int                                                DeltaMoney;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FColor                                      EffectColor;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   StartPos;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   EndPos;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   CurrentPos;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	float                                              BeginTime;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.SkillManager.SkillBuffInfo
// 0x0008
struct FSkillBuffInfo
{
	class UClass*                                      SkillClass;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVEVehicle.PVEVehicleTakeHitInfo
// 0x0038
struct FPVEVehicleTakeHitInfo
{
	unsigned long                                      bDriverTakeDirectHit : 1;                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Damage;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FName                                       HitBone;                                          		// 0x0024 (0x0008) [0x0000000000000000]              
	unsigned char                                      HitGroup;                                         		// 0x002C (0x0001) [0x0000000000000000]              
	unsigned char                                      AnimDir;                                          		// 0x002D (0x0001) [0x0000000000000000]              
	class UPhysicalMaterial*                           PhysMaterial;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVEObjectPool.TracerCacheDatum
// 0x005C
struct FTracerCacheDatum
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UClass*                                      TracerClass;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ListIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	class APVEProj_BulletTracer*                       List[ 0x14 ];                                     		// 0x000C (0x0050) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVEPlayerInput.InputKeyData
// 0x000C
struct FInputKeyData
{
	struct FName                                       KeyName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bPressed : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PVEGame.PVEPlayerInventoryManager.AdjustWeaponProperty
// 0x0014
struct FAdjustWeaponProperty
{
	struct FName                                       ClassName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              DamageScale;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              ClipAmmoCountScale;                               		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              CarriedAmmoCountScale;                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVEPlayerInventoryManager.AdjustSpecialWeaponProperty
// 0x0020
struct FAdjustSpecialWeaponProperty
{
	struct FName                                       ClassName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              DamageScale;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              SpecialDamageScale;                               		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              ClipAmmoCountScale;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              SpecialClipAmmoCountScale;                        		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              CarriedAmmoCountScale;                            		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              SpecialCarriedAmmoCountScale;                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVEPlayerInventoryManager.WeaponPropertyPair
// 0x000C
struct APVEPlayerInventoryManager_FWeaponPropertyPair
{
	struct FName                                       PName;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              PValue;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVEPlayerInventoryManager.WeaponPropertySubstitution
// 0x0014
struct APVEPlayerInventoryManager_FWeaponPropertySubstitution
{
	struct FName                                       ClassName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct APVEPlayerInventoryManager_FWeaponPropertyPair > SubstitutedProperties;                            		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PVEGame.PVERBVehicle.VehicleStateEx
// 0x0044
struct FVehicleStateEx
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              QuatX;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              QuatY;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              QuatZ;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              QuatW;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FVector                                     LinVel;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     AngVel;                                           		// 0x0028 (0x000C) [0x0000000000000000]              
	unsigned char                                      bNewData;                                         		// 0x0034 (0x0001) [0x0000000000000000]              
	unsigned char                                      ServerBrake;                                      		// 0x0035 (0x0001) [0x0000000000000000]              
	unsigned char                                      ServerGas;                                        		// 0x0036 (0x0001) [0x0000000000000000]              
	unsigned char                                      ServerSteering;                                   		// 0x0037 (0x0001) [0x0000000000000000]              
	unsigned char                                      ServerRise;                                       		// 0x0038 (0x0001) [0x0000000000000000]              
	unsigned long                                      bServerHandbrake : 1;                             		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ServerView;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVERollSupportVolume.RollItemInfo
// 0x0008
struct FRollItemInfo
{
	class APVEPlayerPawn*                              RollPawn;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class APVEDroppedPickup_RollSupport*               RollPickup;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PVESupport_BeamBase.TendrilBeam
// 0x001C
struct APVESupport_BeamBase_FTendrilBeam
{
	class ATurretEmitter*                              BeamEmitter;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class ATurretEmitter*                              SurfaceImpactEmitter;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     OffsetDir;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	float                                              TimeUntilSpawn;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bReadyToSpawn : 1;                                		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PVEGame.PVEWeap_DropBomb.DropPointAssInfo
// 0x0008
struct FDropPointAssInfo
{
	float                                              DropDeltaTime;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHaveDropped : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PVEGame.PVEWeap_DropBomb.DropPointInfo
// 0x0010
struct FDropPointInfo
{
	class APVEDropBombPoint*                           DropPoint;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FDropPointAssInfo >                 DropPointAssList;                                 		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PVEGame.PZPawnBase.InstigatorInfo
// 0x000C
struct APZPawnBase_FInstigatorInfo
{
	class APZPlayerReplicationInfoBase*                PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AccDamage;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              LastDamageTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PZPawnBase.ZombieFootPlacementInfo
// 0x0008
struct FZombieFootPlacementInfo
{
	unsigned long                                      bUseZombieFootPlacement : 1;                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.PZRopeActor.RopePivot
// 0x004C
struct FRopePivot
{
	struct FVector                                     InputForceVector;                                 		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     InputForce;                                       		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     OutputForceVector;                                		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     OutputForce;                                      		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FVector                                     RopePivotLocation;                                		// 0x0030 (0x000C) [0x0000000000000000]              
	float                                              RopePivotLength;                                  		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned long                                      bBaseRopePivot : 1;                               		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPointer                                    LastPivot;                                        		// 0x0044 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    PrevPivot;                                        		// 0x0048 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct PVEGame.PZZombieParasite.HostInfo
// 0x000C
struct FHostInfo
{
	class AUTPawn*                                     HostPawn;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       AttachSocketName;                                 		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct PVEGame.SkillComponent_AdjustPlayerReloadSpeed.PlayerGun
// 0x0010
struct FPlayerGun
{
	class APawn*                                       PPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class ATGRealGun* >                        LastCheckGuns;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PVEGame.SkillComponent_HolyCircle.PlayerWeapon
// 0x0014
struct FPlayerWeapon
{
	class APVEPlayerPawn*                              PPlayer;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class AWeapon* >                           Weapons;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AWeapon*                                     FirstWeapon;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.TGMHMMecha.JettingStateInfo
// 0x000C
struct FJettingStateInfo
{
	unsigned long                                      bJetting : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      JettingForm;                                      		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsFromLandJetToAirJet : 1;                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PVEGame.TGSVCyborgBase.BCStruct
// 0x0014
struct FBCStruct
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       ParentBoneName;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              HealthPercent;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bNeedCreep : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PVEGame.TGSVCyborgBase.BreakConstraintData
// 0x0024
struct FBreakConstraintData
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x001C (0x0008) [0x0000000000000000]              
};

// ScriptStruct PVEGame.TGCrazyTMPawn.AssistInfo
// 0x0008
struct ATGCrazyTMPawn_FAssistInfo
{
	class ATGCrazyTMPlayerReplicationInfo*             PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.TGIF2GameReplicationInfoBase.IF2RoundPoint
// 0x000C
struct FIF2RoundPoint
{
	TArray< int >                                      Points;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PVEGame.TGIF2PlayerReplicationInfoBase.IF2MechaInfo
// 0x0014
struct FIF2MechaInfo
{
	int                                                UsedCount;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                GiveUpCount;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                DiedCount;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                KillCount;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                BuyAmmoCount;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.TGIF2PlayerReplicationInfoBase.IF2TrapInfo
// 0x000C
struct FIF2TrapInfo
{
	int                                                UsedCount;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                KillCount;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                DamageAmount;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.TGIFCyborg_Boss.BossChipperInfo
// 0x0048
struct FBossChipperInfo
{
	struct FName                                       TipSocketName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     DefaultLegPos;                                    		// 0x0008 (0x000C) [0x0000000000000000]              
	class USkelControl_CCD_IK*                         IKControl;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	class USkelControl_CCD_IK*                         IKControlAsset;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bStepping : 1;                                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentStepTime;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              TotalStepTime;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FVector                                     StepStartPosition;                                		// 0x0028 (0x000C) [0x0000000000000000]              
	struct FVector                                     StepEndPosition;                                  		// 0x0034 (0x000C) [0x0000000000000000]              
	float                                              EndSlope;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              ZTangent;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.TGIFGameReplicationInfo.RoundScoreStandard
// 0x000C
struct FRoundScoreStandard
{
	TArray< int >                                      Score;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PVEGame.TGIFGameReplicationInfo.RoundScoreStandardPass
// 0x000C
struct FRoundScoreStandardPass
{
	TArray< int >                                      Score;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PVEGame.TGIFGameReplicationInfo.BaseHealthScoreStandard
// 0x0018
struct FBaseHealthScoreStandard
{
	TArray< int >                                      Percent;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Score;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PVEGame.TGIFMecha.ClashImpactInfo
// 0x0008
struct FClashImpactInfo
{
	class AActor*                                      ImpactActor;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              LastImpactTime;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.TGMechaHumanMatch.DefenceRating
// 0x000C
struct FDefenceRating
{
	int                                                Level;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Morale;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Defence;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.TGMHMPlayerReplicationInfo.PVMSpecPlayerRoundStatis
// 0x0010
struct FPVMSpecPlayerRoundStatis
{
	int                                                Camp;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MechaKill;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MechaPressKill;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                MechaHPRemain;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.TGMHMPlayerReplicationInfo.PVMPlayerRoundStatis
// 0x0014
struct FPVMPlayerRoundStatis
{
	int                                                TimesKill;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Damagevalue;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RoundTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                RoundPlayerCount;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                bWinningCamp;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.TGMHMHUD.MechaAnimMapping
// 0x0008
struct FMechaAnimMapping
{
	class ATGAnimTex*                                  Tex;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	class ATGMHMMecha*                                 Mecha;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PVEGame.TGProj_MAGrenade.MAGAttachInfo
// 0x0024
struct FMAGAttachInfo
{
	unsigned long                                      bIsAttachingToVehicle : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       RelativeAttachBoneName;                           		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FVector                                     RelativeAttachLocation;                           		// 0x000C (0x000C) [0x0000000000000000]              
	struct FRotator                                    RelativeAttachRotation;                           		// 0x0018 (0x000C) [0x0000000000000000]              
};

// ScriptStruct PVEGame.TGSVCyborgSkelControl_BreakConstraint.DependantBreakInfo
// 0x0014
struct FDependantBreakInfo
{
	struct FName                                       ParentBone;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             DependantBones;                                   		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PVEGame.TGSVGameReplicationInfo.RoundPoints
// 0x000C
struct FRoundPoints
{
	TArray< int >                                      Points;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct PVEGame.TGSVHUD_AutoGunHealth.AutoGunHud
// 0x0024
struct FAutoGunHud
{
	unsigned long                                      HasActiveHud : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                MaxLeftTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	class APVEAutoGunVendingVolume*                    AutoGunVolume;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FName                                       HUDBG;                                            		// 0x000C (0x0008) [0x0000000000000000]              
	struct FName                                       HUDLeftTime;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FName                                       HUDHealthProcess;                                 		// 0x001C (0x0008) [0x0000000000000000]              
};

// ScriptStruct PVEGame.TGSVSeqAct_SpawnController.SpawnPointInfo
// 0x0010
struct FSpawnPointInfo
{
	class AActor*                                      SpawnPoint;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SpawnCount;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              LastSpawnTime;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DelayTime;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif