/*
#############################################################################################
# Assault Fire (1.0.0.26) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TGTankGame_f_structs.h
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

// Function TGTankGame.TGTankProjectile.GetRange
// [0x00022102] 
struct ATGTankProjectile_execGetRange_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           AccelTime;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankProjectile.GetTimeToLocation
// [0x00020102] 
struct ATGTankProjectile_execGetTimeToLocation_Parms
{
	struct FVector                                     TargetLoc;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankProjectile.StaticGetTimeToLocation
// [0x00022102] 
struct ATGTankProjectile_execStaticGetTimeToLocation_Parms
{
	struct FVector                                     TargetLoc;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     StartLoc;                                         		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 RequestedBy;                                      		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankProjectile.CalculateTravelTime
// [0x00022003] ( FUNC_Final )
struct ATGTankProjectile_execCalculateTravelTime_Parms
{
	float                                              Dist;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              MoveSpeed;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              MaxMoveSpeed;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              AccelMag;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           ProjTime;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           AccelTime;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           AccelDist;                                        		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankProjectile.GetPawnOwner
// [0x00020100] 
struct ATGTankProjectile_execGetPawnOwner_Parms
{
	class APawn*                                       ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankProjectile.GetHomingTarget
// [0x00020802] ( FUNC_Event )
struct ATGTankProjectile_eventGetHomingTarget_Parms
{
	class AUTProjectile*                               Seeker;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankProjectile.CalcCamera
// [0x00420102] 
struct ATGTankProjectile_execCalcCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_FOV;                                          		// 0x001C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankProjectile.MyOnParticleSystemFinished
// [0x00020102] 
struct ATGTankProjectile_execMyOnParticleSystemFinished_Parms
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function TGTankGame.TGTankProjectile.Destroyed
// [0x00020102] 
struct ATGTankProjectile_execDestroyed_Parms
{
};

// Function TGTankGame.TGTankProjectile.HideProjectile
// [0x00020102] 
struct ATGTankProjectile_execHideProjectile_Parms
{
	// class UMeshComponent*                           ComponentIt;                                      		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGTankGame.TGTankProjectile.TornOff
// [0x00020802] ( FUNC_Event )
struct ATGTankProjectile_eventTornOff_Parms
{
};

// Function TGTankGame.TGTankProjectile.ShutDown
// [0x00820102] 
struct ATGTankProjectile_execShutDown_Parms
{
	// struct FVector                                  HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function TGTankGame.TGTankProjectile.ShouldSpawnExplosionLight
// [0x00020102] 
struct ATGTankProjectile_execShouldSpawnExplosionLight_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APlayerController*                        P;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankProjectile.SpawnExplosionEffects
// [0x00820102] 
struct ATGTankProjectile_execSpawnExplosionEffects_Parms
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
};

// Function TGTankGame.TGTankProjectile.SetExplosionEffectParameters
// [0x00020100] 
struct ATGTankProjectile_execSetExplosionEffectParameters_Parms
{
	class UParticleSystemComponent*                    ProjExplosion;                                    		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function TGTankGame.TGTankProjectile.SpawnFlightEffects
// [0x00020102] 
struct ATGTankProjectile_execSpawnFlightEffects_Parms
{
};

// Function TGTankGame.TGTankProjectile.Explode
// [0x00020102] 
struct ATGTankProjectile_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankProjectile.ProcessTouch
// [0x00020102] 
struct ATGTankProjectile_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankProjectile.Init
// [0x00020002] 
struct ATGTankProjectile_execInit_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankProjectile.SetInitialState
// [0x00020902] ( FUNC_Event )
struct ATGTankProjectile_eventSetInitialState_Parms
{
};

// Function TGTankGame.TGTankProjectile.PostBeginPlay
// [0x00020102] 
struct ATGTankProjectile_execPostBeginPlay_Parms
{
	// class UAudioComponent*                          AmbientComponent;                                 		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGTankGame.TGTankProjectile.PreBeginPlay
// [0x00020802] ( FUNC_Event )
struct ATGTankProjectile_eventPreBeginPlay_Parms
{
	// class AUTWeaponPawn*                            WeaponPawn;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankProjectile.CanSplash
// [0x00020102] 
struct ATGTankProjectile_execCanSplash_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankProjectile.Landed
// [0x00020902] ( FUNC_Event )
struct ATGTankProjectile_eventLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankProjectile.CreateProjectileLight
// [0x00020900] ( FUNC_Event )
struct ATGTankProjectile_eventCreateProjectileLight_Parms
{
};

// Function TGTankGame.TGTankTMGameReplicationInfo.InOrder
// [0x00020102] 
struct ATGTankTMGameReplicationInfo_execInOrder_Parms
{
	class APlayerReplicationInfo*                      P1;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      P2;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGTankTMPlayerReplicationInfo*           PRI1;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// class ATGTankTMPlayerReplicationInfo*           PRI2;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMGameReplicationInfo.CalcKillDistStatis
// [0x00020002] 
struct ATGTankTMGameReplicationInfo_execCalcKillDistStatis_Parms
{
	struct FVector                                     KillerLoc;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     KilledLoc;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// int                                             KillDistMeter;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMGameReplicationInfo.ProcessCharacterData
// [0x00024120] 
struct ATGTankTMGameReplicationInfo_execProcessCharacterData_Parms
{
	class ATGPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTeamChange : 1;                                  		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TGTankGame.TGTankTMGameReplicationInfo.BeginProcessCharacterData
// [0x00024100] 
struct ATGTankTMGameReplicationInfo_execBeginProcessCharacterData_Parms
{
	class ATGPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTeamChange : 1;                                  		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TGTankGame.TGTankTMGameReplicationInfo.StartProcessingCharacterData
// [0x00020100] 
struct ATGTankTMGameReplicationInfo_execStartProcessingCharacterData_Parms
{
};

// Function TGTankGame.TGTankTMPlayerController.FractureActorDestroyed
// [0x002200C2] 
struct ATGTankTMPlayerController_execFractureActorDestroyed_Parms
{
	class AFracturedStaticMeshActor*                   fracturedActor;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGTankTMPlayerReplicationInfo*           TankPRI;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.NotifyClientAssistance
// [0x010201C2] 
struct ATGTankTMPlayerController_execNotifyClientAssistance_Parms
{
};

// Function TGTankGame.TGTankTMPlayerController.ClientSetRespawnStartTime
// [0x010201C2] 
struct ATGTankTMPlayerController_execClientSetRespawnStartTime_Parms
{
	float                                              RespTime;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              RespDelay;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankTMPlayerController.PlayCameraShake
// [0x00024002] 
struct ATGTankTMPlayerController_execPlayCameraShake_Parms
{
	class UCameraShake*                                Shake;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Epicenter;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              ShakeInnerRadius;                                 		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ShakeOuterRadius;                                 		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Falloff;                                          		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ATGRealTank*                              Tank;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           ShakeScale;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.AdjustFOV
// [0x00020002] 
struct ATGTankTMPlayerController_execAdjustFOV_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           DeltaFOV;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.AcknowledgePossession
// [0x00020002] 
struct ATGTankTMPlayerController_execAcknowledgePossession_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankTMPlayerController.ClientSetDeathCamera
// [0x010201C2] 
struct ATGTankTMPlayerController_execClientSetDeathCamera_Parms
{
	struct FVector                                     CamLoc;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    CamRot;                                           		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankTMPlayerController.CalcCamera
// [0x00C20102] 
struct ATGTankTMPlayerController_execCalcCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_FOV;                                          		// 0x001C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  TraceDir;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 TestRot;                                          		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0048 (0x000C) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.GetPlayerViewPoint
// [0x00420902] ( FUNC_Event )
struct ATGTankTMPlayerController_eventGetPlayerViewPoint_Parms
{
	struct FVector                                     POVLocation;                                      		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    POVRotation;                                      		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// float                                           DeltaTime;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// class AUTPawn*                                  P;                                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.SetMouseDriveStrafe
// [0x00820102] 
struct ATGTankTMPlayerController_execSetMouseDriveStrafe_Parms
{
	struct FRotator                                    cameraRot;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealTank*                              TGTank;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FRotator                                 LocalTankRot;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	// class UTGVehicleSimTank*                        SimTank;                                          		// 0x001C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGTankGame.TGTankTMPlayerController.DrawObjective
// [0x00820102] 
struct ATGTankTMPlayerController_execDrawObjective_Parms
{
	class ATGTankTMHUD*                                H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGRealTankBase*                             Objective;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UTexture2D*                               IconTex;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               FrameTex;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FVector                                  ViewPoint;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AxeX;                                             		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  AxeY;                                             		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AxeZ;                                             		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x004C (0x000C) [0x0000000000000000]              
	// float                                           OldOrgX;                                          		// 0x0058 (0x0004) [0x0000000000000000]              
	// float                                           OldOrgY;                                          		// 0x005C (0x0004) [0x0000000000000000]              
	// float                                           OldClipX;                                         		// 0x0060 (0x0004) [0x0000000000000000]              
	// float                                           OldClipY;                                         		// 0x0064 (0x0004) [0x0000000000000000]              
	// float                                           DrawSize;                                         		// 0x0068 (0x0004) [0x0000000000000000]              
	// float                                           SizeScale;                                        		// 0x006C (0x0004) [0x0000000000000000]              
	// float                                           PosX;                                             		// 0x0070 (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x0074 (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0078 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x007C (0x0004) [0x0000000000000000]              
	// float                                           ObjectiveDist;                                    		// 0x0080 (0x0004) [0x0000000000000000]              
	// float                                           HealthPct;                                        		// 0x0084 (0x0004) [0x0000000000000000]              
	// unsigned long                                   InTheFront : 1;                                   		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  ObjName;                                          		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGTankGame.TGTankTMPlayerController.DrawObjectives
// [0x00020102] 
struct ATGTankTMPlayerController_execDrawObjectives_Parms
{
	class ATGTankTMHUD*                                H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.DrawHUD
// [0x00020002] 
struct ATGTankTMPlayerController_execDrawHUD_Parms
{
	class AHUD*                                        H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankTMPlayerController.ClientReset
// [0x010201C2] 
struct ATGTankTMPlayerController_execClientReset_Parms
{
};

// Function TGTankGame.TGTankTMPlayerController.EndSelectionFadeOut
// [0x00020002] 
struct ATGTankTMPlayerController_execEndSelectionFadeOut_Parms
{
};

// Function TGTankGame.TGTankTMPlayerController.StartFadeOutSelection
// [0x00020002] 
struct ATGTankTMPlayerController_execStartFadeOutSelection_Parms
{
};

// Function TGTankGame.TGTankTMPlayerController.EndSelectingTankType
// [0x00020002] 
struct ATGTankTMPlayerController_execEndSelectingTankType_Parms
{
	// class ATGTankTMPlayerReplicationInfo*           TankPRI;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.EndZoom
// [0x00020102] 
struct ATGTankTMPlayerController_execEndZoom_Parms
{
};

// Function TGTankGame.TGTankTMPlayerController.ClientRestart
// [0x010201C2] 
struct ATGTankTMPlayerController_execClientRestart_Parms
{
	class APawn*                                       NewPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankTMPlayerController.ClientEnableTankSelection
// [0x010201C2] 
struct ATGTankTMPlayerController_execClientEnableTankSelection_Parms
{
};

// Function TGTankGame.TGTankTMPlayerController.NotifyTankDied
// [0x00020102] 
struct ATGTankTMPlayerController_execNotifyTankDied_Parms
{
	class ATGRealTank*                                 Tank;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             FindIdx;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGTankTMPlayerReplicationInfo*           TankPRI;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.ClearSeeObjectives
// [0x00020102] 
struct ATGTankTMPlayerController_execClearSeeObjectives_Parms
{
};

// Function TGTankGame.TGTankTMPlayerController.ClearInvisibleObjectives
// [0x00020102] 
struct ATGTankTMPlayerController_execClearInvisibleObjectives_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.IsOjbectiveInsight
// [0x00020102] 
struct ATGTankTMPlayerController_execIsOjbectiveInsight_Parms
{
	class ATGRealTank*                                 Tank;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             FindIdx;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.AddSeeOjbective
// [0x00820102] 
struct ATGTankTMPlayerController_execAddSeeOjbective_Parms
{
	class ATGRealTank*                                 Tank;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FSeeObjective                            Obj;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             FindIdx;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.PlayerTick
// [0x00020802] ( FUNC_Event )
struct ATGTankTMPlayerController_eventPlayerTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealTank*                              Tank;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.NotifyClientHitEnemy
// [0x010201C2] 
struct ATGTankTMPlayerController_execNotifyClientHitEnemy_Parms
{
	struct FTankTargetHitInfo                          HitInfoArray[ 0x4 ];                              		// 0x0000 (0x0030) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDirectHit : 1;                                   		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bKilled : 1;                                      		// 0x0034 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGTankTMHUD*                             BaseHUD;                                          		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             DamageHP;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             DamageAC;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.NextWeapon
// [0x00020202] ( FUNC_Exec )
struct ATGTankTMPlayerController_execNextWeapon_Parms
{
	// class ATGRealTank*                              TGTank;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGTankWeap_Turret*                       Turret;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.PrevWeapon
// [0x00020202] ( FUNC_Exec )
struct ATGTankTMPlayerController_execPrevWeapon_Parms
{
	// class ATGRealTank*                              TGTank;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGTankWeap_Turret*                       Turret;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.Hit
// [0x00020202] ( FUNC_Exec )
struct ATGTankTMPlayerController_execHit_Parms
{
	int                                                DamageHP;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                DamageAC;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGTankTMHUD*                             BaseHUD;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.Damage
// [0x00024202] ( FUNC_Exec )
struct ATGTankTMPlayerController_execDamage_Parms
{
	int                                                HitGroup;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                AC;                                               		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ATGRealTank*                              Tank;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.Lift
// [0x00824202] ( FUNC_Exec )
struct ATGTankTMPlayerController_execLift_Parms
{
	float                                              Factor;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ATGRealTank*                              Tank;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Impluse;                                          		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.ServerSetHealth
// [0x00220042] 
struct ATGTankTMPlayerController_execServerSetHealth_Parms
{
	int                                                NewHealth;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankTMPlayerController.SetHealth
// [0x00020202] ( FUNC_Exec )
struct ATGTankTMPlayerController_execSetHealth_Parms
{
	int                                                NewHealth;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankTMPlayerController.SetDrivingTank
// [0x00020002] 
struct ATGTankTMPlayerController_execSetDrivingTank_Parms
{
	class ATGRealTank*                                 Tank;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankTMPlayerController.DriveTank
// [0x00020002] 
struct ATGTankTMPlayerController_execDriveTank_Parms
{
	// class ATGTankFactory*                           TF;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGRealTank*                              Tank;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bDriveSuccess : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGTankGame.TGTankTMPlayerController.GetTankFactory
// [0x00020002] 
struct ATGTankTMPlayerController_execGetTankFactory_Parms
{
	class ATGTankFactory*                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGTankFactory*                           TF;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.GetTankFactoryType
// [0x00020002] 
struct ATGTankTMPlayerController_execGetTankFactoryType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGTankTMPlayerReplicationInfo*           PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.ServerChangeTankType
// [0x002200C2] 
struct ATGTankTMPlayerController_execServerChangeTankType_Parms
{
	unsigned char                                      ExpectedTankType;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ATGTankTMPlayerReplicationInfo*           PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerController.InitInputSystem
// [0x00020802] ( FUNC_Event )
struct ATGTankTMPlayerController_eventInitInputSystem_Parms
{
};

// Function TGTankGame.TGTankTMPlayerController.Destroyed
// [0x00020902] ( FUNC_Event )
struct ATGTankTMPlayerController_eventDestroyed_Parms
{
};

// Function TGTankGame.TGTankTMPlayerController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGTankTMPlayerController_eventPostBeginPlay_Parms
{
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.NeedLicenseFor
// [0x00020102] 
struct ATGTankTMPlayerReplicationInfo_execNeedLicenseFor_Parms
{
	unsigned char                                      NewType;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             FindIdx;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.HasLicenseFor
// [0x00020102] 
struct ATGTankTMPlayerReplicationInfo_execHasLicenseFor_Parms
{
	unsigned char                                      NewType;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.HasLicense
// [0x00020102] 
struct ATGTankTMPlayerReplicationInfo_execHasLicense_Parms
{
	unsigned char                                      LicenseType;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.AddLicense
// [0x00020002] 
struct ATGTankTMPlayerReplicationInfo_execAddLicense_Parms
{
	unsigned char                                      LicenseType;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.CaluUseMouse
// [0x002200C2] 
struct ATGTankTMPlayerReplicationInfo_execCaluUseMouse_Parms
{
	unsigned long                                      bHaveUseTankMouse : 1;                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.CaluTankUser
// [0x002200C2] 
struct ATGTankTMPlayerReplicationInfo_execCaluTankUser_Parms
{
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.GetGameScoreForSort
// [0x00020102] 
struct ATGTankTMPlayerReplicationInfo_execGetGameScoreForSort_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.GetMvpValue
// [0x00020002] 
struct ATGTankTMPlayerReplicationInfo_execGetMvpValue_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.GetGameScore
// [0x00020002] 
struct ATGTankTMPlayerReplicationInfo_execGetGameScore_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             DamageScore;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             KillScore;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             AssistScore;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             NewGameScore;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.CalcFireTimes
// [0x00020002] 
struct ATGTankTMPlayerReplicationInfo_execCalcFireTimes_Parms
{
	unsigned char                                      ShellType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.SetTankType
// [0x00020002] 
struct ATGTankTMPlayerReplicationInfo_execSetTankType_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankTMPlayerReplicationInfo.SetPlayerTeam
// [0x00020002] 
struct ATGTankTMPlayerReplicationInfo_execSetPlayerTeam_Parms
{
	class ATeamInfo*                                   NewTeam;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGRealTankBase.Tick
// [0x00020902] ( FUNC_Event )
struct ATGRealTankBase_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGRealTankBase.RigidBodyCollision
// [0x00C20902] ( FUNC_Event )
struct ATGRealTankBase_eventRigidBodyCollision_Parms
{
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class UPrimitiveComponent*                         OtherComponent;                                   		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FCollisionImpactData                        Collision;                                        		// 0x0008 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ContactIndex;                                     		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AFracturedStaticMeshActor*                fracturedActor;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FVector                                  tankMomentum;                                     		// 0x0034 (0x000C) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTankBase.Destroyed
// [0x00020102] 
struct ATGRealTankBase_execDestroyed_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTankBase.GetHumanReadableName
// [0x00020102] 
struct ATGRealTankBase_execGetHumanReadableName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGTankGame.TGRealTankBase.ClientRestart
// [0x00020102] 
struct ATGRealTankBase_execClientRestart_Parms
{
};

// Function TGTankGame.TGRealTankBase.SetTurretDesiredRotation
// [0x00020102] 
struct ATGRealTankBase_execSetTurretDesiredRotation_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTankBase.VehicleAdjustFlashCount
// [0x00024102] 
struct ATGRealTankBase_execVehicleAdjustFlashCount_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FireModeNum;                                      		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bClear : 1;                                       		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TGTankGame.TGRealTankBase.CalcCamera
// [0x00420102] 
struct ATGRealTankBase_execCalcCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_FOV;                                          		// 0x001C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGTankGame.TGRealTankBase.PostBeginPlay
// [0x00020102] 
struct ATGRealTankBase_execPostBeginPlay_Parms
{
};

// Function TGTankGame.TGRealTankBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGRealTankBase_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGRealTankBase.TerminateRBPhys
// [0x00020500] ( FUNC_Native )
struct ATGRealTankBase_execTerminateRBPhys_Parms
{
};

// Function TGTankGame.TGRealTankBase.ReInitRBPhys
// [0x00020500] ( FUNC_Native )
struct ATGRealTankBase_execReInitRBPhys_Parms
{
};

// Function TGTankGame.TGRealTankBase.ClientSyncVStateToServer
// [0x00020900] ( FUNC_Event )
struct ATGRealTankBase_eventClientSyncVStateToServer_Parms
{
	float                                              ClientTimeStamp;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGRealTankBase.TransTurretRotation
// [0x00020400] ( FUNC_Native )
struct ATGRealTankBase_execTransTurretRotation_Parms
{
	struct FRotator                                    TurretRot;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFromWorldToLocal : 1;                            		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGRealTankBase.ClearVState
// [0x00020400] ( FUNC_Native )
struct ATGRealTankBase_execClearVState_Parms
{
};

// Function TGTankGame.TGRealTankBase.ServerSetTankPosition
// [0x00020400] ( FUNC_Native )
struct ATGRealTankBase_execServerSetTankPosition_Parms
{
	struct FTankState                                  NewTankState;                                     		// 0x0000 (0x0044) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGRealTankBase.AttachToScene
// [0x00020500] ( FUNC_Native )
struct ATGRealTankBase_execAttachToScene_Parms
{
	class USkeletalMeshComponent*                      MeshComponent;                                    		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class AActor*                                      InOwner;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankWeap_Turret.PlayFiringSound
// [0x00020102] 
struct ATGTankWeap_Turret_execPlayFiringSound_Parms
{
	// class ATGRealTank*                              TGTank;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankWeap_Turret.GetHumanReadableName
// [0x00020102] 
struct ATGTankWeap_Turret_execGetHumanReadableName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGTankGame.TGTankWeap_Turret.GetCurrReloadTime
// [0x00020102] 
struct ATGTankWeap_Turret_execGetCurrReloadTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankWeap_Turret.OnShellReloadTimer
// [0x00020102] 
struct ATGTankWeap_Turret_execOnShellReloadTimer_Parms
{
};

// Function TGTankGame.TGTankWeap_Turret.ServerStartFire
// [0x002200C2] 
struct ATGTankWeap_Turret_execServerStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankWeap_Turret.StartFire
// [0x00020102] 
struct ATGTankWeap_Turret_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankWeap_Turret.AddAmmo
// [0x00020102] 
struct ATGTankWeap_Turret_execAddAmmo_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGTankTMPlayerReplicationInfo*           PRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Result;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankWeap_Turret.HasAmmo
// [0x00024102] 
struct ATGTankWeap_Turret_execHasAmmo_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Amount;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankWeap_Turret.InitAmmoBox
// [0x00020100] 
struct ATGTankWeap_Turret_execInitAmmoBox_Parms
{
};

// Function TGTankGame.TGTankWeap_Turret.OnSetAimDisperseTimer
// [0x00020102] 
struct ATGTankWeap_Turret_execOnSetAimDisperseTimer_Parms
{
	// class ATGRealTank*                              TGTank;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankWeap_Turret.Tick
// [0x00020902] ( FUNC_Event )
struct ATGTankWeap_Turret_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UTGVehicleSimTank*                        SimTank;                                          		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGTankGame.TGTankWeap_Turret.GetFireInterval
// [0x00020102] 
struct ATGTankWeap_Turret_execGetFireInterval_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           interval;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankWeap_Turret.ServerSetCurrentShellType
// [0x002200C2] 
struct ATGTankWeap_Turret_execServerSetCurrentShellType_Parms
{
	unsigned char                                      DisiredShellType;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// float                                           CurrFireInterval;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankWeap_Turret.SwitchToLastUsedWeapon
// [0x00020102] 
struct ATGTankWeap_Turret_execSwitchToLastUsedWeapon_Parms
{
};

// Function TGTankGame.TGTankWeap_Turret.GetWeaponIconCoords
// [0x00020102] 
struct ATGTankWeap_Turret_execGetWeaponIconCoords_Parms
{
	struct FTextureCoordinates                         ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankWeap_Turret.GetCurrentWeaponName
// [0x00020102] 
struct ATGTankWeap_Turret_execGetCurrentWeaponName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGTankGame.TGTankWeap_Turret.PlayReloadCompleteSound
// [0x00020102] 
struct ATGTankWeap_Turret_execPlayReloadCompleteSound_Parms
{
	// class ATGRealTank*                              TGTank;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankWeap_Turret.SetCurrentShellType
// [0x00020102] 
struct ATGTankWeap_Turret_execSetCurrentShellType_Parms
{
	unsigned char                                      DisiredShellType;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// float                                           CurrFireInterval;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankWeap_Turret.CheckTankSehllLocaionAndAim
// [0x00C20002] 
struct ATGTankWeap_Turret_execCheckTankSehllLocaionAndAim_Parms
{
	struct FRotator                                    TurretAim;                                        		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     FireStartLocation;                                		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FVector                                  ServerFireStartLocation;                          		// 0x0018 (0x000C) [0x0000000000000000]              
	// float                                           FireLocationCheck;                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankWeap_Turret.TankShellFire
// [0x00A200C2] 
struct ATGTankWeap_Turret_execTankShellFire_Parms
{
	int                                                InYaw;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                InPitch;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                InRoll;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           InLocation;                                       		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ATGTankProj_Shell*                        SpawnedProjectile;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  AimDirection;                                     		// 0x001C (0x000C) [0x0000000000000000]              
	// class UClass*                                   ShellClass;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	// class ATGRealTank*                              TGTank;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FRotator                                 TurretAim;                                        		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FireStartLocation;                                		// 0x003C (0x000C) [0x0000000000000000]              
	// class ATGGame*                                  tGame;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankWeap_Turret.ProjectileFire
// [0x00820102] 
struct ATGTankWeap_Turret_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  ForceLoc;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FireStartLocation;                                		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimDirection;                                     		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ProjVelocity;                                     		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 WeaponAim;                                        		// 0x0034 (0x000C) [0x0000000000000000]              
	// class ATGRealTank*                              TGTank;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankWeap_Turret.ModifyAimDirection
// [0x00820102] 
struct ATGTankWeap_Turret_execModifyAimDirection_Parms
{
	struct FRotator                                    AimRotation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  AimX;                                             		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimY;                                             		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimZ;                                             		// 0x0030 (0x000C) [0x0000000000000000]              
	// float                                           randX;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           RandY;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankWeap_Turret.ClientSetAmmoBoxShellList
// [0x010201C2] 
struct ATGTankWeap_Turret_execClientSetAmmoBoxShellList_Parms
{
	struct FTGTankAmmoInfo                             NewTankShellList[ 0x3 ];                          		// 0x0000 (0x0030) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Index;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankWeap_Turret.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGTankWeap_Turret_eventPostBeginPlay_Parms
{
};

// Function TGTankGame.TGTankWeap_Turret.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGTankWeap_Turret_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankWeapon.GetCurrReloadTime
// [0x00020102] 
struct ATGTankWeapon_execGetCurrReloadTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankWeapon.ShakeView
// [0x00020100] 
struct ATGTankWeapon_execShakeView_Parms
{
};

// Function TGTankGame.TGTankWeapon.TankShakeView
// [0x00020102] 
struct ATGTankWeapon_execTankShakeView_Parms
{
	class UCameraAnim*                                 CurrCameraAnim;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTPlayerController*                      PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankWeapon.SetZoom
// [0x00020102] 
struct ATGTankWeapon_execSetZoom_Parms
{
	unsigned char                                      ZoomSwitchingTo;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class AUTPlayerController*                      PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGRealTank*                              TGTank;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankWeapon.CheckZoom
// [0x00020102] 
struct ATGTankWeapon_execCheckZoom_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTPlayerController*                      PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGRealTank*                              TGTank;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankWeapon.DrawWeaponCrosshair
// [0x00020100] 
struct ATGTankWeapon_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGRealTank.RigidBodyCollision
// [0x00C20902] ( FUNC_Event )
struct ATGRealTank_eventRigidBodyCollision_Parms
{
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class UPrimitiveComponent*                         OtherComponent;                                   		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FCollisionImpactData                        Collision;                                        		// 0x0008 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ContactIndex;                                     		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealTankBase*                          ThisTank;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// class ATGRealTankBase*                          OtherTank;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	// class USoundCue*                                CollisionSnd;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bCollideWithTank : 1;                             		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           IntervalSecs;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           LastSoundTime;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           VelMag;                                           		// 0x0048 (0x0004) [0x0000000000000000]              
	// struct FVector                                  RelVel;                                           		// 0x004C (0x000C) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.RecommendLongRangedAttack
// [0x00020002] 
struct ATGRealTank_execRecommendLongRangedAttack_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGRealTank.ImportantVehicle
// [0x00020002] 
struct ATGRealTank_execImportantVehicle_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGRealTank.DisplayWheelsDebug
// [0x00820102] 
struct ATGRealTank_execDisplayWheelsDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              YL;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  WorldLoc;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndPoint;                                         		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenEndPoint;                                   		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FColor                                   SaveColor;                                        		// 0x0060 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.GetSVehicleDebug
// [0x00420102] 
struct ATGRealTank_execGetSVehicleDebug_Parms
{
	TArray< struct FString >                           DebugInfo;                                        		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TGTankGame.TGRealTank.AddAmmo
// [0x00020002] 
struct ATGRealTank_execAddAmmo_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGRealTank.Repair
// [0x00020002] 
struct ATGRealTank_execRepair_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGTankTMPlayerReplicationInfo*           TankPRI;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.ServerUsePickup
// [0x002200C2] 
struct ATGRealTank_execServerUsePickup_Parms
{
	class ATGTankPickupFactory*                        Pickup;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bUseSuccess : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGTankGame.TGRealTank.CanAddAmmo
// [0x00020102] 
struct ATGRealTank_execCanAddAmmo_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGRealTank.CanBeRepaired
// [0x00020102] 
struct ATGRealTank_execCanBeRepaired_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGRealTank.CanUsePickup
// [0x00020102] 
struct ATGRealTank_execCanUsePickup_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGRealTank.StopEngineSound
// [0x00020102] 
struct ATGRealTank_execStopEngineSound_Parms
{
};

// Function TGTankGame.TGRealTank.StartEngineSound
// [0x00020102] 
struct ATGRealTank_execStartEngineSound_Parms
{
	// unsigned long                                   bLocal : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGTankGame.TGRealTank.HasSmokeGrenade
// [0x00020102] 
struct ATGRealTank_execHasSmokeGrenade_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGRealTank.FireSmokeGrenade
// [0x00020102] 
struct ATGRealTank_execFireSmokeGrenade_Parms
{
};

// Function TGTankGame.TGRealTank.OnRadarJammingActiveTimer
// [0x00020102] 
struct ATGRealTank_execOnRadarJammingActiveTimer_Parms
{
};

// Function TGTankGame.TGRealTank.ServerFireSmokeGrenade
// [0x002200C2] 
struct ATGRealTank_execServerFireSmokeGrenade_Parms
{
	// class ATGTankTMPlayerReplicationInfo*           PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.ResetDamageThrottleDecrease
// [0x00020002] 
struct ATGRealTank_execResetDamageThrottleDecrease_Parms
{
};

// Function TGTankGame.TGRealTank.ClientSetThrottle
// [0x010201C2] 
struct ATGRealTank_execClientSetThrottle_Parms
{
	float                                              ActualThrottle;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGRealTank.NotifyThrottleDecrease
// [0x00020002] 
struct ATGRealTank_execNotifyThrottleDecrease_Parms
{
	unsigned long                                      bDirectHit : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UTGVehicleSimTank*                        SimTank;                                          		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// float                                           ActualThrottleDecreasePct;                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.GetDriverPC
// [0x00020002] 
struct ATGRealTank_execGetDriverPC_Parms
{
	class ATGTankTMPlayerController*                   ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGTankTMPlayerController*                PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.AddTechStatsInfo
// [0x00020002] 
struct ATGRealTank_execAddTechStatsInfo_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bKilled : 1;                                      		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                MaxHealth;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGPlayerReplicationInfo*                 InstigatorPRI;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	// class AController*                              SelfController;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.NotifyTakeHit
// [0x00020002] 
struct ATGRealTank_execNotifyTakeHit_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGRealTank.NotifyBeHit
// [0x00824002] 
struct ATGRealTank_execNotifyBeHit_Parms
{
	TArray< struct FTankTargetHitInfo >                TankHitInfoList;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class AController*                                 InstigatorController;                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDirectHit : 1;                                   		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     HitOrigin;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageRadius;                                     		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Impulse;                                          		// 0x0024 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ATGTankTMPlayerController*                InstigatorPC;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FTankTargetHitInfo                       HitInfoArray[ 0x4 ];                              		// 0x0034 (0x0030) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0064 (0x0004) [0x0000000000000000]              
	// int                                             HealthDamage;                                     		// 0x0068 (0x0004) [0x0000000000000000]              
	// class ATGTankTMPlayerReplicationInfo*           PRI;                                              		// 0x006C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.SetOnCrosshair
// [0x00020102] 
struct ATGRealTank_execSetOnCrosshair_Parms
{
	unsigned long                                      bOnCrosshair : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           BodyEmissive;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.PanTreads
// [0x00040103] ( FUNC_Final )
struct ATGRealTank_execPanTreads_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UTGVehicleSimTank*                        SimTank;                                          		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGTankGame.TGRealTank.TankExhaust
// [0x00040103] ( FUNC_Final )
struct ATGRealTank_execTankExhaust_Parms
{
};

// Function TGTankGame.TGRealTank.PancakeOther
// [0x00020002] 
struct ATGRealTank_execPancakeOther_Parms
{
	class APawn*                                       Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGRealTank.RanInto
// [0x00020802] ( FUNC_Event )
struct ATGRealTank_eventRanInto_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGRealTank.AdjustFOVAngle
// [0x00020102] 
struct ATGRealTank_execAdjustFOVAngle_Parms
{
	float                                              FOVAngle;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGRealTank.ServerSetTryBoost
// [0x002200C2] 
struct ATGRealTank_execServerSetTryBoost_Parms
{
	unsigned long                                      Try : 1;                                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TGTankGame.TGRealTank.GetNormalFOV
// [0x00020102] 
struct ATGRealTank_execGetNormalFOV_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGRealTank.DeactivateRocketBoosters
// [0x00020902] ( FUNC_Event )
struct ATGRealTank_eventDeactivateRocketBoosters_Parms
{
	// class ATGPlayerController*                      PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.ActivateRocketBoosters
// [0x00020902] ( FUNC_Event )
struct ATGRealTank_eventActivateRocketBoosters_Parms
{
};

// Function TGTankGame.TGRealTank.Tick
// [0x00020902] ( FUNC_Event )
struct ATGRealTank_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           MaxEngineTorqueMultiplier;                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.SetInputs
// [0x00020102] 
struct ATGRealTank_execSetInputs_Parms
{
	float                                              InForward;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InStrafe;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InUp;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UTGTankTMPlayerInput*                     TankPlayerInput;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.GetHealthPct
// [0x00020102] 
struct ATGRealTank_execGetHealthPct_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           HealthPct;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.PostRenderFor
// [0x00820902] ( FUNC_Event )
struct ATGRealTank_eventPostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// float                                           TextXL;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           DistXL;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           HealthY;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           MaxOffset;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FLinearColor                             TeamColor;                                        		// 0x0048 (0x0010) [0x0000000000000000]              
	// struct FColor                                   TextColor;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	// struct FString                                  ScreenName;                                       		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  DistString;                                       		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class AUTWeapon*                                Weap;                                             		// 0x0074 (0x0004) [0x0000000000000000]              
	// class AUTHUDBase*                               HUD;                                              		// 0x0078 (0x0004) [0x0000000000000000]              
	// class ATGPlayerController*                      TGPC;                                             		// 0x007C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.SetVehicleEffectParms
// [0x00020100] 
struct ATGRealTank_execSetVehicleEffectParms_Parms
{
	struct FName                                       TriggerName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystemComponent*                    PSC;                                              		// 0x0008 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function TGTankGame.TGRealTank.CheckDamageEffect
// [0x00020102] 
struct ATGRealTank_execCheckDamageEffect_Parms
{
};

// Function TGTankGame.TGRealTank.NotifyClientTakeDamage
// [0x010241C2] 
struct ATGRealTank_execNotifyClientTakeDamage_Parms
{
	struct FTankTargetHitInfo                          HitInfoArray[ 0x4 ];                              		// 0x0000 (0x0030) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDirectHit : 1;                                   		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     HitOrigin;                                        		// 0x0034 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     Impulse;                                          		// 0x0040 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             Idx;                                              		// 0x004C (0x0004) [0x0000000000000000]              
	// class UCameraAnim*                              ImpactedCameraAnim;                               		// 0x0050 (0x0004) [0x0000000000000000]              
	// class ATGTankWeap_Turret*                       Turret;                                           		// 0x0054 (0x0004) [0x0000000000000000]              
	// int                                             TotalDamage;                                      		// 0x0058 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.DisplayTankHud
// [0x00020102] 
struct ATGRealTank_execDisplayTankHud_Parms
{
	class AUTHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGRealTank.DisplayHud
// [0x00024100] 
struct ATGRealTank_execDisplayHud_Parms
{
	class AUTHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   HudPOS;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TGTankGame.TGRealTank.GetCurrentWeapon
// [0x00020102] 
struct ATGRealTank_execGetCurrentWeapon_Parms
{
	class ATGTankWeapon*                               ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGRealTank.RenderOuterMapIcon
// [0x00020902] ( FUNC_Event )
struct ATGRealTank_eventRenderOuterMapIcon_Parms
{
	class UTGMapInfo*                                  MP;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                InYaw;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FLinearColor                                FinalColor;                                       		// 0x000C (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGRealTank.RenderLowerMapIcon
// [0x00020902] ( FUNC_Event )
struct ATGRealTank_eventRenderLowerMapIcon_Parms
{
	class UTGMapInfo*                                  MP;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AUTPlayerController*                         PlayerOwner;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FLinearColor                                FinalColor;                                       		// 0x000C (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGRealTank.RenderHigherMapIcon
// [0x00020902] ( FUNC_Event )
struct ATGRealTank_eventRenderHigherMapIcon_Parms
{
	class UTGMapInfo*                                  MP;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AUTPlayerController*                         PlayerOwner;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FLinearColor                                FinalColor;                                       		// 0x000C (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGRealTank.RenderNormalMapIcon
// [0x00020902] ( FUNC_Event )
struct ATGRealTank_eventRenderNormalMapIcon_Parms
{
	class UTGMapInfo*                                  MP;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AUTPlayerController*                         PlayerOwner;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FLinearColor                                FinalColor;                                       		// 0x000C (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGRealTank.NotifyDied
// [0x00020102] 
struct ATGRealTank_execNotifyDied_Parms
{
	// class ATGTankTMPlayerController*                PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.BlowupVehicle
// [0x00020102] 
struct ATGRealTank_execBlowupVehicle_Parms
{
	// struct FName                                    BlowupEventTag;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             RandNum;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.Suicide
// [0x00020002] 
struct ATGRealTank_execSuicide_Parms
{
};

// Function TGTankGame.TGRealTank.TakeDamage
// [0x00024902] ( FUNC_Event )
struct ATGRealTank_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x0020) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             actualDamage;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	// class ATGTankTMPlayerController*                TTMPC;                                            		// 0x004C (0x0004) [0x0000000000000000]              
	// class ATGTankTMPlayerController*                InstigatorPC;                                     		// 0x0050 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0054 (0x0004) [0x0000000000000000]              
	// class AController*                              Killer;                                           		// 0x0058 (0x0004) [0x0000000000000000]              
	// class ATGTankTMGameReplicationInfo*             GRI;                                              		// 0x005C (0x0004) [0x0000000000000000]              
	// class ATGTankTMPlayerReplicationInfo*           PRI;                                              		// 0x0060 (0x0004) [0x0000000000000000]              
	// class ATGGame*                                  Game;                                             		// 0x0064 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.IsTankDestroyed
// [0x00020102] 
struct ATGRealTank_execIsTankDestroyed_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGRealTank.DriverEnter
// [0x00020002] 
struct ATGRealTank_execDriverEnter_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             ShellCountScale;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             ArmorCountScale;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGTankWeap_Turret*                       Turret;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGPlayerReplicationInfo*                 PRI;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.IsTankHitGroupValid
// [0x00020102] 
struct ATGRealTank_execIsTankHitGroupValid_Parms
{
	unsigned char                                      TankHitGroup;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGRealTank.ClientUpdatePing
// [0x01020142] 
struct ATGRealTank_execClientUpdatePing_Parms
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGRealTank.ServerTankMove
// [0x00A20042] 
struct ATGRealTank_execServerTankMove_Parms
{
	struct FVehicleState                               NewVehicleState;                                  		// 0x0000 (0x0050) [0x0000000000000080]              ( CPF_Parm )
	float                                              ClientTimeStamp;                                  		// 0x0050 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FTankState                               NewTankState;                                     		// 0x0054 (0x0044) [0x0000000000000000]              
	// float                                           DeltaServerFuncCallTime;                          		// 0x0098 (0x0004) [0x0000000000000000]              
	// float                                           DeltaClientTimeStamp;                             		// 0x009C (0x0004) [0x0000000000000000]              
	// float                                           DeltaTimeStampPercent;                            		// 0x00A0 (0x0004) [0x0000000000000000]              
	// float                                           CurrCheckTime;                                    		// 0x00A4 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.ClientSyncVStateToServer
// [0x00020902] ( FUNC_Event )
struct ATGRealTank_eventClientSyncVStateToServer_Parms
{
	float                                              ClientTimeStamp;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGRealTank.GetVelocity
// [0x00020002] 
struct ATGRealTank_execGetVelocity_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGRealTank.EndViewTarget
// [0x00020902] ( FUNC_Event )
struct ATGRealTank_eventEndViewTarget_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGRealTank.BecomeViewTarget
// [0x00020902] ( FUNC_Event )
struct ATGRealTank_eventBecomeViewTarget_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGRealTank.ClientSetCameraThirdPerson
// [0x010201C2] 
struct ATGRealTank_execClientSetCameraThirdPerson_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGTankWeap_Turret*                       Turret;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.ServerSetCameraThirdPerson
// [0x002200C2] 
struct ATGRealTank_execServerSetCameraThirdPerson_Parms
{
	// class ATGTankWeap_Turret*                       Turret;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.ClientSetCameraFirstPerson
// [0x018201C2] 
struct ATGRealTank_execClientSetCameraFirstPerson_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGTankWeap_Turret*                       Turret;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 TurretRot;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 out_ViewRot;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  out_ViewLoc;                                      		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.ServerSetCameraFirstPerson
// [0x00A200C2] 
struct ATGRealTank_execServerSetCameraFirstPerson_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGTankWeap_Turret*                       Turret;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 TurretRot;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 out_ViewRot;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  out_ViewLoc;                                      		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.ProcessViewRotation
// [0x00C20102] 
struct ATGRealTank_execProcessViewRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    out_ViewRotation;                                 		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_DeltaRot;                                     		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FRotator                                 CurrLocalRot;                                     		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 LocalMinPitchRot;                                 		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 LocalMaxPitchRot;                                 		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 WorldMinPitchRot;                                 		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 WorldMaxPitchRot;                                 		// 0x004C (0x000C) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.GetTankViewPoint
// [0x00420102] 
struct ATGRealTank_execGetTankViewPoint_Parms
{
	struct FVector                                     out_ViewLoc;                                      		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_ViewRot;                                      		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TGTankGame.TGRealTank.VehicleCalcCamera
// [0x00C24102] 
struct ATGRealTank_execVehicleCalcCamera_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0014 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     CamStart;                                         		// 0x0020 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bPivotOnly : 1;                                   		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  CamPos;                                           		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamDir;                                           		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FirstHitLocation;                                 		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0060 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamRotX;                                          		// 0x006C (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamRotY;                                          		// 0x0078 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamRotZ;                                          		// 0x0084 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SafeLocation;                                     		// 0x0090 (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x009C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x00A8 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x00B4 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x00C0 (0x0004) [0x0000000000000000]              
	// float                                           NewCamStartZ;                                     		// 0x00C4 (0x0004) [0x0000000000000000]              
	// class AUTPawn*                                  P;                                                		// 0x00C8 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bObstructed : 1;                                  		// 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bInsideVehicle : 1;                               		// 0x00D0 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  DirX;                                             		// 0x00D4 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirY;                                             		// 0x00E0 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirZ;                                             		// 0x00EC (0x000C) [0x0000000000000000]              
	// struct FVector                                  StartLocation;                                    		// 0x00F8 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 StartRotation;                                    		// 0x0104 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TestTurretDir;                                    		// 0x0110 (0x000C) [0x0000000000000000]              
	// float                                           TestDotValue;                                     		// 0x011C (0x0004) [0x0000000000000000]              
	// class ATGTankWeap_Turret*                       Turret;                                           		// 0x0120 (0x0004) [0x0000000000000000]              
	// struct FVector                                  TurretDir;                                        		// 0x0124 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CameraDir;                                        		// 0x0130 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 TurretRot;                                        		// 0x013C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 CamaraRot;                                        		// 0x0148 (0x000C) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.LimitCameraZ
// [0x00820102] 
struct ATGRealTank_execLimitCameraZ_Parms
{
	float                                              CurrentCamZ;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              OriginalCamZ;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 CamRot;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           Pct;                                              		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.GetCameraStart
// [0x00820102] 
struct ATGRealTank_execGetCameraStart_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             Len;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             Obsolete;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  CamStart;                                         		// 0x001C (0x000C) [0x0000000000000000]              
	// float                                           OriginalCamZ;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FTimePosition                            NewPos;                                           		// 0x002C (0x0010) [0x0000000000000000]              
	// struct FTimePosition                            PrevPos;                                          		// 0x003C (0x0010) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.GetCameraFocus
// [0x00820102] 
struct ATGRealTank_execGetCameraFocus_Parms
{
	int                                                SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  CamStart;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.PlayVehicleAnimation
// [0x00020102] 
struct ATGRealTank_execPlayVehicleAnimation_Parms
{
	struct FName                                       EventTag;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UUTAnimNodeSequence*                      Player;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// class USkeletalMeshComponent*                   TankMesh;                                         		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGTankGame.TGRealTank.VehicleWeaponFireEffects
// [0x00020102] 
struct ATGRealTank_execVehicleWeaponFireEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                SeatIndex;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FName                                    FireTriggerTag;                                   		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UCameraAnim*                              TankFireCameraAnim;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ATGTankWeap_Turret*                       Turret;                                           		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.GetTankFireTriggerTag
// [0x00020102] 
struct ATGRealTank_execGetTankFireTriggerTag_Parms
{
	int                                                FireMode;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UClass*                                   TurretClassName;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.AddAssistCandidate
// [0x00820002] 
struct ATGRealTank_execAddAssistCandidate_Parms
{
	class ATGTankTMPlayerReplicationInfo*              InstigatorPRI;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct ATGRealTank_FAssistInfo                  Info;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.HurtTank
// [0x00420002] 
struct ATGRealTank_execHurtTank_Parms
{
	int                                                out_HealthDamage;                                 		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                out_ArmorDamage;                                  		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 InstigatedBy;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGTankTeamMatch*                         TTM;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             InjuredTeam;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             InstigatorTeam;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.GetTankTarget
// [0x00020102] 
struct ATGRealTank_execGetTankTarget_Parms
{
	unsigned char                                      HitTankGroup;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FTankTarget                                 ReturnValue;                                      		// 0x0004 (0x0014) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGRealTank.SwitchWeapon
// [0x00020102] 
struct ATGRealTank_execSwitchWeapon_Parms
{
	unsigned char                                      NewGroup;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ATGTankWeap_Turret*                       Turret;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.StartFire
// [0x00020102] 
struct ATGRealTank_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGRealTank.GetWeaponAim
// [0x00820002] 
struct ATGRealTank_execGetWeaponAim_Parms
{
	class AUTVehicleWeapon*                            VWeapon;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SocketLocation;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRotation;                                   		// 0x001C (0x000C) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FVector                                  out_CamLoc;                                       		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 out_CamRot;                                       		// 0x0038 (0x000C) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.SwitchToLastUsedWeapon
// [0x00020102] 
struct ATGRealTank_execSwitchToLastUsedWeapon_Parms
{
	// class ATGTankWeap_Turret*                       Turret;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.GetPhysicalFireStartLoc
// [0x00020102] 
struct ATGRealTank_execGetPhysicalFireStartLoc_Parms
{
	class AUTWeapon*                                   ForWeapon;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGRealTank.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGRealTank_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FString                                  VarString;                                        		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGTankGame.TGRealTank.TriggerVehicleEffect
// [0x00020102] 
struct ATGRealTank_execTriggerVehicleEffect_Parms
{
	struct FName                                       EventTag;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.UpdateVehicleEffectFloatParam
// [0x00020102] 
struct ATGRealTank_execUpdateVehicleEffectFloatParam_Parms
{
	struct FName                                       EffectStartTag;                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ParamName;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Param;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Idx;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.InitializeTurrets
// [0x00820102] 
struct ATGRealTank_execInitializeTurrets_Parms
{
	// int                                             Seat;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UTGTankSkelControl_TurretConstrained*     Turret;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  PivotLoc;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  MuzzleLoc;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.PostBeginPlay
// [0x00020102] 
struct ATGRealTank_execPostBeginPlay_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGRealTank.PreBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGRealTank_eventPreBeginPlay_Parms
{
	// class UClass*                                   HUDType;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankHUD.SetShellBarEffects
// [0x00020002] 
struct UTGTankHUD_execSetShellBarEffects_Parms
{
	unsigned char                                      ShellType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankHUD.DisplayWeaponBar
// [0x00020802] ( FUNC_Event )
struct UTGTankHUD_eventDisplayWeaponBar_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             PosX;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             CachePosY;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             CacheNormalShellPosX;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             CacheNormalShellPosY;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             CacheHEShellPosX;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             CacheHEShellPosY;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             CacheAPShellPosX;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             CacheAPShellPosY;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             CacheShellNumPosX;                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             CacheShellNumPosY;                                		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           TextWidth;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           TextHeight;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           CurrScale;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FString                                  ShellNumStr;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGTankGame.TGTankHUD.DispalyFirstPersonImage
// [0x00020002] 
struct UTGTankHUD_execDispalyFirstPersonImage_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankHUD.DisplayNavigator
// [0x00820002] 
struct UTGTankHUD_execDisplayNavigator_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 ViewRot;                                          		// 0x0004 (0x000C) [0x0000000000000000]              
	// float                                           PosX;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           SizeX;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           SizeY;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           RulerPos;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           InitRulerPos;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankHUD.DrawCrosshairEnemyInfo
// [0x00020002] 
struct UTGTankHUD_execDrawCrosshairEnemyInfo_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealTank*                              Tank;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FString                                  HealthStr;                                        		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  ACStr;                                            		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// float                                           PosX;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           FontScale;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	// unsigned char                                   HitGroup;                                         		// 0x002C (0x0001) [0x0000000000000000]              
};

// Function TGTankGame.TGTankHUD.DrawAmmoReload
// [0x00820002] 
struct UTGTankHUD_execDrawAmmoReload_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           PosX;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           ReloadTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           ReloadPct;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           CurrFireInterval;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               ShellBG;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               ShellFrame;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               ShellReloadBar;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FTextureCoordinates                      ShellReloadBarCoords;                             		// 0x0024 (0x0010) [0x0000000000000000]              
	// struct FAmmoReloadHUDInfo                       CurrAmmoReloadInfo;                               		// 0x0034 (0x0020) [0x0000000000000000]              
};

// Function TGTankGame.TGTankHUD.DrawCircleCrosshair
// [0x00820002] 
struct UTGTankHUD_execDrawCircleCrosshair_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           X;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           ScreenX;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           ScreenY;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           CrosshairSizeX;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           CrosshairSizeY;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           CrosshairOffset;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           OriginCrossHairSize;                              		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           CrossHairSizeChangeFactor;                        		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           MaxCrossHairSize;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           CurrCrossHairShockOffset;                         		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FVector                                  RealAimPoint;                                     		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SocketLocation;                                   		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRotation;                                   		// 0x0060 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x006C (0x0004) [0x0000000000000000]              
	// float                                           AimTraceRange;                                    		// 0x0070 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankHUD.GetFireShockOffset
// [0x00020102] 
struct UTGTankHUD_execGetFireShockOffset_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankHUD.GetInCorrectAimOffset
// [0x00020102] 
struct UTGTankHUD_execGetInCorrectAimOffset_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankHUD.GetCrossHairShockOffset
// [0x00020002] 
struct UTGTankHUD_execGetCrossHairShockOffset_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             CurrFinalValue;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankHUD.DisplayCentralHUD
// [0x00820002] 
struct UTGTankHUD_execDisplayCentralHUD_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           PosX;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           ScaleCrosshair;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               MoveModeTex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FTextureCoordinates                      MoveModeCoords;                                   		// 0x0014 (0x0010) [0x0000000000000000]              
	// class ATGTankTMPlayerController*                TankPC;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankHUD.NotifyTakeDamage
// [0x00820002] 
struct UTGTankHUD_execNotifyTakeDamage_Parms
{
	unsigned char                                      HitGroup;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Armor;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// TArray< float >                                 Periods;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FVector2D >                      InitPos;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FVector2D >                      PosOffsets;                                       		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FVector2D >                      SizeScales;                                       		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FVector2D >                      Alphas;                                           		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FVector2D                                pos;                                              		// 0x0048 (0x0008) [0x0000000000000000]              
	// struct FTextureCoordinates                      TexCoords;                                        		// 0x0050 (0x0010) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0060 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankHUD.SwitchRevertWarning
// [0x00020002] 
struct UTGTankHUD_execSwitchRevertWarning_Parms
{
};

// Function TGTankGame.TGTankHUD.DrawTankIcon
// [0x00020002] 
struct UTGTankHUD_execDrawTankIcon_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    Rot;                                              		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   CenterPos;                                        		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UTexture2D*                               BodyTex;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               TurretTex;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           PosX;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           HealthPct;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           RevertDegree;                                     		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankHUD.DisplayDashboard
// [0x00820002] 
struct UTGTankHUD_execDisplayDashboard_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 BodyRot;                                          		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 TurretRot;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 BodyRotRel;                                       		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x0028 (0x000C) [0x0000000000000000]              
	// float                                           PosX;                                             		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           SpeedPct;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           HealthPct;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           ArmorPct;                                         		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           BoostPct;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankHUD.DisplayThirdPersonHUD
// [0x00020002] 
struct UTGTankHUD_execDisplayThirdPersonHUD_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankHUD.DisplayFirstPersonHUD
// [0x00020002] 
struct UTGTankHUD_execDisplayFirstPersonHUD_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankHUD.DisplayHud
// [0x00020002] 
struct UTGTankHUD_execDisplayHud_Parms
{
	class AUTHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGPlayerController*                      PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankHUD.Initialize
// [0x00020002] 
struct UTGTankHUD_execInitialize_Parms
{
};

// Function TGTankGame.TGTankAmmoBox.GetBestSwitchShell
// [0x00020102] 
struct ATGTankAmmoBox_execGetBestSwitchShell_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             MaxPriorityIndex;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankAmmoBox.AddAmmo
// [0x00020102] 
struct ATGTankAmmoBox_execAddAmmo_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      CurrShellType;                                    		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankAmmoBox.GetTankShellCount
// [0x00020102] 
struct ATGTankAmmoBox_execGetTankShellCount_Parms
{
	unsigned char                                      CurrShellType;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankAmmoBox.GetTankShellClass
// [0x00020102] 
struct ATGTankAmmoBox_execGetTankShellClass_Parms
{
	unsigned char                                      CurrShellType;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankTeamMatch.CalcAchiWhenKill
// [0x00020002] 
struct ATGTankTeamMatch_execCalcAchiWhenKill_Parms
{
	class ATGTankTMPlayerReplicationInfo*              Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGTankTMPlayerReplicationInfo*              Killed;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGTankTMPlayerController*                KillerPC;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// class ATGTankTMPlayerController*                KilledPC;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGRealTank*                              Tank;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTeamMatch.CalcMVP
// [0x00020002] 
struct ATGTankTeamMatch_execCalcMVP_Parms
{
	// class ATGTankTMPlayerReplicationInfo*           PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGTankTMGameReplicationInfo*             GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           MvpValue;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           BestMvpValue;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTeamMatch.CalcACE
// [0x00020002] 
struct ATGTankTeamMatch_execCalcACE_Parms
{
	// class ATGTankTMPlayerReplicationInfo*           PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGTankTMGameReplicationInfo*             GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTeamMatch.EndGame
// [0x00020002] 
struct ATGTankTeamMatch_execEndGame_Parms
{
	class APlayerReplicationInfo*                      Winner;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TGTankGame.TGTankTeamMatch.StartMatch
// [0x00020002] 
struct ATGTankTeamMatch_execStartMatch_Parms
{
};

// Function TGTankGame.TGTankTeamMatch.ChoosePickupFactory
// [0x00020002] 
struct ATGTankTeamMatch_execChoosePickupFactory_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             RandNum;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTeamMatch.CheckAssistant
// [0x00020002] 
struct ATGTankTeamMatch_execCheckAssistant_Parms
{
	class ATGRealTank*                                 KilledTank;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGTankTMPlayerReplicationInfo*              KillerPRI;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGTankTMPlayerController*                AssistantPC;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGTankTMPlayerReplicationInfo*           AssistantPRI;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTeamMatch.Killed
// [0x00020002] 
struct ATGTankTeamMatch_execKilled_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledPlayer;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGTankTMPlayerReplicationInfo*           KillerPRI;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGTankTMPlayerReplicationInfo*           KilledPRI;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGRealTank*                              KilledTank;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bEnemyKill : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGTankGame.TGTankTeamMatch.CheckEndGame
// [0x00020002] 
struct ATGTankTeamMatch_execCheckEndGame_Parms
{
	class APlayerReplicationInfo*                      Winner;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AController*                              P;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bLastTeam : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGTankGame.TGTankTeamMatch.RestartPlayer
// [0x00020002] 
struct ATGTankTeamMatch_execRestartPlayer_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGTankTMPlayerController*                PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTeamMatch.SpawnDefaultPawnFor
// [0x00020002] 
struct ATGTankTeamMatch_execSpawnDefaultPawnFor_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            StartSpot;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankTeamMatch.AddInventoryFor
// [0x00020800] ( FUNC_Event )
struct ATGTankTeamMatch_eventAddInventoryFor_Parms
{
	class APawn*                                       PlayerPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankTeamMatch.UpdateGameSpecificSettings
// [0x00020802] ( FUNC_Event )
struct ATGTankTeamMatch_eventUpdateGameSpecificSettings_Parms
{
	struct FGameSpecificSettings                       Settings;                                         		// 0x0000 (0x0028) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankTeamMatch.PostBeginPlay
// [0x00820002] 
struct ATGTankTeamMatch_execPostBeginPlay_Parms
{
	// struct FGroupedPickup                           PickupGroup;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ATGTankPickupFactory*                     Pickup;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             FindIdx;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerInput.SwitchToLastUsedWeapon
// [0x00020202] ( FUNC_Exec )
struct UTGTankTMPlayerInput_execSwitchToLastUsedWeapon_Parms
{
	// class ATGRealTank*                              Tank;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerInput.SwitchWeapon
// [0x00020202] ( FUNC_Exec )
struct UTGTankTMPlayerInput_execSwitchWeapon_Parms
{
	unsigned char                                      F;                                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankTMPlayerInput.SwitchTank
// [0x00020002] 
struct UTGTankTMPlayerInput_execSwitchTank_Parms
{
	unsigned char                                      F;                                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ATGTankTMPlayerReplicationInfo*           PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned char                                   ExpectedTankType;                                 		// 0x0008 (0x0001) [0x0000000000000000]              
	// unsigned char                                   TeamIndex;                                        		// 0x0009 (0x0001) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerInput.GotoTopView
// [0x00020202] ( FUNC_Exec )
struct UTGTankTMPlayerInput_execGotoTopView_Parms
{
};

// Function TGTankGame.TGTankTMPlayerInput.GotoAlwaysSpectating
// [0x00020202] ( FUNC_Exec )
struct UTGTankTMPlayerInput_execGotoAlwaysSpectating_Parms
{
};

// Function TGTankGame.TGTankTMPlayerInput.ShowHelpMenu
// [0x00020202] ( FUNC_Exec )
struct UTGTankTMPlayerInput_execShowHelpMenu_Parms
{
};

// Function TGTankGame.TGTankTMPlayerInput.PressFKey
// [0x00020202] ( FUNC_Exec )
struct UTGTankTMPlayerInput_execPressFKey_Parms
{
	// class ATGRealTank*                              Tank;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMPlayerInput.Jump
// [0x00020202] ( FUNC_Exec )
struct UTGTankTMPlayerInput_execJump_Parms
{
};

// Function TGTankGame.TGTankTMPlayerInput.UnSnake
// [0x00020202] ( FUNC_Exec )
struct UTGTankTMPlayerInput_execUnSnake_Parms
{
};

// Function TGTankGame.TGTankTMPlayerInput.Snake
// [0x00020202] ( FUNC_Exec )
struct UTGTankTMPlayerInput_execSnake_Parms
{
};

// Function TGTankGame.TGTankTMPlayerInput.Use
// [0x00020200] ( FUNC_Exec )
struct UTGTankTMPlayerInput_execUse_Parms
{
};

// Function TGTankGame.TGTankTMPlayerInput.SwitchMoveMode
// [0x00020202] ( FUNC_Exec )
struct UTGTankTMPlayerInput_execSwitchMoveMode_Parms
{
};

// Function TGTankGame.TGTankTMPlayerInput.PressVKey
// [0x00020202] ( FUNC_Exec )
struct UTGTankTMPlayerInput_execPressVKey_Parms
{
	// class ATGRealTank*                              TGTank;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankPickupFactory.GetRadarIcon
// [0x00020102] 
struct ATGTankPickupFactory_execGetRadarIcon_Parms
{
	class UTexture2D*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankPickupFactory.EnablePickup
// [0x00020002] 
struct ATGTankPickupFactory_execEnablePickup_Parms
{
};

// Function TGTankGame.TGTankPickupFactory.ChooseNextPickupFactory
// [0x00020002] 
struct ATGTankPickupFactory_execChooseNextPickupFactory_Parms
{
	// class ATGTankTeamMatch*                         Game;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             FindIdx;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             RandNum;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankPickupFactory.SetPickupDisable
// [0x00020002] 
struct ATGTankPickupFactory_execSetPickupDisable_Parms
{
	// class ATGTankTeamMatch*                         Game;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankPickupFactory.Reset
// [0x00020002] 
struct ATGTankPickupFactory_execReset_Parms
{
};

// Function TGTankGame.TGTankPickupFactory.ClearIconFlash
// [0x00020102] 
struct ATGTankPickupFactory_execClearIconFlash_Parms
{
};

// Function TGTankGame.TGTankPickupFactory.FlashIcon
// [0x00020102] 
struct ATGTankPickupFactory_execFlashIcon_Parms
{
};

// Function TGTankGame.TGTankPickupFactory.SetInitialState
// [0x00020902] ( FUNC_Event )
struct ATGTankPickupFactory_eventSetInitialState_Parms
{
};

// Function TGTankGame.TGTankPickupFactory.SetPickupMesh
// [0x00020100] 
struct ATGTankPickupFactory_execSetPickupMesh_Parms
{
};

// Function TGTankGame.TGTankPickupFactory.SetPickupHidden
// [0x00020102] 
struct ATGTankPickupFactory_execSetPickupHidden_Parms
{
};

// Function TGTankGame.TGTankPickupFactory.SetPickupVisible
// [0x00020102] 
struct ATGTankPickupFactory_execSetPickupVisible_Parms
{
};

// Function TGTankGame.TGTankPickupFactory.InitializePickup
// [0x00020102] 
struct ATGTankPickupFactory_execInitializePickup_Parms
{
};

// Function TGTankGame.TGTankPickupFactory.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGTankPickupFactory_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankProj_Shell.Tick
// [0x00020902] ( FUNC_Event )
struct ATGTankProj_Shell_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankProj_Shell.Destroyed
// [0x00020102] 
struct ATGTankProj_Shell_execDestroyed_Parms
{
};

// Function TGTankGame.TGTankProj_Shell.HitWall
// [0x00020922] ( FUNC_Event )
struct ATGTankProj_Shell_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// class AKActorFromStatic*                        NewKActor;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UStaticMeshComponent*                     HitStaticMesh;                                    		// 0x0018 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class AFracturedStaticMeshActor*                fracturedActor;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	// class UFracturedStaticMesh*                     FracMesh;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankProj_Shell.Explode
// [0x00020102] 
struct ATGTankProj_Shell_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankProj_Shell.ClientSpawnExplosionEffects
// [0x00020102] 
struct ATGTankProj_Shell_execClientSpawnExplosionEffects_Parms
{
};

// Function TGTankGame.TGTankProj_Shell.SetTankHitInfo
// [0x00820102] 
struct ATGTankProj_Shell_execSetTankHitInfo_Parms
{
	class ATGRealTank*                                 Tank;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      TankHitGroup;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                TankHealthDamage;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                TankArmorDamage;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FTankTargetHitInfo                       NewTankHitInfo;                                   		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function TGTankGame.TGTankProj_Shell.SpawnExplosionEffects
// [0x00820102] 
struct ATGTankProj_Shell_execSpawnExplosionEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  LightLoc;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  LightHitLocation;                                 		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  LightHitNormal;                                   		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Direction;                                        		// 0x003C (0x000C) [0x0000000000000000]              
	// class UParticleSystemComponent*                 ProjExplosion;                                    		// 0x0048 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UParticleSystem*                          ShellExplosionTemp;                               		// 0x004C (0x0004) [0x0000000000000000]              
	// class AActor*                                   EffectAttachActor;                                		// 0x0050 (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceTimeVarying*             MITV_Decal;                                       		// 0x0054 (0x0004) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0058 (0x0020) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0078 (0x0004) [0x0000000000000000]              
	// struct FVector                                  NewHitLoc;                                        		// 0x007C (0x000C) [0x0000000000000000]              
	// struct FMaterialImpactEffect                    ExplosionEffect;                                  		// 0x0088 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGTankGame.TGTankProj_Shell.GetTankShellExplosionEffect
// [0x00020102] 
struct ATGTankProj_Shell_execGetTankShellExplosionEffect_Parms
{
	class UPhysicalMaterial*                           HitMaterial;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FMaterialImpactEffect                       ReturnValue;                                      		// 0x0004 (0x0038) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x003C (0x0004) [0x0000000000000000]              
	// class UPhysicalMaterialProperty*                PhysicalProperty;                                 		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankProj_Shell.FindWeaponHitNormal
// [0x00420102] 
struct ATGTankProj_Shell_execFindWeaponHitNormal_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     End;                                              		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Start;                                            		// 0x0024 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0030 (0x0020) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AActor*                                      ReturnValue;                                      		// 0x0050 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankProj_Shell.PlayJettingSound
// [0x00084102] 
struct ATGTankProj_Shell_execPlayJettingSound_Parms
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UAudioComponent*                             AC;                                               		// 0x0004 (0x0004) [0x0000000004000090]              ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )
	float                                              FadeInTime;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UAudioComponent*                             ReturnValue;                                      		// 0x000C (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// class AActor*                                   SoundOwner;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankProj_Shell.ProjectileHurtRadius
// [0x00820102] 
struct ATGTankProj_Shell_execProjectileHurtRadius_Parms
{
	struct FVector                                     HurtOrigin;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bCausedDamage : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// class AActor*                                   Victim;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal1;                                       		// 0x0030 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActorTemp;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	// struct FVector                                  StartTrace;                                       		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x005C (0x0020) [0x0000000000000000]              
	// unsigned long                                   bFinalCauseDamage : 1;                            		// 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           LocationZOffset;                                  		// 0x0080 (0x0004) [0x0000000000000000]              
	// struct FVector                                  PawnLocationOffset;                               		// 0x0084 (0x000C) [0x0000000000000000]              
	// float                                           DamageAmount;                                     		// 0x0090 (0x0004) [0x0000000000000000]              
	// float                                           InDamageRadius;                                   		// 0x0094 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0098 (0x0004) [0x0000000000000000]              
	// float                                           Momentum;                                         		// 0x009C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankProj_Shell.ProcessTouch
// [0x00820102] 
struct ATGTankProj_Shell_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class APawn*                                    HitPawn;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  out_HitLocation;                                  		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  out_HitNormal;                                    		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0050 (0x0020) [0x0000000000000000]              
	// struct FVector                                  FireDirection;                                    		// 0x0070 (0x000C) [0x0000000000000000]              
};

// Function TGTankGame.TGTankProj_Shell.PostBeginPlay
// [0x00020102] 
struct ATGTankProj_Shell_execPostBeginPlay_Parms
{
};

// Function TGTankGame.TGTankProj_Shell.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGTankProj_Shell_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankProj_Shell.OnShutdownTimer
// [0x00020102] 
struct ATGTankProj_Shell_execOnShutdownTimer_Parms
{
};

// Function TGTankGame.TGTankBodyHUD.Draw
// [0x00020002] 
struct UTGTankBodyHUD_execDraw_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    Rot;                                              		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   CenterPos;                                        		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UTexture2D*                               Tex;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           PosX;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankBodyHUD.Flash
// [0x00020002] 
struct UTGTankBodyHUD_execFlash_Parms
{
};

// Function TGTankGame.TGTankBodyHUD.EndFlashEffect
// [0x00020002] 
struct UTGTankBodyHUD_execEndFlashEffect_Parms
{
};

// Function TGTankGame.TGTankBodyHUD.StartFlashEffect
// [0x00020002] 
struct UTGTankBodyHUD_execStartFlashEffect_Parms
{
};

// Function TGTankGame.TGTankTMHUD.DebugFeedback
// [0x00024002] 
struct ATGTankTMHUD_execDebugFeedback_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MultiKillLevel;                                   		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UParticleSystem*                          FeedbackPS;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMHUD.AddAssistantFeedback
// [0x00020002] 
struct ATGTankTMHUD_execAddAssistantFeedback_Parms
{
};

// Function TGTankGame.TGTankTMHUD.AddTankHitFeedback
// [0x00020002] 
struct ATGTankTMHUD_execAddTankHitFeedback_Parms
{
	unsigned char                                      HitGroup;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class UParticleSystem*                          FeedbackPS;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMHUD.AddKillFeedBackMessage
// [0x00024002] 
struct ATGTankTMHUD_execAddKillFeedBackMessage_Parms
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
	// class UParticleSystem*                          FeedbackPS;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             Len;                                              		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMHUD.NotifyHitEnemy
// [0x00820002] 
struct ATGTankTMHUD_execNotifyHitEnemy_Parms
{
	int                                                DamageHP;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                DamageAC;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// TArray< float >                                 Periods;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FVector2D >                      InitPos;                                          		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FVector2D >                      PosOffsets;                                       		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FVector2D >                      SizeScales;                                       		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FVector2D >                      Alphas;                                           		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// float                                           OffsetY;                                          		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           TravelY;                                          		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           AcOffsetY;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	// struct FVector2D                                pos;                                              		// 0x0050 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                PosOffset;                                        		// 0x0058 (0x0008) [0x0000000000000000]              
	// struct FTextureCoordinates                      TexCoords;                                        		// 0x0060 (0x0010) [0x0000000000000000]              
	// struct FString                                  DamageStr;                                        		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  ACString;                                         		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGTankGame.TGTankTMHUD.DisplayBigRadar
// [0x00020002] 
struct ATGTankTMHUD_execDisplayBigRadar_Parms
{
	// class ATGPlayerController*                      PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UTGTankMapInfo*                           MI;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           ScaleY;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           W;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           H;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           X;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           AdjustedViewportHeight;                           		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMHUD.DisplayMap
// [0x00020002] 
struct ATGTankTMHUD_execDisplayMap_Parms
{
	// class UTGTankMapInfo*                           MI;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bDraw : 1;                                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           ScaleClipY;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMHUD.DisplayNewbieHints
// [0x00020002] 
struct ATGTankTMHUD_execDisplayNewbieHints_Parms
{
	// class ATGTankTMPlayerReplicationInfo*           OwnerPRI;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               SwitchToFirstPersonTip;                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               SwitchToThirdPersonTip;                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               ShiftUsageTex;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               SpaceUsageTex;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGRealTank*                              Tank;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           PosX;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMHUD.DrawHealthBar
// [0x00824002] 
struct ATGTankTMHUD_execDrawHealthBar_Parms
{
	float                                              CenterPosX;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              CenterPosY;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ProgressPct;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Scale;                                            		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// float                                           PosX;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               ProgressTex;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               ProgressBGTex;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FTextureCoordinates                      BarCoords;                                        		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FTextureCoordinates                      BGCoords;                                         		// 0x0030 (0x0010) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMHUD.DrawTankSelection
// [0x00020002] 
struct ATGTankTMHUD_execDrawTankSelection_Parms
{
	// class ATGTankTMPlayerController*                PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGTankTMPlayerReplicationInfo*           PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< unsigned char >                         TankTypeList;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UTexture2D*                               SelectPanel;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               Selected;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           AlphaScale;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             PosX;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             OrigPosX;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             OrigPosY;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             SelectIdx;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankTMHUD.DisplaySpectator
// [0x00020000] 
struct ATGTankTMHUD_execDisplaySpectator_Parms
{
};

// Function TGTankGame.TGTankTMHUD.DisplayAvatar
// [0x00020000] 
struct ATGTankTMHUD_execDisplayAvatar_Parms
{
};

// Function TGTankGame.TGTankTMHUD.GetResScale
// [0x00022002] 
struct ATGTankTMHUD_execGetResScale_Parms
{
	class UCanvas*                                     DrawCanvas;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankTMHUD.DrawGameHud
// [0x00020002] 
struct ATGTankTMHUD_execDrawGameHud_Parms
{
};

// Function TGTankGame.TGTankTMHUD.DrawLivingHud
// [0x00020002] 
struct ATGTankTMHUD_execDrawLivingHud_Parms
{
};

// Function TGTankGame.TGTankMapInfo.GetPickupSizeScale
// [0x00020102] 
struct UTGTankMapInfo_execGetPickupSizeScale_Parms
{
	class ATGTankPickupFactory*                        Pickup;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AWorldInfo*                               WI;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankMapInfo.DrawSquareMap
// [0x00820102] 
struct UTGTankMapInfo_execDrawSquareMap_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AUTPlayerController*                         PlayerOwner;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              XPos;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              YPos;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFullDetail : 1;                                  		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              AspectRatio;                                      		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShowHealth : 1;                                  		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             PlayerYaw;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  PlayerLocation;                                   		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenLocation;                                   		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  PickupLocation;                                   		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BaseLoc;                                          		// 0x004C (0x000C) [0x0000000000000000]              
	// class ATGRealTank*                              PawnOwner;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	// class ATGRealTank*                              Tank;                                             		// 0x005C (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             FinalColor;                                       		// 0x0060 (0x0010) [0x0000000000000000]              
	// class ATGPlayerReplicationInfo*                 PRI;                                              		// 0x0070 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 MapRot;                                           		// 0x0074 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 R;                                                		// 0x0080 (0x000C) [0x0000000000000000]              
	// class AWorldInfo*                               WI;                                               		// 0x008C (0x0004) [0x0000000000000000]              
	// class ATGGameReplicationInfo*                   GRI;                                              		// 0x0090 (0x0004) [0x0000000000000000]              
	// class ATGTankPickupFactory*                     RepairPickup;                                     		// 0x0094 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bInsightEnemy : 1;                                		// 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           ScaleY;                                           		// 0x009C (0x0004) [0x0000000000000000]              
	// float                                           IconSizeScale;                                    		// 0x00A0 (0x0004) [0x0000000000000000]              
	// float                                           SizeScale;                                        		// 0x00A4 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x00A8 (0x0004) [0x0000000000000000]              
	// int                                             RadarPickupIconSize;                              		// 0x00AC (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               RadarIcon;                                        		// 0x00B0 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               HomeIcon;                                         		// 0x00B4 (0x0004) [0x0000000000000000]              
	// struct FTextureCoordinates                      HomeCoords;                                       		// 0x00B8 (0x0010) [0x0000000000000000]              
	// class ATGTankDBPlayerController*                TDBPC;                                            		// 0x00C8 (0x0004) [0x0000000000000000]              
	// class ATGTankDBHUD*                             DBHUD;                                            		// 0x00CC (0x0004) [0x0000000000000000]              
	// class ATGHUD*                                   HUD;                                              		// 0x00D0 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankMapInfo.DrawMap
// [0x00820102] 
struct UTGTankMapInfo_execDrawMap_Parms
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
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             PlayerYaw;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FVector                                  PlayerLocation;                                   		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenLocation;                                   		// 0x0038 (0x000C) [0x0000000000000000]              
	// float                                           MinRadarRange;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
	// class APawn*                                    PawnOwner;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	// class ATGRealTank*                              Tank;                                             		// 0x004C (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             FinalColor;                                       		// 0x0050 (0x0010) [0x0000000000000000]              
	// class ATGPlayerReplicationInfo*                 PRI;                                              		// 0x0060 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 MapRot;                                           		// 0x0064 (0x000C) [0x0000000000000000]              
	// class AWorldInfo*                               WI;                                               		// 0x0070 (0x0004) [0x0000000000000000]              
	// class ATGGameReplicationInfo*                   GRI;                                              		// 0x0074 (0x0004) [0x0000000000000000]              
	// float                                           ScaleY;                                           		// 0x0078 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bInsightEnemy : 1;                                		// 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGTankGame.TGTankTMHUD_ProgressBar.UpdateRespawnTimeBar
// [0x00020002] 
struct UTGTankTMHUD_ProgressBar_execUpdateRespawnTimeBar_Parms
{
	// class ATGTankTMPlayerController*                PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Progress;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankScoreBoard.DrawItemText
// [0x00420002] 
struct UTGTankScoreBoard_execDrawItemText_Parms
{
	int                                                PosX;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosY;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGPlayerReplicationInfo*                    PRI;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FColor                                      TextColor;                                        		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class ATGTankTMPlayerReplicationInfo*           TankPRI;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FString                                  ScoreString;                                      		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGTankGame.TGTankScoreBoard.DrawItemTextSelf
// [0x00420002] 
struct UTGTankScoreBoard_execDrawItemTextSelf_Parms
{
	int                                                PosX;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosY;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGPlayerReplicationInfo*                    PRI;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FColor                                      TextColor;                                        		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class ATGTankTMPlayerReplicationInfo*           TankPRI;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FString                                  ScoreString;                                      		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TGTankGame.TGTankScoreBoard.DrawScoreBoardBG
// [0x00020002] 
struct UTGTankScoreBoard_execDrawScoreBoardBG_Parms
{
	// unsigned char                                   TeamIndex;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function TGTankGame.TGTankDBHUD.AddBaseHitFeedback
// [0x00020002] 
struct ATGTankDBHUD_execAddBaseHitFeedback_Parms
{
};

// Function TGTankGame.TGTankDBHUD.DisplayBaseHitMessage
// [0x00820002] 
struct ATGTankDBHUD_execDisplayBaseHitMessage_Parms
{
	// class UTGTankMapInfo*                           MI;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FColor                                   CanvasColor;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PosX;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           FadeValue;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankDBHUD.HideBaseHitMessage
// [0x00020002] 
struct ATGTankDBHUD_execHideBaseHitMessage_Parms
{
};

// Function TGTankGame.TGTankDBHUD.ShowBaseHitMessage
// [0x00020002] 
struct ATGTankDBHUD_execShowBaseHitMessage_Parms
{
};

// Function TGTankGame.TGTankDBHUD.DrawShadowedText
// [0x00824002] 
struct ATGTankDBHUD_execDrawShadowedText_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              X;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Scale;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FColor                                   CanvasColor;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankDBHUD.DrawBaseHPBar
// [0x00020002] 
struct ATGTankDBHUD_execDrawBaseHPBar_Parms
{
	struct FVector2D                                   ScreenRelativePos;                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ProgressPct;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     CenterText;                                       		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class ATGTankDestructibleBase*                     DBase;                                            		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             PosX;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             HealthLevel;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           LevelPct;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           TotalPct;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           SizeScale;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankDBHUD.DrawCrosshairBaseHealthBar
// [0x00020002] 
struct ATGTankDBHUD_execDrawCrosshairBaseHealthBar_Parms
{
	// class ATGRealTank*                              Tank;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGTankDestructibleBase*                  CrosshairBase;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGTankDBPlayerController*                PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           HealthPct;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankDBHUD.SwitchEnemyBaseAlpha
// [0x00020002] 
struct ATGTankDBHUD_execSwitchEnemyBaseAlpha_Parms
{
};

// Function TGTankGame.TGTankDBHUD.SwitchSelfBaseAlpha
// [0x00020002] 
struct ATGTankDBHUD_execSwitchSelfBaseAlpha_Parms
{
};

// Function TGTankGame.TGTankDBHUD.DisplayTeamScore
// [0x00020002] 
struct ATGTankDBHUD_execDisplayTeamScore_Parms
{
	// class ATGTankDBPlayerController*                PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               GoalScoreBGTex;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               BaseBarSelfTex;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               BaseBarEnemyTex;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           PosX;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           HealthPct;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// unsigned char                                   TeamIndex;                                        		// 0x001C (0x0001) [0x0000000000000000]              
};

// Function TGTankGame.TGTankDBHUD.DrawLivingHud
// [0x00020002] 
struct ATGTankDBHUD_execDrawLivingHud_Parms
{
};

// Function TGTankGame.TGTankDBHUD.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGTankDBHUD_eventPostBeginPlay_Parms
{
};

// Function TGTankGame.TGTDBHUD_BaseHealth.Display
// [0x00020002] 
struct UTGTDBHUD_BaseHealth_execDisplay_Parms
{
	// float                                           PosX;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           DrawSizeX;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           DrawSizeY;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTDBHUD_BaseHealth.HideBaseHealthHitBG
// [0x00020002] 
struct UTGTDBHUD_BaseHealth_execHideBaseHealthHitBG_Parms
{
};

// Function TGTankGame.TGTDBHUD_BaseHealth.NotifyBaseTakeDamage
// [0x00020002] 
struct UTGTDBHUD_BaseHealth_execNotifyBaseTakeDamage_Parms
{
};

// Function TGTankGame.TGTDBHUD_BaseHealth.UpateParameter
// [0x00020002] 
struct UTGTDBHUD_BaseHealth_execUpateParameter_Parms
{
	// class ATGTankDBPlayerController*                PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGTankDestructibleBase*                  BaseBuilding;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           Percent;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTDBHUD_BaseHealth.InitMIC
// [0x00020002] 
struct UTGTDBHUD_BaseHealth_execInitMIC_Parms
{
};

// Function TGTankGame.TGTDBHUD_BaseHealth.CreateMIC
// [0x00420002] 
struct UTGTDBHUD_BaseHealth_execCreateMIC_Parms
{
	class UMaterialInstanceConstant*                   MIC;                                              		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UMaterial*                                   Mat;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTDBHUD_BaseHealth.Draw
// [0x00020002] 
struct UTGTDBHUD_BaseHealth_execDraw_Parms
{
};

// Function TGTankGame.TGTankDBPlayerController.IsOjbectiveInsight
// [0x00020102] 
struct ATGTankDBPlayerController_execIsOjbectiveInsight_Parms
{
	class ATGRealTank*                                 Tank;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             FindIdx;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bInSight : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGTankGame.TGTankDBPlayerController.NotifyTankDied
// [0x00020102] 
struct ATGTankDBPlayerController_execNotifyTankDied_Parms
{
	class ATGRealTank*                                 Tank;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             FindIdx;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankDBPlayerController.CheckBaseInstigators
// [0x00020002] 
struct ATGTankDBPlayerController_execCheckBaseInstigators_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankDBPlayerController.AddBaseInstigator
// [0x00820002] 
struct ATGTankDBPlayerController_execAddBaseInstigator_Parms
{
	class ATGRealTank*                                 Tank;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FSeeObjective                            Obj;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             FindIdx;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankDBPlayerController.NotifyClientHitBase
// [0x010201C2] 
struct ATGTankDBPlayerController_execNotifyClientHitBase_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGTankDBHUD*                             BaseHUD;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankDBPlayerController.AcknowledgePossession
// [0x00020002] 
struct ATGTankDBPlayerController_execAcknowledgePossession_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankDBPlayerController.SetMyBase
// [0x00020102] 
struct ATGTankDBPlayerController_execSetMyBase_Parms
{
	// class ATGTankDestructibleBase*                  BaseBuilding;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankDBPlayerController.NotifyLocalPlayerTeamReceived
// [0x00020102] 
struct ATGTankDBPlayerController_execNotifyLocalPlayerTeamReceived_Parms
{
};

// Function TGTankGame.TGTankDBPlayerController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGTankDBPlayerController_eventPostBeginPlay_Parms
{
	// class ATGTankDestructibleBase*                  BaseBuilding;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankDestructibleBase.GetHealthColor
// [0x00820102] 
struct ATGTankDestructibleBase_execGetHealthColor_Parms
{
	struct FColor                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Level;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           LevelPct;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FColor                                   HealthColor;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankDestructibleBase.GetHealthLevel
// [0x00424102] 
struct ATGTankDestructibleBase_execGetHealthLevel_Parms
{
	int                                                Level;                                            		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              LevelPct;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              TotalPct;                                         		// 0x0008 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	// float                                           Level01;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           Level02;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Level03;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           Level04;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankDestructibleBase.GetCurrentMesh
// [0x00020102] 
struct ATGTankDestructibleBase_execGetCurrentMesh_Parms
{
	class UStaticMeshComponent*                        ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function TGTankGame.TGTankDestructibleBase.SetupMesh
// [0x00020102] 
struct ATGTankDestructibleBase_execSetupMesh_Parms
{
	// int                                             Level;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           LevelPct;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankDestructibleBase.NotifyHealthChanged
// [0x00020102] 
struct ATGTankDestructibleBase_execNotifyHealthChanged_Parms
{
	// class ATGTankDBPlayerController*                PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankDestructibleBase.ScriptGetTeamNum
// [0x00020902] ( FUNC_Event )
struct ATGTankDestructibleBase_eventScriptGetTeamNum_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankDestructibleBase.NotifyBaseInstigator
// [0x00020102] 
struct ATGTankDestructibleBase_execNotifyBaseInstigator_Parms
{
	struct ATGTankDestructibleBase_FInstigatorInfo     Info;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ATGTankDBPlayerController*                PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankDestructibleBase.WithinAttackDistance
// [0x00020002] 
struct ATGTankDestructibleBase_execWithinAttackDistance_Parms
{
	class ATGTankProj_Shell*                           Shell;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Distance;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bWithin : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGTankGame.TGTankDestructibleBase.TakeDamage
// [0x00824802] ( FUNC_Event )
struct ATGTankDestructibleBase_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x0020) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ATGTankDBMatch*                           Game;                                             		// 0x0048 (0x0004) [0x0000000000000000]              
	// class ATGTankDBPlayerController*                InstigatorPC;                                     		// 0x004C (0x0004) [0x0000000000000000]              
	// class ATGTankDBPlayerReplicationInfo*           InstigatorPRI;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	// struct ATGTankDestructibleBase_FInstigatorInfo  Info;                                             		// 0x0054 (0x0008) [0x0000000000000000]              
	// class ATGTankProj_Shell*                        Shell;                                            		// 0x005C (0x0004) [0x0000000000000000]              
	// int                                             actualDamage;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	// int                                             OldHealth;                                        		// 0x0064 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankDestructibleBase.Reset
// [0x00020802] ( FUNC_Event )
struct ATGTankDestructibleBase_eventReset_Parms
{
};

// Function TGTankGame.TGTankDestructibleBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGTankDestructibleBase_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankDestructibleBase.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGTankDestructibleBase_eventPostBeginPlay_Parms
{
};

// Function TGTankGame.TGTankTMPawn.NotifyTeamChanged
// [0x00020100] 
struct ATGTankTMPawn_execNotifyTeamChanged_Parms
{
};

// Function TGTankGame.TGTankTMPawn.PostRenderFor
// [0x00020900] ( FUNC_Event )
struct ATGTankTMPawn_eventPostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankDBMatch.NotifyBaseDestroyed
// [0x00020002] 
struct ATGTankDBMatch_execNotifyBaseDestroyed_Parms
{
	unsigned char                                      OwnerTeamIndex;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class ATGTankDBPlayerController*                   BaseDestroyer;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGTankDBGameReplicationInfo*             GRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// class APlayerReplicationInfo*                   Winner;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// class AController*                              P;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned char                                   WinnerTeamIndex;                                  		// 0x0014 (0x0001) [0x0000000000000000]              
};

// Function TGTankGame.TGTankDBMatch.CheckEndGame
// [0x00020002] 
struct ATGTankDBMatch_execCheckEndGame_Parms
{
	class APlayerReplicationInfo*                      Winner;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AController*                              P;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bLastTeam : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGTankGame.TGTankDBMatch.UpdateGameSpecificSettings
// [0x00020802] ( FUNC_Event )
struct ATGTankDBMatch_eventUpdateGameSpecificSettings_Parms
{
	struct FGameSpecificSettings                       Settings;                                         		// 0x0000 (0x0028) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankDBPlayerReplicationInfo.GetMvpValue
// [0x00020002] 
struct ATGTankDBPlayerReplicationInfo_execGetMvpValue_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankDBPlayerReplicationInfo.GetGameScore
// [0x00020002] 
struct ATGTankDBPlayerReplicationInfo_execGetGameScore_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             NewGameScore;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankDBPlayerReplicationInfo.AddBaseDamage
// [0x00020002] 
struct ATGTankDBPlayerReplicationInfo_execAddBaseDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGTankGame.TGTankPlayerInventoryManager.AddAllFunctionalItem
// [0x00020002] 
struct ATGTankPlayerInventoryManager_execAddAllFunctionalItem_Parms
{
	class ATGPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// TArray< int >                                   FunctionalItemSubTypeList;                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< int >                                   FunctionalItemIconIDList;                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ATGTankTMPlayerReplicationInfo*           TankPRI;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankMessage.GetLifeTime
// [0x00022002] 
struct UTGTankMessage_execGetLifeTime_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankMessage.GetPos
// [0x00022002] 
struct UTGTankMessage_execGetPos_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AHUD*                                        myHUD;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankMessage.GetString
// [0x00026002] 
struct UTGTankMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGTankGame.TGTankFactory.GetVehicleClassPath
// [0x00020002] 
struct ATGTankFactory_execGetVehicleClassPath_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGTankGame.TGTankFactory.GetSpawnPosition
// [0x00420002] 
struct ATGTankFactory_execGetSpawnPosition_Parms
{
	struct FVector                                     SpawnLoc;                                         		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    SpawnRot;                                         		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UClass*                                      TankClass;                                        		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGTTMPlayerStart*                        Start;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	// class ATGTTMPlayerStart*                        LastOptionalStart;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             TankLength;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             TankWidth;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankFactory.PostBeginPlay
// [0x00020102] 
struct ATGTankFactory_execPostBeginPlay_Parms
{
};

// Function TGTankGame.TGTankMatchInfoMessage.GetPos
// [0x00022002] 
struct UTGTankMatchInfoMessage_execGetPos_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AHUD*                                        myHUD;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankMatchInfoMessage.GetFontSize
// [0x00022002] 
struct UTGTankMatchInfoMessage_execGetFontSize_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI1;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI2;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      LocalPlayer;                                      		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankMatchInfoMessage.GetString
// [0x00026002] 
struct UTGTankMatchInfoMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGTankGame.TGTankSeqEvent_DestructibleHealthChanged.Activated
// [0x00020802] ( FUNC_Event )
struct UTGTankSeqEvent_DestructibleHealthChanged_eventActivated_Parms
{
};

// Function TGTankGame.TGTTMPlayerStart.IsBlocked
// [0x00820002] 
struct ATGTTMPlayerStart_execIsBlocked_Parms
{
	class UClass*                                      BaseClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                TankLength;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                TankWidth;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   HitActor;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIsBlocked : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0018 (0x0020) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x005C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEndOffset;                                   		// 0x0068 (0x000C) [0x0000000000000000]              
	// struct FVector                                  PosOffset;                                        		// 0x0074 (0x000C) [0x0000000000000000]              
	// struct FVector                                  RotVect;                                          		// 0x0080 (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x008C (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0090 (0x0004) [0x0000000000000000]              
	// int                                             OffsetX;                                          		// 0x0094 (0x0004) [0x0000000000000000]              
	// int                                             OffsetY;                                          		// 0x0098 (0x0004) [0x0000000000000000]              
	// float                                           Length;                                           		// 0x009C (0x0004) [0x0000000000000000]              
	// float                                           Degree;                                           		// 0x00A0 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankPickupMessage.GetString
// [0x00026002] 
struct UTGTankPickupMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGTankGame.TGTankProj_APShell.ProjectileHurtRadius
// [0x00820102] 
struct ATGTankProj_APShell_execProjectileHurtRadius_Parms
{
	struct FVector                                     HurtOrigin;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bCausedDamage : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  out_HitLocation;                                  		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  out_HitNormal;                                    		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0050 (0x0020) [0x0000000000000000]              
	// float                                           InDamageRadius;                                   		// 0x0070 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0074 (0x0004) [0x0000000000000000]              
	// float                                           Momentum;                                         		// 0x0078 (0x0004) [0x0000000000000000]              
	// class ATGRealTank*                              ImpactedTank;                                     		// 0x007C (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitDir;                                           		// 0x0080 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Impulse;                                          		// 0x008C (0x000C) [0x0000000000000000]              
	// struct FTankTarget                              HitTankTarget;                                    		// 0x0098 (0x0014) [0x0000000000000000]              
	// int                                             ActualHealthDamage;                               		// 0x00AC (0x0004) [0x0000000000000000]              
	// int                                             ActualArmorDamage;                                		// 0x00B0 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankProj_HEShell.HurtTankRadius
// [0x00820002] 
struct ATGTankProj_HEShell_execHurtTankRadius_Parms
{
	class ATGRealTank*                                 VictimTank;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HurtOrigin;                                       		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FTankTarget                              CurrTankTarget;                                   		// 0x0014 (0x0014) [0x0000000000000000]              
	// float                                           CurrCheckDist;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FVector                                  CurrCheckBoneLocation;                            		// 0x002C (0x000C) [0x0000000000000000]              
	// float                                           DistFactor;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             ActualHealthDamage;                               		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             ActualArmorDamage;                                		// 0x0044 (0x0004) [0x0000000000000000]              
	// int                                             TotalDamage;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankProj_HEShell.HurtBaseRadius
// [0x00020002] 
struct ATGTankProj_HEShell_execHurtBaseRadius_Parms
{
	class ATGTankDestructibleBase*                     BaseBuilding;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HurtOrigin;                                       		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGTankGame.TGTankProj_HEShell.ProjectileHurtRadius
// [0x00820102] 
struct ATGTankProj_HEShell_execProjectileHurtRadius_Parms
{
	struct FVector                                     HurtOrigin;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bCausedDamage : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// class AActor*                                   Victim;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal1;                                       		// 0x0030 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActorTemp;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	// struct FVector                                  StartTrace;                                       		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x005C (0x0020) [0x0000000000000000]              
	// unsigned long                                   bFinalCauseDamage : 1;                            		// 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           LocationZOffset;                                  		// 0x0080 (0x0004) [0x0000000000000000]              
	// struct FVector                                  PawnLocationOffset;                               		// 0x0084 (0x000C) [0x0000000000000000]              
	// float                                           InDamageRadius;                                   		// 0x0090 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0094 (0x0004) [0x0000000000000000]              
	// float                                           Momentum;                                         		// 0x0098 (0x0004) [0x0000000000000000]              
	// class ATGRealTank*                              ImpactedTank;                                     		// 0x009C (0x0004) [0x0000000000000000]              
	// class ATGRealTank*                              VictimTank;                                       		// 0x00A0 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitDir;                                           		// 0x00A4 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Impulse;                                          		// 0x00B0 (0x000C) [0x0000000000000000]              
	// struct FTankTarget                              HitTankTarget;                                    		// 0x00BC (0x0014) [0x0000000000000000]              
	// struct FVector                                  out_HitLocation;                                  		// 0x00D0 (0x000C) [0x0000000000000000]              
	// struct FVector                                  out_HitNormal;                                    		// 0x00DC (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x00E8 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x00F4 (0x000C) [0x0000000000000000]              
	// int                                             ActualHealthDamage;                               		// 0x0100 (0x0004) [0x0000000000000000]              
	// int                                             ActualArmorDamage;                                		// 0x0104 (0x0004) [0x0000000000000000]              
	// int                                             SplashDamage;                                     		// 0x0108 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankProj_NormalShell.ProjectileHurtRadius
// [0x00820102] 
struct ATGTankProj_NormalShell_execProjectileHurtRadius_Parms
{
	struct FVector                                     HurtOrigin;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bCausedDamage : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  out_HitLocation;                                  		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  out_HitNormal;                                    		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0050 (0x0020) [0x0000000000000000]              
	// float                                           InDamageRadius;                                   		// 0x0070 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0074 (0x0004) [0x0000000000000000]              
	// float                                           Momentum;                                         		// 0x0078 (0x0004) [0x0000000000000000]              
	// class ATGRealTank*                              ImpactedTank;                                     		// 0x007C (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitDir;                                           		// 0x0080 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Impulse;                                          		// 0x008C (0x000C) [0x0000000000000000]              
	// struct FTankTarget                              HitTankTarget;                                    		// 0x0098 (0x0014) [0x0000000000000000]              
	// int                                             ActualHealthDamage;                               		// 0x00AC (0x0004) [0x0000000000000000]              
	// int                                             ActualArmorDamage;                                		// 0x00B0 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTankWeaponSwitchMessage.GetString
// [0x00026002] 
struct UTGTankWeaponSwitchMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGTankGame.TGTDBHUD_GameTime.UpdateTimeLeft
// [0x00020002] 
struct UTGTDBHUD_GameTime_execUpdateTimeLeft_Parms
{
};

// Function TGTankGame.TGTDBHUD_GameTime.Tick
// [0x00020002] 
struct UTGTDBHUD_GameTime_execTick_Parms
{
	// class ULocalPlayer*                             LP;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGTankGame.TGTDBHUD_GameTime.Destroyed
// [0x00020802] ( FUNC_Event )
struct UTGTDBHUD_GameTime_eventDestroyed_Parms
{
};

// Function TGTankGame.TGTDBHUD_GameTime.PostBeginPlay
// [0x00020900] ( FUNC_Event )
struct UTGTDBHUD_GameTime_eventPostBeginPlay_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif