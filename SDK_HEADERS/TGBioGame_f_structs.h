/*
#############################################################################################
# Assault Fire (1.0.0.26) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TGBioGame_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function TGBioGame.BioCharInfo.ClearAsyncLoad
// [0x00020400] ( FUNC_Native )
struct UBioCharInfo_execClearAsyncLoad_Parms
{
};

// Function TGBioGame.BioCharInfo.AsyncLoadBioCharInfoContent
// [0x00020400] ( FUNC_Native )
struct UBioCharInfo_execAsyncLoadBioCharInfoContent_Parms
{
};

// Function TGBioGame.TGAttachment_HeroBlade.DetachFrom
// [0x00020102] 
struct ATGAttachment_HeroBlade_execDetachFrom_Parms
{
	class USkeletalMeshComponent*                      MeshCpnt;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function TGBioGame.TGAttachment_HeroBlade.AttachTo
// [0x00020500] ( FUNC_Native )
struct ATGAttachment_HeroBlade_execAttachTo_Parms
{
	class AUTPawn*                                     OwnerPawn;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGAttachment_HeroBlade.GetImpactEffect
// [0x00020102] 
struct ATGAttachment_HeroBlade_execGetImpactEffect_Parms
{
	class UPhysicalMaterial*                           HitMaterial;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FMaterialImpactEffect                       ReturnValue;                                      		// 0x0004 (0x0038) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x003C (0x0004) [0x0000000000000000]              
	// class UPhysicalMaterialProperty*                PhysicalProperty;                                 		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGAttachment_HeroBlade.PlayImpactEffects
// [0x00820102] 
struct ATGAttachment_HeroBlade_execPlayImpactEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  NewHitLoc;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FireDir;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0034 (0x0020) [0x0000000000000000]              
	// struct FMaterialImpactEffect                    ImpactEffect;                                     		// 0x0054 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UMaterialInterface*                       MI;                                               		// 0x008C (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          PS;                                               		// 0x0090 (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceTimeVarying*             MITV_Decal;                                       		// 0x0094 (0x0004) [0x0000000000000000]              
	// int                                             DecalMaterialsLength;                             		// 0x0098 (0x0004) [0x0000000000000000]              
	// class AVehicle*                                 V;                                                		// 0x009C (0x0004) [0x0000000000000000]              
	// class AUTPawn*                                  P;                                                		// 0x00A0 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitNormalTemp;                                    		// 0x00A4 (0x000C) [0x0000000000000000]              
};

// Function TGBioGame.TGAttachment_HeroBlade.ChangeVisibility
// [0x00020102] 
struct ATGAttachment_HeroBlade_execChangeVisibility_Parms
{
	unsigned long                                      bIsVisible : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGAttachment_HeroBlade.GetEffectLocation
// [0x00820102] 
struct ATGAttachment_HeroBlade_execGetEffectLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USkeletalMeshComponent*                   RealMesh;                                         		// 0x000C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// struct FVector                                  Result;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function TGBioGame.TGAttachment_HeroBlade.FirstPersonFireEffects
// [0x00020102] 
struct ATGAttachment_HeroBlade_execFirstPersonFireEffects_Parms
{
	class AWeapon*                                     PawnWeapon;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGAttachment_HeroBlade.SpawnTracer
// [0x00820102] 
struct ATGAttachment_HeroBlade_execSpawnTracer_Parms
{
	struct FVector                                     EffectLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class UParticleSystemComponent*                 E;                                                		// 0x0018 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// struct FVector                                  Dir;                                              		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function TGBioGame.TGAttachment_HeroBlade.StopMuzzleFlash
// [0x00020102] 
struct ATGAttachment_HeroBlade_execStopMuzzleFlash_Parms
{
};

// Function TGBioGame.TGAttachment_HeroBlade.CauseMuzzleFlash
// [0x00020102] 
struct ATGAttachment_HeroBlade_execCauseMuzzleFlash_Parms
{
};

// Function TGBioGame.TGAttachment_HeroBlade.MuzzleFlashTimer
// [0x00020102] 
struct ATGAttachment_HeroBlade_execMuzzleFlashTimer_Parms
{
};

// Function TGBioGame.TGAttachment_HeroBlade.ThirdPersonFireEffects
// [0x00020100] 
struct ATGAttachment_HeroBlade_execThirdPersonFireEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGAttachment_HeroBlade.SetWeaponOverlayFlags
// [0x00020500] ( FUNC_Native )
struct ATGAttachment_HeroBlade_execSetWeaponOverlayFlags_Parms
{
	class AUTPawn*                                     OwnerPawn;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGAttachment_HeroBlade.CreateOverlayMesh
// [0x00020102] 
struct ATGAttachment_HeroBlade_execCreateOverlayMesh_Parms
{
};

// Function TGBioGame.TGAttachment_HeroBlade.SetSkin
// [0x00020400] ( FUNC_Native )
struct ATGAttachment_HeroBlade_execSetSkin_Parms
{
	class UMaterial*                                   NewMaterial;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGAttachment_HeroGun.AttachTo
// [0x00020500] ( FUNC_Native )
struct ATGAttachment_HeroGun_execAttachTo_Parms
{
	class AUTPawn*                                     OwnerPawn;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGAttachment_HeroGun.DetachFrom
// [0x00020102] 
struct ATGAttachment_HeroGun_execDetachFrom_Parms
{
	class USkeletalMeshComponent*                      MeshCpnt;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function TGBioGame.TGAttachment_HeroGun.PlayImpactEffects
// [0x00820102] 
struct ATGAttachment_HeroGun_execPlayImpactEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  NewHitLoc;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FireDir;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0034 (0x0020) [0x0000000000000000]              
	// struct FMaterialImpactEffect                    ImpactEffect;                                     		// 0x0054 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UMaterialInterface*                       MI;                                               		// 0x008C (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          PS;                                               		// 0x0090 (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceTimeVarying*             MITV_Decal;                                       		// 0x0094 (0x0004) [0x0000000000000000]              
	// int                                             DecalMaterialsLength;                             		// 0x0098 (0x0004) [0x0000000000000000]              
	// class AVehicle*                                 V;                                                		// 0x009C (0x0004) [0x0000000000000000]              
	// class AUTPawn*                                  P;                                                		// 0x00A0 (0x0004) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x00A4 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitNormalTemp;                                    		// 0x00A8 (0x000C) [0x0000000000000000]              
	// float                                           TempScale;                                        		// 0x00B4 (0x0004) [0x0000000000000000]              
	// class UParticleSystemComponent*                 PSC;                                              		// 0x00B8 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGBioGame.TGBioCharInfoManager.LoadBioCharInfo
// [0x00420400] ( FUNC_Native )
struct UTGBioCharInfoManager_execLoadBioCharInfo_Parms
{
	struct FString                                     CharInfoName;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UBioCharInfo*                                LoadInfo;                                         		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioCharInfoManager.PreloadInitResource
// [0x00020400] ( FUNC_Native )
struct UTGBioCharInfoManager_execPreloadInitResource_Parms
{
};

// Function TGBioGame.TGBioDroppedPickup.PickedUpBy
// [0x00020002] 
struct ATGBioDroppedPickup_execPickedUpBy_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioMatch*                              tMatch;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioDroppedPickup.PreBeginPlay
// [0x00020802] ( FUNC_Event )
struct ATGBioDroppedPickup_eventPreBeginPlay_Parms
{
};

// Function TGBioGame.TGBioGameReplicationInfo.FlashNormalWeaponIcon
// [0x00020102] 
struct ATGBioGameReplicationInfo_execFlashNormalWeaponIcon_Parms
{
	// class ATGBioWeaponPickupFactory*                WF;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioGameReplicationInfo.InOrder
// [0x00020102] 
struct ATGBioGameReplicationInfo_execInOrder_Parms
{
	class APlayerReplicationInfo*                      P1;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      P2;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioPlayerReplicationInfo*              PRI1;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI2;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioGameReplicationInfo.ZombieLastonePlaySound
// [0x00020002] 
struct ATGBioGameReplicationInfo_execZombieLastonePlaySound_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerController*                   PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioGameReplicationInfo.ComputerZombieLeftCount
// [0x00020002] 
struct ATGBioGameReplicationInfo_execComputerZombieLeftCount_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioGameReplicationInfo.ComputerHumanLeftCount
// [0x00020002] 
struct ATGBioGameReplicationInfo_execComputerHumanLeftCount_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioGameReplicationInfo.ComputerLeftCount
// [0x00020002] 
struct ATGBioGameReplicationInfo_execComputerLeftCount_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioGameReplicationInfo.ComputerChangeHeroPrePostTime
// [0x00020002] 
struct ATGBioGameReplicationInfo_execComputerChangeHeroPrePostTime_Parms
{
	// float                                           fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioMatch*                              tMatch;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioGameReplicationInfo.AddToAttachmentPool
// [0x00020102] 
struct ATGBioGameReplicationInfo_execAddToAttachmentPool_Parms
{
	class AUTWeaponAttachment*                         WeapAttachment;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIsFound : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGBioGame.TGBioGameReplicationInfo.AddToInventroyPool
// [0x00020102] 
struct ATGBioGameReplicationInfo_execAddToInventroyPool_Parms
{
	class AWeapon*                                     InventoryWeapon;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIsFound : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGBioGame.TGBioGameReplicationInfo.CalculateGameTime
// [0x00020002] 
struct ATGBioGameReplicationInfo_execCalculateGameTime_Parms
{
	// int                                             TotalTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioGameReplicationInfo.UpdateHumanHeroDamage
// [0x00020002] 
struct ATGBioGameReplicationInfo_execUpdateHumanHeroDamage_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< class ATGBioPlayerReplicationInfo* >    HumanHeroLeft;                                    		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ATGBioPlayerController*                   PC;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGBioWeap_HeroBlade*                     HeroBlade;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             HitSwingDamage;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             HitStabDamage;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioGameReplicationInfo.NotifyCanTurnToHumanHero
// [0x00020002] 
struct ATGBioGameReplicationInfo_execNotifyCanTurnToHumanHero_Parms
{
};

// Function TGBioGame.TGBioGameReplicationInfo.AddChangeHumanHeroMsg
// [0x00020002] 
struct ATGBioGameReplicationInfo_execAddChangeHumanHeroMsg_Parms
{
	// class ATGBioPlayerPawn*                         P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerController*                   PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioGameReplicationInfo.SetRoundCount
// [0x00020002] 
struct ATGBioGameReplicationInfo_execSetRoundCount_Parms
{
	int                                                iRound;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioGameReplicationInfo.IsCanTurnToHumanHero
// [0x00020002] 
struct ATGBioGameReplicationInfo_execIsCanTurnToHumanHero_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bChange : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGBioGame.TGBioGameReplicationInfo.ComputerGridNum
// [0x00020002] 
struct ATGBioGameReplicationInfo_execComputerGridNum_Parms
{
};

// Function TGBioGame.TGBioGameReplicationInfo.RoundClear
// [0x00020002] 
struct ATGBioGameReplicationInfo_execRoundClear_Parms
{
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             totalPlayerCount;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioGameReplicationInfo.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGBioGameReplicationInfo_eventPostBeginPlay_Parms
{
};

// Function TGBioGame.TGBioGameReplicationInfo.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGBioGameReplicationInfo_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioMatch.TurnToHeroZombie
// [0x00020000] 
struct ATGBioMatch_execTurnToHeroZombie_Parms
{
	class ATGBioPlayerReplicationInfo*                 PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioMatch.ResetAllJerrican
// [0x00020002] 
struct ATGBioMatch_execResetAllJerrican_Parms
{
	// class ATGBioItem_Jerrican*                      Jerrican;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.ReduceDamage
// [0x00420002] 
struct ATGBioMatch_execReduceDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class APawn*                                       injured;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UClass*                                      DamageType;                                       		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.DirectEndRound
// [0x00020002] 
struct ATGBioMatch_execDirectEndRound_Parms
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class AActor*                                      EndRoundFocus;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.SetBioTransMode
// [0x00020202] ( FUNC_Exec )
struct ATGBioMatch_execSetBioTransMode_Parms
{
	int                                                NewMode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioMatch.RecheckPlayerCount
// [0x00420002] 
struct ATGBioMatch_execRecheckPlayerCount_Parms
{
	class ATGPlayerReplicationInfo*                    Exiting;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ZombieCount;                                      		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                HumanCount;                                       		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class ATGBioPlayerController*                   PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.CheckPlayerCount
// [0x00420002] 
struct ATGBioMatch_execCheckPlayerCount_Parms
{
	int                                                ZombieCount;                                      		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                HumanCount;                                       		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class ATGBioPlayerController*                   PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.CheckTeamAllOut
// [0x00020002] 
struct ATGBioMatch_execCheckTeamAllOut_Parms
{
	class ATGPlayerReplicationInfo*                    Exiting;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGPlayerReplicationInfo*                 Living;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             HumanCount;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             ZombieCount;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.ChangeSpawnProtectionTime
// [0x00020002] 
struct ATGBioMatch_execChangeSpawnProtectionTime_Parms
{
	float                                              fTime;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGGameReplicationInfo*                   GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.AddAllHumanAttack
// [0x00020002] 
struct ATGBioMatch_execAddAllHumanAttack_Parms
{
	class ATGBioPlayerController*                      bioPC;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerController*                   PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.TurnPlayerToHumanHero
// [0x00820002] 
struct ATGBioMatch_execTurnPlayerToHumanHero_Parms
{
	class ATGBioPlayerReplicationInfo*                 PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerController*                   PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UClass*                                   HeroClass;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGBioHumanHeroPawn*                      heroPawn;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerPawnBase*                     CurrentPawn;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  StartLoc;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 StartRot;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.AddDefaultInventoryForHumanHero
// [0x00024002] 
struct ATGBioMatch_execAddDefaultInventoryForHumanHero_Parms
{
	class ATGBioPlayerReplicationInfo*                 PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGBioHumanHeroPawn*                         heroPawn;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGBioPlayerController*                      PC;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UClass*                                   InvClass;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             CurrentHeroWeaponType;                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.AddHumanHeroInventoryFor
// [0x00020802] ( FUNC_Event )
struct ATGBioMatch_eventAddHumanHeroInventoryFor_Parms
{
	class APawn*                                       PlayerPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGBioPlayerController*                      PC;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGBioHumanHeroPawn*                      P;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             DesiredBagIndex;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.ChoosePlayerStart
// [0x00824002] 
struct ATGBioMatch_execChoosePlayerStart_Parms
{
	class AController*                                 Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InTeam;                                           		// 0x0004 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerStart*                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTTeamPlayerStart*                       P;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           NewRating;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< class AUTTeamPlayerStart* >             PlayerStarts;                                     		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// unsigned char                                   Team;                                             		// 0x0028 (0x0001) [0x0000000000000000]              
	// class AUTPlayerController*                      PC;                                               		// 0x002C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bUsed : 1;                                        		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< struct FPlayStartSortInfo >             SortPlayerStartList;                              		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FPlayStartSortInfo                       SortItem;                                         		// 0x0040 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bItemInsert : 1;                                  		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             RandIndex;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	// int                                             RandRange;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	// class APlayerStart*                             tmpPlayerStart;                                   		// 0x0054 (0x0004) [0x0000000000000000]              
	// int                                             ChooseNearIndex;                                  		// 0x0058 (0x0004) [0x0000000000000000]              
	// int                                             ChooseFarIndex;                                   		// 0x005C (0x0004) [0x0000000000000000]              
	// int                                             RandRangeBase;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.RatePlayerStart
// [0x00020002] 
struct ATGBioMatch_execRatePlayerStart_Parms
{
	class APlayerStart*                                P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Team;                                             		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Player;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Score;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           LastBeKilledDist;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	// class AController*                              OtherPlayer;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.TryTossProp
// [0x00020002] 
struct ATGBioMatch_execTryTossProp_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioMatch.GetRoundLeftPlayerNum
// [0x00020002] 
struct ATGBioMatch_execGetRoundLeftPlayerNum_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioMatch.CalcGameTimeStatis
// [0x00020002] 
struct ATGBioMatch_execCalcGameTimeStatis_Parms
{
	// class ATGBioGameReplicationInfo*                GRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.EndGame
// [0x00020002] 
struct ATGBioMatch_execEndGame_Parms
{
	class APlayerReplicationInfo*                      Winner;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.EndRound
// [0x00020002] 
struct ATGBioMatch_execEndRound_Parms
{
	class AActor*                                      EndRoundFocus;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.ResetRoundLevel
// [0x00020002] 
struct ATGBioMatch_execResetRoundLevel_Parms
{
	// class ATGBioPlayerController*                   PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGBioItem_Switch*                        tmpSwitch;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AActor*                                   A;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// class USequence*                                GameSeq;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                AllSeqEvents;                                     		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ATGGame*                                  Game;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.ServerSpecialResetBioMatch
// [0x00020002] 
struct ATGBioMatch_execServerSpecialResetBioMatch_Parms
{
	// unsigned long                                   bResult : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGBioGame.TGBioMatch.ChoosePlayerTurnZombie
// [0x00820002] 
struct ATGBioMatch_execChoosePlayerTurnZombie_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// TArray< class ATGBioPlayerReplicationInfo* >    CandidatePRIArray;                                		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI1;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI2;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             CandidateCount;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             DesiredHostZombieCount;                           		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             DesiredTerminatorCount;                           		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             CompleteNum;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             iHumanCount;                                      		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             iZombieCount;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerController*                   PC;                                               		// 0x0040 (0x0004) [0x0000000000000000]              
	// struct FZombieChangeNecessity                   ZombieChange;                                     		// 0x0044 (0x0014) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.TurnToZombie
// [0x00820002] 
struct ATGBioMatch_execTurnToZombie_Parms
{
	class ATGBioPlayerReplicationInfo*                 PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FZombieChangeNecessity                      ZombieChange;                                     		// 0x0004 (0x0014) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerController*                   PC;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerController*                   tmpPC;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	// class UClass*                                   ZombieClass;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ATGBioZombiePawn*                         ZombiePawn;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	// class APawn*                                    CurrentPawn;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FVector                                  StartLoc;                                         		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 StartRot;                                         		// 0x0038 (0x000C) [0x0000000000000000]              
	// unsigned char                                   ZombieType;                                       		// 0x0044 (0x0001) [0x0000000000000000]              
	// struct FZombieBaseInfo                          BaseInfo;                                         		// 0x0048 (0x000C) [0x0000000000000000]              
	// class ATGGame*                                  Game;                                             		// 0x0054 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.CheckZombieWhether
// [0x00020002] 
struct ATGBioMatch_execCheckZombieWhether_Parms
{
	unsigned char                                      ZombieType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class ATGBioPlayerReplicationInfo*                 PRI;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioMatch.ResetCurrentSpecifyZombieType
// [0x00020002] 
struct ATGBioMatch_execResetCurrentSpecifyZombieType_Parms
{
	class ATGBioPlayerReplicationInfo*                 PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioMatch.FindAppropriateTransformSpot
// [0x00420400] ( FUNC_Native )
struct ATGBioMatch_execFindAppropriateTransformSpot_Parms
{
	class UClass*                                      TransformerClass;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpotLocation;                                     		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioMatch.GetZombieClassFromZombieType
// [0x00020002] 
struct ATGBioMatch_execGetZombieClassFromZombieType_Parms
{
	unsigned char                                      ZombieType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UClass*                                   ZombieClass;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FString                                  ClassName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             FindResult;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.AddZombieInventoryFor
// [0x00020802] ( FUNC_Event )
struct ATGBioMatch_eventAddZombieInventoryFor_Parms
{
	class APawn*                                       PlayerPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGBioPlayerController*                      PC;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGBioZombiePawn*                         P;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             DesiredBagIndex;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.AddDefaultInventoryForZombie
// [0x00024002] 
struct ATGBioMatch_execAddDefaultInventoryForZombie_Parms
{
	class ATGBioPlayerReplicationInfo*                 PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGBioZombiePawn*                            ZombiePawn;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGBioPlayerController*                      PC;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UClass*                                   InvClass;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FString                                  ZombieInvList;                                    		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMatch.GetInventoryListByZombieType
// [0x00020002] 
struct ATGBioMatch_execGetInventoryListByZombieType_Parms
{
	unsigned char                                      ZombieType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  ZombieWeapon;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             FindResult;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.AddDefaultInventoryEx
// [0x00024002] 
struct ATGBioMatch_execAddDefaultInventoryEx_Parms
{
	class APawn*                                       PlayerPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ATGBioPlayerController*                   PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGBioZombiePawn*                         ZombiePawn;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.AddFunctionalItemFor
// [0x00020802] ( FUNC_Event )
struct ATGBioMatch_eventAddFunctionalItemFor_Parms
{
	class APawn*                                       PlayerPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGPlayerReplicationInfo*                    PRI;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerController*                   PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.AddInventoryFor
// [0x00020802] ( FUNC_Event )
struct ATGBioMatch_eventAddInventoryFor_Parms
{
	class APawn*                                       PlayerPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerController*                   PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.GetInventroyListForThisGame
// [0x00420002] 
struct ATGBioMatch_execGetInventroyListForThisGame_Parms
{
	TArray< struct FFItemSimpleData >                  BagWeaponList;                                    		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// class UTGResDataWeapon*                         WeaponRes;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIsFirst : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGBioGame.TGBioMatch.FilterBioGameInventory
// [0x00420002] 
struct ATGBioMatch_execFilterBioGameInventory_Parms
{
	TArray< struct FFItemSimpleData >                  BagWeaponList;                                    		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// int                                             Idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class UTGResDataWeapon*                         WeaponRes;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.GetDesiredZombieCount
// [0x00420002] 
struct ATGBioMatch_execGetDesiredZombieCount_Parms
{
	int                                                PlayerCount;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                HostZombieCount;                                  		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                TerminatorCount;                                  		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TGBioGame.TGBioMatch.TimeToTurnZombie
// [0x00020002] 
struct ATGBioMatch_execTimeToTurnZombie_Parms
{
};

// Function TGBioGame.TGBioMatch.StartTimeToTurnZombie
// [0x00020002] 
struct ATGBioMatch_execStartTimeToTurnZombie_Parms
{
};

// Function TGBioGame.TGBioMatch.SecondPersonAnswer
// [0x00020002] 
struct ATGBioMatch_execSecondPersonAnswer_Parms
{
};

// Function TGBioGame.TGBioMatch.FirstPersonSpeak
// [0x00020002] 
struct ATGBioMatch_execFirstPersonSpeak_Parms
{
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.StartMatch
// [0x00020002] 
struct ATGBioMatch_execStartMatch_Parms
{
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             totalPlayerCount;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.RoundStartLeftTimer
// [0x00020002] 
struct ATGBioMatch_execRoundStartLeftTimer_Parms
{
	// int                                             FeedbackTime;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerController*                   PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.ResetRandomWeaponPickupFactory
// [0x00020002] 
struct ATGBioMatch_execResetRandomWeaponPickupFactory_Parms
{
	// class ATGBioRandomWeaponPickupFactory*          WF;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.PlaySoundWeaponArrived
// [0x00020002] 
struct ATGBioMatch_execPlaySoundWeaponArrived_Parms
{
	// class ATGBioPlayerController*                   PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.ChooseRandomWeaponPickupFactory
// [0x00020002] 
struct ATGBioMatch_execChooseRandomWeaponPickupFactory_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             RandNum;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             FindResult;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< int >                                   RandomIndexArray;                                 		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ATGBioPlayerController*                   PC;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// TArray< class ATGBioPickupFactoryBase* >        CandidateRandomWeaponPickupArray;                 		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMatch.ComputerRandomWeaponDropNumber
// [0x00020002] 
struct ATGBioMatch_execComputerRandomWeaponDropNumber_Parms
{
};

// Function TGBioGame.TGBioMatch.Login
// [0x00420802] ( FUNC_Event )
struct ATGBioMatch_eventLogin_Parms
{
	struct FString                                     Portal;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Options;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FUniqueNetId                                UniqueIdNet;                                      		// 0x0018 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FString                                     ErrorMessage;                                     		// 0x0020 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class APlayerController*                           ReturnValue;                                      		// 0x002C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APlayerController*                        PC;                                               		// 0x0030 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              GRI;                                              		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FString                                  tempStr;                                          		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMatch.PostLogin
// [0x00020802] ( FUNC_Event )
struct ATGBioMatch_eventPostLogin_Parms
{
	class APlayerController*                           NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioMatch.PreLogin
// [0x00420802] ( FUNC_Event )
struct ATGBioMatch_eventPreLogin_Parms
{
	struct FString                                     Options;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Address;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ErrorMessage;                                     		// 0x0018 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// TArray< int >                                   ItemIDArray;                                      		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  Uin;                                              		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMatch.RestartPlayer
// [0x00820002] 
struct ATGBioMatch_execRestartPlayer_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FZombieChangeNecessity                   ZombieChange;                                     		// 0x0008 (0x0014) [0x0000000000000000]              
	// struct FZombieBaseInfo                          BaseInfo;                                         		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.SpawnDefaultPawnFor
// [0x00820002] 
struct ATGBioMatch_execSpawnDefaultPawnFor_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            StartSpot;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UClass*                                   DefaultPlayerClass;                               		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FRotator                                 StartRotation;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	// class APawn*                                    ResultPawn;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  TryLoc;                                           		// 0x0024 (0x000C) [0x0000000000000000]              
	// TArray< struct FVector >                        TryLocArray;                                      		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// float                                           Offset;                                           		// 0x003C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bNoCollisionFail : 1;                             		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGBioGame.TGBioMatch.DrawEndRound
// [0x00020002] 
struct ATGBioMatch_execDrawEndRound_Parms
{
	class AActor*                                      EndRoundFocus;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioMatch.ComputeDamage
// [0x00020002] 
struct ATGBioMatch_execComputeDamage_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioMatch.GenericEndRound
// [0x00020002] 
struct ATGBioMatch_execGenericEndRound_Parms
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class AActor*                                      EndRoundFocus;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bTimeLimit : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             SurvivalHumanCount;                               		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.Killed
// [0x00020002] 
struct ATGBioMatch_execKilled_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledPlayer;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             KilledTeamLeftCount;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGRealWeapon*                            TRW;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerController*                   PC;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerController*                   KillerPC;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerController*                   KilledPlayerPC;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              KillerPRI;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              KilledPlayerPRI;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	// unsigned char                                   KillerTeam;                                       		// 0x002C (0x0001) [0x0000000000000000]              
	// unsigned char                                   KilledPlayerTeam;                                 		// 0x002D (0x0001) [0x0000000000000000]              
	// class ATGBioGameReplicationInfo*                GameRepInfo;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	// class APlayerStart*                             tmpPlayerStart;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.StatZombieNoReBirthInfo
// [0x00020002] 
struct ATGBioMatch_execStatZombieNoReBirthInfo_Parms
{
	class ATGBioPlayerController*                      KilledController;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.Logout
// [0x00020002] 
struct ATGBioMatch_execLogout_Parms
{
	class AController*                                 Exiting;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMatch.InitGameReplicationInfo
// [0x00020002] 
struct ATGBioMatch_execInitGameReplicationInfo_Parms
{
};

// Function TGBioGame.TGBioMatch.CalcACE
// [0x00020000] 
struct ATGBioMatch_execCalcACE_Parms
{
};

// Function TGBioGame.TGBioMatch.UpdateGameSpecificSettings
// [0x00020802] ( FUNC_Event )
struct ATGBioMatch_eventUpdateGameSpecificSettings_Parms
{
	struct FGameSpecificSettings                       Settings;                                         		// 0x0000 (0x0028) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioMatch.PreBeginPlay
// [0x00020002] 
struct ATGBioMatch_execPreBeginPlay_Parms
{
	// class ATGBioRandomWeaponPickupFactory*          WF;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPawn.ClientHandleZombieSkillState
// [0x010201C2] 
struct ATGBioPawn_execClientHandleZombieSkillState_Parms
{
	unsigned long                                      bGoto : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       SklledState;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPawn.HandleZombieSkillState
// [0x00020002] 
struct ATGBioPawn_execHandleZombieSkillState_Parms
{
	unsigned long                                      bGoto : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       SklledState;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPawn.BioPlayDying
// [0x00824102] 
struct ATGBioPawn_execBioPlayDying_Parms
{
	unsigned long                                      bPermanentDeath : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLoc;                                           		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DeathDir;                                         		// 0x0014 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0015 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0018 (0x0020) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0038 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bUseHipSpring : 1;                                		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	// class UClass*                                   UTDamageType;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	// class URB_BodyInstance*                         HipBodyInst;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	// int                                             HipBoneIndex;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	// struct FMatrix                                  HipMatrix;                                        		// 0x0050 (0x0040) [0x0000000000000000]              
	// class UClass*                                   CameraEffect;                                     		// 0x0090 (0x0004) [0x0000000000000000]              
	// class URB_BodyInstance*                         BodyInst;                                         		// 0x0094 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0098 (0x0004) [0x0000000000000000]              
	// int                                             SpecialBodyDensity;                               		// 0x009C (0x0004) [0x0000000000000000]              
	// struct FMatrix                                  abc;                                              		// 0x00A0 (0x0040) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPawn.PlayZombieAnim
// [0x00024102] 
struct ATGBioPawn_execPlayZombieAnim_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DeathDir;                                         		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDead : 1;                                        		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bLocal : 1;                                       		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class UClass*                                   UTDamageType;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FName                                    HitAnimName;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	// int                                             FindIdx;                                          		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPawn.PlayCustomAnim
// [0x00020102] 
struct ATGBioPawn_execPlayCustomAnim_Parms
{
	unsigned char                                      AnimType;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstPerson : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FName                                    AnimName;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             FindIdx;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPawn.SetCrouchJumpSize
// [0x00020002] 
struct ATGBioPawn_execSetCrouchJumpSize_Parms
{
	float                                              Scale;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPawn.SetGeneralJumpSize
// [0x00020002] 
struct ATGBioPawn_execSetGeneralJumpSize_Parms
{
	float                                              Scale;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPawn.SetMoveSpeedScale
// [0x00020002] 
struct ATGBioPawn_execSetMoveSpeedScale_Parms
{
	float                                              Scale;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPawn.NotifyCombiningSpeedScale
// [0x00020002] 
struct ATGBioPawn_execNotifyCombiningSpeedScale_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           TmpSpeedScale;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPawn.SetLookLock
// [0x00020102] 
struct ATGBioPawn_execSetLookLock_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class APlayerController*                           PC;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPawn.SetMovementLock
// [0x00020102] 
struct ATGBioPawn_execSetMovementLock_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class APlayerController*                           PC;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPawn.SetLegSkelControl
// [0x00020002] 
struct ATGBioPawn_execSetLegSkelControl_Parms
{
	unsigned long                                      bOpen : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioPawn.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGBioPawn_eventPostBeginPlay_Parms
{
};

// Function TGBioGame.TGBioPawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGBioPawn_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerPawnBase.StopThirdPersonRestrictEfeect
// [0x00020102] 
struct ATGBioPlayerPawnBase_execStopThirdPersonRestrictEfeect_Parms
{
};

// Function TGBioGame.TGBioPlayerPawnBase.StopFirstPersonRestrictEffect
// [0x00020102] 
struct ATGBioPlayerPawnBase_execStopFirstPersonRestrictEffect_Parms
{
};

// Function TGBioGame.TGBioPlayerPawnBase.PlayThirdPersonRestrictEfeect
// [0x00820102] 
struct ATGBioPlayerPawnBase_execPlayThirdPersonRestrictEfeect_Parms
{
	// struct FVector                                  ThirdPersonBlackRelativeLocation;                 		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawnBase.PlayFirstPersonRestrictEffect
// [0x00020102] 
struct ATGBioPlayerPawnBase_execPlayFirstPersonRestrictEffect_Parms
{
};

// Function TGBioGame.TGBioPlayerPawnBase.DelayUnlockPlayer
// [0x00020102] 
struct ATGBioPlayerPawnBase_execDelayUnlockPlayer_Parms
{
	// class ATGBioPlayerController*                   PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawnBase.SetRestrictState
// [0x00020102] 
struct ATGBioPlayerPawnBase_execSetRestrictState_Parms
{
	unsigned long                                      Restrict : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGBioPlayerController*                   PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawnBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGBioPlayerPawnBase_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.DropCurWeapon
// [0x00020202] ( FUNC_Exec )
struct ATGBioPlayerController_execDropCurWeapon_Parms
{
};

// Function TGBioGame.TGBioPlayerController.SetLockPawnRotation
// [0x00020003] ( FUNC_Final )
struct ATGBioPlayerController_execSetLockPawnRotation_Parms
{
	unsigned long                                      bLock : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.SetMovementLock
// [0x00020003] ( FUNC_Final )
struct ATGBioPlayerController_execSetMovementLock_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.GetSpawnPropLocation
// [0x00020002] 
struct ATGBioPlayerController_execGetSpawnPropLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioPlayerController.ServerSpawnItem
// [0x002200C2] 
struct ATGBioPlayerController_execServerSpawnItem_Parms
{
	unsigned char                                      PropType;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class UClass*                                   PropClass;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGBioInventory*                          Prop;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.SpawnProp
// [0x00020202] ( FUNC_Exec )
struct ATGBioPlayerController_execSpawnProp_Parms
{
	int                                                PropId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.RemovePropMessage
// [0x010201C2] 
struct ATGBioPlayerController_execRemovePropMessage_Parms
{
};

// Function TGBioGame.TGBioPlayerController.RoundReset
// [0x010201C2] 
struct ATGBioPlayerController_execRoundReset_Parms
{
};

// Function TGBioGame.TGBioPlayerController.Reset
// [0x00020002] 
struct ATGBioPlayerController_execReset_Parms
{
};

// Function TGBioGame.TGBioPlayerController.ResetAnimTreeWhenSpectating
// [0x00020002] 
struct ATGBioPlayerController_execResetAnimTreeWhenSpectating_Parms
{
	// class ATGPawn*                                  TPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UClass*                                   Family;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.ServerZombieMeleeSuicide
// [0x002200C2] 
struct ATGBioPlayerController_execServerZombieMeleeSuicide_Parms
{
};

// Function TGBioGame.TGBioPlayerController.ZombieMeleeSuicide
// [0x00020202] ( FUNC_Exec )
struct ATGBioPlayerController_execZombieMeleeSuicide_Parms
{
};

// Function TGBioGame.TGBioPlayerController.ServerBioEndCurrentRound
// [0x00220042] 
struct ATGBioPlayerController_execServerBioEndCurrentRound_Parms
{
};

// Function TGBioGame.TGBioPlayerController.BioEndCurrentRound
// [0x00020202] ( FUNC_Exec )
struct ATGBioPlayerController_execBioEndCurrentRound_Parms
{
};

// Function TGBioGame.TGBioPlayerController.PlayerTick
// [0x00020802] ( FUNC_Event )
struct ATGBioPlayerController_eventPlayerTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioRandomWeaponPickupFactory*          WF;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGBioHumanHeroPawn*                      HHPawn;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// class ATGBioHUD*                                THUD;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bTickCanSee : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGBioGame.TGBioPlayerController.ShowChangeBag
// [0x00020002] 
struct ATGBioPlayerController_execShowChangeBag_Parms
{
	// class ATGBioPlayerPawn*                         TPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.IsHumanCamp
// [0x00020002] 
struct ATGBioPlayerController_execIsHumanCamp_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioPlayerController.IsZombieCamp
// [0x00020002] 
struct ATGBioPlayerController_execIsZombieCamp_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioPlayerController.ServerSetBioTransMode
// [0x00220042] 
struct ATGBioPlayerController_execServerSetBioTransMode_Parms
{
	int                                                NewGodMode;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.SetBioTransMode
// [0x00020202] ( FUNC_Exec )
struct ATGBioPlayerController_execSetBioTransMode_Parms
{
	int                                                NewMode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.UnUse
// [0x00020202] ( FUNC_Exec )
struct ATGBioPlayerController_execUnUse_Parms
{
};

// Function TGBioGame.TGBioPlayerController.GotZPoint
// [0x00020002] 
struct ATGBioPlayerController_execGotZPoint_Parms
{
	int                                                GotPoint;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.SetServerPermanentDeathLocation
// [0x002200C2] 
struct ATGBioPlayerController_execSetServerPermanentDeathLocation_Parms
{
	struct FVector                                     DeathLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.ServerChangeToHumanHero
// [0x002200C2] 
struct ATGBioPlayerController_execServerChangeToHumanHero_Parms
{
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.InterServerTurnToHumanHero
// [0x00220042] 
struct ATGBioPlayerController_execInterServerTurnToHumanHero_Parms
{
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.TurnToHumanHero
// [0x00020202] ( FUNC_Exec )
struct ATGBioPlayerController_execTurnToHumanHero_Parms
{
};

// Function TGBioGame.TGBioPlayerController.InterServerTurnToHumanHeroEx2
// [0x00220042] 
struct ATGBioPlayerController_execInterServerTurnToHumanHeroEx2_Parms
{
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.T2HumanHero2
// [0x00020202] ( FUNC_Exec )
struct ATGBioPlayerController_execT2HumanHero2_Parms
{
};

// Function TGBioGame.TGBioPlayerController.InterServerTurnToHumanHeroEx
// [0x00220042] 
struct ATGBioPlayerController_execInterServerTurnToHumanHeroEx_Parms
{
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.T2HumanHero
// [0x00020202] ( FUNC_Exec )
struct ATGBioPlayerController_execT2HumanHero_Parms
{
};

// Function TGBioGame.TGBioPlayerController.ServerZombieLevelUP
// [0x00220042] 
struct ATGBioPlayerController_execServerZombieLevelUP_Parms
{
};

// Function TGBioGame.TGBioPlayerController.ZombieLevelUP
// [0x00020202] ( FUNC_Exec )
struct ATGBioPlayerController_execZombieLevelUP_Parms
{
};

// Function TGBioGame.TGBioPlayerController.AddTimerMessageFeedback
// [0x010201C2] 
struct ATGBioPlayerController_execAddTimerMessageFeedback_Parms
{
	int                                                RemainingSeconds;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.PlayRoundStartSound
// [0x010201C2] 
struct ATGBioPlayerController_execPlayRoundStartSound_Parms
{
};

// Function TGBioGame.TGBioPlayerController.TimeFeedback
// [0x010201C2] 
struct ATGBioPlayerController_execTimeFeedback_Parms
{
	int                                                FeedbackTime;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.AddKilledByHeroGunWeaponFeedback
// [0x010201C2] 
struct ATGBioPlayerController_execAddKilledByHeroGunWeaponFeedback_Parms
{
};

// Function TGBioGame.TGBioPlayerController.AddKilledByMeeWeaponFeedback
// [0x010201C2] 
struct ATGBioPlayerController_execAddKilledByMeeWeaponFeedback_Parms
{
};

// Function TGBioGame.TGBioPlayerController.AddWeaponArrivedSound
// [0x010201C2] 
struct ATGBioPlayerController_execAddWeaponArrivedSound_Parms
{
};

// Function TGBioGame.TGBioPlayerController.AddWeaponArrivedFeedback
// [0x010201C2] 
struct ATGBioPlayerController_execAddWeaponArrivedFeedback_Parms
{
};

// Function TGBioGame.TGBioPlayerController.PlaySoundBecomeHero
// [0x00020002] 
struct ATGBioPlayerController_execPlaySoundBecomeHero_Parms
{
	// int                                             iValue;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.AddBecomeHumanHeroStateFeedback
// [0x010201C2] 
struct ATGBioPlayerController_execAddBecomeHumanHeroStateFeedback_Parms
{
	int                                                HeroType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.AddCanChangeHumanHeroFeedback
// [0x010201C2] 
struct ATGBioPlayerController_execAddCanChangeHumanHeroFeedback_Parms
{
};

// Function TGBioGame.TGBioPlayerController.AddRestrictStateFeedback
// [0x010201C0] 
struct ATGBioPlayerController_execAddRestrictStateFeedback_Parms
{
	unsigned long                                      bRestriced : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.AddKillHumanHeroFeedback
// [0x010201C2] 
struct ATGBioPlayerController_execAddKillHumanHeroFeedback_Parms
{
};

// Function TGBioGame.TGBioPlayerController.AddMatchInfoMessageFeedback
// [0x010201C2] 
struct ATGBioPlayerController_execAddMatchInfoMessageFeedback_Parms
{
};

// Function TGBioGame.TGBioPlayerController.IsSkillCoolingDown
// [0x00020002] 
struct ATGBioPlayerController_execIsSkillCoolingDown_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioZombiePawn*                         ZombiePawn;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bCoolingDown : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGBioGame.TGBioPlayerController.StartSkill
// [0x00020002] 
struct ATGBioPlayerController_execStartSkill_Parms
{
	// class ATGBioZombiePawn*                         ZombiePawn;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.ClientStartSkill
// [0x00020002] 
struct ATGBioPlayerController_execClientStartSkill_Parms
{
};

// Function TGBioGame.TGBioPlayerController.AddZombieLastoneSound
// [0x010201C2] 
struct ATGBioPlayerController_execAddZombieLastoneSound_Parms
{
	// class ATGBioZombiePawn*                         ZombiePawn;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.AddCanHumanHeroSound
// [0x00020002] 
struct ATGBioPlayerController_execAddCanHumanHeroSound_Parms
{
	// class ATGBioPlayerPawn*                         PlayerPawn;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.Use
// [0x00020202] ( FUNC_Exec )
struct ATGBioPlayerController_execUse_Parms
{
};

// Function TGBioGame.TGBioPlayerController.ChangeZ
// [0x00020202] ( FUNC_Exec )
struct ATGBioPlayerController_execChangeZ_Parms
{
	int                                                I;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   Type;                                             		// 0x0004 (0x0001) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.TestChangeZ
// [0x00A200C2] 
struct ATGBioPlayerController_execTestChangeZ_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FZombieChangeNecessity                   ZombieChange;                                     		// 0x0008 (0x0014) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.Changebag
// [0x00020202] ( FUNC_Exec )
struct ATGBioPlayerController_execChangebag_Parms
{
};

// Function TGBioGame.TGBioPlayerController.SwitchWeapon
// [0x00020202] ( FUNC_Exec )
struct ATGBioPlayerController_execSwitchWeapon_Parms
{
	unsigned char                                      T;                                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.pSelectHumanHeroWeapon
// [0x00020202] ( FUNC_Exec )
struct ATGBioPlayerController_execpSelectHumanHeroWeapon_Parms
{
	int                                                I;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.pSelectZ
// [0x00020202] ( FUNC_Exec )
struct ATGBioPlayerController_execpSelectZ_Parms
{
	int                                                I;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   Type;                                             		// 0x0004 (0x0001) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.SelectHumanHeroWeaponServer
// [0x002200C2] 
struct ATGBioPlayerController_execSelectHumanHeroWeaponServer_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.SelectHumanHeroWeapon
// [0x00020002] 
struct ATGBioPlayerController_execSelectHumanHeroWeapon_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGInventoryManager*                      InvMgr;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UClass*                                   HeroWeaponClass;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.CloseSelectHumanHeroWeaponType
// [0x00020002] 
struct ATGBioPlayerController_execCloseSelectHumanHeroWeaponType_Parms
{
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.OpenSelectHumanHeroWeaponType
// [0x00020002] 
struct ATGBioPlayerController_execOpenSelectHumanHeroWeaponType_Parms
{
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.ServerBeginVoteToKickPlayer
// [0x002200C2] 
struct ATGBioPlayerController_execServerBeginVoteToKickPlayer_Parms
{
	struct FString                                     Uin;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      KickReason;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     CustomKickReason;                                 		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ATGGame*                                  Game;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerController*                   bioPC;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              bioPRI;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.BeginVoteToKickPlayer
// [0x00020002] 
struct ATGBioPlayerController_execBeginVoteToKickPlayer_Parms
{
	struct FString                                     Uin;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      KickReason;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     CustomKickReason;                                 		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioPlayerController.ServerGetKickPlayerData
// [0x002200C2] 
struct ATGBioPlayerController_execServerGetKickPlayerData_Parms
{
	// class ATGBioPlayerController*                   PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< struct FString >                        PlayerUins;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FString >                        PlayerNickNames;                                  		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< int >                                   BeVoteCounts;                                     		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FString >                        HumanHeros;                                       		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  HumanHerosString;                                 		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< int >                                   TargetVotesToKickArray;                           		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  PlayerUinsString;                                 		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  PlayerNickNamesString;                            		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  BeVoteCountsString;                               		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  TargetVotesToKickString;                          		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Idx;                                              		// 0x0080 (0x0004) [0x0000000000000000]              
	// int                                             CountingDown;                                     		// 0x0084 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.SelectHostZombieTypeServer
// [0x002200C2] 
struct ATGBioPlayerController_execSelectHostZombieTypeServer_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.ZombieTypeMap
// [0x00020002] 
struct ATGBioPlayerController_execZombieTypeMap_Parms
{
	unsigned char                                      ZombieType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioPlayerController.CheckZombieTypeCharge
// [0x00020002] 
struct ATGBioPlayerController_execCheckZombieTypeCharge_Parms
{
	unsigned char                                      ZombieType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class ATGBioPlayerReplicationInfo*                 PRI;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioPlayerController.CheckZombieTypeWithoutBoss
// [0x00020002] 
struct ATGBioPlayerController_execCheckZombieTypeWithoutBoss_Parms
{
	unsigned char                                      ZombieType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWithoutBoss : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioPlayerController.SelectHostZombieType
// [0x00820002] 
struct ATGBioPlayerController_execSelectHostZombieType_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FZombieChangeNecessity                   ZombieChange;                                     		// 0x0008 (0x0014) [0x0000000000000000]              
	// class ATGBioMatch*                              BioMatch;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.ToggleSelectHostZombieTypeLazy
// [0x00024002] 
struct ATGBioPlayerController_execToggleSelectHostZombieTypeLazy_Parms
{
	unsigned long                                      bForceClose : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.ToggleSelectHostZombieTypeLazyServer
// [0x002240C2] 
struct ATGBioPlayerController_execToggleSelectHostZombieTypeLazyServer_Parms
{
	unsigned long                                      bForceClose : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.CloseSelectHostZombieType
// [0x00020002] 
struct ATGBioPlayerController_execCloseSelectHostZombieType_Parms
{
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.OpenSelectHostZombieType
// [0x00020002] 
struct ATGBioPlayerController_execOpenSelectHostZombieType_Parms
{
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.CreateSkillServer
// [0x002200C2] 
struct ATGBioPlayerController_execCreateSkillServer_Parms
{
};

// Function TGBioGame.TGBioPlayerController.CreateSkill
// [0x00020202] ( FUNC_Exec )
struct ATGBioPlayerController_execCreateSkill_Parms
{
};

// Function TGBioGame.TGBioPlayerController.ServerGetZPoint
// [0x002200C2] 
struct ATGBioPlayerController_execServerGetZPoint_Parms
{
};

// Function TGBioGame.TGBioPlayerController.UpdateGameSettingOption
// [0x00020002] 
struct ATGBioPlayerController_execUpdateGameSettingOption_Parms
{
	// class UTGOnlineClient*                          tmpOnlineClient;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UTG_VideoSettings*                        VideoSettingProfile;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGBioZombiePawn*                         ZombiePawn;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.GetZPoint
// [0x00020202] ( FUNC_Exec )
struct ATGBioPlayerController_execGetZPoint_Parms
{
};

// Function TGBioGame.TGBioPlayerController.PressFKey
// [0x00020202] ( FUNC_Exec )
struct ATGBioPlayerController_execPressFKey_Parms
{
};

// Function TGBioGame.TGBioPlayerController.NotifyClientPlayerResetSkill
// [0x010201C2] 
struct ATGBioPlayerController_execNotifyClientPlayerResetSkill_Parms
{
	unsigned long                                      ResetOnlyCoolTime : 1;                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ResetCoolTime : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ClientClearManagerCoolDownOver : 1;               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.NotifyServerPlayerResetSkill
// [0x00020002] 
struct ATGBioPlayerController_execNotifyServerPlayerResetSkill_Parms
{
	unsigned long                                      ResetOnlyCoolTime : 1;                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ResetCoolTime : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.NotifyPlayerResetSkill
// [0x00020002] 
struct ATGBioPlayerController_execNotifyPlayerResetSkill_Parms
{
	unsigned long                                      ResetOnlyCoolTime : 1;                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ResetCoolTime : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ClientClearManagerCoolDownOver : 1;               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.PostLoadCharacter
// [0x00020002] 
struct ATGBioPlayerController_execPostLoadCharacter_Parms
{
};

// Function TGBioGame.TGBioPlayerController.IgnoreLookInput
// [0x00020002] 
struct ATGBioPlayerController_execIgnoreLookInput_Parms
{
	unsigned long                                      bNewLookInput : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.IsFiringDisabled
// [0x00020102] 
struct ATGBioPlayerController_execIsFiringDisabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioPlayerController.StopFire
// [0x00024202] ( FUNC_Exec )
struct ATGBioPlayerController_execStopFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.StartFire
// [0x00024202] ( FUNC_Exec )
struct ATGBioPlayerController_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.PlayVoiceSound
// [0x00020102] 
struct ATGBioPlayerController_execPlayVoiceSound_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGBioPlayerController_eventPostBeginPlay_Parms
{
};

// Function TGBioGame.TGBioPlayerController.CloseBioClientPostProcess
// [0x010201C2] 
struct ATGBioPlayerController_execCloseBioClientPostProcess_Parms
{
	// class ULocalPlayer*                             tmpPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.UpdateBioClientPostProcess
// [0x010241C2] 
struct ATGBioPlayerController_execUpdateBioClientPostProcess_Parms
{
	class UMaterial*                                   OtherMaterial;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ForceClose : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class ULocalPlayer*                             tmpPlayer;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.ClientPlayTakeHit
// [0x01020142] 
struct ATGBioPlayerController_execClientPlayTakeHit_Parms
{
	struct FVector                                     AttackerPos;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Damage;                                           		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.NotifyTakeHit
// [0x00020002] 
struct ATGBioPlayerController_execNotifyTakeHit_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     AttackerPos;                                      		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerController.NotifyLoadingProcessComplete
// [0x00020102] 
struct ATGBioPlayerController_execNotifyLoadingProcessComplete_Parms
{
	// class ATGBioGameReplicationInfo*                bioGRI;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerController.ColorEffectSet
// [0x00020400] ( FUNC_Native )
struct ATGBioPlayerController_execColorEffectSet_Parms
{
	unsigned long                                      EffectSet : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerInput.TGBioInputMiddleButtonDown
// [0x00020800] ( FUNC_Event )
struct UTGBioPlayerInput_eventTGBioInputMiddleButtonDown_Parms
{
	unsigned long                                      bButtonDown : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerInput.TGBioInputRightButtonDown
// [0x00020800] ( FUNC_Event )
struct UTGBioPlayerInput_eventTGBioInputRightButtonDown_Parms
{
	unsigned long                                      bButtonDown : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerInput.TGBioInputLeftButtonDown
// [0x00020800] ( FUNC_Event )
struct UTGBioPlayerInput_eventTGBioInputLeftButtonDown_Parms
{
	unsigned long                                      bButtonDown : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerReplicationInfo.GetGameScoreForSort
// [0x00020102] 
struct ATGBioPlayerReplicationInfo_execGetGameScoreForSort_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddTimesHeadShot
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execAddTimesHeadShot_Parms
{
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddTimesKillZombieNoRebirth
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execAddTimesKillZombieNoRebirth_Parms
{
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddTimesZombieBeKilled
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execAddTimesZombieBeKilled_Parms
{
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddTimesHeroKillZombie
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execAddTimesHeroKillZombie_Parms
{
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddKilledCount
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execAddKilledCount_Parms
{
	int                                                iCount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerReplicationInfo.StatHumanHero
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execStatHumanHero_Parms
{
	// float                                           fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioMatch*                              tMatch;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerReplicationInfo.StatZombieInfo
// [0x00024002] 
struct ATGBioPlayerReplicationInfo_execStatZombieInfo_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                iLel;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Result;                                           		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRebirth : 1;                                     		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class ATGBioMatch*                              tMatch;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           fDeltaTime;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddOneZombieInfo
// [0x00820002] 
struct ATGBioPlayerReplicationInfo_execAddOneZombieInfo_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Result;                                           		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRebirth : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FBIOZombieInfo                           zombieInfo;                                       		// 0x0008 (0x001C) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFound : 1;                                       		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddZombieInfectionHumanCount
// [0x00820002] 
struct ATGBioPlayerReplicationInfo_execAddZombieInfectionHumanCount_Parms
{
	// struct FBIOZombieInfo                           zombieInfo;                                       		// 0x0000 (0x001C) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerReplicationInfo.IsHumanCamp
// [0x00020102] 
struct ATGBioPlayerReplicationInfo_execIsHumanCamp_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioPlayerReplicationInfo.IsZombieCamp
// [0x00020102] 
struct ATGBioPlayerReplicationInfo_execIsZombieCamp_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioPlayerReplicationInfo.RoundClear
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execRoundClear_Parms
{
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddSuvCount
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execAddSuvCount_Parms
{
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddKilledTerminatorZombie
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execAddKilledTerminatorZombie_Parms
{
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddKilledZombie
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execAddKilledZombie_Parms
{
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddKilledPlayer
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execAddKilledPlayer_Parms
{
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddKilledHumanHero
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execAddKilledHumanHero_Parms
{
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddTerminatorKilledPlayer
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execAddTerminatorKilledPlayer_Parms
{
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddTerminatorKilledHumanHero
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execAddTerminatorKilledHumanHero_Parms
{
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddHumanHeroKilledTerminatorZombie
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execAddHumanHeroKilledTerminatorZombie_Parms
{
};

// Function TGBioGame.TGBioPlayerReplicationInfo.ComputerKillCount
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execComputerKillCount_Parms
{
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddWeaponDamage
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execAddWeaponDamage_Parms
{
	int                                                iDamage;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddCurrentTotalDamage
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execAddCurrentTotalDamage_Parms
{
	int                                                iDamage;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iOneKillDamage;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioGameReplicationInfo*                bioGRI;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerReplicationInfo.ComputerGameScore
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execComputerGameScore_Parms
{
	// class ATGBioMatch*                              tMatch;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerReplicationInfo.ComputerGameScoreRate
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execComputerGameScoreRate_Parms
{
	int                                                PlayerCount;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerReplicationInfo.ComputerGP
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execComputerGP_Parms
{
};

// Function TGBioGame.TGBioPlayerReplicationInfo.SetBeginTime
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execSetBeginTime_Parms
{
	float                                              fTime;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerReplicationInfo.CalcGameTime
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execCalcGameTime_Parms
{
};

// Function TGBioGame.TGBioPlayerReplicationInfo.GetBioLocal
// [0x00020102] 
struct ATGBioPlayerReplicationInfo_execGetBioLocal_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioPlayerReplicationInfo.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGBioPlayerReplicationInfo_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UParticleSystemComponent*                 tmpParticleSystem;                                		// 0x0008 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// int                                             RegenerateEffectType;                             		// 0x000C (0x0004) [0x0000000000000000]              
	// class AUTPawn*                                  UTP;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddTimesHumanWin
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execAddTimesHumanWin_Parms
{
};

// Function TGBioGame.TGBioPlayerReplicationInfo.AddTimesZombieWin
// [0x00020002] 
struct ATGBioPlayerReplicationInfo_execAddTimesZombieWin_Parms
{
};

// Function TGBioGame.TGBioPlayerReplicationInfo.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGBioPlayerReplicationInfo_eventPostBeginPlay_Parms
{
};

// Function TGBioGame.TGBioAnimNodeSeqWeap.WeapTypeChanged
// [0x00020902] ( FUNC_Event )
struct UTGBioAnimNodeSeqWeap_eventWeapTypeChanged_Parms
{
	struct FName                                       NewAimProfileName;                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FName                                    NewSeqName;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHumanHeroPawn.PlayDying
// [0x00024102] 
struct ATGBioHumanHeroPawn_execPlayDying_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DeathDir;                                         		// 0x0010 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0011 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioHumanHeroPawn.RsetTrampleSkillSpeedScale
// [0x00020002] 
struct ATGBioHumanHeroPawn_execRsetTrampleSkillSpeedScale_Parms
{
};

// Function TGBioGame.TGBioHumanHeroPawn.SetTrampleSkillSpeedScale
// [0x00020002] 
struct ATGBioHumanHeroPawn_execSetTrampleSkillSpeedScale_Parms
{
};

// Function TGBioGame.TGBioHumanHeroPawn.ProcessCrouchedClientOther
// [0x00020400] ( FUNC_Native )
struct ATGBioHumanHeroPawn_execProcessCrouchedClientOther_Parms
{
};

// Function TGBioGame.TGBioHumanHeroPawn.ProcessCrouched
// [0x00020400] ( FUNC_Native )
struct ATGBioHumanHeroPawn_execProcessCrouched_Parms
{
};

// Function TGBioGame.TGBioHumanHeroPawn.GetKillZombieSound
// [0x00020002] 
struct ATGBioHumanHeroPawn_execGetKillZombieSound_Parms
{
	class USoundCue*                                   ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHumanHeroPawn.NotifyArmMeshChanged
// [0x00020100] 
struct ATGBioHumanHeroPawn_execNotifyArmMeshChanged_Parms
{
	class ATGPlayerReplicationInfo*                    UTPRI;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHumanHeroPawn.LeaveABloodSplatterDecal
// [0x00820102] 
struct ATGBioHumanHeroPawn_execLeaveABloodSplatterDecal_Parms
{
	struct FVector                                     HitLoc;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNorm;                                          		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   TraceActor;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  out_HitLocation;                                  		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  out_HitNormal;                                    		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceDest;                                        		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceExtent;                                      		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0058 (0x0020) [0x0000000000000000]              
	// class UMaterialInstanceTimeVarying*             MITV_Decal;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
	// class UClass*                                   tmpFamilyInfo;                                    		// 0x007C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHumanHeroPawn.UpdateGameSettingOption
// [0x00020102] 
struct ATGBioHumanHeroPawn_execUpdateGameSettingOption_Parms
{
	unsigned long                                      IsUpdateLight : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioHumanHeroPawn.NotifyTeamChanged
// [0x00020102] 
struct ATGBioHumanHeroPawn_execNotifyTeamChanged_Parms
{
	// class ATGPlayerReplicationInfo*                 PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned long                                   IsUpdateLight : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGBioGame.TGBioHumanHeroPawn.timeSetRefireCheckTimer
// [0x00020102] 
struct ATGBioHumanHeroPawn_exectimeSetRefireCheckTimer_Parms
{
	// class ATGBioWeap_HeroBlade*                     HeroBlade;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHumanHeroPawn.UpdateFadeOut
// [0x00020002] 
struct ATGBioHumanHeroPawn_execUpdateFadeOut_Parms
{
};

// Function TGBioGame.TGBioHumanHeroPawn.PlayHeroDeadEffect
// [0x00020102] 
struct ATGBioHumanHeroPawn_execPlayHeroDeadEffect_Parms
{
};

// Function TGBioGame.TGBioHumanHeroPawn.PlayHeroCircleEffect
// [0x00020102] 
struct ATGBioHumanHeroPawn_execPlayHeroCircleEffect_Parms
{
};

// Function TGBioGame.TGBioHumanHeroPawn.PlayHeroWeaponEffect2
// [0x00020102] 
struct ATGBioHumanHeroPawn_execPlayHeroWeaponEffect2_Parms
{
};

// Function TGBioGame.TGBioHumanHeroPawn.PlayHeroWeaponEffect
// [0x00020102] 
struct ATGBioHumanHeroPawn_execPlayHeroWeaponEffect_Parms
{
};

// Function TGBioGame.TGBioHumanHeroPawn.PlayHeroSpawnEffect
// [0x00020102] 
struct ATGBioHumanHeroPawn_execPlayHeroSpawnEffect_Parms
{
};

// Function TGBioGame.TGBioHumanHeroPawn.PlayThirdPersonSwingMeleeWeaponAnimBeforeDamage
// [0x00020102] 
struct ATGBioHumanHeroPawn_execPlayThirdPersonSwingMeleeWeaponAnimBeforeDamage_Parms
{
	unsigned long                                      bViaReplication : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioHumanHeroPawn.PlayThirdPersonStabMeleeWeaponAnimBeforeDamage
// [0x00020102] 
struct ATGBioHumanHeroPawn_execPlayThirdPersonStabMeleeWeaponAnimBeforeDamage_Parms
{
	unsigned long                                      bViaReplication : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      LocalMeleeWeaponStabCount;                        		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// int                                             RandValue;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHumanHeroPawn.PlayTakeHitEffects
// [0x00820102] 
struct ATGBioHumanHeroPawn_execPlayTakeHitEffects_Parms
{
	// class UClass*                                   UTDamageType;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned char                                   DeathDir;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
	// struct FVector                                  BloodMomentum;                                    		// 0x0008 (0x000C) [0x0000000000000000]              
	// class AUTEmit_HitEffect*                        HitEffect;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHumanHeroPawn.PlayDiedAnim
// [0x00024102] 
struct ATGBioHumanHeroPawn_execPlayDiedAnim_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DeathDir;                                         		// 0x0004 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      HitGrou;                                          		// 0x0005 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UClass*                                   UTDamageType;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHumanHeroPawn.PlaySpecialDiedAnim
// [0x00020102] 
struct ATGBioHumanHeroPawn_execPlaySpecialDiedAnim_Parms
{
};

// Function TGBioGame.TGBioHumanHeroPawn.SetWeapAnimType
// [0x00020902] ( FUNC_Event )
struct ATGBioHumanHeroPawn_eventSetWeapAnimType_Parms
{
	unsigned char                                      AnimType;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHumanHeroPawn.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ATGBioHumanHeroPawn_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x0020) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ATGPlayerController*                      tmpInstigatedBy;                                  		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHumanHeroPawn.ServerTakeDamage
// [0x00024002] 
struct ATGBioHumanHeroPawn_execServerTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x0020) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioHumanHeroPawn.Died
// [0x00024002] 
struct ATGBioHumanHeroPawn_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DeathDir;                                         		// 0x0014 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0015 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x001C (0x0004) [0x0000000000000000]              
	// class ATGBioTerminatorZombie*                   TZPawn;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHumanHeroPawn.PossessedBy
// [0x00020002] 
struct ATGBioHumanHeroPawn_execPossessedBy_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioHumanHeroPawn.HumanHeroWeaponSet
// [0x010201C2] 
struct ATGBioHumanHeroPawn_execHumanHeroWeaponSet_Parms
{
};

// Function TGBioGame.TGBioHumanHeroPawn.PendingBioWeaponSetTimer
// [0x00020102] 
struct ATGBioHumanHeroPawn_execPendingBioWeaponSetTimer_Parms
{
};

// Function TGBioGame.TGBioHumanHeroPawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGBioHumanHeroPawn_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHumanHeroPawn.CheckWeaponByControllerRep
// [0x00020102] 
struct ATGBioHumanHeroPawn_execCheckWeaponByControllerRep_Parms
{
};

// Function TGBioGame.TGBioHumanHeroPawn.ThrowWeaponOnDeath
// [0x00020000] 
struct ATGBioHumanHeroPawn_execThrowWeaponOnDeath_Parms
{
};

// Function TGBioGame.TGBioHumanHeroPawn.DoJump
// [0x00020002] 
struct ATGBioHumanHeroPawn_execDoJump_Parms
{
	unsigned long                                      bUpdating : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioHumanHeroPawn.AddOneKillFeedback
// [0x010201C2] 
struct ATGBioHumanHeroPawn_execAddOneKillFeedback_Parms
{
	int                                                NumToAdd;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHumanHeroPawn.AddDamageValue
// [0x00020002] 
struct ATGBioHumanHeroPawn_execAddDamageValue_Parms
{
	int                                                iDamage;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawn.RsetTrampleSkillSpeedScale
// [0x00020002] 
struct ATGBioPlayerPawn_execRsetTrampleSkillSpeedScale_Parms
{
};

// Function TGBioGame.TGBioPlayerPawn.SetTrampleSkillSpeedScale
// [0x00020002] 
struct ATGBioPlayerPawn_execSetTrampleSkillSpeedScale_Parms
{
};

// Function TGBioGame.TGBioPlayerPawn.Changebag
// [0x002200C2] 
struct ATGBioPlayerPawn_execChangebag_Parms
{
	unsigned char                                      T;                                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// TArray< struct FFItemSimpleData >               InventoryList;                                    		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             iBagIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGInventoryManager*                      UTInvManager;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ATGPlayerReplicationInfo*                 PRI;                                              		// 0x001C (0x0004) [0x0000000000000000]              
	// class ATGGame*                                  Game;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawn.TakeRadiusDamage
// [0x00024102] 
struct ATGBioPlayerPawn_execTakeRadiusDamage_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BaseDamage;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageRadius;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageTypeClass;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HurtOrigin;                                       		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFullDamage : 1;                                  		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageFalloffExponent;                            		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ATGBioItem_Jerrican*                      Jerrican;                                         		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawn.GetSecondPersonSound
// [0x00020002] 
struct ATGBioPlayerPawn_execGetSecondPersonSound_Parms
{
	class USoundCue*                                   ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioPlayerPawn.GetFirstPersonSound
// [0x00020002] 
struct ATGBioPlayerPawn_execGetFirstPersonSound_Parms
{
	class USoundCue*                                   ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawn.GetKillZombieSound
// [0x00020002] 
struct ATGBioPlayerPawn_execGetKillZombieSound_Parms
{
	class USoundCue*                                   ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawn.WeaponAttachmentChanged
// [0x00020102] 
struct ATGBioPlayerPawn_execWeaponAttachmentChanged_Parms
{
	// class ATGBioGameReplicationInfo*                BioRepication;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawn.SwitchWeapon
// [0x00020102] 
struct ATGBioPlayerPawn_execSwitchWeapon_Parms
{
	unsigned char                                      NewGroup;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// TArray< class AUTWeapon* >                      MainWeaponList;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class AUTWeapon* >                      RollWeaponList;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioPlayerPawn.PlayTakeHitEffects
// [0x00820102] 
struct ATGBioPlayerPawn_execPlayTakeHitEffects_Parms
{
	// class UClass*                                   UTDamageType;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned char                                   DeathDir;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
	// struct FVector                                  BloodMomentum;                                    		// 0x0008 (0x000C) [0x0000000000000000]              
	// class AUTEmit_HitEffect*                        HitEffect;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          BloodTemplate;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UClass*                                   TGPawnFamilyInfo;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	// TArray< struct FDistanceBasedParticleTemplate > BloodEffectTemplateList;                          		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioPlayerPawn.UpdateGameSettingOption
// [0x00020102] 
struct ATGBioPlayerPawn_execUpdateGameSettingOption_Parms
{
	unsigned long                                      IsUpdateLight : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerPawn.Destroyed
// [0x00020102] 
struct ATGBioPlayerPawn_execDestroyed_Parms
{
};

// Function TGBioGame.TGBioPlayerPawn.StopHumItemEffect
// [0x00020102] 
struct ATGBioPlayerPawn_execStopHumItemEffect_Parms
{
};

// Function TGBioGame.TGBioPlayerPawn.StartHumItemEffect
// [0x00020102] 
struct ATGBioPlayerPawn_execStartHumItemEffect_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawn.StopDisarmParticleEffect
// [0x00020102] 
struct ATGBioPlayerPawn_execStopDisarmParticleEffect_Parms
{
};

// Function TGBioGame.TGBioPlayerPawn.StartDisarmParticleEffect
// [0x00020102] 
struct ATGBioPlayerPawn_execStartDisarmParticleEffect_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawn.StartFire
// [0x00020102] 
struct ATGBioPlayerPawn_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerPawn.RecoverGunUselimit
// [0x00020002] 
struct ATGBioPlayerPawn_execRecoverGunUselimit_Parms
{
};

// Function TGBioGame.TGBioPlayerPawn.SetClientGunUselimit
// [0x00020002] 
struct ATGBioPlayerPawn_execSetClientGunUselimit_Parms
{
	float                                              UselimitTime;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawn.RecoverGunUselimitEffect
// [0x00020002] 
struct ATGBioPlayerPawn_execRecoverGunUselimitEffect_Parms
{
};

// Function TGBioGame.TGBioPlayerPawn.SetServerGunUselimit
// [0x00020002] 
struct ATGBioPlayerPawn_execSetServerGunUselimit_Parms
{
	float                                              UselimitTime;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawn.PlaySpecialDiedAnim
// [0x00020102] 
struct ATGBioPlayerPawn_execPlaySpecialDiedAnim_Parms
{
};

// Function TGBioGame.TGBioPlayerPawn.ChangeBagTime
// [0x00020102] 
struct ATGBioPlayerPawn_execChangeBagTime_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioPlayerPawn.IsInHomeZone
// [0x00020102] 
struct ATGBioPlayerPawn_execIsInHomeZone_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioPlayerPawn.AddAttackUpRate
// [0x00020002] 
struct ATGBioPlayerPawn_execAddAttackUpRate_Parms
{
	// class ATGBioPlayerInventoryManager*             InvMgr;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawn.SetDefenceInfectionCount
// [0x00020002] 
struct ATGBioPlayerPawn_execSetDefenceInfectionCount_Parms
{
	int                                                iCount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioPlayerPawn.PlayDying
// [0x00824102] 
struct ATGBioPlayerPawn_execPlayDying_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DeathDir;                                         		// 0x0010 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0011 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerController*                   PC;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FZombieChangeNecessity                   ZombieChange;                                     		// 0x001C (0x0014) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawn.Died
// [0x00024002] 
struct ATGBioPlayerPawn_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DeathDir;                                         		// 0x0014 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0015 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x001C (0x0004) [0x0000000000000000]              
	// class ATGBioTerminatorZombie*                   TZPawn;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawn.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ATGBioPlayerPawn_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x0020) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0048 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        InstigatedByPC;                                   		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawn.CancelAntitoxicImmune
// [0x00020002] 
struct ATGBioPlayerPawn_execCancelAntitoxicImmune_Parms
{
};

// Function TGBioGame.TGBioPlayerPawn.ServerTakeDamage
// [0x00024002] 
struct ATGBioPlayerPawn_execServerTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x0020) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioPlayerPawn.ItemChangeDamageScale
// [0x00020002] 
struct ATGBioPlayerPawn_execItemChangeDamageScale_Parms
{
	unsigned long                                      DoubleScale : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGBioPlayerInventoryManager*             BioInvManager;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawn.ClientUnSetItemDamageScale
// [0x010201C2] 
struct ATGBioPlayerPawn_execClientUnSetItemDamageScale_Parms
{
};

// Function TGBioGame.TGBioPlayerPawn.UnSetItemDamageScale
// [0x00020002] 
struct ATGBioPlayerPawn_execUnSetItemDamageScale_Parms
{
};

// Function TGBioGame.TGBioPlayerPawn.SetItemDamageScale
// [0x00020002] 
struct ATGBioPlayerPawn_execSetItemDamageScale_Parms
{
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawn.ClientSetItemDamageScale
// [0x00020002] 
struct ATGBioPlayerPawn_execClientSetItemDamageScale_Parms
{
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawn.ServerSetItemDamageScale
// [0x002200C2] 
struct ATGBioPlayerPawn_execServerSetItemDamageScale_Parms
{
};

// Function TGBioGame.TGBioPlayerPawn.GetItemCooldownRemainTime
// [0x00020002] 
struct ATGBioPlayerPawn_execGetItemCooldownRemainTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioPlayerPawn.GetItemCooldownRemainPercent
// [0x00020002] 
struct ATGBioPlayerPawn_execGetItemCooldownRemainPercent_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioPlayerPawn.AddOneKillFeedback
// [0x010201C2] 
struct ATGBioPlayerPawn_execAddOneKillFeedback_Parms
{
	int                                                NumToAdd;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawn.StartDriverHurtPawn
// [0x010201C2] 
struct ATGBioPlayerPawn_execStartDriverHurtPawn_Parms
{
	int                                                iHurt;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vPos;                                             		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawn.AddDamageValue
// [0x00020002] 
struct ATGBioPlayerPawn_execAddDamageValue_Parms
{
	int                                                iDamage;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGBioZombiePawn*                            hurtPawn;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             OneKillCount;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             iDriveCount;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             iTemp;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerPawn.ThrowWeaponOnDeath
// [0x00020000] 
struct ATGBioPlayerPawn_execThrowWeaponOnDeath_Parms
{
};

// Function TGBioGame.TGBioPlayerPawn.DoJump
// [0x00020002] 
struct ATGBioPlayerPawn_execDoJump_Parms
{
	unsigned long                                      bUpdating : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioPlayerPawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGBioPlayerPawn_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioZombiePawn.ProcessCrouchedClientOther
// [0x00020400] ( FUNC_Native )
struct ATGBioZombiePawn_execProcessCrouchedClientOther_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.ProcessCrouched
// [0x00020400] ( FUNC_Native )
struct ATGBioZombiePawn_execProcessCrouched_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.MeleeSuicide
// [0x00020002] 
struct ATGBioZombiePawn_execMeleeSuicide_Parms
{
	class APawn*                                       EventInstigator;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AController*                              Killer;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.NotifySkillFired
// [0x00020000] 
struct ATGBioZombiePawn_execNotifySkillFired_Parms
{
	class ATGBioSkillBase*                             TheSkill;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioZombiePawn.CacheAnimNodes
// [0x00020100] 
struct ATGBioZombiePawn_execCacheAnimNodes_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.SpecializekillEffect
// [0x00020102] 
struct ATGBioZombiePawn_execSpecializekillEffect_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UParticleSystemComponent*                 tmpParticleSystem;                                		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGBioGame.TGBioZombiePawn.SetMeshVisibility
// [0x00020102] 
struct ATGBioZombiePawn_execSetMeshVisibility_Parms
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioZombiePawn.BecomeViewTarget
// [0x00020902] ( FUNC_Event )
struct ATGBioZombiePawn_eventBecomeViewTarget_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioZombiePawn.NotifyArmMeshChanged
// [0x00020100] 
struct ATGBioZombiePawn_execNotifyArmMeshChanged_Parms
{
	class ATGPlayerReplicationInfo*                    UTPRI;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioZombiePawn.PlayDyingSound
// [0x00020000] 
struct ATGBioZombiePawn_execPlayDyingSound_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.Destroyed
// [0x00020102] 
struct ATGBioZombiePawn_execDestroyed_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.SetWeapAnimType
// [0x00020102] 
struct ATGBioZombiePawn_execSetWeapAnimType_Parms
{
	unsigned char                                      AnimType;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioZombiePawn.GetRegenerateVoiceSound
// [0x00020102] 
struct ATGBioZombiePawn_execGetRegenerateVoiceSound_Parms
{
	class USoundCue*                                   ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             tmpVoiceSound;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.GetInfectionPlayerVoiceSound
// [0x00020102] 
struct ATGBioZombiePawn_execGetInfectionPlayerVoiceSound_Parms
{
	class USoundCue*                                   ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             tmpVoiceSound;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.GetLevelUpVoiceSound
// [0x00020102] 
struct ATGBioZombiePawn_execGetLevelUpVoiceSound_Parms
{
	class USoundCue*                                   ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             tmpVoiceSound;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.GetInfectionVoiceSound
// [0x00020102] 
struct ATGBioZombiePawn_execGetInfectionVoiceSound_Parms
{
	class USoundCue*                                   ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             tmpVoiceSound;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.PlayLevelUpSound
// [0x00020100] 
struct ATGBioZombiePawn_execPlayLevelUpSound_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.PlayLevelUpEffect
// [0x00020100] 
struct ATGBioZombiePawn_execPlayLevelUpEffect_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.PlayRegenerateVoiceSound
// [0x00020102] 
struct ATGBioZombiePawn_execPlayRegenerateVoiceSound_Parms
{
	// class USoundCue*                                tmpRegenerateVoiceSound;                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.StopHealthSound
// [0x00020102] 
struct ATGBioZombiePawn_execStopHealthSound_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.PlayHealthSound
// [0x00020102] 
struct ATGBioZombiePawn_execPlayHealthSound_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.PlayHitHumanHeroSound
// [0x00020102] 
struct ATGBioZombiePawn_execPlayHitHumanHeroSound_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.PlayHitSound
// [0x00020102] 
struct ATGBioZombiePawn_execPlayHitSound_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.DirtyLowHealthTag
// [0x00020002] 
struct ATGBioZombiePawn_execDirtyLowHealthTag_Parms
{
	unsigned long                                      LowHealthTag : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioZombiePawn.DirtyHealthTag
// [0x00020002] 
struct ATGBioZombiePawn_execDirtyHealthTag_Parms
{
	unsigned long                                      HealthTag : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioZombiePawn.DirtySelectTag
// [0x00020002] 
struct ATGBioZombiePawn_execDirtySelectTag_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.DeathParticleEffect
// [0x00020102] 
struct ATGBioZombiePawn_execDeathParticleEffect_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.DeathLightEffect
// [0x00020102] 
struct ATGBioZombiePawn_execDeathLightEffect_Parms
{
	// class UPointLightComponent*                     tmpPointLightComponent;                           		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGBioGame.TGBioZombiePawn.TickDeathEffectMaterial
// [0x00020102] 
struct ATGBioZombiePawn_execTickDeathEffectMaterial_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.PlayDeathSound
// [0x00020102] 
struct ATGBioZombiePawn_execPlayDeathSound_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.PlayDeathEffect
// [0x00020102] 
struct ATGBioZombiePawn_execPlayDeathEffect_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.ResetSelectMaterial
// [0x00020102] 
struct ATGBioZombiePawn_execResetSelectMaterial_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.PlaySelectEffect
// [0x00020102] 
struct ATGBioZombiePawn_execPlaySelectEffect_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.PlayChangeZombieEffect
// [0x00020102] 
struct ATGBioZombiePawn_execPlayChangeZombieEffect_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.PlayInfectionSound
// [0x00020102] 
struct ATGBioZombiePawn_execPlayInfectionSound_Parms
{
	// class USoundCue*                                tmpInfectionVoiceSound;                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.PlayInfectionEffect
// [0x00020102] 
struct ATGBioZombiePawn_execPlayInfectionEffect_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.StopLowHealthEffect
// [0x00020102] 
struct ATGBioZombiePawn_execStopLowHealthEffect_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UMaterialInstance*                        tmpMaterialInstance;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.PlayLowHealthEffect
// [0x00020102] 
struct ATGBioZombiePawn_execPlayLowHealthEffect_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UMaterialInstance*                        tmpMaterialInstance;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.StopHealthEffect
// [0x00020102] 
struct ATGBioZombiePawn_execStopHealthEffect_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.PlayHealthEffect
// [0x00020102] 
struct ATGBioZombiePawn_execPlayHealthEffect_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.PlaySpecialDiedAnim
// [0x00020102] 
struct ATGBioZombiePawn_execPlaySpecialDiedAnim_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.SleepRigidBody
// [0x00020102] 
struct ATGBioZombiePawn_execSleepRigidBody_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.DoingDeathAnim
// [0x00020102] 
struct ATGBioZombiePawn_execDoingDeathAnim_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             NormalBodyDensity;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.LeaveABloodSplatterDecal
// [0x00820102] 
struct ATGBioZombiePawn_execLeaveABloodSplatterDecal_Parms
{
	struct FVector                                     HitLoc;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNorm;                                          		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   TraceActor;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  out_HitLocation;                                  		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  out_HitNormal;                                    		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceDest;                                        		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceExtent;                                      		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0058 (0x0020) [0x0000000000000000]              
	// class UMaterialInstanceTimeVarying*             MITV_Decal;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
	// class UClass*                                   tmpFamilyInfo;                                    		// 0x007C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.PlayBloodEffectInDying
// [0x00820102] 
struct ATGBioZombiePawn_execPlayBloodEffectInDying_Parms
{
	class UClass*                                      TheDamageType;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0004 (0x0020) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0024 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  DyingMomentum;                                    		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BloodMomentum;                                    		// 0x003C (0x000C) [0x0000000000000000]              
	// class AUTEmit_HitEffect*                        HitEffect;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.PlayThirdPersonSwingMeleeWeaponAnimBeforeDamage
// [0x00020102] 
struct ATGBioZombiePawn_execPlayThirdPersonSwingMeleeWeaponAnimBeforeDamage_Parms
{
	unsigned long                                      bViaReplication : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioZombiePawn.PlayThirdPersonStabMeleeWeaponAnimBeforeDamage
// [0x00020102] 
struct ATGBioZombiePawn_execPlayThirdPersonStabMeleeWeaponAnimBeforeDamage_Parms
{
	unsigned long                                      bViaReplication : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      LocalMeleeWeaponStabCount;                        		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioZombiePawn.PlayTakeHitEffects
// [0x00820102] 
struct ATGBioZombiePawn_execPlayTakeHitEffects_Parms
{
	// class UClass*                                   UTDamageType;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned char                                   DeathDir;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
	// struct FVector                                  BloodMomentum;                                    		// 0x0008 (0x000C) [0x0000000000000000]              
	// class AUTEmit_HitEffect*                        HitEffect;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.Tick
// [0x00020902] ( FUNC_Event )
struct ATGBioZombiePawn_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioZombiePawn.NotifyPendingBioCharInfo
// [0x00020102] 
struct ATGBioZombiePawn_execNotifyPendingBioCharInfo_Parms
{
	class UBioCharInfo*                                PendingCharInfo;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioZombiePawn.SetCharInfo
// [0x00020102] 
struct ATGBioZombiePawn_execSetCharInfo_Parms
{
	struct FString                                     CharInfoClassName;                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioZombiePawn.LoadBioCharInfo
// [0x00020102] 
struct ATGBioZombiePawn_execLoadBioCharInfo_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioGameReplicationInfo*                GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UBioCharInfo*                             TempCharInfo;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.WaitGRIToLoadBioCharInfo
// [0x00020102] 
struct ATGBioZombiePawn_execWaitGRIToLoadBioCharInfo_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.LoadThirdPersonCharInfo
// [0x00024102] 
struct ATGBioZombiePawn_execLoadThirdPersonCharInfo_Parms
{
	class UBioCharInfo*                                CharInfo;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bimmediateSetMat : 1;                             		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USkeletalMesh*                            ThirdPersonMesh;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// class UAnimTree*                                ThirdPersonAnimTree;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UAnimSet*                                 ThirdPersonAnimSet;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UPhysicsAsset*                            ThirdPersonPhysAsset;                             		// 0x0018 (0x0004) [0x0000000000000000]              
	// class USkeletalMesh*                            ThirdPersonWeaponL;                               		// 0x001C (0x0004) [0x0000000000000000]              
	// class USkeletalMesh*                            ThirdPersonWeaponR;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// class UMaterialInstance*                        ThirdPersonLevelMaterial;                         		// 0x0028 (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceConstant*                Instance;                                         		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.TimeWeaponComponent
// [0x00020102] 
struct ATGBioZombiePawn_execTimeWeaponComponent_Parms
{
	// class USkeletalMesh*                            FirstPersonWeaponL;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USkeletalMesh*                            FirstPersonWeaponR;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.LoadFirstPersonCharInfo
// [0x00024102] 
struct ATGBioZombiePawn_execLoadFirstPersonCharInfo_Parms
{
	class UBioCharInfo*                                CharInfo;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bimmediateSetMat : 1;                             		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USkeletalMesh*                            FirstPersonArms1;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	// class USkeletalMesh*                            FirstPersonArms2;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	// class USkeletalMesh*                            FirstPersonForeArms;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UMaterialInstance*                        tmpMaterialInstanceConstant;                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceConstant*                Instance;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerController*                   PC;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.GotZPoint
// [0x00020002] 
struct ATGBioZombiePawn_execGotZPoint_Parms
{
	int                                                GotPoint;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.PlayDying
// [0x00024102] 
struct ATGBioZombiePawn_execPlayDying_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DeathDir;                                         		// 0x0010 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0011 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioZombiePawn.PlayDiedLocalAnim
// [0x00024102] 
struct ATGBioZombiePawn_execPlayDiedLocalAnim_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DeathDir;                                         		// 0x0004 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0005 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UClass*                                   UTDamageType;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.PlayDiedAnim
// [0x00024102] 
struct ATGBioZombiePawn_execPlayDiedAnim_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DeathDir;                                         		// 0x0004 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0005 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UClass*                                   UTDamageType;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.DoJump
// [0x00020002] 
struct ATGBioZombiePawn_execDoJump_Parms
{
	unsigned long                                      bUpdating : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioZombiePawn.UpdateGameSettingOption
// [0x00020102] 
struct ATGBioZombiePawn_execUpdateGameSettingOption_Parms
{
	unsigned long                                      IsUpdateLight : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioZombiePawn.NotifyTeamChanged
// [0x00020102] 
struct ATGBioZombiePawn_execNotifyTeamChanged_Parms
{
	// class ATGPlayerReplicationInfo*                 PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned long                                   IsUpdateLight : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGBioGame.TGBioZombiePawn.Died
// [0x00024002] 
struct ATGBioZombiePawn_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DeathDir;                                         		// 0x0014 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0015 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioPlayerController*                   PC;                                               		// 0x001C (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerController*                   KillerPC;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.FilterZombieKilledWeaponNoRevive
// [0x00020002] 
struct ATGBioZombiePawn_execFilterZombieKilledWeaponNoRevive_Parms
{
	class ATGBioPlayerController*                      PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioZombiePawn.PossessedBy
// [0x00020002] 
struct ATGBioZombiePawn_execPossessedBy_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioZombiePawn.ZombieWeaponSet
// [0x010201C2] 
struct ATGBioZombiePawn_execZombieWeaponSet_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.PendingBioWeaponSetTimer
// [0x00020102] 
struct ATGBioZombiePawn_execPendingBioWeaponSetTimer_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.SetBodyMaterialScalarParameterValue
// [0x00020102] 
struct ATGBioZombiePawn_execSetBodyMaterialScalarParameterValue_Parms
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Index;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.SetArmsMaterialScalarParameterValue
// [0x00020102] 
struct ATGBioZombiePawn_execSetArmsMaterialScalarParameterValue_Parms
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Index;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.VerifyArmsMaterialInstance
// [0x00020102] 
struct ATGBioZombiePawn_execVerifyArmsMaterialInstance_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.AdjustDamage
// [0x00420002] 
struct ATGBioZombiePawn_execAdjustDamage_Parms
{
	int                                                InDamage;                                         		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Momentum;                                         		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 InstigatedBy;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x0020) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0044 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioZombiePawn.BioZombieBasePostPossess
// [0x00020002] 
struct ATGBioZombiePawn_execBioZombieBasePostPossess_Parms
{
	unsigned long                                      Open : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGBioPlayerController*                   PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.DelayedPermanentDeath
// [0x00020102] 
struct ATGBioZombiePawn_execDelayedPermanentDeath_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.ProcessPermanentDeath
// [0x00020102] 
struct ATGBioZombiePawn_execProcessPermanentDeath_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGBioZombiePawn_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioZombiePawn.CheckWeaponByControllerRep
// [0x00020102] 
struct ATGBioZombiePawn_execCheckWeaponByControllerRep_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.ThrowWeaponOnDeath
// [0x00020000] 
struct ATGBioZombiePawn_execThrowWeaponOnDeath_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.CalcDamageSlowdown
// [0x00020002] 
struct ATGBioZombiePawn_execCalcDamageSlowdown_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.ResetBufferSlomoValue
// [0x00020002] 
struct ATGBioZombiePawn_execResetBufferSlomoValue_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.GetBaseHealthMaxByNumValidPlayers
// [0x00020000] 
struct ATGBioZombiePawn_execGetBaseHealthMaxByNumValidPlayers_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioZombiePawn.AntitoxicLevelAdd
// [0x00020000] 
struct ATGBioZombiePawn_execAntitoxicLevelAdd_Parms
{
};

// Function TGBioGame.TGBioZombiePawn.SetLevelInfo
// [0x00020000] 
struct ATGBioZombiePawn_execSetLevelInfo_Parms
{
	struct FZombieChangeNecessity                      ZombieChange;                                     		// 0x0000 (0x0014) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioZombiePawn.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ATGBioZombiePawn_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x0020) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ATGBioPlayerPawn*                         TPawn;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
	// class ATGBioHumanHeroPawn*                      tHumanHeroPawn;                                   		// 0x004C (0x0004) [0x0000000000000000]              
	// int                                             OldHealth;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	// int                                             iHurtDamage;                                      		// 0x0054 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.AddZombieDamageFeedback
// [0x010201C2] 
struct ATGBioZombiePawn_execAddZombieDamageFeedback_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.AddDamageValue
// [0x00020002] 
struct ATGBioZombiePawn_execAddDamageValue_Parms
{
	int                                                iDamage;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombiePawn.PlayTakeHitSound
// [0x00020102] 
struct ATGBioZombiePawn_execPlayTakeHitSound_Parms
{
	unsigned char                                      Damage;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioZombiePawn.ServerTakeDamage
// [0x00024002] 
struct ATGBioZombiePawn_execServerTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x0020) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioZombiePawn.Changebag
// [0x002200C0] 
struct ATGBioZombiePawn_execChangebag_Parms
{
	unsigned char                                      T;                                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioZombiePawn.IsInHomeZone
// [0x00020102] 
struct ATGBioZombiePawn_execIsInHomeZone_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioZombiePawn.UpdateAnimTreeForZombieDataChange
// [0x00020102] 
struct ATGBioZombiePawn_execUpdateAnimTreeForZombieDataChange_Parms
{
	class UBioCharInfo*                                CharInfo;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioZombiePawn.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
struct ATGBioZombiePawn_eventPostInitAnimTree_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function TGBioGame.TGBioZombiePawn.ResetZombiePawnSimulateGravity
// [0x00020400] ( FUNC_Native )
struct ATGBioZombiePawn_execResetZombiePawnSimulateGravity_Parms
{
	unsigned long                                      bGravity : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioHostZombie.SleepRelivePhysics
// [0x00020102] 
struct ATGBioHostZombie_execSleepRelivePhysics_Parms
{
};

// Function TGBioGame.TGBioHostZombie.DoingDeathRelivePhysics
// [0x00020102] 
struct ATGBioHostZombie_execDoingDeathRelivePhysics_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             NormalBodyDensity;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHostZombie.PlayChangeZombieEffect
// [0x00020102] 
struct ATGBioHostZombie_execPlayChangeZombieEffect_Parms
{
};

// Function TGBioGame.TGBioHostZombie.PlayLevelUpSound
// [0x00020102] 
struct ATGBioHostZombie_execPlayLevelUpSound_Parms
{
	// class USoundCue*                                tmpLevelUpVoiceSound;                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHostZombie.PlayLevelUpEffect
// [0x00020102] 
struct ATGBioHostZombie_execPlayLevelUpEffect_Parms
{
};

// Function TGBioGame.TGBioHostZombie.LvParticleEffect
// [0x00020102] 
struct ATGBioHostZombie_execLvParticleEffect_Parms
{
	int                                                Level;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UParticleSystem*                          tmpLvEffectTemplet;                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHostZombie.Died
// [0x00024002] 
struct ATGBioHostZombie_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DeathDir;                                         		// 0x0014 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0015 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x001C (0x0004) [0x0000000000000000]              
	// class ATGBioHumanHeroPawn*                      HPawn;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHostZombie.CancelAbsoreZombieDeadBody
// [0x00020100] 
struct ATGBioHostZombie_execCancelAbsoreZombieDeadBody_Parms
{
};

// Function TGBioGame.TGBioHostZombie.ServerStopAbsoreZombieDeadBody
// [0x002200C2] 
struct ATGBioHostZombie_execServerStopAbsoreZombieDeadBody_Parms
{
};

// Function TGBioGame.TGBioHostZombie.StopAbsoreZombieDeadBody
// [0x00020102] 
struct ATGBioHostZombie_execStopAbsoreZombieDeadBody_Parms
{
};

// Function TGBioGame.TGBioHostZombie.ClientPerformAsboreZombieDeadBody
// [0x010201C2] 
struct ATGBioHostZombie_execClientPerformAsboreZombieDeadBody_Parms
{
	class ATGBioZombiePawn*                            AbsoreBodyPawn;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHostZombie.ServerPerformAsboreZombieDeadBody
// [0x002200C2] 
struct ATGBioHostZombie_execServerPerformAsboreZombieDeadBody_Parms
{
	class ATGBioZombiePawn*                            AbsoreBodyPawn;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bValidBodyPawn : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ATGBioMatch*                              BioMatch;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHostZombie.StartAbsoreZombieDeadBody
// [0x00020102] 
struct ATGBioHostZombie_execStartAbsoreZombieDeadBody_Parms
{
	// class ATGBioZombiePawn*                         EnumPawn;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           EnumRadius;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHostZombie.PerformAsboreZombieDeadBody
// [0x00020102] 
struct ATGBioHostZombie_execPerformAsboreZombieDeadBody_Parms
{
	class ATGBioZombiePawn*                            ObjPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHostZombie.GotZPoint
// [0x00020002] 
struct ATGBioHostZombie_execGotZPoint_Parms
{
	int                                                GotPoint;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHostZombie.DelayedPermanentDeath
// [0x00020102] 
struct ATGBioHostZombie_execDelayedPermanentDeath_Parms
{
};

// Function TGBioGame.TGBioHostZombie.ProcessPermanentDeath
// [0x00020102] 
struct ATGBioHostZombie_execProcessPermanentDeath_Parms
{
};

// Function TGBioGame.TGBioHostZombie.AntitoxicLevelAdd
// [0x00020002] 
struct ATGBioHostZombie_execAntitoxicLevelAdd_Parms
{
};

// Function TGBioGame.TGBioHostZombie.ReplicatedEvent
// [0x00820902] ( FUNC_Event )
struct ATGBioHostZombie_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FZombieChangeNecessity                   ZombieChange;                                     		// 0x0008 (0x0014) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHostZombie.CheckWeaponByControllerRep
// [0x00020100] 
struct ATGBioHostZombie_execCheckWeaponByControllerRep_Parms
{
};

// Function TGBioGame.TGBioHostZombie.InternalSetLevelInfo
// [0x00020102] 
struct ATGBioHostZombie_execInternalSetLevelInfo_Parms
{
	struct FZombieChangeNecessity                      ZombieChange;                                     		// 0x0000 (0x0014) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bSetCharResult : 1;                               		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerController*                   PC;                                               		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHostZombie.GetBaseHealthMaxByNumValidPlayers
// [0x00020002] 
struct ATGBioHostZombie_execGetBaseHealthMaxByNumValidPlayers_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             NumValidPlayers;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             ResultHealthMaxBase;                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHostZombie.SetLevelInfo
// [0x00020002] 
struct ATGBioHostZombie_execSetLevelInfo_Parms
{
	struct FZombieChangeNecessity                      ZombieChange;                                     		// 0x0000 (0x0014) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHostZombie.LevelUP
// [0x00820002] 
struct ATGBioHostZombie_execLevelUP_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioPlayerReplicationInfo*              bioPRI;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FZombieBaseInfo                          BaseInfo;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FZombieChangeNecessity                   ZombieChange;                                     		// 0x0014 (0x0014) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHostZombie.Tick
// [0x00020902] ( FUNC_Event )
struct ATGBioHostZombie_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioMatch*                              BioMatch;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBio3HostZombieBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGBio3HostZombieBase_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBio3HostZombieBase.SkillTraceActors
// [0x00424405] ( FUNC_Final | FUNC_Native )
struct ATGBio3HostZombieBase_execSkillTraceActors_Parms
{
	class UClass*                                      BaseClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Actor;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     HitLoc;                                           		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     HitNorm;                                          		// 0x0014 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     End;                                              		// 0x0020 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Start;                                            		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     Extent;                                           		// 0x0038 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0044 (0x0020) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	int                                                ExtraTraceFlags;                                  		// 0x0064 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBio3HostZombieBase.ProcessSlope
// [0x00420400] ( FUNC_Native )
struct ATGBio3HostZombieBase_execProcessSlope_Parms
{
	float                                              ResultZ;                                          		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              GlobalZ;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBio3HostZombieBase.SeekScarp
// [0x00420400] ( FUNC_Native )
struct ATGBio3HostZombieBase_execSeekScarp_Parms
{
	struct FVector                                     ZombieSkillJustVector;                            		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBio3HostZombieBase.GetLastRopeOutput
// [0x00020800] ( FUNC_Event )
struct ATGBio3HostZombieBase_eventGetLastRopeOutput_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBio3HostZombieBase.HunterSwoopActor
// [0x00020900] ( FUNC_Event )
struct ATGBio3HostZombieBase_eventHunterSwoopActor_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGAttachment_HostZombieClaw.GetImpactEffect
// [0x00020102] 
struct ATGAttachment_HostZombieClaw_execGetImpactEffect_Parms
{
	class UPhysicalMaterial*                           HitMaterial;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FMaterialImpactEffect                       ReturnValue;                                      		// 0x0004 (0x0038) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x003C (0x0004) [0x0000000000000000]              
	// class UPhysicalMaterialProperty*                PhysicalProperty;                                 		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGAttachment_HostZombieClaw.GetDecalRotation
// [0x00020102] 
struct ATGAttachment_HostZombieClaw_execGetDecalRotation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGAttachment_HostZombieClaw.PlayImpactEffects
// [0x00820102] 
struct ATGAttachment_HostZombieClaw_execPlayImpactEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  NewHitLoc;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FireDir;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0034 (0x0020) [0x0000000000000000]              
	// struct FMaterialImpactEffect                    ImpactEffect;                                     		// 0x0054 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UMaterialInterface*                       MI;                                               		// 0x008C (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          PS;                                               		// 0x0090 (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceTimeVarying*             MITV_Decal;                                       		// 0x0094 (0x0004) [0x0000000000000000]              
	// int                                             DecalMaterialsLength;                             		// 0x0098 (0x0004) [0x0000000000000000]              
	// class AVehicle*                                 V;                                                		// 0x009C (0x0004) [0x0000000000000000]              
	// class AUTPawn*                                  P;                                                		// 0x00A0 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitNormalTemp;                                    		// 0x00A4 (0x000C) [0x0000000000000000]              
};

// Function TGBioGame.TGAttachment_HostZombieClaw.CauseMuzzleFlash
// [0x00020102] 
struct ATGAttachment_HostZombieClaw_execCauseMuzzleFlash_Parms
{
};

// Function TGBioGame.TGAttachment_HostZombieClaw.ThirdPersonFireEffects
// [0x00020100] 
struct ATGAttachment_HostZombieClaw_execThirdPersonFireEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGAttachment_ButcherZombieClaw.GetDecalRotation
// [0x00020102] 
struct ATGAttachment_ButcherZombieClaw_execGetDecalRotation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGAttachment_GhostNinjaZombieClaw.GetDecalRotation
// [0x00020102] 
struct ATGAttachment_GhostNinjaZombieClaw_execGetDecalRotation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGAttachment_HulkZombieClaw.GetDecalRotation
// [0x00020102] 
struct ATGAttachment_HulkZombieClaw_execGetDecalRotation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGAttachment_InvisibleZombieClaw.GetDecalRotation
// [0x00020102] 
struct ATGAttachment_InvisibleZombieClaw_execGetDecalRotation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGAttachment_TerminatorClaw.GetImpactEffect
// [0x00020102] 
struct ATGAttachment_TerminatorClaw_execGetImpactEffect_Parms
{
	class UPhysicalMaterial*                           HitMaterial;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FMaterialImpactEffect                       ReturnValue;                                      		// 0x0004 (0x0038) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x003C (0x0004) [0x0000000000000000]              
	// class UPhysicalMaterialProperty*                PhysicalProperty;                                 		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGAttachment_TerminatorClaw.GetDecalRotation
// [0x00020102] 
struct ATGAttachment_TerminatorClaw_execGetDecalRotation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGAttachment_TerminatorClaw.PlayImpactEffects
// [0x00820102] 
struct ATGAttachment_TerminatorClaw_execPlayImpactEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  NewHitLoc;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FireDir;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0034 (0x0020) [0x0000000000000000]              
	// struct FMaterialImpactEffect                    ImpactEffect;                                     		// 0x0054 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UMaterialInterface*                       MI;                                               		// 0x008C (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          PS;                                               		// 0x0090 (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceTimeVarying*             MITV_Decal;                                       		// 0x0094 (0x0004) [0x0000000000000000]              
	// int                                             DecalMaterialsLength;                             		// 0x0098 (0x0004) [0x0000000000000000]              
	// class AVehicle*                                 V;                                                		// 0x009C (0x0004) [0x0000000000000000]              
	// class AUTPawn*                                  P;                                                		// 0x00A0 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitNormalTemp;                                    		// 0x00A4 (0x000C) [0x0000000000000000]              
};

// Function TGBioGame.TGAttachment_TerminatorClaw.ChangeVisibility
// [0x00020102] 
struct ATGAttachment_TerminatorClaw_execChangeVisibility_Parms
{
	unsigned long                                      bIsVisible : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGAttachment_TerminatorClaw.GetEffectLocation
// [0x00820102] 
struct ATGAttachment_TerminatorClaw_execGetEffectLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USkeletalMeshComponent*                   RealMesh;                                         		// 0x000C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// struct FVector                                  Result;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function TGBioGame.TGAttachment_TerminatorClaw.FirstPersonFireEffects
// [0x00020102] 
struct ATGAttachment_TerminatorClaw_execFirstPersonFireEffects_Parms
{
	class AWeapon*                                     PawnWeapon;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGAttachment_TerminatorClaw.SpawnTracer
// [0x00820102] 
struct ATGAttachment_TerminatorClaw_execSpawnTracer_Parms
{
	struct FVector                                     EffectLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class UParticleSystemComponent*                 E;                                                		// 0x0018 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// struct FVector                                  Dir;                                              		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function TGBioGame.TGAttachment_TerminatorClaw.StopMuzzleFlash
// [0x00020102] 
struct ATGAttachment_TerminatorClaw_execStopMuzzleFlash_Parms
{
};

// Function TGBioGame.TGAttachment_TerminatorClaw.CauseMuzzleFlash
// [0x00020102] 
struct ATGAttachment_TerminatorClaw_execCauseMuzzleFlash_Parms
{
};

// Function TGBioGame.TGAttachment_TerminatorClaw.MuzzleFlashTimer
// [0x00020102] 
struct ATGAttachment_TerminatorClaw_execMuzzleFlashTimer_Parms
{
};

// Function TGBioGame.TGAttachment_TerminatorClaw.ThirdPersonFireEffects
// [0x00020100] 
struct ATGAttachment_TerminatorClaw_execThirdPersonFireEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGAttachment_TerminatorClaw.DetachFrom
// [0x00020102] 
struct ATGAttachment_TerminatorClaw_execDetachFrom_Parms
{
	class USkeletalMeshComponent*                      MeshCpnt;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function TGBioGame.TGAttachment_TerminatorClaw.SetWeaponOverlayFlags
// [0x00020102] 
struct ATGAttachment_TerminatorClaw_execSetWeaponOverlayFlags_Parms
{
	class AUTPawn*                                     OwnerPawn;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGAttachment_TerminatorClaw.CreateOverlayMesh
// [0x00020102] 
struct ATGAttachment_TerminatorClaw_execCreateOverlayMesh_Parms
{
};

// Function TGBioGame.TGAttachment_TerminatorClaw.SetSkin
// [0x00020002] 
struct ATGAttachment_TerminatorClaw_execSetSkin_Parms
{
	class UMaterial*                                   NewMaterial;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombieMeleeWeapon.GetWeaponAnimNodeSeq
// [0x00020102] 
struct ATGBioZombieMeleeWeapon_execGetWeaponAnimNodeSeq_Parms
{
	class UAnimNodeSequence*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USkeletalMeshComponent*                   SkeletalMeshCom;                                  		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class USkeletalMeshComponent*                   ArmMeshComp;                                      		// 0x0008 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class ATGPawn*                                  UTP;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class UAnimTree*                                Tree;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UAnimNodeSequence*                        AnimSeq;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombieMeleeWeapon.TimeToAnimEnd
// [0x00020102] 
struct ATGBioZombieMeleeWeapon_execTimeToAnimEnd_Parms
{
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombieMeleeWeapon.PlayWeaponAnimation
// [0x00024102] 
struct ATGBioZombieMeleeWeapon_execPlayWeaponAnimation_Parms
{
	struct FName                                       Sequence;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDesiredDuration;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bLoop : 1;                                        		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class USkeletalMeshComponent*                      SkelMesh;                                         		// 0x0010 (0x0004) [0x0000000004000090]              ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )
};

// Function TGBioGame.TGBioSkillBase.CanDoSpecailMove
// [0x00020102] 
struct ATGBioSkillBase_execCanDoSpecailMove_Parms
{
	float                                              TolerateTime;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioSkillBase.PlayerEffect
// [0x010201C0] 
struct ATGBioSkillBase_execPlayerEffect_Parms
{
};

// Function TGBioGame.TGBioSkillBase.CheckAllowUseSkill
// [0x00020000] 
struct ATGBioSkillBase_execCheckAllowUseSkill_Parms
{
};

// Function TGBioGame.TGBioSkillBase.Abort
// [0x00020102] 
struct ATGBioSkillBase_execAbort_Parms
{
};

// Function TGBioGame.TGBioSkillBase.Start
// [0x00020102] 
struct ATGBioSkillBase_execStart_Parms
{
};

// Function TGBioGame.TGBioSkillBase.UnexpectedStopEffect
// [0x00020102] 
struct ATGBioSkillBase_execUnexpectedStopEffect_Parms
{
};

// Function TGBioGame.TGBioSkillBase.UnexpectedStopSkillValue
// [0x00020100] 
struct ATGBioSkillBase_execUnexpectedStopSkillValue_Parms
{
};

// Function TGBioGame.TGBioSkillBase.ResetSkillCoolTime
// [0x00020102] 
struct ATGBioSkillBase_execResetSkillCoolTime_Parms
{
};

// Function TGBioGame.TGBioSkillBase.ResetSkill
// [0x00020102] 
struct ATGBioSkillBase_execResetSkill_Parms
{
	unsigned long                                      ResetCoolTime : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioSkillBase.StopThirdPersonEffect
// [0x00020102] 
struct ATGBioSkillBase_execStopThirdPersonEffect_Parms
{
};

// Function TGBioGame.TGBioSkillBase.StopFirstPersonEffect
// [0x00020102] 
struct ATGBioSkillBase_execStopFirstPersonEffect_Parms
{
	// class ATGBioPlayerController*                   tmpPC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillBase.StopEffect
// [0x00020102] 
struct ATGBioSkillBase_execStopEffect_Parms
{
	// struct FString                                  tmpPlayingEffectPawn;                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioSkillBase.PlayThirdPersonEffect
// [0x00020102] 
struct ATGBioSkillBase_execPlayThirdPersonEffect_Parms
{
};

// Function TGBioGame.TGBioSkillBase.PlayFirstPersonEffect
// [0x00020102] 
struct ATGBioSkillBase_execPlayFirstPersonEffect_Parms
{
	// class ATGBioPlayerController*                   tmpPC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillBase.PlayEffect
// [0x00020102] 
struct ATGBioSkillBase_execPlayEffect_Parms
{
	class ATGBioZombiePawn*                            P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           Duration;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillBase.TimerUnNudgeSkillComponents
// [0x00020102] 
struct ATGBioSkillBase_execTimerUnNudgeSkillComponents_Parms
{
};

// Function TGBioGame.TGBioSkillBase.UnNudgeSkillComponents
// [0x00020102] 
struct ATGBioSkillBase_execUnNudgeSkillComponents_Parms
{
	// class ATGBioSkillComponentBase*                 Item;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillBase.NudgeSkillComponents
// [0x00020102] 
struct ATGBioSkillBase_execNudgeSkillComponents_Parms
{
	// class ATGBioSkillComponentBase*                 Item;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioZombiePawn*                         RealPawn;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillBase.SkillPreProcesses
// [0x00020102] 
struct ATGBioSkillBase_execSkillPreProcesses_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioSkillComponentBase*                 Item;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   ProcessSucceed : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGBioGame.TGBioSkillBase.CanNudgeSkillComponents
// [0x00020102] 
struct ATGBioSkillBase_execCanNudgeSkillComponents_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioSkillComponentBase*                 Item;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillBase.GetPlusRemainTime
// [0x00020102] 
struct ATGBioSkillBase_execGetPlusRemainTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioSkillBase.IsPlusing
// [0x00020102] 
struct ATGBioSkillBase_execIsPlusing_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioSkillBase.GetCooldownRemainPercent
// [0x00020102] 
struct ATGBioSkillBase_execGetCooldownRemainPercent_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioSkillBase.GetCooldownElipseTime
// [0x00020102] 
struct ATGBioSkillBase_execGetCooldownElipseTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioSkillBase.GetCooldownRemainTime
// [0x00020102] 
struct ATGBioSkillBase_execGetCooldownRemainTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           tmpRemainTime;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillBase.IsCooldowning
// [0x00020102] 
struct ATGBioSkillBase_execIsCooldowning_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioSkillBase.SetModifCooldownTime
// [0x00020102] 
struct ATGBioSkillBase_execSetModifCooldownTime_Parms
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioSkillBase.Initialize
// [0x00020002] 
struct ATGBioSkillBase_execInitialize_Parms
{
	class APlayerController*                           InOwnerPC;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGBioSkillManager*                          InOwnerSkillManager;                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioSkillComponentBase*                 Item;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillBase.PostBeginInitialize
// [0x00020000] 
struct ATGBioSkillBase_execPostBeginInitialize_Parms
{
};

// Function TGBioGame.TGBioSkillBase.AddSkillComponent
// [0x00020002] 
struct ATGBioSkillBase_execAddSkillComponent_Parms
{
	class ATGBioSkillComponentBase*                    NewItem;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioSkillComponentBase*                 Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGBioSkillComponentBase*                 LastItem;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillBase.Destroyed
// [0x00020802] ( FUNC_Event )
struct ATGBioSkillBase_eventDestroyed_Parms
{
};

// Function TGBioGame.TGBioDmgType_HeroBlade.SpawnHitEffect
// [0x00022002] 
struct UTGBioDmgType_HeroBlade_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.DeletePlayerTipMessage
// [0x00020002] 
struct ATGBioHUD_execDeletePlayerTipMessage_Parms
{
};

// Function TGBioGame.TGBioHUD.ShowVolumeTip
// [0x00020002] 
struct ATGBioHUD_execShowVolumeTip_Parms
{
	struct FString                                     Tip;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.RemovePropMessage
// [0x00020002] 
struct ATGBioHUD_execRemovePropMessage_Parms
{
};

// Function TGBioGame.TGBioHUD.ClientRoundReset
// [0x010201C2] 
struct ATGBioHUD_execClientRoundReset_Parms
{
};

// Function TGBioGame.TGBioHUD.RoundReset
// [0x00020002] 
struct ATGBioHUD_execRoundReset_Parms
{
};

// Function TGBioGame.TGBioHUD.AddGeneAugmentationAddHpMessage
// [0x00020002] 
struct ATGBioHUD_execAddGeneAugmentationAddHpMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.AddProtectTitleMessage
// [0x00020002] 
struct ATGBioHUD_execAddProtectTitleMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.DeleteZombieAbsoreTitleMessage
// [0x00020002] 
struct ATGBioHUD_execDeleteZombieAbsoreTitleMessage_Parms
{
};

// Function TGBioGame.TGBioHUD.AddZombieAbsoreTitleMessage
// [0x00020002] 
struct ATGBioHUD_execAddZombieAbsoreTitleMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.AddZombieSelectSucceedMessage
// [0x00020002] 
struct ATGBioHUD_execAddZombieSelectSucceedMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.UseSkillTrampleCasualiesFeedbackMessage
// [0x00020002] 
struct ATGBioHUD_execUseSkillTrampleCasualiesFeedbackMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.UseFlyCutterSkillAgainstFeedbackMessage
// [0x00020002] 
struct ATGBioHUD_execUseFlyCutterSkillAgainstFeedbackMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.UseSkillFeedBackMessage
// [0x00020002] 
struct ATGBioHUD_execUseSkillFeedBackMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                inSwitch;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.DeleteUseSkillCountDownMessage
// [0x00020002] 
struct ATGBioHUD_execDeleteUseSkillCountDownMessage_Parms
{
};

// Function TGBioGame.TGBioHUD.AddUseSkillCountDownMessage
// [0x00020002] 
struct ATGBioHUD_execAddUseSkillCountDownMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.AddUseSkillAllowMessage
// [0x00020002] 
struct ATGBioHUD_execAddUseSkillAllowMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                inSwitch;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.DeleteZombieReviveMessage
// [0x00020002] 
struct ATGBioHUD_execDeleteZombieReviveMessage_Parms
{
};

// Function TGBioGame.TGBioHUD.AddZombieReviveMessage
// [0x00020002] 
struct ATGBioHUD_execAddZombieReviveMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                inSwitch;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.AddTerminatorByKillMessage
// [0x00020002] 
struct ATGBioHUD_execAddTerminatorByKillMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.AddKillZombieUseHeroGunMessage
// [0x00020002] 
struct ATGBioHUD_execAddKillZombieUseHeroGunMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.AddKillZombieUseMeeMessage
// [0x00020002] 
struct ATGBioHUD_execAddKillZombieUseMeeMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.AddZombieGiveFailMessage
// [0x00020002] 
struct ATGBioHUD_execAddZombieGiveFailMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.AddHumanHeroDieMessage
// [0x00020002] 
struct ATGBioHUD_execAddHumanHeroDieMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.AddRoundStartTimerMessage
// [0x00020002] 
struct ATGBioHUD_execAddRoundStartTimerMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.AddTerminatorMessage
// [0x00020002] 
struct ATGBioHUD_execAddTerminatorMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.AddHumanAttackMessage
// [0x00020002] 
struct ATGBioHUD_execAddHumanAttackMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.AddRandomPickupMessage
// [0x00020002] 
struct ATGBioHUD_execAddRandomPickupMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     weaponStr;                                        		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioHUD.AddFetchedPropMessage
// [0x00020002] 
struct ATGBioHUD_execAddFetchedPropMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FetchedPropType;                                  		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.AddKilledByHeroGunWeaponFeedback
// [0x00020002] 
struct ATGBioHUD_execAddKilledByHeroGunWeaponFeedback_Parms
{
};

// Function TGBioGame.TGBioHUD.AddKilledByMeeWeaponFeedback
// [0x00020002] 
struct ATGBioHUD_execAddKilledByMeeWeaponFeedback_Parms
{
};

// Function TGBioGame.TGBioHUD.AddWeaponArrivedFeedback
// [0x00020002] 
struct ATGBioHUD_execAddWeaponArrivedFeedback_Parms
{
};

// Function TGBioGame.TGBioHUD.AddBecomeHumanHeroStateFeedback
// [0x00020002] 
struct ATGBioHUD_execAddBecomeHumanHeroStateFeedback_Parms
{
};

// Function TGBioGame.TGBioHUD.AddCanChangeHumanHeroFeedback
// [0x00020002] 
struct ATGBioHUD_execAddCanChangeHumanHeroFeedback_Parms
{
};

// Function TGBioGame.TGBioHUD.AddHumanHeroStateFeedback
// [0x00020002] 
struct ATGBioHUD_execAddHumanHeroStateFeedback_Parms
{
};

// Function TGBioGame.TGBioHUD.AddKillHumanHeroFeedback
// [0x00020002] 
struct ATGBioHUD_execAddKillHumanHeroFeedback_Parms
{
};

// Function TGBioGame.TGBioHUD.AddMatchInfoMessageFeedback
// [0x00020002] 
struct ATGBioHUD_execAddMatchInfoMessageFeedback_Parms
{
};

// Function TGBioGame.TGBioHUD.DebugFeedback
// [0x00024002] 
struct ATGBioHUD_execDebugFeedback_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MultiKillLevel;                                   		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioHUD.AddZombieDamageFeedback
// [0x00020002] 
struct ATGBioHUD_execAddZombieDamageFeedback_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioZombiePawn*                         tmpZombiePawn;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.AddOneKillFeedback
// [0x00020002] 
struct ATGBioHUD_execAddOneKillFeedback_Parms
{
	int                                                NumToAdd;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.DisplayZombieAbsoringProgressBar
// [0x00020002] 
struct ATGBioHUD_execDisplayZombieAbsoringProgressBar_Parms
{
	// float                                           PercValue;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           StartTime;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           TargetTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.AddKillFeedBackMessage
// [0x00024002] 
struct ATGBioHUD_execAddKillFeedBackMessage_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MultiKillLevel;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Priority;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUseInPriority : 1;                               		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class APlayerReplicationInfo*                      KillerPRI;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      KilledPRI;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                OneShotKillNum;                                   		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIsOneShotDeath : 1;                              		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bThroughWall : 1;                                 		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              tmpKillerPRI;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              tmpKilledPRI;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.DisplayAvatar
// [0x00020002] 
struct ATGBioHUD_execDisplayAvatar_Parms
{
};

// Function TGBioGame.TGBioHUD.NotifyZombieRestoreHP
// [0x00020000] 
struct ATGBioHUD_execNotifyZombieRestoreHP_Parms
{
	unsigned long                                      bRestore : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioHUD.AddTimerMessageFeedback
// [0x00020002] 
struct ATGBioHUD_execAddTimerMessageFeedback_Parms
{
	int                                                RemainingSeconds;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UParticleSystem*                          PS;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Minutes;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Tens;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Ones;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.DisplayTeamPopulation
// [0x00020002] 
struct ATGBioHUD_execDisplayTeamPopulation_Parms
{
	// class UTexture2D*                               NumLeftTex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               NumRightTex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PlayerLiveCount;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             PlayerTeamSize;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             EnemyLiveCount;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             EnemyTeamSize;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// unsigned char                                   TeamIndex;                                        		// 0x0018 (0x0001) [0x0000000000000000]              
	// float                                           PosX;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// class ATGBioGameReplicationInfo*                bioGRI;                                           		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.DisplayTeamScore
// [0x00820002] 
struct ATGBioHUD_execDisplayTeamScore_Parms
{
	// class UTexture2D*                               GoalScoreBGTex;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           PosX;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned char                                   TeamIndex;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	// int                                             NewScore;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector2D                                CurPos;                                           		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.DisplayVS
// [0x00020002] 
struct ATGBioHUD_execDisplayVS_Parms
{
	// float                                           PosX;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	// class ATGBioGameReplicationInfo*                GRI;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             PlayerTeamSize;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             EnemyTeamSize;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             PlayerLiveCount;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             EnemyLiveCount;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.DrawLivingHud
// [0x00020002] 
struct ATGBioHUD_execDrawLivingHud_Parms
{
};

// Function TGBioGame.TGBioHUD.DisplayAccumulateScore
// [0x00020000] 
struct ATGBioHUD_execDisplayAccumulateScore_Parms
{
};

// Function TGBioGame.TGBioHUD.DrawRandomWeaponIcon
// [0x00820002] 
struct ATGBioHUD_execDrawRandomWeaponIcon_Parms
{
	class ATGBioPickupFactoryBase*                     inputWF;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    cameraRot;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioRandomWeaponPickupFactory*          tWF;                                              		// 0x001C (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               MechaIcon;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               ArrowIcon;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CrossResult;                                      		// 0x0034 (0x000C) [0x0000000000000000]              
	// int                                             IconSizeX;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             IconSizeY;                                        		// 0x0044 (0x0004) [0x0000000000000000]              
	// int                                             ArrowSize;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bInTheFront : 1;                                  		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bOnTheRight : 1;                                  		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bUpBorder : 1;                                    		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bDownBorder : 1;                                  		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bLeftBorder : 1;                                  		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bRigthBorder : 1;                                 		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           Dist;                                             		// 0x0064 (0x0004) [0x0000000000000000]              
	// float                                           SizeScale;                                        		// 0x0068 (0x0004) [0x0000000000000000]              
	// struct FVector2D                                DistRange;                                        		// 0x006C (0x0008) [0x0000000000000000]              
	// struct FVector                                  CameraDir;                                        		// 0x0074 (0x000C) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.DrawRadWeaponIcon
// [0x00020002] 
struct ATGBioHUD_execDrawRadWeaponIcon_Parms
{
	// class ATGBioPlayerPawn*                         TPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioRandomWeaponPickupFactory*          WF;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.DrawOneHumanHero
// [0x00820002] 
struct ATGBioHUD_execDrawOneHumanHero_Parms
{
	class ATGBioHumanHeroPawn*                         TPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    cameraRot;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class UTexture2D*                               MechaIcon;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CrossResult;                                      		// 0x002C (0x000C) [0x0000000000000000]              
	// int                                             IconSizeX;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             IconSizeZ;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bInTheFront : 1;                                  		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bOnTheRight : 1;                                  		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bUpBorder : 1;                                    		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bDownBorder : 1;                                  		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bLeftBorder : 1;                                  		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bRigthBorder : 1;                                 		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           Dist;                                             		// 0x0058 (0x0004) [0x0000000000000000]              
	// float                                           SizeScale;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	// float                                           NormalSizeScale;                                  		// 0x0060 (0x0004) [0x0000000000000000]              
	// struct FVector2D                                DistRange;                                        		// 0x0064 (0x0008) [0x0000000000000000]              
	// struct FVector                                  CameraDir;                                        		// 0x006C (0x000C) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.DrawHumanHeroNameAndIcon
// [0x00020002] 
struct ATGBioHUD_execDrawHumanHeroNameAndIcon_Parms
{
	// class ATGBioHumanHeroPawn*                      TPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.DrawHumUseItemScreenLoc
// [0x00820002] 
struct ATGBioHUD_execDrawHumUseItemScreenLoc_Parms
{
	// struct FVector                                  ScreenLoc;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// class ATGBioPlayerPawn*                         PlayerPawn;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             IconSizeHalfW;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             IconSizeW;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             IconSizeH;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  CrossResult;                                      		// 0x001C (0x000C) [0x0000000000000000]              
	// unsigned long                                   bInTheFront : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bOnTheRight : 1;                                  		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  Dir;                                              		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ViewDir;                                          		// 0x003C (0x000C) [0x0000000000000000]              
	// class UTexture2D*                               ScreenIcon;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           NormalSizeScale;                                  		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0050 (0x0004) [0x0000000000000000]              
	// struct FVector2D                                DistRange;                                        		// 0x0054 (0x0008) [0x0000000000000000]              
	// float                                           tmpSizeScaleW;                                    		// 0x005C (0x0004) [0x0000000000000000]              
	// float                                           tmpSizeScaleH;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.DrawTerminatorScreenLoc
// [0x00820002] 
struct ATGBioHUD_execDrawTerminatorScreenLoc_Parms
{
	// struct FVector                                  ScreenLoc;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// class ATGBioTerminatorZombie*                   ZombiePawn;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// class ATGPawn*                                  PlayerPawn;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             IconSizeHalfW;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             IconSizeW;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             IconSizeH;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  CrossResult;                                      		// 0x0024 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bInTheFront : 1;                                  		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bOnTheRight : 1;                                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  Dir;                                              		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ViewDir;                                          		// 0x0044 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bTerminatorZombie : 1;                            		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< class ATGPawn* >                        tmpTGPawn;                                        		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UTexture2D*                               ScreenIcon;                                       		// 0x0060 (0x0004) [0x0000000000000000]              
	// float                                           NormalSizeScale;                                  		// 0x0064 (0x0004) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0068 (0x0004) [0x0000000000000000]              
	// struct FVector2D                                DistRange;                                        		// 0x006C (0x0008) [0x0000000000000000]              
	// float                                           tmpSizeScaleW;                                    		// 0x0074 (0x0004) [0x0000000000000000]              
	// float                                           tmpSizeScaleH;                                    		// 0x0078 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.DisplaySpawnProtectionProgress
// [0x00020002] 
struct ATGBioHUD_execDisplaySpawnProtectionProgress_Parms
{
	// class ATGPawn*                                  OwnerPawn;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGGameReplicationInfo*                   GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           PercValue;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.DrawHUD
// [0x00020002] 
struct ATGBioHUD_execDrawHUD_Parms
{
};

// Function TGBioGame.TGBioHUD.AddEndGameIcon
// [0x00020002] 
struct ATGBioHUD_execAddEndGameIcon_Parms
{
	int                                                EndGameIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UParticleSystem*                          EndGamePS;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USoundCue*                                EndGameSnd;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             PlayerOwnerTeamIndex;                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.PostBeginPlay
// [0x00020102] 
struct ATGBioHUD_execPostBeginPlay_Parms
{
};

// Function TGBioGame.TGBioHUD.ShowHurtPawn
// [0x00020002] 
struct ATGBioHUD_execShowHurtPawn_Parms
{
	// float                                           PosX;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Pos0;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           Pos1;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Pos2;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           Pos3;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Pos4;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerPawn*                         Pawn;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.SetHurtValue
// [0x00020002] 
struct ATGBioHUD_execSetHurtValue_Parms
{
	// class ATGBioPlayerPawn*                         Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.DropDriverSkill
// [0x00020002] 
struct ATGBioHUD_execDropDriverSkill_Parms
{
	// class UTGBioHUDDrive*                           drive;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.StartDriverSkill
// [0x00020002] 
struct ATGBioHUD_execStartDriverSkill_Parms
{
	// class UTGBioHUDDrive*                           drive;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.StartDriverChangeHumanHero
// [0x00020002] 
struct ATGBioHUD_execStartDriverChangeHumanHero_Parms
{
	// class UTGBioHUDDrive*                           drive;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.StartDriverHurtPawn
// [0x00020002] 
struct ATGBioHUD_execStartDriverHurtPawn_Parms
{
	int                                                iHurt;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vPos;                                             		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class UTGBioHUDDriveHurt*                       drive;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.StartDriveOneKill
// [0x00020002] 
struct ATGBioHUD_execStartDriveOneKill_Parms
{
	// class UTGBioHUDDriveOneKill*                    drive;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.UpdateFeedbackScreenLoc
// [0x00820002] 
struct ATGBioHUD_execUpdateFeedbackScreenLoc_Parms
{
	// struct FVector                                  AttachTranslation;                                		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  XAxis;                                            		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  YAxis;                                            		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ZAxis;                                            		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FeedbackLoc;                                      		// 0x0030 (0x000C) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD.DrawDriveTexture
// [0x00824002] 
struct ATGBioHUD_execDrawDriveTexture_Parms
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTexture2D*                                  Tex;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   StartPos;                                         		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   DestPos;                                          		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   ScaleRange;                                       		// 0x001C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   AlphaRange;                                       		// 0x0024 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAlwaysDisplay : 1;                               		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector2D                                Dist;                                             		// 0x0034 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                pos;                                              		// 0x003C (0x0008) [0x0000000000000000]              
	// struct FVector2D                                DeltaPos;                                         		// 0x0044 (0x0008) [0x0000000000000000]              
	// int                                             TotalCount;                                       		// 0x004C (0x0004) [0x0000000000000000]              
	// int                                             Count;                                            		// 0x0050 (0x0004) [0x0000000000000000]              
	// int                                             TexSizeX;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
	// int                                             TexSizeY;                                         		// 0x0058 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x005C (0x0004) [0x0000000000000000]              
	// float                                           Alpha;                                            		// 0x0060 (0x0004) [0x0000000000000000]              
	// float                                           ScaleTex;                                         		// 0x0064 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioDmgType_HeroBowArrow.SpawnHitEffect
// [0x00022002] 
struct UTGBioDmgType_HeroBowArrow_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioMessage_KillZombieUseMee.GetString
// [0x00026002] 
struct UTGBioMessage_KillZombieUseMee_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMessage_KillZombieUseMee.ClientReceive
// [0x00026102] 
struct UTGBioMessage_KillZombieUseMee_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioMessage_KillZombieUseHeroGun.GetString
// [0x00026002] 
struct UTGBioMessage_KillZombieUseHeroGun_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMessage_KillZombieUseHeroGun.ClientReceive
// [0x00026102] 
struct UTGBioMessage_KillZombieUseHeroGun_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioZombieInventoryManager.HandlePickupQuery
// [0x00020002] 
struct ATGBioZombieInventoryManager_execHandlePickupQuery_Parms
{
	class UClass*                                      ItemClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Pickup;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioMessage_GeneAugmentationAddHp.GetString
// [0x00026002] 
struct UTGBioMessage_GeneAugmentationAddHp_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMessage_GeneAugmentationAddHp.ClientReceive
// [0x00026102] 
struct UTGBioMessage_GeneAugmentationAddHp_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioWeap_HostZombieMeleeWeapon.SetupArmsAnim
// [0x00020102] 
struct ATGBioWeap_HostZombieMeleeWeapon_execSetupArmsAnim_Parms
{
};

// Function TGBioGame.TGBioWeap_HostZombieMeleeWeapon.PlayFirstPersonAnim
// [0x00020102] 
struct ATGBioWeap_HostZombieMeleeWeapon_execPlayFirstPersonAnim_Parms
{
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioWeap_HostZombieMeleeWeapon.UpdateLevelInfoFromInstigator
// [0x00020102] 
struct ATGBioWeap_HostZombieMeleeWeapon_execUpdateLevelInfoFromInstigator_Parms
{
	// class ATGBioHostZombie*                         HostZombie;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             ZombieLevel;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMessage_ZombieAbsoreTitle.GetString
// [0x00026002] 
struct UTGBioMessage_ZombieAbsoreTitle_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMessage_ZombieAbsoreTitle.ClientReceive
// [0x00026102] 
struct UTGBioMessage_ZombieAbsoreTitle_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioPlayerInventoryManager.AddAllFunctionalItem
// [0x00020002] 
struct ATGBioPlayerInventoryManager_execAddAllFunctionalItem_Parms
{
	class ATGPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// TArray< int >                                   FunctionalItemSubTypeList;                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< int >                                   FunctionalItemIconIDList;                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class APawn*                                    Player;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerInventoryManager.HandlePickupQuery
// [0x00020002] 
struct ATGBioPlayerInventoryManager_execHandlePickupQuery_Parms
{
	class UClass*                                      ItemClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Pickup;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AInventory*                               Inv;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   WeaponClass;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerInventoryManager.CanPickup
// [0x00020002] 
struct ATGBioPlayerInventoryManager_execCanPickup_Parms
{
	class UClass*                                      ItemClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AInventory*                               Inv;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UClass*                                   WeaponClass;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerInventoryManager.ProcessBioSpecialWeaponDamage
// [0x00020002] 
struct ATGBioPlayerInventoryManager_execProcessBioSpecialWeaponDamage_Parms
{
	class AWeapon*                                     InWeap;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UClass*                                   WeaponClass;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerInventoryManager.AddDamageScale
// [0x00020002] 
struct ATGBioPlayerInventoryManager_execAddDamageScale_Parms
{
	// class ATGRealWeapon*                            Weap;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           FinalDamageScale;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           BioSpecialWeaponDamageScale;                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerInventoryManager.UpdateDamageScale
// [0x00020002] 
struct ATGBioPlayerInventoryManager_execUpdateDamageScale_Parms
{
	// class ATGRealWeapon*                            Weap;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           FinalDamageScale;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           BioSpecialWeaponDamageScale;                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerInventoryManager.SetWeaponDamageScale
// [0x00020002] 
struct ATGBioPlayerInventoryManager_execSetWeaponDamageScale_Parms
{
	class ATGRealWeapon*                               CreatedWeapon;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           BioSpecialWeaponDamageScale;                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerInventoryManager.CreateInventory
// [0x00024102] 
struct ATGBioPlayerInventoryManager_execCreateInventory_Parms
{
	class UClass*                                      NewInventoryItemClass;                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class AInventory*                                  ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AInventory*                               Inv;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bBeRecycled : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGBioGame.TGBioPlayerInventoryManager.AddInventory
// [0x00024102] 
struct ATGBioPlayerInventoryManager_execAddInventory_Parms
{
	class AInventory*                                  NewItem;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGRealWeapon*                            CreatedWeapon;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              bioPRI;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bResult : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// class ATGRealGun*                               Gun;                                              		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerInventoryManager.AddInventoryByGroup
// [0x00024102] 
struct ATGBioPlayerInventoryManager_execAddInventoryByGroup_Parms
{
	class AInventory*                                  NewItem;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bAddSuc : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// class ATGBioPlayerPawn*                         OwnerPawn;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGRealGun*                               Gun;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerInventoryManager.IsUseableInventory
// [0x00020102] 
struct ATGBioPlayerInventoryManager_execIsUseableInventory_Parms
{
	class UClass*                                      ItemClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioPlayerInventoryManager.ClientWeaponSet
// [0x00024102] 
struct ATGBioPlayerInventoryManager_execClientWeaponSet_Parms
{
	class AWeapon*                                     NewWeapon;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bOptionalSet : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class ATGBioGameReplicationInfo*                BioRepication;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPlayerInventoryManager.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGBioPlayerInventoryManager_eventPostBeginPlay_Parms
{
};

// Function TGBioGame.TGBioMessage_HumProtect.GetString
// [0x00026002] 
struct UTGBioMessage_HumProtect_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMessage_HumProtect.ClientReceive
// [0x00026102] 
struct UTGBioMessage_HumProtect_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioTerminatorZombie.Died
// [0x00024002] 
struct ATGBioTerminatorZombie_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DeathDir;                                         		// 0x0014 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0015 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x001C (0x0004) [0x0000000000000000]              
	// class ATGBioHumanHeroPawn*                      HPawn;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioTerminatorZombie.DeathParticleEffect
// [0x00020102] 
struct ATGBioTerminatorZombie_execDeathParticleEffect_Parms
{
};

// Function TGBioGame.TGBioTerminatorZombie.PlayChangeZombieEffect
// [0x00020102] 
struct ATGBioTerminatorZombie_execPlayChangeZombieEffect_Parms
{
};

// Function TGBioGame.TGBioTerminatorZombie.GetBaseHealthMaxByNumValidPlayers
// [0x00020002] 
struct ATGBioTerminatorZombie_execGetBaseHealthMaxByNumValidPlayers_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             NumValidPlayers;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             ResultHealthMaxBase;                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioTerminatorZombie.SetTerminatorInfo
// [0x00020102] 
struct ATGBioTerminatorZombie_execSetTerminatorInfo_Parms
{
	unsigned char                                      ZombieChangeType;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerController*                   PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioTerminatorZombie.SetLevelInfo
// [0x00020002] 
struct ATGBioTerminatorZombie_execSetLevelInfo_Parms
{
	struct FZombieChangeNecessity                      ZombieChange;                                     		// 0x0000 (0x0014) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioTerminatorZombie.Tick
// [0x00020902] ( FUNC_Event )
struct ATGBioTerminatorZombie_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioMatch*                              BioMatch;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioTerminatorZombie.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGBioTerminatorZombie_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioMessage_FlyCutterSkillAgainstFeedback.GetString
// [0x00026002] 
struct UTGBioMessage_FlyCutterSkillAgainstFeedback_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMessage_FlyCutterSkillAgainstFeedback.ClientReceive
// [0x00026102] 
struct UTGBioMessage_FlyCutterSkillAgainstFeedback_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioItem_Jerrican.JerricanReset
// [0x00020102] 
struct ATGBioItem_Jerrican_execJerricanReset_Parms
{
};

// Function TGBioGame.TGBioItem_Jerrican.NotifyJerricanBomb
// [0x00020102] 
struct ATGBioItem_Jerrican_execNotifyJerricanBomb_Parms
{
};

// Function TGBioGame.TGBioItem_Jerrican.ProcExplode
// [0x00024002] 
struct ATGBioItem_Jerrican_execProcExplode_Parms
{
	unsigned long                                      BombBySelf : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioItem_Jerrican.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ATGBioItem_Jerrican_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x0020) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioItem_Jerrican.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGBioItem_Jerrican_eventPostBeginPlay_Parms
{
};

// Function TGBioGame.TGBioItem_Jerrican.ReallyExplode
// [0x00020102] 
struct ATGBioItem_Jerrican_execReallyExplode_Parms
{
	// class ATGBioJerricanExplosionActor*             ExplosionActor;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioItem_Jerrican.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGBioItem_Jerrican_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioWeap_FlyCutter.PlayFiringSound
// [0x00020100] 
struct ATGBioWeap_FlyCutter_execPlayFiringSound_Parms
{
};

// Function TGBioGame.TGBioWeap_FlyCutter.ProjectileFire
// [0x00820102] 
struct ATGBioWeap_FlyCutter_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGBioProj_FlyCutter*                     SpawnedGrenade;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioWeap_FlyCutter.PostBeginPlay
// [0x00020102] 
struct ATGBioWeap_FlyCutter_execPostBeginPlay_Parms
{
};

// Function TGBioGame.TGBioGrenade.ProjectileFire
// [0x00820102] 
struct ATGBioGrenade_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGBioProj_Grenade*                       SpawnedGrenade;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioGrenade.PostBeginPlay
// [0x00020102] 
struct ATGBioGrenade_execPostBeginPlay_Parms
{
};

// Function TGBioGame.TGBioWeap_HeroBlade.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGBioWeap_HeroBlade_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioWeap_HeroBlade.PlayThirdSwingAnim
// [0x00020100] 
struct ATGBioWeap_HeroBlade_execPlayThirdSwingAnim_Parms
{
};

// Function TGBioGame.TGBioWeap_HeroGun.CheckFireInterval
// [0x00020102] 
struct ATGBioWeap_HeroGun_execCheckFireInterval_Parms
{
	float                                              LocalClientTime;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           IntervalCheck;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           ReasonableFireInterval;                           		// 0x000C (0x0004) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioWeap_HeroGun.DrawWeaponCrosshair
// [0x00020102] 
struct ATGBioWeap_HeroGun_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTHUD*                                   H;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             X;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Y;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             ScreenX;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             ScreenY;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioDmgType_HostZombieClaw.SpawnHitEffect
// [0x00022002] 
struct UTGBioDmgType_HostZombieClaw_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioDmgType_TerminatorClaw.SpawnHitEffect
// [0x00022002] 
struct UTGBioDmgType_TerminatorClaw_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioItemManager.TryTossProp
// [0x00820002] 
struct UTGBioItemManager_execTryTossProp_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UClass*                                   NextPropClass;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGBioInventory*                          InventoryProp;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  SpawnLocation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	// class ATGBioZombiePawn*                         ZombiePawn;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioItemManager.ComputerCanSpawnCount
// [0x00020002] 
struct UTGBioItemManager_execComputerCanSpawnCount_Parms
{
	// class ATGBioMatch*                              tMatch;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             iTotalNum;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioItemManager.GetNextPropClass
// [0x00020002] 
struct UTGBioItemManager_execGetNextPropClass_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UClass*                                   NextPropClass;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           R;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioItemManager.PropType2Class
// [0x00022002] 
struct UTGBioItemManager_execPropType2Class_Parms
{
	unsigned char                                      PropType;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UClass*                                   PropClass;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioItemManager.Reset
// [0x00020002] 
struct UTGBioItemManager_execReset_Parms
{
};

// Function TGBioGame.TGBioItemManager.PreBeginPlay
// [0x00020002] 
struct UTGBioItemManager_execPreBeginPlay_Parms
{
};

// Function TGBioGame.TGBioFountainVolume.Touch
// [0x00820802] ( FUNC_Event )
struct ATGBioFountainVolume_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  AddAdditionalVelocity;                            		// 0x0020 (0x000C) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioWeaponPickupFactory.NotifyLocalPlayerDead
// [0x00020100] 
struct ATGBioWeaponPickupFactory_execNotifyLocalPlayerDead_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioWeaponPickupFactory.ShowHidden
// [0x00020102] 
struct ATGBioWeaponPickupFactory_execShowHidden_Parms
{
};

// Function TGBioGame.TGBioWeaponPickupFactory.ShowActive
// [0x00020100] 
struct ATGBioWeaponPickupFactory_execShowActive_Parms
{
};

// Function TGBioGame.TGBioWeaponPickupFactory.SpawnCopyFor
// [0x00020002] 
struct ATGBioWeaponPickupFactory_execSpawnCopyFor_Parms
{
	class APawn*                                       Recipient;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AInventory*                               Inv;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioWeaponPickupFactory.PickedUpBy
// [0x00020002] 
struct ATGBioWeaponPickupFactory_execPickedUpBy_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioWeaponPickupFactory.StartSleeping
// [0x00020002] 
struct ATGBioWeaponPickupFactory_execStartSleeping_Parms
{
};

// Function TGBioGame.TGBioWeaponPickupFactory.SetWeaponStay
// [0x00020002] 
struct ATGBioWeaponPickupFactory_execSetWeaponStay_Parms
{
};

// Function TGBioGame.TGBioWeaponPickupFactory.CheckForErrors
// [0x00020002] 
struct ATGBioWeaponPickupFactory_execCheckForErrors_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioWeaponPickupFactory.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGBioWeaponPickupFactory_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioWeaponPickupFactory.SetPickupMesh
// [0x00020102] 
struct ATGBioWeaponPickupFactory_execSetPickupMesh_Parms
{
};

// Function TGBioGame.TGBioWeaponPickupFactory.SetPickupHidden
// [0x00020102] 
struct ATGBioWeaponPickupFactory_execSetPickupHidden_Parms
{
};

// Function TGBioGame.TGBioWeaponPickupFactory.SetPickupVisible
// [0x00020102] 
struct ATGBioWeaponPickupFactory_execSetPickupVisible_Parms
{
};

// Function TGBioGame.TGBioWeaponPickupFactory.Reset
// [0x00020002] 
struct ATGBioWeaponPickupFactory_execReset_Parms
{
};

// Function TGBioGame.TGBioWeaponPickupFactory.ClearIconFlash
// [0x00020102] 
struct ATGBioWeaponPickupFactory_execClearIconFlash_Parms
{
};

// Function TGBioGame.TGBioWeaponPickupFactory.FlashIcon
// [0x00020102] 
struct ATGBioWeaponPickupFactory_execFlashIcon_Parms
{
};

// Function TGBioGame.TGBioWeaponPickupFactory.InitializePickup
// [0x00020102] 
struct ATGBioWeaponPickupFactory_execInitializePickup_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioPickupFactoryBase.Initialize
// [0x00020100] 
struct ATGBioPickupFactoryBase_execInitialize_Parms
{
};

// Function TGBioGame.TGBioProj_Grenade.ProjectileHurtRadius
// [0x00820102] 
struct ATGBioProj_Grenade_execProjectileHurtRadius_Parms
{
	struct FVector                                     HurtOrigin;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bCausedDamage : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// class AActor*                                   Victim;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal1;                                       		// 0x0034 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActorTemp;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
	// struct FVector                                  StartTrace;                                       		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0060 (0x0020) [0x0000000000000000]              
	// unsigned long                                   bFinalCauseDamage : 1;                            		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           LocationZOffset;                                  		// 0x0084 (0x0004) [0x0000000000000000]              
	// struct FVector                                  PawnLocationOffset;                               		// 0x0088 (0x000C) [0x0000000000000000]              
	// float                                           DamageAmount;                                     		// 0x0094 (0x0004) [0x0000000000000000]              
	// float                                           InDamageRadius;                                   		// 0x0098 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x009C (0x0004) [0x0000000000000000]              
	// float                                           Momentum;                                         		// 0x00A0 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioProj_Grenade.SpawnExplosionEffects
// [0x00820102] 
struct ATGBioProj_Grenade_execSpawnExplosionEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  LightLoc;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  LightHitLocation;                                 		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  LightHitNormal;                                   		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Direction;                                        		// 0x003C (0x000C) [0x0000000000000000]              
	// class UParticleSystemComponent*                 ProjExplosion;                                    		// 0x0048 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class AActor*                                   EffectAttachActor;                                		// 0x004C (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceTimeVarying*             MITV_Decal;                                       		// 0x0050 (0x0004) [0x0000000000000000]              
	// struct FVector                                  out_HitLocation;                                  		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FVector                                  out_HitNormal;                                    		// 0x0060 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceDest;                                        		// 0x006C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x0078 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceExtent;                                      		// 0x0084 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0090 (0x0020) [0x0000000000000000]              
};

// Function TGBioGame.TGBioProj_Grenade.ProcessTouch
// [0x00020102] 
struct ATGBioProj_Grenade_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioProj_Grenade.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGBioProj_Grenade_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           Angel;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           BounceRate;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioProj_Grenade.InitWithBaseVelocity
// [0x00020002] 
struct ATGBioProj_Grenade_execInitWithBaseVelocity_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BaseVelocity;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioProj_Grenade.PostBeginPlay
// [0x00020102] 
struct ATGBioProj_Grenade_execPostBeginPlay_Parms
{
};

// Function TGBioGame.TGBioHUDDriveManage.RoundReset
// [0x00020002] 
struct UTGBioHUDDriveManage_execRoundReset_Parms
{
	// class UTGBioHUDDrive*                           Item;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUDDriveManage.GetHUDDrive
// [0x00020102] 
struct UTGBioHUDDriveManage_execGetHUDDrive_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTGBioHUDDrive*                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UTGBioHUDDrive*                           Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUDDriveManage.AddHUDDrive
// [0x00020002] 
struct UTGBioHUDDriveManage_execAddHUDDrive_Parms
{
	class UTGBioHUDDrive*                              NewItem;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UTGBioHUDDrive*                           Item;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UTGBioHUDDrive*                           LastItem;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUDDriveManage.Update
// [0x00020102] 
struct UTGBioHUDDriveManage_execUpdate_Parms
{
	// class UTGBioHUDDrive*                           Item;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUDDriveManage.SetHUD
// [0x00020002] 
struct UTGBioHUDDriveManage_execSetHUD_Parms
{
	class ATGBioHUD*                                   HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUDDriveManage.DriveType2Class
// [0x00022002] 
struct UTGBioHUDDriveManage_execDriveType2Class_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UClass*                                   DriveClass;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUDDriveManage.Init
// [0x00020002] 
struct UTGBioHUDDriveManage_execInit_Parms
{
	// class UClass*                                   DriveClass;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHumHUD_ItemInfo.UpdateItemInfoCoolDown
// [0x00020002] 
struct UTGBioHumHUD_ItemInfo_execUpdateItemInfoCoolDown_Parms
{
	// class ATGBioPlayerPawn*                         PlayerPawn;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHumHUD_ItemInfo.SetItemTipVisible
// [0x00020002] 
struct UTGBioHumHUD_ItemInfo_execSetItemTipVisible_Parms
{
	unsigned long                                      bVis : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              bioPRI;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerController*                   PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bNewPlayer : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGBioGame.TGBioHumHUD_ItemInfo.SetTipVisible
// [0x00020002] 
struct UTGBioHumHUD_ItemInfo_execSetTipVisible_Parms
{
	unsigned long                                      bVis : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioHumHUD_ItemInfo.UpdateItemInfoState
// [0x00020002] 
struct UTGBioHumHUD_ItemInfo_execUpdateItemInfoState_Parms
{
};

// Function TGBioGame.TGBioHumHUD_ItemInfo.Tick
// [0x00020002] 
struct UTGBioHumHUD_ItemInfo_execTick_Parms
{
	// class ULocalPlayer*                             LP;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHumHUD_ItemInfo.Destroyed
// [0x00020802] ( FUNC_Event )
struct UTGBioHumHUD_ItemInfo_eventDestroyed_Parms
{
};

// Function TGBioGame.TGBioHumHUD_ItemInfo.PostBeginPlay
// [0x00020900] ( FUNC_Event )
struct UTGBioHumHUD_ItemInfo_eventPostBeginPlay_Parms
{
};

// Function TGBioGame.TGBioZombieHUD_SkillInfo.UpdateSkillInfoCoolDown
// [0x00020002] 
struct UTGBioZombieHUD_SkillInfo_execUpdateSkillInfoCoolDown_Parms
{
	// class ATGBioPlayerController*                   PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioZombiePawn*                         ZombiePawn;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombieHUD_SkillInfo.UpdateSkillInfoBackground
// [0x00020002] 
struct UTGBioZombieHUD_SkillInfo_execUpdateSkillInfoBackground_Parms
{
	// class ATGBioPlayerController*                   PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioZombiePawn*                         ZombiePawn;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombieHUD_SkillInfo.SetFSkillTipVisible
// [0x00020002] 
struct UTGBioZombieHUD_SkillInfo_execSetFSkillTipVisible_Parms
{
	unsigned long                                      bVis : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              bioPRI;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bNewPlayer : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ATGBioPlayerController*                   PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombieHUD_SkillInfo.SetCoolingDownTip2Visible
// [0x00020002] 
struct UTGBioZombieHUD_SkillInfo_execSetCoolingDownTip2Visible_Parms
{
	unsigned long                                      bVis : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              bioPRI;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerController*                   PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombieHUD_SkillInfo.SetCoolingDownTip1Visible
// [0x00020002] 
struct UTGBioZombieHUD_SkillInfo_execSetCoolingDownTip1Visible_Parms
{
	unsigned long                                      bVis : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              bioPRI;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerController*                   PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombieHUD_SkillInfo.SetTipVisible
// [0x00020002] 
struct UTGBioZombieHUD_SkillInfo_execSetTipVisible_Parms
{
	unsigned long                                      bVis : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGBioZombiePawn*                         ZombiePawn;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombieHUD_SkillInfo.UpdateSkillInfoState
// [0x00020002] 
struct UTGBioZombieHUD_SkillInfo_execUpdateSkillInfoState_Parms
{
	// class ATGBioZombiePawn*                         ZombiePawn;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerController*                   PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombieHUD_SkillInfo.Tick
// [0x00020002] 
struct UTGBioZombieHUD_SkillInfo_execTick_Parms
{
	// class ULocalPlayer*                             LP;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombieHUD_SkillInfo.Destroyed
// [0x00020802] ( FUNC_Event )
struct UTGBioZombieHUD_SkillInfo_eventDestroyed_Parms
{
};

// Function TGBioGame.TGBioZombieHUD_SkillInfo.PostBeginPlay
// [0x00020900] ( FUNC_Event )
struct UTGBioZombieHUD_SkillInfo_eventPostBeginPlay_Parms
{
};

// Function TGBioGame.TGBioHUD_ChangeHumanHero.UpdateHumanHeroScene
// [0x00020002] 
struct UTGBioHUD_ChangeHumanHero_execUpdateHumanHeroScene_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerPawn*                         TPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGBioGameReplicationInfo*                GRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FString                                  attackUp;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             attackUpScale;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD_ChangeHumanHero.SetBgHide
// [0x00020002] 
struct UTGBioHUD_ChangeHumanHero_execSetBgHide_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD_ChangeHumanHero.Tick
// [0x00020002] 
struct UTGBioHUD_ChangeHumanHero_execTick_Parms
{
	// class ULocalPlayer*                             LP;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioGameReplicationInfo*                GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD_ChangeHumanHero.Destroyed
// [0x00020802] ( FUNC_Event )
struct UTGBioHUD_ChangeHumanHero_eventDestroyed_Parms
{
};

// Function TGBioGame.TGBioHUD_PlayerTip.GetMessageInfoString
// [0x00020002] 
struct UTGBioHUD_PlayerTip_execGetMessageInfoString_Parms
{
	struct FBioMessageInfo                             Info;                                             		// 0x0000 (0x003C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x003C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  Message;                                          		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             TimeLeft;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD_PlayerTip.GetMessageInfoParticle
// [0x00020002] 
struct UTGBioHUD_PlayerTip_execGetMessageInfoParticle_Parms
{
	struct FBioMessageInfo                             Info;                                             		// 0x0000 (0x003C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UParticleSystem*                             ReturnValue;                                      		// 0x003C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UParticleSystem*                          Message;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD_PlayerTip.ShowVolumeTip
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execShowVolumeTip_Parms
{
	struct FString                                     Tip;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x0010 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddGeneAugmentationAddHpTitle
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execAddGeneAugmentationAddHpTitle_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x0008 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddProtectTitle
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execAddProtectTitle_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                inSwitch;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x000C (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned char                                   CurrentMsgType;                                   		// 0x0048 (0x0001) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddZombieAbsoreTitle
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execAddZombieAbsoreTitle_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x0008 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddZombieSelectSucceed
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execAddZombieSelectSucceed_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x0008 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddUseSkillCountDown
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execAddUseSkillCountDown_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x0008 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddSkillTrampleCasualiesFeedback
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execAddSkillTrampleCasualiesFeedback_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x0008 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddFlyCutterSkillAgainstFeedback
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execAddFlyCutterSkillAgainstFeedback_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x0008 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddSkillFeedback
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execAddSkillFeedback_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                inSwitch;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          TempInfo;                                         		// 0x000C (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x0048 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0084 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddUseSkillAllow
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execAddUseSkillAllow_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                inSwitch;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          TempInfo;                                         		// 0x000C (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x0048 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0084 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddZombieRevive
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execAddZombieRevive_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                inSwitch;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          TempInfo;                                         		// 0x000C (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x0048 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0084 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddTerminatorByKill
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execAddTerminatorByKill_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x0008 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddFetchedPropMessage
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execAddFetchedPropMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FetchedPropType;                                  		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          TempInfo;                                         		// 0x000C (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x0048 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0084 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddRandomPickupMessage
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execAddRandomPickupMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     weaponStr;                                        		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x0014 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioHUD_PlayerTip.RemovePropMessage
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execRemovePropMessage_Parms
{
	// struct FBioMessageInfo                          TempInfo;                                         		// 0x0000 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddTerminatorMessage
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execAddTerminatorMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x0008 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddHumanAttackMessage
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execAddHumanAttackMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x0008 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddTimerMessageFeedback
// [0x00020002] 
struct UTGBioHUD_PlayerTip_execAddTimerMessageFeedback_Parms
{
	int                                                RemainingSeconds;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerController*                   PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddRoundStartTimerMessage
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execAddRoundStartTimerMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x0008 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddHumanHeroDieMessage
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execAddHumanHeroDieMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x0008 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddZombieGiveFailMessage
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execAddZombieGiveFailMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x0008 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddKillZombieUseHeroGunMessage
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execAddKillZombieUseHeroGunMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x0008 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddKillZombieUseMeeMessage
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execAddKillZombieUseMeeMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          NewInfo;                                          		// 0x0008 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioHUD_PlayerTip.RemoveMessageFromList
// [0x00820102] 
struct UTGBioHUD_PlayerTip_execRemoveMessageFromList_Parms
{
	unsigned char                                      InputType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// struct FBioMessageInfo                          TempInfo;                                         		// 0x0004 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD_PlayerTip.AddItemToMessageList
// [0x00824102] 
struct UTGBioHUD_PlayerTip_execAddItemToMessageList_Parms
{
	struct FBioMessageInfo                             NewInfo;                                          		// 0x0000 (0x003C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      InputType;                                        		// 0x003C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShouldLast : 1;                                  		// 0x0040 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FBioMessageInfo                          TempInfo;                                         		// 0x0044 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0080 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD_PlayerTip.MessageType2Tipindex
// [0x00020002] 
struct UTGBioHUD_PlayerTip_execMessageType2Tipindex_Parms
{
	unsigned char                                      MsgType;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioHUD_PlayerTip.UpdateMessageTip
// [0x00820002] 
struct UTGBioHUD_PlayerTip_execUpdateMessageTip_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FBioMessageInfo                          TempInfo;                                         		// 0x0004 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  MessageInfoStr;                                   		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UParticleSystem*                          ParticleTempInfo;                                 		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD_PlayerTip.RoundReset
// [0x00020002] 
struct UTGBioHUD_PlayerTip_execRoundReset_Parms
{
};

// Function TGBioGame.TGBioHUD_PlayerTip.UpdatePlayerTips
// [0x00020002] 
struct UTGBioHUD_PlayerTip_execUpdatePlayerTips_Parms
{
};

// Function TGBioGame.TGBioHUD_PlayerTip.Tick
// [0x00020002] 
struct UTGBioHUD_PlayerTip_execTick_Parms
{
	// class ULocalPlayer*                             LP;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bNeedUpdate : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGBioGame.TGBioHUD_PlayerTip.Destroyed
// [0x00020802] ( FUNC_Event )
struct UTGBioHUD_PlayerTip_eventDestroyed_Parms
{
};

// Function TGBioGame.TGBioHUD_PlayerTip.PostBeginPlay
// [0x00020900] ( FUNC_Event )
struct UTGBioHUD_PlayerTip_eventPostBeginPlay_Parms
{
};

// Function TGBioGame.TGBioHUDDriveOneKill.Update
// [0x00020002] 
struct UTGBioHUDDriveOneKill_execUpdate_Parms
{
	class ATGBioHUD*                                   myHUD;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioZombiePawn*                         TPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUDDrive.Update
// [0x00020002] 
struct UTGBioHUDDrive_execUpdate_Parms
{
	class ATGBioHUD*                                   myHUD;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUDDrive.SetEndPos
// [0x00020002] 
struct UTGBioHUDDrive_execSetEndPos_Parms
{
	struct FVector2D                                   pos;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioHUDDriveHurt.Update
// [0x00020002] 
struct UTGBioHUDDriveHurt_execUpdate_Parms
{
	class ATGBioHUD*                                   myHUD;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerPawn*                         TPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUDDriveHurt.GetHurtPawnScreenLoc
// [0x00020002] 
struct UTGBioHUDDriveHurt_execGetHurtPawnScreenLoc_Parms
{
	class ATGBioHUD*                                   myHUD;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.NotifyLocalPlayerDead
// [0x00020100] 
struct ATGBioRandomWeaponPickupFactory_execNotifyLocalPlayerDead_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.ShowHidden
// [0x00020102] 
struct ATGBioRandomWeaponPickupFactory_execShowHidden_Parms
{
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.ShowActive
// [0x00020100] 
struct ATGBioRandomWeaponPickupFactory_execShowActive_Parms
{
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.SpawnCopyFor
// [0x00020002] 
struct ATGBioRandomWeaponPickupFactory_execSpawnCopyFor_Parms
{
	class APawn*                                       Recipient;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AInventory*                               Inv;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.PickedUpBy
// [0x00020002] 
struct ATGBioRandomWeaponPickupFactory_execPickedUpBy_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.AllowPickup
// [0x00020002] 
struct ATGBioRandomWeaponPickupFactory_execAllowPickup_Parms
{
	class AUTBot*                                      Bot;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.HasCustomer
// [0x00020002] 
struct ATGBioRandomWeaponPickupFactory_execHasCustomer_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFoundCustomer : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.StartSleeping
// [0x00020002] 
struct ATGBioRandomWeaponPickupFactory_execStartSleeping_Parms
{
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.SetWeaponStay
// [0x00020002] 
struct ATGBioRandomWeaponPickupFactory_execSetWeaponStay_Parms
{
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.CheckForErrors
// [0x00020002] 
struct ATGBioRandomWeaponPickupFactory_execCheckForErrors_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGBioRandomWeaponPickupFactory_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.SetPickupMesh
// [0x00020102] 
struct ATGBioRandomWeaponPickupFactory_execSetPickupMesh_Parms
{
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.SetPickupHidden
// [0x00020102] 
struct ATGBioRandomWeaponPickupFactory_execSetPickupHidden_Parms
{
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.SetPickupVisible
// [0x00020102] 
struct ATGBioRandomWeaponPickupFactory_execSetPickupVisible_Parms
{
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.SetInitialState
// [0x00020902] ( FUNC_Event )
struct ATGBioRandomWeaponPickupFactory_eventSetInitialState_Parms
{
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.Initialize
// [0x00020102] 
struct ATGBioRandomWeaponPickupFactory_execInitialize_Parms
{
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.ClearIconFlash
// [0x00020102] 
struct ATGBioRandomWeaponPickupFactory_execClearIconFlash_Parms
{
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.InitializePickup
// [0x00020102] 
struct ATGBioRandomWeaponPickupFactory_execInitializePickup_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UClass*                                   RealGun;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             RandValue;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< class UClass* >                         ToDropWeaponPickupClassGroup;                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioRandomWeaponPickupFactory.PostBeginPlay
// [0x00020102] 
struct ATGBioRandomWeaponPickupFactory_execPostBeginPlay_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UClass*                                   RealGun;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioTabScoreBoard.DrawLocalPlayerInfo
// [0x00020002] 
struct UTGBioTabScoreBoard_execDrawLocalPlayerInfo_Parms
{
	struct FVector2D                                   pos;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ATGGameReplicationInfo*                   GRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioTabScoreBoard.DrawItemText
// [0x00420002] 
struct UTGBioTabScoreBoard_execDrawItemText_Parms
{
	int                                                PosX;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosY;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGPlayerReplicationInfo*                    PRI;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FColor                                      TextColor;                                        		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class ATGBioPlayerReplicationInfo*              bioPRI;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioTabScoreBoard.DrawItemTextSelf
// [0x00420002] 
struct UTGBioTabScoreBoard_execDrawItemTextSelf_Parms
{
	int                                                PosX;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosY;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGPlayerReplicationInfo*                    PRI;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FColor                                      TextColor;                                        		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class ATGBioPlayerReplicationInfo*              bioPRI;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioTabScoreBoard.DrawExtraIcons
// [0x00020002] 
struct UTGBioTabScoreBoard_execDrawExtraIcons_Parms
{
	struct FVector2D                                   pos;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGGameReplicationInfo*                   GRI;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              bioPRI;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               PlayerShowIcon;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioTabScoreBoard.DrawScoreItem
// [0x00820002] 
struct UTGBioTabScoreBoard_execDrawScoreItem_Parms
{
	struct FVector2D                                   StartPos;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ATGPlayerReplicationInfo*                    PRI;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Index;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             PosX;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bSelf : 1;                                        		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FColor                                   TextColor;                                        		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioTabScoreBoard.DisplayTabScore
// [0x00020002] 
struct UTGBioTabScoreBoard_execDisplayTabScore_Parms
{
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             pos;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioTabScoreBoard.InitItemPosition
// [0x00020002] 
struct UTGBioTabScoreBoard_execInitItemPosition_Parms
{
};

// Function TGBioGame.TGBioTabScoreBoard.DrawScoreBoard
// [0x00020002] 
struct UTGBioTabScoreBoard_execDrawScoreBoard_Parms
{
};

// Function TGBioGame.TGBioHUD_Defence.UpdateDefence
// [0x00020002] 
struct UTGBioHUD_Defence_execUpdateDefence_Parms
{
	// class ATGBioPlayerPawn*                         Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD_Defence.Tick
// [0x00020002] 
struct UTGBioHUD_Defence_execTick_Parms
{
	// class ULocalPlayer*                             LP;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUD_Defence.Destroyed
// [0x00020802] ( FUNC_Event )
struct UTGBioHUD_Defence_eventDestroyed_Parms
{
};

// Function TGBioGame.TGBioHUD_Defence.PostBeginPlay
// [0x00020900] ( FUNC_Event )
struct UTGBioHUD_Defence_eventPostBeginPlay_Parms
{
};

// Function TGBioGame.TGBioHUDDriveChangeHumanHero.Update
// [0x00820002] 
struct UTGBioHUDDriveChangeHumanHero_execUpdate_Parms
{
	class ATGBioHUD*                                   myHUD;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector2D                                ScaleRange2;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                AlphaRange2;                                      		// 0x000C (0x0008) [0x0000000000000000]              
	// class ATGBioPlayerPawn*                         TPawn;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGBioGameReplicationInfo*                GRI;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHUDDriveSkill.Update
// [0x00820002] 
struct UTGBioHUDDriveSkill_execUpdate_Parms
{
	class ATGBioHUD*                                   myHUD;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector2D                                ScaleRange2;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                AlphaRange2;                                      		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHumanHeroHUD_BaseInfo.UpdateHumanHeroBaseInfo
// [0x00020002] 
struct UTGBioHumanHeroHUD_BaseInfo_execUpdateHumanHeroBaseInfo_Parms
{
	// class ATGBioHumanHeroPawn*                      heroPawn;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Percent;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHumanHeroHUD_BaseInfo.Tick
// [0x00020002] 
struct UTGBioHumanHeroHUD_BaseInfo_execTick_Parms
{
	// class ULocalPlayer*                             LP;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioHumanHeroHUD_BaseInfo.Destroyed
// [0x00020802] ( FUNC_Event )
struct UTGBioHumanHeroHUD_BaseInfo_eventDestroyed_Parms
{
};

// Function TGBioGame.TGBioHumanHeroHUD_BaseInfo.PostBeginPlay
// [0x00020900] ( FUNC_Event )
struct UTGBioHumanHeroHUD_BaseInfo_eventPostBeginPlay_Parms
{
};

// Function TGBioGame.TGBioHumanHeroInventoryManager.HandlePickupQuery
// [0x00020002] 
struct ATGBioHumanHeroInventoryManager_execHandlePickupQuery_Parms
{
	class UClass*                                      ItemClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Pickup;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioMessage_HumanHeroDie.GetString
// [0x00026002] 
struct UTGBioMessage_HumanHeroDie_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMessage_HumanHeroDie.ClientReceive
// [0x00026102] 
struct UTGBioMessage_HumanHeroDie_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioInventory.GivenTo
// [0x00024002] 
struct ATGBioInventory_execGivenTo_Parms
{
	class APawn*                                       thisPawn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioInventory.AnnouncePickup
// [0x00020002] 
struct ATGBioInventory_execAnnouncePickup_Parms
{
	class APawn*                                       Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioInventory.DropFrom
// [0x00020002] 
struct ATGBioInventory_execDropFrom_Parms
{
	struct FVector                                     StartLocation;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     StartVelocity;                                    		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADroppedPickup*                           P;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMessage_InventoryGiveTo.GetString
// [0x00026002] 
struct UTGBioMessage_InventoryGiveTo_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMessage_InventoryGiveTo.ClientReceive
// [0x00026102] 
struct UTGBioMessage_InventoryGiveTo_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioInventory_AllAmmo.TimerAllAmmo
// [0x00020002] 
struct ATGBioInventory_AllAmmo_execTimerAllAmmo_Parms
{
};

// Function TGBioGame.TGBioInventory_AllAmmo.BeginAllAmmo
// [0x00020002] 
struct ATGBioInventory_AllAmmo_execBeginAllAmmo_Parms
{
};

// Function TGBioGame.TGBioInventory_AllAmmo.ModifyAllAmmo
// [0x00020002] 
struct ATGBioInventory_AllAmmo_execModifyAllAmmo_Parms
{
	unsigned long                                      bAllAmmo : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGBioPlayerInventoryManager*             tInvManager;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioInventory_AllAmmo.GivenTo
// [0x00024002] 
struct ATGBioInventory_AllAmmo_execGivenTo_Parms
{
	class APawn*                                       thisPawn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioInventory_DefenceInfection.ModifyDefence
// [0x00020002] 
struct ATGBioInventory_DefenceInfection_execModifyDefence_Parms
{
	int                                                iCount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerPawn*                         TPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioInventory_DefenceInfection.TimerResetDefence
// [0x00020002] 
struct ATGBioInventory_DefenceInfection_execTimerResetDefence_Parms
{
};

// Function TGBioGame.TGBioInventory_DefenceInfection.BeginDefence
// [0x00020002] 
struct ATGBioInventory_DefenceInfection_execBeginDefence_Parms
{
};

// Function TGBioGame.TGBioInventory_DefenceInfection.GivenTo
// [0x00024002] 
struct ATGBioInventory_DefenceInfection_execGivenTo_Parms
{
	class APawn*                                       thisPawn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioInventory_EnemySlomo.ModifyEnemySlomo
// [0x00020002] 
struct ATGBioInventory_EnemySlomo_execModifyEnemySlomo_Parms
{
	float                                              InEnemySlomoScale;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerPawn*                         TPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioInventory_EnemySlomo.TimerEnemySlomo
// [0x00020002] 
struct ATGBioInventory_EnemySlomo_execTimerEnemySlomo_Parms
{
};

// Function TGBioGame.TGBioInventory_EnemySlomo.BeginEnemySlomo
// [0x00020002] 
struct ATGBioInventory_EnemySlomo_execBeginEnemySlomo_Parms
{
};

// Function TGBioGame.TGBioInventory_EnemySlomo.GivenTo
// [0x00024002] 
struct ATGBioInventory_EnemySlomo_execGivenTo_Parms
{
	class APawn*                                       thisPawn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioInventory_FastMove.ModifyFastMove
// [0x00020002] 
struct ATGBioInventory_FastMove_execModifyFastMove_Parms
{
	float                                              InFastMoveScale;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGPawn*                                  TPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioInventory_FastMove.TimerFastMove
// [0x00020002] 
struct ATGBioInventory_FastMove_execTimerFastMove_Parms
{
};

// Function TGBioGame.TGBioInventory_FastMove.BeginFastMove
// [0x00020002] 
struct ATGBioInventory_FastMove_execBeginFastMove_Parms
{
};

// Function TGBioGame.TGBioInventory_FastMove.GivenTo
// [0x00024002] 
struct ATGBioInventory_FastMove_execGivenTo_Parms
{
	class APawn*                                       thisPawn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioInventory_FastShoot.ModifyFastShoot
// [0x00020002] 
struct ATGBioInventory_FastShoot_execModifyFastShoot_Parms
{
	float                                              InFastShootScale;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerPawn*                         P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioInventory_FastShoot.TimerFastShoot
// [0x00020002] 
struct ATGBioInventory_FastShoot_execTimerFastShoot_Parms
{
};

// Function TGBioGame.TGBioInventory_FastShoot.BeginFastShoot
// [0x00020002] 
struct ATGBioInventory_FastShoot_execBeginFastShoot_Parms
{
};

// Function TGBioGame.TGBioInventory_FastShoot.GivenTo
// [0x00024002] 
struct ATGBioInventory_FastShoot_execGivenTo_Parms
{
	class APawn*                                       thisPawn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioInventory_FullAmmo.BeginFullAmmo
// [0x00020002] 
struct ATGBioInventory_FullAmmo_execBeginFullAmmo_Parms
{
	// class AUTInventoryManager*                      tInvManager;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// TArray< class AUTWeapon* >                      WeaponList;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              bioPRI;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioInventory_FullAmmo.GivenTo
// [0x00024002] 
struct ATGBioInventory_FullAmmo_execGivenTo_Parms
{
	class APawn*                                       thisPawn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioInvisibleZombie.PlayDying
// [0x00024102] 
struct ATGBioInvisibleZombie_execPlayDying_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DeathDir;                                         		// 0x0010 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0011 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioInvisibleZombie.Invisible
// [0x00020102] 
struct ATGBioInvisibleZombie_execInvisible_Parms
{
	unsigned long                                      bInvisible : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioInvisibleZombie.Visibling
// [0x00020102] 
struct ATGBioInvisibleZombie_execVisibling_Parms
{
};

// Function TGBioGame.TGBioInvisibleZombie.Invisibling
// [0x00020102] 
struct ATGBioInvisibleZombie_execInvisibling_Parms
{
	// class ATGBioSkill_Invisible*                    InvisibleSkill;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioInvisibleZombie.NotifyPendingBioCharInfo
// [0x00020102] 
struct ATGBioInvisibleZombie_execNotifyPendingBioCharInfo_Parms
{
	class UBioCharInfo*                                PendingCharInfo;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bimmediateSetMat : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGBioGame.TGBioInvisibleZombie.RsetInvisibleZombieSpeedScale
// [0x00020002] 
struct ATGBioInvisibleZombie_execRsetInvisibleZombieSpeedScale_Parms
{
};

// Function TGBioGame.TGBioInvisibleZombie.SetInvisibleZombieSpeedScale
// [0x00020002] 
struct ATGBioInvisibleZombie_execSetInvisibleZombieSpeedScale_Parms
{
	float                                              SpeedScale;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioInvisibleZombie.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGBioInvisibleZombie_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioSkill_Invisible.CheckAllowUseSkill
// [0x00020002] 
struct ATGBioSkill_Invisible_execCheckAllowUseSkill_Parms
{
};

// Function TGBioGame.TGBioSkill_Invisible.UnexpectedStopSkillValue
// [0x00020102] 
struct ATGBioSkill_Invisible_execUnexpectedStopSkillValue_Parms
{
};

// Function TGBioGame.TGBioSkill_Invisible.PostBeginInitialize
// [0x00020002] 
struct ATGBioSkill_Invisible_execPostBeginInitialize_Parms
{
};

// Function TGBioGame.TGBioSkill_Invisible.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGBioSkill_Invisible_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioJerricanExplosionActor.SpawnExplosionParticleSystem
// [0x00020102] 
struct ATGBioJerricanExplosionActor_execSpawnExplosionParticleSystem_Parms
{
	class UParticleSystem*                             Template;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UParticleSystemComponent*                 PSC;                                              		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGBioGame.TGBioItem_Switch.SetSwitch
// [0x00020102] 
struct ATGBioItem_Switch_execSetSwitch_Parms
{
	unsigned long                                      SwitchState : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGBioGame.TGBioItem_Switch.PostBeginPlay
// [0x00020002] 
struct ATGBioItem_Switch_execPostBeginPlay_Parms
{
};

// Function TGBioGame.TGBioItem_Switch.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGBioItem_Switch_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioMapInfo.DrawBigRadar
// [0x00820102] 
struct UTGBioMapInfo_execDrawBigRadar_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AUTPlayerController*                         PlayerOwner;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              XPos;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              YPos;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFullDetail : 1;                                  		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              AspectRatio;                                      		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AWorldInfo*                               WI;                                               		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  WeaponLocation;                                   		// 0x0024 (0x000C) [0x0000000000000000]              
	// class AUTPickupFactory*                         Pickup;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	// class ATGBioRandomWeaponPickupFactory*          RWF;                                              		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             RadarWeaponIconSize;                              		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           IconSizeScale;                                    		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMapInfo.GetWeaponSizeScale
// [0x00020102] 
struct UTGBioMapInfo_execGetWeaponSizeScale_Parms
{
	class ATGBioWeaponPickupFactory*                   WP;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AWorldInfo*                               WI;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMapInfo.GetRandomWeaponSizeScale
// [0x00020102] 
struct UTGBioMapInfo_execGetRandomWeaponSizeScale_Parms
{
	class ATGBioRandomWeaponPickupFactory*             RWP;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AWorldInfo*                               WI;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMapInfo.DrawMap
// [0x00820102] 
struct UTGBioMapInfo_execDrawMap_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AUTPlayerController*                         PlayerOwner;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              XPos;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              YPos;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFullDetail : 1;                                  		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              AspectRatio;                                      		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BkgImgAlpha;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AWorldInfo*                               WI;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  WeaponLocation;                                   		// 0x0028 (0x000C) [0x0000000000000000]              
	// class AUTPickupFactory*                         Pickup;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
	// class ATGBioWeaponPickupFactory*                WF;                                               		// 0x0038 (0x0004) [0x0000000000000000]              
	// class ATGBioRandomWeaponPickupFactory*          RWF;                                              		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             RadarWeaponIconSize;                              		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           IconSizeScale;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
	// class ATGBioHumanHeroPawn*                      TPawn;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerPawn*                         PlayerPawn;                                       		// 0x004C (0x0004) [0x0000000000000000]              
	// class ATGBioTerminatorZombie*                   TerminatorZombie;                                 		// 0x0050 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HeroPos;                                          		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FVector                                  PlayerPos;                                        		// 0x0060 (0x000C) [0x0000000000000000]              
	// int                                             HeroIconSize;                                     		// 0x006C (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0070 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioRestoreManager.DeleteRestore
// [0x00020102] 
struct ATGBioRestoreManager_execDeleteRestore_Parms
{
	class APlayerController*                           InController;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioRestore*                            Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGBioRestore*                            LastItem;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioRestoreManager.GetRestore
// [0x00020102] 
struct ATGBioRestoreManager_execGetRestore_Parms
{
	class APlayerController*                           InController;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGBioRestore*                               ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioRestore*                            Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioRestoreManager.AddRestore
// [0x00020002] 
struct ATGBioRestoreManager_execAddRestore_Parms
{
	class APlayerController*                           InController;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioZombiePawn*                         ZombiePawn;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGBioRestore*                            Restore;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioRestoreManager.CreateRestores
// [0x00020002] 
struct ATGBioRestoreManager_execCreateRestores_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioZombiePawn*                         P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AWorldInfo*                               tmpWorldInfo;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   Succeed : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGBioGame.TGBioRestoreManager.InitializeRestoreMsg
// [0x00020002] 
struct ATGBioRestoreManager_execInitializeRestoreMsg_Parms
{
	class ATGGameReplicationInfo*                      InTGR;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioRestoreManager.DiscardRestore
// [0x00020802] ( FUNC_Event )
struct ATGBioRestoreManager_eventDiscardRestore_Parms
{
	// class ATGBioRestore*                            Item;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioRestore*                            ItemToDestroy;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioRestoreManager.Add2Restores
// [0x00020002] 
struct ATGBioRestoreManager_execAdd2Restores_Parms
{
	class ATGBioRestore*                               NewItem;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioRestore*                            Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGBioRestore*                            LastItem;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioRestoreManager.RsetRestoreManager
// [0x00020002] 
struct ATGBioRestoreManager_execRsetRestoreManager_Parms
{
};

// Function TGBioGame.TGBioRestoreManager.Destroyed
// [0x00020802] ( FUNC_Event )
struct ATGBioRestoreManager_eventDestroyed_Parms
{
};

// Function TGBioGame.TGBioRestoreManager.Tick
// [0x00020802] ( FUNC_Event )
struct ATGBioRestoreManager_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioRestore*                            Item;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioMessage_TerminatorByKill.GetString
// [0x00026002] 
struct UTGBioMessage_TerminatorByKill_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMessage_TerminatorByKill.ClientReceive
// [0x00026102] 
struct UTGBioMessage_TerminatorByKill_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioMessage_ZombieRevive.GetString
// [0x00026002] 
struct UTGBioMessage_ZombieRevive_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMessage_ZombieRevive.ClientReceive
// [0x00026102] 
struct UTGBioMessage_ZombieRevive_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioMessage_Terminator.GetString
// [0x00026002] 
struct UTGBioMessage_Terminator_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMessage_Terminator.ClientReceive
// [0x00026102] 
struct UTGBioMessage_Terminator_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioMessage_AddHumanAttack.GetString
// [0x00026002] 
struct UTGBioMessage_AddHumanAttack_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMessage_AddHumanAttack.ClientReceive
// [0x00026102] 
struct UTGBioMessage_AddHumanAttack_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioMatchInfoMessage.GetPos
// [0x00022002] 
struct UTGBioMatchInfoMessage_execGetPos_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AHUD*                                        myHUD;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioMatchInfoMessage.GetFontSize
// [0x00022002] 
struct UTGBioMatchInfoMessage_execGetFontSize_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI1;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI2;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      LocalPlayer;                                      		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioMatchInfoMessage.GetString
// [0x00026002] 
struct UTGBioMatchInfoMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMessage_GiveFail.GetString
// [0x00026002] 
struct UTGBioMessage_GiveFail_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMessage_GiveFail.ClientReceive
// [0x00026102] 
struct UTGBioMessage_GiveFail_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioMessage_RandomPickup.GetString
// [0x00026002] 
struct UTGBioMessage_RandomPickup_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMessage_RandomPickup.ClientReceive
// [0x00026102] 
struct UTGBioMessage_RandomPickup_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioMessage_RestoreHPNotify.ClientReceive
// [0x00026102] 
struct UTGBioMessage_RestoreHPNotify_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioMessage_RoundStartTimer.GetString
// [0x00026002] 
struct UTGBioMessage_RoundStartTimer_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMessage_RoundStartTimer.ClientReceive
// [0x00026102] 
struct UTGBioMessage_RoundStartTimer_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioMessage_SkillTrampleCasualiesFeedback.GetString
// [0x00026002] 
struct UTGBioMessage_SkillTrampleCasualiesFeedback_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMessage_SkillTrampleCasualiesFeedback.ClientReceive
// [0x00026102] 
struct UTGBioMessage_SkillTrampleCasualiesFeedback_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioMessage_UseSkill.GetString
// [0x00026002] 
struct UTGBioMessage_UseSkill_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMessage_UseSkill.ClientReceive
// [0x00026102] 
struct UTGBioMessage_UseSkill_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioMessage_UseSkillFeedback.GetString
// [0x00026002] 
struct UTGBioMessage_UseSkillFeedback_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMessage_UseSkillFeedback.ClientReceive
// [0x00026102] 
struct UTGBioMessage_UseSkillFeedback_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioMessage_ZombieSelectSucceed.GetString
// [0x00026002] 
struct UTGBioMessage_ZombieSelectSucceed_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioMessage_ZombieSelectSucceed.ClientReceive
// [0x00026102] 
struct UTGBioMessage_ZombieSelectSucceed_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioSkillManager.UnNudgeSkills
// [0x00020102] 
struct ATGBioSkillManager_execUnNudgeSkills_Parms
{
	// class ATGBioSkillBase*                          Item;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.GetUnInitiativeSkillIndex
// [0x00020102] 
struct ATGBioSkillManager_execGetUnInitiativeSkillIndex_Parms
{
	class ATGBioSkillBase*                             Skill;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioSkillBase*                          Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             SkillIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             InitiativeSkillNum;                               		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.GetInitiativeSkillIndex
// [0x00020102] 
struct ATGBioSkillManager_execGetInitiativeSkillIndex_Parms
{
	class ATGBioSkillBase*                             Skill;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioSkillBase*                          Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.GetSkillIndex
// [0x00020102] 
struct ATGBioSkillManager_execGetSkillIndex_Parms
{
	class ATGBioSkillBase*                             Skill;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioSkillBase*                          Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.GetInitiativeSkillByIndex
// [0x00020102] 
struct ATGBioSkillManager_execGetInitiativeSkillByIndex_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGBioSkillBase*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioSkillBase*                          Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.GetInitiativeSkill
// [0x00020102] 
struct ATGBioSkillManager_execGetInitiativeSkill_Parms
{
	unsigned char                                      ZombieType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class ATGBioSkillBase*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioSkillBase*                          Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.GetSkillByIndex
// [0x00020102] 
struct ATGBioSkillManager_execGetSkillByIndex_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGBioSkillBase*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioSkillBase*                          Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.GetSkill
// [0x00020102] 
struct ATGBioSkillManager_execGetSkill_Parms
{
	unsigned char                                      ZombieType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class ATGBioSkillBase*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioSkillBase*                          Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.AbortSkillByIndex
// [0x00024102] 
struct ATGBioSkillManager_execAbortSkillByIndex_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ATGBioSkillBase*                          Item;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.AbortSkill
// [0x00020102] 
struct ATGBioSkillManager_execAbortSkill_Parms
{
	unsigned char                                      ZombieType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioSkillBase*                          Item;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.ServerStartSkill
// [0x002200C2] 
struct ATGBioSkillManager_execServerStartSkill_Parms
{
	unsigned char                                      ZombieType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioSkillManager.StartSkill
// [0x00020102] 
struct ATGBioSkillManager_execStartSkill_Parms
{
	unsigned char                                      ZombieType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioSkillBase*                          Item;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGBioZombiePawn*                         ZombiePawn;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.IsCooldowning
// [0x00020102] 
struct ATGBioSkillManager_execIsCooldowning_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioSkillManager.ClearManagerCoolDownOver
// [0x00020102] 
struct ATGBioSkillManager_execClearManagerCoolDownOver_Parms
{
};

// Function TGBioGame.TGBioSkillManager.ManagerCoolDownOver
// [0x00020102] 
struct ATGBioSkillManager_execManagerCoolDownOver_Parms
{
	// class ATGBioZombiePawn*                         ZombiePawn;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.SkillManagerCoolDown
// [0x00020102] 
struct ATGBioSkillManager_execSkillManagerCoolDown_Parms
{
};

// Function TGBioGame.TGBioSkillManager.GetCooldownRemainTime
// [0x00020102] 
struct ATGBioSkillManager_execGetCooldownRemainTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           tmpRemainTime;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.GetSkillLastPercent
// [0x00020102] 
struct ATGBioSkillManager_execGetSkillLastPercent_Parms
{
	unsigned char                                      ZombieType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioSkillBase*                          Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Percentage;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.GetCooldownRemainPercent
// [0x00020102] 
struct ATGBioSkillManager_execGetCooldownRemainPercent_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioSkillManager.SetModifCooldownTime
// [0x00020102] 
struct ATGBioSkillManager_execSetModifCooldownTime_Parms
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioSkillBase*                          Item;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.GetSkillByType
// [0x00020102] 
struct ATGBioSkillManager_execGetSkillByType_Parms
{
	class ATGBioSkillBase*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioZombiePawn*                         TmpPawn;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGBioSkillBase*                          Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.CreateAndInitializeSkill
// [0x00020002] 
struct ATGBioSkillManager_execCreateAndInitializeSkill_Parms
{
	struct FString                                     ClassName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioSkillBase*                          Skill;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UClass*                                   SkillClass;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.Initialize
// [0x00020002] 
struct ATGBioSkillManager_execInitialize_Parms
{
	class APlayerController*                           InOwnerPC;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioSkillManager.FindSkill
// [0x00020102] 
struct ATGBioSkillManager_execFindSkill_Parms
{
	class ATGBioSkillBase*                             ItemToFind;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGBioSkillBase*                          Item;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.DiscardSkill
// [0x00020802] ( FUNC_Event )
struct ATGBioSkillManager_eventDiscardSkill_Parms
{
	// class ATGBioSkillBase*                          Item;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioSkillBase*                          ItemToDestroy;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.AddSkill
// [0x00020002] 
struct ATGBioSkillManager_execAddSkill_Parms
{
	class ATGBioSkillBase*                             NewItem;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioSkillBase*                          Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGBioSkillBase*                          LastItem;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.RsetSkillsCoolTime
// [0x00020102] 
struct ATGBioSkillManager_execRsetSkillsCoolTime_Parms
{
	// class ATGBioSkillBase*                          Item;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.RsetSkills
// [0x00020102] 
struct ATGBioSkillManager_execRsetSkills_Parms
{
	unsigned long                                      ResetCoolTime : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGBioSkillBase*                          Item;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillManager.Destroyed
// [0x00020802] ( FUNC_Event )
struct ATGBioSkillManager_eventDestroyed_Parms
{
};

// Function TGBioGame.TGBioProj_FlyCutter.SpawnExplosionEffects
// [0x00020100] 
struct ATGBioProj_FlyCutter_execSpawnExplosionEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioProj_FlyCutter.ProcessTouch
// [0x00020102] 
struct ATGBioProj_FlyCutter_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class AUTEmit_HitEffect*                        HitEffect;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerPawn*                         tmpPlayerPawn;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerController*                   tmpPC;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioProj_FlyCutter.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGBioProj_FlyCutter_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// class AUTEmit_HitEffect*                        HitEffect;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioProj_FlyCutter.InitWithBaseVelocity
// [0x00020002] 
struct ATGBioProj_FlyCutter_execInitWithBaseVelocity_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BaseVelocity;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioProj_FlyCutter.PostBeginPlay
// [0x00020102] 
struct ATGBioProj_FlyCutter_execPostBeginPlay_Parms
{
};

// Function TGBioGame.TGBioProj_HeroGun.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGBioProj_HeroGun_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           Angel;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           BounceRate;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioProj_Thunder.DoThunderChain
// [0x00820102] 
struct ATGBioProj_Thunder_execDoThunderChain_Parms
{
	class AUTPawn*                                     TraceFrom;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTPawn*                                  HitPawn;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AUTPawn*                                  RecordClosestPawn;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AddVectorHeight;                                  		// 0x0024 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FVector                                  StartTrace;                                       		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x004C (0x0020) [0x0000000000000000]              
	// float                                           MinClosestDistance;                               		// 0x006C (0x0004) [0x0000000000000000]              
	// float                                           HitPawnDistance;                                  		// 0x0070 (0x0004) [0x0000000000000000]              
	// class ATGPawn*                                  P;                                                		// 0x0074 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioRestore.Destroyed
// [0x00020802] ( FUNC_Event )
struct ATGBioRestore_eventDestroyed_Parms
{
};

// Function TGBioGame.TGBioRestore.RestoreHP
// [0x00020002] 
struct ATGBioRestore_execRestoreHP_Parms
{
	// int                                             Health;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             HealthMax;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGBioZombiePawn*                         tmpZombiePawn;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioRestore.Tick
// [0x00020802] ( FUNC_Event )
struct ATGBioRestore_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   AllowCondition : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           Health;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           HealthMax;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// class ATGBioZombiePawn*                         ZombiePawn;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioRestore.CalculateTimer
// [0x00020802] ( FUNC_Event )
struct ATGBioRestore_eventCalculateTimer_Parms
{
};

// Function TGBioGame.TGBioRestore.RestoreCondition
// [0x00020002] 
struct ATGBioRestore_execRestoreCondition_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioZombiePawn*                         ZombiePawn;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioRestore.RestoreInitialize
// [0x00020002] 
struct ATGBioRestore_execRestoreInitialize_Parms
{
	class APlayerController*                           InOwnerPC;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGBioRestoreManager*                        InRestoreMsg;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioSeqAct_AllJerricanReset.Activated
// [0x00020802] ( FUNC_Event )
struct UTGBioSeqAct_AllJerricanReset_eventActivated_Parms
{
};

// Function TGBioGame.TGBioSeqAct_ResetGlass.Activated
// [0x00020802] ( FUNC_Event )
struct UTGBioSeqAct_ResetGlass_eventActivated_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AFracturedStaticMeshActor*                Glass;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSeqAct_ServerTurnSwitch.Activated
// [0x00020802] ( FUNC_Event )
struct UTGBioSeqAct_ServerTurnSwitch_eventActivated_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillComponentBase.OnClientUnNudge
// [0x00020100] 
struct ATGBioSkillComponentBase_execOnClientUnNudge_Parms
{
	class ATGBioSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioSkillComponentBase.OnClientNudge
// [0x00020100] 
struct ATGBioSkillComponentBase_execOnClientNudge_Parms
{
	class ATGBioSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioSkillComponentBase.ClientUnNudge
// [0x00020102] 
struct ATGBioSkillComponentBase_execClientUnNudge_Parms
{
};

// Function TGBioGame.TGBioSkillComponentBase.ClientNudge
// [0x00020102] 
struct ATGBioSkillComponentBase_execClientNudge_Parms
{
};

// Function TGBioGame.TGBioSkillComponentBase.OnUnNudge
// [0x00020000] 
struct ATGBioSkillComponentBase_execOnUnNudge_Parms
{
	class ATGBioSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioSkillComponentBase.OnNudge
// [0x00020000] 
struct ATGBioSkillComponentBase_execOnNudge_Parms
{
	class ATGBioSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioSkillComponentBase.OnPreProcess
// [0x00020102] 
struct ATGBioSkillComponentBase_execOnPreProcess_Parms
{
	class ATGBioSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioSkillComponentBase.UnNudge
// [0x00020002] 
struct ATGBioSkillComponentBase_execUnNudge_Parms
{
};

// Function TGBioGame.TGBioSkillComponentBase.Nudge
// [0x00020002] 
struct ATGBioSkillComponentBase_execNudge_Parms
{
};

// Function TGBioGame.TGBioSkillComponentBase.PreProcess
// [0x00020102] 
struct ATGBioSkillComponentBase_execPreProcess_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioSkillComponentBase.CanUnNudge
// [0x00020102] 
struct ATGBioSkillComponentBase_execCanUnNudge_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGBioGame.TGBioSkillComponentBase.CanNudge
// [0x00020102] 
struct ATGBioSkillComponentBase_execCanNudge_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioZombiePawn*                         ZombiePawn;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillComponentBase.Initialize
// [0x00024002] 
struct ATGBioSkillComponentBase_execInitialize_Parms
{
	class APlayerController*                           InOwnerPC;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGBioSkillBase*                             InOwnerSkill;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             NudgeHandleFunctionDelegate;                      		// 0x0008 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             UnNudgeHandleFunctionDelegate;                    		// 0x0014 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioSkillComponentBase.UnNudgeHandleFunction
// [0x00120000] 
struct ATGBioSkillComponentBase_execUnNudgeHandleFunction_Parms
{
	class ATGBioSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioSkillComponentBase.NudgeHandleFunction
// [0x00120000] 
struct ATGBioSkillComponentBase_execNudgeHandleFunction_Parms
{
	class ATGBioSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioSkill_FastMove.CheckAllowUseSkill
// [0x00020002] 
struct ATGBioSkill_FastMove_execCheckAllowUseSkill_Parms
{
};

// Function TGBioGame.TGBioSkill_FastMove.UnexpectedStopSkillValue
// [0x00020102] 
struct ATGBioSkill_FastMove_execUnexpectedStopSkillValue_Parms
{
};

// Function TGBioGame.TGBioSkill_FastMove.PostBeginInitialize
// [0x00020002] 
struct ATGBioSkill_FastMove_execPostBeginInitialize_Parms
{
};

// Function TGBioGame.TGBioSkillComponent_FastMove.CanNudge
// [0x00020102] 
struct ATGBioSkillComponent_FastMove_execCanNudge_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioPlayerController*                   TGP;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillComponent_FastMove.OnUnNudge
// [0x00020002] 
struct ATGBioSkillComponent_FastMove_execOnUnNudge_Parms
{
	class ATGBioSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerController*                   TGP;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillComponent_FastMove.OnNudge
// [0x00020002] 
struct ATGBioSkillComponent_FastMove_execOnNudge_Parms
{
	class ATGBioSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerController*                   TGP;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             CurrentLevel;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkill_FlyCutter.CheckAllowUseSkill
// [0x00020002] 
struct ATGBioSkill_FlyCutter_execCheckAllowUseSkill_Parms
{
};

// Function TGBioGame.TGBioSkill_FlyCutter.UnexpectedStopSkillValue
// [0x00020102] 
struct ATGBioSkill_FlyCutter_execUnexpectedStopSkillValue_Parms
{
};

// Function TGBioGame.TGBioSkill_FlyCutter.PostBeginInitialize
// [0x00020002] 
struct ATGBioSkill_FlyCutter_execPostBeginInitialize_Parms
{
};

// Function TGBioGame.TGBioSkillComponent_FlyCutter.CanNudge
// [0x00020102] 
struct ATGBioSkillComponent_FlyCutter_execCanNudge_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioPlayerController*                   TGP;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AInventory*                               FindInventory;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillComponent_FlyCutter.OnUnNudge
// [0x00020000] 
struct ATGBioSkillComponent_FlyCutter_execOnUnNudge_Parms
{
	class ATGBioSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioSkillComponent_FlyCutter.OnNudge
// [0x00020000] 
struct ATGBioSkillComponent_FlyCutter_execOnNudge_Parms
{
	class ATGBioSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGBioGame.TGBioSkillComponent_FlyCutter.OnPreProcess
// [0x00020102] 
struct ATGBioSkillComponent_FlyCutter_execOnPreProcess_Parms
{
	class ATGBioSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioPlayerController*                   TGP;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGBioWeap_FlyCutter*                     FlyCutter;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             CurrentLevel;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillComponent_Invisible.CanNudge
// [0x00020102] 
struct ATGBioSkillComponent_Invisible_execCanNudge_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioPlayerController*                   TGP;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillComponent_Invisible.OnUnNudge
// [0x00020002] 
struct ATGBioSkillComponent_Invisible_execOnUnNudge_Parms
{
	class ATGBioSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerController*                   TGP;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillComponent_Invisible.OnNudge
// [0x00020002] 
struct ATGBioSkillComponent_Invisible_execOnNudge_Parms
{
	class ATGBioSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerController*                   TGP;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             CurrentLevel;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           CurrenFiretTime;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           CurrenProgressMin;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           CurrenInvisibleSpeedScale;                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkill_Shield.CheckAllowUseSkill
// [0x00020002] 
struct ATGBioSkill_Shield_execCheckAllowUseSkill_Parms
{
};

// Function TGBioGame.TGBioSkill_Shield.UnexpectedStopSkillValue
// [0x00020102] 
struct ATGBioSkill_Shield_execUnexpectedStopSkillValue_Parms
{
};

// Function TGBioGame.TGBioSkill_Shield.PostBeginInitialize
// [0x00020002] 
struct ATGBioSkill_Shield_execPostBeginInitialize_Parms
{
};

// Function TGBioGame.TGBioSkillComponent_Shield.CanNudge
// [0x00020102] 
struct ATGBioSkillComponent_Shield_execCanNudge_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioPlayerController*                   TGP;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillComponent_Shield.OnUnNudge
// [0x00020002] 
struct ATGBioSkillComponent_Shield_execOnUnNudge_Parms
{
	class ATGBioSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerController*                   TGP;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillComponent_Shield.OnNudge
// [0x00020002] 
struct ATGBioSkillComponent_Shield_execOnNudge_Parms
{
	class ATGBioSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerController*                   TGP;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkill_Trample.CheckAllowUseSkill
// [0x00020002] 
struct ATGBioSkill_Trample_execCheckAllowUseSkill_Parms
{
};

// Function TGBioGame.TGBioSkill_Trample.UnexpectedStopSkillValue
// [0x00020102] 
struct ATGBioSkill_Trample_execUnexpectedStopSkillValue_Parms
{
};

// Function TGBioGame.TGBioSkill_Trample.PostBeginInitialize
// [0x00020002] 
struct ATGBioSkill_Trample_execPostBeginInitialize_Parms
{
};

// Function TGBioGame.TGBioSkillComponent_Trample.CanNudge
// [0x00020102] 
struct ATGBioSkillComponent_Trample_execCanNudge_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGBioPlayerController*                   TGP;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillComponent_Trample.TrampleFindPawnPlayer
// [0x00020002] 
struct ATGBioSkillComponent_Trample_execTrampleFindPawnPlayer_Parms
{
	// class ATGPawn*                                  PawnPlayer;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerController*                   OtherPC;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           Distance;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillComponent_Trample.OnUnNudge
// [0x00020002] 
struct ATGBioSkillComponent_Trample_execOnUnNudge_Parms
{
	class ATGBioSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerController*                   TGP;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillComponent_Trample.OnNudge
// [0x00020002] 
struct ATGBioSkillComponent_Trample_execOnNudge_Parms
{
	class ATGBioSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGBioPlayerController*                   TGP;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioSkillNotifyMessage.ClientReceive
// [0x00026102] 
struct UTGBioSkillNotifyMessage_execClientReceive_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGBioGame.TGBioSkillNotifyMessage.GetString
// [0x00026002] 
struct UTGBioSkillNotifyMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioWeaponPickupMessage.GetString
// [0x00026002] 
struct UTGBioWeaponPickupMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGBioGame.TGBioZombieHUD_BaseInfo.UpdateZombieBaseInfo
// [0x00020002] 
struct UTGBioZombieHUD_BaseInfo_execUpdateZombieBaseInfo_Parms
{
	// class ATGBioZombiePawn*                         ZombiePawn;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Percent;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombieHUD_BaseInfo.Tick
// [0x00020002] 
struct UTGBioZombieHUD_BaseInfo_execTick_Parms
{
	// class ULocalPlayer*                             LP;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombieHUD_BaseInfo.Destroyed
// [0x00020802] ( FUNC_Event )
struct UTGBioZombieHUD_BaseInfo_eventDestroyed_Parms
{
};

// Function TGBioGame.TGBioZombieHUD_BaseInfo.PostBeginPlay
// [0x00020900] ( FUNC_Event )
struct UTGBioZombieHUD_BaseInfo_eventPostBeginPlay_Parms
{
};

// Function TGBioGame.TGBioZombieHUD_HeroSelectWeap.UpdateHeroSelectWeapInfo
// [0x00020002] 
struct UTGBioZombieHUD_HeroSelectWeap_execUpdateHeroSelectWeapInfo_Parms
{
	// class ATGBioHumanHeroPawn*                      heroPawn;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Time;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombieHUD_HeroSelectWeap.Tick
// [0x00020002] 
struct UTGBioZombieHUD_HeroSelectWeap_execTick_Parms
{
	// class ULocalPlayer*                             LP;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombieHUD_HeroSelectWeap.Destroyed
// [0x00020802] ( FUNC_Event )
struct UTGBioZombieHUD_HeroSelectWeap_eventDestroyed_Parms
{
};

// Function TGBioGame.TGBioZombieHUD_HeroSelectWeap.PostBeginPlay
// [0x00020900] ( FUNC_Event )
struct UTGBioZombieHUD_HeroSelectWeap_eventPostBeginPlay_Parms
{
};

// Function TGBioGame.TGBioZombieHUD_LevelUpInfo.UpdateLevelUpInfo
// [0x00020002] 
struct UTGBioZombieHUD_LevelUpInfo_execUpdateLevelUpInfo_Parms
{
	// class ATGBioZombiePawn*                         ZombiePawn;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             CurrentLevel;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             CurrentPoint;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombieHUD_LevelUpInfo.Tick
// [0x00020002] 
struct UTGBioZombieHUD_LevelUpInfo_execTick_Parms
{
	// class ULocalPlayer*                             LP;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombieHUD_LevelUpInfo.Destroyed
// [0x00020802] ( FUNC_Event )
struct UTGBioZombieHUD_LevelUpInfo_eventDestroyed_Parms
{
};

// Function TGBioGame.TGBioZombieHUD_LevelUpInfo.PostBeginPlay
// [0x00020900] ( FUNC_Event )
struct UTGBioZombieHUD_LevelUpInfo_eventPostBeginPlay_Parms
{
};

// Function TGBioGame.TGBioZombieHUD_Select.UpdateZombieSelectInfo
// [0x00020002] 
struct UTGBioZombieHUD_Select_execUpdateZombieSelectInfo_Parms
{
	// class ATGBioZombiePawn*                         ZombiePawn;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Time;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombieHUD_Select.Tick
// [0x00020002] 
struct UTGBioZombieHUD_Select_execTick_Parms
{
	// class ULocalPlayer*                             LP;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGBioPlayerReplicationInfo*              PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGBioGame.TGBioZombieHUD_Select.Destroyed
// [0x00020802] ( FUNC_Event )
struct UTGBioZombieHUD_Select_eventDestroyed_Parms
{
};

// Function TGBioGame.TGBioZombieHUD_Select.PostBeginPlay
// [0x00020900] ( FUNC_Event )
struct UTGBioZombieHUD_Select_eventPostBeginPlay_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif