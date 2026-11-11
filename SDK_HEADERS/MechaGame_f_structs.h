/*
#############################################################################################
# Assault Fire (1.0.0.26) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: MechaGame_f_structs.h
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

// Function MechaGame.MechaFactoryBase.GetTeamNum
// [0x00020500] ( FUNC_Native )
struct AMechaFactoryBase_execGetTeamNum_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaFactoryBase.SetHUDLocation
// [0x00020500] ( FUNC_Native )
struct AMechaFactoryBase_execSetHUDLocation_Parms
{
	struct FVector                                     NewHUDLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaFactoryBase.SpawnVehicle
// [0x00020800] ( FUNC_Event )
struct AMechaFactoryBase_eventSpawnVehicle_Parms
{
};

// Function MechaGame.MechaGame.CheckAssistant
// [0x00020002] 
struct AMechaGame_execCheckAssistant_Parms
{
	class ATGRealMecha*                                KilledMecha;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGMechaPlayerReplicationInfo*               KillerPRI;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaPlayerReplicationInfo*            AssistantPRI;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGMechaGamePlayerController*             AssistantPC;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             AssistDmg;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             FindIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           AssistLastDmgTime;                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGame.Killed
// [0x00020002] 
struct AMechaGame_execKilled_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledPlayer;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaPlayerReplicationInfo*            KillerPRI;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGMechaPlayerReplicationInfo*            KilledPRI;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             KilledMecha;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bEnemyKill : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.MechaGame.CalcACE
// [0x00020002] 
struct AMechaGame_execCalcACE_Parms
{
	// class ATGMechaPlayerReplicationInfo*            PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AMechaGameReplicationInfo*                GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGame.CalcMVP
// [0x00020002] 
struct AMechaGame_execCalcMVP_Parms
{
	// class ATGMechaPlayerReplicationInfo*            PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AMechaGameReplicationInfo*                GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           MvpValue;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           BestMvpValue;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGame.EndGame
// [0x00020002] 
struct AMechaGame_execEndGame_Parms
{
	class APlayerReplicationInfo*                      Winner;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function MechaGame.MechaGame.ScoreKill
// [0x00020002] 
struct AMechaGame_execScoreKill_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Other;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaPlayerReplicationInfo*            PRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGame.SetMechaMaxFlayHeight
// [0x00020002] 
struct AMechaGame_execSetMechaMaxFlayHeight_Parms
{
	float                                              MaxHeight;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaGame.AddDefaultInventoryEx
// [0x00024000] 
struct AMechaGame_execAddDefaultInventoryEx_Parms
{
	class APawn*                                       PlayerPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.MechaGame.NotifyItemDestroyed
// [0x00020000] 
struct AMechaGame_execNotifyItemDestroyed_Parms
{
	class AMechaDestructibleItem*                      Item;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AMechaGamePlayerController*                  InstigatorPC;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaGame.NotifyCurrentTarget
// [0x00020000] 
struct AMechaGame_execNotifyCurrentTarget_Parms
{
	class AMechaDestructibleItem*                      Item;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaGamePlayerController.ReceiveTextInfo
// [0x010201C0] 
struct AMechaGamePlayerController_execReceiveTextInfo_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaGamePlayerController.ReceiveParticleMessage
// [0x010201C0] 
struct AMechaGamePlayerController_execReceiveParticleMessage_Parms
{
	int                                                MessageSwitch;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaGamePlayerController.ReinforceWeapon
// [0x00020000] 
struct AMechaGamePlayerController_execReinforceWeapon_Parms
{
	float                                              DamageScaleDelta;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaGamePlayerController.NotifySkillUsed
// [0x00020000] 
struct AMechaGamePlayerController_execNotifySkillUsed_Parms
{
	class AMechaSkillBase*                             Skill;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaGamePlayerController.TimerServerToClientDoSpecialMove
// [0x00020002] 
struct AMechaGamePlayerController_execTimerServerToClientDoSpecialMove_Parms
{
};

// Function MechaGame.MechaGamePlayerController.ServerToClientDoSpecialMove
// [0x010201C3] ( FUNC_Final )
struct AMechaGamePlayerController_execServerToClientDoSpecialMove_Parms
{
	struct FMechaSpecialMoveStruct                     NewMoveStruct;                                    		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceMove : 1;                                   		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.MechaGamePlayerController.ServerDictateAdditivSpecialMove
// [0x00824803] ( FUNC_Final | FUNC_Event )
struct AMechaGamePlayerController_eventServerDictateAdditivSpecialMove_Parms
{
	unsigned char                                      NewMove;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                InSpecialMoveFlags;                               		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FMechaSpecialMoveStruct                  NewMoveStruct;                                    		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function MechaGame.MechaGamePlayerController.ServerDictatSpecialMove
// [0x00824803] ( FUNC_Final | FUNC_Event )
struct AMechaGamePlayerController_eventServerDictatSpecialMove_Parms
{
	unsigned char                                      NewMove;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                InSpecialMoveFlags;                               		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FMechaSpecialMoveStruct                  NewMoveStruct;                                    		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function MechaGame.MechaGamePlayerController.ClientToServerDoSpecialMove
// [0x00A200C3] ( FUNC_Final )
struct AMechaGamePlayerController_execClientToServerDoSpecialMove_Parms
{
	struct FMechaSpecialMoveStruct                     NewMoveStruct;                                    		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceMove : 1;                                   		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                RotYaw;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 NewRot;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.MechaGamePlayerController.DoAdditivSpecialMove
// [0x00824803] ( FUNC_Final | FUNC_Event )
struct AMechaGamePlayerController_eventDoAdditivSpecialMove_Parms
{
	unsigned char                                      NewMove;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceMove : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                InSpecialMoveFlags;                               		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FMechaSpecialMoveStruct                  NewMoveStruct;                                    		// 0x000C (0x0010) [0x0000000000000000]              
};

// Function MechaGame.MechaGamePlayerController.DoSpecialMove
// [0x00824803] ( FUNC_Final | FUNC_Event )
struct AMechaGamePlayerController_eventDoSpecialMove_Parms
{
	unsigned char                                      NewMove;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceMove : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                InSpecialMoveFlags;                               		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FMechaSpecialMoveStruct                  NewMoveStruct;                                    		// 0x000C (0x0010) [0x0000000000000000]              
};

// Function MechaGame.MechaGamePlayerController.ServerSetHealth
// [0x00220042] 
struct AMechaGamePlayerController_execServerSetHealth_Parms
{
	int                                                NewHealth;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaGamePlayerController.SetHealth
// [0x00020202] ( FUNC_Exec )
struct AMechaGamePlayerController_execSetHealth_Parms
{
	int                                                NewHealth;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaGamePlayerController.ClientHearSound
// [0x01024942] ( FUNC_Event )
struct AMechaGamePlayerController_eventClientHearSound_Parms
{
	class USoundCue*                                   ASound;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      SourceActor;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SourceLocation;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bStopWhenOwnerDestroyed : 1;                      		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bIsOccluded : 1;                                  		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class UAudioComponent*                          AC;                                               		// 0x001C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// float                                           DistanceTemp;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGamePlayerController.ClientSetRespawnStartTime
// [0x010201C2] 
struct AMechaGamePlayerController_execClientSetRespawnStartTime_Parms
{
	float                                              RespTime;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              RespDelay;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaGamePlayerController.NotifyViewTargetUpdate
// [0x00020102] 
struct AMechaGamePlayerController_execNotifyViewTargetUpdate_Parms
{
	// class ATGRealMecha*                             Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             ViewMecha;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGamePlayerController.ClientSetViewTarget
// [0x010249C2] ( FUNC_Event )
struct AMechaGamePlayerController_eventClientSetViewTarget_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FViewTargetTransitionParams                 TransitionParams;                                 		// 0x0004 (0x0010) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.MechaGamePlayerController.ProcessFrozenStart
// [0x00420002] 
struct AMechaGamePlayerController_execProcessFrozenStart_Parms
{
	struct FVector                                     newAccel;                                         		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function MechaGame.MechaGamePlayerController.GetFOVAngle
// [0x00020802] ( FUNC_Event )
struct AMechaGamePlayerController_eventGetFOVAngle_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaGamePlayerController.GetPlayerViewPoint
// [0x00420902] ( FUNC_Event )
struct AMechaGamePlayerController_eventGetPlayerViewPoint_Parms
{
	struct FVector                                     POVLocation;                                      		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    POVRotation;                                      		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// float                                           DeltaTime;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// class AUTPawn*                                  P;                                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGamePlayerController.NotifySkillCreated
// [0x00020000] 
struct AMechaGamePlayerController_execNotifySkillCreated_Parms
{
	class AMechaSkillBase*                             Skill;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaGamePlayerController.DrawObjectives
// [0x00020102] 
struct AMechaGamePlayerController_execDrawObjectives_Parms
{
	class AHUD*                                        H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AMechaGameHUD*                            GameHUD;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGamePlayerController.DrawHUD
// [0x00020002] 
struct AMechaGamePlayerController_execDrawHUD_Parms
{
	class AHUD*                                        H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealMecha*                             Mecha;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGamePlayerController.ClientReset
// [0x010201C2] 
struct AMechaGamePlayerController_execClientReset_Parms
{
	// class AMechaRoundGameReplicationInfo*           GRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGamePlayerController.ClientRestart
// [0x010201C2] 
struct AMechaGamePlayerController_execClientRestart_Parms
{
	class APawn*                                       NewPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaGamePlayerController.ClearObjectives
// [0x00020102] 
struct AMechaGamePlayerController_execClearObjectives_Parms
{
};

// Function MechaGame.MechaGamePlayerController.IsObjectiveInsight
// [0x00020102] 
struct AMechaGamePlayerController_execIsObjectiveInsight_Parms
{
	class AMecha*                                      Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             FindIdx;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGamePlayerController.AddObjective
// [0x00820102] 
struct AMechaGamePlayerController_execAddObjective_Parms
{
	class AMecha*                                      Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bInSight : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bEnemy : 1;                                       		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FMechaObjective                          Obj;                                              		// 0x000C (0x0008) [0x0000000000000000]              
	// int                                             FindIdx;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGamePlayerController.PlayerTick
// [0x00020802] ( FUNC_Event )
struct AMechaGamePlayerController_eventPlayerTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AMecha*                                   Mecha;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGamePlayerReplicationInfo.NeedLicenseFor
// [0x00020102] 
struct AMechaGamePlayerReplicationInfo_execNeedLicenseFor_Parms
{
	unsigned char                                      NewType;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             FindIdx;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGamePlayerReplicationInfo.HasLicenseFor
// [0x00020102] 
struct AMechaGamePlayerReplicationInfo_execHasLicenseFor_Parms
{
	unsigned char                                      NewType;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.MechaGamePlayerReplicationInfo.HasMechaLicense
// [0x00020102] 
struct AMechaGamePlayerReplicationInfo_execHasMechaLicense_Parms
{
	unsigned char                                      LicenseType;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGamePlayerReplicationInfo.AddMechaLicense
// [0x00020002] 
struct AMechaGamePlayerReplicationInfo_execAddMechaLicense_Parms
{
	unsigned char                                      LicenseType;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGamePlayerReplicationInfo.NotifyMechaSelected
// [0x00020002] 
struct AMechaGamePlayerReplicationInfo_execNotifyMechaSelected_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaGamePlayerReplicationInfo.SetMechaType
// [0x00020002] 
struct AMechaGamePlayerReplicationInfo_execSetMechaType_Parms
{
	unsigned char                                      NewType;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaGamePlayerReplicationInfo.GetMvpValue
// [0x00020002] 
struct AMechaGamePlayerReplicationInfo_execGetMvpValue_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaGamePlayerReplicationInfo.RoundClear
// [0x00020000] 
struct AMechaGamePlayerReplicationInfo_execRoundClear_Parms
{
};

// Function MechaGame.MechaGameReplicationInfo.GetMechaTypeForWeapon
// [0x00020002] 
struct AMechaGameReplicationInfo_execGetMechaTypeForWeapon_Parms
{
	unsigned char                                      WeapType;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             FindIdx;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGameReplicationInfo.NotifyMechaWeaponDamage
// [0x00020002] 
struct AMechaGameReplicationInfo_execNotifyMechaWeaponDamage_Parms
{
	unsigned char                                      MechaWeaponType;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaGameReplicationInfo.NotifyMechaSelected
// [0x00020002] 
struct AMechaGameReplicationInfo_execNotifyMechaSelected_Parms
{
	unsigned char                                      MechaType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaRoundGameReplicationInfo.ClientRoundClear
// [0x00020100] 
struct AMechaRoundGameReplicationInfo_execClientRoundClear_Parms
{
};

// Function MechaGame.MechaRoundGameReplicationInfo.RoundClear
// [0x00020000] 
struct AMechaRoundGameReplicationInfo_execRoundClear_Parms
{
};

// Function MechaGame.MechaSpecialMove.GetAimOffsetOverride
// [0x00420802] ( FUNC_Event )
struct UMechaSpecialMove_eventGetAimOffsetOverride_Parms
{
	struct FRotator                                    DeltaRot;                                         		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSpecialMove.RigidBodyWorldCollision
// [0x00420800] ( FUNC_Event )
struct UMechaSpecialMove_eventRigidBodyWorldCollision_Parms
{
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class UPrimitiveComponent*                         OtherComponent;                                   		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FCollisionImpactData                        RigidCollisionDate;                               		// 0x0008 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function MechaGame.MechaSpecialMove.OnRigidBodySpringOverextension
// [0x00020000] 
struct UMechaSpecialMove_execOnRigidBodySpringOverextension_Parms
{
	class URB_BodyInstance*                            BodyInstance;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSpecialMove.ShouldReplicate
// [0x00020002] 
struct UMechaSpecialMove_execShouldReplicate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSpecialMove.FirePressedNotification
// [0x00020000] 
struct UMechaSpecialMove_execFirePressedNotification_Parms
{
};

// Function MechaGame.MechaSpecialMove.RootMotionExtracted
// [0x00420000] 
struct UMechaSpecialMove_execRootMotionExtracted_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FBoneAtom                                   ExtractedRootMotionDelta;                         		// 0x0010 (0x0020) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function MechaGame.MechaSpecialMove.RootMotionModeChanged
// [0x00020000] 
struct UMechaSpecialMove_execRootMotionModeChanged_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function MechaGame.MechaSpecialMove.LimitViewRotation
// [0x00420000] 
struct UMechaSpecialMove_execLimitViewRotation_Parms
{
	struct FRotator                                    out_ViewRotation;                                 		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function MechaGame.MechaSpecialMove.IsPawnRotationLocked
// [0x00020003] ( FUNC_Final )
struct UMechaSpecialMove_execIsPawnRotationLocked_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSpecialMove.BS_AnimEndNotify
// [0x00020002] 
struct UMechaSpecialMove_execBS_AnimEndNotify_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSpecialMove.Tick
// [0x00020000] 
struct UMechaSpecialMove_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSpecialMove.SetLockPawnRotation
// [0x00020003] ( FUNC_Final )
struct UMechaSpecialMove_execSetLockPawnRotation_Parms
{
	unsigned long                                      bLock : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.MechaSpecialMove.SetMovementLock
// [0x00020003] ( FUNC_Final )
struct UMechaSpecialMove_execSetMovementLock_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.MechaSpecialMove.SpecialMoveEnded
// [0x00020002] 
struct UMechaSpecialMove_execSpecialMoveEnded_Parms
{
	unsigned char                                      PrevMove;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      NextMove;                                         		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSpecialMove.SpecialMoveStarted
// [0x00020002] 
struct UMechaSpecialMove_execSpecialMoveStarted_Parms
{
	unsigned long                                      bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      PrevMove;                                         		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class APawn*                                    Owner;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSpecialMove.CanInteractWithPawn
// [0x00020002] 
struct UMechaSpecialMove_execCanInteractWithPawn_Parms
{
	class APVEPawn*                                    OtherPawn;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSpecialMove.InternalCanDoSpecialMove
// [0x00080002] 
struct UMechaSpecialMove_execInternalCanDoSpecialMove_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSpecialMove.CanDoSpecialMove
// [0x00024003] ( FUNC_Final )
struct UMechaSpecialMove_execCanDoSpecialMove_Parms
{
	unsigned long                                      bForceCheck : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSpecialMove.CanOverridSpecialMove
// [0x00020002] 
struct UMechaSpecialMove_execCanOverridSpecialMove_Parms
{
	unsigned char                                      InMove;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSpecialMove.CanOverrideMoveWith
// [0x00020002] 
struct UMechaSpecialMove_execCanOverrideMoveWith_Parms
{
	unsigned char                                      NewMove;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSpecialMove.CanChainMove
// [0x00020002] 
struct UMechaSpecialMove_execCanChainMove_Parms
{
	unsigned char                                      NextMove;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaProj_TracerBase.ApplyFluidSurfaceImpact
// [0x00020102] 
struct ATGMechaProj_TracerBase_execApplyFluidSurfaceImpact_Parms
{
	class AFluidSurfaceActor*                          Fluid;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// float                                           AdjustedVelocity;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_TracerBase.StopSimulating
// [0x00080102] 
struct ATGMechaProj_TracerBase_execStopSimulating_Parms
{
};

// Function MechaGame.TGMechaProj_TracerBase.Init
// [0x00020002] 
struct ATGMechaProj_TracerBase_execInit_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   OuterBase;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_TracerBase.SuppressAudio
// [0x00020102] 
struct ATGMechaProj_TracerBase_execSuppressAudio_Parms
{
	unsigned long                                      bSuppress : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMechaProj_TracerBase.StopInFlightAudio
// [0x00080102] 
struct ATGMechaProj_TracerBase_execStopInFlightAudio_Parms
{
};

// Function MechaGame.TGMechaProj_TracerBase.StartInFlightAudio
// [0x00080102] 
struct ATGMechaProj_TracerBase_execStartInFlightAudio_Parms
{
};

// Function MechaGame.TGMechaProj_TracerBase.StopTrailEmitter
// [0x00080102] 
struct ATGMechaProj_TracerBase_execStopTrailEmitter_Parms
{
};

// Function MechaGame.TGMechaProj_TracerBase.SpawnTrail
// [0x00080102] 
struct ATGMechaProj_TracerBase_execSpawnTrail_Parms
{
};

// Function MechaGame.TGMechaProj_TracerBase.Destroyed
// [0x00020102] 
struct ATGMechaProj_TracerBase_execDestroyed_Parms
{
};

// Function MechaGame.TGMechaProj_TracerBase.PostBeginPlay
// [0x00020102] 
struct ATGMechaProj_TracerBase_execPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaProjectileBase.GetRange
// [0x00022102] 
struct ATGMechaProjectileBase_execGetRange_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           AccelTime;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProjectileBase.GetTimeToLocation
// [0x00020102] 
struct ATGMechaProjectileBase_execGetTimeToLocation_Parms
{
	struct FVector                                     TargetLoc;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaProjectileBase.StaticGetTimeToLocation
// [0x00022102] 
struct ATGMechaProjectileBase_execStaticGetTimeToLocation_Parms
{
	struct FVector                                     TargetLoc;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     StartLoc;                                         		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 RequestedBy;                                      		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaProjectileBase.CalculateTravelTime
// [0x00022003] ( FUNC_Final )
struct ATGMechaProjectileBase_execCalculateTravelTime_Parms
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

// Function MechaGame.TGMechaProjectileBase.GetPawnOwner
// [0x00020100] 
struct ATGMechaProjectileBase_execGetPawnOwner_Parms
{
	class APawn*                                       ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaProjectileBase.GetHomingTarget
// [0x00020802] ( FUNC_Event )
struct ATGMechaProjectileBase_eventGetHomingTarget_Parms
{
	class AUTProjectile*                               Seeker;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaProjectileBase.CalcCamera
// [0x00420102] 
struct ATGMechaProjectileBase_execCalcCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_FOV;                                          		// 0x001C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaProjectileBase.MyOnParticleSystemFinished
// [0x00020102] 
struct ATGMechaProjectileBase_execMyOnParticleSystemFinished_Parms
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function MechaGame.TGMechaProjectileBase.Destroyed
// [0x00020102] 
struct ATGMechaProjectileBase_execDestroyed_Parms
{
};

// Function MechaGame.TGMechaProjectileBase.HideProjectile
// [0x00020102] 
struct ATGMechaProjectileBase_execHideProjectile_Parms
{
	// class UMeshComponent*                           ComponentIt;                                      		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function MechaGame.TGMechaProjectileBase.TornOff
// [0x00020802] ( FUNC_Event )
struct ATGMechaProjectileBase_eventTornOff_Parms
{
};

// Function MechaGame.TGMechaProjectileBase.ShutDown
// [0x00820102] 
struct ATGMechaProjectileBase_execShutDown_Parms
{
	// struct FVector                                  HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProjectileBase.ShouldSpawnExplosionLight
// [0x00020102] 
struct ATGMechaProjectileBase_execShouldSpawnExplosionLight_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APlayerController*                        P;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProjectileBase.SpawnExplosionEffects
// [0x00820102] 
struct ATGMechaProjectileBase_execSpawnExplosionEffects_Parms
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

// Function MechaGame.TGMechaProjectileBase.SetExplosionEffectParameters
// [0x00020100] 
struct ATGMechaProjectileBase_execSetExplosionEffectParameters_Parms
{
	class UParticleSystemComponent*                    ProjExplosion;                                    		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function MechaGame.TGMechaProjectileBase.SpawnFlightEffects
// [0x00020102] 
struct ATGMechaProjectileBase_execSpawnFlightEffects_Parms
{
};

// Function MechaGame.TGMechaProjectileBase.Explode
// [0x00020102] 
struct ATGMechaProjectileBase_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProjectileBase.ProcessTouch
// [0x00020102] 
struct ATGMechaProjectileBase_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProjectileBase.Init
// [0x00020002] 
struct ATGMechaProjectileBase_execInit_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProjectileBase.SetInitialState
// [0x00020902] ( FUNC_Event )
struct ATGMechaProjectileBase_eventSetInitialState_Parms
{
};

// Function MechaGame.TGMechaProjectileBase.PostBeginPlay
// [0x00020102] 
struct ATGMechaProjectileBase_execPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaProjectileBase.PreBeginPlay
// [0x00020802] ( FUNC_Event )
struct ATGMechaProjectileBase_eventPreBeginPlay_Parms
{
	// class AUTWeaponPawn*                            WeaponPawn;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProjectileBase.CanSplash
// [0x00020102] 
struct ATGMechaProjectileBase_execCanSplash_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaProjectileBase.Landed
// [0x00020902] ( FUNC_Event )
struct ATGMechaProjectileBase_eventLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProjectileBase.CreateProjectileLight
// [0x00020900] ( FUNC_Event )
struct ATGMechaProjectileBase_eventCreateProjectileLight_Parms
{
};

// Function MechaGame.TGMechaProjectile.Tick
// [0x00020902] ( FUNC_Event )
struct ATGMechaProjectile_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProjectile.SpawnExplosionEffects
// [0x00820102] 
struct ATGMechaProjectile_execSpawnExplosionEffects_Parms
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

// Function MechaGame.TGMechaProjectile.SpawnFlightEffects
// [0x00020102] 
struct ATGMechaProjectile_execSpawnFlightEffects_Parms
{
};

// Function MechaGame.TGMechaProjectile.Destroyed
// [0x00020102] 
struct ATGMechaProjectile_execDestroyed_Parms
{
};

// Function MechaGame.TGMechaProjectile.ProjectileHurtRadius
// [0x00020102] 
struct ATGMechaProjectile_execProjectileHurtRadius_Parms
{
	struct FVector                                     HurtOrigin;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGPlayerController*                      PC;                                               		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProjectile.HitWall
// [0x00020922] ( FUNC_Event )
struct ATGMechaProjectile_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// class AKActorFromStatic*                        NewKActor;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UStaticMeshComponent*                     HitStaticMesh;                                    		// 0x0018 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class AFracturedStaticMeshActor*                fracturedActor;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	// class UFracturedStaticMesh*                     FracMesh;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProjectile.Explode
// [0x00020102] 
struct ATGMechaProjectile_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProjectile.ClientSpawnExplosionEffects
// [0x00020102] 
struct ATGMechaProjectile_execClientSpawnExplosionEffects_Parms
{
};

// Function MechaGame.TGMechaProjectile.FindWeaponHitNormal
// [0x00420102] 
struct ATGMechaProjectile_execFindWeaponHitNormal_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     End;                                              		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Start;                                            		// 0x0024 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0030 (0x0020) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AActor*                                      ReturnValue;                                      		// 0x0050 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaProjectile.ProcessTouch
// [0x00820102] 
struct ATGMechaProjectile_execProcessTouch_Parms
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

// Function MechaGame.TGMechaProjectile.ExplodeTimer
// [0x00020002] 
struct ATGMechaProjectile_execExplodeTimer_Parms
{
};

// Function MechaGame.TGMechaProjectile.Init
// [0x00020002] 
struct ATGMechaProjectile_execInit_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProjectile.PostBeginPlay
// [0x00020102] 
struct ATGMechaProjectile_execPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaProjectile.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGMechaProjectile_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProjectile.OnShutdownTimer
// [0x00020102] 
struct ATGMechaProjectile_execOnShutdownTimer_Parms
{
};

// Function MechaGame.TGMechaProj_Aerogun.Tick
// [0x00020902] ( FUNC_Event )
struct ATGMechaProj_Aerogun_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProj_Aerogun.HitWall
// [0x00020922] ( FUNC_Event )
struct ATGMechaProj_Aerogun_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// class AKActorFromStatic*                        NewKActor;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UStaticMeshComponent*                     HitStaticMesh;                                    		// 0x0018 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class AFracturedStaticMeshActor*                fracturedActor;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	// class UFracturedStaticMesh*                     FracMesh;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_Aerogun.ProcessTouch
// [0x00020102] 
struct ATGMechaProj_Aerogun_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProj_Aerogun.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGMechaProj_Aerogun_eventPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaProj_Aerogun.PrecisionExplode
// [0x00020902] ( FUNC_Event )
struct ATGMechaProj_Aerogun_eventPrecisionExplode_Parms
{
};

// Function MechaGame.TGMechaProj_Aerogun.SetRepMatrixInfo
// [0x00020002] 
struct ATGMechaProj_Aerogun_execSetRepMatrixInfo_Parms
{
};

// Function MechaGame.TGMechaProj_Aerogun.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGMechaProj_Aerogun_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.ParticleSystemCleanUp
// [0x00020500] ( FUNC_Native )
struct ATGMechaWeap_FlameThrowerSprayBase_execParticleSystemCleanUp_Parms
{
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.ScorchDecalTraceFunc
// [0x00424102] 
struct ATGMechaWeap_FlameThrowerSprayBase_execScorchDecalTraceFunc_Parms
{
	struct FVector                                     out_TraceStart;                                   		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     out_TraceDest;                                    		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              RandomOffsetRadius;                               		// 0x0018 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FVector                                     ForceStartLocation;                               		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.UpdateFireLoopSound
// [0x00040103] ( FUNC_Final )
struct ATGMechaWeap_FlameThrowerSprayBase_execUpdateFireLoopSound_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           GoalPitch;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           GoalVolume;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           RotVelParam;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.UpdateSplashes
// [0x00840103] ( FUNC_Final )
struct ATGMechaWeap_FlameThrowerSprayBase_execUpdateSplashes_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UParticleSystemComponent*                 DesiredSplashPSC;                                 		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAudioComponent*                          DesiredSplashAC;                                  		// 0x0008 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// struct FVector                                  DesiredSplashLoc;                                 		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 DesiredSplashRot;                                 		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  IncidentDirection;                                		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SplashX;                                          		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SplashY;                                          		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  SplashZ;                                          		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SplashNormal;                                     		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0060 (0x000C) [0x0000000000000000]              
	// class ATGRealMecha*                             HitMecha;                                         		// 0x006C (0x0004) [0x0000000000000000]              
	// class AActor*                                   SplashTouchActor;                                 		// 0x0070 (0x0004) [0x0000000000000000]              
	// float                                           Dot;                                              		// 0x0074 (0x0004) [0x0000000000000000]              
	// float                                           Dmg;                                              		// 0x0078 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.GetAimVector
// [0x00C20102] 
struct ATGMechaWeap_FlameThrowerSprayBase_execGetAimVector_Parms
{
	struct FVector                                     StartLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vForward;                                         		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     vRight;                                           		// 0x0018 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     vUp;                                              		// 0x0024 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FRotator                                 AimRotator;                                       		// 0x0030 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.GetFireLineTraceVector
// [0x00820102] 
struct ATGMechaWeap_FlameThrowerSprayBase_execGetFireLineTraceVector_Parms
{
	struct FVector                                     StartLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vForward;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vRight;                                           		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vUp;                                              		// 0x0030 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.Tick
// [0x00820102] 
struct ATGMechaWeap_FlameThrowerSprayBase_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   TouchActor;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           Dmg;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           EnergyDmg;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           DistToHitActor;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           MatFade;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// float                                           CurrentHeat;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           CurScale;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FVector                                  LightPosWorld;                                    		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  LightPosLocal;                                    		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 DummyRot0;                                        		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 DummyRot1;                                        		// 0x0054 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bDeltDamage : 1;                                  		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ATGPlayerReplicationInfo*                 GPRI;                                             		// 0x0064 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bCaculateDamage : 1;                              		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ATGMechaWeapon*                           InstigatorWeap;                                   		// 0x006C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.DoFlameCollisionDetection
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ATGMechaWeap_FlameThrowerSprayBase_execDoFlameCollisionDetection_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.DebugRenderBones
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct ATGMechaWeap_FlameThrowerSprayBase_execDebugRenderBones_Parms
{
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.SetBoneSpawnParticlesActive
// [0x00080102] 
struct ATGMechaWeap_FlameThrowerSprayBase_execSetBoneSpawnParticlesActive_Parms
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	unsigned long                                      bActive : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.UpdatePerBoneFireFX
// [0x00020102] 
struct ATGMechaWeap_FlameThrowerSprayBase_execUpdatePerBoneFireFX_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             ChainIdx;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             NumChainBones;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             ActiveFXRangeMax;                                 		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.SetupUpParaForFrameDamage
// [0x00020102] 
struct ATGMechaWeap_FlameThrowerSprayBase_execSetupUpParaForFrameDamage_Parms
{
	float                                              MinDamagePerSeconds;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              MaxDamagePerSeconds;                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              LocalEnergyDamagePerSecond;                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              SprayDamageInterval;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              WeaponSeedSprayVel;                               		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              WeaponSeedDecel;                                  		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              WeaponSeedMaxAge;                                 		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              WeaponSeedMinChainLength;                         		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              WeaponSeedSimFreq;                                		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.AttachToWeapon
// [0x00020102] 
struct ATGMechaWeap_FlameThrowerSprayBase_execAttachToWeapon_Parms
{
	class AActor*                                      InOwner;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USkeletalMeshComponent*                      MeshToAttachTo;                                   		// 0x000C (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	float                                              LocalMinDamagePerSeconds;                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              LocalMaxDamagePerSeconds;                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              LocalEnergyDamagePerSecond;                       		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              LocalDamageInterval;                              		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              LocalWeaponSeedSprayVel;                          		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              LocalWeaponSeedDecel;                             		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              LocalWeaponSeedMaxAge;                            		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              LocalWeaponSeedMinChainLength;                    		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              LocalWeaponSeedSimFreq;                           		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.SetupPerBoneFireFX
// [0x00040103] ( FUNC_Final )
struct ATGMechaWeap_FlameThrowerSprayBase_execSetupPerBoneFireFX_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             NumChainBones;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.DestroyIfAllEmittersFinished
// [0x00040501] ( FUNC_Final | FUNC_Native )
struct ATGMechaWeap_FlameThrowerSprayBase_execDestroyIfAllEmittersFinished_Parms
{
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.OnAnimEnd
// [0x00020902] ( FUNC_Event )
struct ATGMechaWeap_FlameThrowerSprayBase_eventOnAnimEnd_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.DetachAndFinish
// [0x00020102] 
struct ATGMechaWeap_FlameThrowerSprayBase_execDetachAndFinish_Parms
{
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.ClearMeshPruning
// [0x00080102] 
struct ATGMechaWeap_FlameThrowerSprayBase_execClearMeshPruning_Parms
{
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.Destroyed
// [0x00020102] 
struct ATGMechaWeap_FlameThrowerSprayBase_execDestroyed_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.BeginSpray
// [0x00020102] 
struct ATGMechaWeap_FlameThrowerSprayBase_execBeginSpray_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.PostBeginPlay
// [0x00020102] 
struct ATGMechaWeap_FlameThrowerSprayBase_execPostBeginPlay_Parms
{
	// int                                             ChainIdx;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.FinishActiveReloadSpray
// [0x00040003] ( FUNC_Final )
struct ATGMechaWeap_FlameThrowerSprayBase_execFinishActiveReloadSpray_Parms
{
	// unsigned long                                   bOldPlayActiveChild : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.PlayLoopingSound
// [0x00040103] ( FUNC_Final )
struct ATGMechaWeap_FlameThrowerSprayBase_execPlayLoopingSound_Parms
{
	class USoundCue*                                   Cue;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UAudioComponent*                             AC;                                               		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	float                                              FadeInTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UAudioComponent*                             ReturnValue;                                      		// 0x000C (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.GetEnergyDamage
// [0x00040003] ( FUNC_Final )
struct ATGMechaWeap_FlameThrowerSprayBase_execGetEnergyDamage_Parms
{
	float                                              BurnTime;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.GetDamage
// [0x00840003] ( FUNC_Final )
struct ATGMechaWeap_FlameThrowerSprayBase_execGetDamage_Parms
{
	float                                              BurnTime;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              HitDist;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector2D                                DPSRange;                                         		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector2D                                DistRange;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
	// float                                           Damage;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           Pct;                                              		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.GetFlickerVal
// [0x00040103] ( FUNC_Final )
struct ATGMechaWeap_FlameThrowerSprayBase_execGetFlickerVal_Parms
{
	float                                              BaseVal;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Intensity;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Last;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InterpSpeed;                                      		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           GoalVal;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.ClearAnimNodes
// [0x00040103] ( FUNC_Final )
struct ATGMechaWeap_FlameThrowerSprayBase_execClearAnimNodes_Parms
{
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.CacheAnimNodes
// [0x00040103] ( FUNC_Final )
struct ATGMechaWeap_FlameThrowerSprayBase_execCacheAnimNodes_Parms
{
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.FlameSetLocation
// [0x00020400] ( FUNC_Native )
struct ATGMechaWeap_FlameThrowerSprayBase_execFlameSetLocation_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.UpdateFlameSeeds
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ATGMechaWeap_FlameThrowerSprayBase_execUpdateFlameSeeds_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     VelDirection;                                     		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeaponBase.CalcProjTrajectory
// [0x00020400] ( FUNC_Native )
struct ATGMechaWeaponBase_execCalcProjTrajectory_Parms
{
	struct FVector                                     StartLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     AimDir;                                           		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              ProjLifeSpan;                                     		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              projSpeed;                                        		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ProjMaxSpeed;                                     		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ProjAccelRate;                                    		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ProjGravityScaling;                               		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaAnimBlendByFlying.UpdateFlyingState
// [0x00020400] ( FUNC_Native )
struct UTGMechaAnimBlendByFlying_execUpdateFlyingState_Parms
{
};

// Function MechaGame.TGMechaAnimNodeSeqWeap.WeapTypeChanged
// [0x00020902] ( FUNC_Event )
struct UTGMechaAnimNodeSeqWeap_eventWeapTypeChanged_Parms
{
	struct FName                                       NewAimProfileName;                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FName                                    NewSeqName;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function MechaGame.TGMechaSkelCtrl_FlamethrowerScaling.ResetTransients
// [0x00020102] 
struct UTGMechaSkelCtrl_FlamethrowerScaling_execResetTransients_Parms
{
};

// Function MechaGame.MechaBase.SetMovementPhysics
// [0x00020002] 
struct AMechaBase_execSetMovementPhysics_Parms
{
};

// Function MechaGame.MechaBase.GetCurrentSpecialMove
// [0x00020102] 
struct AMechaBase_execGetCurrentSpecialMove_Parms
{
	class UMechaSpecialMove*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaBase.IsDoingAdditivSpecialMove
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct AMechaBase_execIsDoingAdditivSpecialMove_Parms
{
	unsigned char                                      AMove;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaBase.IsDoingASpecialMove
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct AMechaBase_execIsDoingASpecialMove_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaBase.IsDoingSpecialMove
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct AMechaBase_execIsDoingSpecialMove_Parms
{
	unsigned char                                      AMove;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaBase.FillSpecialMoveStructFromParams
// [0x00824103] ( FUNC_Final )
struct AMechaBase_execFillSpecialMoveStructFromParams_Parms
{
	unsigned char                                      InSpecialMove;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                InSpecialMoveFlags;                               		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bInAdditive : 1;                                  		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FMechaSpecialMoveStruct                     ReturnValue;                                      		// 0x000C (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FMechaSpecialMoveStruct                  OutSpecialMoveStruct;                             		// 0x001C (0x0010) [0x0000000000000000]              
};

// Function MechaGame.MechaBase.VerifySpecialMoveHasBeenInstanced
// [0x00020103] ( FUNC_Final )
struct AMechaBase_execVerifySpecialMoveHasBeenInstanced_Parms
{
	unsigned char                                      AMove;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaBase.CanChainSpecialMove
// [0x00020103] ( FUNC_Final )
struct AMechaBase_execCanChainSpecialMove_Parms
{
	unsigned char                                      NextMove;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaBase.CanDoSpecialMove
// [0x00024903] ( FUNC_Final | FUNC_Event )
struct AMechaBase_eventCanDoSpecialMove_Parms
{
	unsigned char                                      AMove;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceCheck : 1;                                  		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaBase.SpecialMoveAssigned
// [0x00020102] 
struct AMechaBase_execSpecialMoveAssigned_Parms
{
	unsigned char                                      NewMove;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrevMove;                                         		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaBase.SpecialMoveEnded
// [0x00020102] 
struct AMechaBase_execSpecialMoveEnded_Parms
{
	unsigned char                                      PrevMove;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      NextMove;                                         		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaBase.SpecialMoveStarted
// [0x00020102] 
struct AMechaBase_execSpecialMoveStarted_Parms
{
	unsigned char                                      NewMove;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrevMove;                                         		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.MechaBase.EndSpecialMove
// [0x00024303] ( FUNC_Final | FUNC_Exec )
struct AMechaBase_execEndSpecialMove_Parms
{
	unsigned char                                      SpecialMoveToEnd;                                 		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.MechaBase.ServerEndSpecialMove
// [0x002240C3] ( FUNC_Final )
struct AMechaBase_execServerEndSpecialMove_Parms
{
	unsigned char                                      SpecialMoveToEnd;                                 		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.MechaBase.DoSpecialMoveFromStruct
// [0x00024103] ( FUNC_Final )
struct AMechaBase_execDoSpecialMoveFromStruct_Parms
{
	struct FMechaSpecialMoveStruct                     InSpecialMoveStruct;                              		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceMove : 1;                                   		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.MechaBase.DoAdditivSpecialMove
// [0x00824902] ( FUNC_Event )
struct AMechaBase_eventDoAdditivSpecialMove_Parms
{
	unsigned char                                      NewMove;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceMove : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                InSpecialMoveFlags;                               		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FMechaSpecialMoveStruct                  NewMoveStruct;                                    		// 0x000C (0x0010) [0x0000000000000000]              
};

// Function MechaGame.MechaBase.DoSpecialMove
// [0x00824902] ( FUNC_Event )
struct AMechaBase_eventDoSpecialMove_Parms
{
	unsigned char                                      NewMove;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceMove : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                InSpecialMoveFlags;                               		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// unsigned char                                   PrevMove;                                         		// 0x000C (0x0001) [0x0000000000000000]              
	// struct FMechaSpecialMoveStruct                  NewMoveStruct;                                    		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function MechaGame.MechaBase.ServerDoSpecialMove
// [0x00024102] 
struct AMechaBase_execServerDoSpecialMove_Parms
{
	unsigned char                                      NewMove;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceMove : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                InSpecialMoveFlags;                               		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.MechaBase.LocalDoAdditivSpecialMove
// [0x00024102] 
struct AMechaBase_execLocalDoAdditivSpecialMove_Parms
{
	unsigned char                                      NewMove;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceMove : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                InSpecialMoveFlags;                               		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.MechaBase.LocalDoSpecialMove
// [0x00024102] 
struct AMechaBase_execLocalDoSpecialMove_Parms
{
	unsigned char                                      NewMove;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceMove : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                InSpecialMoveFlags;                               		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.MechaBase.OnAnimEnd
// [0x00020902] ( FUNC_Event )
struct AMechaBase_eventOnAnimEnd_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaBase.BS_AnimEndNotify
// [0x00020102] 
struct AMechaBase_execBS_AnimEndNotify_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Index;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaBase.BS_GetAnimPlaybackLength
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct AMechaBase_execBS_GetAnimPlaybackLength_Parms
{
	struct FMechaBodyStance                            Stance;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaBase.BS_SetRootBoneAxisOptions
// [0x00024501] ( FUNC_Final | FUNC_Native )
struct AMechaBase_execBS_SetRootBoneAxisOptions_Parms
{
	struct FMechaBodyStance                            Stance;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      AxisX;                                            		// 0x000C (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      AxisY;                                            		// 0x000D (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      AxisZ;                                            		// 0x000E (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.MechaBase.BS_SetAnimEndNotify
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct AMechaBase_execBS_SetAnimEndNotify_Parms
{
	struct FMechaBodyStance                            Stance;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bNewStatus : 1;                                   		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.MechaBase.BS_Stop
// [0x00024501] ( FUNC_Final | FUNC_Native )
struct AMechaBase_execBS_Stop_Parms
{
	struct FMechaBodyStance                            Stance;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              BlendOutTime;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.MechaBase.BS_PlayByDuration
// [0x00024501] ( FUNC_Final | FUNC_Native )
struct AMechaBase_execBS_PlayByDuration_Parms
{
	class UMechaSpecialMove*                           Move;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FMechaBodyStance                            Stance;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              Duration;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BlendInTime;                                      		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendOutTime;                                     		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLooping : 1;                                     		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOverride : 1;                                    		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       GroupName;                                        		// 0x0024 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x002C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaBase.BS_Play
// [0x00024501] ( FUNC_Final | FUNC_Native )
struct AMechaBase_execBS_Play_Parms
{
	class UMechaSpecialMove*                           Move;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FMechaBodyStance                            Stance;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              Rate;                                             		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BlendInTime;                                      		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendOutTime;                                     		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLooping : 1;                                     		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOverride : 1;                                    		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       GroupName;                                        		// 0x0024 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              StartTime;                                        		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0030 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaBase.InterpolatePawnRotation
// [0x00024103] ( FUNC_Final )
struct AMechaBase_execInterpolatePawnRotation_Parms
{
	float                                              RotationInterpTime;                               		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.MechaBase.PlayTakeHitEffects
// [0x00020100] 
struct AMechaBase_execPlayTakeHitEffects_Parms
{
};

// Function MechaGame.MechaBase.PlayHit
// [0x00024102] 
struct AMechaBase_execPlayHit_Parms
{
	float                                              Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x0020) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      AnimDir;                                          		// 0x0044 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UClass*                                   dmgType;                                          		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaBase.Destroyed
// [0x00020102] 
struct AMechaBase_execDestroyed_Parms
{
};

// Function MechaGame.MechaBase.StopAllAnimations
// [0x00020102] 
struct AMechaBase_execStopAllAnimations_Parms
{
	// class UAnimNodeSequence*                        SeqNode;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaBase.CacheAnimNodes
// [0x00020102] 
struct AMechaBase_execCacheAnimNodes_Parms
{
	// class UAnimNodeSlot*                            SlotNode;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AMechaBase_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.Mecha.PlayDying
// [0x00024102] 
struct AMecha_execPlayDying_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DeathDir;                                         		// 0x0010 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0011 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.Mecha.ServerTakeWallDamage
// [0x00024002] 
struct AMecha_execServerTakeWallDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x0020) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                wallcount;                                        		// 0x0048 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.Mecha.ServerTakeDamage
// [0x00024002] 
struct AMecha_execServerTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x0020) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.Mecha.TakeDamage
// [0x00824802] ( FUNC_Event )
struct AMecha_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x0020) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             actualDamage;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x004C (0x0004) [0x0000000000000000]              
	// class AController*                              Killer;                                           		// 0x0050 (0x0004) [0x0000000000000000]              
	// struct FVector                                  AttackerPos;                                      		// 0x0054 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.Mecha.GetWeaponStartTraceLocation
// [0x00824902] ( FUNC_Event )
struct AMecha_eventGetWeaponStartTraceLocation_Parms
{
	class AWeapon*                                     CurrentWeapon;                                    		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  POVLoc;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  RealLoc;                                          		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 POVRot;                                           		// 0x0028 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.Mecha.SetGunFlashLocation
// [0x00020100] 
struct AMecha_execSetGunFlashLocation_Parms
{
	class AWeapon*                                     Who;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FireModeNum;                                      		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FVector >                           NewLoc;                                           		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function MechaGame.Mecha.ClientSetFireCameraShake
// [0x010201C2] 
struct AMecha_execClientSetFireCameraShake_Parms
{
	unsigned long                                      bInPlayFireCameraShake : 1;                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UCameraShake*                                InFireCameraShake;                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InFireCameraShakeScale;                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.Mecha.SetFireCameraShake
// [0x00020102] 
struct AMecha_execSetFireCameraShake_Parms
{
	unsigned long                                      bInPlayFireCameraShake : 1;                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UCameraShake*                                InFireCameraShake;                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InFireCameraShakeScale;                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.Mecha.PossessedBy
// [0x00020002] 
struct AMecha_execPossessedBy_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.Mecha.ClientSetViewPitch
// [0x010201C2] 
struct AMecha_execClientSetViewPitch_Parms
{
	float                                              InViewPitchMin;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InViewPitchMax;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.Mecha.SetViewPitch
// [0x00020102] 
struct AMecha_execSetViewPitch_Parms
{
	float                                              InViewPitchMin;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InViewPitchMax;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.Mecha.SetPointOfView3rd
// [0x00020102] 
struct AMecha_execSetPointOfView3rd_Parms
{
	struct FMechaPointOfView                           POV;                                              		// 0x0000 (0x0014) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.Mecha.SetPointOfView1st
// [0x00020102] 
struct AMecha_execSetPointOfView1st_Parms
{
	struct FMechaPointOfView                           POV;                                              		// 0x0000 (0x0014) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.Mecha.SetMeshVisibility
// [0x00020102] 
struct AMecha_execSetMeshVisibility_Parms
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.Mecha.FixedView
// [0x00020202] ( FUNC_Exec )
struct AMecha_execFixedView_Parms
{
	struct FString                                     VisibleMeshes;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// unsigned long                                   bVisibleMeshes : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           FOV;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.Mecha.IsFirstPerson
// [0x00020102] 
struct AMecha_execIsFirstPerson_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.Mecha.CalcFirstPersonCam
// [0x00C20102] 
struct AMecha_execCalcFirstPersonCam_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_FOV;                                          		// 0x001C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FMechaPointOfView                        POV;                                              		// 0x0024 (0x0014) [0x0000000000000000]              
	// struct FRotator                                 TempRotation;                                     		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirX;                                             		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirY;                                             		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirZ;                                             		// 0x005C (0x000C) [0x0000000000000000]              
	// float                                           Elevation;                                        		// 0x0068 (0x0004) [0x0000000000000000]              
	// struct FVector                                  CamBaseLocation;                                  		// 0x006C (0x000C) [0x0000000000000000]              
};

// Function MechaGame.Mecha.CalcThirdPersonCam
// [0x00C20102] 
struct AMecha_execCalcThirdPersonCam_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_FOV;                                          		// 0x001C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FMechaPointOfView                        POV;                                              		// 0x0024 (0x0014) [0x0000000000000000]              
	// struct FRotator                                 TempRotation;                                     		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 AimRot;                                           		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamLookAt;                                        		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x005C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0068 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirX;                                             		// 0x0074 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirY;                                             		// 0x0080 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirZ;                                             		// 0x008C (0x000C) [0x0000000000000000]              
	// float                                           Elevation;                                        		// 0x0098 (0x0004) [0x0000000000000000]              
	// struct FVector                                  CamBaseLocation;                                  		// 0x009C (0x000C) [0x0000000000000000]              
};

// Function MechaGame.Mecha.CalcCamera
// [0x00420102] 
struct AMecha_execCalcCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_FOV;                                          		// 0x001C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.Mecha.FaceRotation
// [0x00020102] 
struct AMecha_execFaceRotation_Parms
{
	struct FRotator                                    NewRotation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.Mecha.SetMechaHidden
// [0x00020102] 
struct AMecha_execSetMechaHidden_Parms
{
	unsigned long                                      bInHidden : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.Mecha.ClientStopMovement
// [0x010201C2] 
struct AMecha_execClientStopMovement_Parms
{
};

// Function MechaGame.Mecha.DriverLeave
// [0x00020802] ( FUNC_Event )
struct AMecha_eventDriverLeave_Parms
{
	unsigned long                                      bForceLeave : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.Mecha.DriverEnter
// [0x00020002] 
struct AMecha_execDriverEnter_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaBase.SetMaxStepHeight
// [0x00020500] ( FUNC_Native )
struct ATGMechaBase_execSetMaxStepHeight_Parms
{
	float                                              InMaxSetpHeight;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaBase.OnKeyUp_F
// [0x00020000] 
struct ATGMechaBase_execOnKeyUp_F_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaBase.OnKeyUp_E
// [0x00020000] 
struct ATGMechaBase_execOnKeyUp_E_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaBase.OnKeyUp_Shift
// [0x00020000] 
struct ATGMechaBase_execOnKeyUp_Shift_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaBase.OnKeyUp_Space
// [0x00020000] 
struct ATGMechaBase_execOnKeyUp_Space_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaBase.OnKeyDown_F
// [0x00020000] 
struct ATGMechaBase_execOnKeyDown_F_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaBase.OnKeyDown_E
// [0x00020000] 
struct ATGMechaBase_execOnKeyDown_E_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaBase.OnKeyDown_Shift
// [0x00020000] 
struct ATGMechaBase_execOnKeyDown_Shift_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaBase.OnKeyDown_Space
// [0x00020000] 
struct ATGMechaBase_execOnKeyDown_Space_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaBase.PostRenderFor
// [0x00820902] ( FUNC_Event )
struct ATGMechaBase_eventPostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaGamePlayerController*             LocalPC;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x002C (0x000C) [0x0000000000000000]              
	// float                                           FadeValue;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bInTheFront : 1;                                  		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGMechaBase.Died
// [0x00024002] 
struct ATGMechaBase_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DeathDir;                                         		// 0x0014 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0015 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGPlayerController*                      OwnerPC;                                          		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaBase.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ATGMechaBase_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x0020) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaBase.Heal
// [0x00024002] 
struct ATGMechaBase_execHeal_Parms
{
	int                                                HealthToAdd;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 HealInstigator;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTriggerEffect : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bInstantHeal : 1;                                 		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              HealInterval;                                     		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaBase.ClearSpeedScale
// [0x00020002] 
struct ATGMechaBase_execClearSpeedScale_Parms
{
};

// Function MechaGame.TGMechaBase.TimerClearSpeedScale
// [0x00020002] 
struct ATGMechaBase_execTimerClearSpeedScale_Parms
{
};

// Function MechaGame.TGMechaBase.SetSpeedScaleTimer
// [0x00020002] 
struct ATGMechaBase_execSetSpeedScaleTimer_Parms
{
	float                                              Scale;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaBase.SetSpeedScale
// [0x00020002] 
struct ATGMechaBase_execSetSpeedScale_Parms
{
	float                                              Scale;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaBase.IsBoosting
// [0x00020102] 
struct ATGMechaBase_execIsBoosting_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaBase.ChangeMovementState
// [0x00020002] 
struct ATGMechaBase_execChangeMovementState_Parms
{
	unsigned char                                      NewState;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaBase.TakeFallingDamage
// [0x00020000] 
struct ATGMechaBase_execTakeFallingDamage_Parms
{
};

// Function MechaGame.TGMechaBase.SetupConfigParameters
// [0x00020002] 
struct ATGMechaBase_execSetupConfigParameters_Parms
{
	// class AMechaGame*                               Game;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaBase.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGMechaBase_eventPostBeginPlay_Parms
{
};

// Function MechaGame.MechaFactory.ForceSpawnVehicle
// [0x00020002] 
struct AMechaFactory_execForceSpawnVehicle_Parms
{
	class AMechaBase*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaFactory.GetSpawnRotation
// [0x00020002] 
struct AMechaFactory_execGetSpawnRotation_Parms
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaFactory.OnToggle
// [0x00020002] 
struct AMechaFactory_execOnToggle_Parms
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaFactory.TriggerSpawnedEvent
// [0x00020002] 
struct AMechaFactory_execTriggerSpawnedEvent_Parms
{
};

// Function MechaGame.MechaFactory.VehicleDestroyed
// [0x00020002] 
struct AMechaFactory_execVehicleDestroyed_Parms
{
	class AMechaBase*                                  V;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaFactory.VehicleTaken
// [0x00020002] 
struct AMechaFactory_execVehicleTaken_Parms
{
};

// Function MechaGame.MechaFactory.Deactivate
// [0x00020002] 
struct AMechaFactory_execDeactivate_Parms
{
};

// Function MechaGame.MechaFactory.Activate
// [0x00020002] 
struct AMechaFactory_execActivate_Parms
{
	unsigned char                                      T;                                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaFactory.SetInitialState
// [0x00020902] ( FUNC_Event )
struct AMechaFactory_eventSetInitialState_Parms
{
};

// Function MechaGame.MechaFactory.PostBeginPlay
// [0x00020102] 
struct AMechaFactory_execPostBeginPlay_Parms
{
};

// Function MechaGame.MechaDestructibleItem.PostRenderFor
// [0x00820902] ( FUNC_Event )
struct AMechaDestructibleItem_eventPostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class UTexture2D*                               Icon;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               HPBG;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               HPBar;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FTextureCoordinates                      HPBGCoords;                                       		// 0x002C (0x0010) [0x0000000000000000]              
	// struct FTextureCoordinates                      HPBarCoords;                                      		// 0x003C (0x0010) [0x0000000000000000]              
	// class ATGMechaGameHUD*                          HUD;                                              		// 0x004C (0x0004) [0x0000000000000000]              
	// class ATGMechaDMGameReplicationInfo*            DMGRI;                                            		// 0x0050 (0x0004) [0x0000000000000000]              
	// int                                             SizeX;                                            		// 0x0054 (0x0004) [0x0000000000000000]              
	// int                                             SizeY;                                            		// 0x0058 (0x0004) [0x0000000000000000]              
	// int                                             PosX;                                             		// 0x005C (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0060 (0x0004) [0x0000000000000000]              
	// int                                             Dist;                                             		// 0x0064 (0x0004) [0x0000000000000000]              
	// float                                           DistXL;                                           		// 0x0068 (0x0004) [0x0000000000000000]              
	// float                                           DistYL;                                           		// 0x006C (0x0004) [0x0000000000000000]              
	// float                                           Pct;                                              		// 0x0070 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x0074 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CrossResult;                                      		// 0x0080 (0x000C) [0x0000000000000000]              
	// struct FVector2D                                HPBarOffset;                                      		// 0x008C (0x0008) [0x0000000000000000]              
	// unsigned long                                   bInTheFront : 1;                                  		// 0x0094 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bOnTheRight : 1;                                  		// 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  DistStr;                                          		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function MechaGame.MechaDestructibleItem.GetHealthColor
// [0x00820102] 
struct AMechaDestructibleItem_execGetHealthColor_Parms
{
	struct FColor                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Level;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           LevelPct;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FColor                                   HealthColor;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaDestructibleItem.GetHealthLevel
// [0x00424102] 
struct AMechaDestructibleItem_execGetHealthLevel_Parms
{
	int                                                Level;                                            		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              LevelPct;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              TotalPct;                                         		// 0x0008 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	// float                                           Level01;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           Level02;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Level03;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           Level04;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaDestructibleItem.IsDestroyed
// [0x00020102] 
struct AMechaDestructibleItem_execIsDestroyed_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaDestructibleItem.GetCurrentMesh
// [0x00020102] 
struct AMechaDestructibleItem_execGetCurrentMesh_Parms
{
	class UStaticMeshComponent*                        ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function MechaGame.MechaDestructibleItem.SetupMesh
// [0x00020102] 
struct AMechaDestructibleItem_execSetupMesh_Parms
{
	// int                                             Level;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           LevelPct;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaDestructibleItem.HideHit
// [0x00020102] 
struct AMechaDestructibleItem_execHideHit_Parms
{
};

// Function MechaGame.MechaDestructibleItem.NotifyHealthInfoChanged
// [0x00020102] 
struct AMechaDestructibleItem_execNotifyHealthInfoChanged_Parms
{
	// class ATGMechaDMPlayerController*               PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaDestructibleItem.ScriptGetTeamNum
// [0x00020902] ( FUNC_Event )
struct AMechaDestructibleItem_eventScriptGetTeamNum_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaDestructibleItem.RecordMechaWeapDamage
// [0x00020002] 
struct AMechaDestructibleItem_execRecordMechaWeapDamage_Parms
{
	int                                                InDamage;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UClass*                                   MechaDamageType;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AMechaGameReplicationInfo*                MechaGRI;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaDestructibleItem.DoDamageScale
// [0x00020002] 
struct AMechaDestructibleItem_execDoDamageScale_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaDestructibleItem.Heal
// [0x00020002] 
struct AMechaDestructibleItem_execHeal_Parms
{
	int                                                HealthToAdd;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaDestructibleItem.SetHealDelegate
// [0x00020002] 
struct AMechaDestructibleItem_execSetHealDelegate_Parms
{
	struct FScriptDelegate                             NewHealDelegate;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function MechaGame.MechaDestructibleItem.HealDelegate
// [0x00120000] 
struct AMechaDestructibleItem_execHealDelegate_Parms
{
	int                                                HealthToAdd;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaDestructibleItem.SetHealthRepInfo
// [0x00020002] 
struct AMechaDestructibleItem_execSetHealthRepInfo_Parms
{
	int                                                CurrentHealth;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InType;                                           		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaDestructibleItem.TakeDamage
// [0x00024802] ( FUNC_Event )
struct AMechaDestructibleItem_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x0020) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class AMechaGame*                               Game;                                             		// 0x0048 (0x0004) [0x0000000000000000]              
	// class ATGMechaGamePlayerController*             InstigatorPC;                                     		// 0x004C (0x0004) [0x0000000000000000]              
	// class ATGMechaPlayerReplicationInfo*            InstigatorPRI;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	// int                                             OldHealth;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	// int                                             ActualHealth;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaDestructibleItem.SpecialTakeDamage
// [0x00020002] 
struct AMechaDestructibleItem_execSpecialTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AMechaGame*                               Game;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaDestructibleItem.SetTakeDamageDelegate
// [0x00020002] 
struct AMechaDestructibleItem_execSetTakeDamageDelegate_Parms
{
	struct FScriptDelegate                             NewTakeDamageDelegate;                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function MechaGame.MechaDestructibleItem.TakeDamageDelegate
// [0x00120000] 
struct AMechaDestructibleItem_execTakeDamageDelegate_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0028 (0x0020) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0048 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaDestructibleItem.AdjustDamageOnScale
// [0x00420002] 
struct AMechaDestructibleItem_execAdjustDamageOnScale_Parms
{
	int                                                InDamage;                                         		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class ATGMechaGamePlayerController*                InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           FinalDamageScale;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaDestructibleItem.IsKeyItem
// [0x00020002] 
struct AMechaDestructibleItem_execIsKeyItem_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaDestructibleItem.SetKeyItem
// [0x00020002] 
struct AMechaDestructibleItem_execSetKeyItem_Parms
{
	unsigned long                                      bIsKeyItem : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.MechaDestructibleItem.SetEnabled
// [0x00020002] 
struct AMechaDestructibleItem_execSetEnabled_Parms
{
	unsigned long                                      bInEnabled : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.MechaDestructibleItem.Reset
// [0x00020802] ( FUNC_Event )
struct AMechaDestructibleItem_eventReset_Parms
{
};

// Function MechaGame.MechaDestructibleItem.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AMechaDestructibleItem_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaDestructibleItem.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AMechaDestructibleItem_eventPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaGamePlayerController.SetViewTarget
// [0x00024002] 
struct ATGMechaGamePlayerController_execSetViewTarget_Parms
{
	class AActor*                                      NewViewTarget;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FViewTargetTransitionParams                 TransitionParams;                                 		// 0x0004 (0x0010) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaGamePlayerController.SwitchClip
// [0x00020202] ( FUNC_Exec )
struct ATGMechaGamePlayerController_execSwitchClip_Parms
{
	// class ATGRealMecha*                             TGMecha;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.ClientPlayTipSound
// [0x010201C2] 
struct ATGMechaGamePlayerController_execClientPlayTipSound_Parms
{
	unsigned char                                      SndType;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaGameHUD*                          HUD;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             FindIdx;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.ClientReceiveTextMessage
// [0x010249C2] ( FUNC_Event )
struct ATGMechaGamePlayerController_eventClientReceiveTextMessage_Parms
{
	class UClass*                                      Message;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                NumValue1;                                        		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                NumValue2;                                        		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     StrValue;                                         		// 0x0010 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     OptionalObject;                                   		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaGamePlayerController.ClientPlayCameraAnim
// [0x01024942] ( FUNC_Event )
struct ATGMechaGamePlayerController_eventClientPlayCameraAnim_Parms
{
	class UCameraAnim*                                 AnimToPlay;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Scale;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Rate;                                             		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendInTime;                                      		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendOutTime;                                     		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLoop : 1;                                        		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRandomStartTime : 1;                             		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      Space;                                            		// 0x001C (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    CustomPlaySpace;                                  		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaGamePlayerController.PlayLocalCameraShake
// [0x00024102] 
struct ATGMechaGamePlayerController_execPlayLocalCameraShake_Parms
{
	class UCameraShake*                                Shake;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Scale;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bTryForceFeedback : 1;                            		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      PlaySpace;                                        		// 0x000C (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    UserPlaySpaceRot;                                 		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaGamePlayerController.NotifyClientAssistance
// [0x010201C2] 
struct ATGMechaGamePlayerController_execNotifyClientAssistance_Parms
{
};

// Function MechaGame.TGMechaGamePlayerController.NotifyClientFrozen
// [0x010201C2] 
struct ATGMechaGamePlayerController_execNotifyClientFrozen_Parms
{
	// class ATGMechaGameHUD*                          HUD;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.NotifyClientItemSmite
// [0x010201C2] 
struct ATGMechaGamePlayerController_execNotifyClientItemSmite_Parms
{
	// class ATGMechaGameHUD*                          HUD;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.NotifyClientSmite
// [0x010201C2] 
struct ATGMechaGamePlayerController_execNotifyClientSmite_Parms
{
	// class ATGMechaGameHUD*                          HUD;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.NotifyFrozen
// [0x00020002] 
struct ATGMechaGamePlayerController_execNotifyFrozen_Parms
{
	// class ATGMechaPlayerReplicationInfo*            PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.NotifyItemSmite
// [0x00020002] 
struct ATGMechaGamePlayerController_execNotifyItemSmite_Parms
{
	// class ATGMechaDMPlayerReplicationInfo*          PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.NotifySmite
// [0x00020002] 
struct ATGMechaGamePlayerController_execNotifySmite_Parms
{
	// class ATGMechaPlayerReplicationInfo*            PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.NotifyMechaDied
// [0x00020002] 
struct ATGMechaGamePlayerController_execNotifyMechaDied_Parms
{
	class ATGRealMecha*                                Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             FindIdx;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.CheckItemSmite
// [0x00020002] 
struct ATGMechaGamePlayerController_execCheckItemSmite_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaGamePlayerController.CheckSmite
// [0x00820002] 
struct ATGMechaGamePlayerController_execCheckSmite_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGRealMecha*                                Mecha;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FSmiteInfo                               Smite;                                            		// 0x0008 (0x000C) [0x0000000000000000]              
	// int                                             FindIdx;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.NotifyClientMechaHealthChange
// [0x010201C2] 
struct ATGMechaGamePlayerController_execNotifyClientMechaHealthChange_Parms
{
	struct FHealthInfo                                 Info;                                             		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaGameHUD*                          HUD;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.CheckMechaHealthEffect
// [0x00820002] 
struct ATGMechaGamePlayerController_execCheckMechaHealthEffect_Parms
{
	unsigned long                                      bWeakPoint : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                HealthChange;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGRealMecha*                                Mecha;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FHealthInfo                              DmgInfo;                                          		// 0x000C (0x0010) [0x0000000000000000]              
	// int                                             FindIdx;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.CheckBalance
// [0x00020002] 
struct ATGMechaGamePlayerController_execCheckBalance_Parms
{
	// class ATGRealMecha*                             Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGMechaDoomMatch*                        Game;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             TeamPlayerCount;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned char                                   BalanceLevel;                                     		// 0x000C (0x0001) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.Possess
// [0x00020802] ( FUNC_Event )
struct ATGMechaGamePlayerController_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGRealMecha*                             Mecha;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGMechaDoomMatch*                        Game;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.ClearReinforceWeapon
// [0x00020002] 
struct ATGMechaGamePlayerController_execClearReinforceWeapon_Parms
{
	// class ATGRealMecha*                             Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.ReinforceWeapon
// [0x00020002] 
struct ATGMechaGamePlayerController_execReinforceWeapon_Parms
{
	float                                              DamageScaleDelta;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealMecha*                             Mecha;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.GetDamageScaleDecrement
// [0x00020002] 
struct ATGMechaGamePlayerController_execGetDamageScaleDecrement_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaGamePlayerController.GetDamageScaleIncrement
// [0x00020002] 
struct ATGMechaGamePlayerController_execGetDamageScaleIncrement_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaGamePlayerController.Reset
// [0x00020002] 
struct ATGMechaGamePlayerController_execReset_Parms
{
};

// Function MechaGame.TGMechaGamePlayerController.EndZoom
// [0x00020102] 
struct ATGMechaGamePlayerController_execEndZoom_Parms
{
};

// Function MechaGame.TGMechaGamePlayerController.PawnDied
// [0x00020002] 
struct ATGMechaGamePlayerController_execPawnDied_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaGamePlayerController.ShouldDrawActorOverlays
// [0x00020002] 
struct ATGMechaGamePlayerController_execShouldDrawActorOverlays_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaGamePlayerController.VehicleEvent
// [0x00020202] ( FUNC_Exec )
struct ATGMechaGamePlayerController_execVehicleEvent_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaGamePlayerController.ClientNotifySkillUsed
// [0x010201C2] 
struct ATGMechaGamePlayerController_execClientNotifySkillUsed_Parms
{
	class AMechaSkillBase*                             Skill;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaGamePlayerController.NotifySkillUsed
// [0x00020002] 
struct ATGMechaGamePlayerController_execNotifySkillUsed_Parms
{
	class AMechaSkillBase*                             Skill;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaPlayerReplicationInfo*            PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.UseXPSkill
// [0x00020000] 
struct ATGMechaGamePlayerController_execUseXPSkill_Parms
{
};

// Function MechaGame.TGMechaGamePlayerController.NotifySkillCreated
// [0x00020002] 
struct ATGMechaGamePlayerController_execNotifySkillCreated_Parms
{
	class AMechaSkillBase*                             Skill;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaPlayerReplicationInfo*            PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.SetSkillLevel
// [0x00020002] 
struct ATGMechaGamePlayerController_execSetSkillLevel_Parms
{
	struct FName                                       SkillName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Level;                                            		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaGamePlayerController.ServerSetSkillStartSignal
// [0x002200C2] 
struct ATGMechaGamePlayerController_execServerSetSkillStartSignal_Parms
{
	struct FName                                       SkillName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bInEnabled : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMechaGamePlayerController.HasSkill
// [0x00020002] 
struct ATGMechaGamePlayerController_execHasSkill_Parms
{
	struct FName                                       SkillName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaGamePlayerController.IsSkillInEffect
// [0x00020002] 
struct ATGMechaGamePlayerController_execIsSkillInEffect_Parms
{
	struct FName                                       SkillName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaGamePlayerController.PerformedStopSkillByName
// [0x00020002] 
struct ATGMechaGamePlayerController_execPerformedStopSkillByName_Parms
{
	struct FName                                       SkillName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaDMPlayerReplicationInfo*          MDMPRI;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.ServerStopSkillByName
// [0x002200C2] 
struct ATGMechaGamePlayerController_execServerStopSkillByName_Parms
{
	struct FName                                       SkillName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaGamePlayerController.StopSkillByName
// [0x00020002] 
struct ATGMechaGamePlayerController_execStopSkillByName_Parms
{
	struct FName                                       SkillName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaGamePlayerController.PerformedStartSkillByName
// [0x00020002] 
struct ATGMechaGamePlayerController_execPerformedStartSkillByName_Parms
{
	struct FName                                       SkillName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaGamePlayerController.ServerStartSkillByName
// [0x002200C2] 
struct ATGMechaGamePlayerController_execServerStartSkillByName_Parms
{
	struct FName                                       SkillName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaGamePlayerController.StartSkillByName
// [0x00020002] 
struct ATGMechaGamePlayerController_execStartSkillByName_Parms
{
	struct FName                                       SkillName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaGamePlayerController.SetDrivingMecha
// [0x00020002] 
struct ATGMechaGamePlayerController_execSetDrivingMecha_Parms
{
	class ATGMechaBase*                                Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaVolume*                           Vol;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.DriveMecha
// [0x00020002] 
struct ATGMechaGamePlayerController_execDriveMecha_Parms
{
	// class ATGMechaFactory*                          MF;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGMechaBase*                             Mecha;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bDriveSuccess : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGMechaGamePlayerController.GetMechaFactory
// [0x00020002] 
struct ATGMechaGamePlayerController_execGetMechaFactory_Parms
{
	class ATGMechaFactory*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGMechaFactory*                          MF;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.GetMechaFactoryType
// [0x00020002] 
struct ATGMechaGamePlayerController_execGetMechaFactoryType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGMechaPlayerReplicationInfo*            PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.CheckSpectator
// [0x00020002] 
struct ATGMechaGamePlayerController_execCheckSpectator_Parms
{
	// class ATGPlayerController*                      PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.ServerChangeMechaType
// [0x002200C2] 
struct ATGMechaGamePlayerController_execServerChangeMechaType_Parms
{
	unsigned char                                      NewType;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaPlayerReplicationInfo*            PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.CanSelectMecha
// [0x00020002] 
struct ATGMechaGamePlayerController_execCanSelectMecha_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGRealMecha*                             Mecha;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.ClientSetSelectMechaEnable
// [0x010201C2] 
struct ATGMechaGamePlayerController_execClientSetSelectMechaEnable_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMechaGamePlayerController.ServerSetSelectMechaEnable
// [0x002200C2] 
struct ATGMechaGamePlayerController_execServerSetSelectMechaEnable_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMechaGamePlayerController.SetSelectMechaEnable
// [0x00020002] 
struct ATGMechaGamePlayerController_execSetSelectMechaEnable_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGMechaPlayerReplicationInfo*            PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AMechaGameReplicationInfo*                GRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePlayerController.Restart
// [0x00020002] 
struct ATGMechaGamePlayerController_execRestart_Parms
{
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMechaGamePlayerController.AcknowledgePossession
// [0x00020002] 
struct ATGMechaGamePlayerController_execAcknowledgePossession_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaGamePlayerController.InitSkillSystem
// [0x00020002] 
struct ATGMechaGamePlayerController_execInitSkillSystem_Parms
{
};

// Function MechaGame.TGMechaGamePlayerController.InitInputSystem
// [0x00020802] ( FUNC_Event )
struct ATGMechaGamePlayerController_eventInitInputSystem_Parms
{
};

// Function MechaGame.TGMechaGamePlayerController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGMechaGamePlayerController_eventPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaPlayerReplicationInfo.IncrementDeaths
// [0x00024002] 
struct ATGMechaPlayerReplicationInfo_execIncrementDeaths_Parms
{
	int                                                Amt;                                              		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class AMechaGameReplicationInfo*                GRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   dmgType;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned char                                   KillerMechaType;                                  		// 0x0014 (0x0001) [0x0000000000000000]              
};

// Function MechaGame.TGMechaPlayerReplicationInfo.OnXPIncInfoNotification
// [0x00020102] 
struct ATGMechaPlayerReplicationInfo_execOnXPIncInfoNotification_Parms
{
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaPlayerReplicationInfo.NotifyXPSkillLevelUp
// [0x00020102] 
struct ATGMechaPlayerReplicationInfo_execNotifyXPSkillLevelUp_Parms
{
	// class ATGRealMecha*                             Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaPlayerReplicationInfo.NotifySuperSkillUsed
// [0x00020002] 
struct ATGMechaPlayerReplicationInfo_execNotifySuperSkillUsed_Parms
{
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaPlayerReplicationInfo.CheckXPIncrementNotify
// [0x00020002] 
struct ATGMechaPlayerReplicationInfo_execCheckXPIncrementNotify_Parms
{
	float                                              IncPoint;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      XPIncType;                                        		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// int                                             FindIdx;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaPlayerReplicationInfo.AddXP
// [0x00020002] 
struct ATGMechaPlayerReplicationInfo_execAddXP_Parms
{
	float                                              Point;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      XPIncType;                                        		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaPlayerReplicationInfo.AddDamageTaken
// [0x00020002] 
struct ATGMechaPlayerReplicationInfo_execAddDamageTaken_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaPlayerReplicationInfo.AddDamageForSkill
// [0x00020002] 
struct ATGMechaPlayerReplicationInfo_execAddDamageForSkill_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSpecialDamage : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMechaPlayerReplicationInfo.AddKillForSkill
// [0x00024002] 
struct ATGMechaPlayerReplicationInfo_execAddKillForSkill_Parms
{
	int                                                Kill;                                             		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaPlayerReplicationInfo.AddGameScore
// [0x00020002] 
struct ATGMechaPlayerReplicationInfo_execAddGameScore_Parms
{
	float                                              ScoreToAdd;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AMechaGameReplicationInfo*                GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaPlayerReplicationInfo.NotifyHealBase
// [0x00020000] 
struct ATGMechaPlayerReplicationInfo_execNotifyHealBase_Parms
{
	int                                                Heal;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaPlayerReplicationInfo.NotifyHealMecha
// [0x00020002] 
struct ATGMechaPlayerReplicationInfo_execNotifyHealMecha_Parms
{
	int                                                Heal;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaPlayerReplicationInfo.NotifySkillLevelUp
// [0x00020002] 
struct ATGMechaPlayerReplicationInfo_execNotifySkillLevelUp_Parms
{
};

// Function MechaGame.TGMechaPlayerReplicationInfo.NotifyMechaFrozen
// [0x00020002] 
struct ATGMechaPlayerReplicationInfo_execNotifyMechaFrozen_Parms
{
};

// Function MechaGame.TGMechaPlayerReplicationInfo.NotifyMechaKill
// [0x00020002] 
struct ATGMechaPlayerReplicationInfo_execNotifyMechaKill_Parms
{
};

// Function MechaGame.TGMechaPlayerReplicationInfo.NotifyMechaSmite
// [0x00020002] 
struct ATGMechaPlayerReplicationInfo_execNotifyMechaSmite_Parms
{
};

// Function MechaGame.TGMechaPlayerReplicationInfo.AddMechaDamage
// [0x00020002] 
struct ATGMechaPlayerReplicationInfo_execAddMechaDamage_Parms
{
	int                                                DamageToAdd;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaPlayerReplicationInfo.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGMechaPlayerReplicationInfo_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaRoundGame.CheckObservers
// [0x00020002] 
struct AMechaRoundGame_execCheckObservers_Parms
{
	// class ATGPlayerController*                      PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaRoundGame.BroadcastRoundMessage
// [0x00024000] 
struct AMechaRoundGame_execBroadcastRoundMessage_Parms
{
	unsigned long                                      bRoundStart : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bGameOver : 1;                                    		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.MechaRoundGame.SetRoundStarted
// [0x00020002] 
struct AMechaRoundGame_execSetRoundStarted_Parms
{
	unsigned long                                      bStarted : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class AMechaRoundGameReplicationInfo*           GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaRoundGame.RoundEnded
// [0x00020002] 
struct AMechaRoundGame_execRoundEnded_Parms
{
	unsigned long                                      bGameOver : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.MechaRoundGame.RoundStarted
// [0x00020002] 
struct AMechaRoundGame_execRoundStarted_Parms
{
	// class ATGPlayerController*                      PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaRoundGame.IncrementRoundCount
// [0x00020002] 
struct AMechaRoundGame_execIncrementRoundCount_Parms
{
	// class AMechaRoundGameReplicationInfo*           GRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaRoundGame.InitRound
// [0x00020000] 
struct AMechaRoundGame_execInitRound_Parms
{
};

// Function MechaGame.MechaRoundGame.EndGame
// [0x00020002] 
struct AMechaRoundGame_execEndGame_Parms
{
	class APlayerReplicationInfo*                      Winner;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function MechaGame.MechaRoundGame.CalculateRoundReport
// [0x00020000] 
struct AMechaRoundGame_execCalculateRoundReport_Parms
{
	int                                                WinnerTeamIndex;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaRoundGame.AddTeamScore
// [0x00020002] 
struct AMechaRoundGame_execAddTeamScore_Parms
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaRoundGame.EndRound
// [0x00020002] 
struct AMechaRoundGame_execEndRound_Parms
{
	class AActor*                                      EndRoundFocus;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaRoundGame.DirectEndRound
// [0x00020002] 
struct AMechaRoundGame_execDirectEndRound_Parms
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class AActor*                                      EndRoundFocus;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaRoundGame.GenericEndRound
// [0x00020002] 
struct AMechaRoundGame_execGenericEndRound_Parms
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class AActor*                                      EndRoundFocus;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaRoundGame.Reset
// [0x00020002] 
struct AMechaRoundGame_execReset_Parms
{
	// class AController*                              C;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaRoundGame.ResetRoundLevel
// [0x00020002] 
struct AMechaRoundGame_execResetRoundLevel_Parms
{
	// class AMechaGamePlayerController*               PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AMechaGamePlayerReplicationInfo*          PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AMechaRoundGameReplicationInfo*           GRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AActor*                                   A;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// class USequence*                                GameSeq;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                AllSeqEvents;                                     		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaRoundGame.GetGamePlayerCount
// [0x00020002] 
struct AMechaRoundGame_execGetGamePlayerCount_Parms
{
	unsigned char                                      TeamIndex;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGPlayerReplicationInfo*                 PRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             PlayerCount;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaRoundGame.CheckGamePlayerCount
// [0x00420002] 
struct AMechaRoundGame_execCheckGamePlayerCount_Parms
{
	class ATGPlayerReplicationInfo*                    Exiting;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                RebCount;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                GovCount;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class ATGPlayerController*                      PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	// class ATGPlayerReplicationInfo*                 PRI;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaRoundGame.Logout
// [0x00020002] 
struct AMechaRoundGame_execLogout_Parms
{
	class AController*                                 Exiting;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             RebCount;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             GovCount;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaRoundGame.StartMatch
// [0x00020002] 
struct AMechaRoundGame_execStartMatch_Parms
{
};

// Function MechaGame.MechaRoundGame.UpdateGameSpecificSettings
// [0x00020802] ( FUNC_Event )
struct AMechaRoundGame_eventUpdateGameSpecificSettings_Parms
{
	struct FGameSpecificSettings                       Settings;                                         		// 0x0000 (0x0028) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMecha.Health_CalcAchi
// [0x00020002] 
struct ATGRealMecha_execHealth_CalcAchi_Parms
{
	int                                                HealthPoint;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGMechaPlayerReplicationInfo*            MDMPRI;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.StopRepaired
// [0x00020002] 
struct ATGRealMecha_execStopRepaired_Parms
{
	class ATGRealMecha*                                Doctor;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFindit : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGRealMecha.StartRepaired
// [0x00020002] 
struct ATGRealMecha_execStartRepaired_Parms
{
	class ATGRealMecha*                                Doctor;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFindit : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  DoctorUin;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ATGMechaPlayerReplicationInfo*            SelfPRI;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ATGMechaPlayerReplicationInfo*            DoctorPRI;                                        		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.SetThunderAttachmentCritEffect
// [0x00020102] 
struct ATGRealMecha_execSetThunderAttachmentCritEffect_Parms
{
	// class ATGMechaWeapAttachment_Thunder*           ThunderAttachment;                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.PlayACSound
// [0x00024102] 
struct ATGRealMecha_execPlayACSound_Parms
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UAudioComponent*                             AC;                                               		// 0x0004 (0x0004) [0x0000000004000090]              ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )
	float                                              FadeInTime;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UAudioComponent*                             ReturnValue;                                      		// 0x000C (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// class AActor*                                   SoundOwner;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.IsDefender
// [0x00020102] 
struct ATGRealMecha_execIsDefender_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGMechaDMPlayerReplicationInfo*          PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.IsAttacker
// [0x00020102] 
struct ATGRealMecha_execIsAttacker_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGMechaDMPlayerReplicationInfo*          PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.SetMovementEffect
// [0x00020102] 
struct ATGRealMecha_execSetMovementEffect_Parms
{
	unsigned long                                      bSetActive : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// float                                           MinSpeed;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           MaxSpeed;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.ServerUsePickup
// [0x002200C2] 
struct ATGRealMecha_execServerUsePickup_Parms
{
	class ATGMechaPickupFactory*                       Pickup;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.Tick
// [0x00020902] ( FUNC_Event )
struct ATGRealMecha_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMecha.PostRenderFor
// [0x00820902] ( FUNC_Event )
struct ATGRealMecha_eventPostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaDMPlayerController*               MechaPC;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ATGMechaGameHUD*                          H;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CrossResult;                                      		// 0x0034 (0x000C) [0x0000000000000000]              
	// int                                             IconSize;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bInTheFront : 1;                                  		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bOnTheRight : 1;                                  		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bUpBorder : 1;                                    		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bDownBorder : 1;                                  		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bLeftBorder : 1;                                  		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bRigthBorder : 1;                                 		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           Dist;                                             		// 0x005C (0x0004) [0x0000000000000000]              
	// float                                           SizeScale;                                        		// 0x0060 (0x0004) [0x0000000000000000]              
	// float                                           PosX;                                             		// 0x0064 (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x0068 (0x0004) [0x0000000000000000]              
	// float                                           AlphaScale;                                       		// 0x006C (0x0004) [0x0000000000000000]              
	// struct FVector2D                                DistRange;                                        		// 0x0070 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bShowBaseAttacker : 1;                            		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGRealMecha.ClearShowAttacker
// [0x00020102] 
struct ATGRealMecha_execClearShowAttacker_Parms
{
};

// Function MechaGame.TGRealMecha.SetShowAttacker
// [0x00020102] 
struct ATGRealMecha_execSetShowAttacker_Parms
{
};

// Function MechaGame.TGRealMecha.OnAttackerNotification
// [0x00020102] 
struct ATGRealMecha_execOnAttackerNotification_Parms
{
};

// Function MechaGame.TGRealMecha.ClearAttackingBase
// [0x00020002] 
struct ATGRealMecha_execClearAttackingBase_Parms
{
};

// Function MechaGame.TGRealMecha.SetAttackingBase
// [0x00020002] 
struct ATGRealMecha_execSetAttackingBase_Parms
{
};

// Function MechaGame.TGRealMecha.OnKeyDown_E
// [0x00020002] 
struct ATGRealMecha_execOnKeyDown_E_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.NotifySkillUsed
// [0x00020102] 
struct ATGRealMecha_execNotifySkillUsed_Parms
{
	class AMechaSkillBase*                             Skill;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMecha.NotifyXPSkillLevelUp
// [0x00020102] 
struct ATGRealMecha_execNotifyXPSkillLevelUp_Parms
{
};

// Function MechaGame.TGRealMecha.DoJump
// [0x00020002] 
struct ATGRealMecha_execDoJump_Parms
{
	unsigned long                                      bUpdating : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGRealMecha.NotifySkillStartSignal
// [0x00020002] 
struct ATGRealMecha_execNotifySkillStartSignal_Parms
{
	class AMechaSkillBase*                             Skill;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMecha.SetSpeedScaleTimer
// [0x00020002] 
struct ATGRealMecha_execSetSpeedScaleTimer_Parms
{
	float                                              Scale;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMecha.OnSetSetMechaMovableTimer
// [0x00020102] 
struct ATGRealMecha_execOnSetSetMechaMovableTimer_Parms
{
	// class ATGMechaGamePlayerController*             MechaPC;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.ClientSetSetMechaMoveless
// [0x010201C2] 
struct ATGRealMecha_execClientSetSetMechaMoveless_Parms
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaGamePlayerController*             MechaPC;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.SetMechaMoveless
// [0x00020002] 
struct ATGRealMecha_execSetMechaMoveless_Parms
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaGamePlayerController*             MechaPC;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.IsInBaseArea
// [0x00020102] 
struct ATGRealMecha_execIsInBaseArea_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGRealMecha.SetBaseAreaVolume
// [0x00020102] 
struct ATGRealMecha_execSetBaseAreaVolume_Parms
{
	class ATGMechaVolume*                              Vol;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTouch : 1;                                       		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// unsigned long                                   bOldInBaseArea : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             FindIdx;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.IsInSpawnArea
// [0x00020102] 
struct ATGRealMecha_execIsInSpawnArea_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGPlayerReplicationInfo*                 PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGMechaVolume*                           Vol;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.IsInZone
// [0x00020102] 
struct ATGRealMecha_execIsInZone_Parms
{
	unsigned char                                      ZoneType;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGPlayerReplicationInfo*                 PRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGMechaVolume*                           Vol;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.GetChangeMechaTimeRemain
// [0x00020102] 
struct ATGRealMecha_execGetChangeMechaTimeRemain_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGRealMecha.TimerSelectTimeLimit
// [0x00020002] 
struct ATGRealMecha_execTimerSelectTimeLimit_Parms
{
};

// Function MechaGame.TGRealMecha.SetWeaponFired
// [0x00020002] 
struct ATGRealMecha_execSetWeaponFired_Parms
{
	unsigned long                                      bMainWeapon : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGRealMecha.SetSelectMechaEnable
// [0x00020002] 
struct ATGRealMecha_execSetSelectMechaEnable_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGMechaGamePlayerController*             OwnerPC;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.SetBurningDamageParms
// [0x00020002] 
struct ATGRealMecha_execSetBurningDamageParms_Parms
{
	class UClass*                                      inDamageType;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InFireLastTime;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InContinuousFireDamage;                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InFireTakeDamageFrequency;                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMecha.RecordMechaWeapDamage
// [0x00020002] 
struct ATGRealMecha_execRecordMechaWeapDamage_Parms
{
	int                                                InDamage;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UClass*                                   MechaDamageType;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AMechaGameReplicationInfo*                MechaGRI;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.AdjustDamage
// [0x00420102] 
struct ATGRealMecha_execAdjustDamage_Parms
{
	int                                                InDamage;                                         		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Momentum;                                         		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 InstigatedBy;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x0020) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0044 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaGamePlayerController*             InstigatorPC;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	// class ATGMechaGamePlayerController*             InjuredPC;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           FinalDamageScale;                                 		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.AddInstigatorPRI
// [0x00820002] 
struct ATGRealMecha_execAddInstigatorPRI_Parms
{
	class ATGMechaPlayerReplicationInfo*               InstigatorPRI;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct ATGRealMecha_FInstigatorInfo             Info;                                             		// 0x0008 (0x000C) [0x0000000000000000]              
	// int                                             FindIdx;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.AddTechStatsInfo
// [0x00020002] 
struct ATGRealMecha_execAddTechStatsInfo_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     VictimName;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bKilled : 1;                                      		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bIsHeadShot : 1;                                  		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                MaxHealth;                                        		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGPlayerReplicationInfo*                 InstigatorPRI;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ATGRealMecha_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x0020) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ATGMechaGamePlayerController*             OwnerPC;                                          		// 0x0048 (0x0004) [0x0000000000000000]              
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x004C (0x0004) [0x0000000000000000]              
	// class ATGMechaPlayerReplicationInfo*            InstigatorPRI;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	// class ATGMechaPlayerReplicationInfo*            OwnerPRI;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             InstigatorMecha;                                  		// 0x0058 (0x0004) [0x0000000000000000]              
	// int                                             OldHealth;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	// int                                             ActualHealth;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	// int                                             actualDamage;                                     		// 0x0064 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bEnemyDamage : 1;                                 		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bSelfDamage : 1;                                  		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGRealMecha.Suicide
// [0x00020002] 
struct ATGRealMecha_execSuicide_Parms
{
};

// Function MechaGame.TGRealMecha.PlayeDyingEffect
// [0x00020102] 
struct ATGRealMecha_execPlayeDyingEffect_Parms
{
};

// Function MechaGame.TGRealMecha.TimerEndSpawnProtectionEffect
// [0x00020102] 
struct ATGRealMecha_execTimerEndSpawnProtectionEffect_Parms
{
};

// Function MechaGame.TGRealMecha.PlaySpawnProtectionEffect
// [0x00020102] 
struct ATGRealMecha_execPlaySpawnProtectionEffect_Parms
{
};

// Function MechaGame.TGRealMecha.TimerEndFireRedEffect
// [0x00020102] 
struct ATGRealMecha_execTimerEndFireRedEffect_Parms
{
};

// Function MechaGame.TGRealMecha.SetTransparent
// [0x00020102] 
struct ATGRealMecha_execSetTransparent_Parms
{
	unsigned long                                      bTransparent : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.UpdateDamageEffect
// [0x00020100] 
struct ATGRealMecha_execUpdateDamageEffect_Parms
{
};

// Function MechaGame.TGRealMecha.OnDeceletationEffectTimer
// [0x00020102] 
struct ATGRealMecha_execOnDeceletationEffectTimer_Parms
{
};

// Function MechaGame.TGRealMecha.PlayDeceletationEffect
// [0x00020102] 
struct ATGRealMecha_execPlayDeceletationEffect_Parms
{
	// class UClass*                                   CurrDamageType;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.TimerEndTrapDamageEffect
// [0x00020102] 
struct ATGRealMecha_execTimerEndTrapDamageEffect_Parms
{
};

// Function MechaGame.TGRealMecha.CheckTrapDamageEffect
// [0x00020102] 
struct ATGRealMecha_execCheckTrapDamageEffect_Parms
{
	// class UClass*                                   CurrDamageType;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           EndDelayTime;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.PlayTakeHitEffects
// [0x00020102] 
struct ATGRealMecha_execPlayTakeHitEffects_Parms
{
};

// Function MechaGame.TGRealMecha.CalcCamera
// [0x00420102] 
struct ATGRealMecha_execCalcCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_FOV;                                          		// 0x001C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGRealMecha.OnSelfHealStateChanged
// [0x00020102] 
struct ATGRealMecha_execOnSelfHealStateChanged_Parms
{
};

// Function MechaGame.TGRealMecha.OnShockedStateChanged
// [0x00020102] 
struct ATGRealMecha_execOnShockedStateChanged_Parms
{
};

// Function MechaGame.TGRealMecha.OnHealStateChanged
// [0x00020102] 
struct ATGRealMecha_execOnHealStateChanged_Parms
{
};

// Function MechaGame.TGRealMecha.OnHealCountUpdate
// [0x00020102] 
struct ATGRealMecha_execOnHealCountUpdate_Parms
{
};

// Function MechaGame.TGRealMecha.TimerEndHeal
// [0x00020002] 
struct ATGRealMecha_execTimerEndHeal_Parms
{
};

// Function MechaGame.TGRealMecha.TimerEndSelfHeal
// [0x00020002] 
struct ATGRealMecha_execTimerEndSelfHeal_Parms
{
};

// Function MechaGame.TGRealMecha.Heal
// [0x00024002] 
struct ATGRealMecha_execHeal_Parms
{
	int                                                HealthToAdd;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 HealInstigator;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTriggerEffect : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bInstantHeal : 1;                                 		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              HealInterval;                                     		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGRealMecha.OnKeyUp_Shift
// [0x00020002] 
struct ATGRealMecha_execOnKeyUp_Shift_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMecha.OnKeyDown_Shift
// [0x00020002] 
struct ATGRealMecha_execOnKeyDown_Shift_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMecha.OnKeyDown_Space
// [0x00020002] 
struct ATGRealMecha_execOnKeyDown_Space_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMecha.TimerEnableMovementInput
// [0x00020002] 
struct ATGRealMecha_execTimerEnableMovementInput_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.TimerDisableMovementInput
// [0x00020002] 
struct ATGRealMecha_execTimerDisableMovementInput_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.TimerSetJumpInputEnable
// [0x00020002] 
struct ATGRealMecha_execTimerSetJumpInputEnable_Parms
{
};

// Function MechaGame.TGRealMecha.HandleLimitationAfterLand
// [0x00020102] 
struct ATGRealMecha_execHandleLimitationAfterLand_Parms
{
};

// Function MechaGame.TGRealMecha.OnLandedCountUpdate
// [0x00020102] 
struct ATGRealMecha_execOnLandedCountUpdate_Parms
{
};

// Function MechaGame.TGRealMecha.Landed
// [0x00020802] ( FUNC_Event )
struct ATGRealMecha_eventLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMecha.OnNotifyWeaponReinforce
// [0x00020102] 
struct ATGRealMecha_execOnNotifyWeaponReinforce_Parms
{
	// class ATGMechaGameHUD*                          HUD;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.NotifyWeaponReinforce
// [0x00020002] 
struct ATGRealMecha_execNotifyWeaponReinforce_Parms
{
	unsigned long                                      bStarted : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGRealMecha.NotifyJumpBoostStateChanged
// [0x00020102] 
struct ATGRealMecha_execNotifyJumpBoostStateChanged_Parms
{
};

// Function MechaGame.TGRealMecha.SetJumpBoostStarted
// [0x00020002] 
struct ATGRealMecha_execSetJumpBoostStarted_Parms
{
	unsigned long                                      bStarted : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// unsigned long                                   bStateChanged : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGRealMecha.ClearJumpBoost
// [0x00020002] 
struct ATGRealMecha_execClearJumpBoost_Parms
{
};

// Function MechaGame.TGRealMecha.StartJumpBoost
// [0x00020002] 
struct ATGRealMecha_execStartJumpBoost_Parms
{
};

// Function MechaGame.TGRealMecha.DrivingStatusChanged
// [0x00020102] 
struct ATGRealMecha_execDrivingStatusChanged_Parms
{
};

// Function MechaGame.TGRealMecha.PlayWeapReplicatedEffects
// [0x00020102] 
struct ATGRealMecha_execPlayWeapReplicatedEffects_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMecha.SetEnemyColor
// [0x00020102] 
struct ATGRealMecha_execSetEnemyColor_Parms
{
	// class AMechaGamePlayerController*               PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             ViewMecha;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.NotifyTeamChanged
// [0x00020102] 
struct ATGRealMecha_execNotifyTeamChanged_Parms
{
};

// Function MechaGame.TGRealMecha.DisplayHud
// [0x00020102] 
struct ATGRealMecha_execDisplayHud_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMecha.CreateHUD
// [0x00020102] 
struct ATGRealMecha_execCreateHUD_Parms
{
	// class UClass*                                   HUDType;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.ClientSetDoorSwitchVolume
// [0x010201C2] 
struct ATGRealMecha_execClientSetDoorSwitchVolume_Parms
{
	class ATGMechaDoorSwitchVolume*                    TouchingVolume;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaDMPlayerController*               PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGMechaGameHUD*                          HUD;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.SetDoorSwitchVolume
// [0x00020002] 
struct ATGRealMecha_execSetDoorSwitchVolume_Parms
{
	class ATGMechaDoorSwitchVolume*                    TouchingVolume;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaDMPlayerController*               PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AMechaGamePlayerReplicationInfo*          PRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AMechaRoundGameReplicationInfo*           GRI;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.PlayDying
// [0x00024102] 
struct ATGRealMecha_execPlayDying_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DeathDir;                                         		// 0x0010 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0011 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGRealMecha.UpdateOccludedMeshColor
// [0x00820102] 
struct ATGRealMecha_execUpdateOccludedMeshColor_Parms
{
	// class USkeletalMeshComponentOccluded*           OccludedMesh;                                     		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UMaterialInstance*                        MI;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             MeshColor;                                        		// 0x0008 (0x0010) [0x0000000000000000]              
	// struct FLinearColor                             OutValue;                                         		// 0x0018 (0x0010) [0x0000000000000000]              
	// float                                           HealthPct;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.NeedOccludedEffect
// [0x00022102] 
struct ATGRealMecha_execNeedOccludedEffect_Parms
{
	class ATGRealMecha*                                Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UClass*                                   SkillClass;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.SetOccludedMeshHidden
// [0x00020102] 
struct ATGRealMecha_execSetOccludedMeshHidden_Parms
{
	unsigned long                                      bInHidden : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class USkeletalMeshComponentOccluded*           OccludedMesh;                                     		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function MechaGame.TGRealMecha.SetupOccludedMesh
// [0x00020102] 
struct ATGRealMecha_execSetupOccludedMesh_Parms
{
	class USkeletalMeshComponent*                      MeshComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// class USkeletalMeshComponentOccluded*           OccludedMesh;                                     		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class ATGMechaGamePlayerController*             LocalPC;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.SetupOccludedMeshForExistingMecha
// [0x00020102] 
struct ATGRealMecha_execSetupOccludedMeshForExistingMecha_Parms
{
	// class ATGRealMecha*                             Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.OnControllerNotification
// [0x00020102] 
struct ATGRealMecha_execOnControllerNotification_Parms
{
};

// Function MechaGame.TGRealMecha.SetupOccludedMeshForOwnerMecha
// [0x00020102] 
struct ATGRealMecha_execSetupOccludedMeshForOwnerMecha_Parms
{
	class USkeletalMeshComponent*                      MeshComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// class ATGRealMecha*                             OwnerMecha;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMecha.NotifyWeaponMeshAttached
// [0x00020102] 
struct ATGRealMecha_execNotifyWeaponMeshAttached_Parms
{
	class USkeletalMeshComponent*                      WeaponMesh;                                       		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function MechaGame.TGRealMecha.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGRealMecha_eventPostBeginPlay_Parms
{
};

// Function MechaGame.TGRealMecha.PreBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGRealMecha_eventPreBeginPlay_Parms
{
};

// Function MechaGame.TGRealMecha.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGRealMecha_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMecha.ShieldAbsorb
// [0x00520000] 
struct ATGRealMecha_execShieldAbsorb_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function MechaGame.TGRealMechaBase.PlayeDyingEffect
// [0x00820102] 
struct ATGRealMechaBase_execPlayeDyingEffect_Parms
{
	// struct ATGRealMechaBase_FVehicleEffect          Effect;                                           		// 0x0000 (0x002C) [0x0000000000000000]              
	// struct ATGRealMechaBase_FVehicleSound           Sound;                                            		// 0x002C (0x0020) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.PlayDying
// [0x00024102] 
struct ATGRealMechaBase_execPlayDying_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DeathDir;                                         		// 0x0010 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0011 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGRealMechaBase.Died
// [0x00024002] 
struct ATGRealMechaBase_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DeathDir;                                         		// 0x0014 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0015 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGRealMechaBase.AdjustDriverDamage
// [0x00420000] 
struct ATGRealMechaBase_execAdjustDriverDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMechaBase.DriverRadiusDamage
// [0x00024000] 
struct ATGRealMechaBase_execDriverRadiusDamage_Parms
{
	float                                              DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageRadius;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageFalloffExponent;                            		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGRealMechaBase.SetMechaHidden
// [0x00820102] 
struct ATGRealMechaBase_execSetMechaHidden_Parms
{
	unsigned long                                      bInHidden : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FMeshMaterial                            MeshMat;                                          		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function MechaGame.TGRealMechaBase.NotifySkillStartSignal
// [0x00020000] 
struct ATGRealMechaBase_execNotifySkillStartSignal_Parms
{
	class AMechaSkillBase*                             Skill;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMechaBase.StopSkillByName
// [0x00020102] 
struct ATGRealMechaBase_execStopSkillByName_Parms
{
	struct FName                                       SkillName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.StartSkillByName
// [0x00020102] 
struct ATGRealMechaBase_execStartSkillByName_Parms
{
	struct FName                                       SkillName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.HasSkill
// [0x00020102] 
struct ATGRealMechaBase_execHasSkill_Parms
{
	struct FName                                       SkillName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UClass*                                   SkillClass;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.OnGroupSkillNotification
// [0x00020102] 
struct ATGRealMechaBase_execOnGroupSkillNotification_Parms
{
	// struct FName                                    EventName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.NotifyGroupSkillApplied
// [0x00020002] 
struct ATGRealMechaBase_execNotifyGroupSkillApplied_Parms
{
	class UClass*                                      SkillCompClass;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMechaBase.NotifySkillStateChanged
// [0x00020102] 
struct ATGRealMechaBase_execNotifySkillStateChanged_Parms
{
	class UClass*                                      SkillCompClass;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bActive : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// TArray< struct FName >                          EffectTags;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FName                                    EventName;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.SetHUDLocation
// [0x00020102] 
struct ATGRealMechaBase_execSetHUDLocation_Parms
{
	struct FVector                                     NewHUDLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMechaBase.TriggerVehicleSound
// [0x00020102] 
struct ATGRealMechaBase_execTriggerVehicleSound_Parms
{
	struct FName                                       SoundTag;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bMultiInstance : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.SetVehicleEffectParmsColor
// [0x00020102] 
struct ATGRealMechaBase_execSetVehicleEffectParmsColor_Parms
{
	struct FName                                       EventTag;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ParameterName;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FColor                                      Param;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.SetVehicleEffectParmsVector
// [0x00020102] 
struct ATGRealMechaBase_execSetVehicleEffectParmsVector_Parms
{
	struct FName                                       EventTag;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ParameterName;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Param;                                            		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.SetVehicleEffectParmsFloat
// [0x00020102] 
struct ATGRealMechaBase_execSetVehicleEffectParmsFloat_Parms
{
	struct FName                                       EventTag;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ParameterName;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Param;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.SetVehicleEffectParms
// [0x00020102] 
struct ATGRealMechaBase_execSetVehicleEffectParms_Parms
{
	struct FName                                       TriggerName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystemComponent*                    PSC;                                              		// 0x0008 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function MechaGame.TGRealMechaBase.CreateVehicleEffect
// [0x00020102] 
struct ATGRealMechaBase_execCreateVehicleEffect_Parms
{
	int                                                EffectIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       EventTag;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USkeletalMeshComponent*                   AttachedMesh;                                     		// 0x000C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// int                                             Idx;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bSocketFound : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bUseAttachedMesh : 1;                             		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGRealMechaBase.TriggerVehicleEffect
// [0x00020102] 
struct ATGRealMechaBase_execTriggerVehicleEffect_Parms
{
	struct FName                                       EventTag;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.VehicleEvent
// [0x00024102] 
struct ATGRealMechaBase_execVehicleEvent_Parms
{
	struct FName                                       EventTag;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bMultiInstance : 1;                               		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGRealMechaBase.OnAnimationNotification
// [0x00020102] 
struct ATGRealMechaBase_execOnAnimationNotification_Parms
{
	// class ATGMechaWeaponAttachment*                 MechaWeapAttachment;                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.TimerStopAllAnimations
// [0x00020102] 
struct ATGRealMechaBase_execTimerStopAllAnimations_Parms
{
};

// Function MechaGame.TGRealMechaBase.PlayReplicatedAnimation
// [0x00024102] 
struct ATGRealMechaBase_execPlayReplicatedAnimation_Parms
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              BlendInTime;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BlendOutTime;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      BodyStance;                                       		// 0x0010 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// float                                           PlaybackTime;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.SetWeapAnimType
// [0x00020902] ( FUNC_Event )
struct ATGRealMechaBase_eventSetWeapAnimType_Parms
{
	unsigned char                                      AnimType;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMechaBase.ResetMaterials
// [0x00020102] 
struct ATGRealMechaBase_execResetMaterials_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.SetMaterialVectorParam
// [0x00C20102] 
struct ATGRealMechaBase_execSetMaterialVectorParam_Parms
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FLinearColor                                Value;                                            		// 0x0008 (0x0010) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	// class UMaterialInstance*                        Mat;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             OutValue;                                         		// 0x001C (0x0010) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.SetMaterialScalarParam
// [0x00020102] 
struct ATGRealMechaBase_execSetMaterialScalarParam_Parms
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UMaterialInstance*                        Mat;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           OutValue;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.CheckSilhouetteFlag
// [0x00020102] 
struct ATGRealMechaBase_execCheckSilhouetteFlag_Parms
{
	// class APlayerController*                        LocalPC;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bEnemyMecha : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGRealMechaBase.OnControllerNotification
// [0x00020102] 
struct ATGRealMechaBase_execOnControllerNotification_Parms
{
	// class ATGRealMecha*                             Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.NotifyTeamChanged
// [0x00020102] 
struct ATGRealMechaBase_execNotifyTeamChanged_Parms
{
};

// Function MechaGame.TGRealMechaBase.SetupOccludedMeshForExistingMecha
// [0x00020102] 
struct ATGRealMechaBase_execSetupOccludedMeshForExistingMecha_Parms
{
	// class ATGRealMecha*                             Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.SetSilhouetteEnabled
// [0x00024102] 
struct ATGRealMechaBase_execSetSilhouetteEnabled_Parms
{
	unsigned long                                      bInEnabled : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FLinearColor                                InColor;                                          		// 0x0004 (0x0010) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             Idx;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.AddMeshMaterial
// [0x00820102] 
struct ATGRealMechaBase_execAddMeshMaterial_Parms
{
	class USkeletalMeshComponent*                      InMesh;                                           		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// struct FMeshMaterial                            MeshMat;                                          		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Idx;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.NotifyWeaponMeshAttached
// [0x00020102] 
struct ATGRealMechaBase_execNotifyWeaponMeshAttached_Parms
{
	class USkeletalMeshComponent*                      WeaponMesh;                                       		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function MechaGame.TGRealMechaBase.SetupBodyMaterialInstance
// [0x00020102] 
struct ATGRealMechaBase_execSetupBodyMaterialInstance_Parms
{
};

// Function MechaGame.TGRealMechaBase.WeaponAttachmentChanged
// [0x00020102] 
struct ATGRealMechaBase_execWeaponAttachmentChanged_Parms
{
	// class ATGMechaWeaponAttachment*                 MechaWeaponAttachment;                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.OnInventoryManagerNotification
// [0x00020102] 
struct ATGRealMechaBase_execOnInventoryManagerNotification_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMechaBase.OnWeaponNotification
// [0x00020102] 
struct ATGRealMechaBase_execOnWeaponNotification_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMechaBase.WeaponFired
// [0x00024102] 
struct ATGRealMechaBase_execWeaponFired_Parms
{
	class AWeapon*                                     InWeapon;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bViaReplication : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGRealMechaBase.ProjFlashLocationUpdated
// [0x00020102] 
struct ATGRealMechaBase_execProjFlashLocationUpdated_Parms
{
	struct FReplicatedEffectsInfo                      InProjWeapEffectsInfo;                            		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bViaReplication : 1;                              		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGMechaWeaponAttachment*                 MechaWeaponAttachment;                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.GunFlashLocationUpdated
// [0x00020102] 
struct ATGRealMechaBase_execGunFlashLocationUpdated_Parms
{
	class AWeapon*                                     InWeapon;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bViaReplication : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGMechaWeaponAttachment*                 MechaWeaponAttachment;                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.SetGunFlashLocation
// [0x00020102] 
struct ATGRealMechaBase_execSetGunFlashLocation_Parms
{
	class AWeapon*                                     Who;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FireModeNum;                                      		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FVector >                           NewLoc;                                           		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.GetAttachedWeaponAttachmentByClass
// [0x00020102] 
struct ATGRealMechaBase_execGetAttachedWeaponAttachmentByClass_Parms
{
	class UClass*                                      AttachmentClass;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGMechaWeaponAttachment*                    ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGRealMechaBase.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ATGRealMechaBase_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x0020) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ATGGame*                                  tGame;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.StopFire
// [0x00020102] 
struct ATGRealMechaBase_execStopFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMechaBase.NotifyWeaponStartFire
// [0x00020002] 
struct ATGRealMechaBase_execNotifyWeaponStartFire_Parms
{
	unsigned long                                      bStartFire : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class ATGMechaWeapon*                              MechaWeapon;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGGame*                                  tGame;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.SetWeaponFired
// [0x00020000] 
struct ATGRealMechaBase_execSetWeaponFired_Parms
{
	unsigned long                                      bMainWeapon : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGRealMechaBase.StopFiring
// [0x00020002] 
struct ATGRealMechaBase_execStopFiring_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGRealMechaBase.StartFire
// [0x00020102] 
struct ATGRealMechaBase_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMechaBase.ReloadWeapon
// [0x00020102] 
struct ATGRealMechaBase_execReloadWeapon_Parms
{
};

// Function MechaGame.TGRealMechaBase.ActiveWeapons
// [0x00020002] 
struct ATGRealMechaBase_execActiveWeapons_Parms
{
};

// Function MechaGame.TGRealMechaBase.AddAllMechaInventory
// [0x00020002] 
struct ATGRealMechaBase_execAddAllMechaInventory_Parms
{
	// class ATGMechaInventoryManager*                 MainInvMgr;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.DriverEnter
// [0x00020002] 
struct ATGRealMechaBase_execDriverEnter_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   Result : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGRealMechaBase.Destroyed
// [0x00020102] 
struct ATGRealMechaBase_execDestroyed_Parms
{
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGRealMechaBase_eventPostBeginPlay_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaBase.PreBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGRealMechaBase_eventPreBeginPlay_Parms
{
};

// Function MechaGame.TGRealMechaBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGRealMechaBase_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaDMPlayerController.TimerCountDown
// [0x00020002] 
struct ATGMechaDMPlayerController_execTimerCountDown_Parms
{
};

// Function MechaGame.TGMechaDMPlayerController.ClientFrozenCountDown
// [0x010201C2] 
struct ATGMechaDMPlayerController_execClientFrozenCountDown_Parms
{
	int                                                CountDown;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaDMPlayerController.ReceiveTextInfo
// [0x010201C2] 
struct ATGMechaDMPlayerController_execReceiveTextInfo_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class AMechaGameHUD*                            MechaHUD;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMPlayerController.ReceiveParticleMessage
// [0x010201C2] 
struct ATGMechaDMPlayerController_execReceiveParticleMessage_Parms
{
	int                                                MessageSwitch;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaDMHUD*                            HUD;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          PS;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMPlayerController.CheckAttackerCountInBaseVolume
// [0x00020102] 
struct ATGMechaDMPlayerController_execCheckAttackerCountInBaseVolume_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             AttackerCount;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMPlayerController.SetupMechaVolume
// [0x00020102] 
struct ATGMechaDMPlayerController_execSetupMechaVolume_Parms
{
	// class ATGMechaVolume*                           Vol;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMPlayerController.IsDefender
// [0x00020102] 
struct ATGMechaDMPlayerController_execIsDefender_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGMechaDMPlayerReplicationInfo*          PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMPlayerController.IsAttacker
// [0x00020102] 
struct ATGMechaDMPlayerController_execIsAttacker_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGMechaDMPlayerReplicationInfo*          PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMPlayerController.GetDamageScaleDecrement
// [0x00020002] 
struct ATGMechaDMPlayerController_execGetDamageScaleDecrement_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGMechaDMGameReplicationInfo*            GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           DmgScaleDeltaForTeamDefence;                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             TeamIndex;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMPlayerController.UseXPSkill
// [0x00020002] 
struct ATGMechaDMPlayerController_execUseXPSkill_Parms
{
	// class ATGMechaDMPlayerReplicationInfo*          PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMPlayerController.ShouldDrawActorOverlays
// [0x00020002] 
struct ATGMechaDMPlayerController_execShouldDrawActorOverlays_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaDMPlayerController.ClientSetHUD
// [0x010201C2] 
struct ATGMechaDMPlayerController_execClientSetHUD_Parms
{
	class UClass*                                      newHUDType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AMechaDestructibleItem*                   Item;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGMechaDoorSwitchVolume*                 Vol;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMPlayerController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGMechaDMPlayerController_eventPostBeginPlay_Parms
{
};

// Function MechaGame.TGSeqEvent_ItemHealthChanged.Activated
// [0x00020802] ( FUNC_Event )
struct UTGSeqEvent_ItemHealthChanged_eventActivated_Parms
{
	// int                                             Health;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             HealthMax;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaTextMessage.GetColorEx
// [0x00026002] 
struct UMechaTextMessage_execGetColorEx_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FColor                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaTextMessage.ClientReceiveEx
// [0x00026002] 
struct UMechaTextMessage_execClientReceiveEx_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                NumValue1;                                        		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                NumValue2;                                        		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     StrValue;                                         		// 0x0010 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     OptionalObject;                                   		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FString                                  MessageString;                                    		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function MechaGame.MechaTextMessage.GetStringEx
// [0x00026002] 
struct UMechaTextMessage_execGetStringEx_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                NumValue1;                                        		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                NumValue2;                                        		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     StrValue;                                         		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     OptionalObject;                                   		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x001C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  OutMessage;                                       		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function MechaGame.TGMechaDMGameReplicationInfo.AddRemainingTimeFeedback
// [0x00020102] 
struct ATGMechaDMGameReplicationInfo_execAddRemainingTimeFeedback_Parms
{
	int                                                Time;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGMechaGameHUD*                          HUD;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMGameReplicationInfo.AddTextInfo
// [0x00020102] 
struct ATGMechaDMGameReplicationInfo_execAddTextInfo_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaDMPlayerController*               PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMGameReplicationInfo.NotifyDoorOpenProgress
// [0x00020102] 
struct ATGMechaDMGameReplicationInfo_execNotifyDoorOpenProgress_Parms
{
	// class ATGMechaDMPlayerController*               PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           OpenSpeed;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMGameReplicationInfo.IsDoorOpened
// [0x00020102] 
struct ATGMechaDMGameReplicationInfo_execIsDoorOpened_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaDMGameReplicationInfo.NotifyDefenceProgresUpdate
// [0x00020102] 
struct ATGMechaDMGameReplicationInfo_execNotifyDefenceProgresUpdate_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGMechaDMPlayerReplicationInfo*          PRI;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMGameReplicationInfo.NotifyDefenceLevelUp
// [0x00020102] 
struct ATGMechaDMGameReplicationInfo_execNotifyDefenceLevelUp_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ATGPlayerController*                      PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGMechaDMPlayerReplicationInfo*          PRI;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMGameReplicationInfo.CalcDefenceLevel
// [0x00020002] 
struct ATGMechaDMGameReplicationInfo_execCalcDefenceLevel_Parms
{
	// int                                             AttackerDefencePoint;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             DefencerDefencePoint;                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMGameReplicationInfo.CheckKillDefencerCauseBaseDamage
// [0x00020002] 
struct ATGMechaDMGameReplicationInfo_execCheckKillDefencerCauseBaseDamage_Parms
{
};

// Function MechaGame.TGMechaDMGameReplicationInfo.AddTeamKill
// [0x00020002] 
struct ATGMechaDMGameReplicationInfo_execAddTeamKill_Parms
{
	unsigned char                                      KillerTeamIndex;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      KillerMechaType;                                  		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaDMGameReplicationInfo.ClientRoundClear
// [0x00020102] 
struct ATGMechaDMGameReplicationInfo_execClientRoundClear_Parms
{
};

// Function MechaGame.TGMechaDMGameReplicationInfo.RoundClear
// [0x00020002] 
struct ATGMechaDMGameReplicationInfo_execRoundClear_Parms
{
};

// Function MechaGame.TGMechaDMGameReplicationInfo.Timer
// [0x00020902] ( FUNC_Event )
struct ATGMechaDMGameReplicationInfo_eventTimer_Parms
{
};

// Function MechaGame.TGMechaDMGameReplicationInfo.InOrder
// [0x00020102] 
struct ATGMechaDMGameReplicationInfo_execInOrder_Parms
{
	class APlayerReplicationInfo*                      P1;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      P2;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGMechaDMPlayerReplicationInfo*          PRI1;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// class ATGMechaDMPlayerReplicationInfo*          PRI2;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMGameReplicationInfo.ProcessCharacterData
// [0x00024120] 
struct ATGMechaDMGameReplicationInfo_execProcessCharacterData_Parms
{
	class ATGPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTeamChange : 1;                                  		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaDMGameReplicationInfo.BeginProcessCharacterData
// [0x00024100] 
struct ATGMechaDMGameReplicationInfo_execBeginProcessCharacterData_Parms
{
	class ATGPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTeamChange : 1;                                  		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaDMGameReplicationInfo.StartProcessingCharacterData
// [0x00020100] 
struct ATGMechaDMGameReplicationInfo_execStartProcessingCharacterData_Parms
{
};

// Function MechaGame.TGMechaDMGameReplicationInfo.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGMechaDMGameReplicationInfo_eventPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaDMGameReplicationInfo.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGMechaDMGameReplicationInfo_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaGameHUD.AddKillFeedBackMessage
// [0x00024002] 
struct ATGMechaGameHUD_execAddKillFeedBackMessage_Parms
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
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          FeedbackPS;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             Len;                                              		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGameHUD.UpdateFeedbackScreenLoc
// [0x00820002] 
struct ATGMechaGameHUD_execUpdateFeedbackScreenLoc_Parms
{
	// struct FVector                                  ViewPoint;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AttachTranslation;                                		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  XAxis;                                            		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  YAxis;                                            		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ZAxis;                                            		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FeedbackLoc;                                      		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x0048 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGameHUD.AddRemainingTimeFeedback
// [0x00024002] 
struct ATGMechaGameHUD_execAddRemainingTimeFeedback_Parms
{
	int                                                RemainingSeconds;                                 		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UParticleSystem*                          PS;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Minutes;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Tens;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Ones;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGameHUD.AddAssistantFeedback
// [0x00020002] 
struct ATGMechaGameHUD_execAddAssistantFeedback_Parms
{
};

// Function MechaGame.TGMechaGameHUD.NotifyFrozen
// [0x00020002] 
struct ATGMechaGameHUD_execNotifyFrozen_Parms
{
};

// Function MechaGame.TGMechaGameHUD.ClearDriftingXPSkill
// [0x00020002] 
struct ATGMechaGameHUD_execClearDriftingXPSkill_Parms
{
};

// Function MechaGame.TGMechaGameHUD.StartDriftingXPSkill
// [0x00020002] 
struct ATGMechaGameHUD_execStartDriftingXPSkill_Parms
{
};

// Function MechaGame.TGMechaGameHUD.NotifyXPSkillStarted
// [0x00020002] 
struct ATGMechaGameHUD_execNotifyXPSkillStarted_Parms
{
};

// Function MechaGame.TGMechaGameHUD.NotifyXPSkillUsable
// [0x00020002] 
struct ATGMechaGameHUD_execNotifyXPSkillUsable_Parms
{
};

// Function MechaGame.TGMechaGameHUD.NotifyItemSmite
// [0x00020002] 
struct ATGMechaGameHUD_execNotifyItemSmite_Parms
{
};

// Function MechaGame.TGMechaGameHUD.NotifySmite
// [0x00020002] 
struct ATGMechaGameHUD_execNotifySmite_Parms
{
};

// Function MechaGame.TGMechaGameHUD.DrawProgressBarEx
// [0x00020002] 
struct ATGMechaGameHUD_execDrawProgressBarEx_Parms
{
	struct FVector2D                                   RelPos;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ProgressPct;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTexture2D*                                  BGTex;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTexture2D*                                  BarTex;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTextureCoordinates                         BGCoords;                                         		// 0x0014 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FTextureCoordinates                         BarCoords;                                        		// 0x0024 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   BarOffset;                                        		// 0x0034 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             PosX;                                             		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGameHUD.DrawLockWarning
// [0x00020002] 
struct ATGMechaGameHUD_execDrawLockWarning_Parms
{
	// class ATGRealMecha*                             Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             PosX;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             DrawSizeX;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             DrawSizeY;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGameHUD.DrawDriftingEffect
// [0x00820002] 
struct ATGMechaGameHUD_execDrawDriftingEffect_Parms
{
	// struct FVector2D                                InitPos;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                DestPos;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           ResScale;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGameHUD.NotifyMechaHealthChange
// [0x00820002] 
struct ATGMechaGameHUD_execNotifyMechaHealthChange_Parms
{
	class ATGRealMecha*                                Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWeakPoint : 1;                                   		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                HealthChange;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// TArray< float >                                 Periods;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FVector2D >                      InitPos;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FVector2D >                      PosOffsets;                                       		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FVector2D >                      SizeScales;                                       		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FVector2D >                      Alphas;                                           		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// float                                           OffsetY;                                          		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           TravelY;                                          		// 0x004C (0x0004) [0x0000000000000000]              
	// struct FVector2D                                pos;                                              		// 0x0050 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                PosOffset;                                        		// 0x0058 (0x0008) [0x0000000000000000]              
	// struct FString                                  HealthChangeStr;                                  		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FColor                                   TextColor;                                        		// 0x006C (0x0004) [0x0000000000000000]              
	// class UFont*                                    AutualFont;                                       		// 0x0070 (0x0004) [0x0000000000000000]              
	// struct FTextureCoordinates                      TexCoords;                                        		// 0x0074 (0x0010) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGameHUD.DrawMechaSelection
// [0x00820002] 
struct ATGMechaGameHUD_execDrawMechaSelection_Parms
{
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGMechaPlayerReplicationInfo*            PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             Mecha;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               DisabledIcon;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               SelectedIcon;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FTextureCoordinates                      SelectedIconCoords;                               		// 0x0014 (0x0010) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             PosX;                                             		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             OrigPosX;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             OrigPosY;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             TimeRemain;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	// struct FString                                  TimeLimitStr;                                     		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Idx;                                              		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGameHUD.DisplayHit
// [0x00020002] 
struct ATGMechaGameHUD_execDisplayHit_Parms
{
	struct FVector                                     AttackerPos;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UClass*                                   MechaDmgTypeClass;                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGameHUD.DisplayACE
// [0x00020002] 
struct ATGMechaGameHUD_execDisplayACE_Parms
{
};

// Function MechaGame.TGMechaGameHUD.DisplaySpectator
// [0x00020000] 
struct ATGMechaGameHUD_execDisplaySpectator_Parms
{
};

// Function MechaGame.TGMechaGameHUD.DisplayAvatar
// [0x00020000] 
struct ATGMechaGameHUD_execDisplayAvatar_Parms
{
};

// Function MechaGame.TGMechaGameHUD.DrawLivingHud
// [0x00020002] 
struct ATGMechaGameHUD_execDrawLivingHud_Parms
{
};

// Function MechaGame.MechaGameHUD.DrawObjective
// [0x00820102] 
struct AMechaGameHUD_execDrawObjective_Parms
{
	class AMecha*                                      Obj;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bInSight : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bEnemy : 1;                                       		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FVector                                  ViewPoint;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  AxeX;                                             		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AxeY;                                             		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AxeZ;                                             		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x0048 (0x000C) [0x0000000000000000]              
	// float                                           OldOrgX;                                          		// 0x0054 (0x0004) [0x0000000000000000]              
	// float                                           OldOrgY;                                          		// 0x0058 (0x0004) [0x0000000000000000]              
	// float                                           OldClipX;                                         		// 0x005C (0x0004) [0x0000000000000000]              
	// float                                           OldClipY;                                         		// 0x0060 (0x0004) [0x0000000000000000]              
	// float                                           SizeScale;                                        		// 0x0064 (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0068 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x006C (0x0004) [0x0000000000000000]              
	// float                                           ObjDist;                                          		// 0x0070 (0x0004) [0x0000000000000000]              
	// float                                           Pct;                                              		// 0x0074 (0x0004) [0x0000000000000000]              
	// unsigned long                                   InTheFront : 1;                                   		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  ObjName;                                          		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ATGRealMecha*                             Mecha;                                            		// 0x0088 (0x0004) [0x0000000000000000]              
	// class AActor*                                   ViewTarget;                                       		// 0x008C (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               Overlay;                                          		// 0x0090 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               HPBar;                                            		// 0x0094 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               PlusIcon;                                         		// 0x0098 (0x0004) [0x0000000000000000]              
	// struct FTextureCoordinates                      OverlayCoords;                                    		// 0x009C (0x0010) [0x0000000000000000]              
	// struct FTextureCoordinates                      HPBarCoords;                                      		// 0x00AC (0x0010) [0x0000000000000000]              
	// struct FTextureCoordinates                      PlusIconCoords;                                   		// 0x00BC (0x0010) [0x0000000000000000]              
	// struct FVector2D                                HPBarOffset;                                      		// 0x00CC (0x0008) [0x0000000000000000]              
	// int                                             PosX;                                             		// 0x00D4 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x00D8 (0x0004) [0x0000000000000000]              
	// int                                             OrigPosX;                                         		// 0x00DC (0x0004) [0x0000000000000000]              
	// int                                             OrigPosY;                                         		// 0x00E0 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x00E4 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGameHUD.DrawTextInfo
// [0x00020002] 
struct AMechaGameHUD_execDrawTextInfo_Parms
{
	// int                                             PosX;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             OrigPosX;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             OrigPosY;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           FadeValue;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGameHUD.AddTextInfo
// [0x00020002] 
struct AMechaGameHUD_execAddTextInfo_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// int                                             FindIdx;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGameHUD.DrawTextMessage
// [0x00820002] 
struct AMechaGameHUD_execDrawTextMessage_Parms
{
	// int                                             PosX;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             OrigPosX;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             OrigPosY;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           FadeValue;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FColor                                   CanvasColor;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGameHUD.AddTextMessage
// [0x00820002] 
struct AMechaGameHUD_execAddTextMessage_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FColor                                      DrawColor;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FTextMessage                             msg;                                              		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Idx;                                              		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGameHUD.DrawLivingHud
// [0x00020002] 
struct AMechaGameHUD_execDrawLivingHud_Parms
{
};

// Function MechaGame.MechaDestructibleItemLink.UnifiedHeal
// [0x00020002] 
struct AMechaDestructibleItemLink_execUnifiedHeal_Parms
{
	int                                                HealthToAdd;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaDestructibleItemLink.UnifiedTakeDamage
// [0x00024802] ( FUNC_Event )
struct AMechaDestructibleItemLink_eventUnifiedTakeDamage_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0028 (0x0020) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0048 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.MechaDestructibleItemLink.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AMechaDestructibleItemLink_eventPostBeginPlay_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaGameExplosionActor.DoExplosionDamage
// [0x00880102] 
struct AMechaGameExplosionActor_execDoExplosionDamage_Parms
{
	unsigned long                                      bCauseDamage : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bCauseEffects : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class AActor*                                   Victim;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitL;                                             		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitN;                                             		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Dir;                                              		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BBoxCenter;                                       		// 0x0034 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bDamageBlocked : 1;                               		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bDoFullDamage : 1;                                		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bCauseFractureEffects : 1;                        		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bCausePawnEffects : 1;                            		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bCauseDamageEffects : 1;                          		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           ColRadius;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	// float                                           ColHeight;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	// float                                           CheckRadius;                                      		// 0x005C (0x0004) [0x0000000000000000]              
	// float                                           VictimDist;                                       		// 0x0060 (0x0004) [0x0000000000000000]              
	// TArray< class AActor* >                         VictimsList;                                      		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FBox                                     BBox;                                             		// 0x0070 (0x001C) [0x0000000000000000]              
	// class AController*                              ModInstigator;                                    		// 0x008C (0x0004) [0x0000000000000000]              
	// class AGamePawn*                                VictimPawn;                                       		// 0x0090 (0x0004) [0x0000000000000000]              
	// class AFracturedStaticMeshActor*                FracActor;                                        		// 0x0094 (0x0004) [0x0000000000000000]              
	// unsigned char                                   WantPhysChunksAndParticles;                       		// 0x0098 (0x0001) [0x0000000000000000]              
};

// Function MechaGame.MechaGameExplosionActor.SpawnExplosionParticleSystem
// [0x00020102] 
struct AMechaGameExplosionActor_execSpawnExplosionParticleSystem_Parms
{
	class UParticleSystem*                             Template;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UParticleSystemComponent*                 PSC;                                              		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function MechaGame.TGRealMechaHUD.DisplayClearViewHUD
// [0x00020002] 
struct UTGRealMechaHUD_execDisplayClearViewHUD_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaHUD.DisplayCentralArea
// [0x00820002] 
struct UTGRealMechaHUD_execDisplayCentralArea_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 Rot;                                              		// 0x0008 (0x000C) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           DestOffset;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           SizeX;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           SizeY;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             PosX;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             X;                                                		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             Y;                                                		// 0x0030 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bHit : 1;                                         		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bMainWeaponHit : 1;                               		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bDeputyWeaponHit : 1;                             		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bExpand : 1;                                      		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bDrawCrosshair : 1;                               		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGRealMechaHUD.DisplayWeaponBar
// [0x00820802] ( FUNC_Event )
struct UTGRealMechaHUD_eventDisplayWeaponBar_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             PosX;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             OrigPosX;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             OrigPosY;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             Num1;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             Num2;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             Num3;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             Num4;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           SizeX;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           SizeY;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           Pct;                                              		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FColor                                   CurrBkgColor;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FString                                  AmmoInfoStr;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function MechaGame.TGRealMechaHUD.DisplayAvatar
// [0x00820002] 
struct UTGRealMechaHUD_execDisplayAvatar_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           SizeX;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           SizeY;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           Percent;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             OrigPosX;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             OrigPosY;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             PosX;                                             		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FString                                  HPStr;                                            		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  ViewPlayerName;                                   		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FRotator                                 Rot;                                              		// 0x004C (0x000C) [0x0000000000000000]              
	// class ATGMechaGameHUD*                          GameHUD;                                          		// 0x0058 (0x0004) [0x0000000000000000]              
	// class ATGPlayerController*                      PC;                                               		// 0x005C (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             ViewMecha;                                        		// 0x0060 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               BGTex;                                            		// 0x0064 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               HPBar;                                            		// 0x0068 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               EnergyTex;                                        		// 0x006C (0x0004) [0x0000000000000000]              
	// struct FTextureCoordinates                      BGCoords;                                         		// 0x0070 (0x0010) [0x0000000000000000]              
	// struct FTextureCoordinates                      HPCoords;                                         		// 0x0080 (0x0010) [0x0000000000000000]              
	// struct FTextureCoordinates                      EnergyCoords;                                     		// 0x0090 (0x0010) [0x0000000000000000]              
	// struct FVector2D                                HPOffset;                                         		// 0x00A0 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                EnergyOffset;                                     		// 0x00A8 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                BoostOffset;                                      		// 0x00B0 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                HPTextOffset;                                     		// 0x00B8 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                BalanceOffset;                                    		// 0x00C0 (0x0008) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaHUD.DisplayXPSkill
// [0x00820002] 
struct UTGRealMechaHUD_execDisplayXPSkill_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGMechaPlayerReplicationInfo*            PRI;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class ATGMechaGameHUD*                          GameHUD;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// class AMechaSkillBase*                          Skill;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               XPBG;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               XPBG_Usable;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               XPBar;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               XPBar_Usable;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               CurXPBG;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               CurXPBar;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FTextureCoordinates                      XPBGCoords;                                       		// 0x0030 (0x0010) [0x0000000000000000]              
	// struct FTextureCoordinates                      XPBarCoords;                                      		// 0x0040 (0x0010) [0x0000000000000000]              
	// struct FVector2D                                XPBarOffset;                                      		// 0x0050 (0x0008) [0x0000000000000000]              
	// int                                             OrigPosX;                                         		// 0x0058 (0x0004) [0x0000000000000000]              
	// int                                             OrigPosY;                                         		// 0x005C (0x0004) [0x0000000000000000]              
	// int                                             PosX;                                             		// 0x0060 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0064 (0x0004) [0x0000000000000000]              
	// int                                             SizeX;                                            		// 0x0068 (0x0004) [0x0000000000000000]              
	// int                                             SizeY;                                            		// 0x006C (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x0070 (0x0004) [0x0000000000000000]              
	// float                                           Percent;                                          		// 0x0074 (0x0004) [0x0000000000000000]              
	// float                                           FlashSpeed;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
	// float                                           FadeValue;                                        		// 0x007C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFlash : 1;                                       		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGRealMechaHUD.DisplaySkills
// [0x00820002] 
struct UTGRealMechaHUD_execDisplaySkills_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGMechaPlayerReplicationInfo*            PRI;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class AMechaSkillBase*                          Skill;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGMechaGameHUD*                          GameHUD;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               SkillIcon;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               SkillTip;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FTextureCoordinates                      SkillIconCoords;                                  		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FTextureCoordinates                      SkillTipCoords;                                   		// 0x0030 (0x0010) [0x0000000000000000]              
	// int                                             PosX;                                             		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0044 (0x0004) [0x0000000000000000]              
	// int                                             SizeX;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
	// int                                             SizeY;                                            		// 0x004C (0x0004) [0x0000000000000000]              
	// int                                             OrigPosX;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
	// int                                             OrigPosY;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0058 (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x005C (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0060 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0064 (0x0004) [0x0000000000000000]              
	// float                                           CoolDownPct;                                      		// 0x0068 (0x0004) [0x0000000000000000]              
	// float                                           FlashSpeed;                                       		// 0x006C (0x0004) [0x0000000000000000]              
	// float                                           FadeValue;                                        		// 0x0070 (0x0004) [0x0000000000000000]              
	// int                                             CooldownTime;                                     		// 0x0074 (0x0004) [0x0000000000000000]              
	// int                                             IconSizeX;                                        		// 0x0078 (0x0004) [0x0000000000000000]              
	// int                                             IconSizeY;                                        		// 0x007C (0x0004) [0x0000000000000000]              
	// int                                             CellHeight;                                       		// 0x0080 (0x0004) [0x0000000000000000]              
	// int                                             LeftMargin;                                       		// 0x0084 (0x0004) [0x0000000000000000]              
	// float                                           IconScale;                                        		// 0x0088 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGRealMechaHUD.CreateMIC
// [0x00420002] 
struct UTGRealMechaHUD_execCreateMIC_Parms
{
	class UMaterialInstanceConstant*                   MIC;                                              		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UMaterial*                                   Mat;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMechaHUD.DisplayHud
// [0x00020002] 
struct UTGRealMechaHUD_execDisplayHud_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGRealMechaHUD.Initialize
// [0x00020002] 
struct UTGRealMechaHUD_execInitialize_Parms
{
};

// Function MechaGame.MechaGamePawn.Died
// [0x00024002] 
struct AMechaGamePawn_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      DeathDir;                                         		// 0x0014 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0015 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSkillBase.GetHumanReadableName
// [0x00020102] 
struct AMechaSkillBase_execGetHumanReadableName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function MechaGame.MechaSkillBase.SetLevel
// [0x00020002] 
struct AMechaSkillBase_execSetLevel_Parms
{
	unsigned char                                      Level;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSkillBase.Cleanup
// [0x00020002] 
struct AMechaSkillBase_execCleanup_Parms
{
	// class AMechaSkillComponentBase*                 Item;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AMechaSkillComponentBase*                 ItemToDestroy;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillBase.TimerEnergyConsume
// [0x00020002] 
struct AMechaSkillBase_execTimerEnergyConsume_Parms
{
};

// Function MechaGame.MechaSkillBase.IsConsumeEnergy
// [0x00020102] 
struct AMechaSkillBase_execIsConsumeEnergy_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSkillBase.HasEnoughEnergy
// [0x00020002] 
struct AMechaSkillBase_execHasEnoughEnergy_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSkillBase.GetCoolDownPercent
// [0x00020102] 
struct AMechaSkillBase_execGetCoolDownPercent_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSkillBase.GetCoolDownRemainingTime
// [0x00020102] 
struct AMechaSkillBase_execGetCoolDownRemainingTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSkillBase.IsCoolingDown
// [0x00020102] 
struct AMechaSkillBase_execIsCoolingDown_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSkillBase.NeedsCoolDown
// [0x00020102] 
struct AMechaSkillBase_execNeedsCoolDown_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSkillBase.IsInstant
// [0x00020102] 
struct AMechaSkillBase_execIsInstant_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSkillBase.IsInEffect
// [0x00020002] 
struct AMechaSkillBase_execIsInEffect_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSkillBase.ResetSkill
// [0x00020002] 
struct AMechaSkillBase_execResetSkill_Parms
{
};

// Function MechaGame.MechaSkillBase.Stop
// [0x00020002] 
struct AMechaSkillBase_execStop_Parms
{
};

// Function MechaGame.MechaSkillBase.Start
// [0x00020002] 
struct AMechaSkillBase_execStart_Parms
{
};

// Function MechaGame.MechaSkillBase.CheckStartSignal
// [0x00020002] 
struct AMechaSkillBase_execCheckStartSignal_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSkillBase.SetStartSignal
// [0x00020002] 
struct AMechaSkillBase_execSetStartSignal_Parms
{
	unsigned long                                      bStartSignal : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.MechaSkillBase.DeActivateSkillComponents
// [0x00020002] 
struct AMechaSkillBase_execDeActivateSkillComponents_Parms
{
	// class AMechaSkillComponentBase*                 Item;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillBase.ActivateSkillComponents
// [0x00020002] 
struct AMechaSkillBase_execActivateSkillComponents_Parms
{
	// class AMechaSkillComponentBase*                 Item;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillBase.CanActivateSkillComponents
// [0x00020002] 
struct AMechaSkillBase_execCanActivateSkillComponents_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AMechaSkillComponentBase*                 Item;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillBase.AddSkillComponent
// [0x00020002] 
struct AMechaSkillBase_execAddSkillComponent_Parms
{
	class AMechaSkillComponentBase*                    NewItem;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AMechaSkillComponentBase*                 Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AMechaSkillComponentBase*                 LastItem;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillBase.CreateSkillComponents
// [0x00020000] 
struct AMechaSkillBase_execCreateSkillComponents_Parms
{
};

// Function MechaGame.MechaSkillBase.Initialize
// [0x00020002] 
struct AMechaSkillBase_execInitialize_Parms
{
	class ATGMechaGamePlayerController*                InOwnerPC;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AMechaSkillManager*                          InOwnerSkillMgr;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AMechaSkillComponentBase*                 Item;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AMechaSkillBase_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaHalfRoundGame.AddTeamScore
// [0x00020002] 
struct AMechaHalfRoundGame_execAddTeamScore_Parms
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaHalfRoundGame.DirectEndRound
// [0x00020002] 
struct AMechaHalfRoundGame_execDirectEndRound_Parms
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class AActor*                                      EndRoundFocus;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaHalfRoundGame.IncrementRoundCount
// [0x00020002] 
struct AMechaHalfRoundGame_execIncrementRoundCount_Parms
{
};

// Function MechaGame.MechaHalfRoundGame.SetRoundState
// [0x00020002] 
struct AMechaHalfRoundGame_execSetRoundState_Parms
{
	unsigned char                                      State;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class AMechaHalfRoundGameReplicationInfo*       GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaHalfRoundGame.Reset
// [0x00020002] 
struct AMechaHalfRoundGame_execReset_Parms
{
	// class AController*                              C;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaHalfRoundGame.InitGameReplicationInfo
// [0x00020002] 
struct AMechaHalfRoundGame_execInitGameReplicationInfo_Parms
{
	// class AMechaHalfRoundGameReplicationInfo*       GRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaMapInfo.GetPickupSizeScale
// [0x00020102] 
struct UMechaMapInfo_execGetPickupSizeScale_Parms
{
	class ATGMechaPickupFactory*                       Pickup;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AWorldInfo*                               WI;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaMapInfo.DrawObserverBigRadar
// [0x00820102] 
struct UMechaMapInfo_execDrawObserverBigRadar_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AUTPlayerController*                         PlayerOwner;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              XPos;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              YPos;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFullDetail : 1;                                  		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              AspectRatio;                                      		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaDMGameReplicationInfo*            DMGRI;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ATGMechaDMPlayerController*               DMPlayerOwner;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ATGMechaGameHUD*                          HUD;                                              		// 0x0028 (0x0004) [0x0000000000000000]              
	// class ATGMechaPickupFactory*                    MechaPickup;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	// class AWorldInfo*                               WI;                                               		// 0x0030 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               PickupIcon;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FVector                                  BaseLoc;                                          		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DoorSwitchLoc;                                    		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  PickupLocation;                                   		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 R;                                                		// 0x005C (0x000C) [0x0000000000000000]              
	// int                                             PickupIconSize;                                   		// 0x0068 (0x0004) [0x0000000000000000]              
	// int                                             IconSizeScale;                                    		// 0x006C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaMapInfo.DrawObserverMap
// [0x00820102] 
struct UMechaMapInfo_execDrawObserverMap_Parms
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
	// struct FVector                                  BaseLoc;                                          		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DoorSwitchLoc;                                    		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FVector                                  PickupLocation;                                   		// 0x005C (0x000C) [0x0000000000000000]              
	// float                                           MinRadarRange;                                    		// 0x0068 (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             FinalColor;                                       		// 0x006C (0x0010) [0x0000000000000000]              
	// struct FLinearColor                             SpectatorPointColor;                              		// 0x007C (0x0010) [0x0000000000000000]              
	// struct FRotator                                 MapRot;                                           		// 0x008C (0x000C) [0x0000000000000000]              
	// class AWorldInfo*                               WI;                                               		// 0x0098 (0x0004) [0x0000000000000000]              
	// class APawn*                                    PawnOwner;                                        		// 0x009C (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             Mecha;                                            		// 0x00A0 (0x0004) [0x0000000000000000]              
	// class ATGGameReplicationInfo*                   GRI;                                              		// 0x00A4 (0x0004) [0x0000000000000000]              
	// class ATGMechaDMGameReplicationInfo*            DMGRI;                                            		// 0x00A8 (0x0004) [0x0000000000000000]              
	// class ATGMechaGameHUD*                          HUD;                                              		// 0x00AC (0x0004) [0x0000000000000000]              
	// class ATGMechaDMPlayerController*               DMPlayerOwner;                                    		// 0x00B0 (0x0004) [0x0000000000000000]              
	// class ATGPlayerReplicationInfo*                 PlayerOwnerPRI;                                   		// 0x00B4 (0x0004) [0x0000000000000000]              
	// class ATGPlayerReplicationInfo*                 PawnOwnerPRI;                                     		// 0x00B8 (0x0004) [0x0000000000000000]              
	// class ATGPlayerReplicationInfo*                 PRI;                                              		// 0x00BC (0x0004) [0x0000000000000000]              
	// float                                           ScaleY;                                           		// 0x00C0 (0x0004) [0x0000000000000000]              
	// class ATGMechaPickupFactory*                    MechaPickup;                                      		// 0x00C4 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               PickupIcon;                                       		// 0x00C8 (0x0004) [0x0000000000000000]              
	// int                                             PickupIconSize;                                   		// 0x00CC (0x0004) [0x0000000000000000]              
	// int                                             IconSizeScale;                                    		// 0x00D0 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaMapInfo.DrawBigRadar
// [0x00820102] 
struct UMechaMapInfo_execDrawBigRadar_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AUTPlayerController*                         PlayerOwner;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              XPos;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              YPos;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFullDetail : 1;                                  		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              AspectRatio;                                      		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             PlayerYaw;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  PlayerLocation;                                   		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenLocation;                                   		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  PickupLocation;                                   		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  BaseLoc;                                          		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DoorSwitchLoc;                                    		// 0x0054 (0x000C) [0x0000000000000000]              
	// class APawn*                                    PawnOwner;                                        		// 0x0060 (0x0004) [0x0000000000000000]              
	// class APawn*                                    P;                                                		// 0x0064 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             Mecha;                                            		// 0x0068 (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             FinalColor;                                       		// 0x006C (0x0010) [0x0000000000000000]              
	// class ATGPlayerReplicationInfo*                 PRI;                                              		// 0x007C (0x0004) [0x0000000000000000]              
	// struct FRotator                                 MapRot;                                           		// 0x0080 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 R;                                                		// 0x008C (0x000C) [0x0000000000000000]              
	// class AWorldInfo*                               WI;                                               		// 0x0098 (0x0004) [0x0000000000000000]              
	// class ATGGameReplicationInfo*                   GRI;                                              		// 0x009C (0x0004) [0x0000000000000000]              
	// class ATGMechaDMGameReplicationInfo*            DMGRI;                                            		// 0x00A0 (0x0004) [0x0000000000000000]              
	// class ATGMechaDMPlayerController*               DMPlayerOwner;                                    		// 0x00A4 (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             PlayerColor;                                      		// 0x00A8 (0x0010) [0x0000000000000000]              
	// float                                           ScaleY;                                           		// 0x00B8 (0x0004) [0x0000000000000000]              
	// float                                           IconSizeScale;                                    		// 0x00BC (0x0004) [0x0000000000000000]              
	// float                                           AlphaValue;                                       		// 0x00C0 (0x0004) [0x0000000000000000]              
	// float                                           FlashSpeed;                                       		// 0x00C4 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x00C8 (0x0004) [0x0000000000000000]              
	// class ATGMechaGameHUD*                          HUD;                                              		// 0x00CC (0x0004) [0x0000000000000000]              
	// class ATGMechaPickupFactory*                    MechaPickup;                                      		// 0x00D0 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               PickupIcon;                                       		// 0x00D4 (0x0004) [0x0000000000000000]              
	// int                                             PickupIconSize;                                   		// 0x00D8 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaMapInfo.DrawMap
// [0x00820102] 
struct UMechaMapInfo_execDrawMap_Parms
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
	// struct FVector                                  PickupLocation;                                   		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BaseLoc;                                          		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DoorSwitchLoc;                                    		// 0x005C (0x000C) [0x0000000000000000]              
	// float                                           MinRadarRange;                                    		// 0x0068 (0x0004) [0x0000000000000000]              
	// class APawn*                                    PawnOwner;                                        		// 0x006C (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             Mecha;                                            		// 0x0070 (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             FinalColor;                                       		// 0x0074 (0x0010) [0x0000000000000000]              
	// class ATGPlayerReplicationInfo*                 PRI;                                              		// 0x0084 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 MapRot;                                           		// 0x0088 (0x000C) [0x0000000000000000]              
	// class AWorldInfo*                               WI;                                               		// 0x0094 (0x0004) [0x0000000000000000]              
	// class ATGGameReplicationInfo*                   GRI;                                              		// 0x0098 (0x0004) [0x0000000000000000]              
	// class ATGMechaDMGameReplicationInfo*            DMGRI;                                            		// 0x009C (0x0004) [0x0000000000000000]              
	// class ATGMechaDMPlayerController*               DMPlayerOwner;                                    		// 0x00A0 (0x0004) [0x0000000000000000]              
	// float                                           ScaleY;                                           		// 0x00A4 (0x0004) [0x0000000000000000]              
	// float                                           IconSizeScale;                                    		// 0x00A8 (0x0004) [0x0000000000000000]              
	// float                                           AlphaValue;                                       		// 0x00AC (0x0004) [0x0000000000000000]              
	// float                                           FlashSpeed;                                       		// 0x00B0 (0x0004) [0x0000000000000000]              
	// class ATGMechaGameHUD*                          HUD;                                              		// 0x00B4 (0x0004) [0x0000000000000000]              
	// class ATGMechaPickupFactory*                    MechaPickup;                                      		// 0x00B8 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               PickupIcon;                                       		// 0x00BC (0x0004) [0x0000000000000000]              
	// int                                             PickupIconSize;                                   		// 0x00C0 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaMapInfo.DrawBigRadarDoorImage
// [0x00020002] 
struct UMechaMapInfo_execDrawBigRadarDoorImage_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              X;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              H;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    R;                                                		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// float                                           FlashSpeed;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           FadeValue;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	// class AWorldInfo*                               WI;                                               		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaMapInfo.SetBaseDoorVisible
// [0x00020002] 
struct UMechaMapInfo_execSetBaseDoorVisible_Parms
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.MechaMapInfo.FindObjectives
// [0x00020002] 
struct UMechaMapInfo_execFindObjectives_Parms
{
};

// Function MechaGame.TGMechaPickupFactory.GetRadarIcon
// [0x00020102] 
struct ATGMechaPickupFactory_execGetRadarIcon_Parms
{
	class UTexture2D*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaPickupFactory.SetPickupEnable
// [0x00020002] 
struct ATGMechaPickupFactory_execSetPickupEnable_Parms
{
};

// Function MechaGame.TGMechaPickupFactory.SetPickupDisable
// [0x00020002] 
struct ATGMechaPickupFactory_execSetPickupDisable_Parms
{
};

// Function MechaGame.TGMechaPickupFactory.NotifyRoundStarted
// [0x00020002] 
struct ATGMechaPickupFactory_execNotifyRoundStarted_Parms
{
};

// Function MechaGame.TGMechaPickupFactory.ClearIconFlash
// [0x00020102] 
struct ATGMechaPickupFactory_execClearIconFlash_Parms
{
};

// Function MechaGame.TGMechaPickupFactory.FlashIcon
// [0x00020102] 
struct ATGMechaPickupFactory_execFlashIcon_Parms
{
};

// Function MechaGame.TGMechaPickupFactory.SetPickupMesh
// [0x00020100] 
struct ATGMechaPickupFactory_execSetPickupMesh_Parms
{
};

// Function MechaGame.TGMechaPickupFactory.SetPickupHidden
// [0x00020102] 
struct ATGMechaPickupFactory_execSetPickupHidden_Parms
{
};

// Function MechaGame.TGMechaPickupFactory.SetPickupVisible
// [0x00020102] 
struct ATGMechaPickupFactory_execSetPickupVisible_Parms
{
};

// Function MechaGame.TGMechaPickupFactory.InitializePickup
// [0x00020102] 
struct ATGMechaPickupFactory_execInitializePickup_Parms
{
};

// Function MechaGame.TGMechaPickupFactory.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGMechaPickupFactory_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSkillComponentBase.OnStateChanged
// [0x00020102] 
struct AMechaSkillComponentBase_execOnStateChanged_Parms
{
};

// Function MechaGame.MechaSkillComponentBase.OnActivateCountUpdate
// [0x00020102] 
struct AMechaSkillComponentBase_execOnActivateCountUpdate_Parms
{
};

// Function MechaGame.MechaSkillComponentBase.UpdateActivateCount
// [0x00020002] 
struct AMechaSkillComponentBase_execUpdateActivateCount_Parms
{
};

// Function MechaGame.MechaSkillComponentBase.SetActive
// [0x00020002] 
struct AMechaSkillComponentBase_execSetActive_Parms
{
	unsigned long                                      bNowActive : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.MechaSkillComponentBase.ClientDeActivate
// [0x010201C2] 
struct AMechaSkillComponentBase_execClientDeActivate_Parms
{
};

// Function MechaGame.MechaSkillComponentBase.ClientActivate
// [0x010201C2] 
struct AMechaSkillComponentBase_execClientActivate_Parms
{
};

// Function MechaGame.MechaSkillComponentBase.OnDeactivate
// [0x00020100] 
struct AMechaSkillComponentBase_execOnDeactivate_Parms
{
	class AMechaSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSkillComponentBase.OnActivate
// [0x00020100] 
struct AMechaSkillComponentBase_execOnActivate_Parms
{
	class AMechaSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSkillComponentBase.CanDeActivate
// [0x00020002] 
struct AMechaSkillComponentBase_execCanDeActivate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSkillComponentBase.CanActivate
// [0x00020002] 
struct AMechaSkillComponentBase_execCanActivate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSkillComponentBase.Deactivate
// [0x00020002] 
struct AMechaSkillComponentBase_execDeactivate_Parms
{
};

// Function MechaGame.MechaSkillComponentBase.Activate
// [0x00020002] 
struct AMechaSkillComponentBase_execActivate_Parms
{
};

// Function MechaGame.MechaSkillComponentBase.Initialize
// [0x00020002] 
struct AMechaSkillComponentBase_execInitialize_Parms
{
	class AMechaSkillBase*                             InOwnerSkill;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSkillComponentBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AMechaSkillComponentBase_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSkillManager.GetEnergy
// [0x00020002] 
struct AMechaSkillManager_execGetEnergy_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSkillManager.ConsumeEnergy
// [0x00020002] 
struct AMechaSkillManager_execConsumeEnergy_Parms
{
	float                                              Consume;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSkillManager.NotifyOwnerPawnDied
// [0x00020002] 
struct AMechaSkillManager_execNotifyOwnerPawnDied_Parms
{
};

// Function MechaGame.MechaSkillManager.NotifySkillStopped
// [0x00020002] 
struct AMechaSkillManager_execNotifySkillStopped_Parms
{
	class AMechaSkillBase*                             Item;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSkillManager.DeActivateSkills
// [0x00020102] 
struct AMechaSkillManager_execDeActivateSkills_Parms
{
	// class AMechaSkillBase*                          Item;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillManager.HasSkill
// [0x00020102] 
struct AMechaSkillManager_execHasSkill_Parms
{
	struct FName                                       SkillName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AMechaSkillBase*                          Item;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillManager.GetInitiativeSkillByName
// [0x00020102] 
struct AMechaSkillManager_execGetInitiativeSkillByName_Parms
{
	struct FName                                       SkillName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AMechaSkillBase*                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AMechaSkillBase*                          Item;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillManager.GetInitiativeSkill
// [0x00020102] 
struct AMechaSkillManager_execGetInitiativeSkill_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AMechaSkillBase*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AMechaSkillBase*                          Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillManager.GetSkill
// [0x00020102] 
struct AMechaSkillManager_execGetSkill_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AMechaSkillBase*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AMechaSkillBase*                          Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillManager.IsSkillInEffect
// [0x00020002] 
struct AMechaSkillManager_execIsSkillInEffect_Parms
{
	struct FName                                       SkillName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AMechaSkillBase*                          Item;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillManager.NotifyEnergyEmpty
// [0x00020002] 
struct AMechaSkillManager_execNotifyEnergyEmpty_Parms
{
	// class AMechaSkillBase*                          Item;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillManager.ResetSkills
// [0x00020102] 
struct AMechaSkillManager_execResetSkills_Parms
{
	// class AMechaSkillBase*                          Item;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillManager.SetSkillLevel
// [0x00020002] 
struct AMechaSkillManager_execSetSkillLevel_Parms
{
	struct FName                                       SkillName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Level;                                            		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class AMechaSkillBase*                          Item;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillManager.StopSkillByName
// [0x00020002] 
struct AMechaSkillManager_execStopSkillByName_Parms
{
	struct FName                                       SkillName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class AMechaSkillBase*                          Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillManager.StopSkill
// [0x00024002] 
struct AMechaSkillManager_execStopSkill_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class AMechaSkillBase*                          Item;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillManager.StartSkillByName
// [0x00020002] 
struct AMechaSkillManager_execStartSkillByName_Parms
{
	struct FName                                       SkillName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class AMechaSkillBase*                          Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillManager.StartSkill
// [0x00024002] 
struct AMechaSkillManager_execStartSkill_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class AMechaSkillBase*                          Item;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillManager.SetStartSignal
// [0x00020002] 
struct AMechaSkillManager_execSetStartSignal_Parms
{
	struct FName                                       SkillName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bHasStartSignal : 1;                              		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class AMechaSkillBase*                          Item;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillManager.DiscardSkills
// [0x00020002] 
struct AMechaSkillManager_execDiscardSkills_Parms
{
	// class AMechaSkillBase*                          Item;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AMechaSkillBase*                          ItemToDestroy;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillManager.Destroyed
// [0x00020802] ( FUNC_Event )
struct AMechaSkillManager_eventDestroyed_Parms
{
};

// Function MechaGame.MechaSkillManager.CheckUniqueName
// [0x00020002] 
struct AMechaSkillManager_execCheckUniqueName_Parms
{
	class AMechaSkillBase*                             NewItem;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AMechaSkillBase*                          Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillManager.AddSkill
// [0x00020002] 
struct AMechaSkillManager_execAddSkill_Parms
{
	class AMechaSkillBase*                             NewItem;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AMechaSkillBase*                          Item;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AMechaSkillBase*                          LastItem;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillManager.CreateSkill
// [0x00020002] 
struct AMechaSkillManager_execCreateSkill_Parms
{
	class UClass*                                      SkillClass;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AMechaSkillBase*                          Skill;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillManager.SetupSkills
// [0x00020002] 
struct AMechaSkillManager_execSetupSkills_Parms
{
	// class ATGRealMecha*                             OwnerMecha;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillManager.SetupEngery
// [0x00020002] 
struct AMechaSkillManager_execSetupEngery_Parms
{
	// class ATGRealMecha*                             OwnerMecha;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillManager.AcknowledgePawnPossession
// [0x00020002] 
struct AMechaSkillManager_execAcknowledgePawnPossession_Parms
{
};

// Function MechaGame.MechaSkillManager.Initialize
// [0x00020002] 
struct AMechaSkillManager_execInitialize_Parms
{
	class ATGMechaGamePlayerController*                InOwnerPC;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.MechaSkill_AirBoost.CreateSkillComponents
// [0x00020002] 
struct AMechaSkill_AirBoost_execCreateSkillComponents_Parms
{
	// class AMechaSkillComponent_AirBoost*            AirBoost;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillComponent_AirBoost.OnDeactivate
// [0x00020102] 
struct AMechaSkillComponent_AirBoost_execOnDeactivate_Parms
{
	class AMechaSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSkillComponent_AirBoost.OnActivate
// [0x00020102] 
struct AMechaSkillComponent_AirBoost_execOnActivate_Parms
{
	class AMechaSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSkill_Blaster.CreateSkillComponents
// [0x00020002] 
struct AMechaSkill_Blaster_execCreateSkillComponents_Parms
{
	// class AMechaSkillComponent_Blaster*             Blaster;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillComponent_Blaster.OnActivate
// [0x00820102] 
struct AMechaSkillComponent_Blaster_execOnActivate_Parms
{
	class AMechaSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AMechaGameExplosionActor*                 ExplosionActor;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// float                                           ZOffset;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkill_ClearView.CreateSkillComponents
// [0x00020002] 
struct AMechaSkill_ClearView_execCreateSkillComponents_Parms
{
	// class AMechaSkillComponent_ClearView*           ClearView;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillComponent_ClearView.OnDeactivate
// [0x00020102] 
struct AMechaSkillComponent_ClearView_execOnDeactivate_Parms
{
	class AMechaSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealMecha*                             Mecha;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillComponent_ClearView.OnActivate
// [0x00020102] 
struct AMechaSkillComponent_ClearView_execOnActivate_Parms
{
	class AMechaSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealMecha*                             Mecha;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkill_GroundBoost.CreateSkillComponents
// [0x00020002] 
struct AMechaSkill_GroundBoost_execCreateSkillComponents_Parms
{
	// class AMechaSkillComponent_GroundBoost*         GroundBoost;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillComponent_GroundBoost.OnDeactivate
// [0x00020102] 
struct AMechaSkillComponent_GroundBoost_execOnDeactivate_Parms
{
	class AMechaSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSkillComponent_GroundBoost.OnActivate
// [0x00020102] 
struct AMechaSkillComponent_GroundBoost_execOnActivate_Parms
{
	class AMechaSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSkill_HealArea.CreateSkillComponents
// [0x00020002] 
struct AMechaSkill_HealArea_execCreateSkillComponents_Parms
{
	// class AMechaSkillComponent_HealArea*            HealComp;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillComponent_HealArea.OnActivate
// [0x00020102] 
struct AMechaSkillComponent_HealArea_execOnActivate_Parms
{
	class AMechaSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UClass*                                   HealClass;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGMechaHealArea*                         HealArea;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkill_SelfHeal.CreateSkillComponents
// [0x00020002] 
struct AMechaSkill_SelfHeal_execCreateSkillComponents_Parms
{
	// class AMechaSkillComponent_SelfHeal*            HealComp;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillComponent_SelfHeal.Timer
// [0x00020002] 
struct AMechaSkillComponent_SelfHeal_execTimer_Parms
{
};

// Function MechaGame.MechaSkillComponent_SelfHeal.OnDeactivate
// [0x00020102] 
struct AMechaSkillComponent_SelfHeal_execOnDeactivate_Parms
{
	class AMechaSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSkillComponent_SelfHeal.OnActivate
// [0x00020102] 
struct AMechaSkillComponent_SelfHeal_execOnActivate_Parms
{
	class AMechaSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSkill_Shield.CreateSkillComponents
// [0x00020002] 
struct AMechaSkill_Shield_execCreateSkillComponents_Parms
{
	// class AMechaSkillComponent_Shield*              Shield;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillComponent_Shield.OnTriggerDamageEffect
// [0x00020102] 
struct AMechaSkillComponent_Shield_execOnTriggerDamageEffect_Parms
{
};

// Function MechaGame.MechaSkillComponent_Shield.OnShieldDestroyedCountUpdate
// [0x00020102] 
struct AMechaSkillComponent_Shield_execOnShieldDestroyedCountUpdate_Parms
{
};

// Function MechaGame.MechaSkillComponent_Shield.AbsorbDamage
// [0x00420002] 
struct AMechaSkillComponent_Shield_execAbsorbDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// int                                             AbsorbedDamage;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillComponent_Shield.OnDeactivate
// [0x00020102] 
struct AMechaSkillComponent_Shield_execOnDeactivate_Parms
{
	class AMechaSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSkillComponent_Shield.OnActivate
// [0x00020102] 
struct AMechaSkillComponent_Shield_execOnActivate_Parms
{
	class AMechaSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSkillComponent_Shield.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AMechaSkillComponent_Shield_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSkill_Trample.CreateSkillComponents
// [0x00020002] 
struct AMechaSkill_Trample_execCreateSkillComponents_Parms
{
	// class AMechaSkillComponent_Trample*             Trample;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillComponent_Trample.OnActivate
// [0x00820102] 
struct AMechaSkillComponent_Trample_execOnActivate_Parms
{
	class AMechaSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AMechaGameExplosionActor*                 ExplosionActor;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// float                                           ZOffset;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkill_Trap.CreateSkillComponents
// [0x00020002] 
struct AMechaSkill_Trap_execCreateSkillComponents_Parms
{
	// class AMechaSkillComponent_Trap*                TrapComp;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillComponent_Trap.OnActivate
// [0x00020102] 
struct AMechaSkillComponent_Trap_execOnActivate_Parms
{
	class AMechaSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UClass*                                   TrapClass;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGMechaTrapArea*                         Trap;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkill_XP.CreateSkillComponents
// [0x00020002] 
struct AMechaSkill_XP_execCreateSkillComponents_Parms
{
	// class AMechaSkillComponent_ReinforceWeapon*     ReinforceWeapon;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillComponent_ReinforceWeapon.OnActivate
// [0x00020102] 
struct AMechaSkillComponent_ReinforceWeapon_execOnActivate_Parms
{
	class AMechaSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSkillComponent_EnemyHit.OnActivate
// [0x00020102] 
struct AMechaSkillComponent_EnemyHit_execOnActivate_Parms
{
	class AMechaSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealMecha*                             Mecha;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Damage;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.MechaSkillComponent_Heal.OnActivate
// [0x00020102] 
struct AMechaSkillComponent_Heal_execOnActivate_Parms
{
	class AMechaSkillComponentBase*                    SkillComponent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealMecha*                             Mecha;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             SelfHeal;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             TeammateHeal;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             ActualHeal;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaHealArea.CauseHealTo
// [0x00020002] 
struct ATGMechaHealArea_execCauseHealTo_Parms
{
	class ATGRealMecha*                                Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaPlayerReplicationInfo*            PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             OldHealth;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             ActualHeal;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaHealArea.Timer
// [0x00020802] ( FUNC_Event )
struct ATGMechaHealArea_eventTimer_Parms
{
	// class ATGRealMecha*                             Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaHealArea.Deactivate
// [0x00020002] 
struct ATGMechaHealArea_execDeactivate_Parms
{
};

// Function MechaGame.TGMechaHealArea.Activate
// [0x00020002] 
struct ATGMechaHealArea_execActivate_Parms
{
};

// Function MechaGame.TGMechaHealArea.SetEffectsVisible
// [0x00020102] 
struct ATGMechaHealArea_execSetEffectsVisible_Parms
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMechaHealArea.Destroyed
// [0x00020902] ( FUNC_Event )
struct ATGMechaHealArea_eventDestroyed_Parms
{
};

// Function MechaGame.TGMechaHealArea.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGMechaHealArea_eventPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaTrapArea.CauseDamageTo
// [0x00020002] 
struct ATGMechaTrapArea_execCauseDamageTo_Parms
{
	class ATGRealMecha*                                Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaTrapArea.Timer
// [0x00020802] ( FUNC_Event )
struct ATGMechaTrapArea_eventTimer_Parms
{
	// class ATGRealMecha*                             Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaTrapArea.Deactivate
// [0x00020002] 
struct ATGMechaTrapArea_execDeactivate_Parms
{
};

// Function MechaGame.TGMechaTrapArea.Activate
// [0x00020002] 
struct ATGMechaTrapArea_execActivate_Parms
{
};

// Function MechaGame.TGMechaTrapArea.SetEffectsVisible
// [0x00020102] 
struct ATGMechaTrapArea_execSetEffectsVisible_Parms
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMechaTrapArea.Destroyed
// [0x00020902] ( FUNC_Event )
struct ATGMechaTrapArea_eventDestroyed_Parms
{
};

// Function MechaGame.TGMechaTrapArea.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGMechaTrapArea_eventPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaEnergy.GetEnergy
// [0x00020002] 
struct ATGMechaEnergy_execGetEnergy_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaEnergy.HasEnergy
// [0x00020002] 
struct ATGMechaEnergy_execHasEnergy_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaEnergy.NotifyEnergyEmpty
// [0x00020002] 
struct ATGMechaEnergy_execNotifyEnergyEmpty_Parms
{
};

// Function MechaGame.TGMechaEnergy.NotifyEnergyFull
// [0x00020002] 
struct ATGMechaEnergy_execNotifyEnergyFull_Parms
{
};

// Function MechaGame.TGMechaEnergy.TimerEnergyRecover
// [0x00020002] 
struct ATGMechaEnergy_execTimerEnergyRecover_Parms
{
};

// Function MechaGame.TGMechaEnergy.EnergyRecover
// [0x00020002] 
struct ATGMechaEnergy_execEnergyRecover_Parms
{
	float                                              Rate;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaEnergy.EnergyConsume
// [0x00020002] 
struct ATGMechaEnergy_execEnergyConsume_Parms
{
	float                                              Rate;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaEnergy.Initialize
// [0x00020002] 
struct ATGMechaEnergy_execInitialize_Parms
{
	class ATGRealMecha*                                Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AMechaSkillManager*                          SkillMgr;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSpecialMove__Death.SpecialMoveEnded
// [0x00020102] 
struct UMechaSpecialMove__Death_execSpecialMoveEnded_Parms
{
	unsigned char                                      PrevMove;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      NextMove;                                         		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSpecialMove__Death.SpecialMoveStarted
// [0x00020102] 
struct UMechaSpecialMove__Death_execSpecialMoveStarted_Parms
{
	unsigned long                                      bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      PrevMove;                                         		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.MechaSpecialMove__Death.CanOverrideSpecialMove
// [0x00020002] 
struct UMechaSpecialMove__Death_execCanOverrideSpecialMove_Parms
{
	unsigned char                                      InMove;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaPlayerInput.PressVKey
// [0x00020202] ( FUNC_Exec )
struct UTGMechaPlayerInput_execPressVKey_Parms
{
};

// Function MechaGame.TGMechaPlayerInput.UnUse
// [0x00020202] ( FUNC_Exec )
struct UTGMechaPlayerInput_execUnUse_Parms
{
};

// Function MechaGame.TGMechaPlayerInput.Use
// [0x00020202] ( FUNC_Exec )
struct UTGMechaPlayerInput_execUse_Parms
{
};

// Function MechaGame.TGMechaPlayerInput.ReleaseFKey
// [0x00020202] ( FUNC_Exec )
struct UTGMechaPlayerInput_execReleaseFKey_Parms
{
};

// Function MechaGame.TGMechaPlayerInput.PressFKey
// [0x00020202] ( FUNC_Exec )
struct UTGMechaPlayerInput_execPressFKey_Parms
{
};

// Function MechaGame.TGMechaPlayerInput.UnSnake
// [0x00020202] ( FUNC_Exec )
struct UTGMechaPlayerInput_execUnSnake_Parms
{
};

// Function MechaGame.TGMechaPlayerInput.Snake
// [0x00020202] ( FUNC_Exec )
struct UTGMechaPlayerInput_execSnake_Parms
{
};

// Function MechaGame.TGMechaPlayerInput.UnJump
// [0x00020202] ( FUNC_Exec )
struct UTGMechaPlayerInput_execUnJump_Parms
{
};

// Function MechaGame.TGMechaPlayerInput.Jump
// [0x00020202] ( FUNC_Exec )
struct UTGMechaPlayerInput_execJump_Parms
{
};

// Function MechaGame.TGMechaPlayerInput.SwitchToLastUsedWeapon
// [0x00020202] ( FUNC_Exec )
struct UTGMechaPlayerInput_execSwitchToLastUsedWeapon_Parms
{
};

// Function MechaGame.TGMechaPlayerInput.SwitchWeapon
// [0x00020202] ( FUNC_Exec )
struct UTGMechaPlayerInput_execSwitchWeapon_Parms
{
	unsigned char                                      F;                                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaPlayerReplicationInfo*            PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned char                                   NewType;                                          		// 0x0008 (0x0001) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeapon.PlayLocalImpactAnim
// [0x00820102] 
struct ATGMechaWeapon_execPlayLocalImpactAnim_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      HitActor;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  HitDir;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitPawnDir;                                       		// 0x001C (0x000C) [0x0000000000000000]              
	// float                                           HitAngle;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           HitPawnAngle;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           DeltaDir;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             HitMecha;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             OwnerMecha;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeapon.PlayFiringSound
// [0x00020102] 
struct ATGMechaWeapon_execPlayFiringSound_Parms
{
};

// Function MechaGame.TGMechaWeapon.DrawWeaponCrosshair
// [0x00020100] 
struct ATGMechaWeapon_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeapon.FlameThrowerServerTakeDamage
// [0x002200C0] 
struct ATGMechaWeapon_execFlameThrowerServerTakeDamage_Parms
{
	class AActor*                                      DamageActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                HitDamage;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                HitEnergyDamage;                                  		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      MyDamageType;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeapon.ClientSyncOverheatInfo
// [0x010201C2] 
struct ATGMechaWeapon_execClientSyncOverheatInfo_Parms
{
	unsigned long                                      bServerMaxOverheatingCooldownComplete : 1;        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMechaWeapon.ServerResetOverheatInfo
// [0x002200C2] 
struct ATGMechaWeapon_execServerResetOverheatInfo_Parms
{
};

// Function MechaGame.TGMechaWeapon.StartFire
// [0x00020102] 
struct ATGMechaWeapon_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeapon.Tick
// [0x00020902] ( FUNC_Event )
struct ATGMechaWeapon_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           DeltaCooldownValue;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           CurrCooldownRate;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Pct;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeapon.ServerHandleFinishedFiring
// [0x002200C2] 
struct ATGMechaWeapon_execServerHandleFinishedFiring_Parms
{
};

// Function MechaGame.TGMechaWeapon.HandleFinishedFiring
// [0x00020102] 
struct ATGMechaWeapon_execHandleFinishedFiring_Parms
{
	// class ATGRealMecha*                             OwnerMecha;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGMechaWeaponAttachment*                 MechaWeapAttachment;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeapon.OnOverheatCooldownTimer
// [0x00020102] 
struct ATGMechaWeapon_execOnOverheatCooldownTimer_Parms
{
};

// Function MechaGame.TGMechaWeapon.ServerStartFire
// [0x002200C2] 
struct ATGMechaWeapon_execServerStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeapon.ServerReloadWeapon
// [0x002200C2] 
struct ATGMechaWeapon_execServerReloadWeapon_Parms
{
};

// Function MechaGame.TGMechaWeapon.ReloadWeapon
// [0x00020102] 
struct ATGMechaWeapon_execReloadWeapon_Parms
{
};

// Function MechaGame.TGMechaWeapon.OnWeaponReloadTimer
// [0x00020102] 
struct ATGMechaWeapon_execOnWeaponReloadTimer_Parms
{
};

// Function MechaGame.TGMechaWeapon.ClientWeaponReloadOver
// [0x010201C2] 
struct ATGMechaWeapon_execClientWeaponReloadOver_Parms
{
};

// Function MechaGame.TGMechaWeapon.ServerReFireAmmunition
// [0x002200C2] 
struct ATGMechaWeapon_execServerReFireAmmunition_Parms
{
};

// Function MechaGame.TGMechaWeapon.WeaponPlaySoundLocalEx
// [0x00084102] 
struct ATGMechaWeapon_execWeaponPlaySoundLocalEx_Parms
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USoundCue*                                   AltLocalSound;                                    		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UAudioComponent*                             AC;                                               		// 0x0008 (0x0004) [0x0000000004000090]              ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )
	float                                              FadeInTime;                                       		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UAudioComponent*                             ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// class AActor*                                   SoundOwner;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeapon.GetCurrAimDisperseType
// [0x00020102] 
struct ATGMechaWeapon_execGetCurrAimDisperseType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGRealMecha*                             TGMecha;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeapon.GetPhysicalFireStartLoc
// [0x00024102] 
struct ATGMechaWeapon_execGetPhysicalFireStartLoc_Parms
{
	struct FVector                                     AimDir;                                           		// 0x0000 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGRealMecha*                             TGMecha;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ATGMechaWeaponAttachment*                 TGMechaWeapAttch;                                 		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeapon.WeaponEmpty
// [0x00020102] 
struct ATGMechaWeapon_execWeaponEmpty_Parms
{
};

// Function MechaGame.TGMechaWeapon.DetachWeapon
// [0x00020102] 
struct ATGMechaWeapon_execDetachWeapon_Parms
{
	// class ATGRealMecha*                             P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeapon.AttachWeaponTo
// [0x00024102] 
struct ATGMechaWeapon_execAttachWeaponTo_Parms
{
	class USkeletalMeshComponent*                      MeshCpnt;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ATGRealMecha*                             TGMecha;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeapon.ConsumeAmmo
// [0x00020102] 
struct ATGMechaWeapon_execConsumeAmmo_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeapon.AddAmmo
// [0x00020102] 
struct ATGMechaWeapon_execAddAmmo_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaWeapon.HasAnyAmmo
// [0x00020102] 
struct ATGMechaWeapon_execHasAnyAmmo_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaWeapon.HasAmmo
// [0x00024102] 
struct ATGMechaWeapon_execHasAmmo_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Amount;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaWeapon.MaxRange
// [0x00020102] 
struct ATGMechaWeapon_execMaxRange_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaWeapon.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGMechaWeapon_eventPostBeginPlay_Parms
{
	// class AUTGameReplicationInfo*                   GRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeapon.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGMechaWeapon_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaInventoryManager.SetCurrentWeapon
// [0x010201C2] 
struct ATGMechaInventoryManager_execSetCurrentWeapon_Parms
{
	class AWeapon*                                     DesiredWeapon;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bAlreadyExist : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGMechaWeaponAttachment.PlayMeleeHitCameraShake
// [0x00020102] 
struct ATGMechaWeaponAttachment_execPlayMeleeHitCameraShake_Parms
{
	// class ATGMechaGamePlayerController*             MechaPC;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeaponAttachment.PlayFireCameraEffects
// [0x00020102] 
struct ATGMechaWeaponAttachment_execPlayFireCameraEffects_Parms
{
	// class ATGMechaGamePlayerController*             MechaPC;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeaponAttachment.GetPhysicalFireStartLoc
// [0x00024100] 
struct ATGMechaWeaponAttachment_execGetPhysicalFireStartLoc_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaWeaponAttachment.SetFireSocket
// [0x00020102] 
struct ATGMechaWeaponAttachment_execSetFireSocket_Parms
{
};

// Function MechaGame.TGMechaWeaponAttachment.ThirdPersonProjFireEffects
// [0x00020100] 
struct ATGMechaWeaponAttachment_execThirdPersonProjFireEffects_Parms
{
	struct FReplicatedEffectsInfo                      InProjWeapEffectsInfo;                            		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeaponAttachment.ThirdPersonFireEffects
// [0x00020102] 
struct ATGMechaWeaponAttachment_execThirdPersonFireEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeaponAttachment.PlayFireOverAnim
// [0x00020102] 
struct ATGMechaWeaponAttachment_execPlayFireOverAnim_Parms
{
};

// Function MechaGame.TGMechaWeaponAttachment.PlayMechaProjWeaponFireAnim
// [0x00020100] 
struct ATGMechaWeaponAttachment_execPlayMechaProjWeaponFireAnim_Parms
{
	struct FReplicatedEffectsInfo                      InProjWeapEffectsInfo;                            		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeaponAttachment.PlayMechaWeaponReloadSound
// [0x00020102] 
struct ATGMechaWeaponAttachment_execPlayMechaWeaponReloadSound_Parms
{
};

// Function MechaGame.TGMechaWeaponAttachment.PlayMechaWeaponReloadAnim
// [0x00020102] 
struct ATGMechaWeaponAttachment_execPlayMechaWeaponReloadAnim_Parms
{
};

// Function MechaGame.TGMechaWeaponAttachment.PlayMechaWeaponFireAnim
// [0x00020102] 
struct ATGMechaWeaponAttachment_execPlayMechaWeaponFireAnim_Parms
{
};

// Function MechaGame.TGMechaWeaponAttachment.PlayImpactEffects
// [0x00820102] 
struct ATGMechaWeaponAttachment_execPlayImpactEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  NewHitLoc;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FireDir;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Extent;                                           		// 0x0030 (0x000C) [0x0000000000000000]              
	// int                                             TraceFlags;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0044 (0x0020) [0x0000000000000000]              
	// struct FMaterialImpactEffect                    ImpactEffect;                                     		// 0x0064 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UMaterialInterface*                       MI;                                               		// 0x009C (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceTimeVarying*             MITV_Decal;                                       		// 0x00A0 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             V;                                                		// 0x00A4 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             TGMecha;                                          		// 0x00A8 (0x0004) [0x0000000000000000]              
	// float                                           TempScale;                                        		// 0x00AC (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          PS;                                               		// 0x00B0 (0x0004) [0x0000000000000000]              
	// class UParticleSystemComponent*                 PSC;                                              		// 0x00B4 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function MechaGame.TGMechaWeaponAttachment.SpawnTracerEffect
// [0x00820102] 
struct ATGMechaWeaponAttachment_execSpawnTracerEffect_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class UParticleSystemComponent*                 PSC;                                              		// 0x000C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UParticleSystemComponent*                 PSCLeft;                                          		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class ATGMechaProj_BulletTracer*                SpawnedProjectile;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGMechaProj_BulletTracer*                SpawnedProjectileLeft;                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           HitDistance;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  SpawnLocation;                                    		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotation;                                    		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  SpawnLocationLeft;                                		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotationLeft;                                		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  NewDrawScale3D;                                   		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FName                                    CurrEffectSocket;                                 		// 0x005C (0x0008) [0x0000000000000000]              
	// class USkeletalMeshComponent*                   CurrMesh;                                         		// 0x0064 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function MechaGame.TGMechaWeaponAttachment.GetCurrEffectSocketAndMesh
// [0x00420102] 
struct ATGMechaWeaponAttachment_execGetCurrEffectSocketAndMesh_Parms
{
	struct FName                                       CurrSocketName;                                   		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class USkeletalMeshComponent*                      CurrMesh;                                         		// 0x0008 (0x0004) [0x0000000004000180]              ( CPF_Parm | CPF_OutParm | CPF_EditInline )
};

// Function MechaGame.TGMechaWeaponAttachment.MuzzleFlashTimer
// [0x00020102] 
struct ATGMechaWeaponAttachment_execMuzzleFlashTimer_Parms
{
};

// Function MechaGame.TGMechaWeaponAttachment.StopMuzzleFlash
// [0x00020102] 
struct ATGMechaWeaponAttachment_execStopMuzzleFlash_Parms
{
};

// Function MechaGame.TGMechaWeaponAttachment.PlayReplicatedEffects
// [0x00020100] 
struct ATGMechaWeaponAttachment_execPlayReplicatedEffects_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeaponAttachment.ProjWeapCauseReplicatedMuzzleFlash
// [0x00020100] 
struct ATGMechaWeaponAttachment_execProjWeapCauseReplicatedMuzzleFlash_Parms
{
	struct FReplicatedEffectsInfo                      RepEffectsInfo;                                   		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeaponAttachment.CauseMuzzleFlash
// [0x00020102] 
struct ATGMechaWeaponAttachment_execCauseMuzzleFlash_Parms
{
	// class UParticleSystem*                          MuzzleTemplate;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeaponAttachment.DetachMuzzleFlash
// [0x00020102] 
struct ATGMechaWeaponAttachment_execDetachMuzzleFlash_Parms
{
};

// Function MechaGame.TGMechaWeaponAttachment.AttachMuzzleFlash
// [0x00020102] 
struct ATGMechaWeaponAttachment_execAttachMuzzleFlash_Parms
{
};

// Function MechaGame.TGMechaWeaponAttachment.DetachFrom
// [0x00020102] 
struct ATGMechaWeaponAttachment_execDetachFrom_Parms
{
	class USkeletalMeshComponent*                      MeshCpnt;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function MechaGame.TGMechaWeaponAttachment.AttachToMecha
// [0x00020102] 
struct ATGMechaWeaponAttachment_execAttachToMecha_Parms
{
	class ATGRealMechaBase*                            AttachOwnerMecha;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeaponAttachment.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGMechaWeaponAttachment_eventPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaVolume.GetAttackerCount
// [0x00020102] 
struct ATGMechaVolume_execGetAttackerCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGRealMecha*                             Mecha;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             AttackerCount;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaVolume.UnTouch
// [0x00020902] ( FUNC_Event )
struct ATGMechaVolume_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealMecha*                             Mecha;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaVolume.Touch
// [0x00020902] ( FUNC_Event )
struct ATGMechaVolume_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealMecha*                             Mecha;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ATGMechaDMPlayerController*               PC;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoorSwitchVolume.PostRenderFor
// [0x00820902] ( FUNC_Event )
struct ATGMechaDoorSwitchVolume_eventPostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class UTexture2D*                               Icon;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ATGMechaGameHUD*                          HUD;                                              		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ATGMechaDMGameReplicationInfo*            DMGRI;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             SizeX;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             SizeY;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             PosX;                                             		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             Dist;                                             		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           DistXL;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           DistYL;                                           		// 0x0044 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CrossResult;                                      		// 0x0054 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bInTheFront : 1;                                  		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bOnTheRight : 1;                                  		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  DistStr;                                          		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function MechaGame.TGMechaDoorSwitchVolume.SetEnabled
// [0x00020002] 
struct ATGMechaDoorSwitchVolume_execSetEnabled_Parms
{
	unsigned long                                      bInEnabled : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGMechaDoomMatch*                        Game;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             Mecha;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGMechaDMPlayerReplicationInfo*          PRI;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoorSwitchVolume.Reset
// [0x00020802] ( FUNC_Event )
struct ATGMechaDoorSwitchVolume_eventReset_Parms
{
};

// Function MechaGame.TGMechaDoorSwitchVolume.CheckSwitchState
// [0x00024002] 
struct ATGMechaDoorSwitchVolume_execCheckSwitchState_Parms
{
	class ATGRealMecha*                                UnTouchPawn;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ATGRealMecha*                             Mecha;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGMechaDoomMatch*                        Game;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             AttackerCount;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             DefenderCount;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned char                                   NewState;                                         		// 0x0014 (0x0001) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoorSwitchVolume.UnTouch
// [0x00020802] ( FUNC_Event )
struct ATGMechaDoorSwitchVolume_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealMecha*                             Mecha;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGMechaDMPlayerReplicationInfo*          PRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoorSwitchVolume.Touch
// [0x00020802] ( FUNC_Event )
struct ATGMechaDoorSwitchVolume_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealMecha*                             Mecha;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ATGMechaDMPlayerReplicationInfo*          PRI;                                              		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaEffectComponent.EndBuring
// [0x00020002] 
struct UTGMechaEffectComponent_execEndBuring_Parms
{
};

// Function MechaGame.TGMechaEffectComponent.UpdateFireDamageTimer
// [0x00020002] 
struct UTGMechaEffectComponent_execUpdateFireDamageTimer_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              FireLastTimeOutTemp;                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ContinuousFireDamageTemp;                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              FireTakeDamageFrequencyTemp;                      		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealMecha*                             TGMecha;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaEffectComponent.FireTimer
// [0x00020002] 
struct UTGMechaEffectComponent_execFireTimer_Parms
{
	// class ATGRealMecha*                             TGMecha;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaEffectComponent.TakeFiringDamage
// [0x00020002] 
struct UTGMechaEffectComponent_execTakeFiringDamage_Parms
{
	// class ATGRealMecha*                             TGMecha;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaEffectComponent.EveryTickUpdate
// [0x00020102] 
struct UTGMechaEffectComponent_execEveryTickUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaEffectComponent.PlayFireHitEffect
// [0x00020100] 
struct UTGMechaEffectComponent_execPlayFireHitEffect_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaEffectComponent.PlayFireEffect
// [0x00020100] 
struct UTGMechaEffectComponent_execPlayFireEffect_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaEffectComponent.ProcessFireEffect
// [0x00024100] 
struct UTGMechaEffectComponent_execProcessFireEffect_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0024 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaEffectComponent.ProcessTakeDamage
// [0x00024102] 
struct UTGMechaEffectComponent_execProcessTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x0020) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaEffectComponent.Initialize
// [0x00020100] 
struct UTGMechaEffectComponent_execInitialize_Parms
{
	TArray< class USkeletalMeshComponent* >            MeshList;                                         		// 0x0000 (0x000C) [0x0000000004400080]              ( CPF_Parm | CPF_NeedCtorLink | CPF_EditInline )
};

// Function MechaGame.TGMechaEffectComponent.IsFlameThrowerDamageType
// [0x00020002] 
struct UTGMechaEffectComponent_execIsFlameThrowerDamageType_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.IncrementDeaths
// [0x00024002] 
struct ATGMechaDMPlayerReplicationInfo_execIncrementDeaths_Parms
{
	int                                                Amt;                                              		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.RoundClear
// [0x00020002] 
struct ATGMechaDMPlayerReplicationInfo_execRoundClear_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.TimerAddXPForDoorSwitch
// [0x00020002] 
struct ATGMechaDMPlayerReplicationInfo_execTimerAddXPForDoorSwitch_Parms
{
	// class AMechaGamePlayerController*               PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.SetContinuousXPSupplyEnabled
// [0x00020002] 
struct ATGMechaDMPlayerReplicationInfo_execSetContinuousXPSupplyEnabled_Parms
{
	unsigned long                                      bInVolume : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.NotifyHealBase
// [0x00020002] 
struct ATGMechaDMPlayerReplicationInfo_execNotifyHealBase_Parms
{
	int                                                Heal;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.NotifyItemSmite
// [0x00020002] 
struct ATGMechaDMPlayerReplicationInfo_execNotifyItemSmite_Parms
{
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.NotifyRoundWin
// [0x00020002] 
struct ATGMechaDMPlayerReplicationInfo_execNotifyRoundWin_Parms
{
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.TimerAddXP
// [0x00020002] 
struct ATGMechaDMPlayerReplicationInfo_execTimerAddXP_Parms
{
	// class AMechaGamePlayerController*               PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.TimerAddGameScore
// [0x00020002] 
struct ATGMechaDMPlayerReplicationInfo_execTimerAddGameScore_Parms
{
	// class AMechaGamePlayerController*               PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.SetPlayerTeam
// [0x00020002] 
struct ATGMechaDMPlayerReplicationInfo_execSetPlayerTeam_Parms
{
	class ATeamInfo*                                   NewTeam;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.NotifyChangeSides
// [0x00020002] 
struct ATGMechaDMPlayerReplicationInfo_execNotifyChangeSides_Parms
{
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.SetupOffendDefend
// [0x00020002] 
struct ATGMechaDMPlayerReplicationInfo_execSetupOffendDefend_Parms
{
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.IsDefender
// [0x00020102] 
struct ATGMechaDMPlayerReplicationInfo_execIsDefender_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGMechaDMGameReplicationInfo*            GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.IsAttacker
// [0x00020102] 
struct ATGMechaDMPlayerReplicationInfo_execIsAttacker_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGMechaDMGameReplicationInfo*            GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeapAttachment_Thunder.PlayImpactEffects
// [0x00820102] 
struct ATGMechaWeapAttachment_Thunder_execPlayImpactEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  NewHitLoc;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FireDir;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Extent;                                           		// 0x0030 (0x000C) [0x0000000000000000]              
	// int                                             TraceFlags;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0044 (0x0020) [0x0000000000000000]              
	// struct FMaterialImpactEffect                    ImpactEffect;                                     		// 0x0064 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UMaterialInterface*                       MI;                                               		// 0x009C (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceTimeVarying*             MITV_Decal;                                       		// 0x00A0 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             V;                                                		// 0x00A4 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             TGMecha;                                          		// 0x00A8 (0x0004) [0x0000000000000000]              
	// float                                           TempScale;                                        		// 0x00AC (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          PS;                                               		// 0x00B0 (0x0004) [0x0000000000000000]              
	// class UParticleSystemComponent*                 PSC;                                              		// 0x00B4 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UParticleSystem*                          CurrFireTracerPSCTemplate;                        		// 0x00B8 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeapAttachment_Thunder.GetThunderImpactEffect
// [0x00020102] 
struct ATGMechaWeapAttachment_Thunder_execGetThunderImpactEffect_Parms
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FMaterialImpactEffect                       ReturnValue;                                      		// 0x0004 (0x0038) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function MechaGame.TGMechaWeapAttachment_Thunder.GetCurrEffectSocketAndMesh
// [0x00420102] 
struct ATGMechaWeapAttachment_Thunder_execGetCurrEffectSocketAndMesh_Parms
{
	struct FName                                       CurrSocketName;                                   		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class USkeletalMeshComponent*                      CurrMesh;                                         		// 0x0008 (0x0004) [0x0000000004000180]              ( CPF_Parm | CPF_OutParm | CPF_EditInline )
};

// Function MechaGame.TGMechaWeapAttachment_Thunder.SpawnTracerEffect
// [0x00020102] 
struct ATGMechaWeapAttachment_Thunder_execSpawnTracerEffect_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeapAttachment_Thunder.DeactiveCritFireEffect
// [0x00020102] 
struct ATGMechaWeapAttachment_Thunder_execDeactiveCritFireEffect_Parms
{
};

// Function MechaGame.TGMechaWeapAttachment_Thunder.ActiveCritFireEffect
// [0x00020102] 
struct ATGMechaWeapAttachment_Thunder_execActiveCritFireEffect_Parms
{
};

// Function MechaGame.TGMechaWeapAttachment_Thunder.SetThunderAttachmentCritEffect
// [0x00020102] 
struct ATGMechaWeapAttachment_Thunder_execSetThunderAttachmentCritEffect_Parms
{
	unsigned long                                      bCritShot : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMechaWeapAttachment_Thunder.DetachFrom
// [0x00020102] 
struct ATGMechaWeapAttachment_Thunder_execDetachFrom_Parms
{
	class USkeletalMeshComponent*                      MeshCpnt;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function MechaGame.TGMechaWeapAttachment_Thunder.AttachToMecha
// [0x00020102] 
struct ATGMechaWeapAttachment_Thunder_execAttachToMecha_Parms
{
	class ATGRealMechaBase*                            AttachOwnerMecha;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMecha_Havok.OnKeyDown_Space
// [0x00020002] 
struct ATGMecha_Havok_execOnKeyDown_Space_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMecha_Havok.OnKeyDown_F
// [0x00020002] 
struct ATGMecha_Havok_execOnKeyDown_F_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMecha_HulkBuster.OnKeyDown_Space
// [0x00020002] 
struct ATGMecha_HulkBuster_execOnKeyDown_Space_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMecha_HulkBuster.OnKeyDown_F
// [0x00020002] 
struct ATGMecha_HulkBuster_execOnKeyDown_F_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMecha_HulkBuster.NotifySkillStateChanged
// [0x00020102] 
struct ATGMecha_HulkBuster_execNotifySkillStateChanged_Parms
{
	class UClass*                                      SkillCompClass;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bActive : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMecha_HulkBuster.PlayShieldAnimation
// [0x00020102] 
struct ATGMecha_HulkBuster_execPlayShieldAnimation_Parms
{
	unsigned long                                      bShieldActive : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UUDKAnimNodeSequence*                     AnimNodeSeq;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< struct FName >                          AnimSeqs;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Idx;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMecha_HulkBuster.AttachShieldItem
// [0x00020102] 
struct ATGMecha_HulkBuster_execAttachShieldItem_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMecha_HulkBuster.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGMecha_HulkBuster_eventPostBeginPlay_Parms
{
};

// Function MechaGame.TGMecha_Punisher.OnKeyDown_Space
// [0x00020002] 
struct ATGMecha_Punisher_execOnKeyDown_Space_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMecha_Punisher.OnKeyDown_F
// [0x00020002] 
struct ATGMecha_Punisher_execOnKeyDown_F_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMecha_Punisher.PlayeDyingEffect
// [0x00020102] 
struct ATGMecha_Punisher_execPlayeDyingEffect_Parms
{
	// class ATGMechaWeap_HPFDetector*                 HPF;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_HPFDetector.DrawWeaponZoomInHUD
// [0x00020102] 
struct ATGMechaWeap_HPFDetector_execDrawWeaponZoomInHUD_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             PosX;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             SizeX;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             SizeY;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             Offset;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             ShakeOffset;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             CurOffset;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           FadeValue;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           FadeInTime;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           FireShakeTime;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           ElapsedTime;                                      		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_HPFDetector.DrawWeaponCrosshair
// [0x00020102] 
struct ATGMechaWeap_HPFDetector_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaGameHUD*                          MechaHUD;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           PercValue;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           StringX;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           StringY;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             PosX;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_HPFDetector.SpecialFire
// [0x00020102] 
struct ATGMechaWeap_HPFDetector_execSpecialFire_Parms
{
	// class ATGMechaWeap_PenetrativeCannon*           OwnerWeapon;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_HPFDetector.HolderDied
// [0x00020002] 
struct ATGMechaWeap_HPFDetector_execHolderDied_Parms
{
};

// Function MechaGame.TGMechaWeap_HPFDetector.ServerSetLockingTarget
// [0x002200C2] 
struct ATGMechaWeap_HPFDetector_execServerSetLockingTarget_Parms
{
	class ATGRealMecha*                                NewMecha;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealMecha*                             OwnerMecha;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_HPFDetector.SetLockingTarget
// [0x00020102] 
struct ATGMechaWeap_HPFDetector_execSetLockingTarget_Parms
{
	class ATGRealMecha*                                NewMecha;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_HPFDetector.CheckLockingTarget
// [0x00820102] 
struct ATGMechaWeap_HPFDetector_execCheckLockingTarget_Parms
{
	// struct FVector                                  EndTrace;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamLoc;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 CamRot;                                           		// 0x0030 (0x000C) [0x0000000000000000]              
	// class ATGRealMecha*                             OwnerMecha;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             TraceMecha;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_HPFDetector.Tick
// [0x00020902] ( FUNC_Event )
struct ATGMechaWeap_HPFDetector_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_HPFDetector.ServerSwitchZoom
// [0x002200C2] 
struct ATGMechaWeap_HPFDetector_execServerSwitchZoom_Parms
{
};

// Function MechaGame.TGMechaWeap_HPFDetector.StartFire
// [0x00020102] 
struct ATGMechaWeap_HPFDetector_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_HPFDetector.SwitchZoom
// [0x00020102] 
struct ATGMechaWeap_HPFDetector_execSwitchZoom_Parms
{
	// class ATGRealMecha*                             TGMecha;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGMechaWeap_PenetrativeCannon*           PenetrativeCannon;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMecha_SpiderSence.StartFire
// [0x00020102] 
struct ATGMecha_SpiderSence_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMecha_SpiderSence.TimerStartAirBoost
// [0x00020002] 
struct ATGMecha_SpiderSence_execTimerStartAirBoost_Parms
{
};

// Function MechaGame.TGMecha_SpiderSence.OnKeyUp_Space
// [0x00020002] 
struct ATGMecha_SpiderSence_execOnKeyUp_Space_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMecha_SpiderSence.OnKeyDown_Space
// [0x00020002] 
struct ATGMecha_SpiderSence_execOnKeyDown_Space_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMecha_SpiderSence.OnKeyDown_F
// [0x00020002] 
struct ATGMecha_SpiderSence_execOnKeyDown_F_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMecha_SpiderSence.PlayWeapReplicatedEffects
// [0x00020102] 
struct ATGMecha_SpiderSence_execPlayWeapReplicatedEffects_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class AMechaDestructibleItem*                   MechaCore;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             Mecha;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIsFullHealth : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGMecha_SpiderSence.NotifyWeaponStartFire
// [0x00020002] 
struct ATGMecha_SpiderSence_execNotifyWeaponStartFire_Parms
{
	unsigned long                                      bStartFire : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class ATGMechaWeapon*                              MechaWeapon;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMecha_TheOne.Destroyed
// [0x00020102] 
struct ATGMecha_TheOne_execDestroyed_Parms
{
};

// Function MechaGame.TGMecha_TheOne.TimerStartAirBoost
// [0x00020002] 
struct ATGMecha_TheOne_execTimerStartAirBoost_Parms
{
};

// Function MechaGame.TGMecha_TheOne.OnKeyUp_Space
// [0x00020002] 
struct ATGMecha_TheOne_execOnKeyUp_Space_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMecha_TheOne.OnKeyDown_Space
// [0x00020002] 
struct ATGMecha_TheOne_execOnKeyDown_Space_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMecha_TheOne.OnKeyDown_F
// [0x00020002] 
struct ATGMecha_TheOne_execOnKeyDown_F_Parms
{
	class UTGMechaPlayerInput*                         Input;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMecha_TheOne.TimerPlayShellDropSound
// [0x00020102] 
struct ATGMecha_TheOne_execTimerPlayShellDropSound_Parms
{
};

// Function MechaGame.TGMecha_TheOne.OnMachineGunStartFire
// [0x00020102] 
struct ATGMecha_TheOne_execOnMachineGunStartFire_Parms
{
};

// Function MechaGame.TGMecha_TheOne.NotifyWeaponStartFire
// [0x00020002] 
struct ATGMecha_TheOne_execNotifyWeaponStartFire_Parms
{
	unsigned long                                      bStartFire : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class ATGMechaWeapon*                              MechaWeapon;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMecha_TheOne.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGMecha_TheOne_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_MachineGun.DetachMuzzleFlash
// [0x00020102] 
struct ATGMechaWeap_MachineGun_execDetachMuzzleFlash_Parms
{
};

// Function MechaGame.TGMechaWeap_MachineGun.StartFire
// [0x00020102] 
struct ATGMechaWeap_MachineGun_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaAccurateGun.FallOffFactor
// [0x00020102] 
struct ATGMechaAccurateGun_execFallOffFactor_Parms
{
	float                                              HitDistance;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           FallOffFactor;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaAccurateGun.WeaponCalcCamera
// [0x00420102] 
struct ATGMechaAccurateGun_execWeaponCalcCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function MechaGame.TGMechaAccurateGun.EndFire
// [0x00020102] 
struct ATGMechaAccurateGun_execEndFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaAccurateGun.BeginFire
// [0x00020102] 
struct ATGMechaAccurateGun_execBeginFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaAccurateGun.StartColdDown
// [0x00020102] 
struct ATGMechaAccurateGun_execStartColdDown_Parms
{
};

// Function MechaGame.TGMechaAccurateGun.GetCurrAimDisperseType
// [0x00020102] 
struct ATGMechaAccurateGun_execGetCurrAimDisperseType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGRealMecha*                             TGMecha;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaAccurateGun.FireAmmunition
// [0x00020102] 
struct ATGMechaAccurateGun_execFireAmmunition_Parms
{
	// class ATGRealMecha*                             MechaInstigator;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           ShotFiredMul;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned char                                   CurrAimDisperseType;                              		// 0x000C (0x0001) [0x0000000000000000]              
};

// Function MechaGame.TGMechaAccurateGun.SetGunFlashLocation
// [0x00020102] 
struct ATGMechaAccurateGun_execSetGunFlashLocation_Parms
{
	TArray< struct FVector >                           HitLocationTemp;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ATGRealMecha*                             MechaInstigator;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaAccurateGun.ServerDefenseDoorTakeDamage
// [0x002200C2] 
struct ATGMechaAccurateGun_execServerDefenseDoorTakeDamage_Parms
{
	struct FImpactInfo                                 HitInfo;                                          		// 0x0000 (0x0054) [0x0000000000000080]              ( CPF_Parm )
	// class AMechaDestructibleItem*                   DefenseDoor;                                      		// 0x0054 (0x0004) [0x0000000000000000]              
	// float                                           HitDamage;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaAccurateGun.InstantFire
// [0x00820102] 
struct ATGMechaAccurateGun_execInstantFire_Parms
{
	// struct FVector                                  EndTrace;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// class ATGRealMecha*                             MechaInstigator;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< struct FImpactInfo >                    ImpactList;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FVector >                        HitLocationTemp;                                  		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FVectorNoCompress                        repStartLoc;                                      		// 0x002C (0x000C) [0x0000000000000000]              
	// TArray< struct FClientAttackPawnInfo >          AttackPInfoList;                                  		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bHitVehicle : 1;                                  		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AMechaDestructibleItem*                   DefenseDoor;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaAccurateGun.Timer_StopHitTurnRed
// [0x00020102] 
struct ATGMechaAccurateGun_execTimer_StopHitTurnRed_Parms
{
};

// Function MechaGame.TGMechaAccurateGun.GunServerTakeDamage
// [0x00A240C2] 
struct ATGMechaAccurateGun_execGunServerTakeDamage_Parms
{
	class APawn*                                       DamageActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      WallNum;                                          		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0005 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                HitDamage;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitDir;                                           		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     DamagePawnLoc;                                    		// 0x0024 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       HitBoneName;                                      		// 0x0030 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              SandCDis;                                         		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x003C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGRealMecha*                             MechaInstigator;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0044 (0x0020) [0x0000000000000000]              
	// float                                           LogicDistance;                                    		// 0x0064 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaAccurateGun.CalcWeaponFireEX
// [0x00C24102] 
struct ATGMechaAccurateGun_execCalcWeaponFireEX_Parms
{
	struct FVector                                     StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     EndTrace;                                         		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FImpactInfo >                       ImpactList;                                       		// 0x0018 (0x000C) [0x0000000000400190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FClientAttackPawnInfo >             AttackPInfoList;                                  		// 0x0024 (0x000C) [0x0000000000400190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FImpactInfo                                 ReturnValue;                                      		// 0x0030 (0x0054) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  HitLocation;                                      		// 0x0084 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0090 (0x000C) [0x0000000000000000]              
	// struct FVector                                  fLineDir;                                         		// 0x009C (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x00A8 (0x0004) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x00AC (0x0020) [0x0000000000000000]              
	// struct FImpactInfo                              CurrentImpact;                                    		// 0x00CC (0x0054) [0x0000000000000000]              
	// int                                             HitWallNum;                                       		// 0x0120 (0x0004) [0x0000000000000000]              
	// float                                           fCurDistance;                                     		// 0x0124 (0x0004) [0x0000000000000000]              
	// float                                           HitDamage;                                        		// 0x0128 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFixMomentum : 1;                                 		// 0x012C (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           fDistance;                                        		// 0x0130 (0x0004) [0x0000000000000000]              
	// float                                           fDamageModifier;                                  		// 0x0134 (0x0004) [0x0000000000000000]              
	// float                                           fDistanceModifier;                                		// 0x0138 (0x0004) [0x0000000000000000]              
	// float                                           fPenetrationPower;                                		// 0x013C (0x0004) [0x0000000000000000]              
	// class UPhysicalMaterialProperty*                PhysicalProperty;                                 		// 0x0140 (0x0004) [0x0000000000000000]              
	// int                                             wallcount;                                        		// 0x0144 (0x0004) [0x0000000000000000]              
	// struct FVector                                  StartTraceTemp;                                   		// 0x0148 (0x000C) [0x0000000000000000]              
	// struct FClientAttackPawnInfo                    AttackPInfo;                                      		// 0x0154 (0x0040) [0x0000000000000000]              
};

// Function MechaGame.TGMechaAccurateGun.ServerFireAmmunition
// [0x00A240C2] 
struct ATGMechaAccurateGun_execServerFireAmmunition_Parms
{
	int                                                ControllerP;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ControllerR;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ControllerY;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PunchAnglePitch;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PunchAngleYaw;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           FireStartLocation;                                		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                DeltaPunchAnglePitch;                             		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ClientTime;                                       		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      HitAPawn : 1;                                     		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     FireEndLocation;                                  		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVectorNoCompress                           ClientForwardDirection;                           		// 0x0038 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocationTemp0;                                 		// 0x0044 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocationTemp1;                                 		// 0x0050 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocationTemp2;                                 		// 0x005C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocationTemp3;                                 		// 0x0068 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocationTemp4;                                 		// 0x0074 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocationTemp5;                                 		// 0x0080 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x008C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGRealMecha*                             MechaInstigator;                                  		// 0x0090 (0x0004) [0x0000000000000000]              
	// class ATGPVPPlayerReplicationInfo*              PRI;                                              		// 0x0094 (0x0004) [0x0000000000000000]              
	// class ATGGame*                                  tGame;                                            		// 0x0098 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ServerForwardDirection;                           		// 0x009C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ControllerRotator;                                		// 0x00A8 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 AimRotator;                                       		// 0x00B4 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaAccurateGun.CheckForwardDirection
// [0x00820102] 
struct ATGMechaAccurateGun_execCheckForwardDirection_Parms
{
	struct FVector                                     ClientForwardDirection;                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    AimAngle;                                         		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  Forward;                                          		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Right;                                            		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Up;                                               		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  adjustedforward;                                  		// 0x0040 (0x000C) [0x0000000000000000]              
	// float                                           Dot1;                                             		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           Dot2;                                             		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaAccurateGun.ModifyForWardDirection
// [0x00820102] 
struct ATGMechaAccurateGun_execModifyForWardDirection_Parms
{
	struct FRotator                                    AimAngle;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  Forward;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Right;                                            		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Up;                                               		// 0x0030 (0x000C) [0x0000000000000000]              
	// float                                           randX;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           RandY;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaAccurateGun.SetFireStartLocation
// [0x00020102] 
struct ATGMechaAccurateGun_execSetFireStartLocation_Parms
{
	struct FVector                                     FireStartLocation;                                		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaAccurateGun.CheckFireStartLocation
// [0x00020102] 
struct ATGMechaAccurateGun_execCheckFireStartLocation_Parms
{
	struct FVector                                     FireStartLocation;                                		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              ClientTime;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaAccurateGun.SetFireRotator
// [0x00020102] 
struct ATGMechaAccurateGun_execSetFireRotator_Parms
{
	struct FRotator                                    ControllerRotator;                                		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaAccurateGun.CheckFireRotator
// [0x00020102] 
struct ATGMechaAccurateGun_execCheckFireRotator_Parms
{
	struct FRotator                                    ControllerRotator;                                		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              ClientTime;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaAccurateGun.ServerFireAmmunition4P
// [0x00A240C2] 
struct ATGMechaAccurateGun_execServerFireAmmunition4P_Parms
{
	int                                                ControllerP;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ControllerR;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ControllerY;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PunchAnglePitch;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PunchAngleYaw;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           FireStartLocation;                                		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                DeltaPunchAnglePitch;                             		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ClientTime;                                       		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       DamagePawn1;                                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      WallNum1;                                         		// 0x002C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      HitGroup1;                                        		// 0x002D (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                HitDamage1;                                       		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation1;                                     		// 0x0034 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitDir1;                                          		// 0x0040 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           DamagePawnLoc1;                                   		// 0x004C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       HitBoneName1;                                     		// 0x0058 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       DamagePawn2;                                      		// 0x0060 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      WallNum2;                                         		// 0x0064 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      HitGroup2;                                        		// 0x0065 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                HitDamage2;                                       		// 0x0068 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation2;                                     		// 0x006C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitDir2;                                          		// 0x0078 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           DamagePawnLoc2;                                   		// 0x0084 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       HitBoneName2;                                     		// 0x0090 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       DamagePawn3;                                      		// 0x0098 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      WallNum3;                                         		// 0x009C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      HitGroup3;                                        		// 0x009D (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                HitDamage3;                                       		// 0x00A0 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation3;                                     		// 0x00A4 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitDir3;                                          		// 0x00B0 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           DamagePawnLoc3;                                   		// 0x00BC (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       HitBoneName3;                                     		// 0x00C8 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       DamagePawn4;                                      		// 0x00D0 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      WallNum4;                                         		// 0x00D4 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      HitGroup4;                                        		// 0x00D5 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                HitDamage4;                                       		// 0x00D8 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation4;                                     		// 0x00DC (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitDir4;                                          		// 0x00E8 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           DamagePawnLoc4;                                   		// 0x00F4 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       HitBoneName4;                                     		// 0x0100 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     FireEndLocation;                                  		// 0x0108 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              SandCDis1;                                        		// 0x0114 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              SandCDis2;                                        		// 0x0118 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              SandCDis3;                                        		// 0x011C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              SandCDis4;                                        		// 0x0120 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVectorNoCompress                           ClientForwardDirection;                           		// 0x0124 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  ServerDamagePawnLoc1;                             		// 0x0130 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ServerDamagePawnLoc2;                             		// 0x013C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ServerDamagePawnLoc3;                             		// 0x0148 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ServerDamagePawnLoc4;                             		// 0x0154 (0x000C) [0x0000000000000000]              
	// unsigned long                                   RealHitAPawn1 : 1;                                		// 0x0160 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   RealHitAPawn2 : 1;                                		// 0x0164 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   RealHitAPawn3 : 1;                                		// 0x0168 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   RealHitAPawn4 : 1;                                		// 0x016C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bCheckPass1 : 1;                                  		// 0x0170 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bCheckPass2 : 1;                                  		// 0x0174 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bCheckPass3 : 1;                                  		// 0x0178 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bCheckPass4 : 1;                                  		// 0x017C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGMechaAccurateGun.ServerFireAmmunition3P
// [0x00A240C2] 
struct ATGMechaAccurateGun_execServerFireAmmunition3P_Parms
{
	int                                                ControllerP;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ControllerR;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ControllerY;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PunchAnglePitch;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PunchAngleYaw;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           FireStartLocation;                                		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                DeltaPunchAnglePitch;                             		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ClientTime;                                       		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       DamagePawn1;                                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      WallNum1;                                         		// 0x002C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      HitGroup1;                                        		// 0x002D (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                HitDamage1;                                       		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation1;                                     		// 0x0034 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitDir1;                                          		// 0x0040 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           DamagePawnLoc1;                                   		// 0x004C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       HitBoneName1;                                     		// 0x0058 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       DamagePawn2;                                      		// 0x0060 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      WallNum2;                                         		// 0x0064 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      HitGroup2;                                        		// 0x0065 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                HitDamage2;                                       		// 0x0068 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation2;                                     		// 0x006C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitDir2;                                          		// 0x0078 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           DamagePawnLoc2;                                   		// 0x0084 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       HitBoneName2;                                     		// 0x0090 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       DamagePawn3;                                      		// 0x0098 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      WallNum3;                                         		// 0x009C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      HitGroup3;                                        		// 0x009D (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                HitDamage3;                                       		// 0x00A0 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation3;                                     		// 0x00A4 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitDir3;                                          		// 0x00B0 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           DamagePawnLoc3;                                   		// 0x00BC (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       HitBoneName3;                                     		// 0x00C8 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     FireEndLocation;                                  		// 0x00D0 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              SandCDis1;                                        		// 0x00DC (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              SandCDis2;                                        		// 0x00E0 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              SandCDis3;                                        		// 0x00E4 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVectorNoCompress                           ClientForwardDirection;                           		// 0x00E8 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  ServerDamagePawnLoc1;                             		// 0x00F4 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ServerDamagePawnLoc2;                             		// 0x0100 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ServerDamagePawnLoc3;                             		// 0x010C (0x000C) [0x0000000000000000]              
	// unsigned long                                   RealHitAPawn1 : 1;                                		// 0x0118 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   RealHitAPawn2 : 1;                                		// 0x011C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   RealHitAPawn3 : 1;                                		// 0x0120 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bCheckPass1 : 1;                                  		// 0x0124 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bCheckPass2 : 1;                                  		// 0x0128 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bCheckPass3 : 1;                                  		// 0x012C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGMechaAccurateGun.ServerFireAmmunition2P
// [0x00A240C2] 
struct ATGMechaAccurateGun_execServerFireAmmunition2P_Parms
{
	int                                                ControllerP;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ControllerR;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ControllerY;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PunchAnglePitch;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PunchAngleYaw;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           FireStartLocation;                                		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                DeltaPunchAnglePitch;                             		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ClientTime;                                       		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       DamagePawn1;                                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      WallNum1;                                         		// 0x002C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      HitGroup1;                                        		// 0x002D (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                HitDamage1;                                       		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation1;                                     		// 0x0034 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitDir1;                                          		// 0x0040 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           DamagePawnLoc1;                                   		// 0x004C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       HitBoneName1;                                     		// 0x0058 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       DamagePawn2;                                      		// 0x0060 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      WallNum2;                                         		// 0x0064 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      HitGroup2;                                        		// 0x0065 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                HitDamage2;                                       		// 0x0068 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation2;                                     		// 0x006C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitDir2;                                          		// 0x0078 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           DamagePawnLoc2;                                   		// 0x0084 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       HitBoneName2;                                     		// 0x0090 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     FireEndLocation;                                  		// 0x0098 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              SandCDis1;                                        		// 0x00A4 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              SandCDis2;                                        		// 0x00A8 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVectorNoCompress                           ClientForwardDirection;                           		// 0x00AC (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  ServerDamagePawnLoc1;                             		// 0x00B8 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ServerDamagePawnLoc2;                             		// 0x00C4 (0x000C) [0x0000000000000000]              
	// unsigned long                                   RealHitAPawn1 : 1;                                		// 0x00D0 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   RealHitAPawn2 : 1;                                		// 0x00D4 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bCheckPass1 : 1;                                  		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bCheckPass2 : 1;                                  		// 0x00DC (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGMechaAccurateGun.ServerFireAmmunition1P
// [0x00A240C2] 
struct ATGMechaAccurateGun_execServerFireAmmunition1P_Parms
{
	int                                                ControllerP;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ControllerR;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ControllerY;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PunchAnglePitch;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PunchAngleYaw;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           FireStartLocation;                                		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                DeltaPunchAnglePitch;                             		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ClientTime;                                       		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       DamagePawn;                                       		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      WallNum;                                          		// 0x002C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x002D (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                HitDamage;                                        		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0034 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitDir;                                           		// 0x0040 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           DamagePawnLoc;                                    		// 0x004C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       HitBoneName;                                      		// 0x0058 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     FireEndLocation;                                  		// 0x0060 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              SandCDis;                                         		// 0x006C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVectorNoCompress                           ClientForwardDirection;                           		// 0x0070 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  ServerDamagePawnLoc;                              		// 0x007C (0x000C) [0x0000000000000000]              
	// unsigned long                                   RealHitAPawn : 1;                                 		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bCheckPass : 1;                                   		// 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGMechaAccurateGun.InstantFireEndTrace
// [0x00020102] 
struct ATGMechaAccurateGun_execInstantFireEndTrace_Parms
{
	struct FVector                                     StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaAnimNotify_ViewShake.Notify
// [0x00020802] ( FUNC_Event )
struct UTGMechaAnimNotify_ViewShake_eventNotify_Parms
{
	class AActor*                                      Owner;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UAnimNodeSequence*                           AnimSeqInstigator;                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealMecha*                             OwnerMecha;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoomMatch.Killed_CalcAchi
// [0x00020002] 
struct ATGMechaDoomMatch_execKilled_CalcAchi_Parms
{
	class ATGMechaDMPlayerController*                  Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGMechaDMPlayerController*                  Killed;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGPawn*                                     KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealMecha*                             KillerMDMPawn;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             KilledMDMPawn;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGMechaDMPlayerReplicationInfo*          KillerPRI;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ATGMechaDMPlayerReplicationInfo*          KilledPRI;                                        		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoomMatch.NotifyDoorSwitchStateChanged
// [0x00020002] 
struct ATGMechaDoomMatch_execNotifyDoorSwitchStateChanged_Parms
{
	unsigned char                                      DoorState;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaDoomMatch.SetDoorOpenSpeedState
// [0x00020002] 
struct ATGMechaDoomMatch_execSetDoorOpenSpeedState_Parms
{
	unsigned char                                      NewState;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaDMGameReplicationInfo*            GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned char                                   LastSpeedState;                                   		// 0x0008 (0x0001) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoomMatch.SetDoorOpenSpeedScale
// [0x00020002] 
struct ATGMechaDoomMatch_execSetDoorOpenSpeedScale_Parms
{
	float                                              SpeedScale;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaDoomMatch.SetDoorOpenProgress
// [0x00020002] 
struct ATGMechaDoomMatch_execSetDoorOpenProgress_Parms
{
	float                                              Progress;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaDMGameReplicationInfo*            GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoomMatch.SetDoorOpenProgressStarted
// [0x00020002] 
struct ATGMechaDoomMatch_execSetDoorOpenProgressStarted_Parms
{
	unsigned long                                      bStart : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGMechaDMGameReplicationInfo*            GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoomMatch.TimerDoorOpenProgress
// [0x00020002] 
struct ATGMechaDoomMatch_execTimerDoorOpenProgress_Parms
{
	// class ATGMechaDoorSwitchVolume*                 Vol;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Progress;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoomMatch.StopDoorOpenProgress
// [0x00020002] 
struct ATGMechaDoomMatch_execStopDoorOpenProgress_Parms
{
};

// Function MechaGame.TGMechaDoomMatch.TimerStartDoorOpenProgress
// [0x00020002] 
struct ATGMechaDoomMatch_execTimerStartDoorOpenProgress_Parms
{
};

// Function MechaGame.TGMechaDoomMatch.BroadcastRoundMessage
// [0x00024002] 
struct ATGMechaDoomMatch_execBroadcastRoundMessage_Parms
{
	unsigned long                                      bRoundStart : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bGameOver : 1;                                    		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class ATGMechaDMPlayerController*               PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGPlayerReplicationInfo*                 PRI;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoomMatch.GenericEndRound
// [0x00820002] 
struct ATGMechaDoomMatch_execGenericEndRound_Parms
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class AActor*                                      EndRoundFocus;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaDMGameReplicationInfo*            GRI;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGMechaDMPlayerReplicationInfo*          PRI;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FMechaRoundStat                          RoundStat;                                        		// 0x001C (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoomMatch.NotifyItemDestroyed
// [0x00020002] 
struct ATGMechaDoomMatch_execNotifyItemDestroyed_Parms
{
	class AMechaDestructibleItem*                      Item;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AMechaGamePlayerController*                  InstigatorPC;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaPlayerReplicationInfo*            InstigatorPRI;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGMechaDMPlayerController*               PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned char                                   WinnerTeamIndex;                                  		// 0x0010 (0x0001) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoomMatch.SetTarget
// [0x00020002] 
struct ATGMechaDoomMatch_execSetTarget_Parms
{
	class AMechaDestructibleItem*                      Item;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bEnabled : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGMechaDMGameReplicationInfo*            GRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoomMatch.AddTeamScore
// [0x00020002] 
struct ATGMechaDoomMatch_execAddTeamScore_Parms
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaDMPlayerReplicationInfo*          PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoomMatch.ScoreKill
// [0x00020002] 
struct ATGMechaDoomMatch_execScoreKill_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Other;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaPlayerReplicationInfo*            PRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGMechaDMGameReplicationInfo*            GRI;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoomMatch.Killed
// [0x00020002] 
struct ATGMechaDoomMatch_execKilled_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledPlayer;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaDoomMatch.SpawnDefaultPawnFor
// [0x00020002] 
struct ATGMechaDoomMatch_execSpawnDefaultPawnFor_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            StartSpot;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaDoomMatch.Bombing
// [0x00020002] 
struct ATGMechaDoomMatch_execBombing_Parms
{
	float                                              DamageHealthPercent;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealMecha*                             Mecha;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGMechaPlayerReplicationInfo*            PRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoomMatch.RestartAllPlayers
// [0x00020002] 
struct ATGMechaDoomMatch_execRestartAllPlayers_Parms
{
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGMechaPlayerReplicationInfo*            PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoomMatch.RestartPlayer
// [0x00020002] 
struct ATGMechaDoomMatch_execRestartPlayer_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaDMPlayerController*               PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoomMatch.ChangeSides
// [0x00020002] 
struct ATGMechaDoomMatch_execChangeSides_Parms
{
	// class ATGMechaPlayerStart*                      P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AMechaDestructibleItem*                   Item;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGMechaDMGameReplicationInfo*            GRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGMechaDMPlayerReplicationInfo*          PRI;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoomMatch.ShouldChangeSides
// [0x00020002] 
struct ATGMechaDoomMatch_execShouldChangeSides_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaDoomMatch.SwitchCamp
// [0x00020002] 
struct ATGMechaDoomMatch_execSwitchCamp_Parms
{
	// class AMechaGamePlayerController*               PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AMechaGamePlayerReplicationInfo*          PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             TempScore;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoomMatch.RoundEnded
// [0x00020002] 
struct ATGMechaDoomMatch_execRoundEnded_Parms
{
	unsigned long                                      bGameOver : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMechaDoomMatch.ResetRoundLevel
// [0x00020002] 
struct ATGMechaDoomMatch_execResetRoundLevel_Parms
{
};

// Function MechaGame.TGMechaDoomMatch.AddInventoryFor
// [0x00020800] ( FUNC_Event )
struct ATGMechaDoomMatch_eventAddInventoryFor_Parms
{
	class APawn*                                       PlayerPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaDoomMatch.SetupPlayerStart
// [0x00020002] 
struct ATGMechaDoomMatch_execSetupPlayerStart_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaPlayerStart*                      P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoomMatch.TimerEnableCheckBalance
// [0x00020002] 
struct ATGMechaDoomMatch_execTimerEnableCheckBalance_Parms
{
};

// Function MechaGame.TGMechaDoomMatch.StartMatch
// [0x00020002] 
struct ATGMechaDoomMatch_execStartMatch_Parms
{
};

// Function MechaGame.TGMechaDoomMatch.InitRound
// [0x00020002] 
struct ATGMechaDoomMatch_execInitRound_Parms
{
};

// Function MechaGame.TGMechaDoomMatch.Reset
// [0x00020002] 
struct ATGMechaDoomMatch_execReset_Parms
{
};

// Function MechaGame.TGMechaDoomMatch.RoundStarted
// [0x00020002] 
struct ATGMechaDoomMatch_execRoundStarted_Parms
{
	// class ATGMechaPickupFactory*                    Pickup;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoomMatch.InitGameReplicationInfo
// [0x00020002] 
struct ATGMechaDoomMatch_execInitGameReplicationInfo_Parms
{
	// class ATGMechaDMGameReplicationInfo*            GRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDoomMatch.UpdateGameSpecificSettings
// [0x00020802] ( FUNC_Event )
struct ATGMechaDoomMatch_eventUpdateGameSpecificSettings_Parms
{
	struct FGameSpecificSettings                       Settings;                                         		// 0x0000 (0x0028) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaDoomMatch.PostBeginPlay
// [0x00020002] 
struct ATGMechaDoomMatch_execPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaPlayerStart.IsBlockedBy
// [0x00020002] 
struct ATGMechaPlayerStart_execIsBlockedBy_Parms
{
	class UClass*                                      BaseClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Radius;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   A;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIsBlocked : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGMechaDMMessage.GetLifeTime
// [0x00022002] 
struct UTGMechaDMMessage_execGetLifeTime_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaDMMessage.GetPos
// [0x00022002] 
struct UTGMechaDMMessage_execGetPos_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AHUD*                                        myHUD;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaDMMessage.GetFontSize
// [0x00022002] 
struct UTGMechaDMMessage_execGetFontSize_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI1;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI2;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      LocalPlayer;                                      		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaDMMessage.GetString
// [0x00026002] 
struct UTGMechaDMMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  FinalString;                                      		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function MechaGame.TGSeqEvent_DoorSwitchStateChanged.Activated
// [0x00020802] ( FUNC_Event )
struct UTGSeqEvent_DoorSwitchStateChanged_eventActivated_Parms
{
	// class AWorldInfo*                               WI;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaGamePawn.NotifyTeamChanged
// [0x00020100] 
struct ATGMechaGamePawn_execNotifyTeamChanged_Parms
{
};

// Function MechaGame.TGMechaGamePawn.PostRenderFor
// [0x00020900] ( FUNC_Event )
struct ATGMechaGamePawn_eventPostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaDMHUD.InternalCheckCrosshairOnFriendly
// [0x00020002] 
struct ATGMechaDMHUD_execInternalCheckCrosshairOnFriendly_Parms
{
	class APawn*                                       CheckPawn;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    TraceRot;                                         		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGMechaDMHUD.GetAngle
// [0x00020002] 
struct ATGMechaDMHUD_execGetAngle_Parms
{
	struct FVector                                     PointB;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     PointC;                                           		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaDMHUD.DrawIndicator
// [0x00820002] 
struct ATGMechaDMHUD_execDrawIndicator_Parms
{
	// struct FVector                                  WorldHUDLocation;                                 		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenHUDLocation;                                		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ActualPointerLocation;                            		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CameraViewDirection;                              		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  PawnDirection;                                    		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CameraLocation;                                   		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 CameraRotation;                                   		// 0x0048 (0x000C) [0x0000000000000000]              
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0054 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             Mecha;                                            		// 0x0058 (0x0004) [0x0000000000000000]              
	// int                                             PointerSize;                                      		// 0x005C (0x0004) [0x0000000000000000]              
	// int                                             Margin;                                           		// 0x0060 (0x0004) [0x0000000000000000]              
	// int                                             PosX;                                             		// 0x0064 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0068 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x006C (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0070 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMHUD.PostRender
// [0x00020802] ( FUNC_Event )
struct ATGMechaDMHUD_eventPostRender_Parms
{
};

// Function MechaGame.TGMechaDMHUD.DrawBaseHitMessage
// [0x00020002] 
struct ATGMechaDMHUD_execDrawBaseHitMessage_Parms
{
	// class ATGMechaDMGameReplicationInfo*            GRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             PosX;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMHUD.NotifyDefenceLevelUp
// [0x00020002] 
struct ATGMechaDMHUD_execNotifyDefenceLevelUp_Parms
{
};

// Function MechaGame.TGMechaDMHUD.DrawDefenceLevel
// [0x00820002] 
struct ATGMechaDMHUD_execDrawDefenceLevel_Parms
{
	// class ATGMechaDMGameReplicationInfo*            GRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PosX;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             PosXBase;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             PosYBase;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             DefenceLevel;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FTextureCoordinates                      DefenceNumCoords;                                 		// 0x001C (0x0010) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	// unsigned char                                   TeamIndex;                                        		// 0x0030 (0x0001) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMHUD.DrawShadowedText
// [0x00824002] 
struct ATGMechaDMHUD_execDrawShadowedText_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              X;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Scale;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FColor                                   CanvasColor;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMHUD.DrawBaseInfo
// [0x00820002] 
struct ATGMechaDMHUD_execDrawBaseInfo_Parms
{
	// class ATGMechaDMGameReplicationInfo*            GRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             PosX;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             OrigPosX;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             OrigPosY;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           Pct;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0020 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               DoorBar;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FString                                  CentralText;                                      		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FTextureCoordinates                      TitleTextCoords;                                  		// 0x0034 (0x0010) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMHUD.DisplayTeamScore
// [0x00820002] 
struct ATGMechaDMHUD_execDisplayTeamScore_Parms
{
	// class ATGMechaDMGameReplicationInfo*            GRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               GoalScoreBGTex;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               GoalScoreAttackDefend;                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             PosX;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned char                                   TeamIndex;                                        		// 0x0014 (0x0001) [0x0000000000000000]              
	// int                                             NewScore;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector2D                                CurPos;                                           		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FString                                  RoundStr;                                         		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function MechaGame.TGMechaDMHUD.DrawOverlays
// [0x00820002] 
struct ATGMechaDMHUD_execDrawOverlays_Parms
{
	// struct FVector                                  ViewPoint;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMHUD.DrawLivingHud
// [0x00020002] 
struct ATGMechaDMHUD_execDrawLivingHud_Parms
{
};

// Function MechaGame.TGMechaWeap_Aerogun.Destroyed
// [0x00020902] ( FUNC_Event )
struct ATGMechaWeap_Aerogun_eventDestroyed_Parms
{
};

// Function MechaGame.TGMechaWeap_Aerogun.DrawWeaponCrosshair
// [0x00820102] 
struct ATGMechaWeap_Aerogun_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  LocalTargetLoc;                                   		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FMatrix                                  TransMatrix;                                      		// 0x0010 (0x0040) [0x0000000000000000]              
	// class ATGRealMecha*                             OwnerMecha;                                       		// 0x0050 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0060 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x006C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x0078 (0x000C) [0x0000000000000000]              
	// float                                           ScreenX;                                          		// 0x0084 (0x0004) [0x0000000000000000]              
	// float                                           ScreenY;                                          		// 0x0088 (0x0004) [0x0000000000000000]              
	// float                                           TargetDist;                                       		// 0x008C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_Aerogun.AerogunServerStopFire
// [0x002200C2] 
struct ATGMechaWeap_Aerogun_execAerogunServerStopFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bClientAbleToFire : 1;                            		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_Aerogun.ProjectileFire
// [0x00020102] 
struct ATGMechaWeap_Aerogun_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaWeap_Aerogun.GetRandomProjTargetLoc
// [0x00820102] 
struct ATGMechaWeap_Aerogun_execGetRandomProjTargetLoc_Parms
{
	struct FVector                                     LocalTargetLoc;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRightSide : 1;                                   		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FMatrix                                     TransMatrix;                                      		// 0x0010 (0x0040) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0050 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           RandomLocalOffsetY;                               		// 0x005C (0x0004) [0x0000000000000000]              
	// float                                           RandomLocalOffsetX;                               		// 0x0060 (0x0004) [0x0000000000000000]              
	// float                                           RandomLocalOffsetZ;                               		// 0x0064 (0x0004) [0x0000000000000000]              
	// struct FVector                                  WorldTargetLoc;                                   		// 0x0068 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_Aerogun.ServerProjectileFire
// [0x00A200C2] 
struct ATGMechaWeap_Aerogun_execServerProjectileFire_Parms
{
	struct FVectorNoCompress                           TargetLoc;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaProj_Aerogun*                     SpawnedMechaProjectile;                           		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CurrLocalStartDir;                                		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  CurrTargetLoc;                                    		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  RealStartLoc;                                     		// 0x0034 (0x000C) [0x0000000000000000]              
	// TArray< struct FMechaAeroProjFireInfo >         FireInfoList;                                     		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x004C (0x0004) [0x0000000000000000]              
	// int                                             ShootNum;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
	// struct FMatrix                                  TransMatrix;                                      		// 0x0060 (0x0040) [0x0000000000000000]              
	// float                                           OffsetX;                                          		// 0x00A0 (0x0004) [0x0000000000000000]              
	// float                                           OffsetY;                                          		// 0x00A4 (0x0004) [0x0000000000000000]              
	// float                                           OffsetZ;                                          		// 0x00A8 (0x0004) [0x0000000000000000]              
	// struct FVector                                  LocalTargetLoc;                                   		// 0x00AC (0x000C) [0x0000000000000000]              
	// struct FVector                                  CurrFPEndPoint;                                   		// 0x00B8 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_Aerogun.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGMechaWeap_Aerogun_eventPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaProjectiveWeapon.FireAmmunition
// [0x00020102] 
struct ATGMechaProjectiveWeapon_execFireAmmunition_Parms
{
};

// Function MechaGame.TGMechaProjectiveWeapon.SetProjectileParms
// [0x00420102] 
struct ATGMechaProjectiveWeapon_execSetProjectileParms_Parms
{
	class ATGMechaProjectile*                          NewProj;                                          		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function MechaGame.TGMechaProjectiveWeapon.ProjectileFire
// [0x00820102] 
struct ATGMechaProjectiveWeapon_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGMechaProjectile*                       SpawnedMechaProjectile;                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  RealStartLoc;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProjectiveWeapon.IncrementFlashCount
// [0x00020102] 
struct ATGMechaProjectiveWeapon_execIncrementFlashCount_Parms
{
	// class ATGRealMecha*                             TGMecha;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGMechaProjWeapAttachment*               ProjWeapAttch;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProjectiveWeapon.GetProjectileAim
// [0x00820102] 
struct ATGMechaProjectiveWeapon_execGetProjectileAim_Parms
{
	struct FVector                                     StartFireLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGRealMecha*                             TGMecha;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TempDir;                                          		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamLocation;                                      		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DesiredAimPoint;                                  		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0058 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x0064 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x0070 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 CamRotation;                                      		// 0x007C (0x000C) [0x0000000000000000]              
	// class AMechaGamePlayerController*               MechaPC;                                          		// 0x0088 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             TracedMecha;                                      		// 0x008C (0x0004) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0090 (0x0020) [0x0000000000000000]              
	// class AActor*                                   TempActor;                                        		// 0x00B0 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProjectiveWeapon.ModifyAimDirection
// [0x00820102] 
struct ATGMechaProjectiveWeapon_execModifyAimDirection_Parms
{
	struct FRotator                                    AimRotation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  AimX;                                             		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimY;                                             		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimZ;                                             		// 0x0030 (0x000C) [0x0000000000000000]              
	// float                                           randX;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           RandY;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
	// unsigned char                                   CurrAimDisperseType;                              		// 0x0044 (0x0001) [0x0000000000000000]              
	// float                                           CurrAimDisperseParm;                              		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProjectiveWeapon.GetAllProjFireInfo
// [0x00020102] 
struct ATGMechaProjectiveWeapon_execGetAllProjFireInfo_Parms
{
	TArray< struct FMechaAeroProjFireInfo >            ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// class ATGRealMecha*                             TGMecha;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// class ATGMechaProjWeapAttachment*               TGMechaWeapAttch;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProjectiveWeapon.GetPhysicalFireStartLoc
// [0x00024102] 
struct ATGMechaProjectiveWeapon_execGetPhysicalFireStartLoc_Parms
{
	struct FVector                                     AimDir;                                           		// 0x0000 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGRealMecha*                             TGMecha;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ATGMechaWeaponAttachment*                 TGMechaWeapAttch;                                 		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_Electrowelding.DrawWeaponCrosshair
// [0x00020102] 
struct ATGMechaWeap_Electrowelding_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaGameHUD*                          MechaHUD;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           StringX;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           StringY;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             PosX;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_Electrowelding.StillFiring
// [0x00020102] 
struct ATGMechaWeap_Electrowelding_execStillFiring_Parms
{
	unsigned char                                      FireMode;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaWeap_Electrowelding.CustomFire
// [0x00020102] 
struct ATGMechaWeap_Electrowelding_execCustomFire_Parms
{
	// class ATGMechaPlayerReplicationInfo*            MechaPRI;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             OldHealth;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             ActualHeal;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATGMechaGamePlayerController*             MechaGamePC;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           FinalCureAmountMecha;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           FinalCureAmountBuilding;                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           HealScale;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_Electrowelding.Tick
// [0x00820902] ( FUNC_Event )
struct ATGMechaWeap_Electrowelding_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FRotator                                 SocketRot;                                        		// 0x0020 (0x000C) [0x0000000000000000]              
	// class ATGRealMecha*                             FixingMecha;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             FixingInstigator;                                 		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FVector                                  FixingMechaSocketLoc;                             		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FixingInstigatorSocketLoc;                        		// 0x0040 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bCanFix : 1;                                      		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGMechaWeap_Electrowelding.SetOverheatingParms
// [0x00020102] 
struct ATGMechaWeap_Electrowelding_execSetOverheatingParms_Parms
{
	class AActor*                                      CurrFixingActor;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_Electrowelding.PlayFixingMechaEffect
// [0x00020102] 
struct ATGMechaWeap_Electrowelding_execPlayFixingMechaEffect_Parms
{
	// class ATGMechaWeapAttachment_Electrowelding*    ElectroweldingAttch;                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_Electrowelding.ServerSetFixingEffect
// [0x00220042] 
struct ATGMechaWeap_Electrowelding_execServerSetFixingEffect_Parms
{
	class AActor*                                      CurrFixingActor;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CurrHitLocation;                                  		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealMecha*                             OwnerMecha;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             RepairedMecha;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_Electrowelding.ServerSetFixingActor
// [0x002200C2] 
struct ATGMechaWeap_Electrowelding_execServerSetFixingActor_Parms
{
	class AActor*                                      CurrFixingActor;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CurrHitLocation;                                  		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_Electrowelding.ServerCheckFixingActor
// [0x00020002] 
struct ATGMechaWeap_Electrowelding_execServerCheckFixingActor_Parms
{
	class AActor*                                      CurrFixingActor;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaWeap_Electrowelding.ConsumeAmmo
// [0x00020102] 
struct ATGMechaWeap_Electrowelding_execConsumeAmmo_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_Electrowelding.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGMechaWeap_Electrowelding_eventPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaWeap_FlameThrower.FlameThrowerServerTakeDamage
// [0x002200C2] 
struct ATGMechaWeap_FlameThrower_execFlameThrowerServerTakeDamage_Parms
{
	class AActor*                                      DamageActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                HitDamage;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                HitEnergyDamage;                                  		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      MyDamageType;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaGamePlayerController*             MechaPC;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_FlameThrower.DrawWeaponCrosshair
// [0x00020102] 
struct ATGMechaWeap_FlameThrower_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_FlameThrower.TurnOffFireSprayInFirstPersonSpectate
// [0x00020102] 
struct ATGMechaWeap_FlameThrower_execTurnOffFireSprayInFirstPersonSpectate_Parms
{
};

// Function MechaGame.TGMechaWeap_FlameThrower.TurnOnFireSprayInFirstPersonSpectate
// [0x00020102] 
struct ATGMechaWeap_FlameThrower_execTurnOnFireSprayInFirstPersonSpectate_Parms
{
};

// Function MechaGame.TGMechaWeap_FlameThrower.AttachPliotLight
// [0x00020102] 
struct ATGMechaWeap_FlameThrower_execAttachPliotLight_Parms
{
};

// Function MechaGame.TGMechaWeap_FlameThrower.PlayFireEffects
// [0x00024102] 
struct ATGMechaWeap_FlameThrower_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaWeap_FlameThrower.EndOfBurstDelay
// [0x00020100] 
struct ATGMechaWeap_FlameThrower_execEndOfBurstDelay_Parms
{
};

// Function MechaGame.TGMechaWeap_FlameThrower.CanDoSpecialMeleeAttack
// [0x00020102] 
struct ATGMechaWeap_FlameThrower_execCanDoSpecialMeleeAttack_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaWeap_FlameThrower.GetWeaponDistanceForEnemyTrace
// [0x00020102] 
struct ATGMechaWeap_FlameThrower_execGetWeaponDistanceForEnemyTrace_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaWeap_FlameThrower.IsActiveReloadActive
// [0x00020002] 
struct ATGMechaWeap_FlameThrower_execIsActiveReloadActive_Parms
{
	class ATGPawn*                                     TPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaWeap_FlameThrower.GetCrossHairScale
// [0x00020102] 
struct ATGMechaWeap_FlameThrower_execGetCrossHairScale_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaWeap_FlameThrower.GetRotationControlScale
// [0x00420102] 
struct ATGMechaWeap_FlameThrower_execGetRotationControlScale_Parms
{
	float                                              TurnScale;                                        		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              LookUpScale;                                      		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function MechaGame.TGMechaWeap_FlameThrower.GetHumanAimRotationAdjustment
// [0x00820102] 
struct ATGMechaWeap_FlameThrower_execGetHumanAimRotationAdjustment_Parms
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 Adj;                                              		// 0x000C (0x000C) [0x0000000000000000]              
	// class ATGRealMecha*                             TGMecha;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_FlameThrower.Destroyed
// [0x00020102] 
struct ATGMechaWeap_FlameThrower_execDestroyed_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_FlameThrower.CustomFire
// [0x00020102] 
struct ATGMechaWeap_FlameThrower_execCustomFire_Parms
{
};

// Function MechaGame.TGMechaWeap_FlameThrower.GetBurstsToFire
// [0x00020002] 
struct ATGMechaWeap_FlameThrower_execGetBurstsToFire_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaWeap_FlameThrower.GetBurstFireCount
// [0x00020002] 
struct ATGMechaWeap_FlameThrower_execGetBurstFireCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaWeap_FlameThrower.FireAmmunition
// [0x00020102] 
struct ATGMechaWeap_FlameThrower_execFireAmmunition_Parms
{
	// class ATGPlayerReplicationInfo*                 PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_FlameThrower.StartFire
// [0x00020102] 
struct ATGMechaWeap_FlameThrower_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_FlameThrower.DoDelayedEndFire
// [0x00020102] 
struct ATGMechaWeap_FlameThrower_execDoDelayedEndFire_Parms
{
};

// Function MechaGame.TGMechaWeap_FlameThrower.GetWeaponRating
// [0x00020102] 
struct ATGMechaWeap_FlameThrower_execGetWeaponRating_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaWeap_FlameThrower.WeaponStoppedFiring
// [0x00020902] ( FUNC_Event )
struct ATGMechaWeap_FlameThrower_eventWeaponStoppedFiring_Parms
{
	unsigned char                                      FiringMode;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_FlameThrower.TurnOffFireSpray
// [0x00080102] 
struct ATGMechaWeap_FlameThrower_execTurnOffFireSpray_Parms
{
};

// Function MechaGame.TGMechaWeap_FlameThrower.TurnOnFireSpray
// [0x00080102] 
struct ATGMechaWeap_FlameThrower_execTurnOnFireSpray_Parms
{
};

// Function MechaGame.TGMechaWeap_FlameThrower.CheckFlamePool
// [0x00820102] 
struct ATGMechaWeap_FlameThrower_execCheckFlamePool_Parms
{
	// struct FVector                                  MuzzleLoc;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Aim;                                              		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_FlameThrower.GetActualMuzzleLocationAndRotation
// [0x00420102] 
struct ATGMechaWeap_FlameThrower_execGetActualMuzzleLocationAndRotation_Parms
{
	struct FVector                                     Out_Loc;                                          		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_Rot;                                          		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function MechaGame.TGMechaWeap_FlameThrower.GetFlameSprayFromPool
// [0x00080102] 
struct ATGMechaWeap_FlameThrower_execGetFlameSprayFromPool_Parms
{
	class ATGMechaWeap_FlameThrowerSprayBase*          ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGMechaWeap_FlameThrowerSprayBase*       Ret;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_FlameThrower.TurnOffPilot
// [0x00080102] 
struct ATGMechaWeap_FlameThrower_execTurnOffPilot_Parms
{
};

// Function MechaGame.TGMechaWeap_FlameThrower.TurnOnPilot
// [0x00080102] 
struct ATGMechaWeap_FlameThrower_execTurnOnPilot_Parms
{
};

// Function MechaGame.TGMechaWeap_FlameThrower.SetWeaponAttachment
// [0x00020102] 
struct ATGMechaWeap_FlameThrower_execSetWeaponAttachment_Parms
{
	class ATGMechaWeaponAttachment*                    WeapAttach;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_FlameThrower.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGMechaWeap_FlameThrower_eventPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaWeap_FlameThrower.WeaponFired
// [0x00024902] ( FUNC_Event )
struct ATGMechaWeap_FlameThrower_eventWeaponFired_Parms
{
	unsigned char                                      FiringMode;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaWeap_RocketLauncher.SetProjectileParms
// [0x00420102] 
struct ATGMechaWeap_RocketLauncher_execSetProjectileParms_Parms
{
	class ATGMechaProjectile*                          NewProj;                                          		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class ATGMechaProj_FrostMissile*                FrostMissile;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_FrozenGrenade.SetProjectileParms
// [0x00420102] 
struct ATGMechaWeap_FrozenGrenade_execSetProjectileParms_Parms
{
	class ATGMechaProjectile*                          NewProj;                                          		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class ATGMechaProj_FrozenShell*                 FrozenShell;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_Howitzer.SetProjectileParms
// [0x00420102] 
struct ATGMechaWeap_Howitzer_execSetProjectileParms_Parms
{
	class ATGMechaProjectile*                          NewProj;                                          		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function MechaGame.TGMechaWeap_Howitzer.GetSimFireStartLoc
// [0x00820102] 
struct ATGMechaWeap_Howitzer_execGetSimFireStartLoc_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGRealMecha*                             OwnerMecha;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FVector                                  Out_Loc;                                          		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_Howitzer.Destroyed
// [0x00020902] ( FUNC_Event )
struct ATGMechaWeap_Howitzer_eventDestroyed_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_Howitzer.GetProjectileAim
// [0x00820102] 
struct ATGMechaWeap_Howitzer_execGetProjectileAim_Parms
{
	struct FVector                                     StartFireLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 OriAimRot;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 AdjustedAimRot;                                   		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 DeltaAimRot;                                      		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AdjustedAimDir;                                   		// 0x003C (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_Howitzer.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGMechaWeap_Howitzer_eventPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaWeap_LaserBlade.HasAnyAmmo
// [0x00020102] 
struct ATGMechaWeap_LaserBlade_execHasAnyAmmo_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaWeap_LaserBlade.HasAmmo
// [0x00024102] 
struct ATGMechaWeap_LaserBlade_execHasAmmo_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Amount;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaWeap_LaserBlade.ConsumeAmmo
// [0x00020100] 
struct ATGMechaWeap_LaserBlade_execConsumeAmmo_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaMeleeWeapon.PlayMeleeHitCameraShake
// [0x00020102] 
struct ATGMechaMeleeWeapon_execPlayMeleeHitCameraShake_Parms
{
	// class ATGMechaWeaponAttachment*                 MechaWeapAttachment;                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaMeleeWeapon.CheckFireStartLocation
// [0x00020102] 
struct ATGMechaMeleeWeapon_execCheckFireStartLocation_Parms
{
	struct FVector                                     ServerStartLocation;                              		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     FireStartLocation;                                		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           LogicDistance;                                    		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaMeleeWeapon.OnPlayMeleeRecoverSound
// [0x00020102] 
struct ATGMechaMeleeWeapon_execOnPlayMeleeRecoverSound_Parms
{
};

// Function MechaGame.TGMechaMeleeWeapon.PlayRecoverSwingAnim
// [0x00020102] 
struct ATGMechaMeleeWeapon_execPlayRecoverSwingAnim_Parms
{
	// class ATGRealMecha*                             TGMecha;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGMechaWeaponAttachment*                 MechaWeapAttachment;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaMeleeWeapon.PlayHeavySwingAnim
// [0x00020102] 
struct ATGMechaMeleeWeapon_execPlayHeavySwingAnim_Parms
{
	// class ATGRealMecha*                             TGMecha;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGMechaWeapAttachment_LaserBlade*        MechaWeapAttachment;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaMeleeWeapon.PlaySecondSwingAnim
// [0x00020102] 
struct ATGMechaMeleeWeapon_execPlaySecondSwingAnim_Parms
{
	// class ATGRealMecha*                             TGMecha;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGMechaWeapAttachment_LaserBlade*        MechaWeapAttachment;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaMeleeWeapon.PlayFirstSwingAnim
// [0x00020102] 
struct ATGMechaMeleeWeapon_execPlayFirstSwingAnim_Parms
{
	// class ATGRealMecha*                             TGMecha;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGMechaWeapAttachment_LaserBlade*        MechaWeapAttachment;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaMeleeWeapon.PlayMeleeFireAnim
// [0x00020102] 
struct ATGMechaMeleeWeapon_execPlayMeleeFireAnim_Parms
{
	// class ATGRealMecha*                             TGMecha;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaMeleeWeapon.CalcWeaponFire
// [0x00C24102] 
struct ATGMechaMeleeWeapon_execCalcWeaponFire_Parms
{
	struct FVector                                     StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     EndTrace;                                         		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FImpactInfo >                       ImpactList;                                       		// 0x0018 (0x000C) [0x0000000000400190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FVector                                     Extent;                                           		// 0x0024 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FImpactInfo                                 ReturnValue;                                      		// 0x0030 (0x0054) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  HitLocation;                                      		// 0x0084 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0090 (0x000C) [0x0000000000000000]              
	// struct FVector                                  fLineDir;                                         		// 0x009C (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x00A8 (0x0004) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x00AC (0x0020) [0x0000000000000000]              
	// struct FImpactInfo                              CurrentImpact;                                    		// 0x00CC (0x0054) [0x0000000000000000]              
};

// Function MechaGame.TGMechaMeleeWeapon.KnifeServerTakeDamage
// [0x00824002] 
struct ATGMechaMeleeWeapon_execKnifeServerTakeDamage_Parms
{
	class APawn*                                       DamagePawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitDir;                                           		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     StartTraceLoc;                                    		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     DamagePawnLoc;                                    		// 0x0028 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0034 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       HitBoneName;                                      		// 0x0038 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ClientTime;                                       		// 0x0040 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumHits;                                          		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ClientAttackSectorAngle;                          		// 0x0048 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              SandCDis;                                         		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0050 (0x0020) [0x0000000000000000]              
	// int                                             TotalDamage;                                      		// 0x0070 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaMeleeWeapon.CheckTraceDir
// [0x00020002] 
struct ATGMechaMeleeWeapon_execCheckTraceDir_Parms
{
	float                                              ClientAttackSectorAngle;                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaMeleeWeapon.CheckHitGroup
// [0x00020002] 
struct ATGMechaMeleeWeapon_execCheckHitGroup_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaMeleeWeapon.KnifeServerCheckFire
// [0x00824002] 
struct ATGMechaMeleeWeapon_execKnifeServerCheckFire_Parms
{
	class APawn*                                       DamagePawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           TraceDir;                                         		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           StartTraceLoc;                                    		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     DamagePawnLoc;                                    		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0028 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       HitBoneName;                                      		// 0x002C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ClientTime;                                       		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ClientAttackSectorAngle;                          		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              SandCDis;                                         		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  StartTrace;                                       		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FImpactInfo                              RealImpact;                                       		// 0x005C (0x0054) [0x0000000000000000]              
	// float                                           LogicDistance;                                    		// 0x00B0 (0x0004) [0x0000000000000000]              
	// float                                           LimitTimeFireInterval;                            		// 0x00B4 (0x0004) [0x0000000000000000]              
	// struct FVector                                  RecordPawnLocation;                               		// 0x00B8 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ServerAuthorityStartLocation;                     		// 0x00C4 (0x000C) [0x0000000000000000]              
	// class ATGRealMecha*                             TGMecha;                                          		// 0x00D0 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaMeleeWeapon.ProcessInstantHitMeleeWeapon
// [0x00024102] 
struct ATGMechaMeleeWeapon_execProcessInstantHitMeleeWeapon_Parms
{
	unsigned char                                      FiringMode;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FImpactInfo                                 Impact;                                           		// 0x0004 (0x0054) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           TraceDir;                                         		// 0x0058 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVectorNoCompress                           StartTraceLoc;                                    		// 0x0064 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ClientTime;                                       		// 0x0070 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                NumHits;                                          		// 0x0074 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ClientAttackSectorAngle;                          		// 0x0078 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVectorNoCompress                           HitPawnLoc;                                       		// 0x007C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              SandCDis;                                         		// 0x0088 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// unsigned long                                   bFixMomentum : 1;                                 		// 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             TotalDamage;                                      		// 0x0090 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaMeleeWeapon.ProcessInstantHit
// [0x00024102] 
struct ATGMechaMeleeWeapon_execProcessInstantHit_Parms
{
	unsigned char                                      FiringMode;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FImpactInfo                                 Impact;                                           		// 0x0004 (0x0054) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumHits;                                          		// 0x0058 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaMeleeWeapon.MeleeWeaponGetAdjustedAim
// [0x00820102] 
struct ATGMechaMeleeWeapon_execMeleeWeaponGetAdjustedAim_Parms
{
	struct FVector                                     StartFireLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                SectorAngleOffset;                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 R;                                                		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaMeleeWeapon.MeleeWeaponInstantFireEndTrace
// [0x00020102] 
struct ATGMechaMeleeWeapon_execMeleeWeaponInstantFireEndTrace_Parms
{
	struct FVector                                     StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                SectorAngleOffset;                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaMeleeWeapon.ServerProcessMeleeWeaponInstantHit
// [0x002240C2] 
struct ATGMechaMeleeWeapon_execServerProcessMeleeWeaponInstantHit_Parms
{
	unsigned char                                      FiringMode;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FImpactInfo                                 Impact;                                           		// 0x0004 (0x0054) [0x0000000000000080]              ( CPF_Parm )
	float                                              ClientTime;                                       		// 0x0058 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           TraceDir;                                         		// 0x005C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                NumHits;                                          		// 0x0068 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldServerCheck : 1;                           		// 0x006C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVectorNoCompress                           StartTraceLoc;                                    		// 0x0070 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ClientAttackSectorAngle;                          		// 0x007C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVectorNoCompress                           HitPawnLoc;                                       		// 0x0080 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              SandCDis;                                         		// 0x008C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ATGPlayerController*                      TGP;                                              		// 0x0090 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaMeleeWeapon.TurnBackCrossHairColor
// [0x00020102] 
struct ATGMechaMeleeWeapon_execTurnBackCrossHairColor_Parms
{
};

// Function MechaGame.TGMechaMeleeWeapon.T2MeleeWeaponInstantFireEndTrace
// [0x00820102] 
struct ATGMechaMeleeWeapon_execT2MeleeWeaponInstantFireEndTrace_Parms
{
	struct FVector                                     StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     TraceDirection;                                   		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0018 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  FinalEndTrace;                                    		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaMeleeWeapon.SetMeleeImpactEffectInfo
// [0x00020102] 
struct ATGMechaMeleeWeapon_execSetMeleeImpactEffectInfo_Parms
{
	// class ATGMechaWeapAttachment_LaserBlade*        LaserBlade;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaMeleeWeapon.InstantFire
// [0x00820102] 
struct ATGMechaMeleeWeapon_execInstantFire_Parms
{
	// struct FVector                                  StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// TArray< struct FImpactInfo >                    ImpactListWithPawn;                               		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FImpactInfo                              RealImpact;                                       		// 0x0024 (0x0054) [0x0000000000000000]              
	// struct FImpactInfo                              ImpactWithNoPawn;                                 		// 0x0078 (0x0054) [0x0000000000000000]              
	// int                                             I;                                                		// 0x00CC (0x0004) [0x0000000000000000]              
	// class ATGPlayerController*                      TGP;                                              		// 0x00D0 (0x0004) [0x0000000000000000]              
	// TArray< struct FVector >                        TraceDir;                                         		// 0x00D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ATGRealMecha*                             TPawn;                                            		// 0x00E0 (0x0004) [0x0000000000000000]              
	// class APawn*                                    LocalPawn;                                        		// 0x00E4 (0x0004) [0x0000000000000000]              
	// float                                           ClientSentSandCDis;                               		// 0x00E8 (0x0004) [0x0000000000000000]              
	// float                                           TMP;                                              		// 0x00EC (0x0004) [0x0000000000000000]              
	// float                                           CurAngle;                                         		// 0x00F0 (0x0004) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x00F4 (0x0004) [0x0000000000000000]              
	// float                                           AttackT2SectorAngle;                              		// 0x00F8 (0x0004) [0x0000000000000000]              
	// float                                           KnifeFinalRange;                                  		// 0x00FC (0x0004) [0x0000000000000000]              
	// struct FVector                                  Forward;                                          		// 0x0100 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Right;                                            		// 0x010C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Up;                                               		// 0x0118 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DistanceVec;                                      		// 0x0124 (0x000C) [0x0000000000000000]              
	// struct FVector                                  tmpRotation;                                      		// 0x0130 (0x000C) [0x0000000000000000]              
	// struct FVector                                  tmpVec;                                           		// 0x013C (0x000C) [0x0000000000000000]              
	// unsigned long                                   bHitPawn : 1;                                     		// 0x0148 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGMechaMeleeWeapon.GetMeleeFireStartTrace
// [0x00820102] 
struct ATGMechaMeleeWeapon_execGetMeleeFireStartTrace_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  TraceStartLoc;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 TraceStartRot;                                    		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaMeleeWeapon.SetMeleeDamageCheckingParms
// [0x00020102] 
struct ATGMechaMeleeWeapon_execSetMeleeDamageCheckingParms_Parms
{
};

// Function MechaGame.TGMechaMeleeWeapon.PlayImpactEffect
// [0x00020102] 
struct ATGMechaMeleeWeapon_execPlayImpactEffect_Parms
{
	unsigned char                                      FiringMode;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FImpactInfo                                 Impact;                                           		// 0x0004 (0x0054) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealMecha*                             HitPawn;                                          		// 0x0058 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaMeleeWeapon.OnAnimEnd
// [0x00024900] ( FUNC_Event )
struct ATGMechaMeleeWeapon_eventOnAnimEnd_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ExcessTime;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaMeleeWeapon.FullyCooled
// [0x00020100] 
struct ATGMechaMeleeWeapon_execFullyCooled_Parms
{
};

// Function MechaGame.TGMechaMeleeWeapon.FireAmmunition
// [0x00020102] 
struct ATGMechaMeleeWeapon_execFireAmmunition_Parms
{
};

// Function MechaGame.TGMechaMeleeWeapon.SetTimerInstantFire
// [0x00020102] 
struct ATGMechaMeleeWeapon_execSetTimerInstantFire_Parms
{
};

// Function MechaGame.TGMechaMeleeWeapon.ServerHandleFinishedFiring
// [0x002200C2] 
struct ATGMechaMeleeWeapon_execServerHandleFinishedFiring_Parms
{
};

// Function MechaGame.TGMechaMeleeWeapon.HandleFinishedFiring
// [0x00020102] 
struct ATGMechaMeleeWeapon_execHandleFinishedFiring_Parms
{
};

// Function MechaGame.TGMechaMeleeWeapon.OnComboTimer
// [0x00020102] 
struct ATGMechaMeleeWeapon_execOnComboTimer_Parms
{
};

// Function MechaGame.TGMechaMeleeWeapon.HasAnyAmmo
// [0x00020102] 
struct ATGMechaMeleeWeapon_execHasAnyAmmo_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaMeleeWeapon.PlayWeaponPutDown
// [0x00020102] 
struct ATGMechaMeleeWeapon_execPlayWeaponPutDown_Parms
{
};

// Function MechaGame.TGMechaMeleeWeapon.PlayWeaponEquip
// [0x00020100] 
struct ATGMechaMeleeWeapon_execPlayWeaponEquip_Parms
{
};

// Function MechaGame.TGMechaMeleeWeapon.PlayFireEffects
// [0x00024102] 
struct ATGMechaMeleeWeapon_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaMeleeWeapon.GetFireAnim
// [0x00020102] 
struct ATGMechaMeleeWeapon_execGetFireAnim_Parms
{
	int                                                FireModeNum;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaMeleeWeapon.TrackShotCount
// [0x00020102] 
struct ATGMechaMeleeWeapon_execTrackShotCount_Parms
{
};

// Function MechaGame.TGMechaMeleeWeapon.BestMode
// [0x00020002] 
struct ATGMechaMeleeWeapon_execBestMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTBot*                                   B;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaMeleeWeapon.AddSpread
// [0x00020102] 
struct ATGMechaMeleeWeapon_execAddSpread_Parms
{
	struct FRotator                                    BaseAim;                                          		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           SpreadMod;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaMeleeWeapon.GetFireInterval
// [0x00020102] 
struct ATGMechaMeleeWeapon_execGetFireInterval_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           FI;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaMeleeWeapon.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGMechaMeleeWeapon_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaMeleeWeapon.StopMuzzleFlash
// [0x00020902] ( FUNC_Event )
struct ATGMechaMeleeWeapon_eventStopMuzzleFlash_Parms
{
};

// Function MechaGame.TGMechaMeleeWeapon.CauseMuzzleFlash
// [0x00020900] ( FUNC_Event )
struct ATGMechaMeleeWeapon_eventCauseMuzzleFlash_Parms
{
};

// Function MechaGame.TGMechaMeleeWeapon.CauseMuzzleFlashLight
// [0x00020900] ( FUNC_Event )
struct ATGMechaMeleeWeapon_eventCauseMuzzleFlashLight_Parms
{
};

// Function MechaGame.TGMechaMeleeWeapon.MuzzleFlashTimerRight
// [0x00020902] ( FUNC_Event )
struct ATGMechaMeleeWeapon_eventMuzzleFlashTimerRight_Parms
{
};

// Function MechaGame.TGMechaMeleeWeapon.MuzzleFlashTimerLeft
// [0x00020902] ( FUNC_Event )
struct ATGMechaMeleeWeapon_eventMuzzleFlashTimerLeft_Parms
{
};

// Function MechaGame.TGMechaMeleeWeapon.MuzzleFlashOff
// [0x00020900] ( FUNC_Event )
struct ATGMechaMeleeWeapon_eventMuzzleFlashOff_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaMeleeWeapon.DetachMuzzleFlash
// [0x00020102] 
struct ATGMechaMeleeWeapon_execDetachMuzzleFlash_Parms
{
};

// Function MechaGame.TGMechaMeleeWeapon.AttachMuzzleFlash
// [0x00020100] 
struct ATGMechaMeleeWeapon_execAttachMuzzleFlash_Parms
{
};

// Function MechaGame.TGMechaMeleeWeapon.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGMechaMeleeWeapon_eventPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaWeap_PenetrativeCannon.StartFire
// [0x00020102] 
struct ATGMechaWeap_PenetrativeCannon_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ATGRealMecha*                             OwnerMecha;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGMechaWeap_HPFDetector*                 HPF;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_PenetrativeCannon.ServerSpecialFire
// [0x002200C2] 
struct ATGMechaWeap_PenetrativeCannon_execServerSpecialFire_Parms
{
	class ATGRealMecha*                                TargetMecha;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           HitDir;                                           		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x001C (0x0020) [0x0000000000000080]              ( CPF_Parm )
	// float                                           HitDamage;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             OwnerMecha;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	// class ATGMechaWeap_HPFDetector*                 HPF;                                              		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_PenetrativeCannon.ServerFireAmmunition1P
// [0x00A240C2] 
struct ATGMechaWeap_PenetrativeCannon_execServerFireAmmunition1P_Parms
{
	int                                                ControllerP;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ControllerR;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ControllerY;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PunchAnglePitch;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PunchAngleYaw;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           FireStartLocation;                                		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                DeltaPunchAnglePitch;                             		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ClientTime;                                       		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       DamagePawn;                                       		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      WallNum;                                          		// 0x002C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x002D (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                HitDamage;                                        		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0034 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitDir;                                           		// 0x0040 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           DamagePawnLoc;                                    		// 0x004C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       HitBoneName;                                      		// 0x0058 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     FireEndLocation;                                  		// 0x0060 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              SandCDis;                                         		// 0x006C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVectorNoCompress                           ClientForwardDirection;                           		// 0x0070 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  ServerDamagePawnLoc;                              		// 0x007C (0x000C) [0x0000000000000000]              
	// unsigned long                                   RealHitAPawn : 1;                                 		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bCheckPass : 1;                                   		// 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGMechaWeap_PenetrativeCannon.SpecialFire
// [0x00820102] 
struct ATGMechaWeap_PenetrativeCannon_execSpecialFire_Parms
{
	class ATGRealMecha*                                TargetMecha;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitDir;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamLoc;                                           		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 CamRot;                                           		// 0x0034 (0x000C) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0040 (0x0004) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0044 (0x0020) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_PenetrativeCannon.SetFlashLocation
// [0x00020002] 
struct ATGMechaWeap_PenetrativeCannon_execSetFlashLocation_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_PenetrativeCannon.ServerFireAmmunition
// [0x00A240C2] 
struct ATGMechaWeap_PenetrativeCannon_execServerFireAmmunition_Parms
{
	int                                                ControllerP;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ControllerR;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ControllerY;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PunchAnglePitch;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PunchAngleYaw;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           FireStartLocation;                                		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                DeltaPunchAnglePitch;                             		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ClientTime;                                       		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      HitAPawn : 1;                                     		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     FireEndLocation;                                  		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVectorNoCompress                           ClientForwardDirection;                           		// 0x0038 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocationTemp0;                                 		// 0x0044 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocationTemp1;                                 		// 0x0050 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocationTemp2;                                 		// 0x005C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocationTemp3;                                 		// 0x0068 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocationTemp4;                                 		// 0x0074 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocationTemp5;                                 		// 0x0080 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x008C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGRealMecha*                             MechaInstigator;                                  		// 0x0090 (0x0004) [0x0000000000000000]              
	// class ATGPVPPlayerReplicationInfo*              PRI;                                              		// 0x0094 (0x0004) [0x0000000000000000]              
	// class ATGGame*                                  tGame;                                            		// 0x0098 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ServerForwardDirection;                           		// 0x009C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ControllerRotator;                                		// 0x00A8 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 AimRotator;                                       		// 0x00B4 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_PenetrativeCannon.InstantFire
// [0x00820102] 
struct ATGMechaWeap_PenetrativeCannon_execInstantFire_Parms
{
	// struct FVector                                  EndTrace;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// class ATGRealMecha*                             MechaInstigator;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< struct FImpactInfo >                    ImpactList;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FVector >                        HitLocationTemp;                                  		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FVectorNoCompress                        repStartLoc;                                      		// 0x002C (0x000C) [0x0000000000000000]              
	// TArray< struct FClientAttackPawnInfo >          AttackPInfoList;                                  		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bHitVehicle : 1;                                  		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AMechaDestructibleItem*                   DefenseDoor;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_PenetrativeCannon.FireAmmunition
// [0x00020102] 
struct ATGMechaWeap_PenetrativeCannon_execFireAmmunition_Parms
{
	// class ATGRealMecha*                             MechaInstigator;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           ShotFiredMul;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned char                                   CurrAimDisperseType;                              		// 0x000C (0x0001) [0x0000000000000000]              
	// class ATGMechaWeap_HPFDetector*                 HPF;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           CurrDisperseBaseJumping;                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           CurrDisperseModifierJumping;                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           CurrDisperseBaseJumpingVertical;                  		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           CurrDisperseModifierJumpingVertical;              		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           CurrDisperseBaseFastMoving;                       		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           CurrDisperseModifierFastMoving;                   		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           CurrDisperseBaseFastMovingVertical;               		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           CurrDisperseModifierFastMovingVertical;           		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           CurrDisperseBase;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           CurrDisperseModifier;                             		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           CurrDisperseBaseVertical;                         		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           CurrDisperseModifierVertical;                     		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_PenetrativeCannon.ModifyForWardDirection
// [0x00820102] 
struct ATGMechaWeap_PenetrativeCannon_execModifyForWardDirection_Parms
{
	struct FRotator                                    AimAngle;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  Forward;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Right;                                            		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Up;                                               		// 0x0030 (0x000C) [0x0000000000000000]              
	// float                                           randX;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           RandY;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_ShockCannon.ServerStartFire
// [0x002200C2] 
struct ATGMechaWeap_ShockCannon_execServerStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_ShockCannon.ConsumeAmmo
// [0x00020102] 
struct ATGMechaWeap_ShockCannon_execConsumeAmmo_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_ShockCannon.ServerStopFire
// [0x002200C2] 
struct ATGMechaWeap_ShockCannon_execServerStopFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_ShockCannon.SetProjectileParms
// [0x00420102] 
struct ATGMechaWeap_ShockCannon_execSetProjectileParms_Parms
{
	class ATGMechaProjectile*                          NewProj;                                          		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class ATGMechaProj_ShockShell*                  ShockShell;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_ShotGun.TurnBackCrossHairColor
// [0x00020102] 
struct ATGMechaWeap_ShotGun_execTurnBackCrossHairColor_Parms
{
};

// Function MechaGame.TGMechaWeap_ShotGun.InstantFire
// [0x00820102] 
struct ATGMechaWeap_ShotGun_execInstantFire_Parms
{
	// struct FVector                                  EndTrace;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// TArray< struct FImpactInfo >                    ImpactList;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             MechaInstigator;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// TArray< struct FVector >                        HitLocationTemp;                                  		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FImpactInfo >                    ImpactFirstList;                                  		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FVectorNoCompress                        repStartLoc;                                      		// 0x003C (0x000C) [0x0000000000000000]              
	// TArray< struct FClientAttackPawnInfo >          AttackPInfoList;                                  		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function MechaGame.TGMechaWeap_Thunder.DrawCritInfo
// [0x00820102] 
struct ATGMechaWeap_Thunder_execDrawCritInfo_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BaseOffsetX;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                DynamicOffsetX;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             PosX;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             SizeX;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             SizeY;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             X;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             Y;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             LPosX;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             LPosY;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             RPosX;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             RPosY;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x0038 (0x000C) [0x0000000000000000]              
	// int                                             LeftPoints;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	// int                                             RightPoints;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_Thunder.GunServerTakeDamage
// [0x00A240C2] 
struct ATGMechaWeap_Thunder_execGunServerTakeDamage_Parms
{
	class APawn*                                       DamageActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      WallNum;                                          		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0005 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                HitDamage;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitDir;                                           		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     DamagePawnLoc;                                    		// 0x0024 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       HitBoneName;                                      		// 0x0030 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              SandCDis;                                         		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x003C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGRealMecha*                             MechaInstigator;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0044 (0x0020) [0x0000000000000000]              
	// float                                           LogicDistance;                                    		// 0x0064 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_Thunder.ServerFireAmmunition1P
// [0x00A240C2] 
struct ATGMechaWeap_Thunder_execServerFireAmmunition1P_Parms
{
	int                                                ControllerP;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ControllerR;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ControllerY;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PunchAnglePitch;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PunchAngleYaw;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           FireStartLocation;                                		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                DeltaPunchAnglePitch;                             		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ClientTime;                                       		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       DamagePawn;                                       		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      WallNum;                                          		// 0x002C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x002D (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                HitDamage;                                        		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0034 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitDir;                                           		// 0x0040 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           DamagePawnLoc;                                    		// 0x004C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       HitBoneName;                                      		// 0x0058 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     FireEndLocation;                                  		// 0x0060 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              SandCDis;                                         		// 0x006C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVectorNoCompress                           ClientForwardDirection;                           		// 0x0070 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  ServerDamagePawnLoc;                              		// 0x007C (0x000C) [0x0000000000000000]              
	// unsigned long                                   RealHitAPawn : 1;                                 		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bCheckPass : 1;                                   		// 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGMechaWeap_Thunder.SetFlashLocation
// [0x00020002] 
struct ATGMechaWeap_Thunder_execSetFlashLocation_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_Thunder.ServerFireAmmunition
// [0x00A240C2] 
struct ATGMechaWeap_Thunder_execServerFireAmmunition_Parms
{
	int                                                ControllerP;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ControllerR;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ControllerY;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PunchAnglePitch;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PunchAngleYaw;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVectorNoCompress                           FireStartLocation;                                		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                DeltaPunchAnglePitch;                             		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ClientTime;                                       		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      HitAPawn : 1;                                     		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     FireEndLocation;                                  		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVectorNoCompress                           ClientForwardDirection;                           		// 0x0038 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocationTemp0;                                 		// 0x0044 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocationTemp1;                                 		// 0x0050 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocationTemp2;                                 		// 0x005C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocationTemp3;                                 		// 0x0068 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocationTemp4;                                 		// 0x0074 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocationTemp5;                                 		// 0x0080 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x008C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGRealMecha*                             MechaInstigator;                                  		// 0x0090 (0x0004) [0x0000000000000000]              
	// class ATGPVPPlayerReplicationInfo*              PRI;                                              		// 0x0094 (0x0004) [0x0000000000000000]              
	// class ATGGame*                                  tGame;                                            		// 0x0098 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ServerForwardDirection;                           		// 0x009C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ControllerRotator;                                		// 0x00A8 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 AimRotator;                                       		// 0x00B4 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_Thunder.InstantFire
// [0x00820102] 
struct ATGMechaWeap_Thunder_execInstantFire_Parms
{
	// struct FVector                                  EndTrace;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// class ATGRealMecha*                             MechaInstigator;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< struct FImpactInfo >                    ImpactList;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FVector >                        HitLocationTemp;                                  		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FVectorNoCompress                        repStartLoc;                                      		// 0x002C (0x000C) [0x0000000000000000]              
	// TArray< struct FClientAttackPawnInfo >          AttackPInfoList;                                  		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bHitVehicle : 1;                                  		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AMechaDestructibleItem*                   DefenseDoor;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_Thunder.FireAmmunition
// [0x00020102] 
struct ATGMechaWeap_Thunder_execFireAmmunition_Parms
{
};

// Function MechaGame.TGMechaWeap_Thunder.ModifyForWardDirection
// [0x00020102] 
struct ATGMechaWeap_Thunder_execModifyForWardDirection_Parms
{
	struct FRotator                                    AimAngle;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaGameHUD_ProgressBar.UpdateRespawnTimeBar
// [0x00020002] 
struct UTGMechaGameHUD_ProgressBar_execUpdateRespawnTimeBar_Parms
{
	// class ATGMechaGamePlayerController*             PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Progress;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMScoreBoard.DrawItemText
// [0x00420002] 
struct UTGMechaDMScoreBoard_execDrawItemText_Parms
{
	int                                                PosX;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosY;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGPlayerReplicationInfo*                    PRI;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FColor                                      TextColor;                                        		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class ATGMechaPlayerReplicationInfo*            MechaPRI;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FString                                  ScoreString;                                      		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function MechaGame.TGMechaDMScoreBoard.DrawItemTextSelf
// [0x00420002] 
struct UTGMechaDMScoreBoard_execDrawItemTextSelf_Parms
{
	int                                                PosX;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosY;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGPlayerReplicationInfo*                    PRI;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FColor                                      TextColor;                                        		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class ATGMechaPlayerReplicationInfo*            MechaPRI;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FString                                  ScoreString;                                      		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function MechaGame.TGMechaDMScoreBoard.DrawScoreBoardBG
// [0x00020002] 
struct UTGMechaDMScoreBoard_execDrawScoreBoardBG_Parms
{
	// unsigned char                                   TeamIndex;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function MechaGame.TGMechaPlayerInventoryManager.AddAllFunctionalItem
// [0x00020002] 
struct ATGMechaPlayerInventoryManager_execAddAllFunctionalItem_Parms
{
	class ATGPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// TArray< int >                                   FunctionalItemSubTypeList;                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< int >                                   FunctionalItemIconIDList;                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ATGMechaPlayerReplicationInfo*            MechaPRI;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaFactory.GetVehicleClassPath
// [0x00020002] 
struct ATGMechaFactory_execGetVehicleClassPath_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function MechaGame.TGMechaFactory.GetSpawnPosition
// [0x00420002] 
struct ATGMechaFactory_execGetSpawnPosition_Parms
{
	struct FVector                                     SpawnLoc;                                         		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    SpawnRot;                                         		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UClass*                                      MechaClass;                                       		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaPlayerStart*                      Start;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	// class ATGMechaPlayerStart*                      LastOptionalStart;                                		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaDMRoundMessage.GetPos
// [0x00022002] 
struct UTGMechaDMRoundMessage_execGetPos_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AHUD*                                        myHUD;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaDMRoundMessage.GetFontSize
// [0x00022002] 
struct UTGMechaDMRoundMessage_execGetFontSize_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI1;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI2;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      LocalPlayer;                                      		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaDMRoundMessage.GetString
// [0x00026002] 
struct UTGMechaDMRoundMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function MechaGame.TGMechaHUD_HulkBuster.DisplayWeaponBar
// [0x00820802] ( FUNC_Event )
struct UTGMechaHUD_HulkBuster_eventDisplayWeaponBar_Parms
{
	class ATGHUD*                                      HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             PosX;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             PosY;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             OrigPosX;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             OrigPosY;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           SizeX;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           SizeY;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           Pct;                                              		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FColor                                   CurrBkgColor;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeapAttachment_LaserBlade.PlayImpactEffects
// [0x00820102] 
struct ATGMechaWeapAttachment_LaserBlade_execPlayImpactEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  NewHitLoc;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FireDir;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Extent;                                           		// 0x0030 (0x000C) [0x0000000000000000]              
	// int                                             TraceFlags;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0044 (0x0020) [0x0000000000000000]              
	// struct FMaterialImpactEffect                    ImpactEffect;                                     		// 0x0064 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UMaterialInterface*                       MI;                                               		// 0x009C (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceTimeVarying*             MITV_Decal;                                       		// 0x00A0 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             V;                                                		// 0x00A4 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             TGMecha;                                          		// 0x00A8 (0x0004) [0x0000000000000000]              
	// float                                           TempScale;                                        		// 0x00AC (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          PS;                                               		// 0x00B0 (0x0004) [0x0000000000000000]              
	// class UParticleSystemComponent*                 PSC;                                              		// 0x00B4 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function MechaGame.TGMechaWeapAttachment_LaserBlade.DetachFrom
// [0x00020102] 
struct ATGMechaWeapAttachment_LaserBlade_execDetachFrom_Parms
{
	class USkeletalMeshComponent*                      MeshCpnt;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function MechaGame.TGMechaWeapAttachment_LaserBlade.AttachToMecha
// [0x00020102] 
struct ATGMechaWeapAttachment_LaserBlade_execAttachToMecha_Parms
{
	class ATGRealMechaBase*                            AttachOwnerMecha;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeapAttachment_LaserBlade.DetachLaserBladeEffects
// [0x00020102] 
struct ATGMechaWeapAttachment_LaserBlade_execDetachLaserBladeEffects_Parms
{
};

// Function MechaGame.TGMechaWeapAttachment_LaserBlade.AttachLaserBladeEffects
// [0x00020102] 
struct ATGMechaWeapAttachment_LaserBlade_execAttachLaserBladeEffects_Parms
{
};

// Function MechaGame.TGMechaPickupMessage.GetString
// [0x00026002] 
struct UTGMechaPickupMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function MechaGame.TGMechaProj_Tracer.Tick
// [0x00820102] 
struct ATGMechaProj_Tracer_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  NewScale;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_Tracer.ScaleUpFinishedNotify
// [0x00020102] 
struct ATGMechaProj_Tracer_execScaleUpFinishedNotify_Parms
{
};

// Function MechaGame.TGMechaProj_Tracer.ScaleDownFinishedNotify
// [0x00020102] 
struct ATGMechaProj_Tracer_execScaleDownFinishedNotify_Parms
{
};

// Function MechaGame.TGMechaProj_Tracer.SpawnImpactEffect
// [0x00020100] 
struct ATGMechaProj_Tracer_execSpawnImpactEffect_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProj_Tracer.Explode
// [0x00020102] 
struct ATGMechaProj_Tracer_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProj_Tracer.KillProjectile
// [0x00020102] 
struct ATGMechaProj_Tracer_execKillProjectile_Parms
{
	// float                                           VelSize;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_Tracer.Init
// [0x00020002] 
struct ATGMechaProj_Tracer_execInit_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProj_Tracer.CalcTraceAccel
// [0x00880102] 
struct ATGMechaProj_Tracer_execCalcTraceAccel_Parms
{
	// struct FVector                                  AccelDir;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_Tracer.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGMechaProj_Tracer_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProj_BulletTracer.ProcessTouch
// [0x00020102] 
struct ATGMechaProj_BulletTracer_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProj_BulletTracer.OutsideWorldBounds
// [0x00020902] ( FUNC_Event )
struct ATGMechaProj_BulletTracer_eventOutsideWorldBounds_Parms
{
};

// Function MechaGame.TGMechaProj_BulletTracer.ScaleUpFinishedNotify
// [0x00020102] 
struct ATGMechaProj_BulletTracer_execScaleUpFinishedNotify_Parms
{
};

// Function MechaGame.TGMechaProj_BulletTracer.ScaleDownFinishedNotify
// [0x00020102] 
struct ATGMechaProj_BulletTracer_execScaleDownFinishedNotify_Parms
{
};

// Function MechaGame.TGMechaProj_BulletTracer.KillProjectile
// [0x00020102] 
struct ATGMechaProj_BulletTracer_execKillProjectile_Parms
{
};

// Function MechaGame.TGMechaProj_BulletTracer.Tick
// [0x00820102] 
struct ATGMechaProj_BulletTracer_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  NextFrameDestinationLoc;                          		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_BulletTracer.WakeProjectile
// [0x00020102] 
struct ATGMechaProj_BulletTracer_execWakeProjectile_Parms
{
};

// Function MechaGame.TGMechaProj_BulletTracer.Reset
// [0x00020002] 
struct ATGMechaProj_BulletTracer_execReset_Parms
{
};

// Function MechaGame.TGMechaProj_BulletTracer.Recycle
// [0x00020002] 
struct ATGMechaProj_BulletTracer_execRecycle_Parms
{
};

// Function MechaGame.TGMechaProj_BulletTracer.InitTracer
// [0x00820002] 
struct ATGMechaProj_BulletTracer_execInitTracer_Parms
{
	struct FVector                                     Start;                                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     End;                                              		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  Direction;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// float                                           Lifetime;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  NewLocation;                                      		// 0x0028 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_FlameBeam.HurtBeam
// [0x00820102] 
struct ATGMechaProj_FlameBeam_execHurtBeam_Parms
{
	float                                              BaseDamage;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CylinderEndPt1;                                   		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CylinderEndPt2;                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              CylinderRadius;                                   		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   Victim;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Extent;                                           		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x004C (0x0020) [0x0000000000000000]              
	// class AFracturedStaticMeshActor*                FracActor;                                        		// 0x006C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_FlameBeam.IsWarmingUp
// [0x00020102] 
struct ATGMechaProj_FlameBeam_execIsWarmingUp_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaProj_FlameBeam.Destroyed
// [0x00020102] 
struct ATGMechaProj_FlameBeam_execDestroyed_Parms
{
};

// Function MechaGame.TGMechaProj_FlameBeam.DoHODFireEffects
// [0x00020102] 
struct ATGMechaProj_FlameBeam_execDoHODFireEffects_Parms
{
};

// Function MechaGame.TGMechaProj_FlameBeam.NotifyWarmupFinished
// [0x00020102] 
struct ATGMechaProj_FlameBeam_execNotifyWarmupFinished_Parms
{
	// unsigned long                                   bFiredOK : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGMechaProj_FlameBeam.IsReadyToFire
// [0x00080102] 
struct ATGMechaProj_FlameBeam_execIsReadyToFire_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaProj_FlameBeam.DoInitialExplosion
// [0x00820102] 
struct ATGMechaProj_FlameBeam_execDoInitialExplosion_Parms
{
	// class APVEExplosionActor*                       ExplosionActor;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  NudgedHitLocation;                                		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_FlameBeam.Fire
// [0x00020002] 
struct ATGMechaProj_FlameBeam_execFire_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaProj_FlameBeam.DoHODCooldownEffects
// [0x00020102] 
struct ATGMechaProj_FlameBeam_execDoHODCooldownEffects_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaProj_FlameBeam.NotifyFireFinished
// [0x00020102] 
struct ATGMechaProj_FlameBeam_execNotifyFireFinished_Parms
{
	// float                                           CoolDownEffectTimeSec;                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_FlameBeam.BeginWarmup
// [0x00824102] 
struct ATGMechaProj_FlameBeam_execBeginWarmup_Parms
{
	struct FVector                                     TargetLoc;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShouldAutoFire : 1;                              		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  CurrentSurfaceNormal;                             		// 0x0010 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_FlameBeam.DoHODWarmupEffects
// [0x00020102] 
struct ATGMechaProj_FlameBeam_execDoHODWarmupEffects_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_FlameBeam.SpawnTendrilBeam
// [0x00880102] 
struct ATGMechaProj_FlameBeam_execSpawnTendrilBeam_Parms
{
	int                                                BeamIdx;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 TmpRot;                                           		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_FlameBeam.ActivateTendrilBeam
// [0x00080102] 
struct ATGMechaProj_FlameBeam_execActivateTendrilBeam_Parms
{
	int                                                BeamIdx;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProj_FlameBeam.DestroyTendrilBeams
// [0x00020102] 
struct ATGMechaProj_FlameBeam_execDestroyTendrilBeams_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_FlameBeam.NotifyPreWarmupFinished
// [0x00020102] 
struct ATGMechaProj_FlameBeam_execNotifyPreWarmupFinished_Parms
{
};

// Function MechaGame.TGMechaProj_FlameBeam.DoNearbyActorEffects
// [0x00020102] 
struct ATGMechaProj_FlameBeam_execDoNearbyActorEffects_Parms
{
	// class AFracturedStaticMeshActor*                FracActor;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned char                                   bWantPhysChunksAndParticles;                      		// 0x0004 (0x0001) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_FlameBeam.Tick
// [0x00820102] 
struct ATGMechaProj_FlameBeam_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TendrilBaseLoc;                                   		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BeamDir;                                          		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HurtEnd;                                          		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 TmpRot;                                           		// 0x0044 (0x000C) [0x0000000000000000]              
	// float                                           Pct;                                              		// 0x0050 (0x0004) [0x0000000000000000]              
	// float                                           ScaleRate;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0058 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bTendrilNeedsActivated : 1;                       		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	// class ATurretEmitter*                           NewImpactEmitter_OXMHACK;                         		// 0x0060 (0x0004) [0x0000000000000000]              
	// int                                             NumToSpawn;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
	// struct FVector                                  SpawnLoc;                                         		// 0x0068 (0x000C) [0x0000000000000000]              
	// float                                           SpawnRate_OXMHACK;                                		// 0x0074 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_FlameBeam.TimeSince
// [0x00020103] ( FUNC_Final )
struct ATGMechaProj_FlameBeam_execTimeSince_Parms
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaProj_FlameBeam.GetBeamLength
// [0x00080102] 
struct ATGMechaProj_FlameBeam_execGetBeamLength_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaProj_FlameBeam.GetBeamDirection
// [0x00080102] 
struct ATGMechaProj_FlameBeam_execGetBeamDirection_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaProj_FlameBeam.StickToGround
// [0x00C80102] 
struct ATGMechaProj_FlameBeam_execStickToGround_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AActor*                                      HitActor;                                         		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FVector                                  HitLoc;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_FlameBeam.FindGround
// [0x00C80102] 
struct ATGMechaProj_FlameBeam_execFindGround_Parms
{
	struct FVector                                     BaseLoc;                                          		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              TraceDist;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AActor*                                      HitActor;                                         		// 0x0028 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FVector                                  StartTrace;                                       		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FImpactInfo                              Impact;                                           		// 0x0044 (0x0054) [0x0000000000000000]              
	// class AActor*                                   HA;                                               		// 0x0098 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HL;                                               		// 0x009C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HN;                                               		// 0x00A8 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_FlameBeam.Init
// [0x00020102] 
struct ATGMechaProj_FlameBeam_execInit_Parms
{
	class APawn*                                       ShotInstigator;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProj_FlameBeam.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGMechaProj_FlameBeam_eventPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaProj_FlameBeam.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGMechaProj_FlameBeam_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_Flame.ChangeVisibility
// [0x00020102] 
struct ATGMechaWeap_Flame_execChangeVisibility_Parms
{
	unsigned long                                      bIsVisible : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_Flame.SetLockPawnRotation
// [0x00020100] 
struct ATGMechaWeap_Flame_execSetLockPawnRotation_Parms
{
	unsigned long                                      bLock : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_Flame.SetMovementLock
// [0x00020100] 
struct ATGMechaWeap_Flame_execSetMovementLock_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_Flame.KillLocationPS
// [0x00024102] 
struct ATGMechaWeap_Flame_execKillLocationPS_Parms
{
	unsigned long                                      bKill : 1;                                        		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaWeap_Flame.ActivateFireAtSpotPS
// [0x00020102] 
struct ATGMechaWeap_Flame_execActivateFireAtSpotPS_Parms
{
	unsigned long                                      bCanFire : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bLock : 1;                                        		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class AActor*                                      AimActor;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     AimSpot;                                          		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     AimSpotNormal;                                    		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     FireAtSpot;                                       		// 0x0024 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     FireAtSpotNormal;                                 		// 0x0030 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeap_Flame.DrawWeaponCrosshair
// [0x00820102] 
struct ATGMechaWeap_Flame_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  FireAtSpot;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FireAtSpotNormal;                                 		// 0x0010 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bFoundTarget : 1;                                 		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// class AActor*                                   AimActor;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  AimSpot;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimSpotNormal;                                    		// 0x0030 (0x000C) [0x0000000000000000]              
	// float                                           ScreenX;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           ScreenY;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           TargetDist;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_Flame.TestCanFire
// [0x00C20102] 
struct ATGMechaWeap_Flame_execTestCanFire_Parms
{
	class AActor*                                      AimActor;                                         		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     AimSpot;                                          		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     AimNormal;                                        		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     FireSpot;                                         		// 0x001C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     FireSpotNormal;                                   		// 0x0028 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  FireStartTrace;                                   		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FireAtLocation;                                   		// 0x005C (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimAtLocation;                                    		// 0x0068 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0074 (0x0004) [0x0000000000000000]              
	// class ATGIFGameReplicationInfo*                 GRI;                                              		// 0x0078 (0x0004) [0x0000000000000000]              
	// float                                           CheckAboveZ;                                      		// 0x007C (0x0004) [0x0000000000000000]              
	// float                                           CheckBelowZ;                                      		// 0x0080 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_Flame.CustomFire
// [0x00020102] 
struct ATGMechaWeap_Flame_execCustomFire_Parms
{
	// class ATGMechaProj_FlameBeam*                   Beam;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeap_Flame.PlayFireEffects
// [0x00024100] 
struct ATGMechaWeap_Flame_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaWeap_Flame.NotifyBeamFireFinished
// [0x00020100] 
struct ATGMechaWeap_Flame_execNotifyBeamFireFinished_Parms
{
};

// Function MechaGame.TGMechaWeap_Flame.ClientPlantBeam
// [0x010201C2] 
struct ATGMechaWeap_Flame_execClientPlantBeam_Parms
{
};

// Function MechaGame.TGMechaWeap_Flame.PlayBombPlantEffect
// [0x00020102] 
struct ATGMechaWeap_Flame_execPlayBombPlantEffect_Parms
{
};

// Function MechaGame.TGMechaWeap_Flame.PlayStartPlantingEffect
// [0x00020102] 
struct ATGMechaWeap_Flame_execPlayStartPlantingEffect_Parms
{
};

// Function MechaGame.TGMechaWeap_Flame.ReBombCheckTimer
// [0x00020100] 
struct ATGMechaWeap_Flame_execReBombCheckTimer_Parms
{
};

// Function MechaGame.TGMechaWeap_Flame.TimePlanting
// [0x00020102] 
struct ATGMechaWeap_Flame_execTimePlanting_Parms
{
};

// Function MechaGame.TGMechaWeap_Flame.EndPlanting
// [0x00020100] 
struct ATGMechaWeap_Flame_execEndPlanting_Parms
{
};

// Function MechaGame.TGMechaWeap_Flame.IsPlanting
// [0x00020102] 
struct ATGMechaWeap_Flame_execIsPlanting_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaWeap_Flame.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGMechaWeap_Flame_eventPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaProj_FrostMissile.ProjectileHurtRadius
// [0x00020102] 
struct ATGMechaProj_FrostMissile_execProjectileHurtRadius_Parms
{
	struct FVector                                     HurtOrigin;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   Result : 1;                                       		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGMechaProj_Grenade.PhysicsVolumeChange
// [0x00020102] 
struct ATGMechaProj_Grenade_execPhysicsVolumeChange_Parms
{
	class APhysicsVolume*                              NewVolume;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProj_Grenade.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGMechaProj_Grenade_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function MechaGame.TGMechaProj_Grenade.Timer
// [0x00020102] 
struct ATGMechaProj_Grenade_execTimer_Parms
{
};

// Function MechaGame.TGMechaProj_Grenade.Init
// [0x00020002] 
struct ATGMechaProj_Grenade_execInit_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProj_Grenade.PostBeginPlay
// [0x00020102] 
struct ATGMechaProj_Grenade_execPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaProj_FrozenShell.ProjectileHurtRadius
// [0x00820102] 
struct ATGMechaProj_FrozenShell_execProjectileHurtRadius_Parms
{
	struct FVector                                     HurtOrigin;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bCausedDamage : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// class AActor*                                   Victim;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             TPawn;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
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

// Function MechaGame.TGMechaProj_FrozenShell.ProcessTouch
// [0x00020102] 
struct ATGMechaProj_FrozenShell_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProj_FrozenShell.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGMechaProj_FrozenShell_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function MechaGame.TGMechaProj_FrozenShell.Init
// [0x00020002] 
struct ATGMechaProj_FrozenShell_execInit_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProj_FrozenShell.PostBeginPlay
// [0x00020102] 
struct ATGMechaProj_FrozenShell_execPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaProj_ShockShell.ProjectileHurtRadius
// [0x00020102] 
struct ATGMechaProj_ShockShell_execProjectileHurtRadius_Parms
{
	struct FVector                                     HurtOrigin;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bCausedDamage : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           DamageAmount;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           InDamageRadius;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           Momentum;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	// class ATGRealMecha*                             TGMecha;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_ShockShell.ProcessTouch
// [0x00020102] 
struct ATGMechaProj_ShockShell_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class APawn*                                    HitPawn;                                          		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_ShockShell.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGMechaProj_ShockShell_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProj_Thunder.ProjectileHurtRadius
// [0x00020102] 
struct ATGMechaProj_Thunder_execProjectileHurtRadius_Parms
{
	struct FVector                                     HurtOrigin;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bCausedDamage : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// class ATGRealMecha*                             OwnerMecha;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           DamageAmount;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           InDamageRadius;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           Momentum;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProj_Thunder.ProcessTouch
// [0x00020102] 
struct ATGMechaProj_Thunder_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class APawn*                                    HitPawn;                                          		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProjWeapAttachment.PlayImpactEffects
// [0x00020100] 
struct ATGMechaProjWeapAttachment_execPlayImpactEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProjWeapAttachment.GetAllProjFireInfo
// [0x00820102] 
struct ATGMechaProjWeapAttachment_execGetAllProjFireInfo_Parms
{
	TArray< struct FMechaAeroProjFireInfo >            ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FVector                                  Loc;                                              		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x0018 (0x000C) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	// TArray< struct FMechaAeroProjFireInfo >         FireInfoList;                                     		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FMechaAeroProjFireInfo                   CurrFireInfo;                                     		// 0x0034 (0x0028) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProjWeapAttachment.GetPhysicalFireStartLoc
// [0x00824102] 
struct ATGMechaProjWeapAttachment_execGetPhysicalFireStartLoc_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SpawnLocation;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotation;                                    		// 0x001C (0x000C) [0x0000000000000000]              
	// class USkeletalMeshComponent*                   CurrMesh;                                         		// 0x0028 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function MechaGame.TGMechaProjWeapAttachment.PlayMechaProjWeaponFireAnim
// [0x00020102] 
struct ATGMechaProjWeapAttachment_execPlayMechaProjWeaponFireAnim_Parms
{
	struct FReplicatedEffectsInfo                      InProjWeapEffectsInfo;                            		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProjWeapAttachment.ProjWeapCauseMuzzleFlash
// [0x00020102] 
struct ATGMechaProjWeapAttachment_execProjWeapCauseMuzzleFlash_Parms
{
	struct FReplicatedEffectsInfo                      RepEffectsInfo;                                   		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	// class UUDKExplosionLight*                       CurrMuzzleFlashLight;                             		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UParticleSystemComponent*                 CurrMuzzleFlashPSC;                               		// 0x0014 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function MechaGame.TGMechaProjWeapAttachment.ThirdPersonProjFireEffects
// [0x00020102] 
struct ATGMechaProjWeapAttachment_execThirdPersonProjFireEffects_Parms
{
	struct FReplicatedEffectsInfo                      InProjWeapEffectsInfo;                            		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaProjWeapAttachment.DetachMuzzleFlash
// [0x00020102] 
struct ATGMechaProjWeapAttachment_execDetachMuzzleFlash_Parms
{
	// int                                             SocketIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaProjWeapAttachment.AttachMuzzleFlash
// [0x00020102] 
struct ATGMechaProjWeapAttachment_execAttachMuzzleFlash_Parms
{
	// int                                             SocketIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FName                                    SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function MechaGame.TGMechaShip.HideAttackEffect
// [0x00020102] 
struct ATGMechaShip_execHideAttackEffect_Parms
{
};

// Function MechaGame.TGMechaShip.PlayAttackEffect
// [0x00820102] 
struct ATGMechaShip_execPlayAttackEffect_Parms
{
	// struct FVector                                  StartPos;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndPos;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaShip.OnAttackNotification
// [0x00020102] 
struct ATGMechaShip_execOnAttackNotification_Parms
{
};

// Function MechaGame.TGMechaShip.NotifyAttack
// [0x00020002] 
struct ATGMechaShip_execNotifyAttack_Parms
{
};

// Function MechaGame.TGMechaShip.Tick
// [0x00820902] ( FUNC_Event )
struct ATGMechaShip_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  NextFrameDestLoc;                                 		// 0x0004 (0x000C) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaShip.ScriptGetTeamNum
// [0x00020902] ( FUNC_Event )
struct ATGMechaShip_eventScriptGetTeamNum_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaShip.SetAttackTarget
// [0x00020002] 
struct ATGMechaShip_execSetAttackTarget_Parms
{
	unsigned long                                      bAttack : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMechaShip.SetTarget
// [0x00020002] 
struct ATGMechaShip_execSetTarget_Parms
{
	class AMechaDestructibleItem*                      Item;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AMechaGame*                               Game;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaShip.UpdateTarget
// [0x00020002] 
struct ATGMechaShip_execUpdateTarget_Parms
{
};

// Function MechaGame.TGMechaShip.GetDamage
// [0x00020002] 
struct ATGMechaShip_execGetDamage_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGMechaDMGameReplicationInfo*            GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Damage;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Times;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaShip.TimerDamage
// [0x00020002] 
struct ATGMechaShip_execTimerDamage_Parms
{
};

// Function MechaGame.TGMechaShip.TimerHeal
// [0x00020002] 
struct ATGMechaShip_execTimerHeal_Parms
{
	// class ATGRealMecha*                             Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaShip.SetMove
// [0x00020002] 
struct ATGMechaShip_execSetMove_Parms
{
	unsigned long                                      bMove : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMechaShip.Reset
// [0x00020002] 
struct ATGMechaShip_execReset_Parms
{
};

// Function MechaGame.TGMechaShip.SetupMovement
// [0x00820002] 
struct ATGMechaShip_execSetupMovement_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  MoveDirection;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaShip.Initialize
// [0x00820002] 
struct ATGMechaShip_execInitialize_Parms
{
	// struct FVector                                  MoveDirection;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaShip.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGMechaShip_eventPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaShip.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGMechaShip_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaTeamMatch.CheckEndGame
// [0x00020002] 
struct ATGMechaTeamMatch_execCheckEndGame_Parms
{
	class APlayerReplicationInfo*                      Winner;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AController*                              P;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bLastTeam : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function MechaGame.TGMechaTeamMatch.SpawnDefaultPawnFor
// [0x00020002] 
struct ATGMechaTeamMatch_execSpawnDefaultPawnFor_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            StartSpot;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function MechaGame.TGMechaTeamMatch.RestartPlayer
// [0x00020002] 
struct ATGMechaTeamMatch_execRestartPlayer_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaTMPlayerController*               PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaTeamMatch.AddInventoryFor
// [0x00020800] ( FUNC_Event )
struct ATGMechaTeamMatch_eventAddInventoryFor_Parms
{
	class APawn*                                       PlayerPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaTeamMatch.StartMatch
// [0x00020002] 
struct ATGMechaTeamMatch_execStartMatch_Parms
{
	// class ATGMechaPickupFactory*                    Pickup;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaTeamMatch.UpdateGameSpecificSettings
// [0x00020802] ( FUNC_Event )
struct ATGMechaTeamMatch_eventUpdateGameSpecificSettings_Parms
{
	struct FGameSpecificSettings                       Settings;                                         		// 0x0000 (0x0028) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaTMPlayerController.UseXPSkill
// [0x00020002] 
struct ATGMechaTMPlayerController_execUseXPSkill_Parms
{
	// class ATGMechaTMPlayerReplicationInfo*          PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaTMGameReplicationInfo.ProcessCharacterData
// [0x00024120] 
struct ATGMechaTMGameReplicationInfo_execProcessCharacterData_Parms
{
	class ATGPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTeamChange : 1;                                  		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaTMGameReplicationInfo.BeginProcessCharacterData
// [0x00024100] 
struct ATGMechaTMGameReplicationInfo_execBeginProcessCharacterData_Parms
{
	class ATGPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTeamChange : 1;                                  		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function MechaGame.TGMechaTMGameReplicationInfo.StartProcessingCharacterData
// [0x00020100] 
struct ATGMechaTMGameReplicationInfo_execStartProcessingCharacterData_Parms
{
};

// Function MechaGame.TGMechaWeapAttachment_Electrowelding.PlayImpactEffects
// [0x00020100] 
struct ATGMechaWeapAttachment_Electrowelding_execPlayImpactEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeapAttachment_Electrowelding.Tick
// [0x00020902] ( FUNC_Event )
struct ATGMechaWeapAttachment_Electrowelding_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeapAttachment_Electrowelding.PlayReplicatedEffects
// [0x00020102] 
struct ATGMechaWeapAttachment_Electrowelding_execPlayReplicatedEffects_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeapAttachment_Electrowelding.SetFixingMechaEffect
// [0x00820102] 
struct ATGMechaWeapAttachment_Electrowelding_execSetFixingMechaEffect_Parms
{
	// class ATGRealMecha*                             FixingMecha;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  FixingPoint;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRot;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeapAttachment_Electrowelding.PlayFixingMechaEffect
// [0x00820102] 
struct ATGMechaWeapAttachment_Electrowelding_execPlayFixingMechaEffect_Parms
{
	// class ATGRealMecha*                             FixingMecha;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AMechaDestructibleItem*                   MechaCore;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  FixingPoint;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRot;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeapAttachment_Electrowelding.AttachToMecha
// [0x00020102] 
struct ATGMechaWeapAttachment_Electrowelding_execAttachToMecha_Parms
{
	class ATGRealMechaBase*                            AttachOwnerMecha;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeapAttachment_Electrowelding.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGMechaWeapAttachment_Electrowelding_eventPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaWeapAttachment_Aerogun.GetAllProjFireInfo
// [0x00820102] 
struct ATGMechaWeapAttachment_Aerogun_execGetAllProjFireInfo_Parms
{
	TArray< struct FMechaAeroProjFireInfo >            ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FVector                                  Loc;                                              		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x0018 (0x000C) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             CurrIndexRight;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             CurrIndexLeft;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	// TArray< struct FMechaAeroProjFireInfo >         FireInfoList;                                     		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FMechaAeroProjFireInfo                   CurrFireInfo;                                     		// 0x003C (0x0028) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeapAttachment_Aerogun.ProjWeapCauseMuzzleFlash
// [0x00020102] 
struct ATGMechaWeapAttachment_Aerogun_execProjWeapCauseMuzzleFlash_Parms
{
	struct FReplicatedEffectsInfo                      RepEffectsInfo;                                   		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	// class UUDKExplosionLight*                       CurrMuzzleFlashLight;                             		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UParticleSystemComponent*                 CurrMuzzleFlashPSC;                               		// 0x0014 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// int                                             Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeapAttachment_FlameThrower.CauseFlashEffect
// [0x00020100] 
struct ATGMechaWeapAttachment_FlameThrower_execCauseFlashEffect_Parms
{
	unsigned long                                      bBeginSprayFlame : 1;                             		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function MechaGame.TGMechaWeapAttachment_FlameThrower.TGAttachmentSoundLocalEx
// [0x00084102] 
struct ATGMechaWeapAttachment_FlameThrower_execTGAttachmentSoundLocalEx_Parms
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USoundCue*                                   AltLocalSound;                                    		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UAudioComponent*                             AC;                                               		// 0x0008 (0x0004) [0x0000000004000090]              ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )
	float                                              FadeInTime;                                       		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAllowSpatialization : 1;                         		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class UAudioComponent*                             ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// class ATGPlayerController*                      GPC;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	// class AActor*                                   SoundOwner;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeapAttachment_FlameThrower.ThirdPersonFireEffects
// [0x00020102] 
struct ATGMechaWeapAttachment_FlameThrower_execThirdPersonFireEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeapAttachment_FlameThrower.AttachToMecha
// [0x00020102] 
struct ATGMechaWeapAttachment_FlameThrower_execAttachToMecha_Parms
{
	class ATGRealMechaBase*                            AttachOwnerMecha;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGMechaWeap_FlameThrower*                FlameThrower;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeapAttachment_HPFDetector.DetachFrom
// [0x00020102] 
struct ATGMechaWeapAttachment_HPFDetector_execDetachFrom_Parms
{
	class USkeletalMeshComponent*                      MeshCpnt;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function MechaGame.TGMechaWeapAttachment_MachineGun.GetImpactEffect
// [0x00020102] 
struct ATGMechaWeapAttachment_MachineGun_execGetImpactEffect_Parms
{
	class UPhysicalMaterial*                           HitMaterial;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FMaterialImpactEffect                       ReturnValue;                                      		// 0x0004 (0x0038) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function MechaGame.TGMechaWeapAttachment_PenetrativeCannon.Tick
// [0x00020902] ( FUNC_Event )
struct ATGMechaWeapAttachment_PenetrativeCannon_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeapAttachment_PenetrativeCannon.PlayReplicatedEffects
// [0x00020102] 
struct ATGMechaWeapAttachment_PenetrativeCannon_execPlayReplicatedEffects_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeapAttachment_PenetrativeCannon.PlayLockingMechaEffect
// [0x00020102] 
struct ATGMechaWeapAttachment_PenetrativeCannon_execPlayLockingMechaEffect_Parms
{
	// class ATGRealMecha*                             Mecha;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGMechaWeapAttachment_PenetrativeCannon.PlayImpactEffects
// [0x00820102] 
struct ATGMechaWeapAttachment_PenetrativeCannon_execPlayImpactEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class UParticleSystemComponent*                 PSC;                                              		// 0x000C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// struct FVector                                  SpawnLocation;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotation;                                    		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FName                                    CurrEffectSocket;                                 		// 0x0028 (0x0008) [0x0000000000000000]              
	// class USkeletalMeshComponent*                   CurrMesh;                                         		// 0x0030 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function MechaGame.TGMechaWeapAttachment_PenetrativeCannon.GetImpactEffect
// [0x00020102] 
struct ATGMechaWeapAttachment_PenetrativeCannon_execGetImpactEffect_Parms
{
	class UPhysicalMaterial*                           HitMaterial;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FMaterialImpactEffect                       ReturnValue;                                      		// 0x0004 (0x0038) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function MechaGame.TGMechaWeapAttachment_PenetrativeCannon.SpawnTracerEffect
// [0x00020102] 
struct ATGMechaWeapAttachment_PenetrativeCannon_execSpawnTracerEffect_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeapAttachment_PenetrativeCannon.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGMechaWeapAttachment_PenetrativeCannon_eventPostBeginPlay_Parms
{
};

// Function MechaGame.TGMechaWeapAttachment_ShockCannon.ProjWeapCauseMuzzleFlash
// [0x00020100] 
struct ATGMechaWeapAttachment_ShockCannon_execProjWeapCauseMuzzleFlash_Parms
{
	struct FReplicatedEffectsInfo                      RepEffectsInfo;                                   		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function MechaGame.TGMechaWeapAttachment_ShockCannon.AttachMuzzleFlash
// [0x00020100] 
struct ATGMechaWeapAttachment_ShockCannon_execAttachMuzzleFlash_Parms
{
};

// Function MechaGame.TGMechaWeapAttachment_ShockCannon.GetPhysicalFireStartLoc
// [0x00824102] 
struct ATGMechaWeapAttachment_ShockCannon_execGetPhysicalFireStartLoc_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SpawnLocation;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotation;                                    		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function MechaGame.TGSeqAct_Bombing.Activated
// [0x00020802] ( FUNC_Event )
struct UTGSeqAct_Bombing_eventActivated_Parms
{
	// class AWorldInfo*                               WI;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGSeqAct_ResetAllPlayers.Activated
// [0x00020802] ( FUNC_Event )
struct UTGSeqAct_ResetAllPlayers_eventActivated_Parms
{
	// class AWorldInfo*                               WI;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGSeqAct_SetKeyTarget.Activated
// [0x00020802] ( FUNC_Event )
struct UTGSeqAct_SetKeyTarget_eventActivated_Parms
{
};

// Function MechaGame.TGSeqAct_SetMechaMaxFlyHeight.Activated
// [0x00020802] ( FUNC_Event )
struct UTGSeqAct_SetMechaMaxFlyHeight_eventActivated_Parms
{
	// class AWorldInfo*                               WI;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGSeqAct_SetStopCountDown.Activated
// [0x00020802] ( FUNC_Event )
struct UTGSeqAct_SetStopCountDown_eventActivated_Parms
{
	// class AWorldInfo*                               WI;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGSeqAct_SetTarget.Activated
// [0x00020802] ( FUNC_Event )
struct UTGSeqAct_SetTarget_eventActivated_Parms
{
	// class AWorldInfo*                               WI;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function MechaGame.TGSeqAct_SetupPlayerStart.Activated
// [0x00020802] ( FUNC_Event )
struct UTGSeqAct_SetupPlayerStart_eventActivated_Parms
{
	// class AWorldInfo*                               WI;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif