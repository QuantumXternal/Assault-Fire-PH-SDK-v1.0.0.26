/*
#############################################################################################
# Assault Fire (1.0.0.26) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: MechaGame_structs.h
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

// ScriptStruct MechaGame.MechaTypes.MechaBodyStance
// 0x000C
struct FMechaBodyStance
{
	TArray< struct FName >                             AnimName;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct MechaGame.MechaTypes.MechaSpecialMoveStruct
// 0x0010
struct FMechaSpecialMoveStruct
{
	unsigned char                                      SpecialMove;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Flags;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAdditive : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TimeSeconds;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct MechaGame.MechaTypes.MechaPointOfView
// 0x0014
struct FMechaPointOfView
{
	struct FVector                                     Offset;                                           		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              fZAdjust;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOV;                                              		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct MechaGame.MechaBase.MechaTakeHitInfo
// 0x0038
struct FMechaTakeHitInfo
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

// ScriptStruct MechaGame.MechaDestructibleItem.HealthChangeInfo
// 0x0005
struct FHealthChangeInfo
{
	int                                                Health;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGRealMecha.InstigatorInfo
// 0x000C
struct ATGRealMecha_FInstigatorInfo
{
	class ATGMechaPlayerReplicationInfo*               PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AccDamage;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              LastDamageTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct MechaGame.MechaGameHUD.TextInfo
// 0x0024
struct FTextInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FTextureCoordinates                         TextCoords;                                       		// 0x0004 (0x0010) [0x0000000000000000]              
	float                                              Lifetime;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              EndOfLife;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              RelPosY;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  TextImage;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct MechaGame.MechaGameHUD.TextureInfo
// 0x0014
struct FTextureInfo
{
	class UTexture2D*                                  Tex;                                              		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         Coords;                                           		// 0x0004 (0x0010) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct MechaGame.MechaGameHUD.TextMessage
// 0x0010
struct FTextMessage
{
	struct FString                                     Message;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FColor                                      DrawColor;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct MechaGame.MechaGamePlayerController.MechaObjective
// 0x0008
struct FMechaObjective
{
	class AMecha*                                      Objective;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInSight : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEnemy : 1;                                       		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct MechaGame.TGMechaTypes.ReplicatedEffectsInfo
// 0x0010
struct FReplicatedEffectsInfo
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CurrEffectIndex;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFireFromSocketLeft : 1;                          		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFireFromDoubleSideTogether : 1;                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	class UClass*                                      AttachmentClass;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGMechaTypes.GameMechaStat
// 0x002C
struct FGameMechaStat
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                UseTimes;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SurvivalTime;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                GameScore;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TimesKill;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                TimesBeKilled;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                TimesKilledBy;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                TimesKilledBy01;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                TimesKilledBy02;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                TimesKilledBy03;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                TimesKilledBy04;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGMechaTypes.PlayerStat
// 0x001D
struct FPlayerStat
{
	int                                                MechaUseTimes[ 0x5 ];                             		// 0x0000 (0x0014) [0x0000000000000000]              
	int                                                AttackerUseCount;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                DeffenderUseCount;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      TimesDestroyBase;                                 		// 0x001C (0x0001) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGMechaTypes.MechaRoundStat
// 0x0010
struct FMechaRoundStat
{
	unsigned long                                      bAttackerWin : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                DoorOpenTime;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RoundTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                BaseRemainingHP;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGMechaTypes.DoorSwitchStat
// 0x0010
struct FDoorSwitchStat
{
	int                                                AttackerUseCount;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DeffenderUseCount;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AccelerateTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                DecelerateTime;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGMechaTypes.MechaWeaponStat
// 0x000C
struct FMechaWeaponStat
{
	unsigned char                                      MechaType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      WeaponType;                                       		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned long                                      bMainWeapon : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                TotalDamage;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGMechaTypes.MechaAeroProjFireInfo
// 0x0028
struct FMechaAeroProjFireInfo
{
	struct FVector                                     StartLoc;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     StartDir;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     TargetLoc;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	unsigned long                                      bRightSide : 1;                                   		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct MechaGame.MechaTextMessage.MessageInfo
// 0x0010
struct FMessageInfo
{
	struct FString                                     Message;                                          		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FColor                                      Color;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGRealMechaBase.MeshMaterial
// 0x0010
struct FMeshMaterial
{
	class USkeletalMeshComponent*                      Mesh;                                             		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class UMaterialInterface* >                OrigMaterialInstances;                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct MechaGame.TGRealMechaBase.VehicleEffect
// 0x002C
struct ATGRealMechaBase_FVehicleEffect
{
	struct FName                                       EffectStartTag;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       EffectEndTag;                                     		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bRestartRunning : 1;                              		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bReusePSC : 1;                                    		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bHighDetailOnly : 1;                              		// 0x0010 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	class UParticleSystem*                             EffectTemplate;                                   		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             EffectTemplate_Blue;                              		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       EffectSocket;                                     		// 0x001C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              EffectScale;                                      		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    EffectRef;                                        		// 0x0028 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct MechaGame.TGRealMechaBase.VehicleSound
// 0x0020
struct ATGRealMechaBase_FVehicleSound
{
	struct FName                                       SoundStartTag;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SoundEndTag;                                      		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bRestartRunning : 1;                              		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bMultiInstance : 1;                               		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	class USoundCue*                                   SoundTemplate;                                    		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeOutDuration;                                  		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             SoundRef;                                         		// 0x001C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct MechaGame.TGRealMechaBase.AnimationRepInfo
// 0x0014
struct FAnimationRepInfo
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              BlendInTime;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              BlendOutTime;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      UpdateFlag : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct MechaGame.TGRealMechaBase.GroupSkillRepInfo
// 0x0008
struct FGroupSkillRepInfo
{
	class UClass*                                      SkillCompClass;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RepCount;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGRealMecha.Attacker
// 0x0008
struct FAttacker
{
	class ATGRealMecha*                                Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      UpdateFlag : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct MechaGame.TGRealMecha.MechaElectroweldingFixingInfo
// 0x0014
struct FMechaElectroweldingFixingInfo
{
	unsigned long                                      bFixing : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class AActor*                                      FixingActor;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     FixingLocation;                                   		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGMecha_HulkBuster.ShieldItem
// 0x0020
struct FShieldItem
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                     		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMesh*                               SkeletalMesh;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	class UAnimTree*                                   AnimTreeTemplate;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	class UAnimSet*                                    AnimSet;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	struct FName                                       AnimNodeSeqName;                                  		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       SocketName;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGMechaWeapon.RepOverheatInfo
// 0x0008
struct FRepOverheatInfo
{
	unsigned long                                      bMaxOverheatingCooldownComplete : 1;              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrOverheatingValue;                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGMechaGameHUD.TipSoundInfo
// 0x0008
struct FTipSoundInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	class USoundCue*                                   Snd;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGMechaDMHUD.SRadarInfo
// 0x0018
struct FSRadarInfo
{
	class ATGRealMecha*                                Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MIC;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDeleteMe : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector2D                                   Offset;                                           		// 0x000C (0x0008) [0x0000000000000000]              
	float                                              Opacity;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGMechaGamePlayerController.HealthInfo
// 0x0010
struct FHealthInfo
{
	int                                                HealthChange;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bWeakPoint : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LastNotifyHealthTime;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	class ATGRealMecha*                                Mecha;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGMechaGamePlayerController.SmiteInfo
// 0x000C
struct FSmiteInfo
{
	class ATGRealMecha*                                Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CachedSmiteDamage;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              LastCacheSmiteDamageTime;                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGMechaPlayerReplicationInfo.XPIncInfo
// 0x000C
struct FXPIncInfo
{
	float                                              XPInc;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      IncType;                                          		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              LastNotifyTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGMechaProjectile.ExplosionInfo
// 0x0018
struct FExplosionInfo
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGMechaProj_Aerogun.ReplicatedMatrixInfo
// 0x0048
struct FReplicatedMatrixInfo
{
	struct FVectorNoCompress                           ReplicatedMatrix1;                                		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVectorNoCompress                           ReplicatedMatrix2;                                		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVectorNoCompress                           ReplicatedMatrix3;                                		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVectorNoCompress                           ReplicatedMatrix4;                                		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FVectorNoCompress                           ReplicatedMatrix5;                                		// 0x0030 (0x000C) [0x0000000000000000]              
	struct FVectorNoCompress                           ReplicatedMatrix6;                                		// 0x003C (0x000C) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGMechaProj_FlameBeam.TendrilBeam
// 0x001C
struct ATGMechaProj_FlameBeam_FTendrilBeam
{
	class ATurretEmitter*                              BeamEmitter;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class ATurretEmitter*                              SurfaceImpactEmitter;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     OffsetDir;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	float                                              TimeUntilSpawn;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bReadyToSpawn : 1;                                		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct MechaGame.TGMechaSkelCtrl_FlamethrowerScaling.MechaFlameScaleInParams
// 0x0014
struct FMechaFlameScaleInParams
{
	struct FVector2D                                   ScaleInTimeRange;                                 		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   ScaleRange;                                       		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Pow;                                              		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct MechaGame.TGMechaSkelCtrl_FlamethrowerScaling.MechaFlameVelocityScaleParams
// 0x0014
struct FMechaFlameVelocityScaleParams
{
	struct FVector2D                                   VelocityRange;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   ScaleRange;                                       		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Pow;                                              		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct MechaGame.TGMechaSkelCtrl_FlamethrowerScaling.MechaFlameBoneScaleParams
// 0x003C
struct FMechaFlameBoneScaleParams
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              CachedBoneIndex;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bScaleIn : 1;                                     		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FMechaFlameScaleInParams                    ScaleInParams;                                    		// 0x0010 (0x0014) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bScaleWithVelocity : 1;                           		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FMechaFlameVelocityScaleParams              VelocityScaleParams;                              		// 0x0028 (0x0014) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct MechaGame.TGMechaWeap_FlameThrowerSprayBase.MechaFlameBoneInfo
// 0x002C
struct FMechaFlameBoneInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                BoneIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              EffectScale;                                      		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UParticleSystemComponent*                    BonePSC0;                                         		// 0x0010 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    BonePSC1;                                         		// 0x0014 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              SeedChainLoc;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastLoc;                                          		// 0x001C (0x000C) [0x0000000000000000]              
	float                                              ParticleActivationDelay;                          		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct MechaGame.TGMechaWeap_FlameThrowerSprayBase.MechaFlameSprayLight
// 0x0014
struct FMechaFlameSprayLight
{
	class UPointLightComponent*                        Light;                                            		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                BoneChainIndex;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              FlickerIntensity;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              FlickerInterpSpeed;                               		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              LastLightBrightness;                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGMechaWeap_FlameThrowerSprayBase.MechaFlameSpraySeed
// 0x001C
struct FMechaFlameSpraySeed
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              Age;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct MechaGame.TGMechaWeap_FlameThrowerSprayBase.MechaFlameMeshContact
// 0x0024
struct FMechaFlameMeshContact
{
	int                                                BoneChainIndex;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      Actor;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     ContactPosition;                                  		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     ContactNormal;                                    		// 0x0014 (0x000C) [0x0000000000000000]              
	class UPhysicalMaterial*                           PhysicalMaterial;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif