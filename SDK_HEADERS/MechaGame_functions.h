/*
#############################################################################################
# Assault Fire (1.0.0.26) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: MechaGame_functions.h
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

// Function MechaGame.MechaFactoryBase.GetTeamNum
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AMechaFactoryBase::GetTeamNum ( )
{
	static UFunction* pFnGetTeamNum = NULL;

	if ( ! pFnGetTeamNum )
		pFnGetTeamNum = (UFunction*) UObject::GObjObjects()->Data[ 208808 ];

	AMechaFactoryBase_execGetTeamNum_Parms GetTeamNum_Parms;

	pFnGetTeamNum->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTeamNum, &GetTeamNum_Parms, NULL );

	pFnGetTeamNum->FunctionFlags |= 0x400;

	return GetTeamNum_Parms.ReturnValue;
};

// Function MechaGame.MechaFactoryBase.SetHUDLocation
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// struct FVector                 NewHUDLocation                 ( CPF_Parm )

void AMechaFactoryBase::SetHUDLocation ( struct FVector NewHUDLocation )
{
	static UFunction* pFnSetHUDLocation = NULL;

	if ( ! pFnSetHUDLocation )
		pFnSetHUDLocation = (UFunction*) UObject::GObjObjects()->Data[ 208806 ];

	AMechaFactoryBase_execSetHUDLocation_Parms SetHUDLocation_Parms;
	memcpy ( &SetHUDLocation_Parms.NewHUDLocation, &NewHUDLocation, 0xC );

	pFnSetHUDLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetHUDLocation, &SetHUDLocation_Parms, NULL );

	pFnSetHUDLocation->FunctionFlags |= 0x400;
};

// Function MechaGame.MechaFactoryBase.SpawnVehicle
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AMechaFactoryBase::eventSpawnVehicle ( )
{
	static UFunction* pFnSpawnVehicle = NULL;

	if ( ! pFnSpawnVehicle )
		pFnSpawnVehicle = (UFunction*) UObject::GObjObjects()->Data[ 208805 ];

	AMechaFactoryBase_eventSpawnVehicle_Parms SpawnVehicle_Parms;

	this->ProcessEvent ( pFnSpawnVehicle, &SpawnVehicle_Parms, NULL );
};

// Function MechaGame.MechaGame.CheckAssistant
// [0x00020002] 
// Parameters infos:
// class ATGRealMecha*            KilledMecha                    ( CPF_Parm )
// class ATGMechaPlayerReplicationInfo* KillerPRI                      ( CPF_Parm )

void AMechaGame::CheckAssistant ( class ATGRealMecha* KilledMecha, class ATGMechaPlayerReplicationInfo* KillerPRI )
{
	static UFunction* pFnCheckAssistant = NULL;

	if ( ! pFnCheckAssistant )
		pFnCheckAssistant = (UFunction*) UObject::GObjObjects()->Data[ 208888 ];

	AMechaGame_execCheckAssistant_Parms CheckAssistant_Parms;
	CheckAssistant_Parms.KilledMecha = KilledMecha;
	CheckAssistant_Parms.KillerPRI = KillerPRI;

	this->ProcessEvent ( pFnCheckAssistant, &CheckAssistant_Parms, NULL );
};

// Function MechaGame.MechaGame.Killed
// [0x00020002] 
// Parameters infos:
// class AController*             Killer                         ( CPF_Parm )
// class AController*             KilledPlayer                   ( CPF_Parm )
// class APawn*                   KilledPawn                     ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void AMechaGame::Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType )
{
	static UFunction* pFnKilled = NULL;

	if ( ! pFnKilled )
		pFnKilled = (UFunction*) UObject::GObjObjects()->Data[ 208879 ];

	AMechaGame_execKilled_Parms Killed_Parms;
	Killed_Parms.Killer = Killer;
	Killed_Parms.KilledPlayer = KilledPlayer;
	Killed_Parms.KilledPawn = KilledPawn;
	Killed_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnKilled, &Killed_Parms, NULL );
};

// Function MechaGame.MechaGame.CalcACE
// [0x00020002] 
// Parameters infos:

void AMechaGame::CalcACE ( )
{
	static UFunction* pFnCalcACE = NULL;

	if ( ! pFnCalcACE )
		pFnCalcACE = (UFunction*) UObject::GObjObjects()->Data[ 208873 ];

	AMechaGame_execCalcACE_Parms CalcACE_Parms;

	this->ProcessEvent ( pFnCalcACE, &CalcACE_Parms, NULL );
};

// Function MechaGame.MechaGame.CalcMVP
// [0x00020002] 
// Parameters infos:

void AMechaGame::CalcMVP ( )
{
	static UFunction* pFnCalcMVP = NULL;

	if ( ! pFnCalcMVP )
		pFnCalcMVP = (UFunction*) UObject::GObjObjects()->Data[ 208864 ];

	AMechaGame_execCalcMVP_Parms CalcMVP_Parms;

	this->ProcessEvent ( pFnCalcMVP, &CalcMVP_Parms, NULL );
};

// Function MechaGame.MechaGame.EndGame
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  Winner                         ( CPF_Parm )
// struct FString                 Reason                         ( CPF_Parm | CPF_NeedCtorLink )

void AMechaGame::EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
{
	static UFunction* pFnEndGame = NULL;

	if ( ! pFnEndGame )
		pFnEndGame = (UFunction*) UObject::GObjObjects()->Data[ 208861 ];

	AMechaGame_execEndGame_Parms EndGame_Parms;
	EndGame_Parms.Winner = Winner;
	memcpy ( &EndGame_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnEndGame, &EndGame_Parms, NULL );
};

// Function MechaGame.MechaGame.ScoreKill
// [0x00020002] 
// Parameters infos:
// class AController*             Killer                         ( CPF_Parm )
// class AController*             Other                          ( CPF_Parm )

void AMechaGame::ScoreKill ( class AController* Killer, class AController* Other )
{
	static UFunction* pFnScoreKill = NULL;

	if ( ! pFnScoreKill )
		pFnScoreKill = (UFunction*) UObject::GObjObjects()->Data[ 208857 ];

	AMechaGame_execScoreKill_Parms ScoreKill_Parms;
	ScoreKill_Parms.Killer = Killer;
	ScoreKill_Parms.Other = Other;

	this->ProcessEvent ( pFnScoreKill, &ScoreKill_Parms, NULL );
};

// Function MechaGame.MechaGame.SetMechaMaxFlayHeight
// [0x00020002] 
// Parameters infos:
// float                          MaxHeight                      ( CPF_Parm )

void AMechaGame::SetMechaMaxFlayHeight ( float MaxHeight )
{
	static UFunction* pFnSetMechaMaxFlayHeight = NULL;

	if ( ! pFnSetMechaMaxFlayHeight )
		pFnSetMechaMaxFlayHeight = (UFunction*) UObject::GObjObjects()->Data[ 208855 ];

	AMechaGame_execSetMechaMaxFlayHeight_Parms SetMechaMaxFlayHeight_Parms;
	SetMechaMaxFlayHeight_Parms.MaxHeight = MaxHeight;

	this->ProcessEvent ( pFnSetMechaMaxFlayHeight, &SetMechaMaxFlayHeight_Parms, NULL );
};

// Function MechaGame.MechaGame.AddDefaultInventoryEx
// [0x00024000] 
// Parameters infos:
// class APawn*                   PlayerPawn                     ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )

void AMechaGame::AddDefaultInventoryEx ( class APawn* PlayerPawn, int Count )
{
	static UFunction* pFnAddDefaultInventoryEx = NULL;

	if ( ! pFnAddDefaultInventoryEx )
		pFnAddDefaultInventoryEx = (UFunction*) UObject::GObjObjects()->Data[ 208852 ];

	AMechaGame_execAddDefaultInventoryEx_Parms AddDefaultInventoryEx_Parms;
	AddDefaultInventoryEx_Parms.PlayerPawn = PlayerPawn;
	AddDefaultInventoryEx_Parms.Count = Count;

	this->ProcessEvent ( pFnAddDefaultInventoryEx, &AddDefaultInventoryEx_Parms, NULL );
};

// Function MechaGame.MechaGame.NotifyItemDestroyed
// [0x00020000] 
// Parameters infos:
// class AMechaDestructibleItem*  Item                           ( CPF_Parm )
// class AMechaGamePlayerController* InstigatorPC                   ( CPF_Parm )

void AMechaGame::NotifyItemDestroyed ( class AMechaDestructibleItem* Item, class AMechaGamePlayerController* InstigatorPC )
{
	static UFunction* pFnNotifyItemDestroyed = NULL;

	if ( ! pFnNotifyItemDestroyed )
		pFnNotifyItemDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 208849 ];

	AMechaGame_execNotifyItemDestroyed_Parms NotifyItemDestroyed_Parms;
	NotifyItemDestroyed_Parms.Item = Item;
	NotifyItemDestroyed_Parms.InstigatorPC = InstigatorPC;

	this->ProcessEvent ( pFnNotifyItemDestroyed, &NotifyItemDestroyed_Parms, NULL );
};

// Function MechaGame.MechaGame.NotifyCurrentTarget
// [0x00020000] 
// Parameters infos:
// class AMechaDestructibleItem*  Item                           ( CPF_Parm )

void AMechaGame::NotifyCurrentTarget ( class AMechaDestructibleItem* Item )
{
	static UFunction* pFnNotifyCurrentTarget = NULL;

	if ( ! pFnNotifyCurrentTarget )
		pFnNotifyCurrentTarget = (UFunction*) UObject::GObjObjects()->Data[ 208847 ];

	AMechaGame_execNotifyCurrentTarget_Parms NotifyCurrentTarget_Parms;
	NotifyCurrentTarget_Parms.Item = Item;

	this->ProcessEvent ( pFnNotifyCurrentTarget, &NotifyCurrentTarget_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.ReceiveTextInfo
// [0x010201C0] 
// Parameters infos:
// unsigned char                  Type                           ( CPF_Parm )

void AMechaGamePlayerController::ReceiveTextInfo ( unsigned char Type )
{
	static UFunction* pFnReceiveTextInfo = NULL;

	if ( ! pFnReceiveTextInfo )
		pFnReceiveTextInfo = (UFunction*) UObject::GObjObjects()->Data[ 209216 ];

	AMechaGamePlayerController_execReceiveTextInfo_Parms ReceiveTextInfo_Parms;
	ReceiveTextInfo_Parms.Type = Type;

	this->ProcessEvent ( pFnReceiveTextInfo, &ReceiveTextInfo_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.ReceiveParticleMessage
// [0x010201C0] 
// Parameters infos:
// int                            MessageSwitch                  ( CPF_Parm )

void AMechaGamePlayerController::ReceiveParticleMessage ( int MessageSwitch )
{
	static UFunction* pFnReceiveParticleMessage = NULL;

	if ( ! pFnReceiveParticleMessage )
		pFnReceiveParticleMessage = (UFunction*) UObject::GObjObjects()->Data[ 209214 ];

	AMechaGamePlayerController_execReceiveParticleMessage_Parms ReceiveParticleMessage_Parms;
	ReceiveParticleMessage_Parms.MessageSwitch = MessageSwitch;

	this->ProcessEvent ( pFnReceiveParticleMessage, &ReceiveParticleMessage_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.ReinforceWeapon
// [0x00020000] 
// Parameters infos:
// float                          DamageScaleDelta               ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void AMechaGamePlayerController::ReinforceWeapon ( float DamageScaleDelta, float Duration )
{
	static UFunction* pFnReinforceWeapon = NULL;

	if ( ! pFnReinforceWeapon )
		pFnReinforceWeapon = (UFunction*) UObject::GObjObjects()->Data[ 209211 ];

	AMechaGamePlayerController_execReinforceWeapon_Parms ReinforceWeapon_Parms;
	ReinforceWeapon_Parms.DamageScaleDelta = DamageScaleDelta;
	ReinforceWeapon_Parms.Duration = Duration;

	this->ProcessEvent ( pFnReinforceWeapon, &ReinforceWeapon_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.NotifySkillUsed
// [0x00020000] 
// Parameters infos:
// class AMechaSkillBase*         Skill                          ( CPF_Parm )

void AMechaGamePlayerController::NotifySkillUsed ( class AMechaSkillBase* Skill )
{
	static UFunction* pFnNotifySkillUsed = NULL;

	if ( ! pFnNotifySkillUsed )
		pFnNotifySkillUsed = (UFunction*) UObject::GObjObjects()->Data[ 209209 ];

	AMechaGamePlayerController_execNotifySkillUsed_Parms NotifySkillUsed_Parms;
	NotifySkillUsed_Parms.Skill = Skill;

	this->ProcessEvent ( pFnNotifySkillUsed, &NotifySkillUsed_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.TimerServerToClientDoSpecialMove
// [0x00020002] 
// Parameters infos:

void AMechaGamePlayerController::TimerServerToClientDoSpecialMove ( )
{
	static UFunction* pFnTimerServerToClientDoSpecialMove = NULL;

	if ( ! pFnTimerServerToClientDoSpecialMove )
		pFnTimerServerToClientDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 209208 ];

	AMechaGamePlayerController_execTimerServerToClientDoSpecialMove_Parms TimerServerToClientDoSpecialMove_Parms;

	this->ProcessEvent ( pFnTimerServerToClientDoSpecialMove, &TimerServerToClientDoSpecialMove_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.ServerToClientDoSpecialMove
// [0x010201C3] ( FUNC_Final )
// Parameters infos:
// struct FMechaSpecialMoveStruct NewMoveStruct                  ( CPF_Parm )
// unsigned long                  bForceMove                     ( CPF_Parm )

void AMechaGamePlayerController::ServerToClientDoSpecialMove ( struct FMechaSpecialMoveStruct NewMoveStruct, unsigned long bForceMove )
{
	static UFunction* pFnServerToClientDoSpecialMove = NULL;

	if ( ! pFnServerToClientDoSpecialMove )
		pFnServerToClientDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 209201 ];

	AMechaGamePlayerController_execServerToClientDoSpecialMove_Parms ServerToClientDoSpecialMove_Parms;
	memcpy ( &ServerToClientDoSpecialMove_Parms.NewMoveStruct, &NewMoveStruct, 0x10 );
	ServerToClientDoSpecialMove_Parms.bForceMove = bForceMove;

	this->ProcessEvent ( pFnServerToClientDoSpecialMove, &ServerToClientDoSpecialMove_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.ServerDictateAdditivSpecialMove
// [0x00824803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// unsigned char                  NewMove                        ( CPF_Parm )
// int                            InSpecialMoveFlags             ( CPF_OptionalParm | CPF_Parm )

void AMechaGamePlayerController::eventServerDictateAdditivSpecialMove ( unsigned char NewMove, int InSpecialMoveFlags )
{
	static UFunction* pFnServerDictateAdditivSpecialMove = NULL;

	if ( ! pFnServerDictateAdditivSpecialMove )
		pFnServerDictateAdditivSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 209202 ];

	AMechaGamePlayerController_eventServerDictateAdditivSpecialMove_Parms ServerDictateAdditivSpecialMove_Parms;
	ServerDictateAdditivSpecialMove_Parms.NewMove = NewMove;
	ServerDictateAdditivSpecialMove_Parms.InSpecialMoveFlags = InSpecialMoveFlags;

	this->ProcessEvent ( pFnServerDictateAdditivSpecialMove, &ServerDictateAdditivSpecialMove_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.ServerDictatSpecialMove
// [0x00824803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// unsigned char                  NewMove                        ( CPF_Parm )
// int                            InSpecialMoveFlags             ( CPF_OptionalParm | CPF_Parm )

void AMechaGamePlayerController::eventServerDictatSpecialMove ( unsigned char NewMove, int InSpecialMoveFlags )
{
	static UFunction* pFnServerDictatSpecialMove = NULL;

	if ( ! pFnServerDictatSpecialMove )
		pFnServerDictatSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 208365 ];

	AMechaGamePlayerController_eventServerDictatSpecialMove_Parms ServerDictatSpecialMove_Parms;
	ServerDictatSpecialMove_Parms.NewMove = NewMove;
	ServerDictatSpecialMove_Parms.InSpecialMoveFlags = InSpecialMoveFlags;

	this->ProcessEvent ( pFnServerDictatSpecialMove, &ServerDictatSpecialMove_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.ClientToServerDoSpecialMove
// [0x00A200C3] ( FUNC_Final )
// Parameters infos:
// struct FMechaSpecialMoveStruct NewMoveStruct                  ( CPF_Parm )
// unsigned long                  bForceMove                     ( CPF_Parm )
// int                            RotYaw                         ( CPF_Parm )

void AMechaGamePlayerController::ClientToServerDoSpecialMove ( struct FMechaSpecialMoveStruct NewMoveStruct, unsigned long bForceMove, int RotYaw )
{
	static UFunction* pFnClientToServerDoSpecialMove = NULL;

	if ( ! pFnClientToServerDoSpecialMove )
		pFnClientToServerDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 209189 ];

	AMechaGamePlayerController_execClientToServerDoSpecialMove_Parms ClientToServerDoSpecialMove_Parms;
	memcpy ( &ClientToServerDoSpecialMove_Parms.NewMoveStruct, &NewMoveStruct, 0x10 );
	ClientToServerDoSpecialMove_Parms.bForceMove = bForceMove;
	ClientToServerDoSpecialMove_Parms.RotYaw = RotYaw;

	this->ProcessEvent ( pFnClientToServerDoSpecialMove, &ClientToServerDoSpecialMove_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.DoAdditivSpecialMove
// [0x00824803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// unsigned char                  NewMove                        ( CPF_Parm )
// unsigned long                  bForceMove                     ( CPF_OptionalParm | CPF_Parm )
// int                            InSpecialMoveFlags             ( CPF_OptionalParm | CPF_Parm )

void AMechaGamePlayerController::eventDoAdditivSpecialMove ( unsigned char NewMove, unsigned long bForceMove, int InSpecialMoveFlags )
{
	static UFunction* pFnDoAdditivSpecialMove = NULL;

	if ( ! pFnDoAdditivSpecialMove )
		pFnDoAdditivSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 208360 ];

	AMechaGamePlayerController_eventDoAdditivSpecialMove_Parms DoAdditivSpecialMove_Parms;
	DoAdditivSpecialMove_Parms.NewMove = NewMove;
	DoAdditivSpecialMove_Parms.bForceMove = bForceMove;
	DoAdditivSpecialMove_Parms.InSpecialMoveFlags = InSpecialMoveFlags;

	this->ProcessEvent ( pFnDoAdditivSpecialMove, &DoAdditivSpecialMove_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.DoSpecialMove
// [0x00824803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// unsigned char                  NewMove                        ( CPF_Parm )
// unsigned long                  bForceMove                     ( CPF_OptionalParm | CPF_Parm )
// int                            InSpecialMoveFlags             ( CPF_OptionalParm | CPF_Parm )

void AMechaGamePlayerController::eventDoSpecialMove ( unsigned char NewMove, unsigned long bForceMove, int InSpecialMoveFlags )
{
	static UFunction* pFnDoSpecialMove = NULL;

	if ( ! pFnDoSpecialMove )
		pFnDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 208355 ];

	AMechaGamePlayerController_eventDoSpecialMove_Parms DoSpecialMove_Parms;
	DoSpecialMove_Parms.NewMove = NewMove;
	DoSpecialMove_Parms.bForceMove = bForceMove;
	DoSpecialMove_Parms.InSpecialMoveFlags = InSpecialMoveFlags;

	this->ProcessEvent ( pFnDoSpecialMove, &DoSpecialMove_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.ServerSetHealth
// [0x00220042] 
// Parameters infos:
// int                            NewHealth                      ( CPF_Parm )

void AMechaGamePlayerController::ServerSetHealth ( int NewHealth )
{
	static UFunction* pFnServerSetHealth = NULL;

	if ( ! pFnServerSetHealth )
		pFnServerSetHealth = (UFunction*) UObject::GObjObjects()->Data[ 209183 ];

	AMechaGamePlayerController_execServerSetHealth_Parms ServerSetHealth_Parms;
	ServerSetHealth_Parms.NewHealth = NewHealth;

	this->ProcessEvent ( pFnServerSetHealth, &ServerSetHealth_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.SetHealth
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// int                            NewHealth                      ( CPF_Parm )

void AMechaGamePlayerController::SetHealth ( int NewHealth )
{
	static UFunction* pFnSetHealth = NULL;

	if ( ! pFnSetHealth )
		pFnSetHealth = (UFunction*) UObject::GObjObjects()->Data[ 209181 ];

	AMechaGamePlayerController_execSetHealth_Parms SetHealth_Parms;
	SetHealth_Parms.NewHealth = NewHealth;

	this->ProcessEvent ( pFnSetHealth, &SetHealth_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.ClientHearSound
// [0x01024942] ( FUNC_Event )
// Parameters infos:
// class USoundCue*               ASound                         ( CPF_Parm )
// class AActor*                  SourceActor                    ( CPF_Parm )
// struct FVector                 SourceLocation                 ( CPF_Parm )
// unsigned long                  bStopWhenOwnerDestroyed        ( CPF_Parm )
// unsigned long                  bIsOccluded                    ( CPF_OptionalParm | CPF_Parm )

void AMechaGamePlayerController::eventClientHearSound ( class USoundCue* ASound, class AActor* SourceActor, struct FVector SourceLocation, unsigned long bStopWhenOwnerDestroyed, unsigned long bIsOccluded )
{
	static UFunction* pFnClientHearSound = NULL;

	if ( ! pFnClientHearSound )
		pFnClientHearSound = (UFunction*) UObject::GObjObjects()->Data[ 209172 ];

	AMechaGamePlayerController_eventClientHearSound_Parms ClientHearSound_Parms;
	ClientHearSound_Parms.ASound = ASound;
	ClientHearSound_Parms.SourceActor = SourceActor;
	memcpy ( &ClientHearSound_Parms.SourceLocation, &SourceLocation, 0xC );
	ClientHearSound_Parms.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;
	ClientHearSound_Parms.bIsOccluded = bIsOccluded;

	this->ProcessEvent ( pFnClientHearSound, &ClientHearSound_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.ClientSetRespawnStartTime
// [0x010201C2] 
// Parameters infos:
// float                          RespTime                       ( CPF_Parm )
// float                          RespDelay                      ( CPF_Parm )

void AMechaGamePlayerController::ClientSetRespawnStartTime ( float RespTime, float RespDelay )
{
	static UFunction* pFnClientSetRespawnStartTime = NULL;

	if ( ! pFnClientSetRespawnStartTime )
		pFnClientSetRespawnStartTime = (UFunction*) UObject::GObjObjects()->Data[ 209169 ];

	AMechaGamePlayerController_execClientSetRespawnStartTime_Parms ClientSetRespawnStartTime_Parms;
	ClientSetRespawnStartTime_Parms.RespTime = RespTime;
	ClientSetRespawnStartTime_Parms.RespDelay = RespDelay;

	this->ProcessEvent ( pFnClientSetRespawnStartTime, &ClientSetRespawnStartTime_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.NotifyViewTargetUpdate
// [0x00020102] 
// Parameters infos:

void AMechaGamePlayerController::NotifyViewTargetUpdate ( )
{
	static UFunction* pFnNotifyViewTargetUpdate = NULL;

	if ( ! pFnNotifyViewTargetUpdate )
		pFnNotifyViewTargetUpdate = (UFunction*) UObject::GObjObjects()->Data[ 209166 ];

	AMechaGamePlayerController_execNotifyViewTargetUpdate_Parms NotifyViewTargetUpdate_Parms;

	this->ProcessEvent ( pFnNotifyViewTargetUpdate, &NotifyViewTargetUpdate_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.ClientSetViewTarget
// [0x010249C2] ( FUNC_Event )
// Parameters infos:
// class AActor*                  A                              ( CPF_Parm )
// struct FViewTargetTransitionParams TransitionParams               ( CPF_OptionalParm | CPF_Parm )

void AMechaGamePlayerController::eventClientSetViewTarget ( class AActor* A, struct FViewTargetTransitionParams TransitionParams )
{
	static UFunction* pFnClientSetViewTarget = NULL;

	if ( ! pFnClientSetViewTarget )
		pFnClientSetViewTarget = (UFunction*) UObject::GObjObjects()->Data[ 209163 ];

	AMechaGamePlayerController_eventClientSetViewTarget_Parms ClientSetViewTarget_Parms;
	ClientSetViewTarget_Parms.A = A;
	memcpy ( &ClientSetViewTarget_Parms.TransitionParams, &TransitionParams, 0x10 );

	this->ProcessEvent ( pFnClientSetViewTarget, &ClientSetViewTarget_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.ProcessFrozenStart
// [0x00420002] 
// Parameters infos:
// struct FVector                 newAccel                       ( CPF_Parm | CPF_OutParm )

void AMechaGamePlayerController::ProcessFrozenStart ( struct FVector* newAccel )
{
	static UFunction* pFnProcessFrozenStart = NULL;

	if ( ! pFnProcessFrozenStart )
		pFnProcessFrozenStart = (UFunction*) UObject::GObjObjects()->Data[ 209140 ];

	AMechaGamePlayerController_execProcessFrozenStart_Parms ProcessFrozenStart_Parms;

	this->ProcessEvent ( pFnProcessFrozenStart, &ProcessFrozenStart_Parms, NULL );

	if ( newAccel )
		memcpy ( newAccel, &ProcessFrozenStart_Parms.newAccel, 0xC );
};

// Function MechaGame.MechaGamePlayerController.GetFOVAngle
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AMechaGamePlayerController::eventGetFOVAngle ( )
{
	static UFunction* pFnGetFOVAngle = NULL;

	if ( ! pFnGetFOVAngle )
		pFnGetFOVAngle = (UFunction*) UObject::GObjObjects()->Data[ 209120 ];

	AMechaGamePlayerController_eventGetFOVAngle_Parms GetFOVAngle_Parms;

	this->ProcessEvent ( pFnGetFOVAngle, &GetFOVAngle_Parms, NULL );

	return GetFOVAngle_Parms.ReturnValue;
};

// Function MechaGame.MechaGamePlayerController.GetPlayerViewPoint
// [0x00420902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 POVLocation                    ( CPF_Parm | CPF_OutParm )
// struct FRotator                POVRotation                    ( CPF_Parm | CPF_OutParm )

void AMechaGamePlayerController::eventGetPlayerViewPoint ( struct FVector* POVLocation, struct FRotator* POVRotation )
{
	static UFunction* pFnGetPlayerViewPoint = NULL;

	if ( ! pFnGetPlayerViewPoint )
		pFnGetPlayerViewPoint = (UFunction*) UObject::GObjObjects()->Data[ 209115 ];

	AMechaGamePlayerController_eventGetPlayerViewPoint_Parms GetPlayerViewPoint_Parms;

	this->ProcessEvent ( pFnGetPlayerViewPoint, &GetPlayerViewPoint_Parms, NULL );

	if ( POVLocation )
		memcpy ( POVLocation, &GetPlayerViewPoint_Parms.POVLocation, 0xC );

	if ( POVRotation )
		memcpy ( POVRotation, &GetPlayerViewPoint_Parms.POVRotation, 0xC );
};

// Function MechaGame.MechaGamePlayerController.NotifySkillCreated
// [0x00020000] 
// Parameters infos:
// class AMechaSkillBase*         Skill                          ( CPF_Parm )

void AMechaGamePlayerController::NotifySkillCreated ( class AMechaSkillBase* Skill )
{
	static UFunction* pFnNotifySkillCreated = NULL;

	if ( ! pFnNotifySkillCreated )
		pFnNotifySkillCreated = (UFunction*) UObject::GObjObjects()->Data[ 209112 ];

	AMechaGamePlayerController_execNotifySkillCreated_Parms NotifySkillCreated_Parms;
	NotifySkillCreated_Parms.Skill = Skill;

	this->ProcessEvent ( pFnNotifySkillCreated, &NotifySkillCreated_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.DrawObjectives
// [0x00020102] 
// Parameters infos:
// class AHUD*                    H                              ( CPF_Parm )

void AMechaGamePlayerController::DrawObjectives ( class AHUD* H )
{
	static UFunction* pFnDrawObjectives = NULL;

	if ( ! pFnDrawObjectives )
		pFnDrawObjectives = (UFunction*) UObject::GObjObjects()->Data[ 209108 ];

	AMechaGamePlayerController_execDrawObjectives_Parms DrawObjectives_Parms;
	DrawObjectives_Parms.H = H;

	this->ProcessEvent ( pFnDrawObjectives, &DrawObjectives_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.DrawHUD
// [0x00020002] 
// Parameters infos:
// class AHUD*                    H                              ( CPF_Parm )

void AMechaGamePlayerController::DrawHUD ( class AHUD* H )
{
	static UFunction* pFnDrawHUD = NULL;

	if ( ! pFnDrawHUD )
		pFnDrawHUD = (UFunction*) UObject::GObjObjects()->Data[ 209103 ];

	AMechaGamePlayerController_execDrawHUD_Parms DrawHUD_Parms;
	DrawHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawHUD, &DrawHUD_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.ClientReset
// [0x010201C2] 
// Parameters infos:

void AMechaGamePlayerController::ClientReset ( )
{
	static UFunction* pFnClientReset = NULL;

	if ( ! pFnClientReset )
		pFnClientReset = (UFunction*) UObject::GObjObjects()->Data[ 209101 ];

	AMechaGamePlayerController_execClientReset_Parms ClientReset_Parms;

	this->ProcessEvent ( pFnClientReset, &ClientReset_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.ClientRestart
// [0x010201C2] 
// Parameters infos:
// class APawn*                   NewPawn                        ( CPF_Parm )

void AMechaGamePlayerController::ClientRestart ( class APawn* NewPawn )
{
	static UFunction* pFnClientRestart = NULL;

	if ( ! pFnClientRestart )
		pFnClientRestart = (UFunction*) UObject::GObjObjects()->Data[ 209099 ];

	AMechaGamePlayerController_execClientRestart_Parms ClientRestart_Parms;
	ClientRestart_Parms.NewPawn = NewPawn;

	this->ProcessEvent ( pFnClientRestart, &ClientRestart_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.ClearObjectives
// [0x00020102] 
// Parameters infos:

void AMechaGamePlayerController::ClearObjectives ( )
{
	static UFunction* pFnClearObjectives = NULL;

	if ( ! pFnClearObjectives )
		pFnClearObjectives = (UFunction*) UObject::GObjObjects()->Data[ 209098 ];

	AMechaGamePlayerController_execClearObjectives_Parms ClearObjectives_Parms;

	this->ProcessEvent ( pFnClearObjectives, &ClearObjectives_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.IsObjectiveInsight
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AMecha*                  Mecha                          ( CPF_Parm )

bool AMechaGamePlayerController::IsObjectiveInsight ( class AMecha* Mecha )
{
	static UFunction* pFnIsObjectiveInsight = NULL;

	if ( ! pFnIsObjectiveInsight )
		pFnIsObjectiveInsight = (UFunction*) UObject::GObjObjects()->Data[ 209094 ];

	AMechaGamePlayerController_execIsObjectiveInsight_Parms IsObjectiveInsight_Parms;
	IsObjectiveInsight_Parms.Mecha = Mecha;

	this->ProcessEvent ( pFnIsObjectiveInsight, &IsObjectiveInsight_Parms, NULL );

	return IsObjectiveInsight_Parms.ReturnValue;
};

// Function MechaGame.MechaGamePlayerController.AddObjective
// [0x00820102] 
// Parameters infos:
// class AMecha*                  Mecha                          ( CPF_Parm )
// unsigned long                  bInSight                       ( CPF_Parm )
// unsigned long                  bEnemy                         ( CPF_Parm )

void AMechaGamePlayerController::AddObjective ( class AMecha* Mecha, unsigned long bInSight, unsigned long bEnemy )
{
	static UFunction* pFnAddObjective = NULL;

	if ( ! pFnAddObjective )
		pFnAddObjective = (UFunction*) UObject::GObjObjects()->Data[ 209088 ];

	AMechaGamePlayerController_execAddObjective_Parms AddObjective_Parms;
	AddObjective_Parms.Mecha = Mecha;
	AddObjective_Parms.bInSight = bInSight;
	AddObjective_Parms.bEnemy = bEnemy;

	this->ProcessEvent ( pFnAddObjective, &AddObjective_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerController.PlayerTick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AMechaGamePlayerController::eventPlayerTick ( float DeltaTime )
{
	static UFunction* pFnPlayerTick = NULL;

	if ( ! pFnPlayerTick )
		pFnPlayerTick = (UFunction*) UObject::GObjObjects()->Data[ 209085 ];

	AMechaGamePlayerController_eventPlayerTick_Parms PlayerTick_Parms;
	PlayerTick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnPlayerTick, &PlayerTick_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerReplicationInfo.NeedLicenseFor
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  NewType                        ( CPF_Parm )

bool AMechaGamePlayerReplicationInfo::NeedLicenseFor ( unsigned char NewType )
{
	static UFunction* pFnNeedLicenseFor = NULL;

	if ( ! pFnNeedLicenseFor )
		pFnNeedLicenseFor = (UFunction*) UObject::GObjObjects()->Data[ 209294 ];

	AMechaGamePlayerReplicationInfo_execNeedLicenseFor_Parms NeedLicenseFor_Parms;
	NeedLicenseFor_Parms.NewType = NewType;

	this->ProcessEvent ( pFnNeedLicenseFor, &NeedLicenseFor_Parms, NULL );

	return NeedLicenseFor_Parms.ReturnValue;
};

// Function MechaGame.MechaGamePlayerReplicationInfo.HasLicenseFor
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  NewType                        ( CPF_Parm )

bool AMechaGamePlayerReplicationInfo::HasLicenseFor ( unsigned char NewType )
{
	static UFunction* pFnHasLicenseFor = NULL;

	if ( ! pFnHasLicenseFor )
		pFnHasLicenseFor = (UFunction*) UObject::GObjObjects()->Data[ 209290 ];

	AMechaGamePlayerReplicationInfo_execHasLicenseFor_Parms HasLicenseFor_Parms;
	HasLicenseFor_Parms.NewType = NewType;

	this->ProcessEvent ( pFnHasLicenseFor, &HasLicenseFor_Parms, NULL );

	return HasLicenseFor_Parms.ReturnValue;
};

// Function MechaGame.MechaGamePlayerReplicationInfo.HasMechaLicense
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LicenseType                    ( CPF_Parm )

bool AMechaGamePlayerReplicationInfo::HasMechaLicense ( unsigned char LicenseType )
{
	static UFunction* pFnHasMechaLicense = NULL;

	if ( ! pFnHasMechaLicense )
		pFnHasMechaLicense = (UFunction*) UObject::GObjObjects()->Data[ 209286 ];

	AMechaGamePlayerReplicationInfo_execHasMechaLicense_Parms HasMechaLicense_Parms;
	HasMechaLicense_Parms.LicenseType = LicenseType;

	this->ProcessEvent ( pFnHasMechaLicense, &HasMechaLicense_Parms, NULL );

	return HasMechaLicense_Parms.ReturnValue;
};

// Function MechaGame.MechaGamePlayerReplicationInfo.AddMechaLicense
// [0x00020002] 
// Parameters infos:
// unsigned char                  LicenseType                    ( CPF_Parm )

void AMechaGamePlayerReplicationInfo::AddMechaLicense ( unsigned char LicenseType )
{
	static UFunction* pFnAddMechaLicense = NULL;

	if ( ! pFnAddMechaLicense )
		pFnAddMechaLicense = (UFunction*) UObject::GObjObjects()->Data[ 209283 ];

	AMechaGamePlayerReplicationInfo_execAddMechaLicense_Parms AddMechaLicense_Parms;
	AddMechaLicense_Parms.LicenseType = LicenseType;

	this->ProcessEvent ( pFnAddMechaLicense, &AddMechaLicense_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerReplicationInfo.NotifyMechaSelected
// [0x00020002] 
// Parameters infos:
// unsigned char                  Type                           ( CPF_Parm )

void AMechaGamePlayerReplicationInfo::NotifyMechaSelected ( unsigned char Type )
{
	static UFunction* pFnNotifyMechaSelected = NULL;

	if ( ! pFnNotifyMechaSelected )
		pFnNotifyMechaSelected = (UFunction*) UObject::GObjObjects()->Data[ 209281 ];

	AMechaGamePlayerReplicationInfo_execNotifyMechaSelected_Parms NotifyMechaSelected_Parms;
	NotifyMechaSelected_Parms.Type = Type;

	this->ProcessEvent ( pFnNotifyMechaSelected, &NotifyMechaSelected_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerReplicationInfo.SetMechaType
// [0x00020002] 
// Parameters infos:
// unsigned char                  NewType                        ( CPF_Parm )

void AMechaGamePlayerReplicationInfo::SetMechaType ( unsigned char NewType )
{
	static UFunction* pFnSetMechaType = NULL;

	if ( ! pFnSetMechaType )
		pFnSetMechaType = (UFunction*) UObject::GObjObjects()->Data[ 209279 ];

	AMechaGamePlayerReplicationInfo_execSetMechaType_Parms SetMechaType_Parms;
	SetMechaType_Parms.NewType = NewType;

	this->ProcessEvent ( pFnSetMechaType, &SetMechaType_Parms, NULL );
};

// Function MechaGame.MechaGamePlayerReplicationInfo.GetMvpValue
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AMechaGamePlayerReplicationInfo::GetMvpValue ( )
{
	static UFunction* pFnGetMvpValue = NULL;

	if ( ! pFnGetMvpValue )
		pFnGetMvpValue = (UFunction*) UObject::GObjObjects()->Data[ 208870 ];

	AMechaGamePlayerReplicationInfo_execGetMvpValue_Parms GetMvpValue_Parms;

	this->ProcessEvent ( pFnGetMvpValue, &GetMvpValue_Parms, NULL );

	return GetMvpValue_Parms.ReturnValue;
};

// Function MechaGame.MechaGamePlayerReplicationInfo.RoundClear
// [0x00020000] 
// Parameters infos:

void AMechaGamePlayerReplicationInfo::RoundClear ( )
{
	static UFunction* pFnRoundClear = NULL;

	if ( ! pFnRoundClear )
		pFnRoundClear = (UFunction*) UObject::GObjObjects()->Data[ 209278 ];

	AMechaGamePlayerReplicationInfo_execRoundClear_Parms RoundClear_Parms;

	this->ProcessEvent ( pFnRoundClear, &RoundClear_Parms, NULL );
};

// Function MechaGame.MechaGameReplicationInfo.GetMechaTypeForWeapon
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  WeapType                       ( CPF_Parm )

unsigned char AMechaGameReplicationInfo::GetMechaTypeForWeapon ( unsigned char WeapType )
{
	static UFunction* pFnGetMechaTypeForWeapon = NULL;

	if ( ! pFnGetMechaTypeForWeapon )
		pFnGetMechaTypeForWeapon = (UFunction*) UObject::GObjObjects()->Data[ 209307 ];

	AMechaGameReplicationInfo_execGetMechaTypeForWeapon_Parms GetMechaTypeForWeapon_Parms;
	GetMechaTypeForWeapon_Parms.WeapType = WeapType;

	this->ProcessEvent ( pFnGetMechaTypeForWeapon, &GetMechaTypeForWeapon_Parms, NULL );

	return GetMechaTypeForWeapon_Parms.ReturnValue;
};

// Function MechaGame.MechaGameReplicationInfo.NotifyMechaWeaponDamage
// [0x00020002] 
// Parameters infos:
// unsigned char                  MechaWeaponType                ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )

void AMechaGameReplicationInfo::NotifyMechaWeaponDamage ( unsigned char MechaWeaponType, int Damage )
{
	static UFunction* pFnNotifyMechaWeaponDamage = NULL;

	if ( ! pFnNotifyMechaWeaponDamage )
		pFnNotifyMechaWeaponDamage = (UFunction*) UObject::GObjObjects()->Data[ 209304 ];

	AMechaGameReplicationInfo_execNotifyMechaWeaponDamage_Parms NotifyMechaWeaponDamage_Parms;
	NotifyMechaWeaponDamage_Parms.MechaWeaponType = MechaWeaponType;
	NotifyMechaWeaponDamage_Parms.Damage = Damage;

	this->ProcessEvent ( pFnNotifyMechaWeaponDamage, &NotifyMechaWeaponDamage_Parms, NULL );
};

// Function MechaGame.MechaGameReplicationInfo.NotifyMechaSelected
// [0x00020002] 
// Parameters infos:
// unsigned char                  MechaType                      ( CPF_Parm )

void AMechaGameReplicationInfo::NotifyMechaSelected ( unsigned char MechaType )
{
	static UFunction* pFnNotifyMechaSelected = NULL;

	if ( ! pFnNotifyMechaSelected )
		pFnNotifyMechaSelected = (UFunction*) UObject::GObjObjects()->Data[ 209302 ];

	AMechaGameReplicationInfo_execNotifyMechaSelected_Parms NotifyMechaSelected_Parms;
	NotifyMechaSelected_Parms.MechaType = MechaType;

	this->ProcessEvent ( pFnNotifyMechaSelected, &NotifyMechaSelected_Parms, NULL );
};

// Function MechaGame.MechaRoundGameReplicationInfo.ClientRoundClear
// [0x00020100] 
// Parameters infos:

void AMechaRoundGameReplicationInfo::ClientRoundClear ( )
{
	static UFunction* pFnClientRoundClear = NULL;

	if ( ! pFnClientRoundClear )
		pFnClientRoundClear = (UFunction*) UObject::GObjObjects()->Data[ 209427 ];

	AMechaRoundGameReplicationInfo_execClientRoundClear_Parms ClientRoundClear_Parms;

	this->ProcessEvent ( pFnClientRoundClear, &ClientRoundClear_Parms, NULL );
};

// Function MechaGame.MechaRoundGameReplicationInfo.RoundClear
// [0x00020000] 
// Parameters infos:

void AMechaRoundGameReplicationInfo::RoundClear ( )
{
	static UFunction* pFnRoundClear = NULL;

	if ( ! pFnRoundClear )
		pFnRoundClear = (UFunction*) UObject::GObjObjects()->Data[ 209426 ];

	AMechaRoundGameReplicationInfo_execRoundClear_Parms RoundClear_Parms;

	this->ProcessEvent ( pFnRoundClear, &RoundClear_Parms, NULL );
};

// Function MechaGame.MechaSpecialMove.GetAimOffsetOverride
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                DeltaRot                       ( CPF_Parm | CPF_OutParm )

bool UMechaSpecialMove::eventGetAimOffsetOverride ( struct FRotator* DeltaRot )
{
	static UFunction* pFnGetAimOffsetOverride = NULL;

	if ( ! pFnGetAimOffsetOverride )
		pFnGetAimOffsetOverride = (UFunction*) UObject::GObjObjects()->Data[ 210082 ];

	UMechaSpecialMove_eventGetAimOffsetOverride_Parms GetAimOffsetOverride_Parms;

	this->ProcessEvent ( pFnGetAimOffsetOverride, &GetAimOffsetOverride_Parms, NULL );

	if ( DeltaRot )
		memcpy ( DeltaRot, &GetAimOffsetOverride_Parms.DeltaRot, 0xC );

	return GetAimOffsetOverride_Parms.ReturnValue;
};

// Function MechaGame.MechaSpecialMove.RigidBodyWorldCollision
// [0x00420800] ( FUNC_Event )
// Parameters infos:
// class UPrimitiveComponent*     HitComponent                   ( CPF_Parm | CPF_EditInline )
// class UPrimitiveComponent*     OtherComponent                 ( CPF_Parm | CPF_EditInline )
// struct FCollisionImpactData    RigidCollisionDate             ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMechaSpecialMove::eventRigidBodyWorldCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, struct FCollisionImpactData* RigidCollisionDate )
{
	static UFunction* pFnRigidBodyWorldCollision = NULL;

	if ( ! pFnRigidBodyWorldCollision )
		pFnRigidBodyWorldCollision = (UFunction*) UObject::GObjObjects()->Data[ 210078 ];

	UMechaSpecialMove_eventRigidBodyWorldCollision_Parms RigidBodyWorldCollision_Parms;
	RigidBodyWorldCollision_Parms.HitComponent = HitComponent;
	RigidBodyWorldCollision_Parms.OtherComponent = OtherComponent;

	this->ProcessEvent ( pFnRigidBodyWorldCollision, &RigidBodyWorldCollision_Parms, NULL );

	if ( RigidCollisionDate )
		memcpy ( RigidCollisionDate, &RigidBodyWorldCollision_Parms.RigidCollisionDate, 0x24 );
};

// Function MechaGame.MechaSpecialMove.OnRigidBodySpringOverextension
// [0x00020000] 
// Parameters infos:
// class URB_BodyInstance*        BodyInstance                   ( CPF_Parm )

void UMechaSpecialMove::OnRigidBodySpringOverextension ( class URB_BodyInstance* BodyInstance )
{
	static UFunction* pFnOnRigidBodySpringOverextension = NULL;

	if ( ! pFnOnRigidBodySpringOverextension )
		pFnOnRigidBodySpringOverextension = (UFunction*) UObject::GObjObjects()->Data[ 210076 ];

	UMechaSpecialMove_execOnRigidBodySpringOverextension_Parms OnRigidBodySpringOverextension_Parms;
	OnRigidBodySpringOverextension_Parms.BodyInstance = BodyInstance;

	this->ProcessEvent ( pFnOnRigidBodySpringOverextension, &OnRigidBodySpringOverextension_Parms, NULL );
};

// Function MechaGame.MechaSpecialMove.ShouldReplicate
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UMechaSpecialMove::ShouldReplicate ( )
{
	static UFunction* pFnShouldReplicate = NULL;

	if ( ! pFnShouldReplicate )
		pFnShouldReplicate = (UFunction*) UObject::GObjObjects()->Data[ 208380 ];

	UMechaSpecialMove_execShouldReplicate_Parms ShouldReplicate_Parms;

	this->ProcessEvent ( pFnShouldReplicate, &ShouldReplicate_Parms, NULL );

	return ShouldReplicate_Parms.ReturnValue;
};

// Function MechaGame.MechaSpecialMove.FirePressedNotification
// [0x00020000] 
// Parameters infos:

void UMechaSpecialMove::FirePressedNotification ( )
{
	static UFunction* pFnFirePressedNotification = NULL;

	if ( ! pFnFirePressedNotification )
		pFnFirePressedNotification = (UFunction*) UObject::GObjObjects()->Data[ 210075 ];

	UMechaSpecialMove_execFirePressedNotification_Parms FirePressedNotification_Parms;

	this->ProcessEvent ( pFnFirePressedNotification, &FirePressedNotification_Parms, NULL );
};

// Function MechaGame.MechaSpecialMove.RootMotionExtracted
// [0x00420000] 
// Parameters infos:
// class USkeletalMeshComponent*  SkelComp                       ( CPF_Parm | CPF_EditInline )
// struct FBoneAtom               ExtractedRootMotionDelta       ( CPF_Parm | CPF_OutParm )

void UMechaSpecialMove::RootMotionExtracted ( class USkeletalMeshComponent* SkelComp, struct FBoneAtom* ExtractedRootMotionDelta )
{
	static UFunction* pFnRootMotionExtracted = NULL;

	if ( ! pFnRootMotionExtracted )
		pFnRootMotionExtracted = (UFunction*) UObject::GObjObjects()->Data[ 210072 ];

	UMechaSpecialMove_execRootMotionExtracted_Parms RootMotionExtracted_Parms;
	RootMotionExtracted_Parms.SkelComp = SkelComp;

	this->ProcessEvent ( pFnRootMotionExtracted, &RootMotionExtracted_Parms, NULL );

	if ( ExtractedRootMotionDelta )
		memcpy ( ExtractedRootMotionDelta, &RootMotionExtracted_Parms.ExtractedRootMotionDelta, 0x20 );
};

// Function MechaGame.MechaSpecialMove.RootMotionModeChanged
// [0x00020000] 
// Parameters infos:
// class USkeletalMeshComponent*  SkelComp                       ( CPF_Parm | CPF_EditInline )

void UMechaSpecialMove::RootMotionModeChanged ( class USkeletalMeshComponent* SkelComp )
{
	static UFunction* pFnRootMotionModeChanged = NULL;

	if ( ! pFnRootMotionModeChanged )
		pFnRootMotionModeChanged = (UFunction*) UObject::GObjObjects()->Data[ 210070 ];

	UMechaSpecialMove_execRootMotionModeChanged_Parms RootMotionModeChanged_Parms;
	RootMotionModeChanged_Parms.SkelComp = SkelComp;

	this->ProcessEvent ( pFnRootMotionModeChanged, &RootMotionModeChanged_Parms, NULL );
};

// Function MechaGame.MechaSpecialMove.LimitViewRotation
// [0x00420000] 
// Parameters infos:
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )

void UMechaSpecialMove::LimitViewRotation ( struct FRotator* out_ViewRotation )
{
	static UFunction* pFnLimitViewRotation = NULL;

	if ( ! pFnLimitViewRotation )
		pFnLimitViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 210068 ];

	UMechaSpecialMove_execLimitViewRotation_Parms LimitViewRotation_Parms;

	this->ProcessEvent ( pFnLimitViewRotation, &LimitViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &LimitViewRotation_Parms.out_ViewRotation, 0xC );
};

// Function MechaGame.MechaSpecialMove.IsPawnRotationLocked
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UMechaSpecialMove::IsPawnRotationLocked ( )
{
	static UFunction* pFnIsPawnRotationLocked = NULL;

	if ( ! pFnIsPawnRotationLocked )
		pFnIsPawnRotationLocked = (UFunction*) UObject::GObjObjects()->Data[ 210066 ];

	UMechaSpecialMove_execIsPawnRotationLocked_Parms IsPawnRotationLocked_Parms;

	this->ProcessEvent ( pFnIsPawnRotationLocked, &IsPawnRotationLocked_Parms, NULL );

	return IsPawnRotationLocked_Parms.ReturnValue;
};

// Function MechaGame.MechaSpecialMove.BS_AnimEndNotify
// [0x00020002] 
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void UMechaSpecialMove::BS_AnimEndNotify ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnBS_AnimEndNotify = NULL;

	if ( ! pFnBS_AnimEndNotify )
		pFnBS_AnimEndNotify = (UFunction*) UObject::GObjObjects()->Data[ 210062 ];

	UMechaSpecialMove_execBS_AnimEndNotify_Parms BS_AnimEndNotify_Parms;
	BS_AnimEndNotify_Parms.SeqNode = SeqNode;
	BS_AnimEndNotify_Parms.PlayedTime = PlayedTime;
	BS_AnimEndNotify_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnBS_AnimEndNotify, &BS_AnimEndNotify_Parms, NULL );
};

// Function MechaGame.MechaSpecialMove.Tick
// [0x00020000] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UMechaSpecialMove::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 210060 ];

	UMechaSpecialMove_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function MechaGame.MechaSpecialMove.SetLockPawnRotation
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bLock                          ( CPF_Parm )

void UMechaSpecialMove::SetLockPawnRotation ( unsigned long bLock )
{
	static UFunction* pFnSetLockPawnRotation = NULL;

	if ( ! pFnSetLockPawnRotation )
		pFnSetLockPawnRotation = (UFunction*) UObject::GObjObjects()->Data[ 210054 ];

	UMechaSpecialMove_execSetLockPawnRotation_Parms SetLockPawnRotation_Parms;
	SetLockPawnRotation_Parms.bLock = bLock;

	this->ProcessEvent ( pFnSetLockPawnRotation, &SetLockPawnRotation_Parms, NULL );
};

// Function MechaGame.MechaSpecialMove.SetMovementLock
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bEnable                        ( CPF_Parm )

void UMechaSpecialMove::SetMovementLock ( unsigned long bEnable )
{
	static UFunction* pFnSetMovementLock = NULL;

	if ( ! pFnSetMovementLock )
		pFnSetMovementLock = (UFunction*) UObject::GObjObjects()->Data[ 210053 ];

	UMechaSpecialMove_execSetMovementLock_Parms SetMovementLock_Parms;
	SetMovementLock_Parms.bEnable = bEnable;

	this->ProcessEvent ( pFnSetMovementLock, &SetMovementLock_Parms, NULL );
};

// Function MechaGame.MechaSpecialMove.SpecialMoveEnded
// [0x00020002] 
// Parameters infos:
// unsigned char                  PrevMove                       ( CPF_Parm )
// unsigned char                  NextMove                       ( CPF_Parm )

void UMechaSpecialMove::SpecialMoveEnded ( unsigned char PrevMove, unsigned char NextMove )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 210055 ];

	UMechaSpecialMove_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;
	SpecialMoveEnded_Parms.PrevMove = PrevMove;
	SpecialMoveEnded_Parms.NextMove = NextMove;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function MechaGame.MechaSpecialMove.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:
// unsigned long                  bForced                        ( CPF_Parm )
// unsigned char                  PrevMove                       ( CPF_Parm )

void UMechaSpecialMove::SpecialMoveStarted ( unsigned long bForced, unsigned char PrevMove )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 210049 ];

	UMechaSpecialMove_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;
	SpecialMoveStarted_Parms.bForced = bForced;
	SpecialMoveStarted_Parms.PrevMove = PrevMove;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function MechaGame.MechaSpecialMove.CanInteractWithPawn
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APVEPawn*                OtherPawn                      ( CPF_Parm )

bool UMechaSpecialMove::CanInteractWithPawn ( class APVEPawn* OtherPawn )
{
	static UFunction* pFnCanInteractWithPawn = NULL;

	if ( ! pFnCanInteractWithPawn )
		pFnCanInteractWithPawn = (UFunction*) UObject::GObjObjects()->Data[ 210046 ];

	UMechaSpecialMove_execCanInteractWithPawn_Parms CanInteractWithPawn_Parms;
	CanInteractWithPawn_Parms.OtherPawn = OtherPawn;

	this->ProcessEvent ( pFnCanInteractWithPawn, &CanInteractWithPawn_Parms, NULL );

	return CanInteractWithPawn_Parms.ReturnValue;
};

// Function MechaGame.MechaSpecialMove.InternalCanDoSpecialMove
// [0x00080002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UMechaSpecialMove::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 210044 ];

	UMechaSpecialMove_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );

	return InternalCanDoSpecialMove_Parms.ReturnValue;
};

// Function MechaGame.MechaSpecialMove.CanDoSpecialMove
// [0x00024003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bForceCheck                    ( CPF_OptionalParm | CPF_Parm )

bool UMechaSpecialMove::CanDoSpecialMove ( unsigned long bForceCheck )
{
	static UFunction* pFnCanDoSpecialMove = NULL;

	if ( ! pFnCanDoSpecialMove )
		pFnCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 208411 ];

	UMechaSpecialMove_execCanDoSpecialMove_Parms CanDoSpecialMove_Parms;
	CanDoSpecialMove_Parms.bForceCheck = bForceCheck;

	this->ProcessEvent ( pFnCanDoSpecialMove, &CanDoSpecialMove_Parms, NULL );

	return CanDoSpecialMove_Parms.ReturnValue;
};

// Function MechaGame.MechaSpecialMove.CanOverridSpecialMove
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  InMove                         ( CPF_Parm )

bool UMechaSpecialMove::CanOverridSpecialMove ( unsigned char InMove )
{
	static UFunction* pFnCanOverridSpecialMove = NULL;

	if ( ! pFnCanOverridSpecialMove )
		pFnCanOverridSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 208376 ];

	UMechaSpecialMove_execCanOverridSpecialMove_Parms CanOverridSpecialMove_Parms;
	CanOverridSpecialMove_Parms.InMove = InMove;

	this->ProcessEvent ( pFnCanOverridSpecialMove, &CanOverridSpecialMove_Parms, NULL );

	return CanOverridSpecialMove_Parms.ReturnValue;
};

// Function MechaGame.MechaSpecialMove.CanOverrideMoveWith
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  NewMove                        ( CPF_Parm )

bool UMechaSpecialMove::CanOverrideMoveWith ( unsigned char NewMove )
{
	static UFunction* pFnCanOverrideMoveWith = NULL;

	if ( ! pFnCanOverrideMoveWith )
		pFnCanOverrideMoveWith = (UFunction*) UObject::GObjObjects()->Data[ 208374 ];

	UMechaSpecialMove_execCanOverrideMoveWith_Parms CanOverrideMoveWith_Parms;
	CanOverrideMoveWith_Parms.NewMove = NewMove;

	this->ProcessEvent ( pFnCanOverrideMoveWith, &CanOverrideMoveWith_Parms, NULL );

	return CanOverrideMoveWith_Parms.ReturnValue;
};

// Function MechaGame.MechaSpecialMove.CanChainMove
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  NextMove                       ( CPF_Parm )

bool UMechaSpecialMove::CanChainMove ( unsigned char NextMove )
{
	static UFunction* pFnCanChainMove = NULL;

	if ( ! pFnCanChainMove )
		pFnCanChainMove = (UFunction*) UObject::GObjObjects()->Data[ 208378 ];

	UMechaSpecialMove_execCanChainMove_Parms CanChainMove_Parms;
	CanChainMove_Parms.NextMove = NextMove;

	this->ProcessEvent ( pFnCanChainMove, &CanChainMove_Parms, NULL );

	return CanChainMove_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProj_TracerBase.ApplyFluidSurfaceImpact
// [0x00020102] 
// Parameters infos:
// class AFluidSurfaceActor*      Fluid                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGMechaProj_TracerBase::ApplyFluidSurfaceImpact ( class AFluidSurfaceActor* Fluid, struct FVector HitLocation )
{
	static UFunction* pFnApplyFluidSurfaceImpact = NULL;

	if ( ! pFnApplyFluidSurfaceImpact )
		pFnApplyFluidSurfaceImpact = (UFunction*) UObject::GObjObjects()->Data[ 213711 ];

	ATGMechaProj_TracerBase_execApplyFluidSurfaceImpact_Parms ApplyFluidSurfaceImpact_Parms;
	ApplyFluidSurfaceImpact_Parms.Fluid = Fluid;
	memcpy ( &ApplyFluidSurfaceImpact_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnApplyFluidSurfaceImpact, &ApplyFluidSurfaceImpact_Parms, NULL );
};

// Function MechaGame.TGMechaProj_TracerBase.StopSimulating
// [0x00080102] 
// Parameters infos:

void ATGMechaProj_TracerBase::StopSimulating ( )
{
	static UFunction* pFnStopSimulating = NULL;

	if ( ! pFnStopSimulating )
		pFnStopSimulating = (UFunction*) UObject::GObjObjects()->Data[ 213710 ];

	ATGMechaProj_TracerBase_execStopSimulating_Parms StopSimulating_Parms;

	this->ProcessEvent ( pFnStopSimulating, &StopSimulating_Parms, NULL );
};

// Function MechaGame.TGMechaProj_TracerBase.Init
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )

void ATGMechaProj_TracerBase::Init ( struct FVector Direction )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 213707 ];

	ATGMechaProj_TracerBase_execInit_Parms Init_Parms;
	memcpy ( &Init_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function MechaGame.TGMechaProj_TracerBase.SuppressAudio
// [0x00020102] 
// Parameters infos:
// unsigned long                  bSuppress                      ( CPF_Parm )

void ATGMechaProj_TracerBase::SuppressAudio ( unsigned long bSuppress )
{
	static UFunction* pFnSuppressAudio = NULL;

	if ( ! pFnSuppressAudio )
		pFnSuppressAudio = (UFunction*) UObject::GObjObjects()->Data[ 213705 ];

	ATGMechaProj_TracerBase_execSuppressAudio_Parms SuppressAudio_Parms;
	SuppressAudio_Parms.bSuppress = bSuppress;

	this->ProcessEvent ( pFnSuppressAudio, &SuppressAudio_Parms, NULL );
};

// Function MechaGame.TGMechaProj_TracerBase.StopInFlightAudio
// [0x00080102] 
// Parameters infos:

void ATGMechaProj_TracerBase::StopInFlightAudio ( )
{
	static UFunction* pFnStopInFlightAudio = NULL;

	if ( ! pFnStopInFlightAudio )
		pFnStopInFlightAudio = (UFunction*) UObject::GObjObjects()->Data[ 213704 ];

	ATGMechaProj_TracerBase_execStopInFlightAudio_Parms StopInFlightAudio_Parms;

	this->ProcessEvent ( pFnStopInFlightAudio, &StopInFlightAudio_Parms, NULL );
};

// Function MechaGame.TGMechaProj_TracerBase.StartInFlightAudio
// [0x00080102] 
// Parameters infos:

void ATGMechaProj_TracerBase::StartInFlightAudio ( )
{
	static UFunction* pFnStartInFlightAudio = NULL;

	if ( ! pFnStartInFlightAudio )
		pFnStartInFlightAudio = (UFunction*) UObject::GObjObjects()->Data[ 213703 ];

	ATGMechaProj_TracerBase_execStartInFlightAudio_Parms StartInFlightAudio_Parms;

	this->ProcessEvent ( pFnStartInFlightAudio, &StartInFlightAudio_Parms, NULL );
};

// Function MechaGame.TGMechaProj_TracerBase.StopTrailEmitter
// [0x00080102] 
// Parameters infos:

void ATGMechaProj_TracerBase::StopTrailEmitter ( )
{
	static UFunction* pFnStopTrailEmitter = NULL;

	if ( ! pFnStopTrailEmitter )
		pFnStopTrailEmitter = (UFunction*) UObject::GObjObjects()->Data[ 213702 ];

	ATGMechaProj_TracerBase_execStopTrailEmitter_Parms StopTrailEmitter_Parms;

	this->ProcessEvent ( pFnStopTrailEmitter, &StopTrailEmitter_Parms, NULL );
};

// Function MechaGame.TGMechaProj_TracerBase.SpawnTrail
// [0x00080102] 
// Parameters infos:

void ATGMechaProj_TracerBase::SpawnTrail ( )
{
	static UFunction* pFnSpawnTrail = NULL;

	if ( ! pFnSpawnTrail )
		pFnSpawnTrail = (UFunction*) UObject::GObjObjects()->Data[ 213701 ];

	ATGMechaProj_TracerBase_execSpawnTrail_Parms SpawnTrail_Parms;

	this->ProcessEvent ( pFnSpawnTrail, &SpawnTrail_Parms, NULL );
};

// Function MechaGame.TGMechaProj_TracerBase.Destroyed
// [0x00020102] 
// Parameters infos:

void ATGMechaProj_TracerBase::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 213700 ];

	ATGMechaProj_TracerBase_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function MechaGame.TGMechaProj_TracerBase.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGMechaProj_TracerBase::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 213699 ];

	ATGMechaProj_TracerBase_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaProjectileBase.GetRange
// [0x00022102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGMechaProjectileBase::GetRange ( )
{
	static UFunction* pFnGetRange = NULL;

	if ( ! pFnGetRange )
		pFnGetRange = (UFunction*) UObject::GObjObjects()->Data[ 213565 ];

	ATGMechaProjectileBase_execGetRange_Parms GetRange_Parms;

	this->ProcessEvent ( pFnGetRange, &GetRange_Parms, NULL );

	return GetRange_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProjectileBase.GetTimeToLocation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 TargetLoc                      ( CPF_Parm )

float ATGMechaProjectileBase::GetTimeToLocation ( struct FVector TargetLoc )
{
	static UFunction* pFnGetTimeToLocation = NULL;

	if ( ! pFnGetTimeToLocation )
		pFnGetTimeToLocation = (UFunction*) UObject::GObjObjects()->Data[ 213562 ];

	ATGMechaProjectileBase_execGetTimeToLocation_Parms GetTimeToLocation_Parms;
	memcpy ( &GetTimeToLocation_Parms.TargetLoc, &TargetLoc, 0xC );

	this->ProcessEvent ( pFnGetTimeToLocation, &GetTimeToLocation_Parms, NULL );

	return GetTimeToLocation_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProjectileBase.StaticGetTimeToLocation
// [0x00022102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 TargetLoc                      ( CPF_Parm )
// struct FVector                 StartLoc                       ( CPF_Parm )
// class AController*             RequestedBy                    ( CPF_Parm )

float ATGMechaProjectileBase::StaticGetTimeToLocation ( struct FVector TargetLoc, struct FVector StartLoc, class AController* RequestedBy )
{
	static UFunction* pFnStaticGetTimeToLocation = NULL;

	if ( ! pFnStaticGetTimeToLocation )
		pFnStaticGetTimeToLocation = (UFunction*) UObject::GObjObjects()->Data[ 213557 ];

	ATGMechaProjectileBase_execStaticGetTimeToLocation_Parms StaticGetTimeToLocation_Parms;
	memcpy ( &StaticGetTimeToLocation_Parms.TargetLoc, &TargetLoc, 0xC );
	memcpy ( &StaticGetTimeToLocation_Parms.StartLoc, &StartLoc, 0xC );
	StaticGetTimeToLocation_Parms.RequestedBy = RequestedBy;

	this->ProcessEvent ( pFnStaticGetTimeToLocation, &StaticGetTimeToLocation_Parms, NULL );

	return StaticGetTimeToLocation_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProjectileBase.CalculateTravelTime
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Dist                           ( CPF_Parm )
// float                          MoveSpeed                      ( CPF_Parm )
// float                          MaxMoveSpeed                   ( CPF_Parm )
// float                          AccelMag                       ( CPF_Parm )

float ATGMechaProjectileBase::CalculateTravelTime ( float Dist, float MoveSpeed, float MaxMoveSpeed, float AccelMag )
{
	static UFunction* pFnCalculateTravelTime = NULL;

	if ( ! pFnCalculateTravelTime )
		pFnCalculateTravelTime = (UFunction*) UObject::GObjObjects()->Data[ 213548 ];

	ATGMechaProjectileBase_execCalculateTravelTime_Parms CalculateTravelTime_Parms;
	CalculateTravelTime_Parms.Dist = Dist;
	CalculateTravelTime_Parms.MoveSpeed = MoveSpeed;
	CalculateTravelTime_Parms.MaxMoveSpeed = MaxMoveSpeed;
	CalculateTravelTime_Parms.AccelMag = AccelMag;

	this->ProcessEvent ( pFnCalculateTravelTime, &CalculateTravelTime_Parms, NULL );

	return CalculateTravelTime_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProjectileBase.GetPawnOwner
// [0x00020100] 
// Parameters infos:
// class APawn*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class APawn* ATGMechaProjectileBase::GetPawnOwner ( )
{
	static UFunction* pFnGetPawnOwner = NULL;

	if ( ! pFnGetPawnOwner )
		pFnGetPawnOwner = (UFunction*) UObject::GObjObjects()->Data[ 213546 ];

	ATGMechaProjectileBase_execGetPawnOwner_Parms GetPawnOwner_Parms;

	this->ProcessEvent ( pFnGetPawnOwner, &GetPawnOwner_Parms, NULL );

	return GetPawnOwner_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProjectileBase.GetHomingTarget
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AUTProjectile*           Seeker                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )

class AActor* ATGMechaProjectileBase::eventGetHomingTarget ( class AUTProjectile* Seeker, class AController* InstigatedBy )
{
	static UFunction* pFnGetHomingTarget = NULL;

	if ( ! pFnGetHomingTarget )
		pFnGetHomingTarget = (UFunction*) UObject::GObjObjects()->Data[ 213542 ];

	ATGMechaProjectileBase_eventGetHomingTarget_Parms GetHomingTarget_Parms;
	GetHomingTarget_Parms.Seeker = Seeker;
	GetHomingTarget_Parms.InstigatedBy = InstigatedBy;

	this->ProcessEvent ( pFnGetHomingTarget, &GetHomingTarget_Parms, NULL );

	return GetHomingTarget_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProjectileBase.CalcCamera
// [0x00420102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )
// float                          out_FOV                        ( CPF_Parm | CPF_OutParm )

bool ATGMechaProjectileBase::CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
{
	static UFunction* pFnCalcCamera = NULL;

	if ( ! pFnCalcCamera )
		pFnCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 213536 ];

	ATGMechaProjectileBase_execCalcCamera_Parms CalcCamera_Parms;
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

// Function MechaGame.TGMechaProjectileBase.MyOnParticleSystemFinished
// [0x00020102] 
// Parameters infos:
// class UParticleSystemComponent* PSC                            ( CPF_Parm | CPF_EditInline )

void ATGMechaProjectileBase::MyOnParticleSystemFinished ( class UParticleSystemComponent* PSC )
{
	static UFunction* pFnMyOnParticleSystemFinished = NULL;

	if ( ! pFnMyOnParticleSystemFinished )
		pFnMyOnParticleSystemFinished = (UFunction*) UObject::GObjObjects()->Data[ 213531 ];

	ATGMechaProjectileBase_execMyOnParticleSystemFinished_Parms MyOnParticleSystemFinished_Parms;
	MyOnParticleSystemFinished_Parms.PSC = PSC;

	this->ProcessEvent ( pFnMyOnParticleSystemFinished, &MyOnParticleSystemFinished_Parms, NULL );
};

// Function MechaGame.TGMechaProjectileBase.Destroyed
// [0x00020102] 
// Parameters infos:

void ATGMechaProjectileBase::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 213530 ];

	ATGMechaProjectileBase_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function MechaGame.TGMechaProjectileBase.HideProjectile
// [0x00020102] 
// Parameters infos:

void ATGMechaProjectileBase::HideProjectile ( )
{
	static UFunction* pFnHideProjectile = NULL;

	if ( ! pFnHideProjectile )
		pFnHideProjectile = (UFunction*) UObject::GObjObjects()->Data[ 213528 ];

	ATGMechaProjectileBase_execHideProjectile_Parms HideProjectile_Parms;

	this->ProcessEvent ( pFnHideProjectile, &HideProjectile_Parms, NULL );
};

// Function MechaGame.TGMechaProjectileBase.TornOff
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATGMechaProjectileBase::eventTornOff ( )
{
	static UFunction* pFnTornOff = NULL;

	if ( ! pFnTornOff )
		pFnTornOff = (UFunction*) UObject::GObjObjects()->Data[ 213527 ];

	ATGMechaProjectileBase_eventTornOff_Parms TornOff_Parms;

	this->ProcessEvent ( pFnTornOff, &TornOff_Parms, NULL );
};

// Function MechaGame.TGMechaProjectileBase.ShutDown
// [0x00820102] 
// Parameters infos:

void ATGMechaProjectileBase::ShutDown ( )
{
	static UFunction* pFnShutDown = NULL;

	if ( ! pFnShutDown )
		pFnShutDown = (UFunction*) UObject::GObjObjects()->Data[ 213524 ];

	ATGMechaProjectileBase_execShutDown_Parms ShutDown_Parms;

	this->ProcessEvent ( pFnShutDown, &ShutDown_Parms, NULL );
};

// Function MechaGame.TGMechaProjectileBase.ShouldSpawnExplosionLight
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGMechaProjectileBase::ShouldSpawnExplosionLight ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnShouldSpawnExplosionLight = NULL;

	if ( ! pFnShouldSpawnExplosionLight )
		pFnShouldSpawnExplosionLight = (UFunction*) UObject::GObjObjects()->Data[ 213518 ];

	ATGMechaProjectileBase_execShouldSpawnExplosionLight_Parms ShouldSpawnExplosionLight_Parms;
	memcpy ( &ShouldSpawnExplosionLight_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ShouldSpawnExplosionLight_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnShouldSpawnExplosionLight, &ShouldSpawnExplosionLight_Parms, NULL );

	return ShouldSpawnExplosionLight_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProjectileBase.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGMechaProjectileBase::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 213508 ];

	ATGMechaProjectileBase_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function MechaGame.TGMechaProjectileBase.SetExplosionEffectParameters
// [0x00020100] 
// Parameters infos:
// class UParticleSystemComponent* ProjExplosion                  ( CPF_Parm | CPF_EditInline )

void ATGMechaProjectileBase::SetExplosionEffectParameters ( class UParticleSystemComponent* ProjExplosion )
{
	static UFunction* pFnSetExplosionEffectParameters = NULL;

	if ( ! pFnSetExplosionEffectParameters )
		pFnSetExplosionEffectParameters = (UFunction*) UObject::GObjObjects()->Data[ 213506 ];

	ATGMechaProjectileBase_execSetExplosionEffectParameters_Parms SetExplosionEffectParameters_Parms;
	SetExplosionEffectParameters_Parms.ProjExplosion = ProjExplosion;

	this->ProcessEvent ( pFnSetExplosionEffectParameters, &SetExplosionEffectParameters_Parms, NULL );
};

// Function MechaGame.TGMechaProjectileBase.SpawnFlightEffects
// [0x00020102] 
// Parameters infos:

void ATGMechaProjectileBase::SpawnFlightEffects ( )
{
	static UFunction* pFnSpawnFlightEffects = NULL;

	if ( ! pFnSpawnFlightEffects )
		pFnSpawnFlightEffects = (UFunction*) UObject::GObjObjects()->Data[ 213505 ];

	ATGMechaProjectileBase_execSpawnFlightEffects_Parms SpawnFlightEffects_Parms;

	this->ProcessEvent ( pFnSpawnFlightEffects, &SpawnFlightEffects_Parms, NULL );
};

// Function MechaGame.TGMechaProjectileBase.Explode
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGMechaProjectileBase::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 213502 ];

	ATGMechaProjectileBase_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function MechaGame.TGMechaProjectileBase.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGMechaProjectileBase::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 213498 ];

	ATGMechaProjectileBase_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function MechaGame.TGMechaProjectileBase.Init
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )

void ATGMechaProjectileBase::Init ( struct FVector Direction )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 213496 ];

	ATGMechaProjectileBase_execInit_Parms Init_Parms;
	memcpy ( &Init_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function MechaGame.TGMechaProjectileBase.SetInitialState
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaProjectileBase::eventSetInitialState ( )
{
	static UFunction* pFnSetInitialState = NULL;

	if ( ! pFnSetInitialState )
		pFnSetInitialState = (UFunction*) UObject::GObjObjects()->Data[ 213495 ];

	ATGMechaProjectileBase_eventSetInitialState_Parms SetInitialState_Parms;

	this->ProcessEvent ( pFnSetInitialState, &SetInitialState_Parms, NULL );
};

// Function MechaGame.TGMechaProjectileBase.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGMechaProjectileBase::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 213494 ];

	ATGMechaProjectileBase_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaProjectileBase.PreBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATGMechaProjectileBase::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 213492 ];

	ATGMechaProjectileBase_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaProjectileBase.CanSplash
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaProjectileBase::CanSplash ( )
{
	static UFunction* pFnCanSplash = NULL;

	if ( ! pFnCanSplash )
		pFnCanSplash = (UFunction*) UObject::GObjObjects()->Data[ 213490 ];

	ATGMechaProjectileBase_execCanSplash_Parms CanSplash_Parms;

	this->ProcessEvent ( pFnCanSplash, &CanSplash_Parms, NULL );

	return CanSplash_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProjectileBase.Landed
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  FloorActor                     ( CPF_Parm )

void ATGMechaProjectileBase::eventLanded ( struct FVector HitNormal, class AActor* FloorActor )
{
	static UFunction* pFnLanded = NULL;

	if ( ! pFnLanded )
		pFnLanded = (UFunction*) UObject::GObjObjects()->Data[ 213487 ];

	ATGMechaProjectileBase_eventLanded_Parms Landed_Parms;
	memcpy ( &Landed_Parms.HitNormal, &HitNormal, 0xC );
	Landed_Parms.FloorActor = FloorActor;

	this->ProcessEvent ( pFnLanded, &Landed_Parms, NULL );
};

// Function MechaGame.TGMechaProjectileBase.CreateProjectileLight
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void ATGMechaProjectileBase::eventCreateProjectileLight ( )
{
	static UFunction* pFnCreateProjectileLight = NULL;

	if ( ! pFnCreateProjectileLight )
		pFnCreateProjectileLight = (UFunction*) UObject::GObjObjects()->Data[ 213486 ];

	ATGMechaProjectileBase_eventCreateProjectileLight_Parms CreateProjectileLight_Parms;

	this->ProcessEvent ( pFnCreateProjectileLight, &CreateProjectileLight_Parms, NULL );
};

// Function MechaGame.TGMechaProjectile.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGMechaProjectile::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 213633 ];

	ATGMechaProjectile_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function MechaGame.TGMechaProjectile.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGMechaProjectile::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 213623 ];

	ATGMechaProjectile_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function MechaGame.TGMechaProjectile.SpawnFlightEffects
// [0x00020102] 
// Parameters infos:

void ATGMechaProjectile::SpawnFlightEffects ( )
{
	static UFunction* pFnSpawnFlightEffects = NULL;

	if ( ! pFnSpawnFlightEffects )
		pFnSpawnFlightEffects = (UFunction*) UObject::GObjObjects()->Data[ 213622 ];

	ATGMechaProjectile_execSpawnFlightEffects_Parms SpawnFlightEffects_Parms;

	this->ProcessEvent ( pFnSpawnFlightEffects, &SpawnFlightEffects_Parms, NULL );
};

// Function MechaGame.TGMechaProjectile.Destroyed
// [0x00020102] 
// Parameters infos:

void ATGMechaProjectile::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 213621 ];

	ATGMechaProjectile_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function MechaGame.TGMechaProjectile.ProjectileHurtRadius
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGMechaProjectile::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 213616 ];

	ATGMechaProjectile_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProjectile.HitWall
// [0x00020922] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGMechaProjectile::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 213608 ];

	ATGMechaProjectile_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function MechaGame.TGMechaProjectile.Explode
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGMechaProjectile::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 213605 ];

	ATGMechaProjectile_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function MechaGame.TGMechaProjectile.ClientSpawnExplosionEffects
// [0x00020102] 
// Parameters infos:

void ATGMechaProjectile::ClientSpawnExplosionEffects ( )
{
	static UFunction* pFnClientSpawnExplosionEffects = NULL;

	if ( ! pFnClientSpawnExplosionEffects )
		pFnClientSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 213604 ];

	ATGMechaProjectile_execClientSpawnExplosionEffects_Parms ClientSpawnExplosionEffects_Parms;

	this->ProcessEvent ( pFnClientSpawnExplosionEffects, &ClientSpawnExplosionEffects_Parms, NULL );
};

// Function MechaGame.TGMechaProjectile.FindWeaponHitNormal
// [0x00420102] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 End                            ( CPF_Parm )
// struct FVector                 Start                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm | CPF_OutParm )
// struct FVector                 HitNormal                      ( CPF_Parm | CPF_OutParm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm | CPF_OutParm )

class AActor* ATGMechaProjectile::FindWeaponHitNormal ( struct FVector End, struct FVector Start, struct FVector* HitLocation, struct FVector* HitNormal, struct FTraceHitInfo* HitInfo )
{
	static UFunction* pFnFindWeaponHitNormal = NULL;

	if ( ! pFnFindWeaponHitNormal )
		pFnFindWeaponHitNormal = (UFunction*) UObject::GObjObjects()->Data[ 213597 ];

	ATGMechaProjectile_execFindWeaponHitNormal_Parms FindWeaponHitNormal_Parms;
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

// Function MechaGame.TGMechaProjectile.ProcessTouch
// [0x00820102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGMechaProjectile::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 213586 ];

	ATGMechaProjectile_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function MechaGame.TGMechaProjectile.ExplodeTimer
// [0x00020002] 
// Parameters infos:

void ATGMechaProjectile::ExplodeTimer ( )
{
	static UFunction* pFnExplodeTimer = NULL;

	if ( ! pFnExplodeTimer )
		pFnExplodeTimer = (UFunction*) UObject::GObjObjects()->Data[ 213585 ];

	ATGMechaProjectile_execExplodeTimer_Parms ExplodeTimer_Parms;

	this->ProcessEvent ( pFnExplodeTimer, &ExplodeTimer_Parms, NULL );
};

// Function MechaGame.TGMechaProjectile.Init
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )

void ATGMechaProjectile::Init ( struct FVector Direction )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 213583 ];

	ATGMechaProjectile_execInit_Parms Init_Parms;
	memcpy ( &Init_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function MechaGame.TGMechaProjectile.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGMechaProjectile::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 213582 ];

	ATGMechaProjectile_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaProjectile.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGMechaProjectile::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 213580 ];

	ATGMechaProjectile_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function MechaGame.TGMechaProjectile.OnShutdownTimer
// [0x00020102] 
// Parameters infos:

void ATGMechaProjectile::OnShutdownTimer ( )
{
	static UFunction* pFnOnShutdownTimer = NULL;

	if ( ! pFnOnShutdownTimer )
		pFnOnShutdownTimer = (UFunction*) UObject::GObjObjects()->Data[ 213579 ];

	ATGMechaProjectile_execOnShutdownTimer_Parms OnShutdownTimer_Parms;

	this->ProcessEvent ( pFnOnShutdownTimer, &OnShutdownTimer_Parms, NULL );
};

// Function MechaGame.TGMechaProj_Aerogun.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGMechaProj_Aerogun::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 213683 ];

	ATGMechaProj_Aerogun_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function MechaGame.TGMechaProj_Aerogun.HitWall
// [0x00020922] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGMechaProj_Aerogun::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 213675 ];

	ATGMechaProj_Aerogun_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function MechaGame.TGMechaProj_Aerogun.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGMechaProj_Aerogun::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 213671 ];

	ATGMechaProj_Aerogun_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function MechaGame.TGMechaProj_Aerogun.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaProj_Aerogun::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 213670 ];

	ATGMechaProj_Aerogun_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaProj_Aerogun.PrecisionExplode
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaProj_Aerogun::eventPrecisionExplode ( )
{
	static UFunction* pFnPrecisionExplode = NULL;

	if ( ! pFnPrecisionExplode )
		pFnPrecisionExplode = (UFunction*) UObject::GObjObjects()->Data[ 213669 ];

	ATGMechaProj_Aerogun_eventPrecisionExplode_Parms PrecisionExplode_Parms;

	this->ProcessEvent ( pFnPrecisionExplode, &PrecisionExplode_Parms, NULL );
};

// Function MechaGame.TGMechaProj_Aerogun.SetRepMatrixInfo
// [0x00020002] 
// Parameters infos:

void ATGMechaProj_Aerogun::SetRepMatrixInfo ( )
{
	static UFunction* pFnSetRepMatrixInfo = NULL;

	if ( ! pFnSetRepMatrixInfo )
		pFnSetRepMatrixInfo = (UFunction*) UObject::GObjObjects()->Data[ 213668 ];

	ATGMechaProj_Aerogun_execSetRepMatrixInfo_Parms SetRepMatrixInfo_Parms;

	this->ProcessEvent ( pFnSetRepMatrixInfo, &SetRepMatrixInfo_Parms, NULL );
};

// Function MechaGame.TGMechaProj_Aerogun.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGMechaProj_Aerogun::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 213666 ];

	ATGMechaProj_Aerogun_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.ParticleSystemCleanUp
// [0x00020500] ( FUNC_Native )
// Parameters infos:

void ATGMechaWeap_FlameThrowerSprayBase::ParticleSystemCleanUp ( )
{
	static UFunction* pFnParticleSystemCleanUp = NULL;

	if ( ! pFnParticleSystemCleanUp )
		pFnParticleSystemCleanUp = (UFunction*) UObject::GObjObjects()->Data[ 215205 ];

	ATGMechaWeap_FlameThrowerSprayBase_execParticleSystemCleanUp_Parms ParticleSystemCleanUp_Parms;

	pFnParticleSystemCleanUp->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnParticleSystemCleanUp, &ParticleSystemCleanUp_Parms, NULL );

	pFnParticleSystemCleanUp->FunctionFlags |= 0x400;
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.ScorchDecalTraceFunc
// [0x00424102] 
// Parameters infos:
// float                          RandomOffsetRadius             ( CPF_Const | CPF_Parm )
// struct FVector                 ForceStartLocation             ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 out_TraceStart                 ( CPF_Parm | CPF_OutParm )
// struct FVector                 out_TraceDest                  ( CPF_Parm | CPF_OutParm )

void ATGMechaWeap_FlameThrowerSprayBase::ScorchDecalTraceFunc ( float RandomOffsetRadius, struct FVector ForceStartLocation, struct FVector* out_TraceStart, struct FVector* out_TraceDest )
{
	static UFunction* pFnScorchDecalTraceFunc = NULL;

	if ( ! pFnScorchDecalTraceFunc )
		pFnScorchDecalTraceFunc = (UFunction*) UObject::GObjObjects()->Data[ 215200 ];

	ATGMechaWeap_FlameThrowerSprayBase_execScorchDecalTraceFunc_Parms ScorchDecalTraceFunc_Parms;
	ScorchDecalTraceFunc_Parms.RandomOffsetRadius = RandomOffsetRadius;
	memcpy ( &ScorchDecalTraceFunc_Parms.ForceStartLocation, &ForceStartLocation, 0xC );

	this->ProcessEvent ( pFnScorchDecalTraceFunc, &ScorchDecalTraceFunc_Parms, NULL );

	if ( out_TraceStart )
		memcpy ( out_TraceStart, &ScorchDecalTraceFunc_Parms.out_TraceStart, 0xC );

	if ( out_TraceDest )
		memcpy ( out_TraceDest, &ScorchDecalTraceFunc_Parms.out_TraceDest, 0xC );
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.UpdateFireLoopSound
// [0x00040103] ( FUNC_Final )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGMechaWeap_FlameThrowerSprayBase::UpdateFireLoopSound ( float DeltaTime )
{
	static UFunction* pFnUpdateFireLoopSound = NULL;

	if ( ! pFnUpdateFireLoopSound )
		pFnUpdateFireLoopSound = (UFunction*) UObject::GObjObjects()->Data[ 215168 ];

	ATGMechaWeap_FlameThrowerSprayBase_execUpdateFireLoopSound_Parms UpdateFireLoopSound_Parms;
	UpdateFireLoopSound_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateFireLoopSound, &UpdateFireLoopSound_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.UpdateSplashes
// [0x00840103] ( FUNC_Final )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGMechaWeap_FlameThrowerSprayBase::UpdateSplashes ( float DeltaTime )
{
	static UFunction* pFnUpdateSplashes = NULL;

	if ( ! pFnUpdateSplashes )
		pFnUpdateSplashes = (UFunction*) UObject::GObjObjects()->Data[ 215167 ];

	ATGMechaWeap_FlameThrowerSprayBase_execUpdateSplashes_Parms UpdateSplashes_Parms;
	UpdateSplashes_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateSplashes, &UpdateSplashes_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.GetAimVector
// [0x00C20102] 
// Parameters infos:
// struct FVector                 StartLoc                       ( CPF_Parm )
// struct FVector                 vForward                       ( CPF_Parm | CPF_OutParm )
// struct FVector                 vRight                         ( CPF_Parm | CPF_OutParm )
// struct FVector                 vUp                            ( CPF_Parm | CPF_OutParm )

void ATGMechaWeap_FlameThrowerSprayBase::GetAimVector ( struct FVector StartLoc, struct FVector* vForward, struct FVector* vRight, struct FVector* vUp )
{
	static UFunction* pFnGetAimVector = NULL;

	if ( ! pFnGetAimVector )
		pFnGetAimVector = (UFunction*) UObject::GObjObjects()->Data[ 215175 ];

	ATGMechaWeap_FlameThrowerSprayBase_execGetAimVector_Parms GetAimVector_Parms;
	memcpy ( &GetAimVector_Parms.StartLoc, &StartLoc, 0xC );

	this->ProcessEvent ( pFnGetAimVector, &GetAimVector_Parms, NULL );

	if ( vForward )
		memcpy ( vForward, &GetAimVector_Parms.vForward, 0xC );

	if ( vRight )
		memcpy ( vRight, &GetAimVector_Parms.vRight, 0xC );

	if ( vUp )
		memcpy ( vUp, &GetAimVector_Parms.vUp, 0xC );
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.GetFireLineTraceVector
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartLoc                       ( CPF_Parm )

struct FVector ATGMechaWeap_FlameThrowerSprayBase::GetFireLineTraceVector ( struct FVector StartLoc )
{
	static UFunction* pFnGetFireLineTraceVector = NULL;

	if ( ! pFnGetFireLineTraceVector )
		pFnGetFireLineTraceVector = (UFunction*) UObject::GObjObjects()->Data[ 215169 ];

	ATGMechaWeap_FlameThrowerSprayBase_execGetFireLineTraceVector_Parms GetFireLineTraceVector_Parms;
	memcpy ( &GetFireLineTraceVector_Parms.StartLoc, &StartLoc, 0xC );

	this->ProcessEvent ( pFnGetFireLineTraceVector, &GetFireLineTraceVector_Parms, NULL );

	return GetFireLineTraceVector_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.Tick
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGMechaWeap_FlameThrowerSprayBase::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 215148 ];

	ATGMechaWeap_FlameThrowerSprayBase_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.DoFlameCollisionDetection
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGMechaWeap_FlameThrowerSprayBase::DoFlameCollisionDetection ( float DeltaTime )
{
	static UFunction* pFnDoFlameCollisionDetection = NULL;

	if ( ! pFnDoFlameCollisionDetection )
		pFnDoFlameCollisionDetection = (UFunction*) UObject::GObjObjects()->Data[ 215146 ];

	ATGMechaWeap_FlameThrowerSprayBase_execDoFlameCollisionDetection_Parms DoFlameCollisionDetection_Parms;
	DoFlameCollisionDetection_Parms.DeltaTime = DeltaTime;

	pFnDoFlameCollisionDetection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDoFlameCollisionDetection, &DoFlameCollisionDetection_Parms, NULL );

	pFnDoFlameCollisionDetection->FunctionFlags |= 0x400;
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.DebugRenderBones
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void ATGMechaWeap_FlameThrowerSprayBase::DebugRenderBones ( )
{
	static UFunction* pFnDebugRenderBones = NULL;

	if ( ! pFnDebugRenderBones )
		pFnDebugRenderBones = (UFunction*) UObject::GObjObjects()->Data[ 215145 ];

	ATGMechaWeap_FlameThrowerSprayBase_execDebugRenderBones_Parms DebugRenderBones_Parms;

	pFnDebugRenderBones->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDebugRenderBones, &DebugRenderBones_Parms, NULL );

	pFnDebugRenderBones->FunctionFlags |= 0x400;
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.SetBoneSpawnParticlesActive
// [0x00080102] 
// Parameters infos:
// class UParticleSystemComponent* PSC                            ( CPF_Parm | CPF_EditInline )
// unsigned long                  bActive                        ( CPF_Parm )

void ATGMechaWeap_FlameThrowerSprayBase::SetBoneSpawnParticlesActive ( class UParticleSystemComponent* PSC, unsigned long bActive )
{
	static UFunction* pFnSetBoneSpawnParticlesActive = NULL;

	if ( ! pFnSetBoneSpawnParticlesActive )
		pFnSetBoneSpawnParticlesActive = (UFunction*) UObject::GObjObjects()->Data[ 215142 ];

	ATGMechaWeap_FlameThrowerSprayBase_execSetBoneSpawnParticlesActive_Parms SetBoneSpawnParticlesActive_Parms;
	SetBoneSpawnParticlesActive_Parms.PSC = PSC;
	SetBoneSpawnParticlesActive_Parms.bActive = bActive;

	this->ProcessEvent ( pFnSetBoneSpawnParticlesActive, &SetBoneSpawnParticlesActive_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.UpdatePerBoneFireFX
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGMechaWeap_FlameThrowerSprayBase::UpdatePerBoneFireFX ( float DeltaTime )
{
	static UFunction* pFnUpdatePerBoneFireFX = NULL;

	if ( ! pFnUpdatePerBoneFireFX )
		pFnUpdatePerBoneFireFX = (UFunction*) UObject::GObjObjects()->Data[ 215137 ];

	ATGMechaWeap_FlameThrowerSprayBase_execUpdatePerBoneFireFX_Parms UpdatePerBoneFireFX_Parms;
	UpdatePerBoneFireFX_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdatePerBoneFireFX, &UpdatePerBoneFireFX_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.SetupUpParaForFrameDamage
// [0x00020102] 
// Parameters infos:
// float                          MinDamagePerSeconds            ( CPF_Parm )
// float                          MaxDamagePerSeconds            ( CPF_Parm )
// float                          LocalEnergyDamagePerSecond     ( CPF_Parm )
// float                          SprayDamageInterval            ( CPF_Parm )
// float                          WeaponSeedSprayVel             ( CPF_Parm )
// float                          WeaponSeedDecel                ( CPF_Parm )
// float                          WeaponSeedMaxAge               ( CPF_Parm )
// float                          WeaponSeedMinChainLength       ( CPF_Parm )
// float                          WeaponSeedSimFreq              ( CPF_Parm )

void ATGMechaWeap_FlameThrowerSprayBase::SetupUpParaForFrameDamage ( float MinDamagePerSeconds, float MaxDamagePerSeconds, float LocalEnergyDamagePerSecond, float SprayDamageInterval, float WeaponSeedSprayVel, float WeaponSeedDecel, float WeaponSeedMaxAge, float WeaponSeedMinChainLength, float WeaponSeedSimFreq )
{
	static UFunction* pFnSetupUpParaForFrameDamage = NULL;

	if ( ! pFnSetupUpParaForFrameDamage )
		pFnSetupUpParaForFrameDamage = (UFunction*) UObject::GObjObjects()->Data[ 215127 ];

	ATGMechaWeap_FlameThrowerSprayBase_execSetupUpParaForFrameDamage_Parms SetupUpParaForFrameDamage_Parms;
	SetupUpParaForFrameDamage_Parms.MinDamagePerSeconds = MinDamagePerSeconds;
	SetupUpParaForFrameDamage_Parms.MaxDamagePerSeconds = MaxDamagePerSeconds;
	SetupUpParaForFrameDamage_Parms.LocalEnergyDamagePerSecond = LocalEnergyDamagePerSecond;
	SetupUpParaForFrameDamage_Parms.SprayDamageInterval = SprayDamageInterval;
	SetupUpParaForFrameDamage_Parms.WeaponSeedSprayVel = WeaponSeedSprayVel;
	SetupUpParaForFrameDamage_Parms.WeaponSeedDecel = WeaponSeedDecel;
	SetupUpParaForFrameDamage_Parms.WeaponSeedMaxAge = WeaponSeedMaxAge;
	SetupUpParaForFrameDamage_Parms.WeaponSeedMinChainLength = WeaponSeedMinChainLength;
	SetupUpParaForFrameDamage_Parms.WeaponSeedSimFreq = WeaponSeedSimFreq;

	this->ProcessEvent ( pFnSetupUpParaForFrameDamage, &SetupUpParaForFrameDamage_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.AttachToWeapon
// [0x00020102] 
// Parameters infos:
// class AActor*                  InOwner                        ( CPF_Parm )
// struct FName                   SocketName                     ( CPF_Parm )
// class USkeletalMeshComponent*  MeshToAttachTo                 ( CPF_Parm | CPF_EditInline )
// float                          LocalMinDamagePerSeconds       ( CPF_Parm )
// float                          LocalMaxDamagePerSeconds       ( CPF_Parm )
// float                          LocalEnergyDamagePerSecond     ( CPF_Parm )
// float                          LocalDamageInterval            ( CPF_Parm )
// float                          LocalWeaponSeedSprayVel        ( CPF_Parm )
// float                          LocalWeaponSeedDecel           ( CPF_Parm )
// float                          LocalWeaponSeedMaxAge          ( CPF_Parm )
// float                          LocalWeaponSeedMinChainLength  ( CPF_Parm )
// float                          LocalWeaponSeedSimFreq         ( CPF_Parm )

void ATGMechaWeap_FlameThrowerSprayBase::AttachToWeapon ( class AActor* InOwner, struct FName SocketName, class USkeletalMeshComponent* MeshToAttachTo, float LocalMinDamagePerSeconds, float LocalMaxDamagePerSeconds, float LocalEnergyDamagePerSecond, float LocalDamageInterval, float LocalWeaponSeedSprayVel, float LocalWeaponSeedDecel, float LocalWeaponSeedMaxAge, float LocalWeaponSeedMinChainLength, float LocalWeaponSeedSimFreq )
{
	static UFunction* pFnAttachToWeapon = NULL;

	if ( ! pFnAttachToWeapon )
		pFnAttachToWeapon = (UFunction*) UObject::GObjObjects()->Data[ 215114 ];

	ATGMechaWeap_FlameThrowerSprayBase_execAttachToWeapon_Parms AttachToWeapon_Parms;
	AttachToWeapon_Parms.InOwner = InOwner;
	memcpy ( &AttachToWeapon_Parms.SocketName, &SocketName, 0x8 );
	AttachToWeapon_Parms.MeshToAttachTo = MeshToAttachTo;
	AttachToWeapon_Parms.LocalMinDamagePerSeconds = LocalMinDamagePerSeconds;
	AttachToWeapon_Parms.LocalMaxDamagePerSeconds = LocalMaxDamagePerSeconds;
	AttachToWeapon_Parms.LocalEnergyDamagePerSecond = LocalEnergyDamagePerSecond;
	AttachToWeapon_Parms.LocalDamageInterval = LocalDamageInterval;
	AttachToWeapon_Parms.LocalWeaponSeedSprayVel = LocalWeaponSeedSprayVel;
	AttachToWeapon_Parms.LocalWeaponSeedDecel = LocalWeaponSeedDecel;
	AttachToWeapon_Parms.LocalWeaponSeedMaxAge = LocalWeaponSeedMaxAge;
	AttachToWeapon_Parms.LocalWeaponSeedMinChainLength = LocalWeaponSeedMinChainLength;
	AttachToWeapon_Parms.LocalWeaponSeedSimFreq = LocalWeaponSeedSimFreq;

	this->ProcessEvent ( pFnAttachToWeapon, &AttachToWeapon_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.SetupPerBoneFireFX
// [0x00040103] ( FUNC_Final )
// Parameters infos:

void ATGMechaWeap_FlameThrowerSprayBase::SetupPerBoneFireFX ( )
{
	static UFunction* pFnSetupPerBoneFireFX = NULL;

	if ( ! pFnSetupPerBoneFireFX )
		pFnSetupPerBoneFireFX = (UFunction*) UObject::GObjObjects()->Data[ 215099 ];

	ATGMechaWeap_FlameThrowerSprayBase_execSetupPerBoneFireFX_Parms SetupPerBoneFireFX_Parms;

	this->ProcessEvent ( pFnSetupPerBoneFireFX, &SetupPerBoneFireFX_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.DestroyIfAllEmittersFinished
// [0x00040501] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void ATGMechaWeap_FlameThrowerSprayBase::DestroyIfAllEmittersFinished ( )
{
	static UFunction* pFnDestroyIfAllEmittersFinished = NULL;

	if ( ! pFnDestroyIfAllEmittersFinished )
		pFnDestroyIfAllEmittersFinished = (UFunction*) UObject::GObjObjects()->Data[ 215111 ];

	ATGMechaWeap_FlameThrowerSprayBase_execDestroyIfAllEmittersFinished_Parms DestroyIfAllEmittersFinished_Parms;

	pFnDestroyIfAllEmittersFinished->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyIfAllEmittersFinished, &DestroyIfAllEmittersFinished_Parms, NULL );

	pFnDestroyIfAllEmittersFinished->FunctionFlags |= 0x400;
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.OnAnimEnd
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void ATGMechaWeap_FlameThrowerSprayBase::eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnOnAnimEnd = NULL;

	if ( ! pFnOnAnimEnd )
		pFnOnAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 215106 ];

	ATGMechaWeap_FlameThrowerSprayBase_eventOnAnimEnd_Parms OnAnimEnd_Parms;
	OnAnimEnd_Parms.SeqNode = SeqNode;
	OnAnimEnd_Parms.PlayedTime = PlayedTime;
	OnAnimEnd_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnOnAnimEnd, &OnAnimEnd_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.DetachAndFinish
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_FlameThrowerSprayBase::DetachAndFinish ( )
{
	static UFunction* pFnDetachAndFinish = NULL;

	if ( ! pFnDetachAndFinish )
		pFnDetachAndFinish = (UFunction*) UObject::GObjObjects()->Data[ 215105 ];

	ATGMechaWeap_FlameThrowerSprayBase_execDetachAndFinish_Parms DetachAndFinish_Parms;

	this->ProcessEvent ( pFnDetachAndFinish, &DetachAndFinish_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.ClearMeshPruning
// [0x00080102] 
// Parameters infos:

void ATGMechaWeap_FlameThrowerSprayBase::ClearMeshPruning ( )
{
	static UFunction* pFnClearMeshPruning = NULL;

	if ( ! pFnClearMeshPruning )
		pFnClearMeshPruning = (UFunction*) UObject::GObjObjects()->Data[ 215104 ];

	ATGMechaWeap_FlameThrowerSprayBase_execClearMeshPruning_Parms ClearMeshPruning_Parms;

	this->ProcessEvent ( pFnClearMeshPruning, &ClearMeshPruning_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.Destroyed
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_FlameThrowerSprayBase::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 215102 ];

	ATGMechaWeap_FlameThrowerSprayBase_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.BeginSpray
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_FlameThrowerSprayBase::BeginSpray ( )
{
	static UFunction* pFnBeginSpray = NULL;

	if ( ! pFnBeginSpray )
		pFnBeginSpray = (UFunction*) UObject::GObjObjects()->Data[ 215100 ];

	ATGMechaWeap_FlameThrowerSprayBase_execBeginSpray_Parms BeginSpray_Parms;

	this->ProcessEvent ( pFnBeginSpray, &BeginSpray_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_FlameThrowerSprayBase::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 215096 ];

	ATGMechaWeap_FlameThrowerSprayBase_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.FinishActiveReloadSpray
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void ATGMechaWeap_FlameThrowerSprayBase::FinishActiveReloadSpray ( )
{
	static UFunction* pFnFinishActiveReloadSpray = NULL;

	if ( ! pFnFinishActiveReloadSpray )
		pFnFinishActiveReloadSpray = (UFunction*) UObject::GObjObjects()->Data[ 215094 ];

	ATGMechaWeap_FlameThrowerSprayBase_execFinishActiveReloadSpray_Parms FinishActiveReloadSpray_Parms;

	this->ProcessEvent ( pFnFinishActiveReloadSpray, &FinishActiveReloadSpray_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.PlayLoopingSound
// [0x00040103] ( FUNC_Final )
// Parameters infos:
// class UAudioComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USoundCue*               Cue                            ( CPF_Parm )
// class UAudioComponent*         AC                             ( CPF_Parm | CPF_EditInline )
// float                          FadeInTime                     ( CPF_Parm )

class UAudioComponent* ATGMechaWeap_FlameThrowerSprayBase::PlayLoopingSound ( class USoundCue* Cue, class UAudioComponent* AC, float FadeInTime )
{
	static UFunction* pFnPlayLoopingSound = NULL;

	if ( ! pFnPlayLoopingSound )
		pFnPlayLoopingSound = (UFunction*) UObject::GObjObjects()->Data[ 215089 ];

	ATGMechaWeap_FlameThrowerSprayBase_execPlayLoopingSound_Parms PlayLoopingSound_Parms;
	PlayLoopingSound_Parms.Cue = Cue;
	PlayLoopingSound_Parms.AC = AC;
	PlayLoopingSound_Parms.FadeInTime = FadeInTime;

	this->ProcessEvent ( pFnPlayLoopingSound, &PlayLoopingSound_Parms, NULL );

	return PlayLoopingSound_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.GetEnergyDamage
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          BurnTime                       ( CPF_Parm )

float ATGMechaWeap_FlameThrowerSprayBase::GetEnergyDamage ( float BurnTime )
{
	static UFunction* pFnGetEnergyDamage = NULL;

	if ( ! pFnGetEnergyDamage )
		pFnGetEnergyDamage = (UFunction*) UObject::GObjObjects()->Data[ 215086 ];

	ATGMechaWeap_FlameThrowerSprayBase_execGetEnergyDamage_Parms GetEnergyDamage_Parms;
	GetEnergyDamage_Parms.BurnTime = BurnTime;

	this->ProcessEvent ( pFnGetEnergyDamage, &GetEnergyDamage_Parms, NULL );

	return GetEnergyDamage_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.GetDamage
// [0x00840003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          BurnTime                       ( CPF_Parm )
// float                          HitDist                        ( CPF_Parm )

float ATGMechaWeap_FlameThrowerSprayBase::GetDamage ( float BurnTime, float HitDist )
{
	static UFunction* pFnGetDamage = NULL;

	if ( ! pFnGetDamage )
		pFnGetDamage = (UFunction*) UObject::GObjObjects()->Data[ 215078 ];

	ATGMechaWeap_FlameThrowerSprayBase_execGetDamage_Parms GetDamage_Parms;
	GetDamage_Parms.BurnTime = BurnTime;
	GetDamage_Parms.HitDist = HitDist;

	this->ProcessEvent ( pFnGetDamage, &GetDamage_Parms, NULL );

	return GetDamage_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.GetFlickerVal
// [0x00040103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          BaseVal                        ( CPF_Parm )
// float                          Intensity                      ( CPF_Parm )
// float                          Last                           ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// float                          InterpSpeed                    ( CPF_Parm )

float ATGMechaWeap_FlameThrowerSprayBase::GetFlickerVal ( float BaseVal, float Intensity, float Last, float DeltaTime, float InterpSpeed )
{
	static UFunction* pFnGetFlickerVal = NULL;

	if ( ! pFnGetFlickerVal )
		pFnGetFlickerVal = (UFunction*) UObject::GObjObjects()->Data[ 215070 ];

	ATGMechaWeap_FlameThrowerSprayBase_execGetFlickerVal_Parms GetFlickerVal_Parms;
	GetFlickerVal_Parms.BaseVal = BaseVal;
	GetFlickerVal_Parms.Intensity = Intensity;
	GetFlickerVal_Parms.Last = Last;
	GetFlickerVal_Parms.DeltaTime = DeltaTime;
	GetFlickerVal_Parms.InterpSpeed = InterpSpeed;

	this->ProcessEvent ( pFnGetFlickerVal, &GetFlickerVal_Parms, NULL );

	return GetFlickerVal_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.ClearAnimNodes
// [0x00040103] ( FUNC_Final )
// Parameters infos:

void ATGMechaWeap_FlameThrowerSprayBase::ClearAnimNodes ( )
{
	static UFunction* pFnClearAnimNodes = NULL;

	if ( ! pFnClearAnimNodes )
		pFnClearAnimNodes = (UFunction*) UObject::GObjObjects()->Data[ 215069 ];

	ATGMechaWeap_FlameThrowerSprayBase_execClearAnimNodes_Parms ClearAnimNodes_Parms;

	this->ProcessEvent ( pFnClearAnimNodes, &ClearAnimNodes_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.CacheAnimNodes
// [0x00040103] ( FUNC_Final )
// Parameters infos:

void ATGMechaWeap_FlameThrowerSprayBase::CacheAnimNodes ( )
{
	static UFunction* pFnCacheAnimNodes = NULL;

	if ( ! pFnCacheAnimNodes )
		pFnCacheAnimNodes = (UFunction*) UObject::GObjObjects()->Data[ 215068 ];

	ATGMechaWeap_FlameThrowerSprayBase_execCacheAnimNodes_Parms CacheAnimNodes_Parms;

	this->ProcessEvent ( pFnCacheAnimNodes, &CacheAnimNodes_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.FlameSetLocation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaWeap_FlameThrowerSprayBase::FlameSetLocation ( )
{
	static UFunction* pFnFlameSetLocation = NULL;

	if ( ! pFnFlameSetLocation )
		pFnFlameSetLocation = (UFunction*) UObject::GObjObjects()->Data[ 215066 ];

	ATGMechaWeap_FlameThrowerSprayBase_execFlameSetLocation_Parms FlameSetLocation_Parms;

	pFnFlameSetLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFlameSetLocation, &FlameSetLocation_Parms, NULL );

	pFnFlameSetLocation->FunctionFlags |= 0x400;

	return FlameSetLocation_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_FlameThrowerSprayBase.UpdateFlameSeeds
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FVector                 VelDirection                   ( CPF_Parm )

void ATGMechaWeap_FlameThrowerSprayBase::UpdateFlameSeeds ( float DeltaTime, struct FVector VelDirection )
{
	static UFunction* pFnUpdateFlameSeeds = NULL;

	if ( ! pFnUpdateFlameSeeds )
		pFnUpdateFlameSeeds = (UFunction*) UObject::GObjObjects()->Data[ 215063 ];

	ATGMechaWeap_FlameThrowerSprayBase_execUpdateFlameSeeds_Parms UpdateFlameSeeds_Parms;
	UpdateFlameSeeds_Parms.DeltaTime = DeltaTime;
	memcpy ( &UpdateFlameSeeds_Parms.VelDirection, &VelDirection, 0xC );

	pFnUpdateFlameSeeds->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateFlameSeeds, &UpdateFlameSeeds_Parms, NULL );

	pFnUpdateFlameSeeds->FunctionFlags |= 0x400;
};

// Function MechaGame.TGMechaWeaponBase.CalcProjTrajectory
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 StartLoc                       ( CPF_Parm )
// struct FVector                 AimDir                         ( CPF_Parm )
// float                          ProjLifeSpan                   ( CPF_Parm )
// float                          projSpeed                      ( CPF_Parm )
// float                          ProjMaxSpeed                   ( CPF_Parm )
// float                          ProjAccelRate                  ( CPF_Parm )
// float                          ProjGravityScaling             ( CPF_Parm )

void ATGMechaWeaponBase::CalcProjTrajectory ( struct FVector StartLoc, struct FVector AimDir, float ProjLifeSpan, float projSpeed, float ProjMaxSpeed, float ProjAccelRate, float ProjGravityScaling )
{
	static UFunction* pFnCalcProjTrajectory = NULL;

	if ( ! pFnCalcProjTrajectory )
		pFnCalcProjTrajectory = (UFunction*) UObject::GObjObjects()->Data[ 211042 ];

	ATGMechaWeaponBase_execCalcProjTrajectory_Parms CalcProjTrajectory_Parms;
	memcpy ( &CalcProjTrajectory_Parms.StartLoc, &StartLoc, 0xC );
	memcpy ( &CalcProjTrajectory_Parms.AimDir, &AimDir, 0xC );
	CalcProjTrajectory_Parms.ProjLifeSpan = ProjLifeSpan;
	CalcProjTrajectory_Parms.projSpeed = projSpeed;
	CalcProjTrajectory_Parms.ProjMaxSpeed = ProjMaxSpeed;
	CalcProjTrajectory_Parms.ProjAccelRate = ProjAccelRate;
	CalcProjTrajectory_Parms.ProjGravityScaling = ProjGravityScaling;

	pFnCalcProjTrajectory->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCalcProjTrajectory, &CalcProjTrajectory_Parms, NULL );

	pFnCalcProjTrajectory->FunctionFlags |= 0x400;
};

// Function MechaGame.TGMechaAnimBlendByFlying.UpdateFlyingState
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTGMechaAnimBlendByFlying::UpdateFlyingState ( )
{
	static UFunction* pFnUpdateFlyingState = NULL;

	if ( ! pFnUpdateFlyingState )
		pFnUpdateFlyingState = (UFunction*) UObject::GObjObjects()->Data[ 211570 ];

	UTGMechaAnimBlendByFlying_execUpdateFlyingState_Parms UpdateFlyingState_Parms;

	pFnUpdateFlyingState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateFlyingState, &UpdateFlyingState_Parms, NULL );

	pFnUpdateFlyingState->FunctionFlags |= 0x400;
};

// Function MechaGame.TGMechaAnimNodeSeqWeap.WeapTypeChanged
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   NewAimProfileName              ( CPF_Parm )

void UTGMechaAnimNodeSeqWeap::eventWeapTypeChanged ( struct FName NewAimProfileName )
{
	static UFunction* pFnWeapTypeChanged = NULL;

	if ( ! pFnWeapTypeChanged )
		pFnWeapTypeChanged = (UFunction*) UObject::GObjObjects()->Data[ 211583 ];

	UTGMechaAnimNodeSeqWeap_eventWeapTypeChanged_Parms WeapTypeChanged_Parms;
	memcpy ( &WeapTypeChanged_Parms.NewAimProfileName, &NewAimProfileName, 0x8 );

	this->ProcessEvent ( pFnWeapTypeChanged, &WeapTypeChanged_Parms, NULL );
};

// Function MechaGame.TGMechaSkelCtrl_FlamethrowerScaling.ResetTransients
// [0x00020102] 
// Parameters infos:

void UTGMechaSkelCtrl_FlamethrowerScaling::ResetTransients ( )
{
	static UFunction* pFnResetTransients = NULL;

	if ( ! pFnResetTransients )
		pFnResetTransients = (UFunction*) UObject::GObjObjects()->Data[ 214361 ];

	UTGMechaSkelCtrl_FlamethrowerScaling_execResetTransients_Parms ResetTransients_Parms;

	this->ProcessEvent ( pFnResetTransients, &ResetTransients_Parms, NULL );
};

// Function MechaGame.MechaBase.SetMovementPhysics
// [0x00020002] 
// Parameters infos:

void AMechaBase::SetMovementPhysics ( )
{
	static UFunction* pFnSetMovementPhysics = NULL;

	if ( ! pFnSetMovementPhysics )
		pFnSetMovementPhysics = (UFunction*) UObject::GObjObjects()->Data[ 208431 ];

	AMechaBase_execSetMovementPhysics_Parms SetMovementPhysics_Parms;

	this->ProcessEvent ( pFnSetMovementPhysics, &SetMovementPhysics_Parms, NULL );
};

// Function MechaGame.MechaBase.GetCurrentSpecialMove
// [0x00020102] 
// Parameters infos:
// class UMechaSpecialMove*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UMechaSpecialMove* AMechaBase::GetCurrentSpecialMove ( )
{
	static UFunction* pFnGetCurrentSpecialMove = NULL;

	if ( ! pFnGetCurrentSpecialMove )
		pFnGetCurrentSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 208429 ];

	AMechaBase_execGetCurrentSpecialMove_Parms GetCurrentSpecialMove_Parms;

	this->ProcessEvent ( pFnGetCurrentSpecialMove, &GetCurrentSpecialMove_Parms, NULL );

	return GetCurrentSpecialMove_Parms.ReturnValue;
};

// Function MechaGame.MechaBase.IsDoingAdditivSpecialMove
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  AMove                          ( CPF_Parm )

bool AMechaBase::IsDoingAdditivSpecialMove ( unsigned char AMove )
{
	static UFunction* pFnIsDoingAdditivSpecialMove = NULL;

	if ( ! pFnIsDoingAdditivSpecialMove )
		pFnIsDoingAdditivSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 208394 ];

	AMechaBase_execIsDoingAdditivSpecialMove_Parms IsDoingAdditivSpecialMove_Parms;
	IsDoingAdditivSpecialMove_Parms.AMove = AMove;

	pFnIsDoingAdditivSpecialMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsDoingAdditivSpecialMove, &IsDoingAdditivSpecialMove_Parms, NULL );

	pFnIsDoingAdditivSpecialMove->FunctionFlags |= 0x400;

	return IsDoingAdditivSpecialMove_Parms.ReturnValue;
};

// Function MechaGame.MechaBase.IsDoingASpecialMove
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AMechaBase::IsDoingASpecialMove ( )
{
	static UFunction* pFnIsDoingASpecialMove = NULL;

	if ( ! pFnIsDoingASpecialMove )
		pFnIsDoingASpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 208395 ];

	AMechaBase_execIsDoingASpecialMove_Parms IsDoingASpecialMove_Parms;

	pFnIsDoingASpecialMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsDoingASpecialMove, &IsDoingASpecialMove_Parms, NULL );

	pFnIsDoingASpecialMove->FunctionFlags |= 0x400;

	return IsDoingASpecialMove_Parms.ReturnValue;
};

// Function MechaGame.MechaBase.IsDoingSpecialMove
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  AMove                          ( CPF_Parm )

bool AMechaBase::IsDoingSpecialMove ( unsigned char AMove )
{
	static UFunction* pFnIsDoingSpecialMove = NULL;

	if ( ! pFnIsDoingSpecialMove )
		pFnIsDoingSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 208396 ];

	AMechaBase_execIsDoingSpecialMove_Parms IsDoingSpecialMove_Parms;
	IsDoingSpecialMove_Parms.AMove = AMove;

	pFnIsDoingSpecialMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsDoingSpecialMove, &IsDoingSpecialMove_Parms, NULL );

	pFnIsDoingSpecialMove->FunctionFlags |= 0x400;

	return IsDoingSpecialMove_Parms.ReturnValue;
};

// Function MechaGame.MechaBase.FillSpecialMoveStructFromParams
// [0x00824103] ( FUNC_Final )
// Parameters infos:
// struct FMechaSpecialMoveStruct ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  InSpecialMove                  ( CPF_Parm )
// int                            InSpecialMoveFlags             ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bInAdditive                    ( CPF_OptionalParm | CPF_Parm )

struct FMechaSpecialMoveStruct AMechaBase::FillSpecialMoveStructFromParams ( unsigned char InSpecialMove, int InSpecialMoveFlags, unsigned long bInAdditive )
{
	static UFunction* pFnFillSpecialMoveStructFromParams = NULL;

	if ( ! pFnFillSpecialMoveStructFromParams )
		pFnFillSpecialMoveStructFromParams = (UFunction*) UObject::GObjObjects()->Data[ 208373 ];

	AMechaBase_execFillSpecialMoveStructFromParams_Parms FillSpecialMoveStructFromParams_Parms;
	FillSpecialMoveStructFromParams_Parms.InSpecialMove = InSpecialMove;
	FillSpecialMoveStructFromParams_Parms.InSpecialMoveFlags = InSpecialMoveFlags;
	FillSpecialMoveStructFromParams_Parms.bInAdditive = bInAdditive;

	this->ProcessEvent ( pFnFillSpecialMoveStructFromParams, &FillSpecialMoveStructFromParams_Parms, NULL );

	return FillSpecialMoveStructFromParams_Parms.ReturnValue;
};

// Function MechaGame.MechaBase.VerifySpecialMoveHasBeenInstanced
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  AMove                          ( CPF_Parm )

bool AMechaBase::VerifySpecialMoveHasBeenInstanced ( unsigned char AMove )
{
	static UFunction* pFnVerifySpecialMoveHasBeenInstanced = NULL;

	if ( ! pFnVerifySpecialMoveHasBeenInstanced )
		pFnVerifySpecialMoveHasBeenInstanced = (UFunction*) UObject::GObjObjects()->Data[ 208372 ];

	AMechaBase_execVerifySpecialMoveHasBeenInstanced_Parms VerifySpecialMoveHasBeenInstanced_Parms;
	VerifySpecialMoveHasBeenInstanced_Parms.AMove = AMove;

	this->ProcessEvent ( pFnVerifySpecialMoveHasBeenInstanced, &VerifySpecialMoveHasBeenInstanced_Parms, NULL );

	return VerifySpecialMoveHasBeenInstanced_Parms.ReturnValue;
};

// Function MechaGame.MechaBase.CanChainSpecialMove
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  NextMove                       ( CPF_Parm )

bool AMechaBase::CanChainSpecialMove ( unsigned char NextMove )
{
	static UFunction* pFnCanChainSpecialMove = NULL;

	if ( ! pFnCanChainSpecialMove )
		pFnCanChainSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 208410 ];

	AMechaBase_execCanChainSpecialMove_Parms CanChainSpecialMove_Parms;
	CanChainSpecialMove_Parms.NextMove = NextMove;

	this->ProcessEvent ( pFnCanChainSpecialMove, &CanChainSpecialMove_Parms, NULL );

	return CanChainSpecialMove_Parms.ReturnValue;
};

// Function MechaGame.MechaBase.CanDoSpecialMove
// [0x00024903] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  AMove                          ( CPF_Parm )
// unsigned long                  bForceCheck                    ( CPF_OptionalParm | CPF_Parm )

bool AMechaBase::eventCanDoSpecialMove ( unsigned char AMove, unsigned long bForceCheck )
{
	static UFunction* pFnCanDoSpecialMove = NULL;

	if ( ! pFnCanDoSpecialMove )
		pFnCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 208354 ];

	AMechaBase_eventCanDoSpecialMove_Parms CanDoSpecialMove_Parms;
	CanDoSpecialMove_Parms.AMove = AMove;
	CanDoSpecialMove_Parms.bForceCheck = bForceCheck;

	this->ProcessEvent ( pFnCanDoSpecialMove, &CanDoSpecialMove_Parms, NULL );

	return CanDoSpecialMove_Parms.ReturnValue;
};

// Function MechaGame.MechaBase.SpecialMoveAssigned
// [0x00020102] 
// Parameters infos:
// unsigned char                  NewMove                        ( CPF_Parm )
// unsigned char                  PrevMove                       ( CPF_Parm )

void AMechaBase::SpecialMoveAssigned ( unsigned char NewMove, unsigned char PrevMove )
{
	static UFunction* pFnSpecialMoveAssigned = NULL;

	if ( ! pFnSpecialMoveAssigned )
		pFnSpecialMoveAssigned = (UFunction*) UObject::GObjObjects()->Data[ 208404 ];

	AMechaBase_execSpecialMoveAssigned_Parms SpecialMoveAssigned_Parms;
	SpecialMoveAssigned_Parms.NewMove = NewMove;
	SpecialMoveAssigned_Parms.PrevMove = PrevMove;

	this->ProcessEvent ( pFnSpecialMoveAssigned, &SpecialMoveAssigned_Parms, NULL );
};

// Function MechaGame.MechaBase.SpecialMoveEnded
// [0x00020102] 
// Parameters infos:
// unsigned char                  PrevMove                       ( CPF_Parm )
// unsigned char                  NextMove                       ( CPF_Parm )

void AMechaBase::SpecialMoveEnded ( unsigned char PrevMove, unsigned char NextMove )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 208401 ];

	AMechaBase_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;
	SpecialMoveEnded_Parms.PrevMove = PrevMove;
	SpecialMoveEnded_Parms.NextMove = NextMove;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function MechaGame.MechaBase.SpecialMoveStarted
// [0x00020102] 
// Parameters infos:
// unsigned char                  NewMove                        ( CPF_Parm )
// unsigned char                  PrevMove                       ( CPF_Parm )
// unsigned long                  bForced                        ( CPF_Parm )

void AMechaBase::SpecialMoveStarted ( unsigned char NewMove, unsigned char PrevMove, unsigned long bForced )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 208397 ];

	AMechaBase_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;
	SpecialMoveStarted_Parms.NewMove = NewMove;
	SpecialMoveStarted_Parms.PrevMove = PrevMove;
	SpecialMoveStarted_Parms.bForced = bForced;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function MechaGame.MechaBase.EndSpecialMove
// [0x00024303] ( FUNC_Final | FUNC_Exec )
// Parameters infos:
// unsigned char                  SpecialMoveToEnd               ( CPF_OptionalParm | CPF_Parm )

void AMechaBase::EndSpecialMove ( unsigned char SpecialMoveToEnd )
{
	static UFunction* pFnEndSpecialMove = NULL;

	if ( ! pFnEndSpecialMove )
		pFnEndSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 208392 ];

	AMechaBase_execEndSpecialMove_Parms EndSpecialMove_Parms;
	EndSpecialMove_Parms.SpecialMoveToEnd = SpecialMoveToEnd;

	this->ProcessEvent ( pFnEndSpecialMove, &EndSpecialMove_Parms, NULL );
};

// Function MechaGame.MechaBase.ServerEndSpecialMove
// [0x002240C3] ( FUNC_Final )
// Parameters infos:
// unsigned char                  SpecialMoveToEnd               ( CPF_OptionalParm | CPF_Parm )

void AMechaBase::ServerEndSpecialMove ( unsigned char SpecialMoveToEnd )
{
	static UFunction* pFnServerEndSpecialMove = NULL;

	if ( ! pFnServerEndSpecialMove )
		pFnServerEndSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 208390 ];

	AMechaBase_execServerEndSpecialMove_Parms ServerEndSpecialMove_Parms;
	ServerEndSpecialMove_Parms.SpecialMoveToEnd = SpecialMoveToEnd;

	this->ProcessEvent ( pFnServerEndSpecialMove, &ServerEndSpecialMove_Parms, NULL );
};

// Function MechaGame.MechaBase.DoSpecialMoveFromStruct
// [0x00024103] ( FUNC_Final )
// Parameters infos:
// struct FMechaSpecialMoveStruct InSpecialMoveStruct            ( CPF_Parm )
// unsigned long                  bForceMove                     ( CPF_OptionalParm | CPF_Parm )

void AMechaBase::DoSpecialMoveFromStruct ( struct FMechaSpecialMoveStruct InSpecialMoveStruct, unsigned long bForceMove )
{
	static UFunction* pFnDoSpecialMoveFromStruct = NULL;

	if ( ! pFnDoSpecialMoveFromStruct )
		pFnDoSpecialMoveFromStruct = (UFunction*) UObject::GObjObjects()->Data[ 208286 ];

	AMechaBase_execDoSpecialMoveFromStruct_Parms DoSpecialMoveFromStruct_Parms;
	memcpy ( &DoSpecialMoveFromStruct_Parms.InSpecialMoveStruct, &InSpecialMoveStruct, 0x10 );
	DoSpecialMoveFromStruct_Parms.bForceMove = bForceMove;

	this->ProcessEvent ( pFnDoSpecialMoveFromStruct, &DoSpecialMoveFromStruct_Parms, NULL );
};

// Function MechaGame.MechaBase.DoAdditivSpecialMove
// [0x00824902] ( FUNC_Event )
// Parameters infos:
// unsigned char                  NewMove                        ( CPF_Parm )
// unsigned long                  bForceMove                     ( CPF_OptionalParm | CPF_Parm )
// int                            InSpecialMoveFlags             ( CPF_OptionalParm | CPF_Parm )

void AMechaBase::eventDoAdditivSpecialMove ( unsigned char NewMove, unsigned long bForceMove, int InSpecialMoveFlags )
{
	static UFunction* pFnDoAdditivSpecialMove = NULL;

	if ( ! pFnDoAdditivSpecialMove )
		pFnDoAdditivSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 208383 ];

	AMechaBase_eventDoAdditivSpecialMove_Parms DoAdditivSpecialMove_Parms;
	DoAdditivSpecialMove_Parms.NewMove = NewMove;
	DoAdditivSpecialMove_Parms.bForceMove = bForceMove;
	DoAdditivSpecialMove_Parms.InSpecialMoveFlags = InSpecialMoveFlags;

	this->ProcessEvent ( pFnDoAdditivSpecialMove, &DoAdditivSpecialMove_Parms, NULL );
};

// Function MechaGame.MechaBase.DoSpecialMove
// [0x00824902] ( FUNC_Event )
// Parameters infos:
// unsigned char                  NewMove                        ( CPF_Parm )
// unsigned long                  bForceMove                     ( CPF_OptionalParm | CPF_Parm )
// int                            InSpecialMoveFlags             ( CPF_OptionalParm | CPF_Parm )

void AMechaBase::eventDoSpecialMove ( unsigned char NewMove, unsigned long bForceMove, int InSpecialMoveFlags )
{
	static UFunction* pFnDoSpecialMove = NULL;

	if ( ! pFnDoSpecialMove )
		pFnDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 208366 ];

	AMechaBase_eventDoSpecialMove_Parms DoSpecialMove_Parms;
	DoSpecialMove_Parms.NewMove = NewMove;
	DoSpecialMove_Parms.bForceMove = bForceMove;
	DoSpecialMove_Parms.InSpecialMoveFlags = InSpecialMoveFlags;

	this->ProcessEvent ( pFnDoSpecialMove, &DoSpecialMove_Parms, NULL );
};

// Function MechaGame.MechaBase.ServerDoSpecialMove
// [0x00024102] 
// Parameters infos:
// unsigned char                  NewMove                        ( CPF_Parm )
// unsigned long                  bForceMove                     ( CPF_OptionalParm | CPF_Parm )
// int                            InSpecialMoveFlags             ( CPF_OptionalParm | CPF_Parm )

void AMechaBase::ServerDoSpecialMove ( unsigned char NewMove, unsigned long bForceMove, int InSpecialMoveFlags )
{
	static UFunction* pFnServerDoSpecialMove = NULL;

	if ( ! pFnServerDoSpecialMove )
		pFnServerDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 208361 ];

	AMechaBase_execServerDoSpecialMove_Parms ServerDoSpecialMove_Parms;
	ServerDoSpecialMove_Parms.NewMove = NewMove;
	ServerDoSpecialMove_Parms.bForceMove = bForceMove;
	ServerDoSpecialMove_Parms.InSpecialMoveFlags = InSpecialMoveFlags;

	this->ProcessEvent ( pFnServerDoSpecialMove, &ServerDoSpecialMove_Parms, NULL );
};

// Function MechaGame.MechaBase.LocalDoAdditivSpecialMove
// [0x00024102] 
// Parameters infos:
// unsigned char                  NewMove                        ( CPF_Parm )
// unsigned long                  bForceMove                     ( CPF_OptionalParm | CPF_Parm )
// int                            InSpecialMoveFlags             ( CPF_OptionalParm | CPF_Parm )

void AMechaBase::LocalDoAdditivSpecialMove ( unsigned char NewMove, unsigned long bForceMove, int InSpecialMoveFlags )
{
	static UFunction* pFnLocalDoAdditivSpecialMove = NULL;

	if ( ! pFnLocalDoAdditivSpecialMove )
		pFnLocalDoAdditivSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 208356 ];

	AMechaBase_execLocalDoAdditivSpecialMove_Parms LocalDoAdditivSpecialMove_Parms;
	LocalDoAdditivSpecialMove_Parms.NewMove = NewMove;
	LocalDoAdditivSpecialMove_Parms.bForceMove = bForceMove;
	LocalDoAdditivSpecialMove_Parms.InSpecialMoveFlags = InSpecialMoveFlags;

	this->ProcessEvent ( pFnLocalDoAdditivSpecialMove, &LocalDoAdditivSpecialMove_Parms, NULL );
};

// Function MechaGame.MechaBase.LocalDoSpecialMove
// [0x00024102] 
// Parameters infos:
// unsigned char                  NewMove                        ( CPF_Parm )
// unsigned long                  bForceMove                     ( CPF_OptionalParm | CPF_Parm )
// int                            InSpecialMoveFlags             ( CPF_OptionalParm | CPF_Parm )

void AMechaBase::LocalDoSpecialMove ( unsigned char NewMove, unsigned long bForceMove, int InSpecialMoveFlags )
{
	static UFunction* pFnLocalDoSpecialMove = NULL;

	if ( ! pFnLocalDoSpecialMove )
		pFnLocalDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 208350 ];

	AMechaBase_execLocalDoSpecialMove_Parms LocalDoSpecialMove_Parms;
	LocalDoSpecialMove_Parms.NewMove = NewMove;
	LocalDoSpecialMove_Parms.bForceMove = bForceMove;
	LocalDoSpecialMove_Parms.InSpecialMoveFlags = InSpecialMoveFlags;

	this->ProcessEvent ( pFnLocalDoSpecialMove, &LocalDoSpecialMove_Parms, NULL );
};

// Function MechaGame.MechaBase.OnAnimEnd
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void AMechaBase::eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnOnAnimEnd = NULL;

	if ( ! pFnOnAnimEnd )
		pFnOnAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 208345 ];

	AMechaBase_eventOnAnimEnd_Parms OnAnimEnd_Parms;
	OnAnimEnd_Parms.SeqNode = SeqNode;
	OnAnimEnd_Parms.PlayedTime = PlayedTime;
	OnAnimEnd_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnOnAnimEnd, &OnAnimEnd_Parms, NULL );
};

// Function MechaGame.MechaBase.BS_AnimEndNotify
// [0x00020102] 
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void AMechaBase::BS_AnimEndNotify ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnBS_AnimEndNotify = NULL;

	if ( ! pFnBS_AnimEndNotify )
		pFnBS_AnimEndNotify = (UFunction*) UObject::GObjObjects()->Data[ 208339 ];

	AMechaBase_execBS_AnimEndNotify_Parms BS_AnimEndNotify_Parms;
	BS_AnimEndNotify_Parms.SeqNode = SeqNode;
	BS_AnimEndNotify_Parms.PlayedTime = PlayedTime;
	BS_AnimEndNotify_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnBS_AnimEndNotify, &BS_AnimEndNotify_Parms, NULL );
};

// Function MechaGame.MechaBase.BS_GetAnimPlaybackLength
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FMechaBodyStance        Stance                         ( CPF_Parm | CPF_NeedCtorLink )

float AMechaBase::BS_GetAnimPlaybackLength ( struct FMechaBodyStance Stance )
{
	static UFunction* pFnBS_GetAnimPlaybackLength = NULL;

	if ( ! pFnBS_GetAnimPlaybackLength )
		pFnBS_GetAnimPlaybackLength = (UFunction*) UObject::GObjObjects()->Data[ 208336 ];

	AMechaBase_execBS_GetAnimPlaybackLength_Parms BS_GetAnimPlaybackLength_Parms;
	memcpy ( &BS_GetAnimPlaybackLength_Parms.Stance, &Stance, 0xC );

	pFnBS_GetAnimPlaybackLength->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBS_GetAnimPlaybackLength, &BS_GetAnimPlaybackLength_Parms, NULL );

	pFnBS_GetAnimPlaybackLength->FunctionFlags |= 0x400;

	return BS_GetAnimPlaybackLength_Parms.ReturnValue;
};

// Function MechaGame.MechaBase.BS_SetRootBoneAxisOptions
// [0x00024501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMechaBodyStance        Stance                         ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  AxisX                          ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  AxisY                          ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  AxisZ                          ( CPF_OptionalParm | CPF_Parm )

void AMechaBase::BS_SetRootBoneAxisOptions ( struct FMechaBodyStance Stance, unsigned char AxisX, unsigned char AxisY, unsigned char AxisZ )
{
	static UFunction* pFnBS_SetRootBoneAxisOptions = NULL;

	if ( ! pFnBS_SetRootBoneAxisOptions )
		pFnBS_SetRootBoneAxisOptions = (UFunction*) UObject::GObjObjects()->Data[ 208331 ];

	AMechaBase_execBS_SetRootBoneAxisOptions_Parms BS_SetRootBoneAxisOptions_Parms;
	memcpy ( &BS_SetRootBoneAxisOptions_Parms.Stance, &Stance, 0xC );
	BS_SetRootBoneAxisOptions_Parms.AxisX = AxisX;
	BS_SetRootBoneAxisOptions_Parms.AxisY = AxisY;
	BS_SetRootBoneAxisOptions_Parms.AxisZ = AxisZ;

	pFnBS_SetRootBoneAxisOptions->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBS_SetRootBoneAxisOptions, &BS_SetRootBoneAxisOptions_Parms, NULL );

	pFnBS_SetRootBoneAxisOptions->FunctionFlags |= 0x400;
};

// Function MechaGame.MechaBase.BS_SetAnimEndNotify
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMechaBodyStance        Stance                         ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bNewStatus                     ( CPF_Parm )

void AMechaBase::BS_SetAnimEndNotify ( struct FMechaBodyStance Stance, unsigned long bNewStatus )
{
	static UFunction* pFnBS_SetAnimEndNotify = NULL;

	if ( ! pFnBS_SetAnimEndNotify )
		pFnBS_SetAnimEndNotify = (UFunction*) UObject::GObjObjects()->Data[ 208328 ];

	AMechaBase_execBS_SetAnimEndNotify_Parms BS_SetAnimEndNotify_Parms;
	memcpy ( &BS_SetAnimEndNotify_Parms.Stance, &Stance, 0xC );
	BS_SetAnimEndNotify_Parms.bNewStatus = bNewStatus;

	pFnBS_SetAnimEndNotify->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBS_SetAnimEndNotify, &BS_SetAnimEndNotify_Parms, NULL );

	pFnBS_SetAnimEndNotify->FunctionFlags |= 0x400;
};

// Function MechaGame.MechaBase.BS_Stop
// [0x00024501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMechaBodyStance        Stance                         ( CPF_Parm | CPF_NeedCtorLink )
// float                          BlendOutTime                   ( CPF_OptionalParm | CPF_Parm )

void AMechaBase::BS_Stop ( struct FMechaBodyStance Stance, float BlendOutTime )
{
	static UFunction* pFnBS_Stop = NULL;

	if ( ! pFnBS_Stop )
		pFnBS_Stop = (UFunction*) UObject::GObjObjects()->Data[ 208325 ];

	AMechaBase_execBS_Stop_Parms BS_Stop_Parms;
	memcpy ( &BS_Stop_Parms.Stance, &Stance, 0xC );
	BS_Stop_Parms.BlendOutTime = BlendOutTime;

	pFnBS_Stop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBS_Stop, &BS_Stop_Parms, NULL );

	pFnBS_Stop->FunctionFlags |= 0x400;
};

// Function MechaGame.MechaBase.BS_PlayByDuration
// [0x00024501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMechaSpecialMove*       Move                           ( CPF_Parm )
// struct FMechaBodyStance        Stance                         ( CPF_Parm | CPF_NeedCtorLink )
// float                          Duration                       ( CPF_Parm )
// float                          BlendInTime                    ( CPF_OptionalParm | CPF_Parm )
// float                          BlendOutTime                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bLooping                       ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bOverride                      ( CPF_OptionalParm | CPF_Parm )
// struct FName                   GroupName                      ( CPF_OptionalParm | CPF_Parm )

float AMechaBase::BS_PlayByDuration ( class UMechaSpecialMove* Move, struct FMechaBodyStance Stance, float Duration, float BlendInTime, float BlendOutTime, unsigned long bLooping, unsigned long bOverride, struct FName GroupName )
{
	static UFunction* pFnBS_PlayByDuration = NULL;

	if ( ! pFnBS_PlayByDuration )
		pFnBS_PlayByDuration = (UFunction*) UObject::GObjObjects()->Data[ 208315 ];

	AMechaBase_execBS_PlayByDuration_Parms BS_PlayByDuration_Parms;
	BS_PlayByDuration_Parms.Move = Move;
	memcpy ( &BS_PlayByDuration_Parms.Stance, &Stance, 0xC );
	BS_PlayByDuration_Parms.Duration = Duration;
	BS_PlayByDuration_Parms.BlendInTime = BlendInTime;
	BS_PlayByDuration_Parms.BlendOutTime = BlendOutTime;
	BS_PlayByDuration_Parms.bLooping = bLooping;
	BS_PlayByDuration_Parms.bOverride = bOverride;
	memcpy ( &BS_PlayByDuration_Parms.GroupName, &GroupName, 0x8 );

	pFnBS_PlayByDuration->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBS_PlayByDuration, &BS_PlayByDuration_Parms, NULL );

	pFnBS_PlayByDuration->FunctionFlags |= 0x400;

	return BS_PlayByDuration_Parms.ReturnValue;
};

// Function MechaGame.MechaBase.BS_Play
// [0x00024501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMechaSpecialMove*       Move                           ( CPF_Parm )
// struct FMechaBodyStance        Stance                         ( CPF_Parm | CPF_NeedCtorLink )
// float                          Rate                           ( CPF_Parm )
// float                          BlendInTime                    ( CPF_OptionalParm | CPF_Parm )
// float                          BlendOutTime                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bLooping                       ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bOverride                      ( CPF_OptionalParm | CPF_Parm )
// struct FName                   GroupName                      ( CPF_OptionalParm | CPF_Parm )
// float                          StartTime                      ( CPF_OptionalParm | CPF_Parm )

float AMechaBase::BS_Play ( class UMechaSpecialMove* Move, struct FMechaBodyStance Stance, float Rate, float BlendInTime, float BlendOutTime, unsigned long bLooping, unsigned long bOverride, struct FName GroupName, float StartTime )
{
	static UFunction* pFnBS_Play = NULL;

	if ( ! pFnBS_Play )
		pFnBS_Play = (UFunction*) UObject::GObjObjects()->Data[ 208304 ];

	AMechaBase_execBS_Play_Parms BS_Play_Parms;
	BS_Play_Parms.Move = Move;
	memcpy ( &BS_Play_Parms.Stance, &Stance, 0xC );
	BS_Play_Parms.Rate = Rate;
	BS_Play_Parms.BlendInTime = BlendInTime;
	BS_Play_Parms.BlendOutTime = BlendOutTime;
	BS_Play_Parms.bLooping = bLooping;
	BS_Play_Parms.bOverride = bOverride;
	memcpy ( &BS_Play_Parms.GroupName, &GroupName, 0x8 );
	BS_Play_Parms.StartTime = StartTime;

	pFnBS_Play->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBS_Play, &BS_Play_Parms, NULL );

	pFnBS_Play->FunctionFlags |= 0x400;

	return BS_Play_Parms.ReturnValue;
};

// Function MechaGame.MechaBase.InterpolatePawnRotation
// [0x00024103] ( FUNC_Final )
// Parameters infos:
// float                          RotationInterpTime             ( CPF_OptionalParm | CPF_Parm )

void AMechaBase::InterpolatePawnRotation ( float RotationInterpTime )
{
	static UFunction* pFnInterpolatePawnRotation = NULL;

	if ( ! pFnInterpolatePawnRotation )
		pFnInterpolatePawnRotation = (UFunction*) UObject::GObjObjects()->Data[ 208302 ];

	AMechaBase_execInterpolatePawnRotation_Parms InterpolatePawnRotation_Parms;
	InterpolatePawnRotation_Parms.RotationInterpTime = RotationInterpTime;

	this->ProcessEvent ( pFnInterpolatePawnRotation, &InterpolatePawnRotation_Parms, NULL );
};

// Function MechaGame.MechaBase.PlayTakeHitEffects
// [0x00020100] 
// Parameters infos:

void AMechaBase::PlayTakeHitEffects ( )
{
	static UFunction* pFnPlayTakeHitEffects = NULL;

	if ( ! pFnPlayTakeHitEffects )
		pFnPlayTakeHitEffects = (UFunction*) UObject::GObjObjects()->Data[ 208301 ];

	AMechaBase_execPlayTakeHitEffects_Parms PlayTakeHitEffects_Parms;

	this->ProcessEvent ( pFnPlayTakeHitEffects, &PlayTakeHitEffects_Parms, NULL );
};

// Function MechaGame.MechaBase.PlayHit
// [0x00024102] 
// Parameters infos:
// float                          Damage                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm )
// unsigned char                  AnimDir                        ( CPF_OptionalParm | CPF_Parm )

void AMechaBase::PlayHit ( float Damage, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FVector Momentum, struct FTraceHitInfo HitInfo, unsigned char AnimDir )
{
	static UFunction* pFnPlayHit = NULL;

	if ( ! pFnPlayHit )
		pFnPlayHit = (UFunction*) UObject::GObjObjects()->Data[ 208292 ];

	AMechaBase_execPlayHit_Parms PlayHit_Parms;
	PlayHit_Parms.Damage = Damage;
	PlayHit_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &PlayHit_Parms.HitLocation, &HitLocation, 0xC );
	PlayHit_Parms.DamageType = DamageType;
	memcpy ( &PlayHit_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &PlayHit_Parms.HitInfo, &HitInfo, 0x20 );
	PlayHit_Parms.AnimDir = AnimDir;

	this->ProcessEvent ( pFnPlayHit, &PlayHit_Parms, NULL );
};

// Function MechaGame.MechaBase.Destroyed
// [0x00020102] 
// Parameters infos:

void AMechaBase::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 208291 ];

	AMechaBase_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function MechaGame.MechaBase.StopAllAnimations
// [0x00020102] 
// Parameters infos:

void AMechaBase::StopAllAnimations ( )
{
	static UFunction* pFnStopAllAnimations = NULL;

	if ( ! pFnStopAllAnimations )
		pFnStopAllAnimations = (UFunction*) UObject::GObjObjects()->Data[ 208289 ];

	AMechaBase_execStopAllAnimations_Parms StopAllAnimations_Parms;

	this->ProcessEvent ( pFnStopAllAnimations, &StopAllAnimations_Parms, NULL );
};

// Function MechaGame.MechaBase.CacheAnimNodes
// [0x00020102] 
// Parameters infos:

void AMechaBase::CacheAnimNodes ( )
{
	static UFunction* pFnCacheAnimNodes = NULL;

	if ( ! pFnCacheAnimNodes )
		pFnCacheAnimNodes = (UFunction*) UObject::GObjObjects()->Data[ 208287 ];

	AMechaBase_execCacheAnimNodes_Parms CacheAnimNodes_Parms;

	this->ProcessEvent ( pFnCacheAnimNodes, &CacheAnimNodes_Parms, NULL );
};

// Function MechaGame.MechaBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void AMechaBase::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 208284 ];

	AMechaBase_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function MechaGame.Mecha.PlayDying
// [0x00024102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLoc                         ( CPF_Parm )
// unsigned char                  DeathDir                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_OptionalParm | CPF_Parm )

void AMecha::PlayDying ( class UClass* DamageType, struct FVector HitLoc, unsigned char DeathDir, unsigned char HitGroup )
{
	static UFunction* pFnPlayDying = NULL;

	if ( ! pFnPlayDying )
		pFnPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 208572 ];

	AMecha_execPlayDying_Parms PlayDying_Parms;
	PlayDying_Parms.DamageType = DamageType;
	memcpy ( &PlayDying_Parms.HitLoc, &HitLoc, 0xC );
	PlayDying_Parms.DeathDir = DeathDir;
	PlayDying_Parms.HitGroup = HitGroup;

	this->ProcessEvent ( pFnPlayDying, &PlayDying_Parms, NULL );
};

// Function MechaGame.Mecha.ServerTakeWallDamage
// [0x00024002] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )
// int                            wallcount                      ( CPF_OptionalParm | CPF_Parm )

void AMecha::ServerTakeWallDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, int wallcount )
{
	static UFunction* pFnServerTakeWallDamage = NULL;

	if ( ! pFnServerTakeWallDamage )
		pFnServerTakeWallDamage = (UFunction*) UObject::GObjObjects()->Data[ 208563 ];

	AMecha_execServerTakeWallDamage_Parms ServerTakeWallDamage_Parms;
	ServerTakeWallDamage_Parms.Damage = Damage;
	ServerTakeWallDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &ServerTakeWallDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ServerTakeWallDamage_Parms.Momentum, &Momentum, 0xC );
	ServerTakeWallDamage_Parms.DamageType = DamageType;
	memcpy ( &ServerTakeWallDamage_Parms.HitInfo, &HitInfo, 0x20 );
	ServerTakeWallDamage_Parms.DamageCauser = DamageCauser;
	ServerTakeWallDamage_Parms.wallcount = wallcount;

	this->ProcessEvent ( pFnServerTakeWallDamage, &ServerTakeWallDamage_Parms, NULL );
};

// Function MechaGame.Mecha.ServerTakeDamage
// [0x00024002] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void AMecha::ServerTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnServerTakeDamage = NULL;

	if ( ! pFnServerTakeDamage )
		pFnServerTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 208555 ];

	AMecha_execServerTakeDamage_Parms ServerTakeDamage_Parms;
	ServerTakeDamage_Parms.Damage = Damage;
	ServerTakeDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &ServerTakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ServerTakeDamage_Parms.Momentum, &Momentum, 0xC );
	ServerTakeDamage_Parms.DamageType = DamageType;
	memcpy ( &ServerTakeDamage_Parms.HitInfo, &HitInfo, 0x20 );
	ServerTakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnServerTakeDamage, &ServerTakeDamage_Parms, NULL );
};

// Function MechaGame.Mecha.TakeDamage
// [0x00824802] ( FUNC_Event )
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void AMecha::eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 208543 ];

	AMecha_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.Damage = Damage;
	TakeDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x20 );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function MechaGame.Mecha.GetWeaponStartTraceLocation
// [0x00824902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AWeapon*                 CurrentWeapon                  ( CPF_OptionalParm | CPF_Parm )

struct FVector AMecha::eventGetWeaponStartTraceLocation ( class AWeapon* CurrentWeapon )
{
	static UFunction* pFnGetWeaponStartTraceLocation = NULL;

	if ( ! pFnGetWeaponStartTraceLocation )
		pFnGetWeaponStartTraceLocation = (UFunction*) UObject::GObjObjects()->Data[ 208537 ];

	AMecha_eventGetWeaponStartTraceLocation_Parms GetWeaponStartTraceLocation_Parms;
	GetWeaponStartTraceLocation_Parms.CurrentWeapon = CurrentWeapon;

	this->ProcessEvent ( pFnGetWeaponStartTraceLocation, &GetWeaponStartTraceLocation_Parms, NULL );

	return GetWeaponStartTraceLocation_Parms.ReturnValue;
};

// Function MechaGame.Mecha.SetGunFlashLocation
// [0x00020100] 
// Parameters infos:
// class AWeapon*                 Who                            ( CPF_Parm )
// unsigned char                  FireModeNum                    ( CPF_Parm )
// TArray< struct FVector >       NewLoc                         ( CPF_Parm | CPF_NeedCtorLink )

void AMecha::SetGunFlashLocation ( class AWeapon* Who, unsigned char FireModeNum, TArray< struct FVector > NewLoc )
{
	static UFunction* pFnSetGunFlashLocation = NULL;

	if ( ! pFnSetGunFlashLocation )
		pFnSetGunFlashLocation = (UFunction*) UObject::GObjObjects()->Data[ 208532 ];

	AMecha_execSetGunFlashLocation_Parms SetGunFlashLocation_Parms;
	SetGunFlashLocation_Parms.Who = Who;
	SetGunFlashLocation_Parms.FireModeNum = FireModeNum;
	memcpy ( &SetGunFlashLocation_Parms.NewLoc, &NewLoc, 0xC );

	this->ProcessEvent ( pFnSetGunFlashLocation, &SetGunFlashLocation_Parms, NULL );
};

// Function MechaGame.Mecha.ClientSetFireCameraShake
// [0x010201C2] 
// Parameters infos:
// unsigned long                  bInPlayFireCameraShake         ( CPF_Parm )
// class UCameraShake*            InFireCameraShake              ( CPF_Parm )
// float                          InFireCameraShakeScale         ( CPF_Parm )

void AMecha::ClientSetFireCameraShake ( unsigned long bInPlayFireCameraShake, class UCameraShake* InFireCameraShake, float InFireCameraShakeScale )
{
	static UFunction* pFnClientSetFireCameraShake = NULL;

	if ( ! pFnClientSetFireCameraShake )
		pFnClientSetFireCameraShake = (UFunction*) UObject::GObjObjects()->Data[ 208528 ];

	AMecha_execClientSetFireCameraShake_Parms ClientSetFireCameraShake_Parms;
	ClientSetFireCameraShake_Parms.bInPlayFireCameraShake = bInPlayFireCameraShake;
	ClientSetFireCameraShake_Parms.InFireCameraShake = InFireCameraShake;
	ClientSetFireCameraShake_Parms.InFireCameraShakeScale = InFireCameraShakeScale;

	this->ProcessEvent ( pFnClientSetFireCameraShake, &ClientSetFireCameraShake_Parms, NULL );
};

// Function MechaGame.Mecha.SetFireCameraShake
// [0x00020102] 
// Parameters infos:
// unsigned long                  bInPlayFireCameraShake         ( CPF_Parm )
// class UCameraShake*            InFireCameraShake              ( CPF_Parm )
// float                          InFireCameraShakeScale         ( CPF_Parm )

void AMecha::SetFireCameraShake ( unsigned long bInPlayFireCameraShake, class UCameraShake* InFireCameraShake, float InFireCameraShakeScale )
{
	static UFunction* pFnSetFireCameraShake = NULL;

	if ( ! pFnSetFireCameraShake )
		pFnSetFireCameraShake = (UFunction*) UObject::GObjObjects()->Data[ 208524 ];

	AMecha_execSetFireCameraShake_Parms SetFireCameraShake_Parms;
	SetFireCameraShake_Parms.bInPlayFireCameraShake = bInPlayFireCameraShake;
	SetFireCameraShake_Parms.InFireCameraShake = InFireCameraShake;
	SetFireCameraShake_Parms.InFireCameraShakeScale = InFireCameraShakeScale;

	this->ProcessEvent ( pFnSetFireCameraShake, &SetFireCameraShake_Parms, NULL );
};

// Function MechaGame.Mecha.PossessedBy
// [0x00020002] 
// Parameters infos:
// class AController*             C                              ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void AMecha::PossessedBy ( class AController* C, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossessedBy = NULL;

	if ( ! pFnPossessedBy )
		pFnPossessedBy = (UFunction*) UObject::GObjObjects()->Data[ 208521 ];

	AMecha_execPossessedBy_Parms PossessedBy_Parms;
	PossessedBy_Parms.C = C;
	PossessedBy_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossessedBy, &PossessedBy_Parms, NULL );
};

// Function MechaGame.Mecha.ClientSetViewPitch
// [0x010201C2] 
// Parameters infos:
// float                          InViewPitchMin                 ( CPF_Parm )
// float                          InViewPitchMax                 ( CPF_Parm )

void AMecha::ClientSetViewPitch ( float InViewPitchMin, float InViewPitchMax )
{
	static UFunction* pFnClientSetViewPitch = NULL;

	if ( ! pFnClientSetViewPitch )
		pFnClientSetViewPitch = (UFunction*) UObject::GObjObjects()->Data[ 208518 ];

	AMecha_execClientSetViewPitch_Parms ClientSetViewPitch_Parms;
	ClientSetViewPitch_Parms.InViewPitchMin = InViewPitchMin;
	ClientSetViewPitch_Parms.InViewPitchMax = InViewPitchMax;

	this->ProcessEvent ( pFnClientSetViewPitch, &ClientSetViewPitch_Parms, NULL );
};

// Function MechaGame.Mecha.SetViewPitch
// [0x00020102] 
// Parameters infos:
// float                          InViewPitchMin                 ( CPF_Parm )
// float                          InViewPitchMax                 ( CPF_Parm )

void AMecha::SetViewPitch ( float InViewPitchMin, float InViewPitchMax )
{
	static UFunction* pFnSetViewPitch = NULL;

	if ( ! pFnSetViewPitch )
		pFnSetViewPitch = (UFunction*) UObject::GObjObjects()->Data[ 208515 ];

	AMecha_execSetViewPitch_Parms SetViewPitch_Parms;
	SetViewPitch_Parms.InViewPitchMin = InViewPitchMin;
	SetViewPitch_Parms.InViewPitchMax = InViewPitchMax;

	this->ProcessEvent ( pFnSetViewPitch, &SetViewPitch_Parms, NULL );
};

// Function MechaGame.Mecha.SetPointOfView3rd
// [0x00020102] 
// Parameters infos:
// struct FMechaPointOfView       POV                            ( CPF_Parm )

void AMecha::SetPointOfView3rd ( struct FMechaPointOfView POV )
{
	static UFunction* pFnSetPointOfView3rd = NULL;

	if ( ! pFnSetPointOfView3rd )
		pFnSetPointOfView3rd = (UFunction*) UObject::GObjObjects()->Data[ 208513 ];

	AMecha_execSetPointOfView3rd_Parms SetPointOfView3rd_Parms;
	memcpy ( &SetPointOfView3rd_Parms.POV, &POV, 0x14 );

	this->ProcessEvent ( pFnSetPointOfView3rd, &SetPointOfView3rd_Parms, NULL );
};

// Function MechaGame.Mecha.SetPointOfView1st
// [0x00020102] 
// Parameters infos:
// struct FMechaPointOfView       POV                            ( CPF_Parm )

void AMecha::SetPointOfView1st ( struct FMechaPointOfView POV )
{
	static UFunction* pFnSetPointOfView1st = NULL;

	if ( ! pFnSetPointOfView1st )
		pFnSetPointOfView1st = (UFunction*) UObject::GObjObjects()->Data[ 208511 ];

	AMecha_execSetPointOfView1st_Parms SetPointOfView1st_Parms;
	memcpy ( &SetPointOfView1st_Parms.POV, &POV, 0x14 );

	this->ProcessEvent ( pFnSetPointOfView1st, &SetPointOfView1st_Parms, NULL );
};

// Function MechaGame.Mecha.SetMeshVisibility
// [0x00020102] 
// Parameters infos:
// unsigned long                  bVisible                       ( CPF_Parm )

void AMecha::SetMeshVisibility ( unsigned long bVisible )
{
	static UFunction* pFnSetMeshVisibility = NULL;

	if ( ! pFnSetMeshVisibility )
		pFnSetMeshVisibility = (UFunction*) UObject::GObjObjects()->Data[ 208509 ];

	AMecha_execSetMeshVisibility_Parms SetMeshVisibility_Parms;
	SetMeshVisibility_Parms.bVisible = bVisible;

	this->ProcessEvent ( pFnSetMeshVisibility, &SetMeshVisibility_Parms, NULL );
};

// Function MechaGame.Mecha.FixedView
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 VisibleMeshes                  ( CPF_Parm | CPF_NeedCtorLink )

void AMecha::FixedView ( struct FString VisibleMeshes )
{
	static UFunction* pFnFixedView = NULL;

	if ( ! pFnFixedView )
		pFnFixedView = (UFunction*) UObject::GObjObjects()->Data[ 208505 ];

	AMecha_execFixedView_Parms FixedView_Parms;
	memcpy ( &FixedView_Parms.VisibleMeshes, &VisibleMeshes, 0xC );

	this->ProcessEvent ( pFnFixedView, &FixedView_Parms, NULL );
};

// Function MechaGame.Mecha.IsFirstPerson
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AMecha::IsFirstPerson ( )
{
	static UFunction* pFnIsFirstPerson = NULL;

	if ( ! pFnIsFirstPerson )
		pFnIsFirstPerson = (UFunction*) UObject::GObjObjects()->Data[ 208502 ];

	AMecha_execIsFirstPerson_Parms IsFirstPerson_Parms;

	this->ProcessEvent ( pFnIsFirstPerson, &IsFirstPerson_Parms, NULL );

	return IsFirstPerson_Parms.ReturnValue;
};

// Function MechaGame.Mecha.CalcFirstPersonCam
// [0x00C20102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )
// float                          out_FOV                        ( CPF_Parm | CPF_OutParm )

bool AMecha::CalcFirstPersonCam ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
{
	static UFunction* pFnCalcFirstPersonCam = NULL;

	if ( ! pFnCalcFirstPersonCam )
		pFnCalcFirstPersonCam = (UFunction*) UObject::GObjObjects()->Data[ 208489 ];

	AMecha_execCalcFirstPersonCam_Parms CalcFirstPersonCam_Parms;
	CalcFirstPersonCam_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnCalcFirstPersonCam, &CalcFirstPersonCam_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &CalcFirstPersonCam_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &CalcFirstPersonCam_Parms.out_CamRot, 0xC );

	if ( out_FOV )
		*out_FOV = CalcFirstPersonCam_Parms.out_FOV;

	return CalcFirstPersonCam_Parms.ReturnValue;
};

// Function MechaGame.Mecha.CalcThirdPersonCam
// [0x00C20102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )
// float                          out_FOV                        ( CPF_Parm | CPF_OutParm )

bool AMecha::CalcThirdPersonCam ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
{
	static UFunction* pFnCalcThirdPersonCam = NULL;

	if ( ! pFnCalcThirdPersonCam )
		pFnCalcThirdPersonCam = (UFunction*) UObject::GObjObjects()->Data[ 208472 ];

	AMecha_execCalcThirdPersonCam_Parms CalcThirdPersonCam_Parms;
	CalcThirdPersonCam_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnCalcThirdPersonCam, &CalcThirdPersonCam_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &CalcThirdPersonCam_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &CalcThirdPersonCam_Parms.out_CamRot, 0xC );

	if ( out_FOV )
		*out_FOV = CalcThirdPersonCam_Parms.out_FOV;

	return CalcThirdPersonCam_Parms.ReturnValue;
};

// Function MechaGame.Mecha.CalcCamera
// [0x00420102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )
// float                          out_FOV                        ( CPF_Parm | CPF_OutParm )

bool AMecha::CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
{
	static UFunction* pFnCalcCamera = NULL;

	if ( ! pFnCalcCamera )
		pFnCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 208466 ];

	AMecha_execCalcCamera_Parms CalcCamera_Parms;
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

// Function MechaGame.Mecha.FaceRotation
// [0x00020102] 
// Parameters infos:
// struct FRotator                NewRotation                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void AMecha::FaceRotation ( struct FRotator NewRotation, float DeltaTime )
{
	static UFunction* pFnFaceRotation = NULL;

	if ( ! pFnFaceRotation )
		pFnFaceRotation = (UFunction*) UObject::GObjObjects()->Data[ 208463 ];

	AMecha_execFaceRotation_Parms FaceRotation_Parms;
	memcpy ( &FaceRotation_Parms.NewRotation, &NewRotation, 0xC );
	FaceRotation_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnFaceRotation, &FaceRotation_Parms, NULL );
};

// Function MechaGame.Mecha.SetMechaHidden
// [0x00020102] 
// Parameters infos:
// unsigned long                  bInHidden                      ( CPF_Parm )

void AMecha::SetMechaHidden ( unsigned long bInHidden )
{
	static UFunction* pFnSetMechaHidden = NULL;

	if ( ! pFnSetMechaHidden )
		pFnSetMechaHidden = (UFunction*) UObject::GObjObjects()->Data[ 208461 ];

	AMecha_execSetMechaHidden_Parms SetMechaHidden_Parms;
	SetMechaHidden_Parms.bInHidden = bInHidden;

	this->ProcessEvent ( pFnSetMechaHidden, &SetMechaHidden_Parms, NULL );
};

// Function MechaGame.Mecha.ClientStopMovement
// [0x010201C2] 
// Parameters infos:

void AMecha::ClientStopMovement ( )
{
	static UFunction* pFnClientStopMovement = NULL;

	if ( ! pFnClientStopMovement )
		pFnClientStopMovement = (UFunction*) UObject::GObjObjects()->Data[ 208460 ];

	AMecha_execClientStopMovement_Parms ClientStopMovement_Parms;

	this->ProcessEvent ( pFnClientStopMovement, &ClientStopMovement_Parms, NULL );
};

// Function MechaGame.Mecha.DriverLeave
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bForceLeave                    ( CPF_Parm )

bool AMecha::eventDriverLeave ( unsigned long bForceLeave )
{
	static UFunction* pFnDriverLeave = NULL;

	if ( ! pFnDriverLeave )
		pFnDriverLeave = (UFunction*) UObject::GObjObjects()->Data[ 208457 ];

	AMecha_eventDriverLeave_Parms DriverLeave_Parms;
	DriverLeave_Parms.bForceLeave = bForceLeave;

	this->ProcessEvent ( pFnDriverLeave, &DriverLeave_Parms, NULL );

	return DriverLeave_Parms.ReturnValue;
};

// Function MechaGame.Mecha.DriverEnter
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

bool AMecha::DriverEnter ( class APawn* P )
{
	static UFunction* pFnDriverEnter = NULL;

	if ( ! pFnDriverEnter )
		pFnDriverEnter = (UFunction*) UObject::GObjObjects()->Data[ 208454 ];

	AMecha_execDriverEnter_Parms DriverEnter_Parms;
	DriverEnter_Parms.P = P;

	this->ProcessEvent ( pFnDriverEnter, &DriverEnter_Parms, NULL );

	return DriverEnter_Parms.ReturnValue;
};

// Function MechaGame.TGMechaBase.SetMaxStepHeight
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// float                          InMaxSetpHeight                ( CPF_Parm )

void ATGMechaBase::SetMaxStepHeight ( float InMaxSetpHeight )
{
	static UFunction* pFnSetMaxStepHeight = NULL;

	if ( ! pFnSetMaxStepHeight )
		pFnSetMaxStepHeight = (UFunction*) UObject::GObjObjects()->Data[ 210219 ];

	ATGMechaBase_execSetMaxStepHeight_Parms SetMaxStepHeight_Parms;
	SetMaxStepHeight_Parms.InMaxSetpHeight = InMaxSetpHeight;

	pFnSetMaxStepHeight->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMaxStepHeight, &SetMaxStepHeight_Parms, NULL );

	pFnSetMaxStepHeight->FunctionFlags |= 0x400;
};

// Function MechaGame.TGMechaBase.OnKeyUp_F
// [0x00020000] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGMechaBase::OnKeyUp_F ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyUp_F = NULL;

	if ( ! pFnOnKeyUp_F )
		pFnOnKeyUp_F = (UFunction*) UObject::GObjObjects()->Data[ 210217 ];

	ATGMechaBase_execOnKeyUp_F_Parms OnKeyUp_F_Parms;
	OnKeyUp_F_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyUp_F, &OnKeyUp_F_Parms, NULL );
};

// Function MechaGame.TGMechaBase.OnKeyUp_E
// [0x00020000] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGMechaBase::OnKeyUp_E ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyUp_E = NULL;

	if ( ! pFnOnKeyUp_E )
		pFnOnKeyUp_E = (UFunction*) UObject::GObjObjects()->Data[ 210215 ];

	ATGMechaBase_execOnKeyUp_E_Parms OnKeyUp_E_Parms;
	OnKeyUp_E_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyUp_E, &OnKeyUp_E_Parms, NULL );
};

// Function MechaGame.TGMechaBase.OnKeyUp_Shift
// [0x00020000] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGMechaBase::OnKeyUp_Shift ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyUp_Shift = NULL;

	if ( ! pFnOnKeyUp_Shift )
		pFnOnKeyUp_Shift = (UFunction*) UObject::GObjObjects()->Data[ 210213 ];

	ATGMechaBase_execOnKeyUp_Shift_Parms OnKeyUp_Shift_Parms;
	OnKeyUp_Shift_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyUp_Shift, &OnKeyUp_Shift_Parms, NULL );
};

// Function MechaGame.TGMechaBase.OnKeyUp_Space
// [0x00020000] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGMechaBase::OnKeyUp_Space ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyUp_Space = NULL;

	if ( ! pFnOnKeyUp_Space )
		pFnOnKeyUp_Space = (UFunction*) UObject::GObjObjects()->Data[ 210211 ];

	ATGMechaBase_execOnKeyUp_Space_Parms OnKeyUp_Space_Parms;
	OnKeyUp_Space_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyUp_Space, &OnKeyUp_Space_Parms, NULL );
};

// Function MechaGame.TGMechaBase.OnKeyDown_F
// [0x00020000] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGMechaBase::OnKeyDown_F ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyDown_F = NULL;

	if ( ! pFnOnKeyDown_F )
		pFnOnKeyDown_F = (UFunction*) UObject::GObjObjects()->Data[ 210209 ];

	ATGMechaBase_execOnKeyDown_F_Parms OnKeyDown_F_Parms;
	OnKeyDown_F_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyDown_F, &OnKeyDown_F_Parms, NULL );
};

// Function MechaGame.TGMechaBase.OnKeyDown_E
// [0x00020000] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGMechaBase::OnKeyDown_E ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyDown_E = NULL;

	if ( ! pFnOnKeyDown_E )
		pFnOnKeyDown_E = (UFunction*) UObject::GObjObjects()->Data[ 210207 ];

	ATGMechaBase_execOnKeyDown_E_Parms OnKeyDown_E_Parms;
	OnKeyDown_E_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyDown_E, &OnKeyDown_E_Parms, NULL );
};

// Function MechaGame.TGMechaBase.OnKeyDown_Shift
// [0x00020000] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGMechaBase::OnKeyDown_Shift ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyDown_Shift = NULL;

	if ( ! pFnOnKeyDown_Shift )
		pFnOnKeyDown_Shift = (UFunction*) UObject::GObjObjects()->Data[ 210205 ];

	ATGMechaBase_execOnKeyDown_Shift_Parms OnKeyDown_Shift_Parms;
	OnKeyDown_Shift_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyDown_Shift, &OnKeyDown_Shift_Parms, NULL );
};

// Function MechaGame.TGMechaBase.OnKeyDown_Space
// [0x00020000] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGMechaBase::OnKeyDown_Space ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyDown_Space = NULL;

	if ( ! pFnOnKeyDown_Space )
		pFnOnKeyDown_Space = (UFunction*) UObject::GObjObjects()->Data[ 210202 ];

	ATGMechaBase_execOnKeyDown_Space_Parms OnKeyDown_Space_Parms;
	OnKeyDown_Space_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyDown_Space, &OnKeyDown_Space_Parms, NULL );
};

// Function MechaGame.TGMechaBase.PostRenderFor
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void ATGMechaBase::eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnPostRenderFor = NULL;

	if ( ! pFnPostRenderFor )
		pFnPostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 210191 ];

	ATGMechaBase_eventPostRenderFor_Parms PostRenderFor_Parms;
	PostRenderFor_Parms.PC = PC;
	PostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &PostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &PostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	this->ProcessEvent ( pFnPostRenderFor, &PostRenderFor_Parms, NULL );
};

// Function MechaGame.TGMechaBase.Died
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// unsigned char                  DeathDir                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_OptionalParm | CPF_Parm )

bool ATGMechaBase::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation, unsigned char DeathDir, unsigned char HitGroup )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 210183 ];

	ATGMechaBase_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );
	Died_Parms.DeathDir = DeathDir;
	Died_Parms.HitGroup = HitGroup;

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function MechaGame.TGMechaBase.TakeDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ATGMechaBase::eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 210175 ];

	ATGMechaBase_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.Damage = Damage;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x20 );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function MechaGame.TGMechaBase.Heal
// [0x00024002] 
// Parameters infos:
// int                            HealthToAdd                    ( CPF_Parm )
// class AController*             HealInstigator                 ( CPF_Parm )
// unsigned long                  bTriggerEffect                 ( CPF_Parm )
// unsigned long                  bInstantHeal                   ( CPF_Parm )
// float                          HealInterval                   ( CPF_OptionalParm | CPF_Parm )

void ATGMechaBase::Heal ( int HealthToAdd, class AController* HealInstigator, unsigned long bTriggerEffect, unsigned long bInstantHeal, float HealInterval )
{
	static UFunction* pFnHeal = NULL;

	if ( ! pFnHeal )
		pFnHeal = (UFunction*) UObject::GObjObjects()->Data[ 210169 ];

	ATGMechaBase_execHeal_Parms Heal_Parms;
	Heal_Parms.HealthToAdd = HealthToAdd;
	Heal_Parms.HealInstigator = HealInstigator;
	Heal_Parms.bTriggerEffect = bTriggerEffect;
	Heal_Parms.bInstantHeal = bInstantHeal;
	Heal_Parms.HealInterval = HealInterval;

	this->ProcessEvent ( pFnHeal, &Heal_Parms, NULL );
};

// Function MechaGame.TGMechaBase.ClearSpeedScale
// [0x00020002] 
// Parameters infos:

void ATGMechaBase::ClearSpeedScale ( )
{
	static UFunction* pFnClearSpeedScale = NULL;

	if ( ! pFnClearSpeedScale )
		pFnClearSpeedScale = (UFunction*) UObject::GObjObjects()->Data[ 210158 ];

	ATGMechaBase_execClearSpeedScale_Parms ClearSpeedScale_Parms;

	this->ProcessEvent ( pFnClearSpeedScale, &ClearSpeedScale_Parms, NULL );
};

// Function MechaGame.TGMechaBase.TimerClearSpeedScale
// [0x00020002] 
// Parameters infos:

void ATGMechaBase::TimerClearSpeedScale ( )
{
	static UFunction* pFnTimerClearSpeedScale = NULL;

	if ( ! pFnTimerClearSpeedScale )
		pFnTimerClearSpeedScale = (UFunction*) UObject::GObjObjects()->Data[ 210157 ];

	ATGMechaBase_execTimerClearSpeedScale_Parms TimerClearSpeedScale_Parms;

	this->ProcessEvent ( pFnTimerClearSpeedScale, &TimerClearSpeedScale_Parms, NULL );
};

// Function MechaGame.TGMechaBase.SetSpeedScaleTimer
// [0x00020002] 
// Parameters infos:
// float                          Scale                          ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void ATGMechaBase::SetSpeedScaleTimer ( float Scale, float Duration )
{
	static UFunction* pFnSetSpeedScaleTimer = NULL;

	if ( ! pFnSetSpeedScaleTimer )
		pFnSetSpeedScaleTimer = (UFunction*) UObject::GObjObjects()->Data[ 210154 ];

	ATGMechaBase_execSetSpeedScaleTimer_Parms SetSpeedScaleTimer_Parms;
	SetSpeedScaleTimer_Parms.Scale = Scale;
	SetSpeedScaleTimer_Parms.Duration = Duration;

	this->ProcessEvent ( pFnSetSpeedScaleTimer, &SetSpeedScaleTimer_Parms, NULL );
};

// Function MechaGame.TGMechaBase.SetSpeedScale
// [0x00020002] 
// Parameters infos:
// float                          Scale                          ( CPF_Parm )

void ATGMechaBase::SetSpeedScale ( float Scale )
{
	static UFunction* pFnSetSpeedScale = NULL;

	if ( ! pFnSetSpeedScale )
		pFnSetSpeedScale = (UFunction*) UObject::GObjObjects()->Data[ 210152 ];

	ATGMechaBase_execSetSpeedScale_Parms SetSpeedScale_Parms;
	SetSpeedScale_Parms.Scale = Scale;

	this->ProcessEvent ( pFnSetSpeedScale, &SetSpeedScale_Parms, NULL );
};

// Function MechaGame.TGMechaBase.IsBoosting
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaBase::IsBoosting ( )
{
	static UFunction* pFnIsBoosting = NULL;

	if ( ! pFnIsBoosting )
		pFnIsBoosting = (UFunction*) UObject::GObjObjects()->Data[ 210143 ];

	ATGMechaBase_execIsBoosting_Parms IsBoosting_Parms;

	this->ProcessEvent ( pFnIsBoosting, &IsBoosting_Parms, NULL );

	return IsBoosting_Parms.ReturnValue;
};

// Function MechaGame.TGMechaBase.ChangeMovementState
// [0x00020002] 
// Parameters infos:
// unsigned char                  NewState                       ( CPF_Parm )

void ATGMechaBase::ChangeMovementState ( unsigned char NewState )
{
	static UFunction* pFnChangeMovementState = NULL;

	if ( ! pFnChangeMovementState )
		pFnChangeMovementState = (UFunction*) UObject::GObjObjects()->Data[ 210141 ];

	ATGMechaBase_execChangeMovementState_Parms ChangeMovementState_Parms;
	ChangeMovementState_Parms.NewState = NewState;

	this->ProcessEvent ( pFnChangeMovementState, &ChangeMovementState_Parms, NULL );
};

// Function MechaGame.TGMechaBase.TakeFallingDamage
// [0x00020000] 
// Parameters infos:

void ATGMechaBase::TakeFallingDamage ( )
{
	static UFunction* pFnTakeFallingDamage = NULL;

	if ( ! pFnTakeFallingDamage )
		pFnTakeFallingDamage = (UFunction*) UObject::GObjObjects()->Data[ 210140 ];

	ATGMechaBase_execTakeFallingDamage_Parms TakeFallingDamage_Parms;

	this->ProcessEvent ( pFnTakeFallingDamage, &TakeFallingDamage_Parms, NULL );
};

// Function MechaGame.TGMechaBase.SetupConfigParameters
// [0x00020002] 
// Parameters infos:

void ATGMechaBase::SetupConfigParameters ( )
{
	static UFunction* pFnSetupConfigParameters = NULL;

	if ( ! pFnSetupConfigParameters )
		pFnSetupConfigParameters = (UFunction*) UObject::GObjObjects()->Data[ 210138 ];

	ATGMechaBase_execSetupConfigParameters_Parms SetupConfigParameters_Parms;

	this->ProcessEvent ( pFnSetupConfigParameters, &SetupConfigParameters_Parms, NULL );
};

// Function MechaGame.TGMechaBase.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaBase::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 210137 ];

	ATGMechaBase_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.MechaFactory.ForceSpawnVehicle
// [0x00020002] 
// Parameters infos:
// class AMechaBase*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AMechaBase* AMechaFactory::ForceSpawnVehicle ( )
{
	static UFunction* pFnForceSpawnVehicle = NULL;

	if ( ! pFnForceSpawnVehicle )
		pFnForceSpawnVehicle = (UFunction*) UObject::GObjObjects()->Data[ 208828 ];

	AMechaFactory_execForceSpawnVehicle_Parms ForceSpawnVehicle_Parms;

	this->ProcessEvent ( pFnForceSpawnVehicle, &ForceSpawnVehicle_Parms, NULL );

	return ForceSpawnVehicle_Parms.ReturnValue;
};

// Function MechaGame.MechaFactory.GetSpawnRotation
// [0x00020002] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FRotator AMechaFactory::GetSpawnRotation ( )
{
	static UFunction* pFnGetSpawnRotation = NULL;

	if ( ! pFnGetSpawnRotation )
		pFnGetSpawnRotation = (UFunction*) UObject::GObjObjects()->Data[ 208826 ];

	AMechaFactory_execGetSpawnRotation_Parms GetSpawnRotation_Parms;

	this->ProcessEvent ( pFnGetSpawnRotation, &GetSpawnRotation_Parms, NULL );

	return GetSpawnRotation_Parms.ReturnValue;
};

// Function MechaGame.MechaFactory.OnToggle
// [0x00020002] 
// Parameters infos:
// class USeqAct_Toggle*          Action                         ( CPF_Parm )

void AMechaFactory::OnToggle ( class USeqAct_Toggle* Action )
{
	static UFunction* pFnOnToggle = NULL;

	if ( ! pFnOnToggle )
		pFnOnToggle = (UFunction*) UObject::GObjObjects()->Data[ 208824 ];

	AMechaFactory_execOnToggle_Parms OnToggle_Parms;
	OnToggle_Parms.Action = Action;

	this->ProcessEvent ( pFnOnToggle, &OnToggle_Parms, NULL );
};

// Function MechaGame.MechaFactory.TriggerSpawnedEvent
// [0x00020002] 
// Parameters infos:

void AMechaFactory::TriggerSpawnedEvent ( )
{
	static UFunction* pFnTriggerSpawnedEvent = NULL;

	if ( ! pFnTriggerSpawnedEvent )
		pFnTriggerSpawnedEvent = (UFunction*) UObject::GObjObjects()->Data[ 208823 ];

	AMechaFactory_execTriggerSpawnedEvent_Parms TriggerSpawnedEvent_Parms;

	this->ProcessEvent ( pFnTriggerSpawnedEvent, &TriggerSpawnedEvent_Parms, NULL );
};

// Function MechaGame.MechaFactory.VehicleDestroyed
// [0x00020002] 
// Parameters infos:
// class AMechaBase*              V                              ( CPF_Parm )

void AMechaFactory::VehicleDestroyed ( class AMechaBase* V )
{
	static UFunction* pFnVehicleDestroyed = NULL;

	if ( ! pFnVehicleDestroyed )
		pFnVehicleDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 208821 ];

	AMechaFactory_execVehicleDestroyed_Parms VehicleDestroyed_Parms;
	VehicleDestroyed_Parms.V = V;

	this->ProcessEvent ( pFnVehicleDestroyed, &VehicleDestroyed_Parms, NULL );
};

// Function MechaGame.MechaFactory.VehicleTaken
// [0x00020002] 
// Parameters infos:

void AMechaFactory::VehicleTaken ( )
{
	static UFunction* pFnVehicleTaken = NULL;

	if ( ! pFnVehicleTaken )
		pFnVehicleTaken = (UFunction*) UObject::GObjObjects()->Data[ 208820 ];

	AMechaFactory_execVehicleTaken_Parms VehicleTaken_Parms;

	this->ProcessEvent ( pFnVehicleTaken, &VehicleTaken_Parms, NULL );
};

// Function MechaGame.MechaFactory.Deactivate
// [0x00020002] 
// Parameters infos:

void AMechaFactory::Deactivate ( )
{
	static UFunction* pFnDeactivate = NULL;

	if ( ! pFnDeactivate )
		pFnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 208819 ];

	AMechaFactory_execDeactivate_Parms Deactivate_Parms;

	this->ProcessEvent ( pFnDeactivate, &Deactivate_Parms, NULL );
};

// Function MechaGame.MechaFactory.Activate
// [0x00020002] 
// Parameters infos:
// unsigned char                  T                              ( CPF_Parm )

void AMechaFactory::Activate ( unsigned char T )
{
	static UFunction* pFnActivate = NULL;

	if ( ! pFnActivate )
		pFnActivate = (UFunction*) UObject::GObjObjects()->Data[ 208817 ];

	AMechaFactory_execActivate_Parms Activate_Parms;
	Activate_Parms.T = T;

	this->ProcessEvent ( pFnActivate, &Activate_Parms, NULL );
};

// Function MechaGame.MechaFactory.SetInitialState
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AMechaFactory::eventSetInitialState ( )
{
	static UFunction* pFnSetInitialState = NULL;

	if ( ! pFnSetInitialState )
		pFnSetInitialState = (UFunction*) UObject::GObjObjects()->Data[ 208816 ];

	AMechaFactory_eventSetInitialState_Parms SetInitialState_Parms;

	this->ProcessEvent ( pFnSetInitialState, &SetInitialState_Parms, NULL );
};

// Function MechaGame.MechaFactory.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AMechaFactory::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 208815 ];

	AMechaFactory_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItem.PostRenderFor
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void AMechaDestructibleItem::eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnPostRenderFor = NULL;

	if ( ! pFnPostRenderFor )
		pFnPostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 208729 ];

	AMechaDestructibleItem_eventPostRenderFor_Parms PostRenderFor_Parms;
	PostRenderFor_Parms.PC = PC;
	PostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &PostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &PostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	this->ProcessEvent ( pFnPostRenderFor, &PostRenderFor_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItem.GetHealthColor
// [0x00820102] 
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FColor AMechaDestructibleItem::GetHealthColor ( )
{
	static UFunction* pFnGetHealthColor = NULL;

	if ( ! pFnGetHealthColor )
		pFnGetHealthColor = (UFunction*) UObject::GObjObjects()->Data[ 208724 ];

	AMechaDestructibleItem_execGetHealthColor_Parms GetHealthColor_Parms;

	this->ProcessEvent ( pFnGetHealthColor, &GetHealthColor_Parms, NULL );

	return GetHealthColor_Parms.ReturnValue;
};

// Function MechaGame.MechaDestructibleItem.GetHealthLevel
// [0x00424102] 
// Parameters infos:
// int                            Level                          ( CPF_Parm | CPF_OutParm )
// float                          LevelPct                       ( CPF_Parm | CPF_OutParm )
// float                          TotalPct                       ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

void AMechaDestructibleItem::GetHealthLevel ( int* Level, float* LevelPct, float* TotalPct )
{
	static UFunction* pFnGetHealthLevel = NULL;

	if ( ! pFnGetHealthLevel )
		pFnGetHealthLevel = (UFunction*) UObject::GObjObjects()->Data[ 208716 ];

	AMechaDestructibleItem_execGetHealthLevel_Parms GetHealthLevel_Parms;

	this->ProcessEvent ( pFnGetHealthLevel, &GetHealthLevel_Parms, NULL );

	if ( Level )
		*Level = GetHealthLevel_Parms.Level;

	if ( LevelPct )
		*LevelPct = GetHealthLevel_Parms.LevelPct;

	if ( TotalPct )
		*TotalPct = GetHealthLevel_Parms.TotalPct;
};

// Function MechaGame.MechaDestructibleItem.IsDestroyed
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AMechaDestructibleItem::IsDestroyed ( )
{
	static UFunction* pFnIsDestroyed = NULL;

	if ( ! pFnIsDestroyed )
		pFnIsDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 208714 ];

	AMechaDestructibleItem_execIsDestroyed_Parms IsDestroyed_Parms;

	this->ProcessEvent ( pFnIsDestroyed, &IsDestroyed_Parms, NULL );

	return IsDestroyed_Parms.ReturnValue;
};

// Function MechaGame.MechaDestructibleItem.GetCurrentMesh
// [0x00020102] 
// Parameters infos:
// class UStaticMeshComponent*    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )

class UStaticMeshComponent* AMechaDestructibleItem::GetCurrentMesh ( )
{
	static UFunction* pFnGetCurrentMesh = NULL;

	if ( ! pFnGetCurrentMesh )
		pFnGetCurrentMesh = (UFunction*) UObject::GObjObjects()->Data[ 208712 ];

	AMechaDestructibleItem_execGetCurrentMesh_Parms GetCurrentMesh_Parms;

	this->ProcessEvent ( pFnGetCurrentMesh, &GetCurrentMesh_Parms, NULL );

	return GetCurrentMesh_Parms.ReturnValue;
};

// Function MechaGame.MechaDestructibleItem.SetupMesh
// [0x00020102] 
// Parameters infos:

void AMechaDestructibleItem::SetupMesh ( )
{
	static UFunction* pFnSetupMesh = NULL;

	if ( ! pFnSetupMesh )
		pFnSetupMesh = (UFunction*) UObject::GObjObjects()->Data[ 208705 ];

	AMechaDestructibleItem_execSetupMesh_Parms SetupMesh_Parms;

	this->ProcessEvent ( pFnSetupMesh, &SetupMesh_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItem.HideHit
// [0x00020102] 
// Parameters infos:

void AMechaDestructibleItem::HideHit ( )
{
	static UFunction* pFnHideHit = NULL;

	if ( ! pFnHideHit )
		pFnHideHit = (UFunction*) UObject::GObjObjects()->Data[ 208704 ];

	AMechaDestructibleItem_execHideHit_Parms HideHit_Parms;

	this->ProcessEvent ( pFnHideHit, &HideHit_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItem.NotifyHealthInfoChanged
// [0x00020102] 
// Parameters infos:

void AMechaDestructibleItem::NotifyHealthInfoChanged ( )
{
	static UFunction* pFnNotifyHealthInfoChanged = NULL;

	if ( ! pFnNotifyHealthInfoChanged )
		pFnNotifyHealthInfoChanged = (UFunction*) UObject::GObjObjects()->Data[ 208690 ];

	AMechaDestructibleItem_execNotifyHealthInfoChanged_Parms NotifyHealthInfoChanged_Parms;

	this->ProcessEvent ( pFnNotifyHealthInfoChanged, &NotifyHealthInfoChanged_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItem.ScriptGetTeamNum
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AMechaDestructibleItem::eventScriptGetTeamNum ( )
{
	static UFunction* pFnScriptGetTeamNum = NULL;

	if ( ! pFnScriptGetTeamNum )
		pFnScriptGetTeamNum = (UFunction*) UObject::GObjObjects()->Data[ 208687 ];

	AMechaDestructibleItem_eventScriptGetTeamNum_Parms ScriptGetTeamNum_Parms;

	this->ProcessEvent ( pFnScriptGetTeamNum, &ScriptGetTeamNum_Parms, NULL );

	return ScriptGetTeamNum_Parms.ReturnValue;
};

// Function MechaGame.MechaDestructibleItem.RecordMechaWeapDamage
// [0x00020002] 
// Parameters infos:
// int                            InDamage                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void AMechaDestructibleItem::RecordMechaWeapDamage ( int InDamage, class UClass* DamageType )
{
	static UFunction* pFnRecordMechaWeapDamage = NULL;

	if ( ! pFnRecordMechaWeapDamage )
		pFnRecordMechaWeapDamage = (UFunction*) UObject::GObjObjects()->Data[ 208681 ];

	AMechaDestructibleItem_execRecordMechaWeapDamage_Parms RecordMechaWeapDamage_Parms;
	RecordMechaWeapDamage_Parms.InDamage = InDamage;
	RecordMechaWeapDamage_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnRecordMechaWeapDamage, &RecordMechaWeapDamage_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItem.DoDamageScale
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  DamageType                     ( CPF_Parm )

bool AMechaDestructibleItem::DoDamageScale ( class UClass* DamageType )
{
	static UFunction* pFnDoDamageScale = NULL;

	if ( ! pFnDoDamageScale )
		pFnDoDamageScale = (UFunction*) UObject::GObjObjects()->Data[ 208676 ];

	AMechaDestructibleItem_execDoDamageScale_Parms DoDamageScale_Parms;
	DoDamageScale_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnDoDamageScale, &DoDamageScale_Parms, NULL );

	return DoDamageScale_Parms.ReturnValue;
};

// Function MechaGame.MechaDestructibleItem.Heal
// [0x00020002] 
// Parameters infos:
// int                            HealthToAdd                    ( CPF_Parm )

void AMechaDestructibleItem::Heal ( int HealthToAdd )
{
	static UFunction* pFnHeal = NULL;

	if ( ! pFnHeal )
		pFnHeal = (UFunction*) UObject::GObjObjects()->Data[ 208674 ];

	AMechaDestructibleItem_execHeal_Parms Heal_Parms;
	Heal_Parms.HealthToAdd = HealthToAdd;

	this->ProcessEvent ( pFnHeal, &Heal_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItem.SetHealDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         NewHealDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void AMechaDestructibleItem::SetHealDelegate ( struct FScriptDelegate NewHealDelegate )
{
	static UFunction* pFnSetHealDelegate = NULL;

	if ( ! pFnSetHealDelegate )
		pFnSetHealDelegate = (UFunction*) UObject::GObjObjects()->Data[ 208671 ];

	AMechaDestructibleItem_execSetHealDelegate_Parms SetHealDelegate_Parms;
	memcpy ( &SetHealDelegate_Parms.NewHealDelegate, &NewHealDelegate, 0xC );

	this->ProcessEvent ( pFnSetHealDelegate, &SetHealDelegate_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItem.HealDelegate
// [0x00120000] 
// Parameters infos:
// int                            HealthToAdd                    ( CPF_Parm )

void AMechaDestructibleItem::HealDelegate ( int HealthToAdd )
{
	static UFunction* pFnHealDelegate = NULL;

	if ( ! pFnHealDelegate )
		pFnHealDelegate = (UFunction*) UObject::GObjObjects()->Data[ 208669 ];

	AMechaDestructibleItem_execHealDelegate_Parms HealDelegate_Parms;
	HealDelegate_Parms.HealthToAdd = HealthToAdd;

	this->ProcessEvent ( pFnHealDelegate, &HealDelegate_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItem.SetHealthRepInfo
// [0x00020002] 
// Parameters infos:
// int                            CurrentHealth                  ( CPF_Parm )
// unsigned char                  InType                         ( CPF_Parm )

void AMechaDestructibleItem::SetHealthRepInfo ( int CurrentHealth, unsigned char InType )
{
	static UFunction* pFnSetHealthRepInfo = NULL;

	if ( ! pFnSetHealthRepInfo )
		pFnSetHealthRepInfo = (UFunction*) UObject::GObjObjects()->Data[ 208665 ];

	AMechaDestructibleItem_execSetHealthRepInfo_Parms SetHealthRepInfo_Parms;
	SetHealthRepInfo_Parms.CurrentHealth = CurrentHealth;
	SetHealthRepInfo_Parms.InType = InType;

	this->ProcessEvent ( pFnSetHealthRepInfo, &SetHealthRepInfo_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItem.TakeDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void AMechaDestructibleItem::eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 208646 ];

	AMechaDestructibleItem_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.Damage = Damage;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x20 );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItem.SpecialTakeDamage
// [0x00020002] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm )

void AMechaDestructibleItem::SpecialTakeDamage ( int Damage )
{
	static UFunction* pFnSpecialTakeDamage = NULL;

	if ( ! pFnSpecialTakeDamage )
		pFnSpecialTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 208643 ];

	AMechaDestructibleItem_execSpecialTakeDamage_Parms SpecialTakeDamage_Parms;
	SpecialTakeDamage_Parms.Damage = Damage;

	this->ProcessEvent ( pFnSpecialTakeDamage, &SpecialTakeDamage_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItem.SetTakeDamageDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         NewTakeDamageDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void AMechaDestructibleItem::SetTakeDamageDelegate ( struct FScriptDelegate NewTakeDamageDelegate )
{
	static UFunction* pFnSetTakeDamageDelegate = NULL;

	if ( ! pFnSetTakeDamageDelegate )
		pFnSetTakeDamageDelegate = (UFunction*) UObject::GObjObjects()->Data[ 208640 ];

	AMechaDestructibleItem_execSetTakeDamageDelegate_Parms SetTakeDamageDelegate_Parms;
	memcpy ( &SetTakeDamageDelegate_Parms.NewTakeDamageDelegate, &NewTakeDamageDelegate, 0xC );

	this->ProcessEvent ( pFnSetTakeDamageDelegate, &SetTakeDamageDelegate_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItem.TakeDamageDelegate
// [0x00120000] 
// Parameters infos:
// class AActor*                  Target                         ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )

void AMechaDestructibleItem::TakeDamageDelegate ( class AActor* Target, int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamageDelegate = NULL;

	if ( ! pFnTakeDamageDelegate )
		pFnTakeDamageDelegate = (UFunction*) UObject::GObjObjects()->Data[ 208631 ];

	AMechaDestructibleItem_execTakeDamageDelegate_Parms TakeDamageDelegate_Parms;
	TakeDamageDelegate_Parms.Target = Target;
	TakeDamageDelegate_Parms.Damage = Damage;
	TakeDamageDelegate_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamageDelegate_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamageDelegate_Parms.Momentum, &Momentum, 0xC );
	TakeDamageDelegate_Parms.DamageType = DamageType;
	memcpy ( &TakeDamageDelegate_Parms.HitInfo, &HitInfo, 0x20 );
	TakeDamageDelegate_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamageDelegate, &TakeDamageDelegate_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItem.AdjustDamageOnScale
// [0x00420002] 
// Parameters infos:
// class ATGMechaGamePlayerController* InstigatedBy                   ( CPF_Parm )
// int                            InDamage                       ( CPF_Parm | CPF_OutParm )

void AMechaDestructibleItem::AdjustDamageOnScale ( class ATGMechaGamePlayerController* InstigatedBy, int* InDamage )
{
	static UFunction* pFnAdjustDamageOnScale = NULL;

	if ( ! pFnAdjustDamageOnScale )
		pFnAdjustDamageOnScale = (UFunction*) UObject::GObjObjects()->Data[ 208623 ];

	AMechaDestructibleItem_execAdjustDamageOnScale_Parms AdjustDamageOnScale_Parms;
	AdjustDamageOnScale_Parms.InstigatedBy = InstigatedBy;

	this->ProcessEvent ( pFnAdjustDamageOnScale, &AdjustDamageOnScale_Parms, NULL );

	if ( InDamage )
		*InDamage = AdjustDamageOnScale_Parms.InDamage;
};

// Function MechaGame.MechaDestructibleItem.IsKeyItem
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AMechaDestructibleItem::IsKeyItem ( )
{
	static UFunction* pFnIsKeyItem = NULL;

	if ( ! pFnIsKeyItem )
		pFnIsKeyItem = (UFunction*) UObject::GObjObjects()->Data[ 208621 ];

	AMechaDestructibleItem_execIsKeyItem_Parms IsKeyItem_Parms;

	this->ProcessEvent ( pFnIsKeyItem, &IsKeyItem_Parms, NULL );

	return IsKeyItem_Parms.ReturnValue;
};

// Function MechaGame.MechaDestructibleItem.SetKeyItem
// [0x00020002] 
// Parameters infos:
// unsigned long                  bIsKeyItem                     ( CPF_Parm )

void AMechaDestructibleItem::SetKeyItem ( unsigned long bIsKeyItem )
{
	static UFunction* pFnSetKeyItem = NULL;

	if ( ! pFnSetKeyItem )
		pFnSetKeyItem = (UFunction*) UObject::GObjObjects()->Data[ 208618 ];

	AMechaDestructibleItem_execSetKeyItem_Parms SetKeyItem_Parms;
	SetKeyItem_Parms.bIsKeyItem = bIsKeyItem;

	this->ProcessEvent ( pFnSetKeyItem, &SetKeyItem_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItem.SetEnabled
// [0x00020002] 
// Parameters infos:
// unsigned long                  bInEnabled                     ( CPF_Parm )

void AMechaDestructibleItem::SetEnabled ( unsigned long bInEnabled )
{
	static UFunction* pFnSetEnabled = NULL;

	if ( ! pFnSetEnabled )
		pFnSetEnabled = (UFunction*) UObject::GObjObjects()->Data[ 208615 ];

	AMechaDestructibleItem_execSetEnabled_Parms SetEnabled_Parms;
	SetEnabled_Parms.bInEnabled = bInEnabled;

	this->ProcessEvent ( pFnSetEnabled, &SetEnabled_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItem.Reset
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AMechaDestructibleItem::eventReset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 208614 ];

	AMechaDestructibleItem_eventReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItem.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void AMechaDestructibleItem::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 208612 ];

	AMechaDestructibleItem_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItem.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AMechaDestructibleItem::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 208608 ];

	AMechaDestructibleItem_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.SetViewTarget
// [0x00024002] 
// Parameters infos:
// class AActor*                  NewViewTarget                  ( CPF_Parm )
// struct FViewTargetTransitionParams TransitionParams               ( CPF_OptionalParm | CPF_Parm )

void ATGMechaGamePlayerController::SetViewTarget ( class AActor* NewViewTarget, struct FViewTargetTransitionParams TransitionParams )
{
	static UFunction* pFnSetViewTarget = NULL;

	if ( ! pFnSetViewTarget )
		pFnSetViewTarget = (UFunction*) UObject::GObjObjects()->Data[ 212489 ];

	ATGMechaGamePlayerController_execSetViewTarget_Parms SetViewTarget_Parms;
	SetViewTarget_Parms.NewViewTarget = NewViewTarget;
	memcpy ( &SetViewTarget_Parms.TransitionParams, &TransitionParams, 0x10 );

	this->ProcessEvent ( pFnSetViewTarget, &SetViewTarget_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.SwitchClip
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATGMechaGamePlayerController::SwitchClip ( )
{
	static UFunction* pFnSwitchClip = NULL;

	if ( ! pFnSwitchClip )
		pFnSwitchClip = (UFunction*) UObject::GObjObjects()->Data[ 212487 ];

	ATGMechaGamePlayerController_execSwitchClip_Parms SwitchClip_Parms;

	this->ProcessEvent ( pFnSwitchClip, &SwitchClip_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.ClientPlayTipSound
// [0x010201C2] 
// Parameters infos:
// unsigned char                  SndType                        ( CPF_Parm )

void ATGMechaGamePlayerController::ClientPlayTipSound ( unsigned char SndType )
{
	static UFunction* pFnClientPlayTipSound = NULL;

	if ( ! pFnClientPlayTipSound )
		pFnClientPlayTipSound = (UFunction*) UObject::GObjObjects()->Data[ 212483 ];

	ATGMechaGamePlayerController_execClientPlayTipSound_Parms ClientPlayTipSound_Parms;
	ClientPlayTipSound_Parms.SndType = SndType;

	this->ProcessEvent ( pFnClientPlayTipSound, &ClientPlayTipSound_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.ClientReceiveTextMessage
// [0x010249C2] ( FUNC_Event )
// Parameters infos:
// class UClass*                  Message                        ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// int                            NumValue1                      ( CPF_OptionalParm | CPF_Parm )
// int                            NumValue2                      ( CPF_OptionalParm | CPF_Parm )
// struct FString                 StrValue                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void ATGMechaGamePlayerController::eventClientReceiveTextMessage ( class UClass* Message, int Switch, int NumValue1, int NumValue2, struct FString StrValue, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceiveTextMessage = NULL;

	if ( ! pFnClientReceiveTextMessage )
		pFnClientReceiveTextMessage = (UFunction*) UObject::GObjObjects()->Data[ 212476 ];

	ATGMechaGamePlayerController_eventClientReceiveTextMessage_Parms ClientReceiveTextMessage_Parms;
	ClientReceiveTextMessage_Parms.Message = Message;
	ClientReceiveTextMessage_Parms.Switch = Switch;
	ClientReceiveTextMessage_Parms.NumValue1 = NumValue1;
	ClientReceiveTextMessage_Parms.NumValue2 = NumValue2;
	memcpy ( &ClientReceiveTextMessage_Parms.StrValue, &StrValue, 0xC );
	ClientReceiveTextMessage_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceiveTextMessage, &ClientReceiveTextMessage_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.ClientPlayCameraAnim
// [0x01024942] ( FUNC_Event )
// Parameters infos:
// class UCameraAnim*             AnimToPlay                     ( CPF_Parm )
// float                          Scale                          ( CPF_OptionalParm | CPF_Parm )
// float                          Rate                           ( CPF_OptionalParm | CPF_Parm )
// float                          BlendInTime                    ( CPF_OptionalParm | CPF_Parm )
// float                          BlendOutTime                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bLoop                          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bRandomStartTime               ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  Space                          ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                CustomPlaySpace                ( CPF_OptionalParm | CPF_Parm )

void ATGMechaGamePlayerController::eventClientPlayCameraAnim ( class UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, unsigned long bLoop, unsigned long bRandomStartTime, unsigned char Space, struct FRotator CustomPlaySpace )
{
	static UFunction* pFnClientPlayCameraAnim = NULL;

	if ( ! pFnClientPlayCameraAnim )
		pFnClientPlayCameraAnim = (UFunction*) UObject::GObjObjects()->Data[ 212466 ];

	ATGMechaGamePlayerController_eventClientPlayCameraAnim_Parms ClientPlayCameraAnim_Parms;
	ClientPlayCameraAnim_Parms.AnimToPlay = AnimToPlay;
	ClientPlayCameraAnim_Parms.Scale = Scale;
	ClientPlayCameraAnim_Parms.Rate = Rate;
	ClientPlayCameraAnim_Parms.BlendInTime = BlendInTime;
	ClientPlayCameraAnim_Parms.BlendOutTime = BlendOutTime;
	ClientPlayCameraAnim_Parms.bLoop = bLoop;
	ClientPlayCameraAnim_Parms.bRandomStartTime = bRandomStartTime;
	ClientPlayCameraAnim_Parms.Space = Space;
	memcpy ( &ClientPlayCameraAnim_Parms.CustomPlaySpace, &CustomPlaySpace, 0xC );

	this->ProcessEvent ( pFnClientPlayCameraAnim, &ClientPlayCameraAnim_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.PlayLocalCameraShake
// [0x00024102] 
// Parameters infos:
// class UCameraShake*            Shake                          ( CPF_Parm )
// float                          Scale                          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bTryForceFeedback              ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  PlaySpace                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                UserPlaySpaceRot               ( CPF_OptionalParm | CPF_Parm )

void ATGMechaGamePlayerController::PlayLocalCameraShake ( class UCameraShake* Shake, float Scale, unsigned long bTryForceFeedback, unsigned char PlaySpace, struct FRotator UserPlaySpaceRot )
{
	static UFunction* pFnPlayLocalCameraShake = NULL;

	if ( ! pFnPlayLocalCameraShake )
		pFnPlayLocalCameraShake = (UFunction*) UObject::GObjObjects()->Data[ 212460 ];

	ATGMechaGamePlayerController_execPlayLocalCameraShake_Parms PlayLocalCameraShake_Parms;
	PlayLocalCameraShake_Parms.Shake = Shake;
	PlayLocalCameraShake_Parms.Scale = Scale;
	PlayLocalCameraShake_Parms.bTryForceFeedback = bTryForceFeedback;
	PlayLocalCameraShake_Parms.PlaySpace = PlaySpace;
	memcpy ( &PlayLocalCameraShake_Parms.UserPlaySpaceRot, &UserPlaySpaceRot, 0xC );

	this->ProcessEvent ( pFnPlayLocalCameraShake, &PlayLocalCameraShake_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.NotifyClientAssistance
// [0x010201C2] 
// Parameters infos:

void ATGMechaGamePlayerController::NotifyClientAssistance ( )
{
	static UFunction* pFnNotifyClientAssistance = NULL;

	if ( ! pFnNotifyClientAssistance )
		pFnNotifyClientAssistance = (UFunction*) UObject::GObjObjects()->Data[ 212459 ];

	ATGMechaGamePlayerController_execNotifyClientAssistance_Parms NotifyClientAssistance_Parms;

	this->ProcessEvent ( pFnNotifyClientAssistance, &NotifyClientAssistance_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.NotifyClientFrozen
// [0x010201C2] 
// Parameters infos:

void ATGMechaGamePlayerController::NotifyClientFrozen ( )
{
	static UFunction* pFnNotifyClientFrozen = NULL;

	if ( ! pFnNotifyClientFrozen )
		pFnNotifyClientFrozen = (UFunction*) UObject::GObjObjects()->Data[ 212457 ];

	ATGMechaGamePlayerController_execNotifyClientFrozen_Parms NotifyClientFrozen_Parms;

	this->ProcessEvent ( pFnNotifyClientFrozen, &NotifyClientFrozen_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.NotifyClientItemSmite
// [0x010201C2] 
// Parameters infos:

void ATGMechaGamePlayerController::NotifyClientItemSmite ( )
{
	static UFunction* pFnNotifyClientItemSmite = NULL;

	if ( ! pFnNotifyClientItemSmite )
		pFnNotifyClientItemSmite = (UFunction*) UObject::GObjObjects()->Data[ 212455 ];

	ATGMechaGamePlayerController_execNotifyClientItemSmite_Parms NotifyClientItemSmite_Parms;

	this->ProcessEvent ( pFnNotifyClientItemSmite, &NotifyClientItemSmite_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.NotifyClientSmite
// [0x010201C2] 
// Parameters infos:

void ATGMechaGamePlayerController::NotifyClientSmite ( )
{
	static UFunction* pFnNotifyClientSmite = NULL;

	if ( ! pFnNotifyClientSmite )
		pFnNotifyClientSmite = (UFunction*) UObject::GObjObjects()->Data[ 212453 ];

	ATGMechaGamePlayerController_execNotifyClientSmite_Parms NotifyClientSmite_Parms;

	this->ProcessEvent ( pFnNotifyClientSmite, &NotifyClientSmite_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.NotifyFrozen
// [0x00020002] 
// Parameters infos:

void ATGMechaGamePlayerController::NotifyFrozen ( )
{
	static UFunction* pFnNotifyFrozen = NULL;

	if ( ! pFnNotifyFrozen )
		pFnNotifyFrozen = (UFunction*) UObject::GObjObjects()->Data[ 212451 ];

	ATGMechaGamePlayerController_execNotifyFrozen_Parms NotifyFrozen_Parms;

	this->ProcessEvent ( pFnNotifyFrozen, &NotifyFrozen_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.NotifyItemSmite
// [0x00020002] 
// Parameters infos:

void ATGMechaGamePlayerController::NotifyItemSmite ( )
{
	static UFunction* pFnNotifyItemSmite = NULL;

	if ( ! pFnNotifyItemSmite )
		pFnNotifyItemSmite = (UFunction*) UObject::GObjObjects()->Data[ 212449 ];

	ATGMechaGamePlayerController_execNotifyItemSmite_Parms NotifyItemSmite_Parms;

	this->ProcessEvent ( pFnNotifyItemSmite, &NotifyItemSmite_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.NotifySmite
// [0x00020002] 
// Parameters infos:

void ATGMechaGamePlayerController::NotifySmite ( )
{
	static UFunction* pFnNotifySmite = NULL;

	if ( ! pFnNotifySmite )
		pFnNotifySmite = (UFunction*) UObject::GObjObjects()->Data[ 212447 ];

	ATGMechaGamePlayerController_execNotifySmite_Parms NotifySmite_Parms;

	this->ProcessEvent ( pFnNotifySmite, &NotifySmite_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.NotifyMechaDied
// [0x00020002] 
// Parameters infos:
// class ATGRealMecha*            Mecha                          ( CPF_Parm )

void ATGMechaGamePlayerController::NotifyMechaDied ( class ATGRealMecha* Mecha )
{
	static UFunction* pFnNotifyMechaDied = NULL;

	if ( ! pFnNotifyMechaDied )
		pFnNotifyMechaDied = (UFunction*) UObject::GObjObjects()->Data[ 212443 ];

	ATGMechaGamePlayerController_execNotifyMechaDied_Parms NotifyMechaDied_Parms;
	NotifyMechaDied_Parms.Mecha = Mecha;

	this->ProcessEvent ( pFnNotifyMechaDied, &NotifyMechaDied_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.CheckItemSmite
// [0x00020002] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm )

void ATGMechaGamePlayerController::CheckItemSmite ( int Damage )
{
	static UFunction* pFnCheckItemSmite = NULL;

	if ( ! pFnCheckItemSmite )
		pFnCheckItemSmite = (UFunction*) UObject::GObjObjects()->Data[ 212441 ];

	ATGMechaGamePlayerController_execCheckItemSmite_Parms CheckItemSmite_Parms;
	CheckItemSmite_Parms.Damage = Damage;

	this->ProcessEvent ( pFnCheckItemSmite, &CheckItemSmite_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.CheckSmite
// [0x00820002] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class ATGRealMecha*            Mecha                          ( CPF_Parm )

void ATGMechaGamePlayerController::CheckSmite ( int Damage, class ATGRealMecha* Mecha )
{
	static UFunction* pFnCheckSmite = NULL;

	if ( ! pFnCheckSmite )
		pFnCheckSmite = (UFunction*) UObject::GObjObjects()->Data[ 212436 ];

	ATGMechaGamePlayerController_execCheckSmite_Parms CheckSmite_Parms;
	CheckSmite_Parms.Damage = Damage;
	CheckSmite_Parms.Mecha = Mecha;

	this->ProcessEvent ( pFnCheckSmite, &CheckSmite_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.NotifyClientMechaHealthChange
// [0x010201C2] 
// Parameters infos:
// struct FHealthInfo             Info                           ( CPF_Parm )

void ATGMechaGamePlayerController::NotifyClientMechaHealthChange ( struct FHealthInfo Info )
{
	static UFunction* pFnNotifyClientMechaHealthChange = NULL;

	if ( ! pFnNotifyClientMechaHealthChange )
		pFnNotifyClientMechaHealthChange = (UFunction*) UObject::GObjObjects()->Data[ 212433 ];

	ATGMechaGamePlayerController_execNotifyClientMechaHealthChange_Parms NotifyClientMechaHealthChange_Parms;
	memcpy ( &NotifyClientMechaHealthChange_Parms.Info, &Info, 0x10 );

	this->ProcessEvent ( pFnNotifyClientMechaHealthChange, &NotifyClientMechaHealthChange_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.CheckMechaHealthEffect
// [0x00820002] 
// Parameters infos:
// unsigned long                  bWeakPoint                     ( CPF_Parm )
// int                            HealthChange                   ( CPF_Parm )
// class ATGRealMecha*            Mecha                          ( CPF_Parm )

void ATGMechaGamePlayerController::CheckMechaHealthEffect ( unsigned long bWeakPoint, int HealthChange, class ATGRealMecha* Mecha )
{
	static UFunction* pFnCheckMechaHealthEffect = NULL;

	if ( ! pFnCheckMechaHealthEffect )
		pFnCheckMechaHealthEffect = (UFunction*) UObject::GObjObjects()->Data[ 212426 ];

	ATGMechaGamePlayerController_execCheckMechaHealthEffect_Parms CheckMechaHealthEffect_Parms;
	CheckMechaHealthEffect_Parms.bWeakPoint = bWeakPoint;
	CheckMechaHealthEffect_Parms.HealthChange = HealthChange;
	CheckMechaHealthEffect_Parms.Mecha = Mecha;

	this->ProcessEvent ( pFnCheckMechaHealthEffect, &CheckMechaHealthEffect_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.CheckBalance
// [0x00020002] 
// Parameters infos:

void ATGMechaGamePlayerController::CheckBalance ( )
{
	static UFunction* pFnCheckBalance = NULL;

	if ( ! pFnCheckBalance )
		pFnCheckBalance = (UFunction*) UObject::GObjObjects()->Data[ 212421 ];

	ATGMechaGamePlayerController_execCheckBalance_Parms CheckBalance_Parms;

	this->ProcessEvent ( pFnCheckBalance, &CheckBalance_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.Possess
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void ATGMechaGamePlayerController::eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossess = NULL;

	if ( ! pFnPossess )
		pFnPossess = (UFunction*) UObject::GObjObjects()->Data[ 212416 ];

	ATGMechaGamePlayerController_eventPossess_Parms Possess_Parms;
	Possess_Parms.inPawn = inPawn;
	Possess_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossess, &Possess_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.ClearReinforceWeapon
// [0x00020002] 
// Parameters infos:

void ATGMechaGamePlayerController::ClearReinforceWeapon ( )
{
	static UFunction* pFnClearReinforceWeapon = NULL;

	if ( ! pFnClearReinforceWeapon )
		pFnClearReinforceWeapon = (UFunction*) UObject::GObjObjects()->Data[ 212414 ];

	ATGMechaGamePlayerController_execClearReinforceWeapon_Parms ClearReinforceWeapon_Parms;

	this->ProcessEvent ( pFnClearReinforceWeapon, &ClearReinforceWeapon_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.ReinforceWeapon
// [0x00020002] 
// Parameters infos:
// float                          DamageScaleDelta               ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void ATGMechaGamePlayerController::ReinforceWeapon ( float DamageScaleDelta, float Duration )
{
	static UFunction* pFnReinforceWeapon = NULL;

	if ( ! pFnReinforceWeapon )
		pFnReinforceWeapon = (UFunction*) UObject::GObjObjects()->Data[ 212410 ];

	ATGMechaGamePlayerController_execReinforceWeapon_Parms ReinforceWeapon_Parms;
	ReinforceWeapon_Parms.DamageScaleDelta = DamageScaleDelta;
	ReinforceWeapon_Parms.Duration = Duration;

	this->ProcessEvent ( pFnReinforceWeapon, &ReinforceWeapon_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.GetDamageScaleDecrement
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGMechaGamePlayerController::GetDamageScaleDecrement ( )
{
	static UFunction* pFnGetDamageScaleDecrement = NULL;

	if ( ! pFnGetDamageScaleDecrement )
		pFnGetDamageScaleDecrement = (UFunction*) UObject::GObjObjects()->Data[ 210778 ];

	ATGMechaGamePlayerController_execGetDamageScaleDecrement_Parms GetDamageScaleDecrement_Parms;

	this->ProcessEvent ( pFnGetDamageScaleDecrement, &GetDamageScaleDecrement_Parms, NULL );

	return GetDamageScaleDecrement_Parms.ReturnValue;
};

// Function MechaGame.TGMechaGamePlayerController.GetDamageScaleIncrement
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGMechaGamePlayerController::GetDamageScaleIncrement ( )
{
	static UFunction* pFnGetDamageScaleIncrement = NULL;

	if ( ! pFnGetDamageScaleIncrement )
		pFnGetDamageScaleIncrement = (UFunction*) UObject::GObjObjects()->Data[ 208628 ];

	ATGMechaGamePlayerController_execGetDamageScaleIncrement_Parms GetDamageScaleIncrement_Parms;

	this->ProcessEvent ( pFnGetDamageScaleIncrement, &GetDamageScaleIncrement_Parms, NULL );

	return GetDamageScaleIncrement_Parms.ReturnValue;
};

// Function MechaGame.TGMechaGamePlayerController.Reset
// [0x00020002] 
// Parameters infos:

void ATGMechaGamePlayerController::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 212409 ];

	ATGMechaGamePlayerController_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.EndZoom
// [0x00020102] 
// Parameters infos:

void ATGMechaGamePlayerController::EndZoom ( )
{
	static UFunction* pFnEndZoom = NULL;

	if ( ! pFnEndZoom )
		pFnEndZoom = (UFunction*) UObject::GObjObjects()->Data[ 212408 ];

	ATGMechaGamePlayerController_execEndZoom_Parms EndZoom_Parms;

	this->ProcessEvent ( pFnEndZoom, &EndZoom_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.PawnDied
// [0x00020002] 
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )

void ATGMechaGamePlayerController::PawnDied ( class APawn* inPawn )
{
	static UFunction* pFnPawnDied = NULL;

	if ( ! pFnPawnDied )
		pFnPawnDied = (UFunction*) UObject::GObjObjects()->Data[ 212406 ];

	ATGMechaGamePlayerController_execPawnDied_Parms PawnDied_Parms;
	PawnDied_Parms.inPawn = inPawn;

	this->ProcessEvent ( pFnPawnDied, &PawnDied_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.ShouldDrawActorOverlays
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaGamePlayerController::ShouldDrawActorOverlays ( )
{
	static UFunction* pFnShouldDrawActorOverlays = NULL;

	if ( ! pFnShouldDrawActorOverlays )
		pFnShouldDrawActorOverlays = (UFunction*) UObject::GObjObjects()->Data[ 212404 ];

	ATGMechaGamePlayerController_execShouldDrawActorOverlays_Parms ShouldDrawActorOverlays_Parms;

	this->ProcessEvent ( pFnShouldDrawActorOverlays, &ShouldDrawActorOverlays_Parms, NULL );

	return ShouldDrawActorOverlays_Parms.ReturnValue;
};

// Function MechaGame.TGMechaGamePlayerController.VehicleEvent
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FName                   EventName                      ( CPF_Parm )

void ATGMechaGamePlayerController::VehicleEvent ( struct FName EventName )
{
	static UFunction* pFnVehicleEvent = NULL;

	if ( ! pFnVehicleEvent )
		pFnVehicleEvent = (UFunction*) UObject::GObjObjects()->Data[ 212402 ];

	ATGMechaGamePlayerController_execVehicleEvent_Parms VehicleEvent_Parms;
	memcpy ( &VehicleEvent_Parms.EventName, &EventName, 0x8 );

	this->ProcessEvent ( pFnVehicleEvent, &VehicleEvent_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.ClientNotifySkillUsed
// [0x010201C2] 
// Parameters infos:
// class AMechaSkillBase*         Skill                          ( CPF_Parm )

void ATGMechaGamePlayerController::ClientNotifySkillUsed ( class AMechaSkillBase* Skill )
{
	static UFunction* pFnClientNotifySkillUsed = NULL;

	if ( ! pFnClientNotifySkillUsed )
		pFnClientNotifySkillUsed = (UFunction*) UObject::GObjObjects()->Data[ 212400 ];

	ATGMechaGamePlayerController_execClientNotifySkillUsed_Parms ClientNotifySkillUsed_Parms;
	ClientNotifySkillUsed_Parms.Skill = Skill;

	this->ProcessEvent ( pFnClientNotifySkillUsed, &ClientNotifySkillUsed_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.NotifySkillUsed
// [0x00020002] 
// Parameters infos:
// class AMechaSkillBase*         Skill                          ( CPF_Parm )

void ATGMechaGamePlayerController::NotifySkillUsed ( class AMechaSkillBase* Skill )
{
	static UFunction* pFnNotifySkillUsed = NULL;

	if ( ! pFnNotifySkillUsed )
		pFnNotifySkillUsed = (UFunction*) UObject::GObjObjects()->Data[ 212397 ];

	ATGMechaGamePlayerController_execNotifySkillUsed_Parms NotifySkillUsed_Parms;
	NotifySkillUsed_Parms.Skill = Skill;

	this->ProcessEvent ( pFnNotifySkillUsed, &NotifySkillUsed_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.UseXPSkill
// [0x00020000] 
// Parameters infos:

void ATGMechaGamePlayerController::UseXPSkill ( )
{
	static UFunction* pFnUseXPSkill = NULL;

	if ( ! pFnUseXPSkill )
		pFnUseXPSkill = (UFunction*) UObject::GObjObjects()->Data[ 212396 ];

	ATGMechaGamePlayerController_execUseXPSkill_Parms UseXPSkill_Parms;

	this->ProcessEvent ( pFnUseXPSkill, &UseXPSkill_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.NotifySkillCreated
// [0x00020002] 
// Parameters infos:
// class AMechaSkillBase*         Skill                          ( CPF_Parm )

void ATGMechaGamePlayerController::NotifySkillCreated ( class AMechaSkillBase* Skill )
{
	static UFunction* pFnNotifySkillCreated = NULL;

	if ( ! pFnNotifySkillCreated )
		pFnNotifySkillCreated = (UFunction*) UObject::GObjObjects()->Data[ 212392 ];

	ATGMechaGamePlayerController_execNotifySkillCreated_Parms NotifySkillCreated_Parms;
	NotifySkillCreated_Parms.Skill = Skill;

	this->ProcessEvent ( pFnNotifySkillCreated, &NotifySkillCreated_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.SetSkillLevel
// [0x00020002] 
// Parameters infos:
// struct FName                   SkillName                      ( CPF_Parm )
// unsigned char                  Level                          ( CPF_Parm )

void ATGMechaGamePlayerController::SetSkillLevel ( struct FName SkillName, unsigned char Level )
{
	static UFunction* pFnSetSkillLevel = NULL;

	if ( ! pFnSetSkillLevel )
		pFnSetSkillLevel = (UFunction*) UObject::GObjObjects()->Data[ 212389 ];

	ATGMechaGamePlayerController_execSetSkillLevel_Parms SetSkillLevel_Parms;
	memcpy ( &SetSkillLevel_Parms.SkillName, &SkillName, 0x8 );
	SetSkillLevel_Parms.Level = Level;

	this->ProcessEvent ( pFnSetSkillLevel, &SetSkillLevel_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.ServerSetSkillStartSignal
// [0x002200C2] 
// Parameters infos:
// struct FName                   SkillName                      ( CPF_Parm )
// unsigned long                  bInEnabled                     ( CPF_Parm )

void ATGMechaGamePlayerController::ServerSetSkillStartSignal ( struct FName SkillName, unsigned long bInEnabled )
{
	static UFunction* pFnServerSetSkillStartSignal = NULL;

	if ( ! pFnServerSetSkillStartSignal )
		pFnServerSetSkillStartSignal = (UFunction*) UObject::GObjObjects()->Data[ 212386 ];

	ATGMechaGamePlayerController_execServerSetSkillStartSignal_Parms ServerSetSkillStartSignal_Parms;
	memcpy ( &ServerSetSkillStartSignal_Parms.SkillName, &SkillName, 0x8 );
	ServerSetSkillStartSignal_Parms.bInEnabled = bInEnabled;

	this->ProcessEvent ( pFnServerSetSkillStartSignal, &ServerSetSkillStartSignal_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.HasSkill
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SkillName                      ( CPF_Parm )

bool ATGMechaGamePlayerController::HasSkill ( struct FName SkillName )
{
	static UFunction* pFnHasSkill = NULL;

	if ( ! pFnHasSkill )
		pFnHasSkill = (UFunction*) UObject::GObjObjects()->Data[ 212383 ];

	ATGMechaGamePlayerController_execHasSkill_Parms HasSkill_Parms;
	memcpy ( &HasSkill_Parms.SkillName, &SkillName, 0x8 );

	this->ProcessEvent ( pFnHasSkill, &HasSkill_Parms, NULL );

	return HasSkill_Parms.ReturnValue;
};

// Function MechaGame.TGMechaGamePlayerController.IsSkillInEffect
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SkillName                      ( CPF_Parm )

bool ATGMechaGamePlayerController::IsSkillInEffect ( struct FName SkillName )
{
	static UFunction* pFnIsSkillInEffect = NULL;

	if ( ! pFnIsSkillInEffect )
		pFnIsSkillInEffect = (UFunction*) UObject::GObjObjects()->Data[ 212380 ];

	ATGMechaGamePlayerController_execIsSkillInEffect_Parms IsSkillInEffect_Parms;
	memcpy ( &IsSkillInEffect_Parms.SkillName, &SkillName, 0x8 );

	this->ProcessEvent ( pFnIsSkillInEffect, &IsSkillInEffect_Parms, NULL );

	return IsSkillInEffect_Parms.ReturnValue;
};

// Function MechaGame.TGMechaGamePlayerController.PerformedStopSkillByName
// [0x00020002] 
// Parameters infos:
// struct FName                   SkillName                      ( CPF_Parm )

void ATGMechaGamePlayerController::PerformedStopSkillByName ( struct FName SkillName )
{
	static UFunction* pFnPerformedStopSkillByName = NULL;

	if ( ! pFnPerformedStopSkillByName )
		pFnPerformedStopSkillByName = (UFunction*) UObject::GObjObjects()->Data[ 212377 ];

	ATGMechaGamePlayerController_execPerformedStopSkillByName_Parms PerformedStopSkillByName_Parms;
	memcpy ( &PerformedStopSkillByName_Parms.SkillName, &SkillName, 0x8 );

	this->ProcessEvent ( pFnPerformedStopSkillByName, &PerformedStopSkillByName_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.ServerStopSkillByName
// [0x002200C2] 
// Parameters infos:
// struct FName                   SkillName                      ( CPF_Parm )

void ATGMechaGamePlayerController::ServerStopSkillByName ( struct FName SkillName )
{
	static UFunction* pFnServerStopSkillByName = NULL;

	if ( ! pFnServerStopSkillByName )
		pFnServerStopSkillByName = (UFunction*) UObject::GObjObjects()->Data[ 212375 ];

	ATGMechaGamePlayerController_execServerStopSkillByName_Parms ServerStopSkillByName_Parms;
	memcpy ( &ServerStopSkillByName_Parms.SkillName, &SkillName, 0x8 );

	this->ProcessEvent ( pFnServerStopSkillByName, &ServerStopSkillByName_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.StopSkillByName
// [0x00020002] 
// Parameters infos:
// struct FName                   SkillName                      ( CPF_Parm )

void ATGMechaGamePlayerController::StopSkillByName ( struct FName SkillName )
{
	static UFunction* pFnStopSkillByName = NULL;

	if ( ! pFnStopSkillByName )
		pFnStopSkillByName = (UFunction*) UObject::GObjObjects()->Data[ 212373 ];

	ATGMechaGamePlayerController_execStopSkillByName_Parms StopSkillByName_Parms;
	memcpy ( &StopSkillByName_Parms.SkillName, &SkillName, 0x8 );

	this->ProcessEvent ( pFnStopSkillByName, &StopSkillByName_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.PerformedStartSkillByName
// [0x00020002] 
// Parameters infos:
// struct FName                   SkillName                      ( CPF_Parm )

void ATGMechaGamePlayerController::PerformedStartSkillByName ( struct FName SkillName )
{
	static UFunction* pFnPerformedStartSkillByName = NULL;

	if ( ! pFnPerformedStartSkillByName )
		pFnPerformedStartSkillByName = (UFunction*) UObject::GObjObjects()->Data[ 212371 ];

	ATGMechaGamePlayerController_execPerformedStartSkillByName_Parms PerformedStartSkillByName_Parms;
	memcpy ( &PerformedStartSkillByName_Parms.SkillName, &SkillName, 0x8 );

	this->ProcessEvent ( pFnPerformedStartSkillByName, &PerformedStartSkillByName_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.ServerStartSkillByName
// [0x002200C2] 
// Parameters infos:
// struct FName                   SkillName                      ( CPF_Parm )

void ATGMechaGamePlayerController::ServerStartSkillByName ( struct FName SkillName )
{
	static UFunction* pFnServerStartSkillByName = NULL;

	if ( ! pFnServerStartSkillByName )
		pFnServerStartSkillByName = (UFunction*) UObject::GObjObjects()->Data[ 212369 ];

	ATGMechaGamePlayerController_execServerStartSkillByName_Parms ServerStartSkillByName_Parms;
	memcpy ( &ServerStartSkillByName_Parms.SkillName, &SkillName, 0x8 );

	this->ProcessEvent ( pFnServerStartSkillByName, &ServerStartSkillByName_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.StartSkillByName
// [0x00020002] 
// Parameters infos:
// struct FName                   SkillName                      ( CPF_Parm )

void ATGMechaGamePlayerController::StartSkillByName ( struct FName SkillName )
{
	static UFunction* pFnStartSkillByName = NULL;

	if ( ! pFnStartSkillByName )
		pFnStartSkillByName = (UFunction*) UObject::GObjObjects()->Data[ 212367 ];

	ATGMechaGamePlayerController_execStartSkillByName_Parms StartSkillByName_Parms;
	memcpy ( &StartSkillByName_Parms.SkillName, &SkillName, 0x8 );

	this->ProcessEvent ( pFnStartSkillByName, &StartSkillByName_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.SetDrivingMecha
// [0x00020002] 
// Parameters infos:
// class ATGMechaBase*            Mecha                          ( CPF_Parm )

void ATGMechaGamePlayerController::SetDrivingMecha ( class ATGMechaBase* Mecha )
{
	static UFunction* pFnSetDrivingMecha = NULL;

	if ( ! pFnSetDrivingMecha )
		pFnSetDrivingMecha = (UFunction*) UObject::GObjObjects()->Data[ 212364 ];

	ATGMechaGamePlayerController_execSetDrivingMecha_Parms SetDrivingMecha_Parms;
	SetDrivingMecha_Parms.Mecha = Mecha;

	this->ProcessEvent ( pFnSetDrivingMecha, &SetDrivingMecha_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.DriveMecha
// [0x00020002] 
// Parameters infos:

void ATGMechaGamePlayerController::DriveMecha ( )
{
	static UFunction* pFnDriveMecha = NULL;

	if ( ! pFnDriveMecha )
		pFnDriveMecha = (UFunction*) UObject::GObjObjects()->Data[ 212358 ];

	ATGMechaGamePlayerController_execDriveMecha_Parms DriveMecha_Parms;

	this->ProcessEvent ( pFnDriveMecha, &DriveMecha_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.GetMechaFactory
// [0x00020002] 
// Parameters infos:
// class ATGMechaFactory*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ATGMechaFactory* ATGMechaGamePlayerController::GetMechaFactory ( )
{
	static UFunction* pFnGetMechaFactory = NULL;

	if ( ! pFnGetMechaFactory )
		pFnGetMechaFactory = (UFunction*) UObject::GObjObjects()->Data[ 212354 ];

	ATGMechaGamePlayerController_execGetMechaFactory_Parms GetMechaFactory_Parms;

	this->ProcessEvent ( pFnGetMechaFactory, &GetMechaFactory_Parms, NULL );

	return GetMechaFactory_Parms.ReturnValue;
};

// Function MechaGame.TGMechaGamePlayerController.GetMechaFactoryType
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char ATGMechaGamePlayerController::GetMechaFactoryType ( )
{
	static UFunction* pFnGetMechaFactoryType = NULL;

	if ( ! pFnGetMechaFactoryType )
		pFnGetMechaFactoryType = (UFunction*) UObject::GObjObjects()->Data[ 212351 ];

	ATGMechaGamePlayerController_execGetMechaFactoryType_Parms GetMechaFactoryType_Parms;

	this->ProcessEvent ( pFnGetMechaFactoryType, &GetMechaFactoryType_Parms, NULL );

	return GetMechaFactoryType_Parms.ReturnValue;
};

// Function MechaGame.TGMechaGamePlayerController.CheckSpectator
// [0x00020002] 
// Parameters infos:

void ATGMechaGamePlayerController::CheckSpectator ( )
{
	static UFunction* pFnCheckSpectator = NULL;

	if ( ! pFnCheckSpectator )
		pFnCheckSpectator = (UFunction*) UObject::GObjObjects()->Data[ 212349 ];

	ATGMechaGamePlayerController_execCheckSpectator_Parms CheckSpectator_Parms;

	this->ProcessEvent ( pFnCheckSpectator, &CheckSpectator_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.ServerChangeMechaType
// [0x002200C2] 
// Parameters infos:
// unsigned char                  NewType                        ( CPF_Parm )

void ATGMechaGamePlayerController::ServerChangeMechaType ( unsigned char NewType )
{
	static UFunction* pFnServerChangeMechaType = NULL;

	if ( ! pFnServerChangeMechaType )
		pFnServerChangeMechaType = (UFunction*) UObject::GObjObjects()->Data[ 212346 ];

	ATGMechaGamePlayerController_execServerChangeMechaType_Parms ServerChangeMechaType_Parms;
	ServerChangeMechaType_Parms.NewType = NewType;

	this->ProcessEvent ( pFnServerChangeMechaType, &ServerChangeMechaType_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.CanSelectMecha
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaGamePlayerController::CanSelectMecha ( )
{
	static UFunction* pFnCanSelectMecha = NULL;

	if ( ! pFnCanSelectMecha )
		pFnCanSelectMecha = (UFunction*) UObject::GObjObjects()->Data[ 211939 ];

	ATGMechaGamePlayerController_execCanSelectMecha_Parms CanSelectMecha_Parms;

	this->ProcessEvent ( pFnCanSelectMecha, &CanSelectMecha_Parms, NULL );

	return CanSelectMecha_Parms.ReturnValue;
};

// Function MechaGame.TGMechaGamePlayerController.ClientSetSelectMechaEnable
// [0x010201C2] 
// Parameters infos:
// unsigned long                  bEnable                        ( CPF_Parm )

void ATGMechaGamePlayerController::ClientSetSelectMechaEnable ( unsigned long bEnable )
{
	static UFunction* pFnClientSetSelectMechaEnable = NULL;

	if ( ! pFnClientSetSelectMechaEnable )
		pFnClientSetSelectMechaEnable = (UFunction*) UObject::GObjObjects()->Data[ 212343 ];

	ATGMechaGamePlayerController_execClientSetSelectMechaEnable_Parms ClientSetSelectMechaEnable_Parms;
	ClientSetSelectMechaEnable_Parms.bEnable = bEnable;

	this->ProcessEvent ( pFnClientSetSelectMechaEnable, &ClientSetSelectMechaEnable_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.ServerSetSelectMechaEnable
// [0x002200C2] 
// Parameters infos:
// unsigned long                  bEnable                        ( CPF_Parm )

void ATGMechaGamePlayerController::ServerSetSelectMechaEnable ( unsigned long bEnable )
{
	static UFunction* pFnServerSetSelectMechaEnable = NULL;

	if ( ! pFnServerSetSelectMechaEnable )
		pFnServerSetSelectMechaEnable = (UFunction*) UObject::GObjObjects()->Data[ 212341 ];

	ATGMechaGamePlayerController_execServerSetSelectMechaEnable_Parms ServerSetSelectMechaEnable_Parms;
	ServerSetSelectMechaEnable_Parms.bEnable = bEnable;

	this->ProcessEvent ( pFnServerSetSelectMechaEnable, &ServerSetSelectMechaEnable_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.SetSelectMechaEnable
// [0x00020002] 
// Parameters infos:
// unsigned long                  bEnable                        ( CPF_Parm )

void ATGMechaGamePlayerController::SetSelectMechaEnable ( unsigned long bEnable )
{
	static UFunction* pFnSetSelectMechaEnable = NULL;

	if ( ! pFnSetSelectMechaEnable )
		pFnSetSelectMechaEnable = (UFunction*) UObject::GObjObjects()->Data[ 212337 ];

	ATGMechaGamePlayerController_execSetSelectMechaEnable_Parms SetSelectMechaEnable_Parms;
	SetSelectMechaEnable_Parms.bEnable = bEnable;

	this->ProcessEvent ( pFnSetSelectMechaEnable, &SetSelectMechaEnable_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.Restart
// [0x00020002] 
// Parameters infos:
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void ATGMechaGamePlayerController::Restart ( unsigned long bVehicleTransition )
{
	static UFunction* pFnRestart = NULL;

	if ( ! pFnRestart )
		pFnRestart = (UFunction*) UObject::GObjObjects()->Data[ 212335 ];

	ATGMechaGamePlayerController_execRestart_Parms Restart_Parms;
	Restart_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnRestart, &Restart_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.AcknowledgePossession
// [0x00020002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void ATGMechaGamePlayerController::AcknowledgePossession ( class APawn* P )
{
	static UFunction* pFnAcknowledgePossession = NULL;

	if ( ! pFnAcknowledgePossession )
		pFnAcknowledgePossession = (UFunction*) UObject::GObjObjects()->Data[ 212333 ];

	ATGMechaGamePlayerController_execAcknowledgePossession_Parms AcknowledgePossession_Parms;
	AcknowledgePossession_Parms.P = P;

	this->ProcessEvent ( pFnAcknowledgePossession, &AcknowledgePossession_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.InitSkillSystem
// [0x00020002] 
// Parameters infos:

void ATGMechaGamePlayerController::InitSkillSystem ( )
{
	static UFunction* pFnInitSkillSystem = NULL;

	if ( ! pFnInitSkillSystem )
		pFnInitSkillSystem = (UFunction*) UObject::GObjObjects()->Data[ 212332 ];

	ATGMechaGamePlayerController_execInitSkillSystem_Parms InitSkillSystem_Parms;

	this->ProcessEvent ( pFnInitSkillSystem, &InitSkillSystem_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.InitInputSystem
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATGMechaGamePlayerController::eventInitInputSystem ( )
{
	static UFunction* pFnInitInputSystem = NULL;

	if ( ! pFnInitInputSystem )
		pFnInitInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 212331 ];

	ATGMechaGamePlayerController_eventInitInputSystem_Parms InitInputSystem_Parms;

	this->ProcessEvent ( pFnInitInputSystem, &InitInputSystem_Parms, NULL );
};

// Function MechaGame.TGMechaGamePlayerController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaGamePlayerController::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 212330 ];

	ATGMechaGamePlayerController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerReplicationInfo.IncrementDeaths
// [0x00024002] 
// Parameters infos:
// int                            Amt                            ( CPF_OptionalParm | CPF_Parm )
// class UClass*                  DamageType                     ( CPF_OptionalParm | CPF_Parm )

void ATGMechaPlayerReplicationInfo::IncrementDeaths ( int Amt, class UClass* DamageType )
{
	static UFunction* pFnIncrementDeaths = NULL;

	if ( ! pFnIncrementDeaths )
		pFnIncrementDeaths = (UFunction*) UObject::GObjObjects()->Data[ 212596 ];

	ATGMechaPlayerReplicationInfo_execIncrementDeaths_Parms IncrementDeaths_Parms;
	IncrementDeaths_Parms.Amt = Amt;
	IncrementDeaths_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnIncrementDeaths, &IncrementDeaths_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerReplicationInfo.OnXPIncInfoNotification
// [0x00020102] 
// Parameters infos:

void ATGMechaPlayerReplicationInfo::OnXPIncInfoNotification ( )
{
	static UFunction* pFnOnXPIncInfoNotification = NULL;

	if ( ! pFnOnXPIncInfoNotification )
		pFnOnXPIncInfoNotification = (UFunction*) UObject::GObjObjects()->Data[ 212593 ];

	ATGMechaPlayerReplicationInfo_execOnXPIncInfoNotification_Parms OnXPIncInfoNotification_Parms;

	this->ProcessEvent ( pFnOnXPIncInfoNotification, &OnXPIncInfoNotification_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerReplicationInfo.NotifyXPSkillLevelUp
// [0x00020102] 
// Parameters infos:

void ATGMechaPlayerReplicationInfo::NotifyXPSkillLevelUp ( )
{
	static UFunction* pFnNotifyXPSkillLevelUp = NULL;

	if ( ! pFnNotifyXPSkillLevelUp )
		pFnNotifyXPSkillLevelUp = (UFunction*) UObject::GObjObjects()->Data[ 212590 ];

	ATGMechaPlayerReplicationInfo_execNotifyXPSkillLevelUp_Parms NotifyXPSkillLevelUp_Parms;

	this->ProcessEvent ( pFnNotifyXPSkillLevelUp, &NotifyXPSkillLevelUp_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerReplicationInfo.NotifySuperSkillUsed
// [0x00020002] 
// Parameters infos:

void ATGMechaPlayerReplicationInfo::NotifySuperSkillUsed ( )
{
	static UFunction* pFnNotifySuperSkillUsed = NULL;

	if ( ! pFnNotifySuperSkillUsed )
		pFnNotifySuperSkillUsed = (UFunction*) UObject::GObjObjects()->Data[ 212588 ];

	ATGMechaPlayerReplicationInfo_execNotifySuperSkillUsed_Parms NotifySuperSkillUsed_Parms;

	this->ProcessEvent ( pFnNotifySuperSkillUsed, &NotifySuperSkillUsed_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerReplicationInfo.CheckXPIncrementNotify
// [0x00020002] 
// Parameters infos:
// float                          IncPoint                       ( CPF_Parm )
// unsigned char                  XPIncType                      ( CPF_Parm )

void ATGMechaPlayerReplicationInfo::CheckXPIncrementNotify ( float IncPoint, unsigned char XPIncType )
{
	static UFunction* pFnCheckXPIncrementNotify = NULL;

	if ( ! pFnCheckXPIncrementNotify )
		pFnCheckXPIncrementNotify = (UFunction*) UObject::GObjObjects()->Data[ 212581 ];

	ATGMechaPlayerReplicationInfo_execCheckXPIncrementNotify_Parms CheckXPIncrementNotify_Parms;
	CheckXPIncrementNotify_Parms.IncPoint = IncPoint;
	CheckXPIncrementNotify_Parms.XPIncType = XPIncType;

	this->ProcessEvent ( pFnCheckXPIncrementNotify, &CheckXPIncrementNotify_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerReplicationInfo.AddXP
// [0x00020002] 
// Parameters infos:
// float                          Point                          ( CPF_Parm )
// unsigned char                  XPIncType                      ( CPF_Parm )

void ATGMechaPlayerReplicationInfo::AddXP ( float Point, unsigned char XPIncType )
{
	static UFunction* pFnAddXP = NULL;

	if ( ! pFnAddXP )
		pFnAddXP = (UFunction*) UObject::GObjObjects()->Data[ 212574 ];

	ATGMechaPlayerReplicationInfo_execAddXP_Parms AddXP_Parms;
	AddXP_Parms.Point = Point;
	AddXP_Parms.XPIncType = XPIncType;

	this->ProcessEvent ( pFnAddXP, &AddXP_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerReplicationInfo.AddDamageTaken
// [0x00020002] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm )

void ATGMechaPlayerReplicationInfo::AddDamageTaken ( int Damage )
{
	static UFunction* pFnAddDamageTaken = NULL;

	if ( ! pFnAddDamageTaken )
		pFnAddDamageTaken = (UFunction*) UObject::GObjObjects()->Data[ 212571 ];

	ATGMechaPlayerReplicationInfo_execAddDamageTaken_Parms AddDamageTaken_Parms;
	AddDamageTaken_Parms.Damage = Damage;

	this->ProcessEvent ( pFnAddDamageTaken, &AddDamageTaken_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerReplicationInfo.AddDamageForSkill
// [0x00020002] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// unsigned long                  bSpecialDamage                 ( CPF_Parm )

void ATGMechaPlayerReplicationInfo::AddDamageForSkill ( int Damage, unsigned long bSpecialDamage )
{
	static UFunction* pFnAddDamageForSkill = NULL;

	if ( ! pFnAddDamageForSkill )
		pFnAddDamageForSkill = (UFunction*) UObject::GObjObjects()->Data[ 212566 ];

	ATGMechaPlayerReplicationInfo_execAddDamageForSkill_Parms AddDamageForSkill_Parms;
	AddDamageForSkill_Parms.Damage = Damage;
	AddDamageForSkill_Parms.bSpecialDamage = bSpecialDamage;

	this->ProcessEvent ( pFnAddDamageForSkill, &AddDamageForSkill_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerReplicationInfo.AddKillForSkill
// [0x00024002] 
// Parameters infos:
// int                            Kill                           ( CPF_OptionalParm | CPF_Parm )

void ATGMechaPlayerReplicationInfo::AddKillForSkill ( int Kill )
{
	static UFunction* pFnAddKillForSkill = NULL;

	if ( ! pFnAddKillForSkill )
		pFnAddKillForSkill = (UFunction*) UObject::GObjObjects()->Data[ 212563 ];

	ATGMechaPlayerReplicationInfo_execAddKillForSkill_Parms AddKillForSkill_Parms;
	AddKillForSkill_Parms.Kill = Kill;

	this->ProcessEvent ( pFnAddKillForSkill, &AddKillForSkill_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerReplicationInfo.AddGameScore
// [0x00020002] 
// Parameters infos:
// float                          ScoreToAdd                     ( CPF_Parm )

void ATGMechaPlayerReplicationInfo::AddGameScore ( float ScoreToAdd )
{
	static UFunction* pFnAddGameScore = NULL;

	if ( ! pFnAddGameScore )
		pFnAddGameScore = (UFunction*) UObject::GObjObjects()->Data[ 212560 ];

	ATGMechaPlayerReplicationInfo_execAddGameScore_Parms AddGameScore_Parms;
	AddGameScore_Parms.ScoreToAdd = ScoreToAdd;

	this->ProcessEvent ( pFnAddGameScore, &AddGameScore_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerReplicationInfo.NotifyHealBase
// [0x00020000] 
// Parameters infos:
// int                            Heal                           ( CPF_Parm )

void ATGMechaPlayerReplicationInfo::NotifyHealBase ( int Heal )
{
	static UFunction* pFnNotifyHealBase = NULL;

	if ( ! pFnNotifyHealBase )
		pFnNotifyHealBase = (UFunction*) UObject::GObjObjects()->Data[ 212558 ];

	ATGMechaPlayerReplicationInfo_execNotifyHealBase_Parms NotifyHealBase_Parms;
	NotifyHealBase_Parms.Heal = Heal;

	this->ProcessEvent ( pFnNotifyHealBase, &NotifyHealBase_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerReplicationInfo.NotifyHealMecha
// [0x00020002] 
// Parameters infos:
// int                            Heal                           ( CPF_Parm )

void ATGMechaPlayerReplicationInfo::NotifyHealMecha ( int Heal )
{
	static UFunction* pFnNotifyHealMecha = NULL;

	if ( ! pFnNotifyHealMecha )
		pFnNotifyHealMecha = (UFunction*) UObject::GObjObjects()->Data[ 212554 ];

	ATGMechaPlayerReplicationInfo_execNotifyHealMecha_Parms NotifyHealMecha_Parms;
	NotifyHealMecha_Parms.Heal = Heal;

	this->ProcessEvent ( pFnNotifyHealMecha, &NotifyHealMecha_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerReplicationInfo.NotifySkillLevelUp
// [0x00020002] 
// Parameters infos:

void ATGMechaPlayerReplicationInfo::NotifySkillLevelUp ( )
{
	static UFunction* pFnNotifySkillLevelUp = NULL;

	if ( ! pFnNotifySkillLevelUp )
		pFnNotifySkillLevelUp = (UFunction*) UObject::GObjObjects()->Data[ 212552 ];

	ATGMechaPlayerReplicationInfo_execNotifySkillLevelUp_Parms NotifySkillLevelUp_Parms;

	this->ProcessEvent ( pFnNotifySkillLevelUp, &NotifySkillLevelUp_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerReplicationInfo.NotifyMechaFrozen
// [0x00020002] 
// Parameters infos:

void ATGMechaPlayerReplicationInfo::NotifyMechaFrozen ( )
{
	static UFunction* pFnNotifyMechaFrozen = NULL;

	if ( ! pFnNotifyMechaFrozen )
		pFnNotifyMechaFrozen = (UFunction*) UObject::GObjObjects()->Data[ 212550 ];

	ATGMechaPlayerReplicationInfo_execNotifyMechaFrozen_Parms NotifyMechaFrozen_Parms;

	this->ProcessEvent ( pFnNotifyMechaFrozen, &NotifyMechaFrozen_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerReplicationInfo.NotifyMechaKill
// [0x00020002] 
// Parameters infos:

void ATGMechaPlayerReplicationInfo::NotifyMechaKill ( )
{
	static UFunction* pFnNotifyMechaKill = NULL;

	if ( ! pFnNotifyMechaKill )
		pFnNotifyMechaKill = (UFunction*) UObject::GObjObjects()->Data[ 212548 ];

	ATGMechaPlayerReplicationInfo_execNotifyMechaKill_Parms NotifyMechaKill_Parms;

	this->ProcessEvent ( pFnNotifyMechaKill, &NotifyMechaKill_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerReplicationInfo.NotifyMechaSmite
// [0x00020002] 
// Parameters infos:

void ATGMechaPlayerReplicationInfo::NotifyMechaSmite ( )
{
	static UFunction* pFnNotifyMechaSmite = NULL;

	if ( ! pFnNotifyMechaSmite )
		pFnNotifyMechaSmite = (UFunction*) UObject::GObjObjects()->Data[ 212546 ];

	ATGMechaPlayerReplicationInfo_execNotifyMechaSmite_Parms NotifyMechaSmite_Parms;

	this->ProcessEvent ( pFnNotifyMechaSmite, &NotifyMechaSmite_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerReplicationInfo.AddMechaDamage
// [0x00020002] 
// Parameters infos:
// int                            DamageToAdd                    ( CPF_Parm )

void ATGMechaPlayerReplicationInfo::AddMechaDamage ( int DamageToAdd )
{
	static UFunction* pFnAddMechaDamage = NULL;

	if ( ! pFnAddMechaDamage )
		pFnAddMechaDamage = (UFunction*) UObject::GObjObjects()->Data[ 212544 ];

	ATGMechaPlayerReplicationInfo_execAddMechaDamage_Parms AddMechaDamage_Parms;
	AddMechaDamage_Parms.DamageToAdd = DamageToAdd;

	this->ProcessEvent ( pFnAddMechaDamage, &AddMechaDamage_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerReplicationInfo.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGMechaPlayerReplicationInfo::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 212542 ];

	ATGMechaPlayerReplicationInfo_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function MechaGame.MechaRoundGame.CheckObservers
// [0x00020002] 
// Parameters infos:

void AMechaRoundGame::CheckObservers ( )
{
	static UFunction* pFnCheckObservers = NULL;

	if ( ! pFnCheckObservers )
		pFnCheckObservers = (UFunction*) UObject::GObjObjects()->Data[ 209380 ];

	AMechaRoundGame_execCheckObservers_Parms CheckObservers_Parms;

	this->ProcessEvent ( pFnCheckObservers, &CheckObservers_Parms, NULL );
};

// Function MechaGame.MechaRoundGame.BroadcastRoundMessage
// [0x00024000] 
// Parameters infos:
// unsigned long                  bRoundStart                    ( CPF_Parm )
// unsigned long                  bGameOver                      ( CPF_OptionalParm | CPF_Parm )

void AMechaRoundGame::BroadcastRoundMessage ( unsigned long bRoundStart, unsigned long bGameOver )
{
	static UFunction* pFnBroadcastRoundMessage = NULL;

	if ( ! pFnBroadcastRoundMessage )
		pFnBroadcastRoundMessage = (UFunction*) UObject::GObjObjects()->Data[ 209377 ];

	AMechaRoundGame_execBroadcastRoundMessage_Parms BroadcastRoundMessage_Parms;
	BroadcastRoundMessage_Parms.bRoundStart = bRoundStart;
	BroadcastRoundMessage_Parms.bGameOver = bGameOver;

	this->ProcessEvent ( pFnBroadcastRoundMessage, &BroadcastRoundMessage_Parms, NULL );
};

// Function MechaGame.MechaRoundGame.SetRoundStarted
// [0x00020002] 
// Parameters infos:
// unsigned long                  bStarted                       ( CPF_Parm )

void AMechaRoundGame::SetRoundStarted ( unsigned long bStarted )
{
	static UFunction* pFnSetRoundStarted = NULL;

	if ( ! pFnSetRoundStarted )
		pFnSetRoundStarted = (UFunction*) UObject::GObjObjects()->Data[ 209373 ];

	AMechaRoundGame_execSetRoundStarted_Parms SetRoundStarted_Parms;
	SetRoundStarted_Parms.bStarted = bStarted;

	this->ProcessEvent ( pFnSetRoundStarted, &SetRoundStarted_Parms, NULL );
};

// Function MechaGame.MechaRoundGame.RoundEnded
// [0x00020002] 
// Parameters infos:
// unsigned long                  bGameOver                      ( CPF_Parm )

void AMechaRoundGame::RoundEnded ( unsigned long bGameOver )
{
	static UFunction* pFnRoundEnded = NULL;

	if ( ! pFnRoundEnded )
		pFnRoundEnded = (UFunction*) UObject::GObjObjects()->Data[ 209370 ];

	AMechaRoundGame_execRoundEnded_Parms RoundEnded_Parms;
	RoundEnded_Parms.bGameOver = bGameOver;

	this->ProcessEvent ( pFnRoundEnded, &RoundEnded_Parms, NULL );
};

// Function MechaGame.MechaRoundGame.RoundStarted
// [0x00020002] 
// Parameters infos:

void AMechaRoundGame::RoundStarted ( )
{
	static UFunction* pFnRoundStarted = NULL;

	if ( ! pFnRoundStarted )
		pFnRoundStarted = (UFunction*) UObject::GObjObjects()->Data[ 209367 ];

	AMechaRoundGame_execRoundStarted_Parms RoundStarted_Parms;

	this->ProcessEvent ( pFnRoundStarted, &RoundStarted_Parms, NULL );
};

// Function MechaGame.MechaRoundGame.IncrementRoundCount
// [0x00020002] 
// Parameters infos:

void AMechaRoundGame::IncrementRoundCount ( )
{
	static UFunction* pFnIncrementRoundCount = NULL;

	if ( ! pFnIncrementRoundCount )
		pFnIncrementRoundCount = (UFunction*) UObject::GObjObjects()->Data[ 209364 ];

	AMechaRoundGame_execIncrementRoundCount_Parms IncrementRoundCount_Parms;

	this->ProcessEvent ( pFnIncrementRoundCount, &IncrementRoundCount_Parms, NULL );
};

// Function MechaGame.MechaRoundGame.InitRound
// [0x00020000] 
// Parameters infos:

void AMechaRoundGame::InitRound ( )
{
	static UFunction* pFnInitRound = NULL;

	if ( ! pFnInitRound )
		pFnInitRound = (UFunction*) UObject::GObjObjects()->Data[ 209363 ];

	AMechaRoundGame_execInitRound_Parms InitRound_Parms;

	this->ProcessEvent ( pFnInitRound, &InitRound_Parms, NULL );
};

// Function MechaGame.MechaRoundGame.EndGame
// [0x00020002] 
// Parameters infos:
// class APlayerReplicationInfo*  Winner                         ( CPF_Parm )
// struct FString                 Reason                         ( CPF_Parm | CPF_NeedCtorLink )

void AMechaRoundGame::EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
{
	static UFunction* pFnEndGame = NULL;

	if ( ! pFnEndGame )
		pFnEndGame = (UFunction*) UObject::GObjObjects()->Data[ 209360 ];

	AMechaRoundGame_execEndGame_Parms EndGame_Parms;
	EndGame_Parms.Winner = Winner;
	memcpy ( &EndGame_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnEndGame, &EndGame_Parms, NULL );
};

// Function MechaGame.MechaRoundGame.CalculateRoundReport
// [0x00020000] 
// Parameters infos:
// int                            WinnerTeamIndex                ( CPF_Parm )

void AMechaRoundGame::CalculateRoundReport ( int WinnerTeamIndex )
{
	static UFunction* pFnCalculateRoundReport = NULL;

	if ( ! pFnCalculateRoundReport )
		pFnCalculateRoundReport = (UFunction*) UObject::GObjObjects()->Data[ 209358 ];

	AMechaRoundGame_execCalculateRoundReport_Parms CalculateRoundReport_Parms;
	CalculateRoundReport_Parms.WinnerTeamIndex = WinnerTeamIndex;

	this->ProcessEvent ( pFnCalculateRoundReport, &CalculateRoundReport_Parms, NULL );
};

// Function MechaGame.MechaRoundGame.AddTeamScore
// [0x00020002] 
// Parameters infos:
// int                            TeamIndex                      ( CPF_Parm )

void AMechaRoundGame::AddTeamScore ( int TeamIndex )
{
	static UFunction* pFnAddTeamScore = NULL;

	if ( ! pFnAddTeamScore )
		pFnAddTeamScore = (UFunction*) UObject::GObjObjects()->Data[ 209356 ];

	AMechaRoundGame_execAddTeamScore_Parms AddTeamScore_Parms;
	AddTeamScore_Parms.TeamIndex = TeamIndex;

	this->ProcessEvent ( pFnAddTeamScore, &AddTeamScore_Parms, NULL );
};

// Function MechaGame.MechaRoundGame.EndRound
// [0x00020002] 
// Parameters infos:
// class AActor*                  EndRoundFocus                  ( CPF_Parm )

void AMechaRoundGame::EndRound ( class AActor* EndRoundFocus )
{
	static UFunction* pFnEndRound = NULL;

	if ( ! pFnEndRound )
		pFnEndRound = (UFunction*) UObject::GObjObjects()->Data[ 209354 ];

	AMechaRoundGame_execEndRound_Parms EndRound_Parms;
	EndRound_Parms.EndRoundFocus = EndRoundFocus;

	this->ProcessEvent ( pFnEndRound, &EndRound_Parms, NULL );
};

// Function MechaGame.MechaRoundGame.DirectEndRound
// [0x00020002] 
// Parameters infos:
// int                            TeamIndex                      ( CPF_Parm )
// struct FString                 Reason                         ( CPF_Parm | CPF_NeedCtorLink )
// class AActor*                  EndRoundFocus                  ( CPF_Parm )

void AMechaRoundGame::DirectEndRound ( int TeamIndex, struct FString Reason, class AActor* EndRoundFocus )
{
	static UFunction* pFnDirectEndRound = NULL;

	if ( ! pFnDirectEndRound )
		pFnDirectEndRound = (UFunction*) UObject::GObjObjects()->Data[ 209350 ];

	AMechaRoundGame_execDirectEndRound_Parms DirectEndRound_Parms;
	DirectEndRound_Parms.TeamIndex = TeamIndex;
	memcpy ( &DirectEndRound_Parms.Reason, &Reason, 0xC );
	DirectEndRound_Parms.EndRoundFocus = EndRoundFocus;

	this->ProcessEvent ( pFnDirectEndRound, &DirectEndRound_Parms, NULL );
};

// Function MechaGame.MechaRoundGame.GenericEndRound
// [0x00020002] 
// Parameters infos:
// int                            TeamIndex                      ( CPF_Parm )
// struct FString                 Reason                         ( CPF_Parm | CPF_NeedCtorLink )
// class AActor*                  EndRoundFocus                  ( CPF_Parm )

void AMechaRoundGame::GenericEndRound ( int TeamIndex, struct FString Reason, class AActor* EndRoundFocus )
{
	static UFunction* pFnGenericEndRound = NULL;

	if ( ! pFnGenericEndRound )
		pFnGenericEndRound = (UFunction*) UObject::GObjObjects()->Data[ 209346 ];

	AMechaRoundGame_execGenericEndRound_Parms GenericEndRound_Parms;
	GenericEndRound_Parms.TeamIndex = TeamIndex;
	memcpy ( &GenericEndRound_Parms.Reason, &Reason, 0xC );
	GenericEndRound_Parms.EndRoundFocus = EndRoundFocus;

	this->ProcessEvent ( pFnGenericEndRound, &GenericEndRound_Parms, NULL );
};

// Function MechaGame.MechaRoundGame.Reset
// [0x00020002] 
// Parameters infos:

void AMechaRoundGame::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 209344 ];

	AMechaRoundGame_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function MechaGame.MechaRoundGame.ResetRoundLevel
// [0x00020002] 
// Parameters infos:

void AMechaRoundGame::ResetRoundLevel ( )
{
	static UFunction* pFnResetRoundLevel = NULL;

	if ( ! pFnResetRoundLevel )
		pFnResetRoundLevel = (UFunction*) UObject::GObjObjects()->Data[ 209335 ];

	AMechaRoundGame_execResetRoundLevel_Parms ResetRoundLevel_Parms;

	this->ProcessEvent ( pFnResetRoundLevel, &ResetRoundLevel_Parms, NULL );
};

// Function MechaGame.MechaRoundGame.GetGamePlayerCount
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  TeamIndex                      ( CPF_Parm )

int AMechaRoundGame::GetGamePlayerCount ( unsigned char TeamIndex )
{
	static UFunction* pFnGetGamePlayerCount = NULL;

	if ( ! pFnGetGamePlayerCount )
		pFnGetGamePlayerCount = (UFunction*) UObject::GObjObjects()->Data[ 209329 ];

	AMechaRoundGame_execGetGamePlayerCount_Parms GetGamePlayerCount_Parms;
	GetGamePlayerCount_Parms.TeamIndex = TeamIndex;

	this->ProcessEvent ( pFnGetGamePlayerCount, &GetGamePlayerCount_Parms, NULL );

	return GetGamePlayerCount_Parms.ReturnValue;
};

// Function MechaGame.MechaRoundGame.CheckGamePlayerCount
// [0x00420002] 
// Parameters infos:
// class ATGPlayerReplicationInfo* Exiting                        ( CPF_Parm )
// int                            RebCount                       ( CPF_Parm | CPF_OutParm )
// int                            GovCount                       ( CPF_Parm | CPF_OutParm )

void AMechaRoundGame::CheckGamePlayerCount ( class ATGPlayerReplicationInfo* Exiting, int* RebCount, int* GovCount )
{
	static UFunction* pFnCheckGamePlayerCount = NULL;

	if ( ! pFnCheckGamePlayerCount )
		pFnCheckGamePlayerCount = (UFunction*) UObject::GObjObjects()->Data[ 209323 ];

	AMechaRoundGame_execCheckGamePlayerCount_Parms CheckGamePlayerCount_Parms;
	CheckGamePlayerCount_Parms.Exiting = Exiting;

	this->ProcessEvent ( pFnCheckGamePlayerCount, &CheckGamePlayerCount_Parms, NULL );

	if ( RebCount )
		*RebCount = CheckGamePlayerCount_Parms.RebCount;

	if ( GovCount )
		*GovCount = CheckGamePlayerCount_Parms.GovCount;
};

// Function MechaGame.MechaRoundGame.Logout
// [0x00020002] 
// Parameters infos:
// class AController*             Exiting                        ( CPF_Parm )

void AMechaRoundGame::Logout ( class AController* Exiting )
{
	static UFunction* pFnLogout = NULL;

	if ( ! pFnLogout )
		pFnLogout = (UFunction*) UObject::GObjObjects()->Data[ 209319 ];

	AMechaRoundGame_execLogout_Parms Logout_Parms;
	Logout_Parms.Exiting = Exiting;

	this->ProcessEvent ( pFnLogout, &Logout_Parms, NULL );
};

// Function MechaGame.MechaRoundGame.StartMatch
// [0x00020002] 
// Parameters infos:

void AMechaRoundGame::StartMatch ( )
{
	static UFunction* pFnStartMatch = NULL;

	if ( ! pFnStartMatch )
		pFnStartMatch = (UFunction*) UObject::GObjObjects()->Data[ 209318 ];

	AMechaRoundGame_execStartMatch_Parms StartMatch_Parms;

	this->ProcessEvent ( pFnStartMatch, &StartMatch_Parms, NULL );
};

// Function MechaGame.MechaRoundGame.UpdateGameSpecificSettings
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FGameSpecificSettings   Settings                       ( CPF_Parm )

void AMechaRoundGame::eventUpdateGameSpecificSettings ( struct FGameSpecificSettings Settings )
{
	static UFunction* pFnUpdateGameSpecificSettings = NULL;

	if ( ! pFnUpdateGameSpecificSettings )
		pFnUpdateGameSpecificSettings = (UFunction*) UObject::GObjObjects()->Data[ 209316 ];

	AMechaRoundGame_eventUpdateGameSpecificSettings_Parms UpdateGameSpecificSettings_Parms;
	memcpy ( &UpdateGameSpecificSettings_Parms.Settings, &Settings, 0x28 );

	this->ProcessEvent ( pFnUpdateGameSpecificSettings, &UpdateGameSpecificSettings_Parms, NULL );
};

// Function MechaGame.TGRealMecha.Health_CalcAchi
// [0x00020002] 
// Parameters infos:
// int                            HealthPoint                    ( CPF_Parm )

void ATGRealMecha::Health_CalcAchi ( int HealthPoint )
{
	static UFunction* pFnHealth_CalcAchi = NULL;

	if ( ! pFnHealth_CalcAchi )
		pFnHealth_CalcAchi = (UFunction*) UObject::GObjObjects()->Data[ 210914 ];

	ATGRealMecha_execHealth_CalcAchi_Parms Health_CalcAchi_Parms;
	Health_CalcAchi_Parms.HealthPoint = HealthPoint;

	this->ProcessEvent ( pFnHealth_CalcAchi, &Health_CalcAchi_Parms, NULL );
};

// Function MechaGame.TGRealMecha.StopRepaired
// [0x00020002] 
// Parameters infos:
// class ATGRealMecha*            Doctor                         ( CPF_Parm )

void ATGRealMecha::StopRepaired ( class ATGRealMecha* Doctor )
{
	static UFunction* pFnStopRepaired = NULL;

	if ( ! pFnStopRepaired )
		pFnStopRepaired = (UFunction*) UObject::GObjObjects()->Data[ 210910 ];

	ATGRealMecha_execStopRepaired_Parms StopRepaired_Parms;
	StopRepaired_Parms.Doctor = Doctor;

	this->ProcessEvent ( pFnStopRepaired, &StopRepaired_Parms, NULL );
};

// Function MechaGame.TGRealMecha.StartRepaired
// [0x00020002] 
// Parameters infos:
// class ATGRealMecha*            Doctor                         ( CPF_Parm )

void ATGRealMecha::StartRepaired ( class ATGRealMecha* Doctor )
{
	static UFunction* pFnStartRepaired = NULL;

	if ( ! pFnStartRepaired )
		pFnStartRepaired = (UFunction*) UObject::GObjObjects()->Data[ 210899 ];

	ATGRealMecha_execStartRepaired_Parms StartRepaired_Parms;
	StartRepaired_Parms.Doctor = Doctor;

	this->ProcessEvent ( pFnStartRepaired, &StartRepaired_Parms, NULL );
};

// Function MechaGame.TGRealMecha.SetThunderAttachmentCritEffect
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::SetThunderAttachmentCritEffect ( )
{
	static UFunction* pFnSetThunderAttachmentCritEffect = NULL;

	if ( ! pFnSetThunderAttachmentCritEffect )
		pFnSetThunderAttachmentCritEffect = (UFunction*) UObject::GObjObjects()->Data[ 210896 ];

	ATGRealMecha_execSetThunderAttachmentCritEffect_Parms SetThunderAttachmentCritEffect_Parms;

	this->ProcessEvent ( pFnSetThunderAttachmentCritEffect, &SetThunderAttachmentCritEffect_Parms, NULL );
};

// Function MechaGame.TGRealMecha.PlayACSound
// [0x00024102] 
// Parameters infos:
// class UAudioComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USoundCue*               Sound                          ( CPF_Parm )
// class UAudioComponent*         AC                             ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )
// float                          FadeInTime                     ( CPF_OptionalParm | CPF_Parm )

class UAudioComponent* ATGRealMecha::PlayACSound ( class USoundCue* Sound, class UAudioComponent* AC, float FadeInTime )
{
	static UFunction* pFnPlayACSound = NULL;

	if ( ! pFnPlayACSound )
		pFnPlayACSound = (UFunction*) UObject::GObjObjects()->Data[ 210890 ];

	ATGRealMecha_execPlayACSound_Parms PlayACSound_Parms;
	PlayACSound_Parms.Sound = Sound;
	PlayACSound_Parms.AC = AC;
	PlayACSound_Parms.FadeInTime = FadeInTime;

	this->ProcessEvent ( pFnPlayACSound, &PlayACSound_Parms, NULL );

	return PlayACSound_Parms.ReturnValue;
};

// Function MechaGame.TGRealMecha.IsDefender
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGRealMecha::IsDefender ( )
{
	static UFunction* pFnIsDefender = NULL;

	if ( ! pFnIsDefender )
		pFnIsDefender = (UFunction*) UObject::GObjObjects()->Data[ 210885 ];

	ATGRealMecha_execIsDefender_Parms IsDefender_Parms;

	this->ProcessEvent ( pFnIsDefender, &IsDefender_Parms, NULL );

	return IsDefender_Parms.ReturnValue;
};

// Function MechaGame.TGRealMecha.IsAttacker
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGRealMecha::IsAttacker ( )
{
	static UFunction* pFnIsAttacker = NULL;

	if ( ! pFnIsAttacker )
		pFnIsAttacker = (UFunction*) UObject::GObjObjects()->Data[ 210517 ];

	ATGRealMecha_execIsAttacker_Parms IsAttacker_Parms;

	this->ProcessEvent ( pFnIsAttacker, &IsAttacker_Parms, NULL );

	return IsAttacker_Parms.ReturnValue;
};

// Function MechaGame.TGRealMecha.SetMovementEffect
// [0x00020102] 
// Parameters infos:
// unsigned long                  bSetActive                     ( CPF_Parm )

void ATGRealMecha::SetMovementEffect ( unsigned long bSetActive )
{
	static UFunction* pFnSetMovementEffect = NULL;

	if ( ! pFnSetMovementEffect )
		pFnSetMovementEffect = (UFunction*) UObject::GObjObjects()->Data[ 210877 ];

	ATGRealMecha_execSetMovementEffect_Parms SetMovementEffect_Parms;
	SetMovementEffect_Parms.bSetActive = bSetActive;

	this->ProcessEvent ( pFnSetMovementEffect, &SetMovementEffect_Parms, NULL );
};

// Function MechaGame.TGRealMecha.ServerUsePickup
// [0x002200C2] 
// Parameters infos:
// class ATGMechaPickupFactory*   Pickup                         ( CPF_Parm )

void ATGRealMecha::ServerUsePickup ( class ATGMechaPickupFactory* Pickup )
{
	static UFunction* pFnServerUsePickup = NULL;

	if ( ! pFnServerUsePickup )
		pFnServerUsePickup = (UFunction*) UObject::GObjObjects()->Data[ 210871 ];

	ATGRealMecha_execServerUsePickup_Parms ServerUsePickup_Parms;
	ServerUsePickup_Parms.Pickup = Pickup;

	this->ProcessEvent ( pFnServerUsePickup, &ServerUsePickup_Parms, NULL );
};

// Function MechaGame.TGRealMecha.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGRealMecha::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 210869 ];

	ATGRealMecha_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function MechaGame.TGRealMecha.PostRenderFor
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void ATGRealMecha::eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnPostRenderFor = NULL;

	if ( ! pFnPostRenderFor )
		pFnPostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 210843 ];

	ATGRealMecha_eventPostRenderFor_Parms PostRenderFor_Parms;
	PostRenderFor_Parms.PC = PC;
	PostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &PostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &PostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	this->ProcessEvent ( pFnPostRenderFor, &PostRenderFor_Parms, NULL );
};

// Function MechaGame.TGRealMecha.ClearShowAttacker
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::ClearShowAttacker ( )
{
	static UFunction* pFnClearShowAttacker = NULL;

	if ( ! pFnClearShowAttacker )
		pFnClearShowAttacker = (UFunction*) UObject::GObjObjects()->Data[ 210842 ];

	ATGRealMecha_execClearShowAttacker_Parms ClearShowAttacker_Parms;

	this->ProcessEvent ( pFnClearShowAttacker, &ClearShowAttacker_Parms, NULL );
};

// Function MechaGame.TGRealMecha.SetShowAttacker
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::SetShowAttacker ( )
{
	static UFunction* pFnSetShowAttacker = NULL;

	if ( ! pFnSetShowAttacker )
		pFnSetShowAttacker = (UFunction*) UObject::GObjObjects()->Data[ 210841 ];

	ATGRealMecha_execSetShowAttacker_Parms SetShowAttacker_Parms;

	this->ProcessEvent ( pFnSetShowAttacker, &SetShowAttacker_Parms, NULL );
};

// Function MechaGame.TGRealMecha.OnAttackerNotification
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::OnAttackerNotification ( )
{
	static UFunction* pFnOnAttackerNotification = NULL;

	if ( ! pFnOnAttackerNotification )
		pFnOnAttackerNotification = (UFunction*) UObject::GObjObjects()->Data[ 210840 ];

	ATGRealMecha_execOnAttackerNotification_Parms OnAttackerNotification_Parms;

	this->ProcessEvent ( pFnOnAttackerNotification, &OnAttackerNotification_Parms, NULL );
};

// Function MechaGame.TGRealMecha.ClearAttackingBase
// [0x00020002] 
// Parameters infos:

void ATGRealMecha::ClearAttackingBase ( )
{
	static UFunction* pFnClearAttackingBase = NULL;

	if ( ! pFnClearAttackingBase )
		pFnClearAttackingBase = (UFunction*) UObject::GObjObjects()->Data[ 210839 ];

	ATGRealMecha_execClearAttackingBase_Parms ClearAttackingBase_Parms;

	this->ProcessEvent ( pFnClearAttackingBase, &ClearAttackingBase_Parms, NULL );
};

// Function MechaGame.TGRealMecha.SetAttackingBase
// [0x00020002] 
// Parameters infos:

void ATGRealMecha::SetAttackingBase ( )
{
	static UFunction* pFnSetAttackingBase = NULL;

	if ( ! pFnSetAttackingBase )
		pFnSetAttackingBase = (UFunction*) UObject::GObjObjects()->Data[ 210838 ];

	ATGRealMecha_execSetAttackingBase_Parms SetAttackingBase_Parms;

	this->ProcessEvent ( pFnSetAttackingBase, &SetAttackingBase_Parms, NULL );
};

// Function MechaGame.TGRealMecha.OnKeyDown_E
// [0x00020002] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGRealMecha::OnKeyDown_E ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyDown_E = NULL;

	if ( ! pFnOnKeyDown_E )
		pFnOnKeyDown_E = (UFunction*) UObject::GObjObjects()->Data[ 210835 ];

	ATGRealMecha_execOnKeyDown_E_Parms OnKeyDown_E_Parms;
	OnKeyDown_E_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyDown_E, &OnKeyDown_E_Parms, NULL );
};

// Function MechaGame.TGRealMecha.NotifySkillUsed
// [0x00020102] 
// Parameters infos:
// class AMechaSkillBase*         Skill                          ( CPF_Parm )

void ATGRealMecha::NotifySkillUsed ( class AMechaSkillBase* Skill )
{
	static UFunction* pFnNotifySkillUsed = NULL;

	if ( ! pFnNotifySkillUsed )
		pFnNotifySkillUsed = (UFunction*) UObject::GObjObjects()->Data[ 210833 ];

	ATGRealMecha_execNotifySkillUsed_Parms NotifySkillUsed_Parms;
	NotifySkillUsed_Parms.Skill = Skill;

	this->ProcessEvent ( pFnNotifySkillUsed, &NotifySkillUsed_Parms, NULL );
};

// Function MechaGame.TGRealMecha.NotifyXPSkillLevelUp
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::NotifyXPSkillLevelUp ( )
{
	static UFunction* pFnNotifyXPSkillLevelUp = NULL;

	if ( ! pFnNotifyXPSkillLevelUp )
		pFnNotifyXPSkillLevelUp = (UFunction*) UObject::GObjObjects()->Data[ 210832 ];

	ATGRealMecha_execNotifyXPSkillLevelUp_Parms NotifyXPSkillLevelUp_Parms;

	this->ProcessEvent ( pFnNotifyXPSkillLevelUp, &NotifyXPSkillLevelUp_Parms, NULL );
};

// Function MechaGame.TGRealMecha.DoJump
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bUpdating                      ( CPF_Parm )

bool ATGRealMecha::DoJump ( unsigned long bUpdating )
{
	static UFunction* pFnDoJump = NULL;

	if ( ! pFnDoJump )
		pFnDoJump = (UFunction*) UObject::GObjObjects()->Data[ 210829 ];

	ATGRealMecha_execDoJump_Parms DoJump_Parms;
	DoJump_Parms.bUpdating = bUpdating;

	this->ProcessEvent ( pFnDoJump, &DoJump_Parms, NULL );

	return DoJump_Parms.ReturnValue;
};

// Function MechaGame.TGRealMecha.NotifySkillStartSignal
// [0x00020002] 
// Parameters infos:
// class AMechaSkillBase*         Skill                          ( CPF_Parm )

void ATGRealMecha::NotifySkillStartSignal ( class AMechaSkillBase* Skill )
{
	static UFunction* pFnNotifySkillStartSignal = NULL;

	if ( ! pFnNotifySkillStartSignal )
		pFnNotifySkillStartSignal = (UFunction*) UObject::GObjObjects()->Data[ 210827 ];

	ATGRealMecha_execNotifySkillStartSignal_Parms NotifySkillStartSignal_Parms;
	NotifySkillStartSignal_Parms.Skill = Skill;

	this->ProcessEvent ( pFnNotifySkillStartSignal, &NotifySkillStartSignal_Parms, NULL );
};

// Function MechaGame.TGRealMecha.SetSpeedScaleTimer
// [0x00020002] 
// Parameters infos:
// float                          Scale                          ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void ATGRealMecha::SetSpeedScaleTimer ( float Scale, float Duration )
{
	static UFunction* pFnSetSpeedScaleTimer = NULL;

	if ( ! pFnSetSpeedScaleTimer )
		pFnSetSpeedScaleTimer = (UFunction*) UObject::GObjObjects()->Data[ 210824 ];

	ATGRealMecha_execSetSpeedScaleTimer_Parms SetSpeedScaleTimer_Parms;
	SetSpeedScaleTimer_Parms.Scale = Scale;
	SetSpeedScaleTimer_Parms.Duration = Duration;

	this->ProcessEvent ( pFnSetSpeedScaleTimer, &SetSpeedScaleTimer_Parms, NULL );
};

// Function MechaGame.TGRealMecha.OnSetSetMechaMovableTimer
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::OnSetSetMechaMovableTimer ( )
{
	static UFunction* pFnOnSetSetMechaMovableTimer = NULL;

	if ( ! pFnOnSetSetMechaMovableTimer )
		pFnOnSetSetMechaMovableTimer = (UFunction*) UObject::GObjObjects()->Data[ 210822 ];

	ATGRealMecha_execOnSetSetMechaMovableTimer_Parms OnSetSetMechaMovableTimer_Parms;

	this->ProcessEvent ( pFnOnSetSetMechaMovableTimer, &OnSetSetMechaMovableTimer_Parms, NULL );
};

// Function MechaGame.TGRealMecha.ClientSetSetMechaMoveless
// [0x010201C2] 
// Parameters infos:
// float                          Duration                       ( CPF_Parm )

void ATGRealMecha::ClientSetSetMechaMoveless ( float Duration )
{
	static UFunction* pFnClientSetSetMechaMoveless = NULL;

	if ( ! pFnClientSetSetMechaMoveless )
		pFnClientSetSetMechaMoveless = (UFunction*) UObject::GObjObjects()->Data[ 210819 ];

	ATGRealMecha_execClientSetSetMechaMoveless_Parms ClientSetSetMechaMoveless_Parms;
	ClientSetSetMechaMoveless_Parms.Duration = Duration;

	this->ProcessEvent ( pFnClientSetSetMechaMoveless, &ClientSetSetMechaMoveless_Parms, NULL );
};

// Function MechaGame.TGRealMecha.SetMechaMoveless
// [0x00020002] 
// Parameters infos:
// float                          Duration                       ( CPF_Parm )

void ATGRealMecha::SetMechaMoveless ( float Duration )
{
	static UFunction* pFnSetMechaMoveless = NULL;

	if ( ! pFnSetMechaMoveless )
		pFnSetMechaMoveless = (UFunction*) UObject::GObjObjects()->Data[ 210816 ];

	ATGRealMecha_execSetMechaMoveless_Parms SetMechaMoveless_Parms;
	SetMechaMoveless_Parms.Duration = Duration;

	this->ProcessEvent ( pFnSetMechaMoveless, &SetMechaMoveless_Parms, NULL );
};

// Function MechaGame.TGRealMecha.IsInBaseArea
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGRealMecha::IsInBaseArea ( )
{
	static UFunction* pFnIsInBaseArea = NULL;

	if ( ! pFnIsInBaseArea )
		pFnIsInBaseArea = (UFunction*) UObject::GObjObjects()->Data[ 209494 ];

	ATGRealMecha_execIsInBaseArea_Parms IsInBaseArea_Parms;

	this->ProcessEvent ( pFnIsInBaseArea, &IsInBaseArea_Parms, NULL );

	return IsInBaseArea_Parms.ReturnValue;
};

// Function MechaGame.TGRealMecha.SetBaseAreaVolume
// [0x00020102] 
// Parameters infos:
// class ATGMechaVolume*          Vol                            ( CPF_Parm )
// unsigned long                  bTouch                         ( CPF_Parm )

void ATGRealMecha::SetBaseAreaVolume ( class ATGMechaVolume* Vol, unsigned long bTouch )
{
	static UFunction* pFnSetBaseAreaVolume = NULL;

	if ( ! pFnSetBaseAreaVolume )
		pFnSetBaseAreaVolume = (UFunction*) UObject::GObjObjects()->Data[ 210811 ];

	ATGRealMecha_execSetBaseAreaVolume_Parms SetBaseAreaVolume_Parms;
	SetBaseAreaVolume_Parms.Vol = Vol;
	SetBaseAreaVolume_Parms.bTouch = bTouch;

	this->ProcessEvent ( pFnSetBaseAreaVolume, &SetBaseAreaVolume_Parms, NULL );
};

// Function MechaGame.TGRealMecha.IsInSpawnArea
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGRealMecha::IsInSpawnArea ( )
{
	static UFunction* pFnIsInSpawnArea = NULL;

	if ( ! pFnIsInSpawnArea )
		pFnIsInSpawnArea = (UFunction*) UObject::GObjObjects()->Data[ 210805 ];

	ATGRealMecha_execIsInSpawnArea_Parms IsInSpawnArea_Parms;

	this->ProcessEvent ( pFnIsInSpawnArea, &IsInSpawnArea_Parms, NULL );

	return IsInSpawnArea_Parms.ReturnValue;
};

// Function MechaGame.TGRealMecha.IsInZone
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ZoneType                       ( CPF_Parm )

bool ATGRealMecha::IsInZone ( unsigned char ZoneType )
{
	static UFunction* pFnIsInZone = NULL;

	if ( ! pFnIsInZone )
		pFnIsInZone = (UFunction*) UObject::GObjObjects()->Data[ 210800 ];

	ATGRealMecha_execIsInZone_Parms IsInZone_Parms;
	IsInZone_Parms.ZoneType = ZoneType;

	this->ProcessEvent ( pFnIsInZone, &IsInZone_Parms, NULL );

	return IsInZone_Parms.ReturnValue;
};

// Function MechaGame.TGRealMecha.GetChangeMechaTimeRemain
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ATGRealMecha::GetChangeMechaTimeRemain ( )
{
	static UFunction* pFnGetChangeMechaTimeRemain = NULL;

	if ( ! pFnGetChangeMechaTimeRemain )
		pFnGetChangeMechaTimeRemain = (UFunction*) UObject::GObjObjects()->Data[ 210798 ];

	ATGRealMecha_execGetChangeMechaTimeRemain_Parms GetChangeMechaTimeRemain_Parms;

	this->ProcessEvent ( pFnGetChangeMechaTimeRemain, &GetChangeMechaTimeRemain_Parms, NULL );

	return GetChangeMechaTimeRemain_Parms.ReturnValue;
};

// Function MechaGame.TGRealMecha.TimerSelectTimeLimit
// [0x00020002] 
// Parameters infos:

void ATGRealMecha::TimerSelectTimeLimit ( )
{
	static UFunction* pFnTimerSelectTimeLimit = NULL;

	if ( ! pFnTimerSelectTimeLimit )
		pFnTimerSelectTimeLimit = (UFunction*) UObject::GObjObjects()->Data[ 210797 ];

	ATGRealMecha_execTimerSelectTimeLimit_Parms TimerSelectTimeLimit_Parms;

	this->ProcessEvent ( pFnTimerSelectTimeLimit, &TimerSelectTimeLimit_Parms, NULL );
};

// Function MechaGame.TGRealMecha.SetWeaponFired
// [0x00020002] 
// Parameters infos:
// unsigned long                  bMainWeapon                    ( CPF_Parm )

void ATGRealMecha::SetWeaponFired ( unsigned long bMainWeapon )
{
	static UFunction* pFnSetWeaponFired = NULL;

	if ( ! pFnSetWeaponFired )
		pFnSetWeaponFired = (UFunction*) UObject::GObjObjects()->Data[ 210795 ];

	ATGRealMecha_execSetWeaponFired_Parms SetWeaponFired_Parms;
	SetWeaponFired_Parms.bMainWeapon = bMainWeapon;

	this->ProcessEvent ( pFnSetWeaponFired, &SetWeaponFired_Parms, NULL );
};

// Function MechaGame.TGRealMecha.SetSelectMechaEnable
// [0x00020002] 
// Parameters infos:
// unsigned long                  bEnable                        ( CPF_Parm )

void ATGRealMecha::SetSelectMechaEnable ( unsigned long bEnable )
{
	static UFunction* pFnSetSelectMechaEnable = NULL;

	if ( ! pFnSetSelectMechaEnable )
		pFnSetSelectMechaEnable = (UFunction*) UObject::GObjObjects()->Data[ 210791 ];

	ATGRealMecha_execSetSelectMechaEnable_Parms SetSelectMechaEnable_Parms;
	SetSelectMechaEnable_Parms.bEnable = bEnable;

	this->ProcessEvent ( pFnSetSelectMechaEnable, &SetSelectMechaEnable_Parms, NULL );
};

// Function MechaGame.TGRealMecha.SetBurningDamageParms
// [0x00020002] 
// Parameters infos:
// class UClass*                  inDamageType                   ( CPF_Parm )
// float                          InFireLastTime                 ( CPF_Parm )
// float                          InContinuousFireDamage         ( CPF_Parm )
// float                          InFireTakeDamageFrequency      ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )

void ATGRealMecha::SetBurningDamageParms ( class UClass* inDamageType, float InFireLastTime, float InContinuousFireDamage, float InFireTakeDamageFrequency, class AController* InstigatedBy )
{
	static UFunction* pFnSetBurningDamageParms = NULL;

	if ( ! pFnSetBurningDamageParms )
		pFnSetBurningDamageParms = (UFunction*) UObject::GObjObjects()->Data[ 210785 ];

	ATGRealMecha_execSetBurningDamageParms_Parms SetBurningDamageParms_Parms;
	SetBurningDamageParms_Parms.inDamageType = inDamageType;
	SetBurningDamageParms_Parms.InFireLastTime = InFireLastTime;
	SetBurningDamageParms_Parms.InContinuousFireDamage = InContinuousFireDamage;
	SetBurningDamageParms_Parms.InFireTakeDamageFrequency = InFireTakeDamageFrequency;
	SetBurningDamageParms_Parms.InstigatedBy = InstigatedBy;

	this->ProcessEvent ( pFnSetBurningDamageParms, &SetBurningDamageParms_Parms, NULL );
};

// Function MechaGame.TGRealMecha.RecordMechaWeapDamage
// [0x00020002] 
// Parameters infos:
// int                            InDamage                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void ATGRealMecha::RecordMechaWeapDamage ( int InDamage, class UClass* DamageType )
{
	static UFunction* pFnRecordMechaWeapDamage = NULL;

	if ( ! pFnRecordMechaWeapDamage )
		pFnRecordMechaWeapDamage = (UFunction*) UObject::GObjObjects()->Data[ 210780 ];

	ATGRealMecha_execRecordMechaWeapDamage_Parms RecordMechaWeapDamage_Parms;
	RecordMechaWeapDamage_Parms.InDamage = InDamage;
	RecordMechaWeapDamage_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnRecordMechaWeapDamage, &RecordMechaWeapDamage_Parms, NULL );
};

// Function MechaGame.TGRealMecha.AdjustDamage
// [0x00420102] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )
// int                            InDamage                       ( CPF_Parm | CPF_OutParm )
// struct FVector                 Momentum                       ( CPF_Parm | CPF_OutParm )
// class UClass*                  DamageType                     ( CPF_Parm | CPF_OutParm )

void ATGRealMecha::AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, int* InDamage, struct FVector* Momentum, class UClass** DamageType )
{
	static UFunction* pFnAdjustDamage = NULL;

	if ( ! pFnAdjustDamage )
		pFnAdjustDamage = (UFunction*) UObject::GObjObjects()->Data[ 210767 ];

	ATGRealMecha_execAdjustDamage_Parms AdjustDamage_Parms;
	AdjustDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &AdjustDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &AdjustDamage_Parms.HitInfo, &HitInfo, 0x20 );
	AdjustDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnAdjustDamage, &AdjustDamage_Parms, NULL );

	if ( InDamage )
		*InDamage = AdjustDamage_Parms.InDamage;

	if ( Momentum )
		memcpy ( Momentum, &AdjustDamage_Parms.Momentum, 0xC );

	if ( DamageType )
		*DamageType = AdjustDamage_Parms.DamageType;
};

// Function MechaGame.TGRealMecha.AddInstigatorPRI
// [0x00820002] 
// Parameters infos:
// class ATGMechaPlayerReplicationInfo* InstigatorPRI                  ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )

void ATGRealMecha::AddInstigatorPRI ( class ATGMechaPlayerReplicationInfo* InstigatorPRI, int Damage )
{
	static UFunction* pFnAddInstigatorPRI = NULL;

	if ( ! pFnAddInstigatorPRI )
		pFnAddInstigatorPRI = (UFunction*) UObject::GObjObjects()->Data[ 210762 ];

	ATGRealMecha_execAddInstigatorPRI_Parms AddInstigatorPRI_Parms;
	AddInstigatorPRI_Parms.InstigatorPRI = InstigatorPRI;
	AddInstigatorPRI_Parms.Damage = Damage;

	this->ProcessEvent ( pFnAddInstigatorPRI, &AddInstigatorPRI_Parms, NULL );
};

// Function MechaGame.TGRealMecha.AddTechStatsInfo
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FString                 VictimName                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            Damage                         ( CPF_Parm )
// unsigned long                  bKilled                        ( CPF_Parm )
// unsigned long                  bIsHeadShot                    ( CPF_Parm )
// int                            MaxHealth                      ( CPF_Parm )

void ATGRealMecha::AddTechStatsInfo ( class AController* InstigatedBy, struct FString VictimName, int Damage, unsigned long bKilled, unsigned long bIsHeadShot, int MaxHealth )
{
	static UFunction* pFnAddTechStatsInfo = NULL;

	if ( ! pFnAddTechStatsInfo )
		pFnAddTechStatsInfo = (UFunction*) UObject::GObjObjects()->Data[ 210754 ];

	ATGRealMecha_execAddTechStatsInfo_Parms AddTechStatsInfo_Parms;
	AddTechStatsInfo_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &AddTechStatsInfo_Parms.VictimName, &VictimName, 0xC );
	AddTechStatsInfo_Parms.Damage = Damage;
	AddTechStatsInfo_Parms.bKilled = bKilled;
	AddTechStatsInfo_Parms.bIsHeadShot = bIsHeadShot;
	AddTechStatsInfo_Parms.MaxHealth = MaxHealth;

	this->ProcessEvent ( pFnAddTechStatsInfo, &AddTechStatsInfo_Parms, NULL );
};

// Function MechaGame.TGRealMecha.TakeDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ATGRealMecha::eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 210736 ];

	ATGRealMecha_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.Damage = Damage;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x20 );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function MechaGame.TGRealMecha.Suicide
// [0x00020002] 
// Parameters infos:

void ATGRealMecha::Suicide ( )
{
	static UFunction* pFnSuicide = NULL;

	if ( ! pFnSuicide )
		pFnSuicide = (UFunction*) UObject::GObjObjects()->Data[ 210735 ];

	ATGRealMecha_execSuicide_Parms Suicide_Parms;

	this->ProcessEvent ( pFnSuicide, &Suicide_Parms, NULL );
};

// Function MechaGame.TGRealMecha.PlayeDyingEffect
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::PlayeDyingEffect ( )
{
	static UFunction* pFnPlayeDyingEffect = NULL;

	if ( ! pFnPlayeDyingEffect )
		pFnPlayeDyingEffect = (UFunction*) UObject::GObjObjects()->Data[ 210734 ];

	ATGRealMecha_execPlayeDyingEffect_Parms PlayeDyingEffect_Parms;

	this->ProcessEvent ( pFnPlayeDyingEffect, &PlayeDyingEffect_Parms, NULL );
};

// Function MechaGame.TGRealMecha.TimerEndSpawnProtectionEffect
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::TimerEndSpawnProtectionEffect ( )
{
	static UFunction* pFnTimerEndSpawnProtectionEffect = NULL;

	if ( ! pFnTimerEndSpawnProtectionEffect )
		pFnTimerEndSpawnProtectionEffect = (UFunction*) UObject::GObjObjects()->Data[ 210733 ];

	ATGRealMecha_execTimerEndSpawnProtectionEffect_Parms TimerEndSpawnProtectionEffect_Parms;

	this->ProcessEvent ( pFnTimerEndSpawnProtectionEffect, &TimerEndSpawnProtectionEffect_Parms, NULL );
};

// Function MechaGame.TGRealMecha.PlaySpawnProtectionEffect
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::PlaySpawnProtectionEffect ( )
{
	static UFunction* pFnPlaySpawnProtectionEffect = NULL;

	if ( ! pFnPlaySpawnProtectionEffect )
		pFnPlaySpawnProtectionEffect = (UFunction*) UObject::GObjObjects()->Data[ 210732 ];

	ATGRealMecha_execPlaySpawnProtectionEffect_Parms PlaySpawnProtectionEffect_Parms;

	this->ProcessEvent ( pFnPlaySpawnProtectionEffect, &PlaySpawnProtectionEffect_Parms, NULL );
};

// Function MechaGame.TGRealMecha.TimerEndFireRedEffect
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::TimerEndFireRedEffect ( )
{
	static UFunction* pFnTimerEndFireRedEffect = NULL;

	if ( ! pFnTimerEndFireRedEffect )
		pFnTimerEndFireRedEffect = (UFunction*) UObject::GObjObjects()->Data[ 210731 ];

	ATGRealMecha_execTimerEndFireRedEffect_Parms TimerEndFireRedEffect_Parms;

	this->ProcessEvent ( pFnTimerEndFireRedEffect, &TimerEndFireRedEffect_Parms, NULL );
};

// Function MechaGame.TGRealMecha.SetTransparent
// [0x00020102] 
// Parameters infos:
// unsigned long                  bTransparent                   ( CPF_Parm )

void ATGRealMecha::SetTransparent ( unsigned long bTransparent )
{
	static UFunction* pFnSetTransparent = NULL;

	if ( ! pFnSetTransparent )
		pFnSetTransparent = (UFunction*) UObject::GObjObjects()->Data[ 210727 ];

	ATGRealMecha_execSetTransparent_Parms SetTransparent_Parms;
	SetTransparent_Parms.bTransparent = bTransparent;

	this->ProcessEvent ( pFnSetTransparent, &SetTransparent_Parms, NULL );
};

// Function MechaGame.TGRealMecha.UpdateDamageEffect
// [0x00020100] 
// Parameters infos:

void ATGRealMecha::UpdateDamageEffect ( )
{
	static UFunction* pFnUpdateDamageEffect = NULL;

	if ( ! pFnUpdateDamageEffect )
		pFnUpdateDamageEffect = (UFunction*) UObject::GObjObjects()->Data[ 210726 ];

	ATGRealMecha_execUpdateDamageEffect_Parms UpdateDamageEffect_Parms;

	this->ProcessEvent ( pFnUpdateDamageEffect, &UpdateDamageEffect_Parms, NULL );
};

// Function MechaGame.TGRealMecha.OnDeceletationEffectTimer
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::OnDeceletationEffectTimer ( )
{
	static UFunction* pFnOnDeceletationEffectTimer = NULL;

	if ( ! pFnOnDeceletationEffectTimer )
		pFnOnDeceletationEffectTimer = (UFunction*) UObject::GObjObjects()->Data[ 210725 ];

	ATGRealMecha_execOnDeceletationEffectTimer_Parms OnDeceletationEffectTimer_Parms;

	this->ProcessEvent ( pFnOnDeceletationEffectTimer, &OnDeceletationEffectTimer_Parms, NULL );
};

// Function MechaGame.TGRealMecha.PlayDeceletationEffect
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::PlayDeceletationEffect ( )
{
	static UFunction* pFnPlayDeceletationEffect = NULL;

	if ( ! pFnPlayDeceletationEffect )
		pFnPlayDeceletationEffect = (UFunction*) UObject::GObjObjects()->Data[ 210721 ];

	ATGRealMecha_execPlayDeceletationEffect_Parms PlayDeceletationEffect_Parms;

	this->ProcessEvent ( pFnPlayDeceletationEffect, &PlayDeceletationEffect_Parms, NULL );
};

// Function MechaGame.TGRealMecha.TimerEndTrapDamageEffect
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::TimerEndTrapDamageEffect ( )
{
	static UFunction* pFnTimerEndTrapDamageEffect = NULL;

	if ( ! pFnTimerEndTrapDamageEffect )
		pFnTimerEndTrapDamageEffect = (UFunction*) UObject::GObjObjects()->Data[ 210720 ];

	ATGRealMecha_execTimerEndTrapDamageEffect_Parms TimerEndTrapDamageEffect_Parms;

	this->ProcessEvent ( pFnTimerEndTrapDamageEffect, &TimerEndTrapDamageEffect_Parms, NULL );
};

// Function MechaGame.TGRealMecha.CheckTrapDamageEffect
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::CheckTrapDamageEffect ( )
{
	static UFunction* pFnCheckTrapDamageEffect = NULL;

	if ( ! pFnCheckTrapDamageEffect )
		pFnCheckTrapDamageEffect = (UFunction*) UObject::GObjObjects()->Data[ 210716 ];

	ATGRealMecha_execCheckTrapDamageEffect_Parms CheckTrapDamageEffect_Parms;

	this->ProcessEvent ( pFnCheckTrapDamageEffect, &CheckTrapDamageEffect_Parms, NULL );
};

// Function MechaGame.TGRealMecha.PlayTakeHitEffects
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::PlayTakeHitEffects ( )
{
	static UFunction* pFnPlayTakeHitEffects = NULL;

	if ( ! pFnPlayTakeHitEffects )
		pFnPlayTakeHitEffects = (UFunction*) UObject::GObjObjects()->Data[ 210715 ];

	ATGRealMecha_execPlayTakeHitEffects_Parms PlayTakeHitEffects_Parms;

	this->ProcessEvent ( pFnPlayTakeHitEffects, &PlayTakeHitEffects_Parms, NULL );
};

// Function MechaGame.TGRealMecha.CalcCamera
// [0x00420102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )
// float                          out_FOV                        ( CPF_Parm | CPF_OutParm )

bool ATGRealMecha::CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
{
	static UFunction* pFnCalcCamera = NULL;

	if ( ! pFnCalcCamera )
		pFnCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 210708 ];

	ATGRealMecha_execCalcCamera_Parms CalcCamera_Parms;
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

// Function MechaGame.TGRealMecha.OnSelfHealStateChanged
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::OnSelfHealStateChanged ( )
{
	static UFunction* pFnOnSelfHealStateChanged = NULL;

	if ( ! pFnOnSelfHealStateChanged )
		pFnOnSelfHealStateChanged = (UFunction*) UObject::GObjObjects()->Data[ 210707 ];

	ATGRealMecha_execOnSelfHealStateChanged_Parms OnSelfHealStateChanged_Parms;

	this->ProcessEvent ( pFnOnSelfHealStateChanged, &OnSelfHealStateChanged_Parms, NULL );
};

// Function MechaGame.TGRealMecha.OnShockedStateChanged
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::OnShockedStateChanged ( )
{
	static UFunction* pFnOnShockedStateChanged = NULL;

	if ( ! pFnOnShockedStateChanged )
		pFnOnShockedStateChanged = (UFunction*) UObject::GObjObjects()->Data[ 210706 ];

	ATGRealMecha_execOnShockedStateChanged_Parms OnShockedStateChanged_Parms;

	this->ProcessEvent ( pFnOnShockedStateChanged, &OnShockedStateChanged_Parms, NULL );
};

// Function MechaGame.TGRealMecha.OnHealStateChanged
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::OnHealStateChanged ( )
{
	static UFunction* pFnOnHealStateChanged = NULL;

	if ( ! pFnOnHealStateChanged )
		pFnOnHealStateChanged = (UFunction*) UObject::GObjObjects()->Data[ 210705 ];

	ATGRealMecha_execOnHealStateChanged_Parms OnHealStateChanged_Parms;

	this->ProcessEvent ( pFnOnHealStateChanged, &OnHealStateChanged_Parms, NULL );
};

// Function MechaGame.TGRealMecha.OnHealCountUpdate
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::OnHealCountUpdate ( )
{
	static UFunction* pFnOnHealCountUpdate = NULL;

	if ( ! pFnOnHealCountUpdate )
		pFnOnHealCountUpdate = (UFunction*) UObject::GObjObjects()->Data[ 210704 ];

	ATGRealMecha_execOnHealCountUpdate_Parms OnHealCountUpdate_Parms;

	this->ProcessEvent ( pFnOnHealCountUpdate, &OnHealCountUpdate_Parms, NULL );
};

// Function MechaGame.TGRealMecha.TimerEndHeal
// [0x00020002] 
// Parameters infos:

void ATGRealMecha::TimerEndHeal ( )
{
	static UFunction* pFnTimerEndHeal = NULL;

	if ( ! pFnTimerEndHeal )
		pFnTimerEndHeal = (UFunction*) UObject::GObjObjects()->Data[ 210703 ];

	ATGRealMecha_execTimerEndHeal_Parms TimerEndHeal_Parms;

	this->ProcessEvent ( pFnTimerEndHeal, &TimerEndHeal_Parms, NULL );
};

// Function MechaGame.TGRealMecha.TimerEndSelfHeal
// [0x00020002] 
// Parameters infos:

void ATGRealMecha::TimerEndSelfHeal ( )
{
	static UFunction* pFnTimerEndSelfHeal = NULL;

	if ( ! pFnTimerEndSelfHeal )
		pFnTimerEndSelfHeal = (UFunction*) UObject::GObjObjects()->Data[ 210702 ];

	ATGRealMecha_execTimerEndSelfHeal_Parms TimerEndSelfHeal_Parms;

	this->ProcessEvent ( pFnTimerEndSelfHeal, &TimerEndSelfHeal_Parms, NULL );
};

// Function MechaGame.TGRealMecha.Heal
// [0x00024002] 
// Parameters infos:
// int                            HealthToAdd                    ( CPF_Parm )
// class AController*             HealInstigator                 ( CPF_Parm )
// unsigned long                  bTriggerEffect                 ( CPF_Parm )
// unsigned long                  bInstantHeal                   ( CPF_Parm )
// float                          HealInterval                   ( CPF_OptionalParm | CPF_Parm )

void ATGRealMecha::Heal ( int HealthToAdd, class AController* HealInstigator, unsigned long bTriggerEffect, unsigned long bInstantHeal, float HealInterval )
{
	static UFunction* pFnHeal = NULL;

	if ( ! pFnHeal )
		pFnHeal = (UFunction*) UObject::GObjObjects()->Data[ 210696 ];

	ATGRealMecha_execHeal_Parms Heal_Parms;
	Heal_Parms.HealthToAdd = HealthToAdd;
	Heal_Parms.HealInstigator = HealInstigator;
	Heal_Parms.bTriggerEffect = bTriggerEffect;
	Heal_Parms.bInstantHeal = bInstantHeal;
	Heal_Parms.HealInterval = HealInterval;

	this->ProcessEvent ( pFnHeal, &Heal_Parms, NULL );
};

// Function MechaGame.TGRealMecha.OnKeyUp_Shift
// [0x00020002] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGRealMecha::OnKeyUp_Shift ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyUp_Shift = NULL;

	if ( ! pFnOnKeyUp_Shift )
		pFnOnKeyUp_Shift = (UFunction*) UObject::GObjObjects()->Data[ 210694 ];

	ATGRealMecha_execOnKeyUp_Shift_Parms OnKeyUp_Shift_Parms;
	OnKeyUp_Shift_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyUp_Shift, &OnKeyUp_Shift_Parms, NULL );
};

// Function MechaGame.TGRealMecha.OnKeyDown_Shift
// [0x00020002] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGRealMecha::OnKeyDown_Shift ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyDown_Shift = NULL;

	if ( ! pFnOnKeyDown_Shift )
		pFnOnKeyDown_Shift = (UFunction*) UObject::GObjObjects()->Data[ 210692 ];

	ATGRealMecha_execOnKeyDown_Shift_Parms OnKeyDown_Shift_Parms;
	OnKeyDown_Shift_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyDown_Shift, &OnKeyDown_Shift_Parms, NULL );
};

// Function MechaGame.TGRealMecha.OnKeyDown_Space
// [0x00020002] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGRealMecha::OnKeyDown_Space ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyDown_Space = NULL;

	if ( ! pFnOnKeyDown_Space )
		pFnOnKeyDown_Space = (UFunction*) UObject::GObjObjects()->Data[ 210690 ];

	ATGRealMecha_execOnKeyDown_Space_Parms OnKeyDown_Space_Parms;
	OnKeyDown_Space_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyDown_Space, &OnKeyDown_Space_Parms, NULL );
};

// Function MechaGame.TGRealMecha.TimerEnableMovementInput
// [0x00020002] 
// Parameters infos:

void ATGRealMecha::TimerEnableMovementInput ( )
{
	static UFunction* pFnTimerEnableMovementInput = NULL;

	if ( ! pFnTimerEnableMovementInput )
		pFnTimerEnableMovementInput = (UFunction*) UObject::GObjObjects()->Data[ 210688 ];

	ATGRealMecha_execTimerEnableMovementInput_Parms TimerEnableMovementInput_Parms;

	this->ProcessEvent ( pFnTimerEnableMovementInput, &TimerEnableMovementInput_Parms, NULL );
};

// Function MechaGame.TGRealMecha.TimerDisableMovementInput
// [0x00020002] 
// Parameters infos:

void ATGRealMecha::TimerDisableMovementInput ( )
{
	static UFunction* pFnTimerDisableMovementInput = NULL;

	if ( ! pFnTimerDisableMovementInput )
		pFnTimerDisableMovementInput = (UFunction*) UObject::GObjObjects()->Data[ 210686 ];

	ATGRealMecha_execTimerDisableMovementInput_Parms TimerDisableMovementInput_Parms;

	this->ProcessEvent ( pFnTimerDisableMovementInput, &TimerDisableMovementInput_Parms, NULL );
};

// Function MechaGame.TGRealMecha.TimerSetJumpInputEnable
// [0x00020002] 
// Parameters infos:

void ATGRealMecha::TimerSetJumpInputEnable ( )
{
	static UFunction* pFnTimerSetJumpInputEnable = NULL;

	if ( ! pFnTimerSetJumpInputEnable )
		pFnTimerSetJumpInputEnable = (UFunction*) UObject::GObjObjects()->Data[ 210685 ];

	ATGRealMecha_execTimerSetJumpInputEnable_Parms TimerSetJumpInputEnable_Parms;

	this->ProcessEvent ( pFnTimerSetJumpInputEnable, &TimerSetJumpInputEnable_Parms, NULL );
};

// Function MechaGame.TGRealMecha.HandleLimitationAfterLand
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::HandleLimitationAfterLand ( )
{
	static UFunction* pFnHandleLimitationAfterLand = NULL;

	if ( ! pFnHandleLimitationAfterLand )
		pFnHandleLimitationAfterLand = (UFunction*) UObject::GObjObjects()->Data[ 210684 ];

	ATGRealMecha_execHandleLimitationAfterLand_Parms HandleLimitationAfterLand_Parms;

	this->ProcessEvent ( pFnHandleLimitationAfterLand, &HandleLimitationAfterLand_Parms, NULL );
};

// Function MechaGame.TGRealMecha.OnLandedCountUpdate
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::OnLandedCountUpdate ( )
{
	static UFunction* pFnOnLandedCountUpdate = NULL;

	if ( ! pFnOnLandedCountUpdate )
		pFnOnLandedCountUpdate = (UFunction*) UObject::GObjObjects()->Data[ 210683 ];

	ATGRealMecha_execOnLandedCountUpdate_Parms OnLandedCountUpdate_Parms;

	this->ProcessEvent ( pFnOnLandedCountUpdate, &OnLandedCountUpdate_Parms, NULL );
};

// Function MechaGame.TGRealMecha.Landed
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  FloorActor                     ( CPF_Parm )

void ATGRealMecha::eventLanded ( struct FVector HitNormal, class AActor* FloorActor )
{
	static UFunction* pFnLanded = NULL;

	if ( ! pFnLanded )
		pFnLanded = (UFunction*) UObject::GObjObjects()->Data[ 210680 ];

	ATGRealMecha_eventLanded_Parms Landed_Parms;
	memcpy ( &Landed_Parms.HitNormal, &HitNormal, 0xC );
	Landed_Parms.FloorActor = FloorActor;

	this->ProcessEvent ( pFnLanded, &Landed_Parms, NULL );
};

// Function MechaGame.TGRealMecha.OnNotifyWeaponReinforce
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::OnNotifyWeaponReinforce ( )
{
	static UFunction* pFnOnNotifyWeaponReinforce = NULL;

	if ( ! pFnOnNotifyWeaponReinforce )
		pFnOnNotifyWeaponReinforce = (UFunction*) UObject::GObjObjects()->Data[ 210678 ];

	ATGRealMecha_execOnNotifyWeaponReinforce_Parms OnNotifyWeaponReinforce_Parms;

	this->ProcessEvent ( pFnOnNotifyWeaponReinforce, &OnNotifyWeaponReinforce_Parms, NULL );
};

// Function MechaGame.TGRealMecha.NotifyWeaponReinforce
// [0x00020002] 
// Parameters infos:
// unsigned long                  bStarted                       ( CPF_Parm )

void ATGRealMecha::NotifyWeaponReinforce ( unsigned long bStarted )
{
	static UFunction* pFnNotifyWeaponReinforce = NULL;

	if ( ! pFnNotifyWeaponReinforce )
		pFnNotifyWeaponReinforce = (UFunction*) UObject::GObjObjects()->Data[ 210676 ];

	ATGRealMecha_execNotifyWeaponReinforce_Parms NotifyWeaponReinforce_Parms;
	NotifyWeaponReinforce_Parms.bStarted = bStarted;

	this->ProcessEvent ( pFnNotifyWeaponReinforce, &NotifyWeaponReinforce_Parms, NULL );
};

// Function MechaGame.TGRealMecha.NotifyJumpBoostStateChanged
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::NotifyJumpBoostStateChanged ( )
{
	static UFunction* pFnNotifyJumpBoostStateChanged = NULL;

	if ( ! pFnNotifyJumpBoostStateChanged )
		pFnNotifyJumpBoostStateChanged = (UFunction*) UObject::GObjObjects()->Data[ 210675 ];

	ATGRealMecha_execNotifyJumpBoostStateChanged_Parms NotifyJumpBoostStateChanged_Parms;

	this->ProcessEvent ( pFnNotifyJumpBoostStateChanged, &NotifyJumpBoostStateChanged_Parms, NULL );
};

// Function MechaGame.TGRealMecha.SetJumpBoostStarted
// [0x00020002] 
// Parameters infos:
// unsigned long                  bStarted                       ( CPF_Parm )

void ATGRealMecha::SetJumpBoostStarted ( unsigned long bStarted )
{
	static UFunction* pFnSetJumpBoostStarted = NULL;

	if ( ! pFnSetJumpBoostStarted )
		pFnSetJumpBoostStarted = (UFunction*) UObject::GObjObjects()->Data[ 210672 ];

	ATGRealMecha_execSetJumpBoostStarted_Parms SetJumpBoostStarted_Parms;
	SetJumpBoostStarted_Parms.bStarted = bStarted;

	this->ProcessEvent ( pFnSetJumpBoostStarted, &SetJumpBoostStarted_Parms, NULL );
};

// Function MechaGame.TGRealMecha.ClearJumpBoost
// [0x00020002] 
// Parameters infos:

void ATGRealMecha::ClearJumpBoost ( )
{
	static UFunction* pFnClearJumpBoost = NULL;

	if ( ! pFnClearJumpBoost )
		pFnClearJumpBoost = (UFunction*) UObject::GObjObjects()->Data[ 210671 ];

	ATGRealMecha_execClearJumpBoost_Parms ClearJumpBoost_Parms;

	this->ProcessEvent ( pFnClearJumpBoost, &ClearJumpBoost_Parms, NULL );
};

// Function MechaGame.TGRealMecha.StartJumpBoost
// [0x00020002] 
// Parameters infos:

void ATGRealMecha::StartJumpBoost ( )
{
	static UFunction* pFnStartJumpBoost = NULL;

	if ( ! pFnStartJumpBoost )
		pFnStartJumpBoost = (UFunction*) UObject::GObjObjects()->Data[ 210670 ];

	ATGRealMecha_execStartJumpBoost_Parms StartJumpBoost_Parms;

	this->ProcessEvent ( pFnStartJumpBoost, &StartJumpBoost_Parms, NULL );
};

// Function MechaGame.TGRealMecha.DrivingStatusChanged
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::DrivingStatusChanged ( )
{
	static UFunction* pFnDrivingStatusChanged = NULL;

	if ( ! pFnDrivingStatusChanged )
		pFnDrivingStatusChanged = (UFunction*) UObject::GObjObjects()->Data[ 210669 ];

	ATGRealMecha_execDrivingStatusChanged_Parms DrivingStatusChanged_Parms;

	this->ProcessEvent ( pFnDrivingStatusChanged, &DrivingStatusChanged_Parms, NULL );
};

// Function MechaGame.TGRealMecha.PlayWeapReplicatedEffects
// [0x00020102] 
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGRealMecha::PlayWeapReplicatedEffects ( struct FName VarName )
{
	static UFunction* pFnPlayWeapReplicatedEffects = NULL;

	if ( ! pFnPlayWeapReplicatedEffects )
		pFnPlayWeapReplicatedEffects = (UFunction*) UObject::GObjObjects()->Data[ 210667 ];

	ATGRealMecha_execPlayWeapReplicatedEffects_Parms PlayWeapReplicatedEffects_Parms;
	memcpy ( &PlayWeapReplicatedEffects_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnPlayWeapReplicatedEffects, &PlayWeapReplicatedEffects_Parms, NULL );
};

// Function MechaGame.TGRealMecha.SetEnemyColor
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::SetEnemyColor ( )
{
	static UFunction* pFnSetEnemyColor = NULL;

	if ( ! pFnSetEnemyColor )
		pFnSetEnemyColor = (UFunction*) UObject::GObjObjects()->Data[ 210664 ];

	ATGRealMecha_execSetEnemyColor_Parms SetEnemyColor_Parms;

	this->ProcessEvent ( pFnSetEnemyColor, &SetEnemyColor_Parms, NULL );
};

// Function MechaGame.TGRealMecha.NotifyTeamChanged
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::NotifyTeamChanged ( )
{
	static UFunction* pFnNotifyTeamChanged = NULL;

	if ( ! pFnNotifyTeamChanged )
		pFnNotifyTeamChanged = (UFunction*) UObject::GObjObjects()->Data[ 210663 ];

	ATGRealMecha_execNotifyTeamChanged_Parms NotifyTeamChanged_Parms;

	this->ProcessEvent ( pFnNotifyTeamChanged, &NotifyTeamChanged_Parms, NULL );
};

// Function MechaGame.TGRealMecha.DisplayHud
// [0x00020102] 
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void ATGRealMecha::DisplayHud ( class ATGHUD* HUD, class UCanvas* Canvas )
{
	static UFunction* pFnDisplayHud = NULL;

	if ( ! pFnDisplayHud )
		pFnDisplayHud = (UFunction*) UObject::GObjObjects()->Data[ 210660 ];

	ATGRealMecha_execDisplayHud_Parms DisplayHud_Parms;
	DisplayHud_Parms.HUD = HUD;
	DisplayHud_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDisplayHud, &DisplayHud_Parms, NULL );
};

// Function MechaGame.TGRealMecha.CreateHUD
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::CreateHUD ( )
{
	static UFunction* pFnCreateHUD = NULL;

	if ( ! pFnCreateHUD )
		pFnCreateHUD = (UFunction*) UObject::GObjObjects()->Data[ 210658 ];

	ATGRealMecha_execCreateHUD_Parms CreateHUD_Parms;

	this->ProcessEvent ( pFnCreateHUD, &CreateHUD_Parms, NULL );
};

// Function MechaGame.TGRealMecha.ClientSetDoorSwitchVolume
// [0x010201C2] 
// Parameters infos:
// class ATGMechaDoorSwitchVolume* TouchingVolume                 ( CPF_Parm )

void ATGRealMecha::ClientSetDoorSwitchVolume ( class ATGMechaDoorSwitchVolume* TouchingVolume )
{
	static UFunction* pFnClientSetDoorSwitchVolume = NULL;

	if ( ! pFnClientSetDoorSwitchVolume )
		pFnClientSetDoorSwitchVolume = (UFunction*) UObject::GObjObjects()->Data[ 210652 ];

	ATGRealMecha_execClientSetDoorSwitchVolume_Parms ClientSetDoorSwitchVolume_Parms;
	ClientSetDoorSwitchVolume_Parms.TouchingVolume = TouchingVolume;

	this->ProcessEvent ( pFnClientSetDoorSwitchVolume, &ClientSetDoorSwitchVolume_Parms, NULL );
};

// Function MechaGame.TGRealMecha.SetDoorSwitchVolume
// [0x00020002] 
// Parameters infos:
// class ATGMechaDoorSwitchVolume* TouchingVolume                 ( CPF_Parm )

void ATGRealMecha::SetDoorSwitchVolume ( class ATGMechaDoorSwitchVolume* TouchingVolume )
{
	static UFunction* pFnSetDoorSwitchVolume = NULL;

	if ( ! pFnSetDoorSwitchVolume )
		pFnSetDoorSwitchVolume = (UFunction*) UObject::GObjObjects()->Data[ 210646 ];

	ATGRealMecha_execSetDoorSwitchVolume_Parms SetDoorSwitchVolume_Parms;
	SetDoorSwitchVolume_Parms.TouchingVolume = TouchingVolume;

	this->ProcessEvent ( pFnSetDoorSwitchVolume, &SetDoorSwitchVolume_Parms, NULL );
};

// Function MechaGame.TGRealMecha.PlayDying
// [0x00024102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLoc                         ( CPF_Parm )
// unsigned char                  DeathDir                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_OptionalParm | CPF_Parm )

void ATGRealMecha::PlayDying ( class UClass* DamageType, struct FVector HitLoc, unsigned char DeathDir, unsigned char HitGroup )
{
	static UFunction* pFnPlayDying = NULL;

	if ( ! pFnPlayDying )
		pFnPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 210641 ];

	ATGRealMecha_execPlayDying_Parms PlayDying_Parms;
	PlayDying_Parms.DamageType = DamageType;
	memcpy ( &PlayDying_Parms.HitLoc, &HitLoc, 0xC );
	PlayDying_Parms.DeathDir = DeathDir;
	PlayDying_Parms.HitGroup = HitGroup;

	this->ProcessEvent ( pFnPlayDying, &PlayDying_Parms, NULL );
};

// Function MechaGame.TGRealMecha.UpdateOccludedMeshColor
// [0x00820102] 
// Parameters infos:

void ATGRealMecha::UpdateOccludedMeshColor ( )
{
	static UFunction* pFnUpdateOccludedMeshColor = NULL;

	if ( ! pFnUpdateOccludedMeshColor )
		pFnUpdateOccludedMeshColor = (UFunction*) UObject::GObjObjects()->Data[ 210634 ];

	ATGRealMecha_execUpdateOccludedMeshColor_Parms UpdateOccludedMeshColor_Parms;

	this->ProcessEvent ( pFnUpdateOccludedMeshColor, &UpdateOccludedMeshColor_Parms, NULL );
};

// Function MechaGame.TGRealMecha.NeedOccludedEffect
// [0x00022102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGRealMecha*            Mecha                          ( CPF_Parm )

bool ATGRealMecha::NeedOccludedEffect ( class ATGRealMecha* Mecha )
{
	static UFunction* pFnNeedOccludedEffect = NULL;

	if ( ! pFnNeedOccludedEffect )
		pFnNeedOccludedEffect = (UFunction*) UObject::GObjObjects()->Data[ 210630 ];

	ATGRealMecha_execNeedOccludedEffect_Parms NeedOccludedEffect_Parms;
	NeedOccludedEffect_Parms.Mecha = Mecha;

	this->ProcessEvent ( pFnNeedOccludedEffect, &NeedOccludedEffect_Parms, NULL );

	return NeedOccludedEffect_Parms.ReturnValue;
};

// Function MechaGame.TGRealMecha.SetOccludedMeshHidden
// [0x00020102] 
// Parameters infos:
// unsigned long                  bInHidden                      ( CPF_Parm )

void ATGRealMecha::SetOccludedMeshHidden ( unsigned long bInHidden )
{
	static UFunction* pFnSetOccludedMeshHidden = NULL;

	if ( ! pFnSetOccludedMeshHidden )
		pFnSetOccludedMeshHidden = (UFunction*) UObject::GObjObjects()->Data[ 210627 ];

	ATGRealMecha_execSetOccludedMeshHidden_Parms SetOccludedMeshHidden_Parms;
	SetOccludedMeshHidden_Parms.bInHidden = bInHidden;

	this->ProcessEvent ( pFnSetOccludedMeshHidden, &SetOccludedMeshHidden_Parms, NULL );
};

// Function MechaGame.TGRealMecha.SetupOccludedMesh
// [0x00020102] 
// Parameters infos:
// class USkeletalMeshComponent*  MeshComp                       ( CPF_Parm | CPF_EditInline )

void ATGRealMecha::SetupOccludedMesh ( class USkeletalMeshComponent* MeshComp )
{
	static UFunction* pFnSetupOccludedMesh = NULL;

	if ( ! pFnSetupOccludedMesh )
		pFnSetupOccludedMesh = (UFunction*) UObject::GObjObjects()->Data[ 210622 ];

	ATGRealMecha_execSetupOccludedMesh_Parms SetupOccludedMesh_Parms;
	SetupOccludedMesh_Parms.MeshComp = MeshComp;

	this->ProcessEvent ( pFnSetupOccludedMesh, &SetupOccludedMesh_Parms, NULL );
};

// Function MechaGame.TGRealMecha.SetupOccludedMeshForExistingMecha
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::SetupOccludedMeshForExistingMecha ( )
{
	static UFunction* pFnSetupOccludedMeshForExistingMecha = NULL;

	if ( ! pFnSetupOccludedMeshForExistingMecha )
		pFnSetupOccludedMeshForExistingMecha = (UFunction*) UObject::GObjObjects()->Data[ 210619 ];

	ATGRealMecha_execSetupOccludedMeshForExistingMecha_Parms SetupOccludedMeshForExistingMecha_Parms;

	this->ProcessEvent ( pFnSetupOccludedMeshForExistingMecha, &SetupOccludedMeshForExistingMecha_Parms, NULL );
};

// Function MechaGame.TGRealMecha.OnControllerNotification
// [0x00020102] 
// Parameters infos:

void ATGRealMecha::OnControllerNotification ( )
{
	static UFunction* pFnOnControllerNotification = NULL;

	if ( ! pFnOnControllerNotification )
		pFnOnControllerNotification = (UFunction*) UObject::GObjObjects()->Data[ 210618 ];

	ATGRealMecha_execOnControllerNotification_Parms OnControllerNotification_Parms;

	this->ProcessEvent ( pFnOnControllerNotification, &OnControllerNotification_Parms, NULL );
};

// Function MechaGame.TGRealMecha.SetupOccludedMeshForOwnerMecha
// [0x00020102] 
// Parameters infos:
// class USkeletalMeshComponent*  MeshComp                       ( CPF_Parm | CPF_EditInline )

void ATGRealMecha::SetupOccludedMeshForOwnerMecha ( class USkeletalMeshComponent* MeshComp )
{
	static UFunction* pFnSetupOccludedMeshForOwnerMecha = NULL;

	if ( ! pFnSetupOccludedMeshForOwnerMecha )
		pFnSetupOccludedMeshForOwnerMecha = (UFunction*) UObject::GObjObjects()->Data[ 210614 ];

	ATGRealMecha_execSetupOccludedMeshForOwnerMecha_Parms SetupOccludedMeshForOwnerMecha_Parms;
	SetupOccludedMeshForOwnerMecha_Parms.MeshComp = MeshComp;

	this->ProcessEvent ( pFnSetupOccludedMeshForOwnerMecha, &SetupOccludedMeshForOwnerMecha_Parms, NULL );
};

// Function MechaGame.TGRealMecha.NotifyWeaponMeshAttached
// [0x00020102] 
// Parameters infos:
// class USkeletalMeshComponent*  WeaponMesh                     ( CPF_Parm | CPF_EditInline )

void ATGRealMecha::NotifyWeaponMeshAttached ( class USkeletalMeshComponent* WeaponMesh )
{
	static UFunction* pFnNotifyWeaponMeshAttached = NULL;

	if ( ! pFnNotifyWeaponMeshAttached )
		pFnNotifyWeaponMeshAttached = (UFunction*) UObject::GObjObjects()->Data[ 210612 ];

	ATGRealMecha_execNotifyWeaponMeshAttached_Parms NotifyWeaponMeshAttached_Parms;
	NotifyWeaponMeshAttached_Parms.WeaponMesh = WeaponMesh;

	this->ProcessEvent ( pFnNotifyWeaponMeshAttached, &NotifyWeaponMeshAttached_Parms, NULL );
};

// Function MechaGame.TGRealMecha.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGRealMecha::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 210611 ];

	ATGRealMecha_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGRealMecha.PreBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGRealMecha::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 210610 ];

	ATGRealMecha_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function MechaGame.TGRealMecha.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGRealMecha::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 210608 ];

	ATGRealMecha_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function MechaGame.TGRealMecha.ShieldAbsorb
// [0x00520000] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm | CPF_OutParm )

void ATGRealMecha::ShieldAbsorb ( int* Damage )
{
	static UFunction* pFnShieldAbsorb = NULL;

	if ( ! pFnShieldAbsorb )
		pFnShieldAbsorb = (UFunction*) UObject::GObjObjects()->Data[ 210536 ];

	ATGRealMecha_execShieldAbsorb_Parms ShieldAbsorb_Parms;

	this->ProcessEvent ( pFnShieldAbsorb, &ShieldAbsorb_Parms, NULL );

	if ( Damage )
		*Damage = ShieldAbsorb_Parms.Damage;
};

// Function MechaGame.TGRealMechaBase.PlayeDyingEffect
// [0x00820102] 
// Parameters infos:

void ATGRealMechaBase::PlayeDyingEffect ( )
{
	static UFunction* pFnPlayeDyingEffect = NULL;

	if ( ! pFnPlayeDyingEffect )
		pFnPlayeDyingEffect = (UFunction*) UObject::GObjObjects()->Data[ 210499 ];

	ATGRealMechaBase_execPlayeDyingEffect_Parms PlayeDyingEffect_Parms;

	this->ProcessEvent ( pFnPlayeDyingEffect, &PlayeDyingEffect_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.PlayDying
// [0x00024102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLoc                         ( CPF_Parm )
// unsigned char                  DeathDir                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_OptionalParm | CPF_Parm )

void ATGRealMechaBase::PlayDying ( class UClass* DamageType, struct FVector HitLoc, unsigned char DeathDir, unsigned char HitGroup )
{
	static UFunction* pFnPlayDying = NULL;

	if ( ! pFnPlayDying )
		pFnPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 210494 ];

	ATGRealMechaBase_execPlayDying_Parms PlayDying_Parms;
	PlayDying_Parms.DamageType = DamageType;
	memcpy ( &PlayDying_Parms.HitLoc, &HitLoc, 0xC );
	PlayDying_Parms.DeathDir = DeathDir;
	PlayDying_Parms.HitGroup = HitGroup;

	this->ProcessEvent ( pFnPlayDying, &PlayDying_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.Died
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// unsigned char                  DeathDir                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_OptionalParm | CPF_Parm )

bool ATGRealMechaBase::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation, unsigned char DeathDir, unsigned char HitGroup )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 210484 ];

	ATGRealMechaBase_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );
	Died_Parms.DeathDir = DeathDir;
	Died_Parms.HitGroup = HitGroup;

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function MechaGame.TGRealMechaBase.AdjustDriverDamage
// [0x00420000] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// int                            Damage                         ( CPF_Parm | CPF_OutParm )
// struct FVector                 Momentum                       ( CPF_Parm | CPF_OutParm )

void ATGRealMechaBase::AdjustDriverDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, int* Damage, struct FVector* Momentum )
{
	static UFunction* pFnAdjustDriverDamage = NULL;

	if ( ! pFnAdjustDriverDamage )
		pFnAdjustDriverDamage = (UFunction*) UObject::GObjObjects()->Data[ 210478 ];

	ATGRealMechaBase_execAdjustDriverDamage_Parms AdjustDriverDamage_Parms;
	AdjustDriverDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &AdjustDriverDamage_Parms.HitLocation, &HitLocation, 0xC );
	AdjustDriverDamage_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnAdjustDriverDamage, &AdjustDriverDamage_Parms, NULL );

	if ( Damage )
		*Damage = AdjustDriverDamage_Parms.Damage;

	if ( Momentum )
		memcpy ( Momentum, &AdjustDriverDamage_Parms.Momentum, 0xC );
};

// Function MechaGame.TGRealMechaBase.DriverRadiusDamage
// [0x00024000] 
// Parameters infos:
// float                          DamageAmount                   ( CPF_Parm )
// float                          DamageRadius                   ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// float                          Momentum                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )
// float                          DamageFalloffExponent          ( CPF_OptionalParm | CPF_Parm )

void ATGRealMechaBase::DriverRadiusDamage ( float DamageAmount, float DamageRadius, class AController* EventInstigator, class UClass* DamageType, float Momentum, struct FVector HitLocation, class AActor* DamageCauser, float DamageFalloffExponent )
{
	static UFunction* pFnDriverRadiusDamage = NULL;

	if ( ! pFnDriverRadiusDamage )
		pFnDriverRadiusDamage = (UFunction*) UObject::GObjObjects()->Data[ 210469 ];

	ATGRealMechaBase_execDriverRadiusDamage_Parms DriverRadiusDamage_Parms;
	DriverRadiusDamage_Parms.DamageAmount = DamageAmount;
	DriverRadiusDamage_Parms.DamageRadius = DamageRadius;
	DriverRadiusDamage_Parms.EventInstigator = EventInstigator;
	DriverRadiusDamage_Parms.DamageType = DamageType;
	DriverRadiusDamage_Parms.Momentum = Momentum;
	memcpy ( &DriverRadiusDamage_Parms.HitLocation, &HitLocation, 0xC );
	DriverRadiusDamage_Parms.DamageCauser = DamageCauser;
	DriverRadiusDamage_Parms.DamageFalloffExponent = DamageFalloffExponent;

	this->ProcessEvent ( pFnDriverRadiusDamage, &DriverRadiusDamage_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.SetMechaHidden
// [0x00820102] 
// Parameters infos:
// unsigned long                  bInHidden                      ( CPF_Parm )

void ATGRealMechaBase::SetMechaHidden ( unsigned long bInHidden )
{
	static UFunction* pFnSetMechaHidden = NULL;

	if ( ! pFnSetMechaHidden )
		pFnSetMechaHidden = (UFunction*) UObject::GObjObjects()->Data[ 210466 ];

	ATGRealMechaBase_execSetMechaHidden_Parms SetMechaHidden_Parms;
	SetMechaHidden_Parms.bInHidden = bInHidden;

	this->ProcessEvent ( pFnSetMechaHidden, &SetMechaHidden_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.NotifySkillStartSignal
// [0x00020000] 
// Parameters infos:
// class AMechaSkillBase*         Skill                          ( CPF_Parm )

void ATGRealMechaBase::NotifySkillStartSignal ( class AMechaSkillBase* Skill )
{
	static UFunction* pFnNotifySkillStartSignal = NULL;

	if ( ! pFnNotifySkillStartSignal )
		pFnNotifySkillStartSignal = (UFunction*) UObject::GObjObjects()->Data[ 210464 ];

	ATGRealMechaBase_execNotifySkillStartSignal_Parms NotifySkillStartSignal_Parms;
	NotifySkillStartSignal_Parms.Skill = Skill;

	this->ProcessEvent ( pFnNotifySkillStartSignal, &NotifySkillStartSignal_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.StopSkillByName
// [0x00020102] 
// Parameters infos:
// struct FName                   SkillName                      ( CPF_Parm )

void ATGRealMechaBase::StopSkillByName ( struct FName SkillName )
{
	static UFunction* pFnStopSkillByName = NULL;

	if ( ! pFnStopSkillByName )
		pFnStopSkillByName = (UFunction*) UObject::GObjObjects()->Data[ 210461 ];

	ATGRealMechaBase_execStopSkillByName_Parms StopSkillByName_Parms;
	memcpy ( &StopSkillByName_Parms.SkillName, &SkillName, 0x8 );

	this->ProcessEvent ( pFnStopSkillByName, &StopSkillByName_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.StartSkillByName
// [0x00020102] 
// Parameters infos:
// struct FName                   SkillName                      ( CPF_Parm )

void ATGRealMechaBase::StartSkillByName ( struct FName SkillName )
{
	static UFunction* pFnStartSkillByName = NULL;

	if ( ! pFnStartSkillByName )
		pFnStartSkillByName = (UFunction*) UObject::GObjObjects()->Data[ 210458 ];

	ATGRealMechaBase_execStartSkillByName_Parms StartSkillByName_Parms;
	memcpy ( &StartSkillByName_Parms.SkillName, &SkillName, 0x8 );

	this->ProcessEvent ( pFnStartSkillByName, &StartSkillByName_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.HasSkill
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SkillName                      ( CPF_Parm )

bool ATGRealMechaBase::HasSkill ( struct FName SkillName )
{
	static UFunction* pFnHasSkill = NULL;

	if ( ! pFnHasSkill )
		pFnHasSkill = (UFunction*) UObject::GObjObjects()->Data[ 210454 ];

	ATGRealMechaBase_execHasSkill_Parms HasSkill_Parms;
	memcpy ( &HasSkill_Parms.SkillName, &SkillName, 0x8 );

	this->ProcessEvent ( pFnHasSkill, &HasSkill_Parms, NULL );

	return HasSkill_Parms.ReturnValue;
};

// Function MechaGame.TGRealMechaBase.OnGroupSkillNotification
// [0x00020102] 
// Parameters infos:

void ATGRealMechaBase::OnGroupSkillNotification ( )
{
	static UFunction* pFnOnGroupSkillNotification = NULL;

	if ( ! pFnOnGroupSkillNotification )
		pFnOnGroupSkillNotification = (UFunction*) UObject::GObjObjects()->Data[ 210451 ];

	ATGRealMechaBase_execOnGroupSkillNotification_Parms OnGroupSkillNotification_Parms;

	this->ProcessEvent ( pFnOnGroupSkillNotification, &OnGroupSkillNotification_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.NotifyGroupSkillApplied
// [0x00020002] 
// Parameters infos:
// class UClass*                  SkillCompClass                 ( CPF_Parm )

void ATGRealMechaBase::NotifyGroupSkillApplied ( class UClass* SkillCompClass )
{
	static UFunction* pFnNotifyGroupSkillApplied = NULL;

	if ( ! pFnNotifyGroupSkillApplied )
		pFnNotifyGroupSkillApplied = (UFunction*) UObject::GObjObjects()->Data[ 210449 ];

	ATGRealMechaBase_execNotifyGroupSkillApplied_Parms NotifyGroupSkillApplied_Parms;
	NotifyGroupSkillApplied_Parms.SkillCompClass = SkillCompClass;

	this->ProcessEvent ( pFnNotifyGroupSkillApplied, &NotifyGroupSkillApplied_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.NotifySkillStateChanged
// [0x00020102] 
// Parameters infos:
// class UClass*                  SkillCompClass                 ( CPF_Parm )
// unsigned long                  bActive                        ( CPF_Parm )

void ATGRealMechaBase::NotifySkillStateChanged ( class UClass* SkillCompClass, unsigned long bActive )
{
	static UFunction* pFnNotifySkillStateChanged = NULL;

	if ( ! pFnNotifySkillStateChanged )
		pFnNotifySkillStateChanged = (UFunction*) UObject::GObjObjects()->Data[ 210442 ];

	ATGRealMechaBase_execNotifySkillStateChanged_Parms NotifySkillStateChanged_Parms;
	NotifySkillStateChanged_Parms.SkillCompClass = SkillCompClass;
	NotifySkillStateChanged_Parms.bActive = bActive;

	this->ProcessEvent ( pFnNotifySkillStateChanged, &NotifySkillStateChanged_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.SetHUDLocation
// [0x00020102] 
// Parameters infos:
// struct FVector                 NewHUDLocation                 ( CPF_Parm )

void ATGRealMechaBase::SetHUDLocation ( struct FVector NewHUDLocation )
{
	static UFunction* pFnSetHUDLocation = NULL;

	if ( ! pFnSetHUDLocation )
		pFnSetHUDLocation = (UFunction*) UObject::GObjObjects()->Data[ 210440 ];

	ATGRealMechaBase_execSetHUDLocation_Parms SetHUDLocation_Parms;
	memcpy ( &SetHUDLocation_Parms.NewHUDLocation, &NewHUDLocation, 0xC );

	this->ProcessEvent ( pFnSetHUDLocation, &SetHUDLocation_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.TriggerVehicleSound
// [0x00020102] 
// Parameters infos:
// struct FName                   SoundTag                       ( CPF_Parm )
// unsigned long                  bMultiInstance                 ( CPF_Parm )

void ATGRealMechaBase::TriggerVehicleSound ( struct FName SoundTag, unsigned long bMultiInstance )
{
	static UFunction* pFnTriggerVehicleSound = NULL;

	if ( ! pFnTriggerVehicleSound )
		pFnTriggerVehicleSound = (UFunction*) UObject::GObjObjects()->Data[ 210436 ];

	ATGRealMechaBase_execTriggerVehicleSound_Parms TriggerVehicleSound_Parms;
	memcpy ( &TriggerVehicleSound_Parms.SoundTag, &SoundTag, 0x8 );
	TriggerVehicleSound_Parms.bMultiInstance = bMultiInstance;

	this->ProcessEvent ( pFnTriggerVehicleSound, &TriggerVehicleSound_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.SetVehicleEffectParmsColor
// [0x00020102] 
// Parameters infos:
// struct FName                   EventTag                       ( CPF_Parm )
// struct FName                   ParameterName                  ( CPF_Parm )
// struct FColor                  Param                          ( CPF_Parm )

void ATGRealMechaBase::SetVehicleEffectParmsColor ( struct FName EventTag, struct FName ParameterName, struct FColor Param )
{
	static UFunction* pFnSetVehicleEffectParmsColor = NULL;

	if ( ! pFnSetVehicleEffectParmsColor )
		pFnSetVehicleEffectParmsColor = (UFunction*) UObject::GObjObjects()->Data[ 210431 ];

	ATGRealMechaBase_execSetVehicleEffectParmsColor_Parms SetVehicleEffectParmsColor_Parms;
	memcpy ( &SetVehicleEffectParmsColor_Parms.EventTag, &EventTag, 0x8 );
	memcpy ( &SetVehicleEffectParmsColor_Parms.ParameterName, &ParameterName, 0x8 );
	memcpy ( &SetVehicleEffectParmsColor_Parms.Param, &Param, 0x4 );

	this->ProcessEvent ( pFnSetVehicleEffectParmsColor, &SetVehicleEffectParmsColor_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.SetVehicleEffectParmsVector
// [0x00020102] 
// Parameters infos:
// struct FName                   EventTag                       ( CPF_Parm )
// struct FName                   ParameterName                  ( CPF_Parm )
// struct FVector                 Param                          ( CPF_Parm )

void ATGRealMechaBase::SetVehicleEffectParmsVector ( struct FName EventTag, struct FName ParameterName, struct FVector Param )
{
	static UFunction* pFnSetVehicleEffectParmsVector = NULL;

	if ( ! pFnSetVehicleEffectParmsVector )
		pFnSetVehicleEffectParmsVector = (UFunction*) UObject::GObjObjects()->Data[ 210426 ];

	ATGRealMechaBase_execSetVehicleEffectParmsVector_Parms SetVehicleEffectParmsVector_Parms;
	memcpy ( &SetVehicleEffectParmsVector_Parms.EventTag, &EventTag, 0x8 );
	memcpy ( &SetVehicleEffectParmsVector_Parms.ParameterName, &ParameterName, 0x8 );
	memcpy ( &SetVehicleEffectParmsVector_Parms.Param, &Param, 0xC );

	this->ProcessEvent ( pFnSetVehicleEffectParmsVector, &SetVehicleEffectParmsVector_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.SetVehicleEffectParmsFloat
// [0x00020102] 
// Parameters infos:
// struct FName                   EventTag                       ( CPF_Parm )
// struct FName                   ParameterName                  ( CPF_Parm )
// float                          Param                          ( CPF_Parm )

void ATGRealMechaBase::SetVehicleEffectParmsFloat ( struct FName EventTag, struct FName ParameterName, float Param )
{
	static UFunction* pFnSetVehicleEffectParmsFloat = NULL;

	if ( ! pFnSetVehicleEffectParmsFloat )
		pFnSetVehicleEffectParmsFloat = (UFunction*) UObject::GObjObjects()->Data[ 210421 ];

	ATGRealMechaBase_execSetVehicleEffectParmsFloat_Parms SetVehicleEffectParmsFloat_Parms;
	memcpy ( &SetVehicleEffectParmsFloat_Parms.EventTag, &EventTag, 0x8 );
	memcpy ( &SetVehicleEffectParmsFloat_Parms.ParameterName, &ParameterName, 0x8 );
	SetVehicleEffectParmsFloat_Parms.Param = Param;

	this->ProcessEvent ( pFnSetVehicleEffectParmsFloat, &SetVehicleEffectParmsFloat_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.SetVehicleEffectParms
// [0x00020102] 
// Parameters infos:
// struct FName                   TriggerName                    ( CPF_Parm )
// class UParticleSystemComponent* PSC                            ( CPF_Parm | CPF_EditInline )

void ATGRealMechaBase::SetVehicleEffectParms ( struct FName TriggerName, class UParticleSystemComponent* PSC )
{
	static UFunction* pFnSetVehicleEffectParms = NULL;

	if ( ! pFnSetVehicleEffectParms )
		pFnSetVehicleEffectParms = (UFunction*) UObject::GObjObjects()->Data[ 210418 ];

	ATGRealMechaBase_execSetVehicleEffectParms_Parms SetVehicleEffectParms_Parms;
	memcpy ( &SetVehicleEffectParms_Parms.TriggerName, &TriggerName, 0x8 );
	SetVehicleEffectParms_Parms.PSC = PSC;

	this->ProcessEvent ( pFnSetVehicleEffectParms, &SetVehicleEffectParms_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.CreateVehicleEffect
// [0x00020102] 
// Parameters infos:
// int                            EffectIndex                    ( CPF_Parm )
// struct FName                   EventTag                       ( CPF_Parm )

void ATGRealMechaBase::CreateVehicleEffect ( int EffectIndex, struct FName EventTag )
{
	static UFunction* pFnCreateVehicleEffect = NULL;

	if ( ! pFnCreateVehicleEffect )
		pFnCreateVehicleEffect = (UFunction*) UObject::GObjObjects()->Data[ 210411 ];

	ATGRealMechaBase_execCreateVehicleEffect_Parms CreateVehicleEffect_Parms;
	CreateVehicleEffect_Parms.EffectIndex = EffectIndex;
	memcpy ( &CreateVehicleEffect_Parms.EventTag, &EventTag, 0x8 );

	this->ProcessEvent ( pFnCreateVehicleEffect, &CreateVehicleEffect_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.TriggerVehicleEffect
// [0x00020102] 
// Parameters infos:
// struct FName                   EventTag                       ( CPF_Parm )

void ATGRealMechaBase::TriggerVehicleEffect ( struct FName EventTag )
{
	static UFunction* pFnTriggerVehicleEffect = NULL;

	if ( ! pFnTriggerVehicleEffect )
		pFnTriggerVehicleEffect = (UFunction*) UObject::GObjObjects()->Data[ 210408 ];

	ATGRealMechaBase_execTriggerVehicleEffect_Parms TriggerVehicleEffect_Parms;
	memcpy ( &TriggerVehicleEffect_Parms.EventTag, &EventTag, 0x8 );

	this->ProcessEvent ( pFnTriggerVehicleEffect, &TriggerVehicleEffect_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.VehicleEvent
// [0x00024102] 
// Parameters infos:
// struct FName                   EventTag                       ( CPF_Parm )
// unsigned long                  bMultiInstance                 ( CPF_OptionalParm | CPF_Parm )

void ATGRealMechaBase::VehicleEvent ( struct FName EventTag, unsigned long bMultiInstance )
{
	static UFunction* pFnVehicleEvent = NULL;

	if ( ! pFnVehicleEvent )
		pFnVehicleEvent = (UFunction*) UObject::GObjObjects()->Data[ 210405 ];

	ATGRealMechaBase_execVehicleEvent_Parms VehicleEvent_Parms;
	memcpy ( &VehicleEvent_Parms.EventTag, &EventTag, 0x8 );
	VehicleEvent_Parms.bMultiInstance = bMultiInstance;

	this->ProcessEvent ( pFnVehicleEvent, &VehicleEvent_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.OnAnimationNotification
// [0x00020102] 
// Parameters infos:

void ATGRealMechaBase::OnAnimationNotification ( )
{
	static UFunction* pFnOnAnimationNotification = NULL;

	if ( ! pFnOnAnimationNotification )
		pFnOnAnimationNotification = (UFunction*) UObject::GObjObjects()->Data[ 210403 ];

	ATGRealMechaBase_execOnAnimationNotification_Parms OnAnimationNotification_Parms;

	this->ProcessEvent ( pFnOnAnimationNotification, &OnAnimationNotification_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.TimerStopAllAnimations
// [0x00020102] 
// Parameters infos:

void ATGRealMechaBase::TimerStopAllAnimations ( )
{
	static UFunction* pFnTimerStopAllAnimations = NULL;

	if ( ! pFnTimerStopAllAnimations )
		pFnTimerStopAllAnimations = (UFunction*) UObject::GObjObjects()->Data[ 210402 ];

	ATGRealMechaBase_execTimerStopAllAnimations_Parms TimerStopAllAnimations_Parms;

	this->ProcessEvent ( pFnTimerStopAllAnimations, &TimerStopAllAnimations_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.PlayReplicatedAnimation
// [0x00024102] 
// Parameters infos:
// struct FName                   AnimName                       ( CPF_Parm )
// float                          BlendInTime                    ( CPF_Parm )
// float                          BlendOutTime                   ( CPF_Parm )
// unsigned char                  BodyStance                     ( CPF_OptionalParm | CPF_Parm )

void ATGRealMechaBase::PlayReplicatedAnimation ( struct FName AnimName, float BlendInTime, float BlendOutTime, unsigned char BodyStance )
{
	static UFunction* pFnPlayReplicatedAnimation = NULL;

	if ( ! pFnPlayReplicatedAnimation )
		pFnPlayReplicatedAnimation = (UFunction*) UObject::GObjObjects()->Data[ 210396 ];

	ATGRealMechaBase_execPlayReplicatedAnimation_Parms PlayReplicatedAnimation_Parms;
	memcpy ( &PlayReplicatedAnimation_Parms.AnimName, &AnimName, 0x8 );
	PlayReplicatedAnimation_Parms.BlendInTime = BlendInTime;
	PlayReplicatedAnimation_Parms.BlendOutTime = BlendOutTime;
	PlayReplicatedAnimation_Parms.BodyStance = BodyStance;

	this->ProcessEvent ( pFnPlayReplicatedAnimation, &PlayReplicatedAnimation_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.SetWeapAnimType
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// unsigned char                  AnimType                       ( CPF_Parm )

void ATGRealMechaBase::eventSetWeapAnimType ( unsigned char AnimType )
{
	static UFunction* pFnSetWeapAnimType = NULL;

	if ( ! pFnSetWeapAnimType )
		pFnSetWeapAnimType = (UFunction*) UObject::GObjObjects()->Data[ 210394 ];

	ATGRealMechaBase_eventSetWeapAnimType_Parms SetWeapAnimType_Parms;
	SetWeapAnimType_Parms.AnimType = AnimType;

	this->ProcessEvent ( pFnSetWeapAnimType, &SetWeapAnimType_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.ResetMaterials
// [0x00020102] 
// Parameters infos:

void ATGRealMechaBase::ResetMaterials ( )
{
	static UFunction* pFnResetMaterials = NULL;

	if ( ! pFnResetMaterials )
		pFnResetMaterials = (UFunction*) UObject::GObjObjects()->Data[ 210391 ];

	ATGRealMechaBase_execResetMaterials_Parms ResetMaterials_Parms;

	this->ProcessEvent ( pFnResetMaterials, &ResetMaterials_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.SetMaterialVectorParam
// [0x00C20102] 
// Parameters infos:
// struct FName                   ParameterName                  ( CPF_Parm )
// struct FLinearColor            Value                          ( CPF_Const | CPF_Parm | CPF_OutParm )

void ATGRealMechaBase::SetMaterialVectorParam ( struct FName ParameterName, struct FLinearColor* Value )
{
	static UFunction* pFnSetMaterialVectorParam = NULL;

	if ( ! pFnSetMaterialVectorParam )
		pFnSetMaterialVectorParam = (UFunction*) UObject::GObjObjects()->Data[ 210384 ];

	ATGRealMechaBase_execSetMaterialVectorParam_Parms SetMaterialVectorParam_Parms;
	memcpy ( &SetMaterialVectorParam_Parms.ParameterName, &ParameterName, 0x8 );

	this->ProcessEvent ( pFnSetMaterialVectorParam, &SetMaterialVectorParam_Parms, NULL );

	if ( Value )
		memcpy ( Value, &SetMaterialVectorParam_Parms.Value, 0x10 );
};

// Function MechaGame.TGRealMechaBase.SetMaterialScalarParam
// [0x00020102] 
// Parameters infos:
// struct FName                   ParameterName                  ( CPF_Parm )
// float                          Value                          ( CPF_Parm )

void ATGRealMechaBase::SetMaterialScalarParam ( struct FName ParameterName, float Value )
{
	static UFunction* pFnSetMaterialScalarParam = NULL;

	if ( ! pFnSetMaterialScalarParam )
		pFnSetMaterialScalarParam = (UFunction*) UObject::GObjObjects()->Data[ 210377 ];

	ATGRealMechaBase_execSetMaterialScalarParam_Parms SetMaterialScalarParam_Parms;
	memcpy ( &SetMaterialScalarParam_Parms.ParameterName, &ParameterName, 0x8 );
	SetMaterialScalarParam_Parms.Value = Value;

	this->ProcessEvent ( pFnSetMaterialScalarParam, &SetMaterialScalarParam_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.CheckSilhouetteFlag
// [0x00020102] 
// Parameters infos:

void ATGRealMechaBase::CheckSilhouetteFlag ( )
{
	static UFunction* pFnCheckSilhouetteFlag = NULL;

	if ( ! pFnCheckSilhouetteFlag )
		pFnCheckSilhouetteFlag = (UFunction*) UObject::GObjObjects()->Data[ 210374 ];

	ATGRealMechaBase_execCheckSilhouetteFlag_Parms CheckSilhouetteFlag_Parms;

	this->ProcessEvent ( pFnCheckSilhouetteFlag, &CheckSilhouetteFlag_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.OnControllerNotification
// [0x00020102] 
// Parameters infos:

void ATGRealMechaBase::OnControllerNotification ( )
{
	static UFunction* pFnOnControllerNotification = NULL;

	if ( ! pFnOnControllerNotification )
		pFnOnControllerNotification = (UFunction*) UObject::GObjObjects()->Data[ 210372 ];

	ATGRealMechaBase_execOnControllerNotification_Parms OnControllerNotification_Parms;

	this->ProcessEvent ( pFnOnControllerNotification, &OnControllerNotification_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.NotifyTeamChanged
// [0x00020102] 
// Parameters infos:

void ATGRealMechaBase::NotifyTeamChanged ( )
{
	static UFunction* pFnNotifyTeamChanged = NULL;

	if ( ! pFnNotifyTeamChanged )
		pFnNotifyTeamChanged = (UFunction*) UObject::GObjObjects()->Data[ 210371 ];

	ATGRealMechaBase_execNotifyTeamChanged_Parms NotifyTeamChanged_Parms;

	this->ProcessEvent ( pFnNotifyTeamChanged, &NotifyTeamChanged_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.SetupOccludedMeshForExistingMecha
// [0x00020102] 
// Parameters infos:

void ATGRealMechaBase::SetupOccludedMeshForExistingMecha ( )
{
	static UFunction* pFnSetupOccludedMeshForExistingMecha = NULL;

	if ( ! pFnSetupOccludedMeshForExistingMecha )
		pFnSetupOccludedMeshForExistingMecha = (UFunction*) UObject::GObjObjects()->Data[ 210368 ];

	ATGRealMechaBase_execSetupOccludedMeshForExistingMecha_Parms SetupOccludedMeshForExistingMecha_Parms;

	this->ProcessEvent ( pFnSetupOccludedMeshForExistingMecha, &SetupOccludedMeshForExistingMecha_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.SetSilhouetteEnabled
// [0x00024102] 
// Parameters infos:
// unsigned long                  bInEnabled                     ( CPF_Parm )
// struct FLinearColor            InColor                        ( CPF_OptionalParm | CPF_Parm )

void ATGRealMechaBase::SetSilhouetteEnabled ( unsigned long bInEnabled, struct FLinearColor InColor )
{
	static UFunction* pFnSetSilhouetteEnabled = NULL;

	if ( ! pFnSetSilhouetteEnabled )
		pFnSetSilhouetteEnabled = (UFunction*) UObject::GObjObjects()->Data[ 210364 ];

	ATGRealMechaBase_execSetSilhouetteEnabled_Parms SetSilhouetteEnabled_Parms;
	SetSilhouetteEnabled_Parms.bInEnabled = bInEnabled;
	memcpy ( &SetSilhouetteEnabled_Parms.InColor, &InColor, 0x10 );

	this->ProcessEvent ( pFnSetSilhouetteEnabled, &SetSilhouetteEnabled_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.AddMeshMaterial
// [0x00820102] 
// Parameters infos:
// class USkeletalMeshComponent*  InMesh                         ( CPF_Parm | CPF_EditInline )

void ATGRealMechaBase::AddMeshMaterial ( class USkeletalMeshComponent* InMesh )
{
	static UFunction* pFnAddMeshMaterial = NULL;

	if ( ! pFnAddMeshMaterial )
		pFnAddMeshMaterial = (UFunction*) UObject::GObjObjects()->Data[ 210360 ];

	ATGRealMechaBase_execAddMeshMaterial_Parms AddMeshMaterial_Parms;
	AddMeshMaterial_Parms.InMesh = InMesh;

	this->ProcessEvent ( pFnAddMeshMaterial, &AddMeshMaterial_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.NotifyWeaponMeshAttached
// [0x00020102] 
// Parameters infos:
// class USkeletalMeshComponent*  WeaponMesh                     ( CPF_Parm | CPF_EditInline )

void ATGRealMechaBase::NotifyWeaponMeshAttached ( class USkeletalMeshComponent* WeaponMesh )
{
	static UFunction* pFnNotifyWeaponMeshAttached = NULL;

	if ( ! pFnNotifyWeaponMeshAttached )
		pFnNotifyWeaponMeshAttached = (UFunction*) UObject::GObjObjects()->Data[ 210358 ];

	ATGRealMechaBase_execNotifyWeaponMeshAttached_Parms NotifyWeaponMeshAttached_Parms;
	NotifyWeaponMeshAttached_Parms.WeaponMesh = WeaponMesh;

	this->ProcessEvent ( pFnNotifyWeaponMeshAttached, &NotifyWeaponMeshAttached_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.SetupBodyMaterialInstance
// [0x00020102] 
// Parameters infos:

void ATGRealMechaBase::SetupBodyMaterialInstance ( )
{
	static UFunction* pFnSetupBodyMaterialInstance = NULL;

	if ( ! pFnSetupBodyMaterialInstance )
		pFnSetupBodyMaterialInstance = (UFunction*) UObject::GObjObjects()->Data[ 210357 ];

	ATGRealMechaBase_execSetupBodyMaterialInstance_Parms SetupBodyMaterialInstance_Parms;

	this->ProcessEvent ( pFnSetupBodyMaterialInstance, &SetupBodyMaterialInstance_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.WeaponAttachmentChanged
// [0x00020102] 
// Parameters infos:

void ATGRealMechaBase::WeaponAttachmentChanged ( )
{
	static UFunction* pFnWeaponAttachmentChanged = NULL;

	if ( ! pFnWeaponAttachmentChanged )
		pFnWeaponAttachmentChanged = (UFunction*) UObject::GObjObjects()->Data[ 210355 ];

	ATGRealMechaBase_execWeaponAttachmentChanged_Parms WeaponAttachmentChanged_Parms;

	this->ProcessEvent ( pFnWeaponAttachmentChanged, &WeaponAttachmentChanged_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.OnInventoryManagerNotification
// [0x00020102] 
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGRealMechaBase::OnInventoryManagerNotification ( struct FName VarName )
{
	static UFunction* pFnOnInventoryManagerNotification = NULL;

	if ( ! pFnOnInventoryManagerNotification )
		pFnOnInventoryManagerNotification = (UFunction*) UObject::GObjObjects()->Data[ 210353 ];

	ATGRealMechaBase_execOnInventoryManagerNotification_Parms OnInventoryManagerNotification_Parms;
	memcpy ( &OnInventoryManagerNotification_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnOnInventoryManagerNotification, &OnInventoryManagerNotification_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.OnWeaponNotification
// [0x00020102] 
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGRealMechaBase::OnWeaponNotification ( struct FName VarName )
{
	static UFunction* pFnOnWeaponNotification = NULL;

	if ( ! pFnOnWeaponNotification )
		pFnOnWeaponNotification = (UFunction*) UObject::GObjObjects()->Data[ 210351 ];

	ATGRealMechaBase_execOnWeaponNotification_Parms OnWeaponNotification_Parms;
	memcpy ( &OnWeaponNotification_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnOnWeaponNotification, &OnWeaponNotification_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.WeaponFired
// [0x00024102] 
// Parameters infos:
// class AWeapon*                 InWeapon                       ( CPF_Parm )
// unsigned long                  bViaReplication                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void ATGRealMechaBase::WeaponFired ( class AWeapon* InWeapon, unsigned long bViaReplication, struct FVector HitLocation )
{
	static UFunction* pFnWeaponFired = NULL;

	if ( ! pFnWeaponFired )
		pFnWeaponFired = (UFunction*) UObject::GObjObjects()->Data[ 210347 ];

	ATGRealMechaBase_execWeaponFired_Parms WeaponFired_Parms;
	WeaponFired_Parms.InWeapon = InWeapon;
	WeaponFired_Parms.bViaReplication = bViaReplication;
	memcpy ( &WeaponFired_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnWeaponFired, &WeaponFired_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.ProjFlashLocationUpdated
// [0x00020102] 
// Parameters infos:
// struct FReplicatedEffectsInfo  InProjWeapEffectsInfo          ( CPF_Parm )
// unsigned long                  bViaReplication                ( CPF_Parm )

void ATGRealMechaBase::ProjFlashLocationUpdated ( struct FReplicatedEffectsInfo InProjWeapEffectsInfo, unsigned long bViaReplication )
{
	static UFunction* pFnProjFlashLocationUpdated = NULL;

	if ( ! pFnProjFlashLocationUpdated )
		pFnProjFlashLocationUpdated = (UFunction*) UObject::GObjObjects()->Data[ 210343 ];

	ATGRealMechaBase_execProjFlashLocationUpdated_Parms ProjFlashLocationUpdated_Parms;
	memcpy ( &ProjFlashLocationUpdated_Parms.InProjWeapEffectsInfo, &InProjWeapEffectsInfo, 0x10 );
	ProjFlashLocationUpdated_Parms.bViaReplication = bViaReplication;

	this->ProcessEvent ( pFnProjFlashLocationUpdated, &ProjFlashLocationUpdated_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.GunFlashLocationUpdated
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 InWeapon                       ( CPF_Parm )
// unsigned long                  bViaReplication                ( CPF_Parm )

void ATGRealMechaBase::GunFlashLocationUpdated ( class AWeapon* InWeapon, unsigned long bViaReplication )
{
	static UFunction* pFnGunFlashLocationUpdated = NULL;

	if ( ! pFnGunFlashLocationUpdated )
		pFnGunFlashLocationUpdated = (UFunction*) UObject::GObjObjects()->Data[ 210338 ];

	ATGRealMechaBase_execGunFlashLocationUpdated_Parms GunFlashLocationUpdated_Parms;
	GunFlashLocationUpdated_Parms.InWeapon = InWeapon;
	GunFlashLocationUpdated_Parms.bViaReplication = bViaReplication;

	this->ProcessEvent ( pFnGunFlashLocationUpdated, &GunFlashLocationUpdated_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.SetGunFlashLocation
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 Who                            ( CPF_Parm )
// unsigned char                  FireModeNum                    ( CPF_Parm )
// TArray< struct FVector >       NewLoc                         ( CPF_Parm | CPF_NeedCtorLink )

void ATGRealMechaBase::SetGunFlashLocation ( class AWeapon* Who, unsigned char FireModeNum, TArray< struct FVector > NewLoc )
{
	static UFunction* pFnSetGunFlashLocation = NULL;

	if ( ! pFnSetGunFlashLocation )
		pFnSetGunFlashLocation = (UFunction*) UObject::GObjObjects()->Data[ 210332 ];

	ATGRealMechaBase_execSetGunFlashLocation_Parms SetGunFlashLocation_Parms;
	SetGunFlashLocation_Parms.Who = Who;
	SetGunFlashLocation_Parms.FireModeNum = FireModeNum;
	memcpy ( &SetGunFlashLocation_Parms.NewLoc, &NewLoc, 0xC );

	this->ProcessEvent ( pFnSetGunFlashLocation, &SetGunFlashLocation_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.GetAttachedWeaponAttachmentByClass
// [0x00020102] 
// Parameters infos:
// class ATGMechaWeaponAttachment* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  AttachmentClass                ( CPF_Parm )

class ATGMechaWeaponAttachment* ATGRealMechaBase::GetAttachedWeaponAttachmentByClass ( class UClass* AttachmentClass )
{
	static UFunction* pFnGetAttachedWeaponAttachmentByClass = NULL;

	if ( ! pFnGetAttachedWeaponAttachmentByClass )
		pFnGetAttachedWeaponAttachmentByClass = (UFunction*) UObject::GObjObjects()->Data[ 210328 ];

	ATGRealMechaBase_execGetAttachedWeaponAttachmentByClass_Parms GetAttachedWeaponAttachmentByClass_Parms;
	GetAttachedWeaponAttachmentByClass_Parms.AttachmentClass = AttachmentClass;

	this->ProcessEvent ( pFnGetAttachedWeaponAttachmentByClass, &GetAttachedWeaponAttachmentByClass_Parms, NULL );

	return GetAttachedWeaponAttachmentByClass_Parms.ReturnValue;
};

// Function MechaGame.TGRealMechaBase.TakeDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ATGRealMechaBase::eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 210319 ];

	ATGRealMechaBase_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.Damage = Damage;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x20 );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.StopFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGRealMechaBase::StopFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStopFire = NULL;

	if ( ! pFnStopFire )
		pFnStopFire = (UFunction*) UObject::GObjObjects()->Data[ 210317 ];

	ATGRealMechaBase_execStopFire_Parms StopFire_Parms;
	StopFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStopFire, &StopFire_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.NotifyWeaponStartFire
// [0x00020002] 
// Parameters infos:
// unsigned long                  bStartFire                     ( CPF_Parm )
// class ATGMechaWeapon*          MechaWeapon                    ( CPF_Parm )

void ATGRealMechaBase::NotifyWeaponStartFire ( unsigned long bStartFire, class ATGMechaWeapon* MechaWeapon )
{
	static UFunction* pFnNotifyWeaponStartFire = NULL;

	if ( ! pFnNotifyWeaponStartFire )
		pFnNotifyWeaponStartFire = (UFunction*) UObject::GObjObjects()->Data[ 210313 ];

	ATGRealMechaBase_execNotifyWeaponStartFire_Parms NotifyWeaponStartFire_Parms;
	NotifyWeaponStartFire_Parms.bStartFire = bStartFire;
	NotifyWeaponStartFire_Parms.MechaWeapon = MechaWeapon;

	this->ProcessEvent ( pFnNotifyWeaponStartFire, &NotifyWeaponStartFire_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.SetWeaponFired
// [0x00020000] 
// Parameters infos:
// unsigned long                  bMainWeapon                    ( CPF_Parm )

void ATGRealMechaBase::SetWeaponFired ( unsigned long bMainWeapon )
{
	static UFunction* pFnSetWeaponFired = NULL;

	if ( ! pFnSetWeaponFired )
		pFnSetWeaponFired = (UFunction*) UObject::GObjObjects()->Data[ 210311 ];

	ATGRealMechaBase_execSetWeaponFired_Parms SetWeaponFired_Parms;
	SetWeaponFired_Parms.bMainWeapon = bMainWeapon;

	this->ProcessEvent ( pFnSetWeaponFired, &SetWeaponFired_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.StopFiring
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGRealMechaBase::StopFiring ( )
{
	static UFunction* pFnStopFiring = NULL;

	if ( ! pFnStopFiring )
		pFnStopFiring = (UFunction*) UObject::GObjObjects()->Data[ 210309 ];

	ATGRealMechaBase_execStopFiring_Parms StopFiring_Parms;

	this->ProcessEvent ( pFnStopFiring, &StopFiring_Parms, NULL );

	return StopFiring_Parms.ReturnValue;
};

// Function MechaGame.TGRealMechaBase.StartFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGRealMechaBase::StartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 210305 ];

	ATGRealMechaBase_execStartFire_Parms StartFire_Parms;
	StartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.ReloadWeapon
// [0x00020102] 
// Parameters infos:

void ATGRealMechaBase::ReloadWeapon ( )
{
	static UFunction* pFnReloadWeapon = NULL;

	if ( ! pFnReloadWeapon )
		pFnReloadWeapon = (UFunction*) UObject::GObjObjects()->Data[ 210304 ];

	ATGRealMechaBase_execReloadWeapon_Parms ReloadWeapon_Parms;

	this->ProcessEvent ( pFnReloadWeapon, &ReloadWeapon_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.ActiveWeapons
// [0x00020002] 
// Parameters infos:

void ATGRealMechaBase::ActiveWeapons ( )
{
	static UFunction* pFnActiveWeapons = NULL;

	if ( ! pFnActiveWeapons )
		pFnActiveWeapons = (UFunction*) UObject::GObjObjects()->Data[ 210303 ];

	ATGRealMechaBase_execActiveWeapons_Parms ActiveWeapons_Parms;

	this->ProcessEvent ( pFnActiveWeapons, &ActiveWeapons_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.AddAllMechaInventory
// [0x00020002] 
// Parameters infos:

void ATGRealMechaBase::AddAllMechaInventory ( )
{
	static UFunction* pFnAddAllMechaInventory = NULL;

	if ( ! pFnAddAllMechaInventory )
		pFnAddAllMechaInventory = (UFunction*) UObject::GObjObjects()->Data[ 210301 ];

	ATGRealMechaBase_execAddAllMechaInventory_Parms AddAllMechaInventory_Parms;

	this->ProcessEvent ( pFnAddAllMechaInventory, &AddAllMechaInventory_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.DriverEnter
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

bool ATGRealMechaBase::DriverEnter ( class APawn* P )
{
	static UFunction* pFnDriverEnter = NULL;

	if ( ! pFnDriverEnter )
		pFnDriverEnter = (UFunction*) UObject::GObjObjects()->Data[ 210297 ];

	ATGRealMechaBase_execDriverEnter_Parms DriverEnter_Parms;
	DriverEnter_Parms.P = P;

	this->ProcessEvent ( pFnDriverEnter, &DriverEnter_Parms, NULL );

	return DriverEnter_Parms.ReturnValue;
};

// Function MechaGame.TGRealMechaBase.Destroyed
// [0x00020102] 
// Parameters infos:

void ATGRealMechaBase::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 210294 ];

	ATGRealMechaBase_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGRealMechaBase::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 210292 ];

	ATGRealMechaBase_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.PreBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGRealMechaBase::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 210291 ];

	ATGRealMechaBase_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function MechaGame.TGRealMechaBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGRealMechaBase::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 210289 ];

	ATGRealMechaBase_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerController.TimerCountDown
// [0x00020002] 
// Parameters infos:

void ATGMechaDMPlayerController::TimerCountDown ( )
{
	static UFunction* pFnTimerCountDown = NULL;

	if ( ! pFnTimerCountDown )
		pFnTimerCountDown = (UFunction*) UObject::GObjObjects()->Data[ 212530 ];

	ATGMechaDMPlayerController_execTimerCountDown_Parms TimerCountDown_Parms;

	this->ProcessEvent ( pFnTimerCountDown, &TimerCountDown_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerController.ClientFrozenCountDown
// [0x010201C2] 
// Parameters infos:
// int                            CountDown                      ( CPF_Parm )

void ATGMechaDMPlayerController::ClientFrozenCountDown ( int CountDown )
{
	static UFunction* pFnClientFrozenCountDown = NULL;

	if ( ! pFnClientFrozenCountDown )
		pFnClientFrozenCountDown = (UFunction*) UObject::GObjObjects()->Data[ 212528 ];

	ATGMechaDMPlayerController_execClientFrozenCountDown_Parms ClientFrozenCountDown_Parms;
	ClientFrozenCountDown_Parms.CountDown = CountDown;

	this->ProcessEvent ( pFnClientFrozenCountDown, &ClientFrozenCountDown_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerController.ReceiveTextInfo
// [0x010201C2] 
// Parameters infos:
// unsigned char                  Type                           ( CPF_Parm )

void ATGMechaDMPlayerController::ReceiveTextInfo ( unsigned char Type )
{
	static UFunction* pFnReceiveTextInfo = NULL;

	if ( ! pFnReceiveTextInfo )
		pFnReceiveTextInfo = (UFunction*) UObject::GObjObjects()->Data[ 212525 ];

	ATGMechaDMPlayerController_execReceiveTextInfo_Parms ReceiveTextInfo_Parms;
	ReceiveTextInfo_Parms.Type = Type;

	this->ProcessEvent ( pFnReceiveTextInfo, &ReceiveTextInfo_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerController.ReceiveParticleMessage
// [0x010201C2] 
// Parameters infos:
// int                            MessageSwitch                  ( CPF_Parm )

void ATGMechaDMPlayerController::ReceiveParticleMessage ( int MessageSwitch )
{
	static UFunction* pFnReceiveParticleMessage = NULL;

	if ( ! pFnReceiveParticleMessage )
		pFnReceiveParticleMessage = (UFunction*) UObject::GObjObjects()->Data[ 212521 ];

	ATGMechaDMPlayerController_execReceiveParticleMessage_Parms ReceiveParticleMessage_Parms;
	ReceiveParticleMessage_Parms.MessageSwitch = MessageSwitch;

	this->ProcessEvent ( pFnReceiveParticleMessage, &ReceiveParticleMessage_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerController.CheckAttackerCountInBaseVolume
// [0x00020102] 
// Parameters infos:

void ATGMechaDMPlayerController::CheckAttackerCountInBaseVolume ( )
{
	static UFunction* pFnCheckAttackerCountInBaseVolume = NULL;

	if ( ! pFnCheckAttackerCountInBaseVolume )
		pFnCheckAttackerCountInBaseVolume = (UFunction*) UObject::GObjObjects()->Data[ 212518 ];

	ATGMechaDMPlayerController_execCheckAttackerCountInBaseVolume_Parms CheckAttackerCountInBaseVolume_Parms;

	this->ProcessEvent ( pFnCheckAttackerCountInBaseVolume, &CheckAttackerCountInBaseVolume_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerController.SetupMechaVolume
// [0x00020102] 
// Parameters infos:

void ATGMechaDMPlayerController::SetupMechaVolume ( )
{
	static UFunction* pFnSetupMechaVolume = NULL;

	if ( ! pFnSetupMechaVolume )
		pFnSetupMechaVolume = (UFunction*) UObject::GObjObjects()->Data[ 212516 ];

	ATGMechaDMPlayerController_execSetupMechaVolume_Parms SetupMechaVolume_Parms;

	this->ProcessEvent ( pFnSetupMechaVolume, &SetupMechaVolume_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerController.IsDefender
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaDMPlayerController::IsDefender ( )
{
	static UFunction* pFnIsDefender = NULL;

	if ( ! pFnIsDefender )
		pFnIsDefender = (UFunction*) UObject::GObjObjects()->Data[ 208695 ];

	ATGMechaDMPlayerController_execIsDefender_Parms IsDefender_Parms;

	this->ProcessEvent ( pFnIsDefender, &IsDefender_Parms, NULL );

	return IsDefender_Parms.ReturnValue;
};

// Function MechaGame.TGMechaDMPlayerController.IsAttacker
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaDMPlayerController::IsAttacker ( )
{
	static UFunction* pFnIsAttacker = NULL;

	if ( ! pFnIsAttacker )
		pFnIsAttacker = (UFunction*) UObject::GObjObjects()->Data[ 211809 ];

	ATGMechaDMPlayerController_execIsAttacker_Parms IsAttacker_Parms;

	this->ProcessEvent ( pFnIsAttacker, &IsAttacker_Parms, NULL );

	return IsAttacker_Parms.ReturnValue;
};

// Function MechaGame.TGMechaDMPlayerController.GetDamageScaleDecrement
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGMechaDMPlayerController::GetDamageScaleDecrement ( )
{
	static UFunction* pFnGetDamageScaleDecrement = NULL;

	if ( ! pFnGetDamageScaleDecrement )
		pFnGetDamageScaleDecrement = (UFunction*) UObject::GObjObjects()->Data[ 212509 ];

	ATGMechaDMPlayerController_execGetDamageScaleDecrement_Parms GetDamageScaleDecrement_Parms;

	this->ProcessEvent ( pFnGetDamageScaleDecrement, &GetDamageScaleDecrement_Parms, NULL );

	return GetDamageScaleDecrement_Parms.ReturnValue;
};

// Function MechaGame.TGMechaDMPlayerController.UseXPSkill
// [0x00020002] 
// Parameters infos:

void ATGMechaDMPlayerController::UseXPSkill ( )
{
	static UFunction* pFnUseXPSkill = NULL;

	if ( ! pFnUseXPSkill )
		pFnUseXPSkill = (UFunction*) UObject::GObjObjects()->Data[ 212507 ];

	ATGMechaDMPlayerController_execUseXPSkill_Parms UseXPSkill_Parms;

	this->ProcessEvent ( pFnUseXPSkill, &UseXPSkill_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerController.ShouldDrawActorOverlays
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaDMPlayerController::ShouldDrawActorOverlays ( )
{
	static UFunction* pFnShouldDrawActorOverlays = NULL;

	if ( ! pFnShouldDrawActorOverlays )
		pFnShouldDrawActorOverlays = (UFunction*) UObject::GObjObjects()->Data[ 212505 ];

	ATGMechaDMPlayerController_execShouldDrawActorOverlays_Parms ShouldDrawActorOverlays_Parms;

	this->ProcessEvent ( pFnShouldDrawActorOverlays, &ShouldDrawActorOverlays_Parms, NULL );

	return ShouldDrawActorOverlays_Parms.ReturnValue;
};

// Function MechaGame.TGMechaDMPlayerController.ClientSetHUD
// [0x010201C2] 
// Parameters infos:
// class UClass*                  newHUDType                     ( CPF_Parm )

void ATGMechaDMPlayerController::ClientSetHUD ( class UClass* newHUDType )
{
	static UFunction* pFnClientSetHUD = NULL;

	if ( ! pFnClientSetHUD )
		pFnClientSetHUD = (UFunction*) UObject::GObjObjects()->Data[ 212501 ];

	ATGMechaDMPlayerController_execClientSetHUD_Parms ClientSetHUD_Parms;
	ClientSetHUD_Parms.newHUDType = newHUDType;

	this->ProcessEvent ( pFnClientSetHUD, &ClientSetHUD_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaDMPlayerController::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 212500 ];

	ATGMechaDMPlayerController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGSeqEvent_ItemHealthChanged.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGSeqEvent_ItemHealthChanged::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 215966 ];

	UTGSeqEvent_ItemHealthChanged_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function MechaGame.MechaTextMessage.GetColorEx
// [0x00026002] 
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )

struct FColor UMechaTextMessage::GetColorEx ( int Switch )
{
	static UFunction* pFnGetColorEx = NULL;

	if ( ! pFnGetColorEx )
		pFnGetColorEx = (UFunction*) UObject::GObjObjects()->Data[ 210118 ];

	UMechaTextMessage_execGetColorEx_Parms GetColorEx_Parms;
	GetColorEx_Parms.Switch = Switch;

	this->ProcessEvent ( pFnGetColorEx, &GetColorEx_Parms, NULL );

	return GetColorEx_Parms.ReturnValue;
};

// Function MechaGame.MechaTextMessage.ClientReceiveEx
// [0x00026002] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// int                            NumValue1                      ( CPF_OptionalParm | CPF_Parm )
// int                            NumValue2                      ( CPF_OptionalParm | CPF_Parm )
// struct FString                 StrValue                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UMechaTextMessage::ClientReceiveEx ( class APlayerController* P, int Switch, int NumValue1, int NumValue2, struct FString StrValue, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceiveEx = NULL;

	if ( ! pFnClientReceiveEx )
		pFnClientReceiveEx = (UFunction*) UObject::GObjObjects()->Data[ 210110 ];

	UMechaTextMessage_execClientReceiveEx_Parms ClientReceiveEx_Parms;
	ClientReceiveEx_Parms.P = P;
	ClientReceiveEx_Parms.Switch = Switch;
	ClientReceiveEx_Parms.NumValue1 = NumValue1;
	ClientReceiveEx_Parms.NumValue2 = NumValue2;
	memcpy ( &ClientReceiveEx_Parms.StrValue, &StrValue, 0xC );
	ClientReceiveEx_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceiveEx, &ClientReceiveEx_Parms, NULL );
};

// Function MechaGame.MechaTextMessage.GetStringEx
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// int                            NumValue1                      ( CPF_OptionalParm | CPF_Parm )
// int                            NumValue2                      ( CPF_OptionalParm | CPF_Parm )
// struct FString                 StrValue                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UMechaTextMessage::GetStringEx ( int Switch, int NumValue1, int NumValue2, struct FString StrValue, class UObject* OptionalObject )
{
	static UFunction* pFnGetStringEx = NULL;

	if ( ! pFnGetStringEx )
		pFnGetStringEx = (UFunction*) UObject::GObjObjects()->Data[ 210102 ];

	UMechaTextMessage_execGetStringEx_Parms GetStringEx_Parms;
	GetStringEx_Parms.Switch = Switch;
	GetStringEx_Parms.NumValue1 = NumValue1;
	GetStringEx_Parms.NumValue2 = NumValue2;
	memcpy ( &GetStringEx_Parms.StrValue, &StrValue, 0xC );
	GetStringEx_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetStringEx, &GetStringEx_Parms, NULL );

	return GetStringEx_Parms.ReturnValue;
};

// Function MechaGame.TGMechaDMGameReplicationInfo.AddRemainingTimeFeedback
// [0x00020102] 
// Parameters infos:
// int                            Time                           ( CPF_Parm )

void ATGMechaDMGameReplicationInfo::AddRemainingTimeFeedback ( int Time )
{
	static UFunction* pFnAddRemainingTimeFeedback = NULL;

	if ( ! pFnAddRemainingTimeFeedback )
		pFnAddRemainingTimeFeedback = (UFunction*) UObject::GObjObjects()->Data[ 211814 ];

	ATGMechaDMGameReplicationInfo_execAddRemainingTimeFeedback_Parms AddRemainingTimeFeedback_Parms;
	AddRemainingTimeFeedback_Parms.Time = Time;

	this->ProcessEvent ( pFnAddRemainingTimeFeedback, &AddRemainingTimeFeedback_Parms, NULL );
};

// Function MechaGame.TGMechaDMGameReplicationInfo.AddTextInfo
// [0x00020102] 
// Parameters infos:
// unsigned char                  Type                           ( CPF_Parm )

void ATGMechaDMGameReplicationInfo::AddTextInfo ( unsigned char Type )
{
	static UFunction* pFnAddTextInfo = NULL;

	if ( ! pFnAddTextInfo )
		pFnAddTextInfo = (UFunction*) UObject::GObjObjects()->Data[ 211811 ];

	ATGMechaDMGameReplicationInfo_execAddTextInfo_Parms AddTextInfo_Parms;
	AddTextInfo_Parms.Type = Type;

	this->ProcessEvent ( pFnAddTextInfo, &AddTextInfo_Parms, NULL );
};

// Function MechaGame.TGMechaDMGameReplicationInfo.NotifyDoorOpenProgress
// [0x00020102] 
// Parameters infos:

void ATGMechaDMGameReplicationInfo::NotifyDoorOpenProgress ( )
{
	static UFunction* pFnNotifyDoorOpenProgress = NULL;

	if ( ! pFnNotifyDoorOpenProgress )
		pFnNotifyDoorOpenProgress = (UFunction*) UObject::GObjObjects()->Data[ 211806 ];

	ATGMechaDMGameReplicationInfo_execNotifyDoorOpenProgress_Parms NotifyDoorOpenProgress_Parms;

	this->ProcessEvent ( pFnNotifyDoorOpenProgress, &NotifyDoorOpenProgress_Parms, NULL );
};

// Function MechaGame.TGMechaDMGameReplicationInfo.IsDoorOpened
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaDMGameReplicationInfo::IsDoorOpened ( )
{
	static UFunction* pFnIsDoorOpened = NULL;

	if ( ! pFnIsDoorOpened )
		pFnIsDoorOpened = (UFunction*) UObject::GObjObjects()->Data[ 208757 ];

	ATGMechaDMGameReplicationInfo_execIsDoorOpened_Parms IsDoorOpened_Parms;

	this->ProcessEvent ( pFnIsDoorOpened, &IsDoorOpened_Parms, NULL );

	return IsDoorOpened_Parms.ReturnValue;
};

// Function MechaGame.TGMechaDMGameReplicationInfo.NotifyDefenceProgresUpdate
// [0x00020102] 
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGMechaDMGameReplicationInfo::NotifyDefenceProgresUpdate ( struct FName VarName )
{
	static UFunction* pFnNotifyDefenceProgresUpdate = NULL;

	if ( ! pFnNotifyDefenceProgresUpdate )
		pFnNotifyDefenceProgresUpdate = (UFunction*) UObject::GObjObjects()->Data[ 211802 ];

	ATGMechaDMGameReplicationInfo_execNotifyDefenceProgresUpdate_Parms NotifyDefenceProgresUpdate_Parms;
	memcpy ( &NotifyDefenceProgresUpdate_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnNotifyDefenceProgresUpdate, &NotifyDefenceProgresUpdate_Parms, NULL );
};

// Function MechaGame.TGMechaDMGameReplicationInfo.NotifyDefenceLevelUp
// [0x00020102] 
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGMechaDMGameReplicationInfo::NotifyDefenceLevelUp ( struct FName VarName )
{
	static UFunction* pFnNotifyDefenceLevelUp = NULL;

	if ( ! pFnNotifyDefenceLevelUp )
		pFnNotifyDefenceLevelUp = (UFunction*) UObject::GObjObjects()->Data[ 211797 ];

	ATGMechaDMGameReplicationInfo_execNotifyDefenceLevelUp_Parms NotifyDefenceLevelUp_Parms;
	memcpy ( &NotifyDefenceLevelUp_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnNotifyDefenceLevelUp, &NotifyDefenceLevelUp_Parms, NULL );
};

// Function MechaGame.TGMechaDMGameReplicationInfo.CalcDefenceLevel
// [0x00020002] 
// Parameters infos:

void ATGMechaDMGameReplicationInfo::CalcDefenceLevel ( )
{
	static UFunction* pFnCalcDefenceLevel = NULL;

	if ( ! pFnCalcDefenceLevel )
		pFnCalcDefenceLevel = (UFunction*) UObject::GObjObjects()->Data[ 211794 ];

	ATGMechaDMGameReplicationInfo_execCalcDefenceLevel_Parms CalcDefenceLevel_Parms;

	this->ProcessEvent ( pFnCalcDefenceLevel, &CalcDefenceLevel_Parms, NULL );
};

// Function MechaGame.TGMechaDMGameReplicationInfo.CheckKillDefencerCauseBaseDamage
// [0x00020002] 
// Parameters infos:

void ATGMechaDMGameReplicationInfo::CheckKillDefencerCauseBaseDamage ( )
{
	static UFunction* pFnCheckKillDefencerCauseBaseDamage = NULL;

	if ( ! pFnCheckKillDefencerCauseBaseDamage )
		pFnCheckKillDefencerCauseBaseDamage = (UFunction*) UObject::GObjObjects()->Data[ 211793 ];

	ATGMechaDMGameReplicationInfo_execCheckKillDefencerCauseBaseDamage_Parms CheckKillDefencerCauseBaseDamage_Parms;

	this->ProcessEvent ( pFnCheckKillDefencerCauseBaseDamage, &CheckKillDefencerCauseBaseDamage_Parms, NULL );
};

// Function MechaGame.TGMechaDMGameReplicationInfo.AddTeamKill
// [0x00020002] 
// Parameters infos:
// unsigned char                  KillerTeamIndex                ( CPF_Parm )
// unsigned char                  KillerMechaType                ( CPF_Parm )

void ATGMechaDMGameReplicationInfo::AddTeamKill ( unsigned char KillerTeamIndex, unsigned char KillerMechaType )
{
	static UFunction* pFnAddTeamKill = NULL;

	if ( ! pFnAddTeamKill )
		pFnAddTeamKill = (UFunction*) UObject::GObjObjects()->Data[ 211790 ];

	ATGMechaDMGameReplicationInfo_execAddTeamKill_Parms AddTeamKill_Parms;
	AddTeamKill_Parms.KillerTeamIndex = KillerTeamIndex;
	AddTeamKill_Parms.KillerMechaType = KillerMechaType;

	this->ProcessEvent ( pFnAddTeamKill, &AddTeamKill_Parms, NULL );
};

// Function MechaGame.TGMechaDMGameReplicationInfo.ClientRoundClear
// [0x00020102] 
// Parameters infos:

void ATGMechaDMGameReplicationInfo::ClientRoundClear ( )
{
	static UFunction* pFnClientRoundClear = NULL;

	if ( ! pFnClientRoundClear )
		pFnClientRoundClear = (UFunction*) UObject::GObjObjects()->Data[ 211789 ];

	ATGMechaDMGameReplicationInfo_execClientRoundClear_Parms ClientRoundClear_Parms;

	this->ProcessEvent ( pFnClientRoundClear, &ClientRoundClear_Parms, NULL );
};

// Function MechaGame.TGMechaDMGameReplicationInfo.RoundClear
// [0x00020002] 
// Parameters infos:

void ATGMechaDMGameReplicationInfo::RoundClear ( )
{
	static UFunction* pFnRoundClear = NULL;

	if ( ! pFnRoundClear )
		pFnRoundClear = (UFunction*) UObject::GObjObjects()->Data[ 211788 ];

	ATGMechaDMGameReplicationInfo_execRoundClear_Parms RoundClear_Parms;

	this->ProcessEvent ( pFnRoundClear, &RoundClear_Parms, NULL );
};

// Function MechaGame.TGMechaDMGameReplicationInfo.Timer
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaDMGameReplicationInfo::eventTimer ( )
{
	static UFunction* pFnTimer = NULL;

	if ( ! pFnTimer )
		pFnTimer = (UFunction*) UObject::GObjObjects()->Data[ 211787 ];

	ATGMechaDMGameReplicationInfo_eventTimer_Parms Timer_Parms;

	this->ProcessEvent ( pFnTimer, &Timer_Parms, NULL );
};

// Function MechaGame.TGMechaDMGameReplicationInfo.InOrder
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerReplicationInfo*  P1                             ( CPF_Parm )
// class APlayerReplicationInfo*  P2                             ( CPF_Parm )

bool ATGMechaDMGameReplicationInfo::InOrder ( class APlayerReplicationInfo* P1, class APlayerReplicationInfo* P2 )
{
	static UFunction* pFnInOrder = NULL;

	if ( ! pFnInOrder )
		pFnInOrder = (UFunction*) UObject::GObjObjects()->Data[ 211781 ];

	ATGMechaDMGameReplicationInfo_execInOrder_Parms InOrder_Parms;
	InOrder_Parms.P1 = P1;
	InOrder_Parms.P2 = P2;

	this->ProcessEvent ( pFnInOrder, &InOrder_Parms, NULL );

	return InOrder_Parms.ReturnValue;
};

// Function MechaGame.TGMechaDMGameReplicationInfo.ProcessCharacterData
// [0x00024120] 
// Parameters infos:
// class ATGPlayerReplicationInfo* PRI                            ( CPF_Parm )
// unsigned long                  bTeamChange                    ( CPF_OptionalParm | CPF_Parm )

void ATGMechaDMGameReplicationInfo::ProcessCharacterData ( class ATGPlayerReplicationInfo* PRI, unsigned long bTeamChange )
{
	static UFunction* pFnProcessCharacterData = NULL;

	if ( ! pFnProcessCharacterData )
		pFnProcessCharacterData = (UFunction*) UObject::GObjObjects()->Data[ 211778 ];

	ATGMechaDMGameReplicationInfo_execProcessCharacterData_Parms ProcessCharacterData_Parms;
	ProcessCharacterData_Parms.PRI = PRI;
	ProcessCharacterData_Parms.bTeamChange = bTeamChange;

	this->ProcessEvent ( pFnProcessCharacterData, &ProcessCharacterData_Parms, NULL );
};

// Function MechaGame.TGMechaDMGameReplicationInfo.BeginProcessCharacterData
// [0x00024100] 
// Parameters infos:
// class ATGPlayerReplicationInfo* PRI                            ( CPF_Parm )
// unsigned long                  bTeamChange                    ( CPF_OptionalParm | CPF_Parm )

void ATGMechaDMGameReplicationInfo::BeginProcessCharacterData ( class ATGPlayerReplicationInfo* PRI, unsigned long bTeamChange )
{
	static UFunction* pFnBeginProcessCharacterData = NULL;

	if ( ! pFnBeginProcessCharacterData )
		pFnBeginProcessCharacterData = (UFunction*) UObject::GObjObjects()->Data[ 211775 ];

	ATGMechaDMGameReplicationInfo_execBeginProcessCharacterData_Parms BeginProcessCharacterData_Parms;
	BeginProcessCharacterData_Parms.PRI = PRI;
	BeginProcessCharacterData_Parms.bTeamChange = bTeamChange;

	this->ProcessEvent ( pFnBeginProcessCharacterData, &BeginProcessCharacterData_Parms, NULL );
};

// Function MechaGame.TGMechaDMGameReplicationInfo.StartProcessingCharacterData
// [0x00020100] 
// Parameters infos:

void ATGMechaDMGameReplicationInfo::StartProcessingCharacterData ( )
{
	static UFunction* pFnStartProcessingCharacterData = NULL;

	if ( ! pFnStartProcessingCharacterData )
		pFnStartProcessingCharacterData = (UFunction*) UObject::GObjObjects()->Data[ 211774 ];

	ATGMechaDMGameReplicationInfo_execStartProcessingCharacterData_Parms StartProcessingCharacterData_Parms;

	this->ProcessEvent ( pFnStartProcessingCharacterData, &StartProcessingCharacterData_Parms, NULL );
};

// Function MechaGame.TGMechaDMGameReplicationInfo.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaDMGameReplicationInfo::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 211773 ];

	ATGMechaDMGameReplicationInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaDMGameReplicationInfo.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGMechaDMGameReplicationInfo::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 211771 ];

	ATGMechaDMGameReplicationInfo_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function MechaGame.TGMechaGameHUD.AddKillFeedBackMessage
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

void ATGMechaGameHUD::AddKillFeedBackMessage ( class UClass* DamageType, int MultiKillLevel, int Priority, unsigned long bUseInPriority, class APlayerReplicationInfo* KillerPRI, class APlayerReplicationInfo* KilledPRI, int OneShotKillNum, unsigned long bIsOneShotDeath, unsigned long bThroughWall )
{
	static UFunction* pFnAddKillFeedBackMessage = NULL;

	if ( ! pFnAddKillFeedBackMessage )
		pFnAddKillFeedBackMessage = (UFunction*) UObject::GObjObjects()->Data[ 212036 ];

	ATGMechaGameHUD_execAddKillFeedBackMessage_Parms AddKillFeedBackMessage_Parms;
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

// Function MechaGame.TGMechaGameHUD.UpdateFeedbackScreenLoc
// [0x00820002] 
// Parameters infos:

void ATGMechaGameHUD::UpdateFeedbackScreenLoc ( )
{
	static UFunction* pFnUpdateFeedbackScreenLoc = NULL;

	if ( ! pFnUpdateFeedbackScreenLoc )
		pFnUpdateFeedbackScreenLoc = (UFunction*) UObject::GObjObjects()->Data[ 212028 ];

	ATGMechaGameHUD_execUpdateFeedbackScreenLoc_Parms UpdateFeedbackScreenLoc_Parms;

	this->ProcessEvent ( pFnUpdateFeedbackScreenLoc, &UpdateFeedbackScreenLoc_Parms, NULL );
};

// Function MechaGame.TGMechaGameHUD.AddRemainingTimeFeedback
// [0x00024002] 
// Parameters infos:
// int                            RemainingSeconds               ( CPF_OptionalParm | CPF_Parm )

void ATGMechaGameHUD::AddRemainingTimeFeedback ( int RemainingSeconds )
{
	static UFunction* pFnAddRemainingTimeFeedback = NULL;

	if ( ! pFnAddRemainingTimeFeedback )
		pFnAddRemainingTimeFeedback = (UFunction*) UObject::GObjObjects()->Data[ 212017 ];

	ATGMechaGameHUD_execAddRemainingTimeFeedback_Parms AddRemainingTimeFeedback_Parms;
	AddRemainingTimeFeedback_Parms.RemainingSeconds = RemainingSeconds;

	this->ProcessEvent ( pFnAddRemainingTimeFeedback, &AddRemainingTimeFeedback_Parms, NULL );
};

// Function MechaGame.TGMechaGameHUD.AddAssistantFeedback
// [0x00020002] 
// Parameters infos:

void ATGMechaGameHUD::AddAssistantFeedback ( )
{
	static UFunction* pFnAddAssistantFeedback = NULL;

	if ( ! pFnAddAssistantFeedback )
		pFnAddAssistantFeedback = (UFunction*) UObject::GObjObjects()->Data[ 212015 ];

	ATGMechaGameHUD_execAddAssistantFeedback_Parms AddAssistantFeedback_Parms;

	this->ProcessEvent ( pFnAddAssistantFeedback, &AddAssistantFeedback_Parms, NULL );
};

// Function MechaGame.TGMechaGameHUD.NotifyFrozen
// [0x00020002] 
// Parameters infos:

void ATGMechaGameHUD::NotifyFrozen ( )
{
	static UFunction* pFnNotifyFrozen = NULL;

	if ( ! pFnNotifyFrozen )
		pFnNotifyFrozen = (UFunction*) UObject::GObjObjects()->Data[ 212013 ];

	ATGMechaGameHUD_execNotifyFrozen_Parms NotifyFrozen_Parms;

	this->ProcessEvent ( pFnNotifyFrozen, &NotifyFrozen_Parms, NULL );
};

// Function MechaGame.TGMechaGameHUD.ClearDriftingXPSkill
// [0x00020002] 
// Parameters infos:

void ATGMechaGameHUD::ClearDriftingXPSkill ( )
{
	static UFunction* pFnClearDriftingXPSkill = NULL;

	if ( ! pFnClearDriftingXPSkill )
		pFnClearDriftingXPSkill = (UFunction*) UObject::GObjObjects()->Data[ 212012 ];

	ATGMechaGameHUD_execClearDriftingXPSkill_Parms ClearDriftingXPSkill_Parms;

	this->ProcessEvent ( pFnClearDriftingXPSkill, &ClearDriftingXPSkill_Parms, NULL );
};

// Function MechaGame.TGMechaGameHUD.StartDriftingXPSkill
// [0x00020002] 
// Parameters infos:

void ATGMechaGameHUD::StartDriftingXPSkill ( )
{
	static UFunction* pFnStartDriftingXPSkill = NULL;

	if ( ! pFnStartDriftingXPSkill )
		pFnStartDriftingXPSkill = (UFunction*) UObject::GObjObjects()->Data[ 212011 ];

	ATGMechaGameHUD_execStartDriftingXPSkill_Parms StartDriftingXPSkill_Parms;

	this->ProcessEvent ( pFnStartDriftingXPSkill, &StartDriftingXPSkill_Parms, NULL );
};

// Function MechaGame.TGMechaGameHUD.NotifyXPSkillStarted
// [0x00020002] 
// Parameters infos:

void ATGMechaGameHUD::NotifyXPSkillStarted ( )
{
	static UFunction* pFnNotifyXPSkillStarted = NULL;

	if ( ! pFnNotifyXPSkillStarted )
		pFnNotifyXPSkillStarted = (UFunction*) UObject::GObjObjects()->Data[ 212009 ];

	ATGMechaGameHUD_execNotifyXPSkillStarted_Parms NotifyXPSkillStarted_Parms;

	this->ProcessEvent ( pFnNotifyXPSkillStarted, &NotifyXPSkillStarted_Parms, NULL );
};

// Function MechaGame.TGMechaGameHUD.NotifyXPSkillUsable
// [0x00020002] 
// Parameters infos:

void ATGMechaGameHUD::NotifyXPSkillUsable ( )
{
	static UFunction* pFnNotifyXPSkillUsable = NULL;

	if ( ! pFnNotifyXPSkillUsable )
		pFnNotifyXPSkillUsable = (UFunction*) UObject::GObjObjects()->Data[ 212006 ];

	ATGMechaGameHUD_execNotifyXPSkillUsable_Parms NotifyXPSkillUsable_Parms;

	this->ProcessEvent ( pFnNotifyXPSkillUsable, &NotifyXPSkillUsable_Parms, NULL );
};

// Function MechaGame.TGMechaGameHUD.NotifyItemSmite
// [0x00020002] 
// Parameters infos:

void ATGMechaGameHUD::NotifyItemSmite ( )
{
	static UFunction* pFnNotifyItemSmite = NULL;

	if ( ! pFnNotifyItemSmite )
		pFnNotifyItemSmite = (UFunction*) UObject::GObjObjects()->Data[ 212004 ];

	ATGMechaGameHUD_execNotifyItemSmite_Parms NotifyItemSmite_Parms;

	this->ProcessEvent ( pFnNotifyItemSmite, &NotifyItemSmite_Parms, NULL );
};

// Function MechaGame.TGMechaGameHUD.NotifySmite
// [0x00020002] 
// Parameters infos:

void ATGMechaGameHUD::NotifySmite ( )
{
	static UFunction* pFnNotifySmite = NULL;

	if ( ! pFnNotifySmite )
		pFnNotifySmite = (UFunction*) UObject::GObjObjects()->Data[ 212003 ];

	ATGMechaGameHUD_execNotifySmite_Parms NotifySmite_Parms;

	this->ProcessEvent ( pFnNotifySmite, &NotifySmite_Parms, NULL );
};

// Function MechaGame.TGMechaGameHUD.DrawProgressBarEx
// [0x00020002] 
// Parameters infos:
// struct FVector2D               RelPos                         ( CPF_Parm )
// float                          ProgressPct                    ( CPF_Parm )
// class UTexture2D*              BGTex                          ( CPF_Parm )
// class UTexture2D*              BarTex                         ( CPF_Parm )
// struct FTextureCoordinates     BGCoords                       ( CPF_Parm )
// struct FTextureCoordinates     BarCoords                      ( CPF_Parm )
// struct FVector2D               BarOffset                      ( CPF_Parm )

void ATGMechaGameHUD::DrawProgressBarEx ( struct FVector2D RelPos, float ProgressPct, class UTexture2D* BGTex, class UTexture2D* BarTex, struct FTextureCoordinates BGCoords, struct FTextureCoordinates BarCoords, struct FVector2D BarOffset )
{
	static UFunction* pFnDrawProgressBarEx = NULL;

	if ( ! pFnDrawProgressBarEx )
		pFnDrawProgressBarEx = (UFunction*) UObject::GObjObjects()->Data[ 211993 ];

	ATGMechaGameHUD_execDrawProgressBarEx_Parms DrawProgressBarEx_Parms;
	memcpy ( &DrawProgressBarEx_Parms.RelPos, &RelPos, 0x8 );
	DrawProgressBarEx_Parms.ProgressPct = ProgressPct;
	DrawProgressBarEx_Parms.BGTex = BGTex;
	DrawProgressBarEx_Parms.BarTex = BarTex;
	memcpy ( &DrawProgressBarEx_Parms.BGCoords, &BGCoords, 0x10 );
	memcpy ( &DrawProgressBarEx_Parms.BarCoords, &BarCoords, 0x10 );
	memcpy ( &DrawProgressBarEx_Parms.BarOffset, &BarOffset, 0x8 );

	this->ProcessEvent ( pFnDrawProgressBarEx, &DrawProgressBarEx_Parms, NULL );
};

// Function MechaGame.TGMechaGameHUD.DrawLockWarning
// [0x00020002] 
// Parameters infos:

void ATGMechaGameHUD::DrawLockWarning ( )
{
	static UFunction* pFnDrawLockWarning = NULL;

	if ( ! pFnDrawLockWarning )
		pFnDrawLockWarning = (UFunction*) UObject::GObjObjects()->Data[ 211985 ];

	ATGMechaGameHUD_execDrawLockWarning_Parms DrawLockWarning_Parms;

	this->ProcessEvent ( pFnDrawLockWarning, &DrawLockWarning_Parms, NULL );
};

// Function MechaGame.TGMechaGameHUD.DrawDriftingEffect
// [0x00820002] 
// Parameters infos:

void ATGMechaGameHUD::DrawDriftingEffect ( )
{
	static UFunction* pFnDrawDriftingEffect = NULL;

	if ( ! pFnDrawDriftingEffect )
		pFnDrawDriftingEffect = (UFunction*) UObject::GObjObjects()->Data[ 211975 ];

	ATGMechaGameHUD_execDrawDriftingEffect_Parms DrawDriftingEffect_Parms;

	this->ProcessEvent ( pFnDrawDriftingEffect, &DrawDriftingEffect_Parms, NULL );
};

// Function MechaGame.TGMechaGameHUD.NotifyMechaHealthChange
// [0x00820002] 
// Parameters infos:
// class ATGRealMecha*            Mecha                          ( CPF_Parm )
// unsigned long                  bWeakPoint                     ( CPF_Parm )
// int                            HealthChange                   ( CPF_Parm )

void ATGMechaGameHUD::NotifyMechaHealthChange ( class ATGRealMecha* Mecha, unsigned long bWeakPoint, int HealthChange )
{
	static UFunction* pFnNotifyMechaHealthChange = NULL;

	if ( ! pFnNotifyMechaHealthChange )
		pFnNotifyMechaHealthChange = (UFunction*) UObject::GObjObjects()->Data[ 211953 ];

	ATGMechaGameHUD_execNotifyMechaHealthChange_Parms NotifyMechaHealthChange_Parms;
	NotifyMechaHealthChange_Parms.Mecha = Mecha;
	NotifyMechaHealthChange_Parms.bWeakPoint = bWeakPoint;
	NotifyMechaHealthChange_Parms.HealthChange = HealthChange;

	this->ProcessEvent ( pFnNotifyMechaHealthChange, &NotifyMechaHealthChange_Parms, NULL );
};

// Function MechaGame.TGMechaGameHUD.DrawMechaSelection
// [0x00820002] 
// Parameters infos:

void ATGMechaGameHUD::DrawMechaSelection ( )
{
	static UFunction* pFnDrawMechaSelection = NULL;

	if ( ! pFnDrawMechaSelection )
		pFnDrawMechaSelection = (UFunction*) UObject::GObjObjects()->Data[ 211922 ];

	ATGMechaGameHUD_execDrawMechaSelection_Parms DrawMechaSelection_Parms;

	this->ProcessEvent ( pFnDrawMechaSelection, &DrawMechaSelection_Parms, NULL );
};

// Function MechaGame.TGMechaGameHUD.DisplayHit
// [0x00020002] 
// Parameters infos:
// struct FVector                 AttackerPos                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void ATGMechaGameHUD::DisplayHit ( struct FVector AttackerPos, int Damage, class UClass* DamageType )
{
	static UFunction* pFnDisplayHit = NULL;

	if ( ! pFnDisplayHit )
		pFnDisplayHit = (UFunction*) UObject::GObjObjects()->Data[ 211917 ];

	ATGMechaGameHUD_execDisplayHit_Parms DisplayHit_Parms;
	memcpy ( &DisplayHit_Parms.AttackerPos, &AttackerPos, 0xC );
	DisplayHit_Parms.Damage = Damage;
	DisplayHit_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnDisplayHit, &DisplayHit_Parms, NULL );
};

// Function MechaGame.TGMechaGameHUD.DisplayACE
// [0x00020002] 
// Parameters infos:

void ATGMechaGameHUD::DisplayACE ( )
{
	static UFunction* pFnDisplayACE = NULL;

	if ( ! pFnDisplayACE )
		pFnDisplayACE = (UFunction*) UObject::GObjObjects()->Data[ 211916 ];

	ATGMechaGameHUD_execDisplayACE_Parms DisplayACE_Parms;

	this->ProcessEvent ( pFnDisplayACE, &DisplayACE_Parms, NULL );
};

// Function MechaGame.TGMechaGameHUD.DisplaySpectator
// [0x00020000] 
// Parameters infos:

void ATGMechaGameHUD::DisplaySpectator ( )
{
	static UFunction* pFnDisplaySpectator = NULL;

	if ( ! pFnDisplaySpectator )
		pFnDisplaySpectator = (UFunction*) UObject::GObjObjects()->Data[ 211915 ];

	ATGMechaGameHUD_execDisplaySpectator_Parms DisplaySpectator_Parms;

	this->ProcessEvent ( pFnDisplaySpectator, &DisplaySpectator_Parms, NULL );
};

// Function MechaGame.TGMechaGameHUD.DisplayAvatar
// [0x00020000] 
// Parameters infos:

void ATGMechaGameHUD::DisplayAvatar ( )
{
	static UFunction* pFnDisplayAvatar = NULL;

	if ( ! pFnDisplayAvatar )
		pFnDisplayAvatar = (UFunction*) UObject::GObjObjects()->Data[ 211914 ];

	ATGMechaGameHUD_execDisplayAvatar_Parms DisplayAvatar_Parms;

	this->ProcessEvent ( pFnDisplayAvatar, &DisplayAvatar_Parms, NULL );
};

// Function MechaGame.TGMechaGameHUD.DrawLivingHud
// [0x00020002] 
// Parameters infos:

void ATGMechaGameHUD::DrawLivingHud ( )
{
	static UFunction* pFnDrawLivingHud = NULL;

	if ( ! pFnDrawLivingHud )
		pFnDrawLivingHud = (UFunction*) UObject::GObjObjects()->Data[ 211911 ];

	ATGMechaGameHUD_execDrawLivingHud_Parms DrawLivingHud_Parms;

	this->ProcessEvent ( pFnDrawLivingHud, &DrawLivingHud_Parms, NULL );
};

// Function MechaGame.MechaGameHUD.DrawObjective
// [0x00820102] 
// Parameters infos:
// class AMecha*                  Obj                            ( CPF_Parm )
// unsigned long                  bInSight                       ( CPF_Parm )
// unsigned long                  bEnemy                         ( CPF_Parm )

void AMechaGameHUD::DrawObjective ( class AMecha* Obj, unsigned long bInSight, unsigned long bEnemy )
{
	static UFunction* pFnDrawObjective = NULL;

	if ( ! pFnDrawObjective )
		pFnDrawObjective = (UFunction*) UObject::GObjObjects()->Data[ 208989 ];

	AMechaGameHUD_execDrawObjective_Parms DrawObjective_Parms;
	DrawObjective_Parms.Obj = Obj;
	DrawObjective_Parms.bInSight = bInSight;
	DrawObjective_Parms.bEnemy = bEnemy;

	this->ProcessEvent ( pFnDrawObjective, &DrawObjective_Parms, NULL );
};

// Function MechaGame.MechaGameHUD.DrawTextInfo
// [0x00020002] 
// Parameters infos:

void AMechaGameHUD::DrawTextInfo ( )
{
	static UFunction* pFnDrawTextInfo = NULL;

	if ( ! pFnDrawTextInfo )
		pFnDrawTextInfo = (UFunction*) UObject::GObjObjects()->Data[ 208982 ];

	AMechaGameHUD_execDrawTextInfo_Parms DrawTextInfo_Parms;

	this->ProcessEvent ( pFnDrawTextInfo, &DrawTextInfo_Parms, NULL );
};

// Function MechaGame.MechaGameHUD.AddTextInfo
// [0x00020002] 
// Parameters infos:
// unsigned char                  Type                           ( CPF_Parm )

void AMechaGameHUD::AddTextInfo ( unsigned char Type )
{
	static UFunction* pFnAddTextInfo = NULL;

	if ( ! pFnAddTextInfo )
		pFnAddTextInfo = (UFunction*) UObject::GObjObjects()->Data[ 208976 ];

	AMechaGameHUD_execAddTextInfo_Parms AddTextInfo_Parms;
	AddTextInfo_Parms.Type = Type;

	this->ProcessEvent ( pFnAddTextInfo, &AddTextInfo_Parms, NULL );
};

// Function MechaGame.MechaGameHUD.DrawTextMessage
// [0x00820002] 
// Parameters infos:

void AMechaGameHUD::DrawTextMessage ( )
{
	static UFunction* pFnDrawTextMessage = NULL;

	if ( ! pFnDrawTextMessage )
		pFnDrawTextMessage = (UFunction*) UObject::GObjObjects()->Data[ 208966 ];

	AMechaGameHUD_execDrawTextMessage_Parms DrawTextMessage_Parms;

	this->ProcessEvent ( pFnDrawTextMessage, &DrawTextMessage_Parms, NULL );
};

// Function MechaGame.MechaGameHUD.AddTextMessage
// [0x00820002] 
// Parameters infos:
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FColor                  DrawColor                      ( CPF_Parm )

void AMechaGameHUD::AddTextMessage ( struct FString Message, struct FColor DrawColor )
{
	static UFunction* pFnAddTextMessage = NULL;

	if ( ! pFnAddTextMessage )
		pFnAddTextMessage = (UFunction*) UObject::GObjObjects()->Data[ 208956 ];

	AMechaGameHUD_execAddTextMessage_Parms AddTextMessage_Parms;
	memcpy ( &AddTextMessage_Parms.Message, &Message, 0xC );
	memcpy ( &AddTextMessage_Parms.DrawColor, &DrawColor, 0x4 );

	this->ProcessEvent ( pFnAddTextMessage, &AddTextMessage_Parms, NULL );
};

// Function MechaGame.MechaGameHUD.DrawLivingHud
// [0x00020002] 
// Parameters infos:

void AMechaGameHUD::DrawLivingHud ( )
{
	static UFunction* pFnDrawLivingHud = NULL;

	if ( ! pFnDrawLivingHud )
		pFnDrawLivingHud = (UFunction*) UObject::GObjObjects()->Data[ 208955 ];

	AMechaGameHUD_execDrawLivingHud_Parms DrawLivingHud_Parms;

	this->ProcessEvent ( pFnDrawLivingHud, &DrawLivingHud_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItemLink.UnifiedHeal
// [0x00020002] 
// Parameters infos:
// int                            HealthToAdd                    ( CPF_Parm )

void AMechaDestructibleItemLink::UnifiedHeal ( int HealthToAdd )
{
	static UFunction* pFnUnifiedHeal = NULL;

	if ( ! pFnUnifiedHeal )
		pFnUnifiedHeal = (UFunction*) UObject::GObjObjects()->Data[ 208791 ];

	AMechaDestructibleItemLink_execUnifiedHeal_Parms UnifiedHeal_Parms;
	UnifiedHeal_Parms.HealthToAdd = HealthToAdd;

	this->ProcessEvent ( pFnUnifiedHeal, &UnifiedHeal_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItemLink.UnifiedTakeDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Target                         ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void AMechaDestructibleItemLink::eventUnifiedTakeDamage ( class AActor* Target, int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnUnifiedTakeDamage = NULL;

	if ( ! pFnUnifiedTakeDamage )
		pFnUnifiedTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 208782 ];

	AMechaDestructibleItemLink_eventUnifiedTakeDamage_Parms UnifiedTakeDamage_Parms;
	UnifiedTakeDamage_Parms.Target = Target;
	UnifiedTakeDamage_Parms.Damage = Damage;
	UnifiedTakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &UnifiedTakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &UnifiedTakeDamage_Parms.Momentum, &Momentum, 0xC );
	UnifiedTakeDamage_Parms.DamageType = DamageType;
	memcpy ( &UnifiedTakeDamage_Parms.HitInfo, &HitInfo, 0x20 );
	UnifiedTakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnUnifiedTakeDamage, &UnifiedTakeDamage_Parms, NULL );
};

// Function MechaGame.MechaDestructibleItemLink.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AMechaDestructibleItemLink::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 208780 ];

	AMechaDestructibleItemLink_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.MechaGameExplosionActor.DoExplosionDamage
// [0x00880102] 
// Parameters infos:
// unsigned long                  bCauseDamage                   ( CPF_Parm )
// unsigned long                  bCauseEffects                  ( CPF_Parm )

void AMechaGameExplosionActor::DoExplosionDamage ( unsigned long bCauseDamage, unsigned long bCauseEffects )
{
	static UFunction* pFnDoExplosionDamage = NULL;

	if ( ! pFnDoExplosionDamage )
		pFnDoExplosionDamage = (UFunction*) UObject::GObjObjects()->Data[ 208916 ];

	AMechaGameExplosionActor_execDoExplosionDamage_Parms DoExplosionDamage_Parms;
	DoExplosionDamage_Parms.bCauseDamage = bCauseDamage;
	DoExplosionDamage_Parms.bCauseEffects = bCauseEffects;

	this->ProcessEvent ( pFnDoExplosionDamage, &DoExplosionDamage_Parms, NULL );
};

// Function MechaGame.MechaGameExplosionActor.SpawnExplosionParticleSystem
// [0x00020102] 
// Parameters infos:
// class UParticleSystem*         Template                       ( CPF_Parm )

void AMechaGameExplosionActor::SpawnExplosionParticleSystem ( class UParticleSystem* Template )
{
	static UFunction* pFnSpawnExplosionParticleSystem = NULL;

	if ( ! pFnSpawnExplosionParticleSystem )
		pFnSpawnExplosionParticleSystem = (UFunction*) UObject::GObjObjects()->Data[ 208913 ];

	AMechaGameExplosionActor_execSpawnExplosionParticleSystem_Parms SpawnExplosionParticleSystem_Parms;
	SpawnExplosionParticleSystem_Parms.Template = Template;

	this->ProcessEvent ( pFnSpawnExplosionParticleSystem, &SpawnExplosionParticleSystem_Parms, NULL );
};

// Function MechaGame.TGRealMechaHUD.DisplayClearViewHUD
// [0x00020002] 
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UTGRealMechaHUD::DisplayClearViewHUD ( class ATGHUD* HUD, class UCanvas* Canvas )
{
	static UFunction* pFnDisplayClearViewHUD = NULL;

	if ( ! pFnDisplayClearViewHUD )
		pFnDisplayClearViewHUD = (UFunction*) UObject::GObjObjects()->Data[ 213051 ];

	UTGRealMechaHUD_execDisplayClearViewHUD_Parms DisplayClearViewHUD_Parms;
	DisplayClearViewHUD_Parms.HUD = HUD;
	DisplayClearViewHUD_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDisplayClearViewHUD, &DisplayClearViewHUD_Parms, NULL );
};

// Function MechaGame.TGRealMechaHUD.DisplayCentralArea
// [0x00820002] 
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UTGRealMechaHUD::DisplayCentralArea ( class ATGHUD* HUD, class UCanvas* Canvas )
{
	static UFunction* pFnDisplayCentralArea = NULL;

	if ( ! pFnDisplayCentralArea )
		pFnDisplayCentralArea = (UFunction*) UObject::GObjObjects()->Data[ 213034 ];

	UTGRealMechaHUD_execDisplayCentralArea_Parms DisplayCentralArea_Parms;
	DisplayCentralArea_Parms.HUD = HUD;
	DisplayCentralArea_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDisplayCentralArea, &DisplayCentralArea_Parms, NULL );
};

// Function MechaGame.TGRealMechaHUD.DisplayWeaponBar
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UTGRealMechaHUD::eventDisplayWeaponBar ( class ATGHUD* HUD, class UCanvas* Canvas )
{
	static UFunction* pFnDisplayWeaponBar = NULL;

	if ( ! pFnDisplayWeaponBar )
		pFnDisplayWeaponBar = (UFunction*) UObject::GObjObjects()->Data[ 213017 ];

	UTGRealMechaHUD_eventDisplayWeaponBar_Parms DisplayWeaponBar_Parms;
	DisplayWeaponBar_Parms.HUD = HUD;
	DisplayWeaponBar_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDisplayWeaponBar, &DisplayWeaponBar_Parms, NULL );
};

// Function MechaGame.TGRealMechaHUD.DisplayAvatar
// [0x00820002] 
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UTGRealMechaHUD::DisplayAvatar ( class ATGHUD* HUD, class UCanvas* Canvas )
{
	static UFunction* pFnDisplayAvatar = NULL;

	if ( ! pFnDisplayAvatar )
		pFnDisplayAvatar = (UFunction*) UObject::GObjObjects()->Data[ 212986 ];

	UTGRealMechaHUD_execDisplayAvatar_Parms DisplayAvatar_Parms;
	DisplayAvatar_Parms.HUD = HUD;
	DisplayAvatar_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDisplayAvatar, &DisplayAvatar_Parms, NULL );
};

// Function MechaGame.TGRealMechaHUD.DisplayXPSkill
// [0x00820002] 
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UTGRealMechaHUD::DisplayXPSkill ( class ATGHUD* HUD, class UCanvas* Canvas )
{
	static UFunction* pFnDisplayXPSkill = NULL;

	if ( ! pFnDisplayXPSkill )
		pFnDisplayXPSkill = (UFunction*) UObject::GObjObjects()->Data[ 212959 ];

	UTGRealMechaHUD_execDisplayXPSkill_Parms DisplayXPSkill_Parms;
	DisplayXPSkill_Parms.HUD = HUD;
	DisplayXPSkill_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDisplayXPSkill, &DisplayXPSkill_Parms, NULL );
};

// Function MechaGame.TGRealMechaHUD.DisplaySkills
// [0x00820002] 
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UTGRealMechaHUD::DisplaySkills ( class ATGHUD* HUD, class UCanvas* Canvas )
{
	static UFunction* pFnDisplaySkills = NULL;

	if ( ! pFnDisplaySkills )
		pFnDisplaySkills = (UFunction*) UObject::GObjObjects()->Data[ 212929 ];

	UTGRealMechaHUD_execDisplaySkills_Parms DisplaySkills_Parms;
	DisplaySkills_Parms.HUD = HUD;
	DisplaySkills_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDisplaySkills, &DisplaySkills_Parms, NULL );
};

// Function MechaGame.TGRealMechaHUD.CreateMIC
// [0x00420002] 
// Parameters infos:
// class UMaterial*               Mat                            ( CPF_Parm )
// class UMaterialInstanceConstant* MIC                            ( CPF_Parm | CPF_OutParm )

void UTGRealMechaHUD::CreateMIC ( class UMaterial* Mat, class UMaterialInstanceConstant** MIC )
{
	static UFunction* pFnCreateMIC = NULL;

	if ( ! pFnCreateMIC )
		pFnCreateMIC = (UFunction*) UObject::GObjObjects()->Data[ 212926 ];

	UTGRealMechaHUD_execCreateMIC_Parms CreateMIC_Parms;
	CreateMIC_Parms.Mat = Mat;

	this->ProcessEvent ( pFnCreateMIC, &CreateMIC_Parms, NULL );

	if ( MIC )
		*MIC = CreateMIC_Parms.MIC;
};

// Function MechaGame.TGRealMechaHUD.DisplayHud
// [0x00020002] 
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UTGRealMechaHUD::DisplayHud ( class ATGHUD* HUD, class UCanvas* Canvas )
{
	static UFunction* pFnDisplayHud = NULL;

	if ( ! pFnDisplayHud )
		pFnDisplayHud = (UFunction*) UObject::GObjObjects()->Data[ 212923 ];

	UTGRealMechaHUD_execDisplayHud_Parms DisplayHud_Parms;
	DisplayHud_Parms.HUD = HUD;
	DisplayHud_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDisplayHud, &DisplayHud_Parms, NULL );
};

// Function MechaGame.TGRealMechaHUD.Initialize
// [0x00020002] 
// Parameters infos:

void UTGRealMechaHUD::Initialize ( )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 212922 ];

	UTGRealMechaHUD_execInitialize_Parms Initialize_Parms;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};

// Function MechaGame.MechaGamePawn.Died
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// unsigned char                  DeathDir                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_OptionalParm | CPF_Parm )

bool AMechaGamePawn::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation, unsigned char DeathDir, unsigned char HitGroup )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 209046 ];

	AMechaGamePawn_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );
	Died_Parms.DeathDir = DeathDir;
	Died_Parms.HitGroup = HitGroup;

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillBase.GetHumanReadableName
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString AMechaSkillBase::GetHumanReadableName ( )
{
	static UFunction* pFnGetHumanReadableName = NULL;

	if ( ! pFnGetHumanReadableName )
		pFnGetHumanReadableName = (UFunction*) UObject::GObjObjects()->Data[ 209690 ];

	AMechaSkillBase_execGetHumanReadableName_Parms GetHumanReadableName_Parms;

	this->ProcessEvent ( pFnGetHumanReadableName, &GetHumanReadableName_Parms, NULL );

	return GetHumanReadableName_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillBase.SetLevel
// [0x00020002] 
// Parameters infos:
// unsigned char                  Level                          ( CPF_Parm )

void AMechaSkillBase::SetLevel ( unsigned char Level )
{
	static UFunction* pFnSetLevel = NULL;

	if ( ! pFnSetLevel )
		pFnSetLevel = (UFunction*) UObject::GObjObjects()->Data[ 209687 ];

	AMechaSkillBase_execSetLevel_Parms SetLevel_Parms;
	SetLevel_Parms.Level = Level;

	this->ProcessEvent ( pFnSetLevel, &SetLevel_Parms, NULL );
};

// Function MechaGame.MechaSkillBase.Cleanup
// [0x00020002] 
// Parameters infos:

void AMechaSkillBase::Cleanup ( )
{
	static UFunction* pFnCleanup = NULL;

	if ( ! pFnCleanup )
		pFnCleanup = (UFunction*) UObject::GObjObjects()->Data[ 209684 ];

	AMechaSkillBase_execCleanup_Parms Cleanup_Parms;

	this->ProcessEvent ( pFnCleanup, &Cleanup_Parms, NULL );
};

// Function MechaGame.MechaSkillBase.TimerEnergyConsume
// [0x00020002] 
// Parameters infos:

void AMechaSkillBase::TimerEnergyConsume ( )
{
	static UFunction* pFnTimerEnergyConsume = NULL;

	if ( ! pFnTimerEnergyConsume )
		pFnTimerEnergyConsume = (UFunction*) UObject::GObjObjects()->Data[ 209683 ];

	AMechaSkillBase_execTimerEnergyConsume_Parms TimerEnergyConsume_Parms;

	this->ProcessEvent ( pFnTimerEnergyConsume, &TimerEnergyConsume_Parms, NULL );
};

// Function MechaGame.MechaSkillBase.IsConsumeEnergy
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AMechaSkillBase::IsConsumeEnergy ( )
{
	static UFunction* pFnIsConsumeEnergy = NULL;

	if ( ! pFnIsConsumeEnergy )
		pFnIsConsumeEnergy = (UFunction*) UObject::GObjObjects()->Data[ 209681 ];

	AMechaSkillBase_execIsConsumeEnergy_Parms IsConsumeEnergy_Parms;

	this->ProcessEvent ( pFnIsConsumeEnergy, &IsConsumeEnergy_Parms, NULL );

	return IsConsumeEnergy_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillBase.HasEnoughEnergy
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AMechaSkillBase::HasEnoughEnergy ( )
{
	static UFunction* pFnHasEnoughEnergy = NULL;

	if ( ! pFnHasEnoughEnergy )
		pFnHasEnoughEnergy = (UFunction*) UObject::GObjObjects()->Data[ 209676 ];

	AMechaSkillBase_execHasEnoughEnergy_Parms HasEnoughEnergy_Parms;

	this->ProcessEvent ( pFnHasEnoughEnergy, &HasEnoughEnergy_Parms, NULL );

	return HasEnoughEnergy_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillBase.GetCoolDownPercent
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AMechaSkillBase::GetCoolDownPercent ( )
{
	static UFunction* pFnGetCoolDownPercent = NULL;

	if ( ! pFnGetCoolDownPercent )
		pFnGetCoolDownPercent = (UFunction*) UObject::GObjObjects()->Data[ 209674 ];

	AMechaSkillBase_execGetCoolDownPercent_Parms GetCoolDownPercent_Parms;

	this->ProcessEvent ( pFnGetCoolDownPercent, &GetCoolDownPercent_Parms, NULL );

	return GetCoolDownPercent_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillBase.GetCoolDownRemainingTime
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AMechaSkillBase::GetCoolDownRemainingTime ( )
{
	static UFunction* pFnGetCoolDownRemainingTime = NULL;

	if ( ! pFnGetCoolDownRemainingTime )
		pFnGetCoolDownRemainingTime = (UFunction*) UObject::GObjObjects()->Data[ 209672 ];

	AMechaSkillBase_execGetCoolDownRemainingTime_Parms GetCoolDownRemainingTime_Parms;

	this->ProcessEvent ( pFnGetCoolDownRemainingTime, &GetCoolDownRemainingTime_Parms, NULL );

	return GetCoolDownRemainingTime_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillBase.IsCoolingDown
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AMechaSkillBase::IsCoolingDown ( )
{
	static UFunction* pFnIsCoolingDown = NULL;

	if ( ! pFnIsCoolingDown )
		pFnIsCoolingDown = (UFunction*) UObject::GObjObjects()->Data[ 209670 ];

	AMechaSkillBase_execIsCoolingDown_Parms IsCoolingDown_Parms;

	this->ProcessEvent ( pFnIsCoolingDown, &IsCoolingDown_Parms, NULL );

	return IsCoolingDown_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillBase.NeedsCoolDown
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AMechaSkillBase::NeedsCoolDown ( )
{
	static UFunction* pFnNeedsCoolDown = NULL;

	if ( ! pFnNeedsCoolDown )
		pFnNeedsCoolDown = (UFunction*) UObject::GObjObjects()->Data[ 209668 ];

	AMechaSkillBase_execNeedsCoolDown_Parms NeedsCoolDown_Parms;

	this->ProcessEvent ( pFnNeedsCoolDown, &NeedsCoolDown_Parms, NULL );

	return NeedsCoolDown_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillBase.IsInstant
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AMechaSkillBase::IsInstant ( )
{
	static UFunction* pFnIsInstant = NULL;

	if ( ! pFnIsInstant )
		pFnIsInstant = (UFunction*) UObject::GObjObjects()->Data[ 209666 ];

	AMechaSkillBase_execIsInstant_Parms IsInstant_Parms;

	this->ProcessEvent ( pFnIsInstant, &IsInstant_Parms, NULL );

	return IsInstant_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillBase.IsInEffect
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AMechaSkillBase::IsInEffect ( )
{
	static UFunction* pFnIsInEffect = NULL;

	if ( ! pFnIsInEffect )
		pFnIsInEffect = (UFunction*) UObject::GObjObjects()->Data[ 209664 ];

	AMechaSkillBase_execIsInEffect_Parms IsInEffect_Parms;

	this->ProcessEvent ( pFnIsInEffect, &IsInEffect_Parms, NULL );

	return IsInEffect_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillBase.ResetSkill
// [0x00020002] 
// Parameters infos:

void AMechaSkillBase::ResetSkill ( )
{
	static UFunction* pFnResetSkill = NULL;

	if ( ! pFnResetSkill )
		pFnResetSkill = (UFunction*) UObject::GObjObjects()->Data[ 209646 ];

	AMechaSkillBase_execResetSkill_Parms ResetSkill_Parms;

	this->ProcessEvent ( pFnResetSkill, &ResetSkill_Parms, NULL );
};

// Function MechaGame.MechaSkillBase.Stop
// [0x00020002] 
// Parameters infos:

void AMechaSkillBase::Stop ( )
{
	static UFunction* pFnStop = NULL;

	if ( ! pFnStop )
		pFnStop = (UFunction*) UObject::GObjObjects()->Data[ 209645 ];

	AMechaSkillBase_execStop_Parms Stop_Parms;

	this->ProcessEvent ( pFnStop, &Stop_Parms, NULL );
};

// Function MechaGame.MechaSkillBase.Start
// [0x00020002] 
// Parameters infos:

void AMechaSkillBase::Start ( )
{
	static UFunction* pFnStart = NULL;

	if ( ! pFnStart )
		pFnStart = (UFunction*) UObject::GObjObjects()->Data[ 209641 ];

	AMechaSkillBase_execStart_Parms Start_Parms;

	this->ProcessEvent ( pFnStart, &Start_Parms, NULL );
};

// Function MechaGame.MechaSkillBase.CheckStartSignal
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AMechaSkillBase::CheckStartSignal ( )
{
	static UFunction* pFnCheckStartSignal = NULL;

	if ( ! pFnCheckStartSignal )
		pFnCheckStartSignal = (UFunction*) UObject::GObjObjects()->Data[ 209639 ];

	AMechaSkillBase_execCheckStartSignal_Parms CheckStartSignal_Parms;

	this->ProcessEvent ( pFnCheckStartSignal, &CheckStartSignal_Parms, NULL );

	return CheckStartSignal_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillBase.SetStartSignal
// [0x00020002] 
// Parameters infos:
// unsigned long                  bStartSignal                   ( CPF_Parm )

void AMechaSkillBase::SetStartSignal ( unsigned long bStartSignal )
{
	static UFunction* pFnSetStartSignal = NULL;

	if ( ! pFnSetStartSignal )
		pFnSetStartSignal = (UFunction*) UObject::GObjObjects()->Data[ 209635 ];

	AMechaSkillBase_execSetStartSignal_Parms SetStartSignal_Parms;
	SetStartSignal_Parms.bStartSignal = bStartSignal;

	this->ProcessEvent ( pFnSetStartSignal, &SetStartSignal_Parms, NULL );
};

// Function MechaGame.MechaSkillBase.DeActivateSkillComponents
// [0x00020002] 
// Parameters infos:

void AMechaSkillBase::DeActivateSkillComponents ( )
{
	static UFunction* pFnDeActivateSkillComponents = NULL;

	if ( ! pFnDeActivateSkillComponents )
		pFnDeActivateSkillComponents = (UFunction*) UObject::GObjObjects()->Data[ 209633 ];

	AMechaSkillBase_execDeActivateSkillComponents_Parms DeActivateSkillComponents_Parms;

	this->ProcessEvent ( pFnDeActivateSkillComponents, &DeActivateSkillComponents_Parms, NULL );
};

// Function MechaGame.MechaSkillBase.ActivateSkillComponents
// [0x00020002] 
// Parameters infos:

void AMechaSkillBase::ActivateSkillComponents ( )
{
	static UFunction* pFnActivateSkillComponents = NULL;

	if ( ! pFnActivateSkillComponents )
		pFnActivateSkillComponents = (UFunction*) UObject::GObjObjects()->Data[ 209628 ];

	AMechaSkillBase_execActivateSkillComponents_Parms ActivateSkillComponents_Parms;

	this->ProcessEvent ( pFnActivateSkillComponents, &ActivateSkillComponents_Parms, NULL );
};

// Function MechaGame.MechaSkillBase.CanActivateSkillComponents
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AMechaSkillBase::CanActivateSkillComponents ( )
{
	static UFunction* pFnCanActivateSkillComponents = NULL;

	if ( ! pFnCanActivateSkillComponents )
		pFnCanActivateSkillComponents = (UFunction*) UObject::GObjObjects()->Data[ 209623 ];

	AMechaSkillBase_execCanActivateSkillComponents_Parms CanActivateSkillComponents_Parms;

	this->ProcessEvent ( pFnCanActivateSkillComponents, &CanActivateSkillComponents_Parms, NULL );

	return CanActivateSkillComponents_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillBase.AddSkillComponent
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AMechaSkillComponentBase* NewItem                        ( CPF_Parm )

bool AMechaSkillBase::AddSkillComponent ( class AMechaSkillComponentBase* NewItem )
{
	static UFunction* pFnAddSkillComponent = NULL;

	if ( ! pFnAddSkillComponent )
		pFnAddSkillComponent = (UFunction*) UObject::GObjObjects()->Data[ 209618 ];

	AMechaSkillBase_execAddSkillComponent_Parms AddSkillComponent_Parms;
	AddSkillComponent_Parms.NewItem = NewItem;

	this->ProcessEvent ( pFnAddSkillComponent, &AddSkillComponent_Parms, NULL );

	return AddSkillComponent_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillBase.CreateSkillComponents
// [0x00020000] 
// Parameters infos:

void AMechaSkillBase::CreateSkillComponents ( )
{
	static UFunction* pFnCreateSkillComponents = NULL;

	if ( ! pFnCreateSkillComponents )
		pFnCreateSkillComponents = (UFunction*) UObject::GObjObjects()->Data[ 209617 ];

	AMechaSkillBase_execCreateSkillComponents_Parms CreateSkillComponents_Parms;

	this->ProcessEvent ( pFnCreateSkillComponents, &CreateSkillComponents_Parms, NULL );
};

// Function MechaGame.MechaSkillBase.Initialize
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGMechaGamePlayerController* InOwnerPC                      ( CPF_Parm )
// class AMechaSkillManager*      InOwnerSkillMgr                ( CPF_Parm )

bool AMechaSkillBase::Initialize ( class ATGMechaGamePlayerController* InOwnerPC, class AMechaSkillManager* InOwnerSkillMgr )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 209606 ];

	AMechaSkillBase_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.InOwnerPC = InOwnerPC;
	Initialize_Parms.InOwnerSkillMgr = InOwnerSkillMgr;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	return Initialize_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void AMechaSkillBase::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 209602 ];

	AMechaSkillBase_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function MechaGame.MechaHalfRoundGame.AddTeamScore
// [0x00020002] 
// Parameters infos:
// int                            TeamIndex                      ( CPF_Parm )

void AMechaHalfRoundGame::AddTeamScore ( int TeamIndex )
{
	static UFunction* pFnAddTeamScore = NULL;

	if ( ! pFnAddTeamScore )
		pFnAddTeamScore = (UFunction*) UObject::GObjObjects()->Data[ 209415 ];

	AMechaHalfRoundGame_execAddTeamScore_Parms AddTeamScore_Parms;
	AddTeamScore_Parms.TeamIndex = TeamIndex;

	this->ProcessEvent ( pFnAddTeamScore, &AddTeamScore_Parms, NULL );
};

// Function MechaGame.MechaHalfRoundGame.DirectEndRound
// [0x00020002] 
// Parameters infos:
// int                            TeamIndex                      ( CPF_Parm )
// struct FString                 Reason                         ( CPF_Parm | CPF_NeedCtorLink )
// class AActor*                  EndRoundFocus                  ( CPF_Parm )

void AMechaHalfRoundGame::DirectEndRound ( int TeamIndex, struct FString Reason, class AActor* EndRoundFocus )
{
	static UFunction* pFnDirectEndRound = NULL;

	if ( ! pFnDirectEndRound )
		pFnDirectEndRound = (UFunction*) UObject::GObjObjects()->Data[ 209411 ];

	AMechaHalfRoundGame_execDirectEndRound_Parms DirectEndRound_Parms;
	DirectEndRound_Parms.TeamIndex = TeamIndex;
	memcpy ( &DirectEndRound_Parms.Reason, &Reason, 0xC );
	DirectEndRound_Parms.EndRoundFocus = EndRoundFocus;

	this->ProcessEvent ( pFnDirectEndRound, &DirectEndRound_Parms, NULL );
};

// Function MechaGame.MechaHalfRoundGame.IncrementRoundCount
// [0x00020002] 
// Parameters infos:

void AMechaHalfRoundGame::IncrementRoundCount ( )
{
	static UFunction* pFnIncrementRoundCount = NULL;

	if ( ! pFnIncrementRoundCount )
		pFnIncrementRoundCount = (UFunction*) UObject::GObjObjects()->Data[ 209410 ];

	AMechaHalfRoundGame_execIncrementRoundCount_Parms IncrementRoundCount_Parms;

	this->ProcessEvent ( pFnIncrementRoundCount, &IncrementRoundCount_Parms, NULL );
};

// Function MechaGame.MechaHalfRoundGame.SetRoundState
// [0x00020002] 
// Parameters infos:
// unsigned char                  State                          ( CPF_Parm )

void AMechaHalfRoundGame::SetRoundState ( unsigned char State )
{
	static UFunction* pFnSetRoundState = NULL;

	if ( ! pFnSetRoundState )
		pFnSetRoundState = (UFunction*) UObject::GObjObjects()->Data[ 209406 ];

	AMechaHalfRoundGame_execSetRoundState_Parms SetRoundState_Parms;
	SetRoundState_Parms.State = State;

	this->ProcessEvent ( pFnSetRoundState, &SetRoundState_Parms, NULL );
};

// Function MechaGame.MechaHalfRoundGame.Reset
// [0x00020002] 
// Parameters infos:

void AMechaHalfRoundGame::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 209403 ];

	AMechaHalfRoundGame_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function MechaGame.MechaHalfRoundGame.InitGameReplicationInfo
// [0x00020002] 
// Parameters infos:

void AMechaHalfRoundGame::InitGameReplicationInfo ( )
{
	static UFunction* pFnInitGameReplicationInfo = NULL;

	if ( ! pFnInitGameReplicationInfo )
		pFnInitGameReplicationInfo = (UFunction*) UObject::GObjObjects()->Data[ 209399 ];

	AMechaHalfRoundGame_execInitGameReplicationInfo_Parms InitGameReplicationInfo_Parms;

	this->ProcessEvent ( pFnInitGameReplicationInfo, &InitGameReplicationInfo_Parms, NULL );
};

// Function MechaGame.MechaMapInfo.GetPickupSizeScale
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGMechaPickupFactory*   Pickup                         ( CPF_Parm )

float UMechaMapInfo::GetPickupSizeScale ( class ATGMechaPickupFactory* Pickup )
{
	static UFunction* pFnGetPickupSizeScale = NULL;

	if ( ! pFnGetPickupSizeScale )
		pFnGetPickupSizeScale = (UFunction*) UObject::GObjObjects()->Data[ 209591 ];

	UMechaMapInfo_execGetPickupSizeScale_Parms GetPickupSizeScale_Parms;
	GetPickupSizeScale_Parms.Pickup = Pickup;

	this->ProcessEvent ( pFnGetPickupSizeScale, &GetPickupSizeScale_Parms, NULL );

	return GetPickupSizeScale_Parms.ReturnValue;
};

// Function MechaGame.MechaMapInfo.DrawObserverBigRadar
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

void UMechaMapInfo::DrawObserverBigRadar ( class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float XPos, float YPos, float Width, float Height, unsigned long bFullDetail, float AspectRatio )
{
	static UFunction* pFnDrawObserverBigRadar = NULL;

	if ( ! pFnDrawObserverBigRadar )
		pFnDrawObserverBigRadar = (UFunction*) UObject::GObjObjects()->Data[ 209570 ];

	UMechaMapInfo_execDrawObserverBigRadar_Parms DrawObserverBigRadar_Parms;
	DrawObserverBigRadar_Parms.Canvas = Canvas;
	DrawObserverBigRadar_Parms.PlayerOwner = PlayerOwner;
	DrawObserverBigRadar_Parms.XPos = XPos;
	DrawObserverBigRadar_Parms.YPos = YPos;
	DrawObserverBigRadar_Parms.Width = Width;
	DrawObserverBigRadar_Parms.Height = Height;
	DrawObserverBigRadar_Parms.bFullDetail = bFullDetail;
	DrawObserverBigRadar_Parms.AspectRatio = AspectRatio;

	this->ProcessEvent ( pFnDrawObserverBigRadar, &DrawObserverBigRadar_Parms, NULL );
};

// Function MechaGame.MechaMapInfo.DrawObserverMap
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

void UMechaMapInfo::DrawObserverMap ( class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float XPos, float YPos, float Width, float Height, unsigned long bFullDetail, float AspectRatio, float BkgImgAlpha )
{
	static UFunction* pFnDrawObserverMap = NULL;

	if ( ! pFnDrawObserverMap )
		pFnDrawObserverMap = (UFunction*) UObject::GObjObjects()->Data[ 209534 ];

	UMechaMapInfo_execDrawObserverMap_Parms DrawObserverMap_Parms;
	DrawObserverMap_Parms.Canvas = Canvas;
	DrawObserverMap_Parms.PlayerOwner = PlayerOwner;
	DrawObserverMap_Parms.XPos = XPos;
	DrawObserverMap_Parms.YPos = YPos;
	DrawObserverMap_Parms.Width = Width;
	DrawObserverMap_Parms.Height = Height;
	DrawObserverMap_Parms.bFullDetail = bFullDetail;
	DrawObserverMap_Parms.AspectRatio = AspectRatio;
	DrawObserverMap_Parms.BkgImgAlpha = BkgImgAlpha;

	this->ProcessEvent ( pFnDrawObserverMap, &DrawObserverMap_Parms, NULL );
};

// Function MechaGame.MechaMapInfo.DrawBigRadar
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

void UMechaMapInfo::DrawBigRadar ( class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float XPos, float YPos, float Width, float Height, unsigned long bFullDetail, float AspectRatio )
{
	static UFunction* pFnDrawBigRadar = NULL;

	if ( ! pFnDrawBigRadar )
		pFnDrawBigRadar = (UFunction*) UObject::GObjObjects()->Data[ 209498 ];

	UMechaMapInfo_execDrawBigRadar_Parms DrawBigRadar_Parms;
	DrawBigRadar_Parms.Canvas = Canvas;
	DrawBigRadar_Parms.PlayerOwner = PlayerOwner;
	DrawBigRadar_Parms.XPos = XPos;
	DrawBigRadar_Parms.YPos = YPos;
	DrawBigRadar_Parms.Width = Width;
	DrawBigRadar_Parms.Height = Height;
	DrawBigRadar_Parms.bFullDetail = bFullDetail;
	DrawBigRadar_Parms.AspectRatio = AspectRatio;

	this->ProcessEvent ( pFnDrawBigRadar, &DrawBigRadar_Parms, NULL );
};

// Function MechaGame.MechaMapInfo.DrawMap
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

void UMechaMapInfo::DrawMap ( class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float XPos, float YPos, float Width, float Height, unsigned long bFullDetail, float AspectRatio, float BkgImgAlpha )
{
	static UFunction* pFnDrawMap = NULL;

	if ( ! pFnDrawMap )
		pFnDrawMap = (UFunction*) UObject::GObjObjects()->Data[ 209445 ];

	UMechaMapInfo_execDrawMap_Parms DrawMap_Parms;
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

// Function MechaGame.MechaMapInfo.DrawBigRadarDoorImage
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          W                              ( CPF_Parm )
// float                          H                              ( CPF_Parm )
// struct FRotator                R                              ( CPF_Parm )

void UMechaMapInfo::DrawBigRadarDoorImage ( class UCanvas* Canvas, float X, float Y, float W, float H, struct FRotator R )
{
	static UFunction* pFnDrawBigRadarDoorImage = NULL;

	if ( ! pFnDrawBigRadarDoorImage )
		pFnDrawBigRadarDoorImage = (UFunction*) UObject::GObjObjects()->Data[ 209435 ];

	UMechaMapInfo_execDrawBigRadarDoorImage_Parms DrawBigRadarDoorImage_Parms;
	DrawBigRadarDoorImage_Parms.Canvas = Canvas;
	DrawBigRadarDoorImage_Parms.X = X;
	DrawBigRadarDoorImage_Parms.Y = Y;
	DrawBigRadarDoorImage_Parms.W = W;
	DrawBigRadarDoorImage_Parms.H = H;
	memcpy ( &DrawBigRadarDoorImage_Parms.R, &R, 0xC );

	this->ProcessEvent ( pFnDrawBigRadarDoorImage, &DrawBigRadarDoorImage_Parms, NULL );
};

// Function MechaGame.MechaMapInfo.SetBaseDoorVisible
// [0x00020002] 
// Parameters infos:
// unsigned long                  bVisible                       ( CPF_Parm )

void UMechaMapInfo::SetBaseDoorVisible ( unsigned long bVisible )
{
	static UFunction* pFnSetBaseDoorVisible = NULL;

	if ( ! pFnSetBaseDoorVisible )
		pFnSetBaseDoorVisible = (UFunction*) UObject::GObjObjects()->Data[ 209433 ];

	UMechaMapInfo_execSetBaseDoorVisible_Parms SetBaseDoorVisible_Parms;
	SetBaseDoorVisible_Parms.bVisible = bVisible;

	this->ProcessEvent ( pFnSetBaseDoorVisible, &SetBaseDoorVisible_Parms, NULL );
};

// Function MechaGame.MechaMapInfo.FindObjectives
// [0x00020002] 
// Parameters infos:

void UMechaMapInfo::FindObjectives ( )
{
	static UFunction* pFnFindObjectives = NULL;

	if ( ! pFnFindObjectives )
		pFnFindObjectives = (UFunction*) UObject::GObjObjects()->Data[ 209432 ];

	UMechaMapInfo_execFindObjectives_Parms FindObjectives_Parms;

	this->ProcessEvent ( pFnFindObjectives, &FindObjectives_Parms, NULL );
};

// Function MechaGame.TGMechaPickupFactory.GetRadarIcon
// [0x00020102] 
// Parameters infos:
// class UTexture2D*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UTexture2D* ATGMechaPickupFactory::GetRadarIcon ( )
{
	static UFunction* pFnGetRadarIcon = NULL;

	if ( ! pFnGetRadarIcon )
		pFnGetRadarIcon = (UFunction*) UObject::GObjObjects()->Data[ 209489 ];

	ATGMechaPickupFactory_execGetRadarIcon_Parms GetRadarIcon_Parms;

	this->ProcessEvent ( pFnGetRadarIcon, &GetRadarIcon_Parms, NULL );

	return GetRadarIcon_Parms.ReturnValue;
};

// Function MechaGame.TGMechaPickupFactory.SetPickupEnable
// [0x00020002] 
// Parameters infos:

void ATGMechaPickupFactory::SetPickupEnable ( )
{
	static UFunction* pFnSetPickupEnable = NULL;

	if ( ! pFnSetPickupEnable )
		pFnSetPickupEnable = (UFunction*) UObject::GObjObjects()->Data[ 213397 ];

	ATGMechaPickupFactory_execSetPickupEnable_Parms SetPickupEnable_Parms;

	this->ProcessEvent ( pFnSetPickupEnable, &SetPickupEnable_Parms, NULL );
};

// Function MechaGame.TGMechaPickupFactory.SetPickupDisable
// [0x00020002] 
// Parameters infos:

void ATGMechaPickupFactory::SetPickupDisable ( )
{
	static UFunction* pFnSetPickupDisable = NULL;

	if ( ! pFnSetPickupDisable )
		pFnSetPickupDisable = (UFunction*) UObject::GObjObjects()->Data[ 213396 ];

	ATGMechaPickupFactory_execSetPickupDisable_Parms SetPickupDisable_Parms;

	this->ProcessEvent ( pFnSetPickupDisable, &SetPickupDisable_Parms, NULL );
};

// Function MechaGame.TGMechaPickupFactory.NotifyRoundStarted
// [0x00020002] 
// Parameters infos:

void ATGMechaPickupFactory::NotifyRoundStarted ( )
{
	static UFunction* pFnNotifyRoundStarted = NULL;

	if ( ! pFnNotifyRoundStarted )
		pFnNotifyRoundStarted = (UFunction*) UObject::GObjObjects()->Data[ 213395 ];

	ATGMechaPickupFactory_execNotifyRoundStarted_Parms NotifyRoundStarted_Parms;

	this->ProcessEvent ( pFnNotifyRoundStarted, &NotifyRoundStarted_Parms, NULL );
};

// Function MechaGame.TGMechaPickupFactory.ClearIconFlash
// [0x00020102] 
// Parameters infos:

void ATGMechaPickupFactory::ClearIconFlash ( )
{
	static UFunction* pFnClearIconFlash = NULL;

	if ( ! pFnClearIconFlash )
		pFnClearIconFlash = (UFunction*) UObject::GObjObjects()->Data[ 213394 ];

	ATGMechaPickupFactory_execClearIconFlash_Parms ClearIconFlash_Parms;

	this->ProcessEvent ( pFnClearIconFlash, &ClearIconFlash_Parms, NULL );
};

// Function MechaGame.TGMechaPickupFactory.FlashIcon
// [0x00020102] 
// Parameters infos:

void ATGMechaPickupFactory::FlashIcon ( )
{
	static UFunction* pFnFlashIcon = NULL;

	if ( ! pFnFlashIcon )
		pFnFlashIcon = (UFunction*) UObject::GObjObjects()->Data[ 213393 ];

	ATGMechaPickupFactory_execFlashIcon_Parms FlashIcon_Parms;

	this->ProcessEvent ( pFnFlashIcon, &FlashIcon_Parms, NULL );
};

// Function MechaGame.TGMechaPickupFactory.SetPickupMesh
// [0x00020100] 
// Parameters infos:

void ATGMechaPickupFactory::SetPickupMesh ( )
{
	static UFunction* pFnSetPickupMesh = NULL;

	if ( ! pFnSetPickupMesh )
		pFnSetPickupMesh = (UFunction*) UObject::GObjObjects()->Data[ 213392 ];

	ATGMechaPickupFactory_execSetPickupMesh_Parms SetPickupMesh_Parms;

	this->ProcessEvent ( pFnSetPickupMesh, &SetPickupMesh_Parms, NULL );
};

// Function MechaGame.TGMechaPickupFactory.SetPickupHidden
// [0x00020102] 
// Parameters infos:

void ATGMechaPickupFactory::SetPickupHidden ( )
{
	static UFunction* pFnSetPickupHidden = NULL;

	if ( ! pFnSetPickupHidden )
		pFnSetPickupHidden = (UFunction*) UObject::GObjObjects()->Data[ 213391 ];

	ATGMechaPickupFactory_execSetPickupHidden_Parms SetPickupHidden_Parms;

	this->ProcessEvent ( pFnSetPickupHidden, &SetPickupHidden_Parms, NULL );
};

// Function MechaGame.TGMechaPickupFactory.SetPickupVisible
// [0x00020102] 
// Parameters infos:

void ATGMechaPickupFactory::SetPickupVisible ( )
{
	static UFunction* pFnSetPickupVisible = NULL;

	if ( ! pFnSetPickupVisible )
		pFnSetPickupVisible = (UFunction*) UObject::GObjObjects()->Data[ 213390 ];

	ATGMechaPickupFactory_execSetPickupVisible_Parms SetPickupVisible_Parms;

	this->ProcessEvent ( pFnSetPickupVisible, &SetPickupVisible_Parms, NULL );
};

// Function MechaGame.TGMechaPickupFactory.InitializePickup
// [0x00020102] 
// Parameters infos:

void ATGMechaPickupFactory::InitializePickup ( )
{
	static UFunction* pFnInitializePickup = NULL;

	if ( ! pFnInitializePickup )
		pFnInitializePickup = (UFunction*) UObject::GObjObjects()->Data[ 213389 ];

	ATGMechaPickupFactory_execInitializePickup_Parms InitializePickup_Parms;

	this->ProcessEvent ( pFnInitializePickup, &InitializePickup_Parms, NULL );
};

// Function MechaGame.TGMechaPickupFactory.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGMechaPickupFactory::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 213387 ];

	ATGMechaPickupFactory_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function MechaGame.MechaSkillComponentBase.OnStateChanged
// [0x00020102] 
// Parameters infos:

void AMechaSkillComponentBase::OnStateChanged ( )
{
	static UFunction* pFnOnStateChanged = NULL;

	if ( ! pFnOnStateChanged )
		pFnOnStateChanged = (UFunction*) UObject::GObjObjects()->Data[ 209833 ];

	AMechaSkillComponentBase_execOnStateChanged_Parms OnStateChanged_Parms;

	this->ProcessEvent ( pFnOnStateChanged, &OnStateChanged_Parms, NULL );
};

// Function MechaGame.MechaSkillComponentBase.OnActivateCountUpdate
// [0x00020102] 
// Parameters infos:

void AMechaSkillComponentBase::OnActivateCountUpdate ( )
{
	static UFunction* pFnOnActivateCountUpdate = NULL;

	if ( ! pFnOnActivateCountUpdate )
		pFnOnActivateCountUpdate = (UFunction*) UObject::GObjObjects()->Data[ 209832 ];

	AMechaSkillComponentBase_execOnActivateCountUpdate_Parms OnActivateCountUpdate_Parms;

	this->ProcessEvent ( pFnOnActivateCountUpdate, &OnActivateCountUpdate_Parms, NULL );
};

// Function MechaGame.MechaSkillComponentBase.UpdateActivateCount
// [0x00020002] 
// Parameters infos:

void AMechaSkillComponentBase::UpdateActivateCount ( )
{
	static UFunction* pFnUpdateActivateCount = NULL;

	if ( ! pFnUpdateActivateCount )
		pFnUpdateActivateCount = (UFunction*) UObject::GObjObjects()->Data[ 209831 ];

	AMechaSkillComponentBase_execUpdateActivateCount_Parms UpdateActivateCount_Parms;

	this->ProcessEvent ( pFnUpdateActivateCount, &UpdateActivateCount_Parms, NULL );
};

// Function MechaGame.MechaSkillComponentBase.SetActive
// [0x00020002] 
// Parameters infos:
// unsigned long                  bNowActive                     ( CPF_Parm )

void AMechaSkillComponentBase::SetActive ( unsigned long bNowActive )
{
	static UFunction* pFnSetActive = NULL;

	if ( ! pFnSetActive )
		pFnSetActive = (UFunction*) UObject::GObjObjects()->Data[ 209829 ];

	AMechaSkillComponentBase_execSetActive_Parms SetActive_Parms;
	SetActive_Parms.bNowActive = bNowActive;

	this->ProcessEvent ( pFnSetActive, &SetActive_Parms, NULL );
};

// Function MechaGame.MechaSkillComponentBase.ClientDeActivate
// [0x010201C2] 
// Parameters infos:

void AMechaSkillComponentBase::ClientDeActivate ( )
{
	static UFunction* pFnClientDeActivate = NULL;

	if ( ! pFnClientDeActivate )
		pFnClientDeActivate = (UFunction*) UObject::GObjObjects()->Data[ 209828 ];

	AMechaSkillComponentBase_execClientDeActivate_Parms ClientDeActivate_Parms;

	this->ProcessEvent ( pFnClientDeActivate, &ClientDeActivate_Parms, NULL );
};

// Function MechaGame.MechaSkillComponentBase.ClientActivate
// [0x010201C2] 
// Parameters infos:

void AMechaSkillComponentBase::ClientActivate ( )
{
	static UFunction* pFnClientActivate = NULL;

	if ( ! pFnClientActivate )
		pFnClientActivate = (UFunction*) UObject::GObjObjects()->Data[ 209827 ];

	AMechaSkillComponentBase_execClientActivate_Parms ClientActivate_Parms;

	this->ProcessEvent ( pFnClientActivate, &ClientActivate_Parms, NULL );
};

// Function MechaGame.MechaSkillComponentBase.OnDeactivate
// [0x00020100] 
// Parameters infos:
// class AMechaSkillComponentBase* SkillComponent                 ( CPF_Parm )

void AMechaSkillComponentBase::OnDeactivate ( class AMechaSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnDeactivate = NULL;

	if ( ! pFnOnDeactivate )
		pFnOnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 209825 ];

	AMechaSkillComponentBase_execOnDeactivate_Parms OnDeactivate_Parms;
	OnDeactivate_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnDeactivate, &OnDeactivate_Parms, NULL );
};

// Function MechaGame.MechaSkillComponentBase.OnActivate
// [0x00020100] 
// Parameters infos:
// class AMechaSkillComponentBase* SkillComponent                 ( CPF_Parm )

void AMechaSkillComponentBase::OnActivate ( class AMechaSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 209823 ];

	AMechaSkillComponentBase_execOnActivate_Parms OnActivate_Parms;
	OnActivate_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function MechaGame.MechaSkillComponentBase.CanDeActivate
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AMechaSkillComponentBase::CanDeActivate ( )
{
	static UFunction* pFnCanDeActivate = NULL;

	if ( ! pFnCanDeActivate )
		pFnCanDeActivate = (UFunction*) UObject::GObjObjects()->Data[ 209821 ];

	AMechaSkillComponentBase_execCanDeActivate_Parms CanDeActivate_Parms;

	this->ProcessEvent ( pFnCanDeActivate, &CanDeActivate_Parms, NULL );

	return CanDeActivate_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillComponentBase.CanActivate
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AMechaSkillComponentBase::CanActivate ( )
{
	static UFunction* pFnCanActivate = NULL;

	if ( ! pFnCanActivate )
		pFnCanActivate = (UFunction*) UObject::GObjObjects()->Data[ 209626 ];

	AMechaSkillComponentBase_execCanActivate_Parms CanActivate_Parms;

	this->ProcessEvent ( pFnCanActivate, &CanActivate_Parms, NULL );

	return CanActivate_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillComponentBase.Deactivate
// [0x00020002] 
// Parameters infos:

void AMechaSkillComponentBase::Deactivate ( )
{
	static UFunction* pFnDeactivate = NULL;

	if ( ! pFnDeactivate )
		pFnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 209820 ];

	AMechaSkillComponentBase_execDeactivate_Parms Deactivate_Parms;

	this->ProcessEvent ( pFnDeactivate, &Deactivate_Parms, NULL );
};

// Function MechaGame.MechaSkillComponentBase.Activate
// [0x00020002] 
// Parameters infos:

void AMechaSkillComponentBase::Activate ( )
{
	static UFunction* pFnActivate = NULL;

	if ( ! pFnActivate )
		pFnActivate = (UFunction*) UObject::GObjObjects()->Data[ 209819 ];

	AMechaSkillComponentBase_execActivate_Parms Activate_Parms;

	this->ProcessEvent ( pFnActivate, &Activate_Parms, NULL );
};

// Function MechaGame.MechaSkillComponentBase.Initialize
// [0x00020002] 
// Parameters infos:
// class AMechaSkillBase*         InOwnerSkill                   ( CPF_Parm )

void AMechaSkillComponentBase::Initialize ( class AMechaSkillBase* InOwnerSkill )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 209817 ];

	AMechaSkillComponentBase_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.InOwnerSkill = InOwnerSkill;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};

// Function MechaGame.MechaSkillComponentBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void AMechaSkillComponentBase::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 209815 ];

	AMechaSkillComponentBase_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function MechaGame.MechaSkillManager.GetEnergy
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AMechaSkillManager::GetEnergy ( )
{
	static UFunction* pFnGetEnergy = NULL;

	if ( ! pFnGetEnergy )
		pFnGetEnergy = (UFunction*) UObject::GObjObjects()->Data[ 209678 ];

	AMechaSkillManager_execGetEnergy_Parms GetEnergy_Parms;

	this->ProcessEvent ( pFnGetEnergy, &GetEnergy_Parms, NULL );

	return GetEnergy_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillManager.ConsumeEnergy
// [0x00020002] 
// Parameters infos:
// float                          Consume                        ( CPF_Parm )

void AMechaSkillManager::ConsumeEnergy ( float Consume )
{
	static UFunction* pFnConsumeEnergy = NULL;

	if ( ! pFnConsumeEnergy )
		pFnConsumeEnergy = (UFunction*) UObject::GObjObjects()->Data[ 210025 ];

	AMechaSkillManager_execConsumeEnergy_Parms ConsumeEnergy_Parms;
	ConsumeEnergy_Parms.Consume = Consume;

	this->ProcessEvent ( pFnConsumeEnergy, &ConsumeEnergy_Parms, NULL );
};

// Function MechaGame.MechaSkillManager.NotifyOwnerPawnDied
// [0x00020002] 
// Parameters infos:

void AMechaSkillManager::NotifyOwnerPawnDied ( )
{
	static UFunction* pFnNotifyOwnerPawnDied = NULL;

	if ( ! pFnNotifyOwnerPawnDied )
		pFnNotifyOwnerPawnDied = (UFunction*) UObject::GObjObjects()->Data[ 210024 ];

	AMechaSkillManager_execNotifyOwnerPawnDied_Parms NotifyOwnerPawnDied_Parms;

	this->ProcessEvent ( pFnNotifyOwnerPawnDied, &NotifyOwnerPawnDied_Parms, NULL );
};

// Function MechaGame.MechaSkillManager.NotifySkillStopped
// [0x00020002] 
// Parameters infos:
// class AMechaSkillBase*         Item                           ( CPF_Parm )

void AMechaSkillManager::NotifySkillStopped ( class AMechaSkillBase* Item )
{
	static UFunction* pFnNotifySkillStopped = NULL;

	if ( ! pFnNotifySkillStopped )
		pFnNotifySkillStopped = (UFunction*) UObject::GObjObjects()->Data[ 210022 ];

	AMechaSkillManager_execNotifySkillStopped_Parms NotifySkillStopped_Parms;
	NotifySkillStopped_Parms.Item = Item;

	this->ProcessEvent ( pFnNotifySkillStopped, &NotifySkillStopped_Parms, NULL );
};

// Function MechaGame.MechaSkillManager.DeActivateSkills
// [0x00020102] 
// Parameters infos:

void AMechaSkillManager::DeActivateSkills ( )
{
	static UFunction* pFnDeActivateSkills = NULL;

	if ( ! pFnDeActivateSkills )
		pFnDeActivateSkills = (UFunction*) UObject::GObjObjects()->Data[ 210020 ];

	AMechaSkillManager_execDeActivateSkills_Parms DeActivateSkills_Parms;

	this->ProcessEvent ( pFnDeActivateSkills, &DeActivateSkills_Parms, NULL );
};

// Function MechaGame.MechaSkillManager.HasSkill
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SkillName                      ( CPF_Parm )

bool AMechaSkillManager::HasSkill ( struct FName SkillName )
{
	static UFunction* pFnHasSkill = NULL;

	if ( ! pFnHasSkill )
		pFnHasSkill = (UFunction*) UObject::GObjObjects()->Data[ 210016 ];

	AMechaSkillManager_execHasSkill_Parms HasSkill_Parms;
	memcpy ( &HasSkill_Parms.SkillName, &SkillName, 0x8 );

	this->ProcessEvent ( pFnHasSkill, &HasSkill_Parms, NULL );

	return HasSkill_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillManager.GetInitiativeSkillByName
// [0x00020102] 
// Parameters infos:
// class AMechaSkillBase*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SkillName                      ( CPF_Parm )

class AMechaSkillBase* AMechaSkillManager::GetInitiativeSkillByName ( struct FName SkillName )
{
	static UFunction* pFnGetInitiativeSkillByName = NULL;

	if ( ! pFnGetInitiativeSkillByName )
		pFnGetInitiativeSkillByName = (UFunction*) UObject::GObjObjects()->Data[ 210012 ];

	AMechaSkillManager_execGetInitiativeSkillByName_Parms GetInitiativeSkillByName_Parms;
	memcpy ( &GetInitiativeSkillByName_Parms.SkillName, &SkillName, 0x8 );

	this->ProcessEvent ( pFnGetInitiativeSkillByName, &GetInitiativeSkillByName_Parms, NULL );

	return GetInitiativeSkillByName_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillManager.GetInitiativeSkill
// [0x00020102] 
// Parameters infos:
// class AMechaSkillBase*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

class AMechaSkillBase* AMechaSkillManager::GetInitiativeSkill ( int Index )
{
	static UFunction* pFnGetInitiativeSkill = NULL;

	if ( ! pFnGetInitiativeSkill )
		pFnGetInitiativeSkill = (UFunction*) UObject::GObjObjects()->Data[ 210008 ];

	AMechaSkillManager_execGetInitiativeSkill_Parms GetInitiativeSkill_Parms;
	GetInitiativeSkill_Parms.Index = Index;

	this->ProcessEvent ( pFnGetInitiativeSkill, &GetInitiativeSkill_Parms, NULL );

	return GetInitiativeSkill_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillManager.GetSkill
// [0x00020102] 
// Parameters infos:
// class AMechaSkillBase*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

class AMechaSkillBase* AMechaSkillManager::GetSkill ( int Index )
{
	static UFunction* pFnGetSkill = NULL;

	if ( ! pFnGetSkill )
		pFnGetSkill = (UFunction*) UObject::GObjObjects()->Data[ 210004 ];

	AMechaSkillManager_execGetSkill_Parms GetSkill_Parms;
	GetSkill_Parms.Index = Index;

	this->ProcessEvent ( pFnGetSkill, &GetSkill_Parms, NULL );

	return GetSkill_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillManager.IsSkillInEffect
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SkillName                      ( CPF_Parm )

bool AMechaSkillManager::IsSkillInEffect ( struct FName SkillName )
{
	static UFunction* pFnIsSkillInEffect = NULL;

	if ( ! pFnIsSkillInEffect )
		pFnIsSkillInEffect = (UFunction*) UObject::GObjObjects()->Data[ 210000 ];

	AMechaSkillManager_execIsSkillInEffect_Parms IsSkillInEffect_Parms;
	memcpy ( &IsSkillInEffect_Parms.SkillName, &SkillName, 0x8 );

	this->ProcessEvent ( pFnIsSkillInEffect, &IsSkillInEffect_Parms, NULL );

	return IsSkillInEffect_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillManager.NotifyEnergyEmpty
// [0x00020002] 
// Parameters infos:

void AMechaSkillManager::NotifyEnergyEmpty ( )
{
	static UFunction* pFnNotifyEnergyEmpty = NULL;

	if ( ! pFnNotifyEnergyEmpty )
		pFnNotifyEnergyEmpty = (UFunction*) UObject::GObjObjects()->Data[ 209998 ];

	AMechaSkillManager_execNotifyEnergyEmpty_Parms NotifyEnergyEmpty_Parms;

	this->ProcessEvent ( pFnNotifyEnergyEmpty, &NotifyEnergyEmpty_Parms, NULL );
};

// Function MechaGame.MechaSkillManager.ResetSkills
// [0x00020102] 
// Parameters infos:

void AMechaSkillManager::ResetSkills ( )
{
	static UFunction* pFnResetSkills = NULL;

	if ( ! pFnResetSkills )
		pFnResetSkills = (UFunction*) UObject::GObjObjects()->Data[ 209996 ];

	AMechaSkillManager_execResetSkills_Parms ResetSkills_Parms;

	this->ProcessEvent ( pFnResetSkills, &ResetSkills_Parms, NULL );
};

// Function MechaGame.MechaSkillManager.SetSkillLevel
// [0x00020002] 
// Parameters infos:
// struct FName                   SkillName                      ( CPF_Parm )
// unsigned char                  Level                          ( CPF_Parm )

void AMechaSkillManager::SetSkillLevel ( struct FName SkillName, unsigned char Level )
{
	static UFunction* pFnSetSkillLevel = NULL;

	if ( ! pFnSetSkillLevel )
		pFnSetSkillLevel = (UFunction*) UObject::GObjObjects()->Data[ 209992 ];

	AMechaSkillManager_execSetSkillLevel_Parms SetSkillLevel_Parms;
	memcpy ( &SetSkillLevel_Parms.SkillName, &SkillName, 0x8 );
	SetSkillLevel_Parms.Level = Level;

	this->ProcessEvent ( pFnSetSkillLevel, &SetSkillLevel_Parms, NULL );
};

// Function MechaGame.MechaSkillManager.StopSkillByName
// [0x00020002] 
// Parameters infos:
// struct FName                   SkillName                      ( CPF_Parm )

void AMechaSkillManager::StopSkillByName ( struct FName SkillName )
{
	static UFunction* pFnStopSkillByName = NULL;

	if ( ! pFnStopSkillByName )
		pFnStopSkillByName = (UFunction*) UObject::GObjObjects()->Data[ 209989 ];

	AMechaSkillManager_execStopSkillByName_Parms StopSkillByName_Parms;
	memcpy ( &StopSkillByName_Parms.SkillName, &SkillName, 0x8 );

	this->ProcessEvent ( pFnStopSkillByName, &StopSkillByName_Parms, NULL );
};

// Function MechaGame.MechaSkillManager.StopSkill
// [0x00024002] 
// Parameters infos:
// int                            Index                          ( CPF_OptionalParm | CPF_Parm )

void AMechaSkillManager::StopSkill ( int Index )
{
	static UFunction* pFnStopSkill = NULL;

	if ( ! pFnStopSkill )
		pFnStopSkill = (UFunction*) UObject::GObjObjects()->Data[ 209986 ];

	AMechaSkillManager_execStopSkill_Parms StopSkill_Parms;
	StopSkill_Parms.Index = Index;

	this->ProcessEvent ( pFnStopSkill, &StopSkill_Parms, NULL );
};

// Function MechaGame.MechaSkillManager.StartSkillByName
// [0x00020002] 
// Parameters infos:
// struct FName                   SkillName                      ( CPF_Parm )

void AMechaSkillManager::StartSkillByName ( struct FName SkillName )
{
	static UFunction* pFnStartSkillByName = NULL;

	if ( ! pFnStartSkillByName )
		pFnStartSkillByName = (UFunction*) UObject::GObjObjects()->Data[ 209983 ];

	AMechaSkillManager_execStartSkillByName_Parms StartSkillByName_Parms;
	memcpy ( &StartSkillByName_Parms.SkillName, &SkillName, 0x8 );

	this->ProcessEvent ( pFnStartSkillByName, &StartSkillByName_Parms, NULL );
};

// Function MechaGame.MechaSkillManager.StartSkill
// [0x00024002] 
// Parameters infos:
// int                            Index                          ( CPF_OptionalParm | CPF_Parm )

void AMechaSkillManager::StartSkill ( int Index )
{
	static UFunction* pFnStartSkill = NULL;

	if ( ! pFnStartSkill )
		pFnStartSkill = (UFunction*) UObject::GObjObjects()->Data[ 209980 ];

	AMechaSkillManager_execStartSkill_Parms StartSkill_Parms;
	StartSkill_Parms.Index = Index;

	this->ProcessEvent ( pFnStartSkill, &StartSkill_Parms, NULL );
};

// Function MechaGame.MechaSkillManager.SetStartSignal
// [0x00020002] 
// Parameters infos:
// struct FName                   SkillName                      ( CPF_Parm )
// unsigned long                  bHasStartSignal                ( CPF_Parm )

void AMechaSkillManager::SetStartSignal ( struct FName SkillName, unsigned long bHasStartSignal )
{
	static UFunction* pFnSetStartSignal = NULL;

	if ( ! pFnSetStartSignal )
		pFnSetStartSignal = (UFunction*) UObject::GObjObjects()->Data[ 209976 ];

	AMechaSkillManager_execSetStartSignal_Parms SetStartSignal_Parms;
	memcpy ( &SetStartSignal_Parms.SkillName, &SkillName, 0x8 );
	SetStartSignal_Parms.bHasStartSignal = bHasStartSignal;

	this->ProcessEvent ( pFnSetStartSignal, &SetStartSignal_Parms, NULL );
};

// Function MechaGame.MechaSkillManager.DiscardSkills
// [0x00020002] 
// Parameters infos:

void AMechaSkillManager::DiscardSkills ( )
{
	static UFunction* pFnDiscardSkills = NULL;

	if ( ! pFnDiscardSkills )
		pFnDiscardSkills = (UFunction*) UObject::GObjObjects()->Data[ 209973 ];

	AMechaSkillManager_execDiscardSkills_Parms DiscardSkills_Parms;

	this->ProcessEvent ( pFnDiscardSkills, &DiscardSkills_Parms, NULL );
};

// Function MechaGame.MechaSkillManager.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AMechaSkillManager::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 209972 ];

	AMechaSkillManager_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function MechaGame.MechaSkillManager.CheckUniqueName
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AMechaSkillBase*         NewItem                        ( CPF_Parm )

bool AMechaSkillManager::CheckUniqueName ( class AMechaSkillBase* NewItem )
{
	static UFunction* pFnCheckUniqueName = NULL;

	if ( ! pFnCheckUniqueName )
		pFnCheckUniqueName = (UFunction*) UObject::GObjObjects()->Data[ 209968 ];

	AMechaSkillManager_execCheckUniqueName_Parms CheckUniqueName_Parms;
	CheckUniqueName_Parms.NewItem = NewItem;

	this->ProcessEvent ( pFnCheckUniqueName, &CheckUniqueName_Parms, NULL );

	return CheckUniqueName_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillManager.AddSkill
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AMechaSkillBase*         NewItem                        ( CPF_Parm )

bool AMechaSkillManager::AddSkill ( class AMechaSkillBase* NewItem )
{
	static UFunction* pFnAddSkill = NULL;

	if ( ! pFnAddSkill )
		pFnAddSkill = (UFunction*) UObject::GObjObjects()->Data[ 209963 ];

	AMechaSkillManager_execAddSkill_Parms AddSkill_Parms;
	AddSkill_Parms.NewItem = NewItem;

	this->ProcessEvent ( pFnAddSkill, &AddSkill_Parms, NULL );

	return AddSkill_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillManager.CreateSkill
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  SkillClass                     ( CPF_Parm )

bool AMechaSkillManager::CreateSkill ( class UClass* SkillClass )
{
	static UFunction* pFnCreateSkill = NULL;

	if ( ! pFnCreateSkill )
		pFnCreateSkill = (UFunction*) UObject::GObjObjects()->Data[ 209959 ];

	AMechaSkillManager_execCreateSkill_Parms CreateSkill_Parms;
	CreateSkill_Parms.SkillClass = SkillClass;

	this->ProcessEvent ( pFnCreateSkill, &CreateSkill_Parms, NULL );

	return CreateSkill_Parms.ReturnValue;
};

// Function MechaGame.MechaSkillManager.SetupSkills
// [0x00020002] 
// Parameters infos:

void AMechaSkillManager::SetupSkills ( )
{
	static UFunction* pFnSetupSkills = NULL;

	if ( ! pFnSetupSkills )
		pFnSetupSkills = (UFunction*) UObject::GObjObjects()->Data[ 209954 ];

	AMechaSkillManager_execSetupSkills_Parms SetupSkills_Parms;

	this->ProcessEvent ( pFnSetupSkills, &SetupSkills_Parms, NULL );
};

// Function MechaGame.MechaSkillManager.SetupEngery
// [0x00020002] 
// Parameters infos:

void AMechaSkillManager::SetupEngery ( )
{
	static UFunction* pFnSetupEngery = NULL;

	if ( ! pFnSetupEngery )
		pFnSetupEngery = (UFunction*) UObject::GObjObjects()->Data[ 209952 ];

	AMechaSkillManager_execSetupEngery_Parms SetupEngery_Parms;

	this->ProcessEvent ( pFnSetupEngery, &SetupEngery_Parms, NULL );
};

// Function MechaGame.MechaSkillManager.AcknowledgePawnPossession
// [0x00020002] 
// Parameters infos:

void AMechaSkillManager::AcknowledgePawnPossession ( )
{
	static UFunction* pFnAcknowledgePawnPossession = NULL;

	if ( ! pFnAcknowledgePawnPossession )
		pFnAcknowledgePawnPossession = (UFunction*) UObject::GObjObjects()->Data[ 209951 ];

	AMechaSkillManager_execAcknowledgePawnPossession_Parms AcknowledgePawnPossession_Parms;

	this->ProcessEvent ( pFnAcknowledgePawnPossession, &AcknowledgePawnPossession_Parms, NULL );
};

// Function MechaGame.MechaSkillManager.Initialize
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGMechaGamePlayerController* InOwnerPC                      ( CPF_Parm )

bool AMechaSkillManager::Initialize ( class ATGMechaGamePlayerController* InOwnerPC )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 209948 ];

	AMechaSkillManager_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.InOwnerPC = InOwnerPC;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	return Initialize_Parms.ReturnValue;
};

// Function MechaGame.MechaSkill_AirBoost.CreateSkillComponents
// [0x00020002] 
// Parameters infos:

void AMechaSkill_AirBoost::CreateSkillComponents ( )
{
	static UFunction* pFnCreateSkillComponents = NULL;

	if ( ! pFnCreateSkillComponents )
		pFnCreateSkillComponents = (UFunction*) UObject::GObjObjects()->Data[ 209711 ];

	AMechaSkill_AirBoost_execCreateSkillComponents_Parms CreateSkillComponents_Parms;

	this->ProcessEvent ( pFnCreateSkillComponents, &CreateSkillComponents_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_AirBoost.OnDeactivate
// [0x00020102] 
// Parameters infos:
// class AMechaSkillComponentBase* SkillComponent                 ( CPF_Parm )

void AMechaSkillComponent_AirBoost::OnDeactivate ( class AMechaSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnDeactivate = NULL;

	if ( ! pFnOnDeactivate )
		pFnOnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 209837 ];

	AMechaSkillComponent_AirBoost_execOnDeactivate_Parms OnDeactivate_Parms;
	OnDeactivate_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnDeactivate, &OnDeactivate_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_AirBoost.OnActivate
// [0x00020102] 
// Parameters infos:
// class AMechaSkillComponentBase* SkillComponent                 ( CPF_Parm )

void AMechaSkillComponent_AirBoost::OnActivate ( class AMechaSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 209835 ];

	AMechaSkillComponent_AirBoost_execOnActivate_Parms OnActivate_Parms;
	OnActivate_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function MechaGame.MechaSkill_Blaster.CreateSkillComponents
// [0x00020002] 
// Parameters infos:

void AMechaSkill_Blaster::CreateSkillComponents ( )
{
	static UFunction* pFnCreateSkillComponents = NULL;

	if ( ! pFnCreateSkillComponents )
		pFnCreateSkillComponents = (UFunction*) UObject::GObjObjects()->Data[ 209721 ];

	AMechaSkill_Blaster_execCreateSkillComponents_Parms CreateSkillComponents_Parms;

	this->ProcessEvent ( pFnCreateSkillComponents, &CreateSkillComponents_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_Blaster.OnActivate
// [0x00820102] 
// Parameters infos:
// class AMechaSkillComponentBase* SkillComponent                 ( CPF_Parm )

void AMechaSkillComponent_Blaster::OnActivate ( class AMechaSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 209842 ];

	AMechaSkillComponent_Blaster_execOnActivate_Parms OnActivate_Parms;
	OnActivate_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function MechaGame.MechaSkill_ClearView.CreateSkillComponents
// [0x00020002] 
// Parameters infos:

void AMechaSkill_ClearView::CreateSkillComponents ( )
{
	static UFunction* pFnCreateSkillComponents = NULL;

	if ( ! pFnCreateSkillComponents )
		pFnCreateSkillComponents = (UFunction*) UObject::GObjObjects()->Data[ 209731 ];

	AMechaSkill_ClearView_execCreateSkillComponents_Parms CreateSkillComponents_Parms;

	this->ProcessEvent ( pFnCreateSkillComponents, &CreateSkillComponents_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_ClearView.OnDeactivate
// [0x00020102] 
// Parameters infos:
// class AMechaSkillComponentBase* SkillComponent                 ( CPF_Parm )

void AMechaSkillComponent_ClearView::OnDeactivate ( class AMechaSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnDeactivate = NULL;

	if ( ! pFnOnDeactivate )
		pFnOnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 209852 ];

	AMechaSkillComponent_ClearView_execOnDeactivate_Parms OnDeactivate_Parms;
	OnDeactivate_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnDeactivate, &OnDeactivate_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_ClearView.OnActivate
// [0x00020102] 
// Parameters infos:
// class AMechaSkillComponentBase* SkillComponent                 ( CPF_Parm )

void AMechaSkillComponent_ClearView::OnActivate ( class AMechaSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 209848 ];

	AMechaSkillComponent_ClearView_execOnActivate_Parms OnActivate_Parms;
	OnActivate_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function MechaGame.MechaSkill_GroundBoost.CreateSkillComponents
// [0x00020002] 
// Parameters infos:

void AMechaSkill_GroundBoost::CreateSkillComponents ( )
{
	static UFunction* pFnCreateSkillComponents = NULL;

	if ( ! pFnCreateSkillComponents )
		pFnCreateSkillComponents = (UFunction*) UObject::GObjObjects()->Data[ 209736 ];

	AMechaSkill_GroundBoost_execCreateSkillComponents_Parms CreateSkillComponents_Parms;

	this->ProcessEvent ( pFnCreateSkillComponents, &CreateSkillComponents_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_GroundBoost.OnDeactivate
// [0x00020102] 
// Parameters infos:
// class AMechaSkillComponentBase* SkillComponent                 ( CPF_Parm )

void AMechaSkillComponent_GroundBoost::OnDeactivate ( class AMechaSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnDeactivate = NULL;

	if ( ! pFnOnDeactivate )
		pFnOnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 209869 ];

	AMechaSkillComponent_GroundBoost_execOnDeactivate_Parms OnDeactivate_Parms;
	OnDeactivate_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnDeactivate, &OnDeactivate_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_GroundBoost.OnActivate
// [0x00020102] 
// Parameters infos:
// class AMechaSkillComponentBase* SkillComponent                 ( CPF_Parm )

void AMechaSkillComponent_GroundBoost::OnActivate ( class AMechaSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 209867 ];

	AMechaSkillComponent_GroundBoost_execOnActivate_Parms OnActivate_Parms;
	OnActivate_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function MechaGame.MechaSkill_HealArea.CreateSkillComponents
// [0x00020002] 
// Parameters infos:

void AMechaSkill_HealArea::CreateSkillComponents ( )
{
	static UFunction* pFnCreateSkillComponents = NULL;

	if ( ! pFnCreateSkillComponents )
		pFnCreateSkillComponents = (UFunction*) UObject::GObjObjects()->Data[ 209745 ];

	AMechaSkill_HealArea_execCreateSkillComponents_Parms CreateSkillComponents_Parms;

	this->ProcessEvent ( pFnCreateSkillComponents, &CreateSkillComponents_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_HealArea.OnActivate
// [0x00020102] 
// Parameters infos:
// class AMechaSkillComponentBase* SkillComponent                 ( CPF_Parm )

void AMechaSkillComponent_HealArea::OnActivate ( class AMechaSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 209887 ];

	AMechaSkillComponent_HealArea_execOnActivate_Parms OnActivate_Parms;
	OnActivate_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function MechaGame.MechaSkill_SelfHeal.CreateSkillComponents
// [0x00020002] 
// Parameters infos:

void AMechaSkill_SelfHeal::CreateSkillComponents ( )
{
	static UFunction* pFnCreateSkillComponents = NULL;

	if ( ! pFnCreateSkillComponents )
		pFnCreateSkillComponents = (UFunction*) UObject::GObjObjects()->Data[ 209756 ];

	AMechaSkill_SelfHeal_execCreateSkillComponents_Parms CreateSkillComponents_Parms;

	this->ProcessEvent ( pFnCreateSkillComponents, &CreateSkillComponents_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_SelfHeal.Timer
// [0x00020002] 
// Parameters infos:

void AMechaSkillComponent_SelfHeal::Timer ( )
{
	static UFunction* pFnTimer = NULL;

	if ( ! pFnTimer )
		pFnTimer = (UFunction*) UObject::GObjObjects()->Data[ 209904 ];

	AMechaSkillComponent_SelfHeal_execTimer_Parms Timer_Parms;

	this->ProcessEvent ( pFnTimer, &Timer_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_SelfHeal.OnDeactivate
// [0x00020102] 
// Parameters infos:
// class AMechaSkillComponentBase* SkillComponent                 ( CPF_Parm )

void AMechaSkillComponent_SelfHeal::OnDeactivate ( class AMechaSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnDeactivate = NULL;

	if ( ! pFnOnDeactivate )
		pFnOnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 209902 ];

	AMechaSkillComponent_SelfHeal_execOnDeactivate_Parms OnDeactivate_Parms;
	OnDeactivate_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnDeactivate, &OnDeactivate_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_SelfHeal.OnActivate
// [0x00020102] 
// Parameters infos:
// class AMechaSkillComponentBase* SkillComponent                 ( CPF_Parm )

void AMechaSkillComponent_SelfHeal::OnActivate ( class AMechaSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 209900 ];

	AMechaSkillComponent_SelfHeal_execOnActivate_Parms OnActivate_Parms;
	OnActivate_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function MechaGame.MechaSkill_Shield.CreateSkillComponents
// [0x00020002] 
// Parameters infos:

void AMechaSkill_Shield::CreateSkillComponents ( )
{
	static UFunction* pFnCreateSkillComponents = NULL;

	if ( ! pFnCreateSkillComponents )
		pFnCreateSkillComponents = (UFunction*) UObject::GObjObjects()->Data[ 209765 ];

	AMechaSkill_Shield_execCreateSkillComponents_Parms CreateSkillComponents_Parms;

	this->ProcessEvent ( pFnCreateSkillComponents, &CreateSkillComponents_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_Shield.OnTriggerDamageEffect
// [0x00020102] 
// Parameters infos:

void AMechaSkillComponent_Shield::OnTriggerDamageEffect ( )
{
	static UFunction* pFnOnTriggerDamageEffect = NULL;

	if ( ! pFnOnTriggerDamageEffect )
		pFnOnTriggerDamageEffect = (UFunction*) UObject::GObjObjects()->Data[ 209923 ];

	AMechaSkillComponent_Shield_execOnTriggerDamageEffect_Parms OnTriggerDamageEffect_Parms;

	this->ProcessEvent ( pFnOnTriggerDamageEffect, &OnTriggerDamageEffect_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_Shield.OnShieldDestroyedCountUpdate
// [0x00020102] 
// Parameters infos:

void AMechaSkillComponent_Shield::OnShieldDestroyedCountUpdate ( )
{
	static UFunction* pFnOnShieldDestroyedCountUpdate = NULL;

	if ( ! pFnOnShieldDestroyedCountUpdate )
		pFnOnShieldDestroyedCountUpdate = (UFunction*) UObject::GObjObjects()->Data[ 209922 ];

	AMechaSkillComponent_Shield_execOnShieldDestroyedCountUpdate_Parms OnShieldDestroyedCountUpdate_Parms;

	this->ProcessEvent ( pFnOnShieldDestroyedCountUpdate, &OnShieldDestroyedCountUpdate_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_Shield.AbsorbDamage
// [0x00420002] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm | CPF_OutParm )

void AMechaSkillComponent_Shield::AbsorbDamage ( int* Damage )
{
	static UFunction* pFnAbsorbDamage = NULL;

	if ( ! pFnAbsorbDamage )
		pFnAbsorbDamage = (UFunction*) UObject::GObjObjects()->Data[ 209919 ];

	AMechaSkillComponent_Shield_execAbsorbDamage_Parms AbsorbDamage_Parms;

	this->ProcessEvent ( pFnAbsorbDamage, &AbsorbDamage_Parms, NULL );

	if ( Damage )
		*Damage = AbsorbDamage_Parms.Damage;
};

// Function MechaGame.MechaSkillComponent_Shield.OnDeactivate
// [0x00020102] 
// Parameters infos:
// class AMechaSkillComponentBase* SkillComponent                 ( CPF_Parm )

void AMechaSkillComponent_Shield::OnDeactivate ( class AMechaSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnDeactivate = NULL;

	if ( ! pFnOnDeactivate )
		pFnOnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 209917 ];

	AMechaSkillComponent_Shield_execOnDeactivate_Parms OnDeactivate_Parms;
	OnDeactivate_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnDeactivate, &OnDeactivate_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_Shield.OnActivate
// [0x00020102] 
// Parameters infos:
// class AMechaSkillComponentBase* SkillComponent                 ( CPF_Parm )

void AMechaSkillComponent_Shield::OnActivate ( class AMechaSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 209914 ];

	AMechaSkillComponent_Shield_execOnActivate_Parms OnActivate_Parms;
	OnActivate_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_Shield.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void AMechaSkillComponent_Shield::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 209912 ];

	AMechaSkillComponent_Shield_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function MechaGame.MechaSkill_Trample.CreateSkillComponents
// [0x00020002] 
// Parameters infos:

void AMechaSkill_Trample::CreateSkillComponents ( )
{
	static UFunction* pFnCreateSkillComponents = NULL;

	if ( ! pFnCreateSkillComponents )
		pFnCreateSkillComponents = (UFunction*) UObject::GObjObjects()->Data[ 209777 ];

	AMechaSkill_Trample_execCreateSkillComponents_Parms CreateSkillComponents_Parms;

	this->ProcessEvent ( pFnCreateSkillComponents, &CreateSkillComponents_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_Trample.OnActivate
// [0x00820102] 
// Parameters infos:
// class AMechaSkillComponentBase* SkillComponent                 ( CPF_Parm )

void AMechaSkillComponent_Trample::OnActivate ( class AMechaSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 209927 ];

	AMechaSkillComponent_Trample_execOnActivate_Parms OnActivate_Parms;
	OnActivate_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function MechaGame.MechaSkill_Trap.CreateSkillComponents
// [0x00020002] 
// Parameters infos:

void AMechaSkill_Trap::CreateSkillComponents ( )
{
	static UFunction* pFnCreateSkillComponents = NULL;

	if ( ! pFnCreateSkillComponents )
		pFnCreateSkillComponents = (UFunction*) UObject::GObjObjects()->Data[ 209789 ];

	AMechaSkill_Trap_execCreateSkillComponents_Parms CreateSkillComponents_Parms;

	this->ProcessEvent ( pFnCreateSkillComponents, &CreateSkillComponents_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_Trap.OnActivate
// [0x00020102] 
// Parameters infos:
// class AMechaSkillComponentBase* SkillComponent                 ( CPF_Parm )

void AMechaSkillComponent_Trap::OnActivate ( class AMechaSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 209934 ];

	AMechaSkillComponent_Trap_execOnActivate_Parms OnActivate_Parms;
	OnActivate_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function MechaGame.MechaSkill_XP.CreateSkillComponents
// [0x00020002] 
// Parameters infos:

void AMechaSkill_XP::CreateSkillComponents ( )
{
	static UFunction* pFnCreateSkillComponents = NULL;

	if ( ! pFnCreateSkillComponents )
		pFnCreateSkillComponents = (UFunction*) UObject::GObjObjects()->Data[ 209799 ];

	AMechaSkill_XP_execCreateSkillComponents_Parms CreateSkillComponents_Parms;

	this->ProcessEvent ( pFnCreateSkillComponents, &CreateSkillComponents_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_ReinforceWeapon.OnActivate
// [0x00020102] 
// Parameters infos:
// class AMechaSkillComponentBase* SkillComponent                 ( CPF_Parm )

void AMechaSkillComponent_ReinforceWeapon::OnActivate ( class AMechaSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 209897 ];

	AMechaSkillComponent_ReinforceWeapon_execOnActivate_Parms OnActivate_Parms;
	OnActivate_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_EnemyHit.OnActivate
// [0x00020102] 
// Parameters infos:
// class AMechaSkillComponentBase* SkillComponent                 ( CPF_Parm )

void AMechaSkillComponent_EnemyHit::OnActivate ( class AMechaSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 209861 ];

	AMechaSkillComponent_EnemyHit_execOnActivate_Parms OnActivate_Parms;
	OnActivate_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function MechaGame.MechaSkillComponent_Heal.OnActivate
// [0x00020102] 
// Parameters infos:
// class AMechaSkillComponentBase* SkillComponent                 ( CPF_Parm )

void AMechaSkillComponent_Heal::OnActivate ( class AMechaSkillComponentBase* SkillComponent )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 209879 ];

	AMechaSkillComponent_Heal_execOnActivate_Parms OnActivate_Parms;
	OnActivate_Parms.SkillComponent = SkillComponent;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function MechaGame.TGMechaHealArea.CauseHealTo
// [0x00020002] 
// Parameters infos:
// class ATGRealMecha*            Mecha                          ( CPF_Parm )

void ATGMechaHealArea::CauseHealTo ( class ATGRealMecha* Mecha )
{
	static UFunction* pFnCauseHealTo = NULL;

	if ( ! pFnCauseHealTo )
		pFnCauseHealTo = (UFunction*) UObject::GObjObjects()->Data[ 212880 ];

	ATGMechaHealArea_execCauseHealTo_Parms CauseHealTo_Parms;
	CauseHealTo_Parms.Mecha = Mecha;

	this->ProcessEvent ( pFnCauseHealTo, &CauseHealTo_Parms, NULL );
};

// Function MechaGame.TGMechaHealArea.Timer
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATGMechaHealArea::eventTimer ( )
{
	static UFunction* pFnTimer = NULL;

	if ( ! pFnTimer )
		pFnTimer = (UFunction*) UObject::GObjObjects()->Data[ 212878 ];

	ATGMechaHealArea_eventTimer_Parms Timer_Parms;

	this->ProcessEvent ( pFnTimer, &Timer_Parms, NULL );
};

// Function MechaGame.TGMechaHealArea.Deactivate
// [0x00020002] 
// Parameters infos:

void ATGMechaHealArea::Deactivate ( )
{
	static UFunction* pFnDeactivate = NULL;

	if ( ! pFnDeactivate )
		pFnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 212877 ];

	ATGMechaHealArea_execDeactivate_Parms Deactivate_Parms;

	this->ProcessEvent ( pFnDeactivate, &Deactivate_Parms, NULL );
};

// Function MechaGame.TGMechaHealArea.Activate
// [0x00020002] 
// Parameters infos:

void ATGMechaHealArea::Activate ( )
{
	static UFunction* pFnActivate = NULL;

	if ( ! pFnActivate )
		pFnActivate = (UFunction*) UObject::GObjObjects()->Data[ 212876 ];

	ATGMechaHealArea_execActivate_Parms Activate_Parms;

	this->ProcessEvent ( pFnActivate, &Activate_Parms, NULL );
};

// Function MechaGame.TGMechaHealArea.SetEffectsVisible
// [0x00020102] 
// Parameters infos:
// unsigned long                  bVisible                       ( CPF_Parm )

void ATGMechaHealArea::SetEffectsVisible ( unsigned long bVisible )
{
	static UFunction* pFnSetEffectsVisible = NULL;

	if ( ! pFnSetEffectsVisible )
		pFnSetEffectsVisible = (UFunction*) UObject::GObjObjects()->Data[ 212874 ];

	ATGMechaHealArea_execSetEffectsVisible_Parms SetEffectsVisible_Parms;
	SetEffectsVisible_Parms.bVisible = bVisible;

	this->ProcessEvent ( pFnSetEffectsVisible, &SetEffectsVisible_Parms, NULL );
};

// Function MechaGame.TGMechaHealArea.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaHealArea::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 212873 ];

	ATGMechaHealArea_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function MechaGame.TGMechaHealArea.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaHealArea::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 212872 ];

	ATGMechaHealArea_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaTrapArea.CauseDamageTo
// [0x00020002] 
// Parameters infos:
// class ATGRealMecha*            Mecha                          ( CPF_Parm )

void ATGMechaTrapArea::CauseDamageTo ( class ATGRealMecha* Mecha )
{
	static UFunction* pFnCauseDamageTo = NULL;

	if ( ! pFnCauseDamageTo )
		pFnCauseDamageTo = (UFunction*) UObject::GObjObjects()->Data[ 214443 ];

	ATGMechaTrapArea_execCauseDamageTo_Parms CauseDamageTo_Parms;
	CauseDamageTo_Parms.Mecha = Mecha;

	this->ProcessEvent ( pFnCauseDamageTo, &CauseDamageTo_Parms, NULL );
};

// Function MechaGame.TGMechaTrapArea.Timer
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATGMechaTrapArea::eventTimer ( )
{
	static UFunction* pFnTimer = NULL;

	if ( ! pFnTimer )
		pFnTimer = (UFunction*) UObject::GObjObjects()->Data[ 214441 ];

	ATGMechaTrapArea_eventTimer_Parms Timer_Parms;

	this->ProcessEvent ( pFnTimer, &Timer_Parms, NULL );
};

// Function MechaGame.TGMechaTrapArea.Deactivate
// [0x00020002] 
// Parameters infos:

void ATGMechaTrapArea::Deactivate ( )
{
	static UFunction* pFnDeactivate = NULL;

	if ( ! pFnDeactivate )
		pFnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 214440 ];

	ATGMechaTrapArea_execDeactivate_Parms Deactivate_Parms;

	this->ProcessEvent ( pFnDeactivate, &Deactivate_Parms, NULL );
};

// Function MechaGame.TGMechaTrapArea.Activate
// [0x00020002] 
// Parameters infos:

void ATGMechaTrapArea::Activate ( )
{
	static UFunction* pFnActivate = NULL;

	if ( ! pFnActivate )
		pFnActivate = (UFunction*) UObject::GObjObjects()->Data[ 214439 ];

	ATGMechaTrapArea_execActivate_Parms Activate_Parms;

	this->ProcessEvent ( pFnActivate, &Activate_Parms, NULL );
};

// Function MechaGame.TGMechaTrapArea.SetEffectsVisible
// [0x00020102] 
// Parameters infos:
// unsigned long                  bVisible                       ( CPF_Parm )

void ATGMechaTrapArea::SetEffectsVisible ( unsigned long bVisible )
{
	static UFunction* pFnSetEffectsVisible = NULL;

	if ( ! pFnSetEffectsVisible )
		pFnSetEffectsVisible = (UFunction*) UObject::GObjObjects()->Data[ 214437 ];

	ATGMechaTrapArea_execSetEffectsVisible_Parms SetEffectsVisible_Parms;
	SetEffectsVisible_Parms.bVisible = bVisible;

	this->ProcessEvent ( pFnSetEffectsVisible, &SetEffectsVisible_Parms, NULL );
};

// Function MechaGame.TGMechaTrapArea.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaTrapArea::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 214436 ];

	ATGMechaTrapArea_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function MechaGame.TGMechaTrapArea.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaTrapArea::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 214435 ];

	ATGMechaTrapArea_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaEnergy.GetEnergy
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGMechaEnergy::GetEnergy ( )
{
	static UFunction* pFnGetEnergy = NULL;

	if ( ! pFnGetEnergy )
		pFnGetEnergy = (UFunction*) UObject::GObjObjects()->Data[ 210027 ];

	ATGMechaEnergy_execGetEnergy_Parms GetEnergy_Parms;

	this->ProcessEvent ( pFnGetEnergy, &GetEnergy_Parms, NULL );

	return GetEnergy_Parms.ReturnValue;
};

// Function MechaGame.TGMechaEnergy.HasEnergy
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaEnergy::HasEnergy ( )
{
	static UFunction* pFnHasEnergy = NULL;

	if ( ! pFnHasEnergy )
		pFnHasEnergy = (UFunction*) UObject::GObjObjects()->Data[ 212812 ];

	ATGMechaEnergy_execHasEnergy_Parms HasEnergy_Parms;

	this->ProcessEvent ( pFnHasEnergy, &HasEnergy_Parms, NULL );

	return HasEnergy_Parms.ReturnValue;
};

// Function MechaGame.TGMechaEnergy.NotifyEnergyEmpty
// [0x00020002] 
// Parameters infos:

void ATGMechaEnergy::NotifyEnergyEmpty ( )
{
	static UFunction* pFnNotifyEnergyEmpty = NULL;

	if ( ! pFnNotifyEnergyEmpty )
		pFnNotifyEnergyEmpty = (UFunction*) UObject::GObjObjects()->Data[ 212811 ];

	ATGMechaEnergy_execNotifyEnergyEmpty_Parms NotifyEnergyEmpty_Parms;

	this->ProcessEvent ( pFnNotifyEnergyEmpty, &NotifyEnergyEmpty_Parms, NULL );
};

// Function MechaGame.TGMechaEnergy.NotifyEnergyFull
// [0x00020002] 
// Parameters infos:

void ATGMechaEnergy::NotifyEnergyFull ( )
{
	static UFunction* pFnNotifyEnergyFull = NULL;

	if ( ! pFnNotifyEnergyFull )
		pFnNotifyEnergyFull = (UFunction*) UObject::GObjObjects()->Data[ 212810 ];

	ATGMechaEnergy_execNotifyEnergyFull_Parms NotifyEnergyFull_Parms;

	this->ProcessEvent ( pFnNotifyEnergyFull, &NotifyEnergyFull_Parms, NULL );
};

// Function MechaGame.TGMechaEnergy.TimerEnergyRecover
// [0x00020002] 
// Parameters infos:

void ATGMechaEnergy::TimerEnergyRecover ( )
{
	static UFunction* pFnTimerEnergyRecover = NULL;

	if ( ! pFnTimerEnergyRecover )
		pFnTimerEnergyRecover = (UFunction*) UObject::GObjObjects()->Data[ 212809 ];

	ATGMechaEnergy_execTimerEnergyRecover_Parms TimerEnergyRecover_Parms;

	this->ProcessEvent ( pFnTimerEnergyRecover, &TimerEnergyRecover_Parms, NULL );
};

// Function MechaGame.TGMechaEnergy.EnergyRecover
// [0x00020002] 
// Parameters infos:
// float                          Rate                           ( CPF_Parm )

void ATGMechaEnergy::EnergyRecover ( float Rate )
{
	static UFunction* pFnEnergyRecover = NULL;

	if ( ! pFnEnergyRecover )
		pFnEnergyRecover = (UFunction*) UObject::GObjObjects()->Data[ 212807 ];

	ATGMechaEnergy_execEnergyRecover_Parms EnergyRecover_Parms;
	EnergyRecover_Parms.Rate = Rate;

	this->ProcessEvent ( pFnEnergyRecover, &EnergyRecover_Parms, NULL );
};

// Function MechaGame.TGMechaEnergy.EnergyConsume
// [0x00020002] 
// Parameters infos:
// float                          Rate                           ( CPF_Parm )

void ATGMechaEnergy::EnergyConsume ( float Rate )
{
	static UFunction* pFnEnergyConsume = NULL;

	if ( ! pFnEnergyConsume )
		pFnEnergyConsume = (UFunction*) UObject::GObjObjects()->Data[ 212804 ];

	ATGMechaEnergy_execEnergyConsume_Parms EnergyConsume_Parms;
	EnergyConsume_Parms.Rate = Rate;

	this->ProcessEvent ( pFnEnergyConsume, &EnergyConsume_Parms, NULL );
};

// Function MechaGame.TGMechaEnergy.Initialize
// [0x00020002] 
// Parameters infos:
// class ATGRealMecha*            Mecha                          ( CPF_Parm )
// class AMechaSkillManager*      SkillMgr                       ( CPF_Parm )

void ATGMechaEnergy::Initialize ( class ATGRealMecha* Mecha, class AMechaSkillManager* SkillMgr )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 212801 ];

	ATGMechaEnergy_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.Mecha = Mecha;
	Initialize_Parms.SkillMgr = SkillMgr;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};

// Function MechaGame.MechaSpecialMove__Death.SpecialMoveEnded
// [0x00020102] 
// Parameters infos:
// unsigned char                  PrevMove                       ( CPF_Parm )
// unsigned char                  NextMove                       ( CPF_Parm )

void UMechaSpecialMove__Death::SpecialMoveEnded ( unsigned char PrevMove, unsigned char NextMove )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 210093 ];

	UMechaSpecialMove__Death_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;
	SpecialMoveEnded_Parms.PrevMove = PrevMove;
	SpecialMoveEnded_Parms.NextMove = NextMove;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function MechaGame.MechaSpecialMove__Death.SpecialMoveStarted
// [0x00020102] 
// Parameters infos:
// unsigned long                  bForced                        ( CPF_Parm )
// unsigned char                  PrevMove                       ( CPF_Parm )

void UMechaSpecialMove__Death::SpecialMoveStarted ( unsigned long bForced, unsigned char PrevMove )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 210090 ];

	UMechaSpecialMove__Death_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;
	SpecialMoveStarted_Parms.bForced = bForced;
	SpecialMoveStarted_Parms.PrevMove = PrevMove;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function MechaGame.MechaSpecialMove__Death.CanOverrideSpecialMove
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  InMove                         ( CPF_Parm )

bool UMechaSpecialMove__Death::CanOverrideSpecialMove ( unsigned char InMove )
{
	static UFunction* pFnCanOverrideSpecialMove = NULL;

	if ( ! pFnCanOverrideSpecialMove )
		pFnCanOverrideSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 210087 ];

	UMechaSpecialMove__Death_execCanOverrideSpecialMove_Parms CanOverrideSpecialMove_Parms;
	CanOverrideSpecialMove_Parms.InMove = InMove;

	this->ProcessEvent ( pFnCanOverrideSpecialMove, &CanOverrideSpecialMove_Parms, NULL );

	return CanOverrideSpecialMove_Parms.ReturnValue;
};

// Function MechaGame.TGMechaPlayerInput.PressVKey
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTGMechaPlayerInput::PressVKey ( )
{
	static UFunction* pFnPressVKey = NULL;

	if ( ! pFnPressVKey )
		pFnPressVKey = (UFunction*) UObject::GObjObjects()->Data[ 213440 ];

	UTGMechaPlayerInput_execPressVKey_Parms PressVKey_Parms;

	this->ProcessEvent ( pFnPressVKey, &PressVKey_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerInput.UnUse
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTGMechaPlayerInput::UnUse ( )
{
	static UFunction* pFnUnUse = NULL;

	if ( ! pFnUnUse )
		pFnUnUse = (UFunction*) UObject::GObjObjects()->Data[ 213439 ];

	UTGMechaPlayerInput_execUnUse_Parms UnUse_Parms;

	this->ProcessEvent ( pFnUnUse, &UnUse_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerInput.Use
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTGMechaPlayerInput::Use ( )
{
	static UFunction* pFnUse = NULL;

	if ( ! pFnUse )
		pFnUse = (UFunction*) UObject::GObjObjects()->Data[ 213438 ];

	UTGMechaPlayerInput_execUse_Parms Use_Parms;

	this->ProcessEvent ( pFnUse, &Use_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerInput.ReleaseFKey
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTGMechaPlayerInput::ReleaseFKey ( )
{
	static UFunction* pFnReleaseFKey = NULL;

	if ( ! pFnReleaseFKey )
		pFnReleaseFKey = (UFunction*) UObject::GObjObjects()->Data[ 213437 ];

	UTGMechaPlayerInput_execReleaseFKey_Parms ReleaseFKey_Parms;

	this->ProcessEvent ( pFnReleaseFKey, &ReleaseFKey_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerInput.PressFKey
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTGMechaPlayerInput::PressFKey ( )
{
	static UFunction* pFnPressFKey = NULL;

	if ( ! pFnPressFKey )
		pFnPressFKey = (UFunction*) UObject::GObjObjects()->Data[ 213436 ];

	UTGMechaPlayerInput_execPressFKey_Parms PressFKey_Parms;

	this->ProcessEvent ( pFnPressFKey, &PressFKey_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerInput.UnSnake
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTGMechaPlayerInput::UnSnake ( )
{
	static UFunction* pFnUnSnake = NULL;

	if ( ! pFnUnSnake )
		pFnUnSnake = (UFunction*) UObject::GObjObjects()->Data[ 213435 ];

	UTGMechaPlayerInput_execUnSnake_Parms UnSnake_Parms;

	this->ProcessEvent ( pFnUnSnake, &UnSnake_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerInput.Snake
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTGMechaPlayerInput::Snake ( )
{
	static UFunction* pFnSnake = NULL;

	if ( ! pFnSnake )
		pFnSnake = (UFunction*) UObject::GObjObjects()->Data[ 213434 ];

	UTGMechaPlayerInput_execSnake_Parms Snake_Parms;

	this->ProcessEvent ( pFnSnake, &Snake_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerInput.UnJump
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTGMechaPlayerInput::UnJump ( )
{
	static UFunction* pFnUnJump = NULL;

	if ( ! pFnUnJump )
		pFnUnJump = (UFunction*) UObject::GObjObjects()->Data[ 213433 ];

	UTGMechaPlayerInput_execUnJump_Parms UnJump_Parms;

	this->ProcessEvent ( pFnUnJump, &UnJump_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerInput.Jump
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTGMechaPlayerInput::Jump ( )
{
	static UFunction* pFnJump = NULL;

	if ( ! pFnJump )
		pFnJump = (UFunction*) UObject::GObjObjects()->Data[ 213432 ];

	UTGMechaPlayerInput_execJump_Parms Jump_Parms;

	this->ProcessEvent ( pFnJump, &Jump_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerInput.SwitchToLastUsedWeapon
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTGMechaPlayerInput::SwitchToLastUsedWeapon ( )
{
	static UFunction* pFnSwitchToLastUsedWeapon = NULL;

	if ( ! pFnSwitchToLastUsedWeapon )
		pFnSwitchToLastUsedWeapon = (UFunction*) UObject::GObjObjects()->Data[ 213431 ];

	UTGMechaPlayerInput_execSwitchToLastUsedWeapon_Parms SwitchToLastUsedWeapon_Parms;

	this->ProcessEvent ( pFnSwitchToLastUsedWeapon, &SwitchToLastUsedWeapon_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerInput.SwitchWeapon
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// unsigned char                  F                              ( CPF_Parm )

void UTGMechaPlayerInput::SwitchWeapon ( unsigned char F )
{
	static UFunction* pFnSwitchWeapon = NULL;

	if ( ! pFnSwitchWeapon )
		pFnSwitchWeapon = (UFunction*) UObject::GObjObjects()->Data[ 213427 ];

	UTGMechaPlayerInput_execSwitchWeapon_Parms SwitchWeapon_Parms;
	SwitchWeapon_Parms.F = F;

	this->ProcessEvent ( pFnSwitchWeapon, &SwitchWeapon_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.PlayLocalImpactAnim
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// class AActor*                  HitActor                       ( CPF_Parm )

void ATGMechaWeapon::PlayLocalImpactAnim ( struct FVector HitLocation, class AActor* HitActor )
{
	static UFunction* pFnPlayLocalImpactAnim = NULL;

	if ( ! pFnPlayLocalImpactAnim )
		pFnPlayLocalImpactAnim = (UFunction*) UObject::GObjObjects()->Data[ 211191 ];

	ATGMechaWeapon_execPlayLocalImpactAnim_Parms PlayLocalImpactAnim_Parms;
	memcpy ( &PlayLocalImpactAnim_Parms.HitLocation, &HitLocation, 0xC );
	PlayLocalImpactAnim_Parms.HitActor = HitActor;

	this->ProcessEvent ( pFnPlayLocalImpactAnim, &PlayLocalImpactAnim_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.PlayFiringSound
// [0x00020102] 
// Parameters infos:

void ATGMechaWeapon::PlayFiringSound ( )
{
	static UFunction* pFnPlayFiringSound = NULL;

	if ( ! pFnPlayFiringSound )
		pFnPlayFiringSound = (UFunction*) UObject::GObjObjects()->Data[ 211190 ];

	ATGMechaWeapon_execPlayFiringSound_Parms PlayFiringSound_Parms;

	this->ProcessEvent ( pFnPlayFiringSound, &PlayFiringSound_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.DrawWeaponCrosshair
// [0x00020100] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGMechaWeapon::DrawWeaponCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshair = NULL;

	if ( ! pFnDrawWeaponCrosshair )
		pFnDrawWeaponCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 211188 ];

	ATGMechaWeapon_execDrawWeaponCrosshair_Parms DrawWeaponCrosshair_Parms;
	DrawWeaponCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshair, &DrawWeaponCrosshair_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.FlameThrowerServerTakeDamage
// [0x002200C0] 
// Parameters infos:
// class AActor*                  DamageActor                    ( CPF_Parm )
// int                            HitDamage                      ( CPF_Parm )
// int                            HitEnergyDamage                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  MyDamageType                   ( CPF_Parm )

void ATGMechaWeapon::FlameThrowerServerTakeDamage ( class AActor* DamageActor, int HitDamage, int HitEnergyDamage, struct FVector HitLocation, struct FVector Momentum, class UClass* MyDamageType )
{
	static UFunction* pFnFlameThrowerServerTakeDamage = NULL;

	if ( ! pFnFlameThrowerServerTakeDamage )
		pFnFlameThrowerServerTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 211181 ];

	ATGMechaWeapon_execFlameThrowerServerTakeDamage_Parms FlameThrowerServerTakeDamage_Parms;
	FlameThrowerServerTakeDamage_Parms.DamageActor = DamageActor;
	FlameThrowerServerTakeDamage_Parms.HitDamage = HitDamage;
	FlameThrowerServerTakeDamage_Parms.HitEnergyDamage = HitEnergyDamage;
	memcpy ( &FlameThrowerServerTakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &FlameThrowerServerTakeDamage_Parms.Momentum, &Momentum, 0xC );
	FlameThrowerServerTakeDamage_Parms.MyDamageType = MyDamageType;

	this->ProcessEvent ( pFnFlameThrowerServerTakeDamage, &FlameThrowerServerTakeDamage_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.ClientSyncOverheatInfo
// [0x010201C2] 
// Parameters infos:
// unsigned long                  bServerMaxOverheatingCooldownComplete ( CPF_Parm )

void ATGMechaWeapon::ClientSyncOverheatInfo ( unsigned long bServerMaxOverheatingCooldownComplete )
{
	static UFunction* pFnClientSyncOverheatInfo = NULL;

	if ( ! pFnClientSyncOverheatInfo )
		pFnClientSyncOverheatInfo = (UFunction*) UObject::GObjObjects()->Data[ 211179 ];

	ATGMechaWeapon_execClientSyncOverheatInfo_Parms ClientSyncOverheatInfo_Parms;
	ClientSyncOverheatInfo_Parms.bServerMaxOverheatingCooldownComplete = bServerMaxOverheatingCooldownComplete;

	this->ProcessEvent ( pFnClientSyncOverheatInfo, &ClientSyncOverheatInfo_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.ServerResetOverheatInfo
// [0x002200C2] 
// Parameters infos:

void ATGMechaWeapon::ServerResetOverheatInfo ( )
{
	static UFunction* pFnServerResetOverheatInfo = NULL;

	if ( ! pFnServerResetOverheatInfo )
		pFnServerResetOverheatInfo = (UFunction*) UObject::GObjObjects()->Data[ 211178 ];

	ATGMechaWeapon_execServerResetOverheatInfo_Parms ServerResetOverheatInfo_Parms;

	this->ProcessEvent ( pFnServerResetOverheatInfo, &ServerResetOverheatInfo_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.StartFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGMechaWeapon::StartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 211176 ];

	ATGMechaWeapon_execStartFire_Parms StartFire_Parms;
	StartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGMechaWeapon::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 211170 ];

	ATGMechaWeapon_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.ServerHandleFinishedFiring
// [0x002200C2] 
// Parameters infos:

void ATGMechaWeapon::ServerHandleFinishedFiring ( )
{
	static UFunction* pFnServerHandleFinishedFiring = NULL;

	if ( ! pFnServerHandleFinishedFiring )
		pFnServerHandleFinishedFiring = (UFunction*) UObject::GObjObjects()->Data[ 211169 ];

	ATGMechaWeapon_execServerHandleFinishedFiring_Parms ServerHandleFinishedFiring_Parms;

	this->ProcessEvent ( pFnServerHandleFinishedFiring, &ServerHandleFinishedFiring_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.HandleFinishedFiring
// [0x00020102] 
// Parameters infos:

void ATGMechaWeapon::HandleFinishedFiring ( )
{
	static UFunction* pFnHandleFinishedFiring = NULL;

	if ( ! pFnHandleFinishedFiring )
		pFnHandleFinishedFiring = (UFunction*) UObject::GObjObjects()->Data[ 211165 ];

	ATGMechaWeapon_execHandleFinishedFiring_Parms HandleFinishedFiring_Parms;

	this->ProcessEvent ( pFnHandleFinishedFiring, &HandleFinishedFiring_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.OnOverheatCooldownTimer
// [0x00020102] 
// Parameters infos:

void ATGMechaWeapon::OnOverheatCooldownTimer ( )
{
	static UFunction* pFnOnOverheatCooldownTimer = NULL;

	if ( ! pFnOnOverheatCooldownTimer )
		pFnOnOverheatCooldownTimer = (UFunction*) UObject::GObjObjects()->Data[ 211164 ];

	ATGMechaWeapon_execOnOverheatCooldownTimer_Parms OnOverheatCooldownTimer_Parms;

	this->ProcessEvent ( pFnOnOverheatCooldownTimer, &OnOverheatCooldownTimer_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.ServerStartFire
// [0x002200C2] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGMechaWeapon::ServerStartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnServerStartFire = NULL;

	if ( ! pFnServerStartFire )
		pFnServerStartFire = (UFunction*) UObject::GObjObjects()->Data[ 211162 ];

	ATGMechaWeapon_execServerStartFire_Parms ServerStartFire_Parms;
	ServerStartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnServerStartFire, &ServerStartFire_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.ServerReloadWeapon
// [0x002200C2] 
// Parameters infos:

void ATGMechaWeapon::ServerReloadWeapon ( )
{
	static UFunction* pFnServerReloadWeapon = NULL;

	if ( ! pFnServerReloadWeapon )
		pFnServerReloadWeapon = (UFunction*) UObject::GObjObjects()->Data[ 211161 ];

	ATGMechaWeapon_execServerReloadWeapon_Parms ServerReloadWeapon_Parms;

	this->ProcessEvent ( pFnServerReloadWeapon, &ServerReloadWeapon_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.ReloadWeapon
// [0x00020102] 
// Parameters infos:

void ATGMechaWeapon::ReloadWeapon ( )
{
	static UFunction* pFnReloadWeapon = NULL;

	if ( ! pFnReloadWeapon )
		pFnReloadWeapon = (UFunction*) UObject::GObjObjects()->Data[ 211160 ];

	ATGMechaWeapon_execReloadWeapon_Parms ReloadWeapon_Parms;

	this->ProcessEvent ( pFnReloadWeapon, &ReloadWeapon_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.OnWeaponReloadTimer
// [0x00020102] 
// Parameters infos:

void ATGMechaWeapon::OnWeaponReloadTimer ( )
{
	static UFunction* pFnOnWeaponReloadTimer = NULL;

	if ( ! pFnOnWeaponReloadTimer )
		pFnOnWeaponReloadTimer = (UFunction*) UObject::GObjObjects()->Data[ 211159 ];

	ATGMechaWeapon_execOnWeaponReloadTimer_Parms OnWeaponReloadTimer_Parms;

	this->ProcessEvent ( pFnOnWeaponReloadTimer, &OnWeaponReloadTimer_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.ClientWeaponReloadOver
// [0x010201C2] 
// Parameters infos:

void ATGMechaWeapon::ClientWeaponReloadOver ( )
{
	static UFunction* pFnClientWeaponReloadOver = NULL;

	if ( ! pFnClientWeaponReloadOver )
		pFnClientWeaponReloadOver = (UFunction*) UObject::GObjObjects()->Data[ 211158 ];

	ATGMechaWeapon_execClientWeaponReloadOver_Parms ClientWeaponReloadOver_Parms;

	this->ProcessEvent ( pFnClientWeaponReloadOver, &ClientWeaponReloadOver_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.ServerReFireAmmunition
// [0x002200C2] 
// Parameters infos:

void ATGMechaWeapon::ServerReFireAmmunition ( )
{
	static UFunction* pFnServerReFireAmmunition = NULL;

	if ( ! pFnServerReFireAmmunition )
		pFnServerReFireAmmunition = (UFunction*) UObject::GObjObjects()->Data[ 211139 ];

	ATGMechaWeapon_execServerReFireAmmunition_Parms ServerReFireAmmunition_Parms;

	this->ProcessEvent ( pFnServerReFireAmmunition, &ServerReFireAmmunition_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.WeaponPlaySoundLocalEx
// [0x00084102] 
// Parameters infos:
// class UAudioComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USoundCue*               Sound                          ( CPF_Parm )
// class USoundCue*               AltLocalSound                  ( CPF_OptionalParm | CPF_Parm )
// class UAudioComponent*         AC                             ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )
// float                          FadeInTime                     ( CPF_OptionalParm | CPF_Parm )

class UAudioComponent* ATGMechaWeapon::WeaponPlaySoundLocalEx ( class USoundCue* Sound, class USoundCue* AltLocalSound, class UAudioComponent* AC, float FadeInTime )
{
	static UFunction* pFnWeaponPlaySoundLocalEx = NULL;

	if ( ! pFnWeaponPlaySoundLocalEx )
		pFnWeaponPlaySoundLocalEx = (UFunction*) UObject::GObjObjects()->Data[ 211122 ];

	ATGMechaWeapon_execWeaponPlaySoundLocalEx_Parms WeaponPlaySoundLocalEx_Parms;
	WeaponPlaySoundLocalEx_Parms.Sound = Sound;
	WeaponPlaySoundLocalEx_Parms.AltLocalSound = AltLocalSound;
	WeaponPlaySoundLocalEx_Parms.AC = AC;
	WeaponPlaySoundLocalEx_Parms.FadeInTime = FadeInTime;

	this->ProcessEvent ( pFnWeaponPlaySoundLocalEx, &WeaponPlaySoundLocalEx_Parms, NULL );

	return WeaponPlaySoundLocalEx_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeapon.GetCurrAimDisperseType
// [0x00020102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char ATGMechaWeapon::GetCurrAimDisperseType ( )
{
	static UFunction* pFnGetCurrAimDisperseType = NULL;

	if ( ! pFnGetCurrAimDisperseType )
		pFnGetCurrAimDisperseType = (UFunction*) UObject::GObjObjects()->Data[ 211119 ];

	ATGMechaWeapon_execGetCurrAimDisperseType_Parms GetCurrAimDisperseType_Parms;

	this->ProcessEvent ( pFnGetCurrAimDisperseType, &GetCurrAimDisperseType_Parms, NULL );

	return GetCurrAimDisperseType_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeapon.GetPhysicalFireStartLoc
// [0x00024102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 AimDir                         ( CPF_OptionalParm | CPF_Parm )

struct FVector ATGMechaWeapon::GetPhysicalFireStartLoc ( struct FVector AimDir )
{
	static UFunction* pFnGetPhysicalFireStartLoc = NULL;

	if ( ! pFnGetPhysicalFireStartLoc )
		pFnGetPhysicalFireStartLoc = (UFunction*) UObject::GObjObjects()->Data[ 211112 ];

	ATGMechaWeapon_execGetPhysicalFireStartLoc_Parms GetPhysicalFireStartLoc_Parms;
	memcpy ( &GetPhysicalFireStartLoc_Parms.AimDir, &AimDir, 0xC );

	this->ProcessEvent ( pFnGetPhysicalFireStartLoc, &GetPhysicalFireStartLoc_Parms, NULL );

	return GetPhysicalFireStartLoc_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeapon.WeaponEmpty
// [0x00020102] 
// Parameters infos:

void ATGMechaWeapon::WeaponEmpty ( )
{
	static UFunction* pFnWeaponEmpty = NULL;

	if ( ! pFnWeaponEmpty )
		pFnWeaponEmpty = (UFunction*) UObject::GObjObjects()->Data[ 211111 ];

	ATGMechaWeapon_execWeaponEmpty_Parms WeaponEmpty_Parms;

	this->ProcessEvent ( pFnWeaponEmpty, &WeaponEmpty_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.DetachWeapon
// [0x00020102] 
// Parameters infos:

void ATGMechaWeapon::DetachWeapon ( )
{
	static UFunction* pFnDetachWeapon = NULL;

	if ( ! pFnDetachWeapon )
		pFnDetachWeapon = (UFunction*) UObject::GObjObjects()->Data[ 211109 ];

	ATGMechaWeapon_execDetachWeapon_Parms DetachWeapon_Parms;

	this->ProcessEvent ( pFnDetachWeapon, &DetachWeapon_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.AttachWeaponTo
// [0x00024102] 
// Parameters infos:
// class USkeletalMeshComponent*  MeshCpnt                       ( CPF_Parm | CPF_EditInline )
// struct FName                   SocketName                     ( CPF_OptionalParm | CPF_Parm )

void ATGMechaWeapon::AttachWeaponTo ( class USkeletalMeshComponent* MeshCpnt, struct FName SocketName )
{
	static UFunction* pFnAttachWeaponTo = NULL;

	if ( ! pFnAttachWeaponTo )
		pFnAttachWeaponTo = (UFunction*) UObject::GObjObjects()->Data[ 211105 ];

	ATGMechaWeapon_execAttachWeaponTo_Parms AttachWeaponTo_Parms;
	AttachWeaponTo_Parms.MeshCpnt = MeshCpnt;
	memcpy ( &AttachWeaponTo_Parms.SocketName, &SocketName, 0x8 );

	this->ProcessEvent ( pFnAttachWeaponTo, &AttachWeaponTo_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.ConsumeAmmo
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGMechaWeapon::ConsumeAmmo ( unsigned char FireModeNum )
{
	static UFunction* pFnConsumeAmmo = NULL;

	if ( ! pFnConsumeAmmo )
		pFnConsumeAmmo = (UFunction*) UObject::GObjObjects()->Data[ 211103 ];

	ATGMechaWeapon_execConsumeAmmo_Parms ConsumeAmmo_Parms;
	ConsumeAmmo_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnConsumeAmmo, &ConsumeAmmo_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.AddAmmo
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Amount                         ( CPF_Parm )

int ATGMechaWeapon::AddAmmo ( int Amount )
{
	static UFunction* pFnAddAmmo = NULL;

	if ( ! pFnAddAmmo )
		pFnAddAmmo = (UFunction*) UObject::GObjObjects()->Data[ 211100 ];

	ATGMechaWeapon_execAddAmmo_Parms AddAmmo_Parms;
	AddAmmo_Parms.Amount = Amount;

	this->ProcessEvent ( pFnAddAmmo, &AddAmmo_Parms, NULL );

	return AddAmmo_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeapon.HasAnyAmmo
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaWeapon::HasAnyAmmo ( )
{
	static UFunction* pFnHasAnyAmmo = NULL;

	if ( ! pFnHasAnyAmmo )
		pFnHasAnyAmmo = (UFunction*) UObject::GObjObjects()->Data[ 211098 ];

	ATGMechaWeapon_execHasAnyAmmo_Parms HasAnyAmmo_Parms;

	this->ProcessEvent ( pFnHasAnyAmmo, &HasAnyAmmo_Parms, NULL );

	return HasAnyAmmo_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeapon.HasAmmo
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  FireModeNum                    ( CPF_Parm )
// int                            Amount                         ( CPF_OptionalParm | CPF_Parm )

bool ATGMechaWeapon::HasAmmo ( unsigned char FireModeNum, int Amount )
{
	static UFunction* pFnHasAmmo = NULL;

	if ( ! pFnHasAmmo )
		pFnHasAmmo = (UFunction*) UObject::GObjObjects()->Data[ 210307 ];

	ATGMechaWeapon_execHasAmmo_Parms HasAmmo_Parms;
	HasAmmo_Parms.FireModeNum = FireModeNum;
	HasAmmo_Parms.Amount = Amount;

	this->ProcessEvent ( pFnHasAmmo, &HasAmmo_Parms, NULL );

	return HasAmmo_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeapon.MaxRange
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGMechaWeapon::MaxRange ( )
{
	static UFunction* pFnMaxRange = NULL;

	if ( ! pFnMaxRange )
		pFnMaxRange = (UFunction*) UObject::GObjObjects()->Data[ 211094 ];

	ATGMechaWeapon_execMaxRange_Parms MaxRange_Parms;

	this->ProcessEvent ( pFnMaxRange, &MaxRange_Parms, NULL );

	return MaxRange_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeapon.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaWeapon::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 211092 ];

	ATGMechaWeapon_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaWeapon.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGMechaWeapon::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 211090 ];

	ATGMechaWeapon_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function MechaGame.TGMechaInventoryManager.SetCurrentWeapon
// [0x010201C2] 
// Parameters infos:
// class AWeapon*                 DesiredWeapon                  ( CPF_Parm )

void ATGMechaInventoryManager::SetCurrentWeapon ( class AWeapon* DesiredWeapon )
{
	static UFunction* pFnSetCurrentWeapon = NULL;

	if ( ! pFnSetCurrentWeapon )
		pFnSetCurrentWeapon = (UFunction*) UObject::GObjObjects()->Data[ 213078 ];

	ATGMechaInventoryManager_execSetCurrentWeapon_Parms SetCurrentWeapon_Parms;
	SetCurrentWeapon_Parms.DesiredWeapon = DesiredWeapon;

	this->ProcessEvent ( pFnSetCurrentWeapon, &SetCurrentWeapon_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.PlayMeleeHitCameraShake
// [0x00020102] 
// Parameters infos:

void ATGMechaWeaponAttachment::PlayMeleeHitCameraShake ( )
{
	static UFunction* pFnPlayMeleeHitCameraShake = NULL;

	if ( ! pFnPlayMeleeHitCameraShake )
		pFnPlayMeleeHitCameraShake = (UFunction*) UObject::GObjObjects()->Data[ 214209 ];

	ATGMechaWeaponAttachment_execPlayMeleeHitCameraShake_Parms PlayMeleeHitCameraShake_Parms;

	this->ProcessEvent ( pFnPlayMeleeHitCameraShake, &PlayMeleeHitCameraShake_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.PlayFireCameraEffects
// [0x00020102] 
// Parameters infos:

void ATGMechaWeaponAttachment::PlayFireCameraEffects ( )
{
	static UFunction* pFnPlayFireCameraEffects = NULL;

	if ( ! pFnPlayFireCameraEffects )
		pFnPlayFireCameraEffects = (UFunction*) UObject::GObjObjects()->Data[ 214207 ];

	ATGMechaWeaponAttachment_execPlayFireCameraEffects_Parms PlayFireCameraEffects_Parms;

	this->ProcessEvent ( pFnPlayFireCameraEffects, &PlayFireCameraEffects_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.GetPhysicalFireStartLoc
// [0x00024100] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_OptionalParm | CPF_Parm )

struct FVector ATGMechaWeaponAttachment::GetPhysicalFireStartLoc ( int Index )
{
	static UFunction* pFnGetPhysicalFireStartLoc = NULL;

	if ( ! pFnGetPhysicalFireStartLoc )
		pFnGetPhysicalFireStartLoc = (UFunction*) UObject::GObjObjects()->Data[ 211117 ];

	ATGMechaWeaponAttachment_execGetPhysicalFireStartLoc_Parms GetPhysicalFireStartLoc_Parms;
	GetPhysicalFireStartLoc_Parms.Index = Index;

	this->ProcessEvent ( pFnGetPhysicalFireStartLoc, &GetPhysicalFireStartLoc_Parms, NULL );

	return GetPhysicalFireStartLoc_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeaponAttachment.SetFireSocket
// [0x00020102] 
// Parameters infos:

void ATGMechaWeaponAttachment::SetFireSocket ( )
{
	static UFunction* pFnSetFireSocket = NULL;

	if ( ! pFnSetFireSocket )
		pFnSetFireSocket = (UFunction*) UObject::GObjObjects()->Data[ 214205 ];

	ATGMechaWeaponAttachment_execSetFireSocket_Parms SetFireSocket_Parms;

	this->ProcessEvent ( pFnSetFireSocket, &SetFireSocket_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.ThirdPersonProjFireEffects
// [0x00020100] 
// Parameters infos:
// struct FReplicatedEffectsInfo  InProjWeapEffectsInfo          ( CPF_Parm )

void ATGMechaWeaponAttachment::ThirdPersonProjFireEffects ( struct FReplicatedEffectsInfo InProjWeapEffectsInfo )
{
	static UFunction* pFnThirdPersonProjFireEffects = NULL;

	if ( ! pFnThirdPersonProjFireEffects )
		pFnThirdPersonProjFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 214203 ];

	ATGMechaWeaponAttachment_execThirdPersonProjFireEffects_Parms ThirdPersonProjFireEffects_Parms;
	memcpy ( &ThirdPersonProjFireEffects_Parms.InProjWeapEffectsInfo, &InProjWeapEffectsInfo, 0x10 );

	this->ProcessEvent ( pFnThirdPersonProjFireEffects, &ThirdPersonProjFireEffects_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.ThirdPersonFireEffects
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGMechaWeaponAttachment::ThirdPersonFireEffects ( struct FVector HitLocation )
{
	static UFunction* pFnThirdPersonFireEffects = NULL;

	if ( ! pFnThirdPersonFireEffects )
		pFnThirdPersonFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 214201 ];

	ATGMechaWeaponAttachment_execThirdPersonFireEffects_Parms ThirdPersonFireEffects_Parms;
	memcpy ( &ThirdPersonFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnThirdPersonFireEffects, &ThirdPersonFireEffects_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.PlayFireOverAnim
// [0x00020102] 
// Parameters infos:

void ATGMechaWeaponAttachment::PlayFireOverAnim ( )
{
	static UFunction* pFnPlayFireOverAnim = NULL;

	if ( ! pFnPlayFireOverAnim )
		pFnPlayFireOverAnim = (UFunction*) UObject::GObjObjects()->Data[ 214200 ];

	ATGMechaWeaponAttachment_execPlayFireOverAnim_Parms PlayFireOverAnim_Parms;

	this->ProcessEvent ( pFnPlayFireOverAnim, &PlayFireOverAnim_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.PlayMechaProjWeaponFireAnim
// [0x00020100] 
// Parameters infos:
// struct FReplicatedEffectsInfo  InProjWeapEffectsInfo          ( CPF_Parm )

void ATGMechaWeaponAttachment::PlayMechaProjWeaponFireAnim ( struct FReplicatedEffectsInfo InProjWeapEffectsInfo )
{
	static UFunction* pFnPlayMechaProjWeaponFireAnim = NULL;

	if ( ! pFnPlayMechaProjWeaponFireAnim )
		pFnPlayMechaProjWeaponFireAnim = (UFunction*) UObject::GObjObjects()->Data[ 214198 ];

	ATGMechaWeaponAttachment_execPlayMechaProjWeaponFireAnim_Parms PlayMechaProjWeaponFireAnim_Parms;
	memcpy ( &PlayMechaProjWeaponFireAnim_Parms.InProjWeapEffectsInfo, &InProjWeapEffectsInfo, 0x10 );

	this->ProcessEvent ( pFnPlayMechaProjWeaponFireAnim, &PlayMechaProjWeaponFireAnim_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.PlayMechaWeaponReloadSound
// [0x00020102] 
// Parameters infos:

void ATGMechaWeaponAttachment::PlayMechaWeaponReloadSound ( )
{
	static UFunction* pFnPlayMechaWeaponReloadSound = NULL;

	if ( ! pFnPlayMechaWeaponReloadSound )
		pFnPlayMechaWeaponReloadSound = (UFunction*) UObject::GObjObjects()->Data[ 214197 ];

	ATGMechaWeaponAttachment_execPlayMechaWeaponReloadSound_Parms PlayMechaWeaponReloadSound_Parms;

	this->ProcessEvent ( pFnPlayMechaWeaponReloadSound, &PlayMechaWeaponReloadSound_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.PlayMechaWeaponReloadAnim
// [0x00020102] 
// Parameters infos:

void ATGMechaWeaponAttachment::PlayMechaWeaponReloadAnim ( )
{
	static UFunction* pFnPlayMechaWeaponReloadAnim = NULL;

	if ( ! pFnPlayMechaWeaponReloadAnim )
		pFnPlayMechaWeaponReloadAnim = (UFunction*) UObject::GObjObjects()->Data[ 214196 ];

	ATGMechaWeaponAttachment_execPlayMechaWeaponReloadAnim_Parms PlayMechaWeaponReloadAnim_Parms;

	this->ProcessEvent ( pFnPlayMechaWeaponReloadAnim, &PlayMechaWeaponReloadAnim_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.PlayMechaWeaponFireAnim
// [0x00020102] 
// Parameters infos:

void ATGMechaWeaponAttachment::PlayMechaWeaponFireAnim ( )
{
	static UFunction* pFnPlayMechaWeaponFireAnim = NULL;

	if ( ! pFnPlayMechaWeaponFireAnim )
		pFnPlayMechaWeaponFireAnim = (UFunction*) UObject::GObjObjects()->Data[ 214195 ];

	ATGMechaWeaponAttachment_execPlayMechaWeaponFireAnim_Parms PlayMechaWeaponFireAnim_Parms;

	this->ProcessEvent ( pFnPlayMechaWeaponFireAnim, &PlayMechaWeaponFireAnim_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.PlayImpactEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGMechaWeaponAttachment::PlayImpactEffects ( struct FVector HitLocation )
{
	static UFunction* pFnPlayImpactEffects = NULL;

	if ( ! pFnPlayImpactEffects )
		pFnPlayImpactEffects = (UFunction*) UObject::GObjObjects()->Data[ 214178 ];

	ATGMechaWeaponAttachment_execPlayImpactEffects_Parms PlayImpactEffects_Parms;
	memcpy ( &PlayImpactEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayImpactEffects, &PlayImpactEffects_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.SpawnTracerEffect
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGMechaWeaponAttachment::SpawnTracerEffect ( struct FVector HitLocation )
{
	static UFunction* pFnSpawnTracerEffect = NULL;

	if ( ! pFnSpawnTracerEffect )
		pFnSpawnTracerEffect = (UFunction*) UObject::GObjObjects()->Data[ 214164 ];

	ATGMechaWeaponAttachment_execSpawnTracerEffect_Parms SpawnTracerEffect_Parms;
	memcpy ( &SpawnTracerEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnTracerEffect, &SpawnTracerEffect_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.GetCurrEffectSocketAndMesh
// [0x00420102] 
// Parameters infos:
// struct FName                   CurrSocketName                 ( CPF_Parm | CPF_OutParm )
// class USkeletalMeshComponent*  CurrMesh                       ( CPF_Parm | CPF_OutParm | CPF_EditInline )

void ATGMechaWeaponAttachment::GetCurrEffectSocketAndMesh ( struct FName* CurrSocketName, class USkeletalMeshComponent** CurrMesh )
{
	static UFunction* pFnGetCurrEffectSocketAndMesh = NULL;

	if ( ! pFnGetCurrEffectSocketAndMesh )
		pFnGetCurrEffectSocketAndMesh = (UFunction*) UObject::GObjObjects()->Data[ 214161 ];

	ATGMechaWeaponAttachment_execGetCurrEffectSocketAndMesh_Parms GetCurrEffectSocketAndMesh_Parms;

	this->ProcessEvent ( pFnGetCurrEffectSocketAndMesh, &GetCurrEffectSocketAndMesh_Parms, NULL );

	if ( CurrSocketName )
		memcpy ( CurrSocketName, &GetCurrEffectSocketAndMesh_Parms.CurrSocketName, 0x8 );

	if ( CurrMesh )
		*CurrMesh = GetCurrEffectSocketAndMesh_Parms.CurrMesh;
};

// Function MechaGame.TGMechaWeaponAttachment.MuzzleFlashTimer
// [0x00020102] 
// Parameters infos:

void ATGMechaWeaponAttachment::MuzzleFlashTimer ( )
{
	static UFunction* pFnMuzzleFlashTimer = NULL;

	if ( ! pFnMuzzleFlashTimer )
		pFnMuzzleFlashTimer = (UFunction*) UObject::GObjObjects()->Data[ 214160 ];

	ATGMechaWeaponAttachment_execMuzzleFlashTimer_Parms MuzzleFlashTimer_Parms;

	this->ProcessEvent ( pFnMuzzleFlashTimer, &MuzzleFlashTimer_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.StopMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGMechaWeaponAttachment::StopMuzzleFlash ( )
{
	static UFunction* pFnStopMuzzleFlash = NULL;

	if ( ! pFnStopMuzzleFlash )
		pFnStopMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 214159 ];

	ATGMechaWeaponAttachment_execStopMuzzleFlash_Parms StopMuzzleFlash_Parms;

	this->ProcessEvent ( pFnStopMuzzleFlash, &StopMuzzleFlash_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.PlayReplicatedEffects
// [0x00020100] 
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGMechaWeaponAttachment::PlayReplicatedEffects ( struct FName VarName )
{
	static UFunction* pFnPlayReplicatedEffects = NULL;

	if ( ! pFnPlayReplicatedEffects )
		pFnPlayReplicatedEffects = (UFunction*) UObject::GObjObjects()->Data[ 214157 ];

	ATGMechaWeaponAttachment_execPlayReplicatedEffects_Parms PlayReplicatedEffects_Parms;
	memcpy ( &PlayReplicatedEffects_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnPlayReplicatedEffects, &PlayReplicatedEffects_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.ProjWeapCauseReplicatedMuzzleFlash
// [0x00020100] 
// Parameters infos:
// struct FReplicatedEffectsInfo  RepEffectsInfo                 ( CPF_Parm )

void ATGMechaWeaponAttachment::ProjWeapCauseReplicatedMuzzleFlash ( struct FReplicatedEffectsInfo RepEffectsInfo )
{
	static UFunction* pFnProjWeapCauseReplicatedMuzzleFlash = NULL;

	if ( ! pFnProjWeapCauseReplicatedMuzzleFlash )
		pFnProjWeapCauseReplicatedMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 214155 ];

	ATGMechaWeaponAttachment_execProjWeapCauseReplicatedMuzzleFlash_Parms ProjWeapCauseReplicatedMuzzleFlash_Parms;
	memcpy ( &ProjWeapCauseReplicatedMuzzleFlash_Parms.RepEffectsInfo, &RepEffectsInfo, 0x10 );

	this->ProcessEvent ( pFnProjWeapCauseReplicatedMuzzleFlash, &ProjWeapCauseReplicatedMuzzleFlash_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.CauseMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGMechaWeaponAttachment::CauseMuzzleFlash ( )
{
	static UFunction* pFnCauseMuzzleFlash = NULL;

	if ( ! pFnCauseMuzzleFlash )
		pFnCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 214153 ];

	ATGMechaWeaponAttachment_execCauseMuzzleFlash_Parms CauseMuzzleFlash_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlash, &CauseMuzzleFlash_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.DetachMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGMechaWeaponAttachment::DetachMuzzleFlash ( )
{
	static UFunction* pFnDetachMuzzleFlash = NULL;

	if ( ! pFnDetachMuzzleFlash )
		pFnDetachMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 214152 ];

	ATGMechaWeaponAttachment_execDetachMuzzleFlash_Parms DetachMuzzleFlash_Parms;

	this->ProcessEvent ( pFnDetachMuzzleFlash, &DetachMuzzleFlash_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.AttachMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGMechaWeaponAttachment::AttachMuzzleFlash ( )
{
	static UFunction* pFnAttachMuzzleFlash = NULL;

	if ( ! pFnAttachMuzzleFlash )
		pFnAttachMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 214151 ];

	ATGMechaWeaponAttachment_execAttachMuzzleFlash_Parms AttachMuzzleFlash_Parms;

	this->ProcessEvent ( pFnAttachMuzzleFlash, &AttachMuzzleFlash_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.DetachFrom
// [0x00020102] 
// Parameters infos:
// class USkeletalMeshComponent*  MeshCpnt                       ( CPF_Parm | CPF_EditInline )

void ATGMechaWeaponAttachment::DetachFrom ( class USkeletalMeshComponent* MeshCpnt )
{
	static UFunction* pFnDetachFrom = NULL;

	if ( ! pFnDetachFrom )
		pFnDetachFrom = (UFunction*) UObject::GObjObjects()->Data[ 214149 ];

	ATGMechaWeaponAttachment_execDetachFrom_Parms DetachFrom_Parms;
	DetachFrom_Parms.MeshCpnt = MeshCpnt;

	this->ProcessEvent ( pFnDetachFrom, &DetachFrom_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.AttachToMecha
// [0x00020102] 
// Parameters infos:
// class ATGRealMechaBase*        AttachOwnerMecha               ( CPF_Parm )

void ATGMechaWeaponAttachment::AttachToMecha ( class ATGRealMechaBase* AttachOwnerMecha )
{
	static UFunction* pFnAttachToMecha = NULL;

	if ( ! pFnAttachToMecha )
		pFnAttachToMecha = (UFunction*) UObject::GObjObjects()->Data[ 214147 ];

	ATGMechaWeaponAttachment_execAttachToMecha_Parms AttachToMecha_Parms;
	AttachToMecha_Parms.AttachOwnerMecha = AttachOwnerMecha;

	this->ProcessEvent ( pFnAttachToMecha, &AttachToMecha_Parms, NULL );
};

// Function MechaGame.TGMechaWeaponAttachment.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaWeaponAttachment::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 214146 ];

	ATGMechaWeaponAttachment_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaVolume.GetAttackerCount
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ATGMechaVolume::GetAttackerCount ( )
{
	static UFunction* pFnGetAttackerCount = NULL;

	if ( ! pFnGetAttackerCount )
		pFnGetAttackerCount = (UFunction*) UObject::GObjObjects()->Data[ 210522 ];

	ATGMechaVolume_execGetAttackerCount_Parms GetAttackerCount_Parms;

	this->ProcessEvent ( pFnGetAttackerCount, &GetAttackerCount_Parms, NULL );

	return GetAttackerCount_Parms.ReturnValue;
};

// Function MechaGame.TGMechaVolume.UnTouch
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void ATGMechaVolume::eventUnTouch ( class AActor* Other )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 210519 ];

	ATGMechaVolume_eventUnTouch_Parms UnTouch_Parms;
	UnTouch_Parms.Other = Other;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function MechaGame.TGMechaVolume.Touch
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGMechaVolume::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 210510 ];

	ATGMechaVolume_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function MechaGame.TGMechaDoorSwitchVolume.PostRenderFor
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void ATGMechaDoorSwitchVolume::eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnPostRenderFor = NULL;

	if ( ! pFnPostRenderFor )
		pFnPostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 212711 ];

	ATGMechaDoorSwitchVolume_eventPostRenderFor_Parms PostRenderFor_Parms;
	PostRenderFor_Parms.PC = PC;
	PostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &PostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &PostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	this->ProcessEvent ( pFnPostRenderFor, &PostRenderFor_Parms, NULL );
};

// Function MechaGame.TGMechaDoorSwitchVolume.SetEnabled
// [0x00020002] 
// Parameters infos:
// unsigned long                  bInEnabled                     ( CPF_Parm )

void ATGMechaDoorSwitchVolume::SetEnabled ( unsigned long bInEnabled )
{
	static UFunction* pFnSetEnabled = NULL;

	if ( ! pFnSetEnabled )
		pFnSetEnabled = (UFunction*) UObject::GObjObjects()->Data[ 212706 ];

	ATGMechaDoorSwitchVolume_execSetEnabled_Parms SetEnabled_Parms;
	SetEnabled_Parms.bInEnabled = bInEnabled;

	this->ProcessEvent ( pFnSetEnabled, &SetEnabled_Parms, NULL );
};

// Function MechaGame.TGMechaDoorSwitchVolume.Reset
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATGMechaDoorSwitchVolume::eventReset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 212705 ];

	ATGMechaDoorSwitchVolume_eventReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function MechaGame.TGMechaDoorSwitchVolume.CheckSwitchState
// [0x00024002] 
// Parameters infos:
// class ATGRealMecha*            UnTouchPawn                    ( CPF_OptionalParm | CPF_Parm )

void ATGMechaDoorSwitchVolume::CheckSwitchState ( class ATGRealMecha* UnTouchPawn )
{
	static UFunction* pFnCheckSwitchState = NULL;

	if ( ! pFnCheckSwitchState )
		pFnCheckSwitchState = (UFunction*) UObject::GObjObjects()->Data[ 212698 ];

	ATGMechaDoorSwitchVolume_execCheckSwitchState_Parms CheckSwitchState_Parms;
	CheckSwitchState_Parms.UnTouchPawn = UnTouchPawn;

	this->ProcessEvent ( pFnCheckSwitchState, &CheckSwitchState_Parms, NULL );
};

// Function MechaGame.TGMechaDoorSwitchVolume.UnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void ATGMechaDoorSwitchVolume::eventUnTouch ( class AActor* Other )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 212694 ];

	ATGMechaDoorSwitchVolume_eventUnTouch_Parms UnTouch_Parms;
	UnTouch_Parms.Other = Other;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function MechaGame.TGMechaDoorSwitchVolume.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGMechaDoorSwitchVolume::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 212687 ];

	ATGMechaDoorSwitchVolume_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function MechaGame.TGMechaEffectComponent.EndBuring
// [0x00020002] 
// Parameters infos:

void UTGMechaEffectComponent::EndBuring ( )
{
	static UFunction* pFnEndBuring = NULL;

	if ( ! pFnEndBuring )
		pFnEndBuring = (UFunction*) UObject::GObjObjects()->Data[ 212792 ];

	UTGMechaEffectComponent_execEndBuring_Parms EndBuring_Parms;

	this->ProcessEvent ( pFnEndBuring, &EndBuring_Parms, NULL );
};

// Function MechaGame.TGMechaEffectComponent.UpdateFireDamageTimer
// [0x00020002] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// float                          FireLastTimeOutTemp            ( CPF_Parm )
// float                          ContinuousFireDamageTemp       ( CPF_Parm )
// float                          FireTakeDamageFrequencyTemp    ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )

void UTGMechaEffectComponent::UpdateFireDamageTimer ( class UClass* DamageType, float FireLastTimeOutTemp, float ContinuousFireDamageTemp, float FireTakeDamageFrequencyTemp, class AController* InstigatedBy )
{
	static UFunction* pFnUpdateFireDamageTimer = NULL;

	if ( ! pFnUpdateFireDamageTimer )
		pFnUpdateFireDamageTimer = (UFunction*) UObject::GObjObjects()->Data[ 212785 ];

	UTGMechaEffectComponent_execUpdateFireDamageTimer_Parms UpdateFireDamageTimer_Parms;
	UpdateFireDamageTimer_Parms.DamageType = DamageType;
	UpdateFireDamageTimer_Parms.FireLastTimeOutTemp = FireLastTimeOutTemp;
	UpdateFireDamageTimer_Parms.ContinuousFireDamageTemp = ContinuousFireDamageTemp;
	UpdateFireDamageTimer_Parms.FireTakeDamageFrequencyTemp = FireTakeDamageFrequencyTemp;
	UpdateFireDamageTimer_Parms.InstigatedBy = InstigatedBy;

	this->ProcessEvent ( pFnUpdateFireDamageTimer, &UpdateFireDamageTimer_Parms, NULL );
};

// Function MechaGame.TGMechaEffectComponent.FireTimer
// [0x00020002] 
// Parameters infos:

void UTGMechaEffectComponent::FireTimer ( )
{
	static UFunction* pFnFireTimer = NULL;

	if ( ! pFnFireTimer )
		pFnFireTimer = (UFunction*) UObject::GObjObjects()->Data[ 212783 ];

	UTGMechaEffectComponent_execFireTimer_Parms FireTimer_Parms;

	this->ProcessEvent ( pFnFireTimer, &FireTimer_Parms, NULL );
};

// Function MechaGame.TGMechaEffectComponent.TakeFiringDamage
// [0x00020002] 
// Parameters infos:

void UTGMechaEffectComponent::TakeFiringDamage ( )
{
	static UFunction* pFnTakeFiringDamage = NULL;

	if ( ! pFnTakeFiringDamage )
		pFnTakeFiringDamage = (UFunction*) UObject::GObjObjects()->Data[ 212781 ];

	UTGMechaEffectComponent_execTakeFiringDamage_Parms TakeFiringDamage_Parms;

	this->ProcessEvent ( pFnTakeFiringDamage, &TakeFiringDamage_Parms, NULL );
};

// Function MechaGame.TGMechaEffectComponent.EveryTickUpdate
// [0x00020102] 
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void UTGMechaEffectComponent::EveryTickUpdate ( float DeltaSeconds )
{
	static UFunction* pFnEveryTickUpdate = NULL;

	if ( ! pFnEveryTickUpdate )
		pFnEveryTickUpdate = (UFunction*) UObject::GObjObjects()->Data[ 212779 ];

	UTGMechaEffectComponent_execEveryTickUpdate_Parms EveryTickUpdate_Parms;
	EveryTickUpdate_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnEveryTickUpdate, &EveryTickUpdate_Parms, NULL );
};

// Function MechaGame.TGMechaEffectComponent.PlayFireHitEffect
// [0x00020100] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGMechaEffectComponent::PlayFireHitEffect ( class UClass* DamageType, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnPlayFireHitEffect = NULL;

	if ( ! pFnPlayFireHitEffect )
		pFnPlayFireHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 212773 ];

	UTGMechaEffectComponent_execPlayFireHitEffect_Parms PlayFireHitEffect_Parms;
	PlayFireHitEffect_Parms.DamageType = DamageType;
	PlayFireHitEffect_Parms.Damage = Damage;
	memcpy ( &PlayFireHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &PlayFireHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &PlayFireHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayFireHitEffect, &PlayFireHitEffect_Parms, NULL );
};

// Function MechaGame.TGMechaEffectComponent.PlayFireEffect
// [0x00020100] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UTGMechaEffectComponent::PlayFireEffect ( class UClass* DamageType, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnPlayFireEffect = NULL;

	if ( ! pFnPlayFireEffect )
		pFnPlayFireEffect = (UFunction*) UObject::GObjObjects()->Data[ 212767 ];

	UTGMechaEffectComponent_execPlayFireEffect_Parms PlayFireEffect_Parms;
	PlayFireEffect_Parms.DamageType = DamageType;
	PlayFireEffect_Parms.Damage = Damage;
	memcpy ( &PlayFireEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &PlayFireEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &PlayFireEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayFireEffect, &PlayFireEffect_Parms, NULL );
};

// Function MechaGame.TGMechaEffectComponent.ProcessFireEffect
// [0x00024100] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void UTGMechaEffectComponent::ProcessFireEffect ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FName BoneName, class AActor* DamageCauser )
{
	static UFunction* pFnProcessFireEffect = NULL;

	if ( ! pFnProcessFireEffect )
		pFnProcessFireEffect = (UFunction*) UObject::GObjObjects()->Data[ 212759 ];

	UTGMechaEffectComponent_execProcessFireEffect_Parms ProcessFireEffect_Parms;
	ProcessFireEffect_Parms.Damage = Damage;
	ProcessFireEffect_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &ProcessFireEffect_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessFireEffect_Parms.Momentum, &Momentum, 0xC );
	ProcessFireEffect_Parms.DamageType = DamageType;
	memcpy ( &ProcessFireEffect_Parms.BoneName, &BoneName, 0x8 );
	ProcessFireEffect_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnProcessFireEffect, &ProcessFireEffect_Parms, NULL );
};

// Function MechaGame.TGMechaEffectComponent.ProcessTakeDamage
// [0x00024102] 
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void UTGMechaEffectComponent::ProcessTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnProcessTakeDamage = NULL;

	if ( ! pFnProcessTakeDamage )
		pFnProcessTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 212751 ];

	UTGMechaEffectComponent_execProcessTakeDamage_Parms ProcessTakeDamage_Parms;
	ProcessTakeDamage_Parms.Damage = Damage;
	ProcessTakeDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &ProcessTakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTakeDamage_Parms.Momentum, &Momentum, 0xC );
	ProcessTakeDamage_Parms.DamageType = DamageType;
	memcpy ( &ProcessTakeDamage_Parms.HitInfo, &HitInfo, 0x20 );
	ProcessTakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnProcessTakeDamage, &ProcessTakeDamage_Parms, NULL );
};

// Function MechaGame.TGMechaEffectComponent.Initialize
// [0x00020100] 
// Parameters infos:
// TArray< class USkeletalMeshComponent* > MeshList                       ( CPF_Parm | CPF_NeedCtorLink | CPF_EditInline )

void UTGMechaEffectComponent::Initialize ( TArray< class USkeletalMeshComponent* > MeshList )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 212748 ];

	UTGMechaEffectComponent_execInitialize_Parms Initialize_Parms;
	memcpy ( &Initialize_Parms.MeshList, &MeshList, 0xC );

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};

// Function MechaGame.TGMechaEffectComponent.IsFlameThrowerDamageType
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  DamageType                     ( CPF_Parm )

bool UTGMechaEffectComponent::IsFlameThrowerDamageType ( class UClass* DamageType )
{
	static UFunction* pFnIsFlameThrowerDamageType = NULL;

	if ( ! pFnIsFlameThrowerDamageType )
		pFnIsFlameThrowerDamageType = (UFunction*) UObject::GObjObjects()->Data[ 212745 ];

	UTGMechaEffectComponent_execIsFlameThrowerDamageType_Parms IsFlameThrowerDamageType_Parms;
	IsFlameThrowerDamageType_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnIsFlameThrowerDamageType, &IsFlameThrowerDamageType_Parms, NULL );

	return IsFlameThrowerDamageType_Parms.ReturnValue;
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.IncrementDeaths
// [0x00024002] 
// Parameters infos:
// int                            Amt                            ( CPF_OptionalParm | CPF_Parm )
// class UClass*                  DamageType                     ( CPF_OptionalParm | CPF_Parm )

void ATGMechaDMPlayerReplicationInfo::IncrementDeaths ( int Amt, class UClass* DamageType )
{
	static UFunction* pFnIncrementDeaths = NULL;

	if ( ! pFnIncrementDeaths )
		pFnIncrementDeaths = (UFunction*) UObject::GObjObjects()->Data[ 212642 ];

	ATGMechaDMPlayerReplicationInfo_execIncrementDeaths_Parms IncrementDeaths_Parms;
	IncrementDeaths_Parms.Amt = Amt;
	IncrementDeaths_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnIncrementDeaths, &IncrementDeaths_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.RoundClear
// [0x00020002] 
// Parameters infos:

void ATGMechaDMPlayerReplicationInfo::RoundClear ( )
{
	static UFunction* pFnRoundClear = NULL;

	if ( ! pFnRoundClear )
		pFnRoundClear = (UFunction*) UObject::GObjObjects()->Data[ 212640 ];

	ATGMechaDMPlayerReplicationInfo_execRoundClear_Parms RoundClear_Parms;

	this->ProcessEvent ( pFnRoundClear, &RoundClear_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.TimerAddXPForDoorSwitch
// [0x00020002] 
// Parameters infos:

void ATGMechaDMPlayerReplicationInfo::TimerAddXPForDoorSwitch ( )
{
	static UFunction* pFnTimerAddXPForDoorSwitch = NULL;

	if ( ! pFnTimerAddXPForDoorSwitch )
		pFnTimerAddXPForDoorSwitch = (UFunction*) UObject::GObjObjects()->Data[ 212638 ];

	ATGMechaDMPlayerReplicationInfo_execTimerAddXPForDoorSwitch_Parms TimerAddXPForDoorSwitch_Parms;

	this->ProcessEvent ( pFnTimerAddXPForDoorSwitch, &TimerAddXPForDoorSwitch_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.SetContinuousXPSupplyEnabled
// [0x00020002] 
// Parameters infos:
// unsigned long                  bInVolume                      ( CPF_Parm )

void ATGMechaDMPlayerReplicationInfo::SetContinuousXPSupplyEnabled ( unsigned long bInVolume )
{
	static UFunction* pFnSetContinuousXPSupplyEnabled = NULL;

	if ( ! pFnSetContinuousXPSupplyEnabled )
		pFnSetContinuousXPSupplyEnabled = (UFunction*) UObject::GObjObjects()->Data[ 212636 ];

	ATGMechaDMPlayerReplicationInfo_execSetContinuousXPSupplyEnabled_Parms SetContinuousXPSupplyEnabled_Parms;
	SetContinuousXPSupplyEnabled_Parms.bInVolume = bInVolume;

	this->ProcessEvent ( pFnSetContinuousXPSupplyEnabled, &SetContinuousXPSupplyEnabled_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.NotifyHealBase
// [0x00020002] 
// Parameters infos:
// int                            Heal                           ( CPF_Parm )

void ATGMechaDMPlayerReplicationInfo::NotifyHealBase ( int Heal )
{
	static UFunction* pFnNotifyHealBase = NULL;

	if ( ! pFnNotifyHealBase )
		pFnNotifyHealBase = (UFunction*) UObject::GObjObjects()->Data[ 212634 ];

	ATGMechaDMPlayerReplicationInfo_execNotifyHealBase_Parms NotifyHealBase_Parms;
	NotifyHealBase_Parms.Heal = Heal;

	this->ProcessEvent ( pFnNotifyHealBase, &NotifyHealBase_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.NotifyItemSmite
// [0x00020002] 
// Parameters infos:

void ATGMechaDMPlayerReplicationInfo::NotifyItemSmite ( )
{
	static UFunction* pFnNotifyItemSmite = NULL;

	if ( ! pFnNotifyItemSmite )
		pFnNotifyItemSmite = (UFunction*) UObject::GObjObjects()->Data[ 212633 ];

	ATGMechaDMPlayerReplicationInfo_execNotifyItemSmite_Parms NotifyItemSmite_Parms;

	this->ProcessEvent ( pFnNotifyItemSmite, &NotifyItemSmite_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.NotifyRoundWin
// [0x00020002] 
// Parameters infos:

void ATGMechaDMPlayerReplicationInfo::NotifyRoundWin ( )
{
	static UFunction* pFnNotifyRoundWin = NULL;

	if ( ! pFnNotifyRoundWin )
		pFnNotifyRoundWin = (UFunction*) UObject::GObjObjects()->Data[ 212632 ];

	ATGMechaDMPlayerReplicationInfo_execNotifyRoundWin_Parms NotifyRoundWin_Parms;

	this->ProcessEvent ( pFnNotifyRoundWin, &NotifyRoundWin_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.TimerAddXP
// [0x00020002] 
// Parameters infos:

void ATGMechaDMPlayerReplicationInfo::TimerAddXP ( )
{
	static UFunction* pFnTimerAddXP = NULL;

	if ( ! pFnTimerAddXP )
		pFnTimerAddXP = (UFunction*) UObject::GObjObjects()->Data[ 212630 ];

	ATGMechaDMPlayerReplicationInfo_execTimerAddXP_Parms TimerAddXP_Parms;

	this->ProcessEvent ( pFnTimerAddXP, &TimerAddXP_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.TimerAddGameScore
// [0x00020002] 
// Parameters infos:

void ATGMechaDMPlayerReplicationInfo::TimerAddGameScore ( )
{
	static UFunction* pFnTimerAddGameScore = NULL;

	if ( ! pFnTimerAddGameScore )
		pFnTimerAddGameScore = (UFunction*) UObject::GObjObjects()->Data[ 212628 ];

	ATGMechaDMPlayerReplicationInfo_execTimerAddGameScore_Parms TimerAddGameScore_Parms;

	this->ProcessEvent ( pFnTimerAddGameScore, &TimerAddGameScore_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.SetPlayerTeam
// [0x00020002] 
// Parameters infos:
// class ATeamInfo*               NewTeam                        ( CPF_Parm )

void ATGMechaDMPlayerReplicationInfo::SetPlayerTeam ( class ATeamInfo* NewTeam )
{
	static UFunction* pFnSetPlayerTeam = NULL;

	if ( ! pFnSetPlayerTeam )
		pFnSetPlayerTeam = (UFunction*) UObject::GObjObjects()->Data[ 212626 ];

	ATGMechaDMPlayerReplicationInfo_execSetPlayerTeam_Parms SetPlayerTeam_Parms;
	SetPlayerTeam_Parms.NewTeam = NewTeam;

	this->ProcessEvent ( pFnSetPlayerTeam, &SetPlayerTeam_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.NotifyChangeSides
// [0x00020002] 
// Parameters infos:

void ATGMechaDMPlayerReplicationInfo::NotifyChangeSides ( )
{
	static UFunction* pFnNotifyChangeSides = NULL;

	if ( ! pFnNotifyChangeSides )
		pFnNotifyChangeSides = (UFunction*) UObject::GObjObjects()->Data[ 212625 ];

	ATGMechaDMPlayerReplicationInfo_execNotifyChangeSides_Parms NotifyChangeSides_Parms;

	this->ProcessEvent ( pFnNotifyChangeSides, &NotifyChangeSides_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.SetupOffendDefend
// [0x00020002] 
// Parameters infos:

void ATGMechaDMPlayerReplicationInfo::SetupOffendDefend ( )
{
	static UFunction* pFnSetupOffendDefend = NULL;

	if ( ! pFnSetupOffendDefend )
		pFnSetupOffendDefend = (UFunction*) UObject::GObjObjects()->Data[ 212624 ];

	ATGMechaDMPlayerReplicationInfo_execSetupOffendDefend_Parms SetupOffendDefend_Parms;

	this->ProcessEvent ( pFnSetupOffendDefend, &SetupOffendDefend_Parms, NULL );
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.IsDefender
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaDMPlayerReplicationInfo::IsDefender ( )
{
	static UFunction* pFnIsDefender = NULL;

	if ( ! pFnIsDefender )
		pFnIsDefender = (UFunction*) UObject::GObjObjects()->Data[ 210888 ];

	ATGMechaDMPlayerReplicationInfo_execIsDefender_Parms IsDefender_Parms;

	this->ProcessEvent ( pFnIsDefender, &IsDefender_Parms, NULL );

	return IsDefender_Parms.ReturnValue;
};

// Function MechaGame.TGMechaDMPlayerReplicationInfo.IsAttacker
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaDMPlayerReplicationInfo::IsAttacker ( )
{
	static UFunction* pFnIsAttacker = NULL;

	if ( ! pFnIsAttacker )
		pFnIsAttacker = (UFunction*) UObject::GObjObjects()->Data[ 210883 ];

	ATGMechaDMPlayerReplicationInfo_execIsAttacker_Parms IsAttacker_Parms;

	this->ProcessEvent ( pFnIsAttacker, &IsAttacker_Parms, NULL );

	return IsAttacker_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeapAttachment_Thunder.PlayImpactEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGMechaWeapAttachment_Thunder::PlayImpactEffects ( struct FVector HitLocation )
{
	static UFunction* pFnPlayImpactEffects = NULL;

	if ( ! pFnPlayImpactEffects )
		pFnPlayImpactEffects = (UFunction*) UObject::GObjObjects()->Data[ 215902 ];

	ATGMechaWeapAttachment_Thunder_execPlayImpactEffects_Parms PlayImpactEffects_Parms;
	memcpy ( &PlayImpactEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayImpactEffects, &PlayImpactEffects_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_Thunder.GetThunderImpactEffect
// [0x00020102] 
// Parameters infos:
// struct FMaterialImpactEffect   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class AActor*                  HitActor                       ( CPF_Parm )

struct FMaterialImpactEffect ATGMechaWeapAttachment_Thunder::GetThunderImpactEffect ( class AActor* HitActor )
{
	static UFunction* pFnGetThunderImpactEffect = NULL;

	if ( ! pFnGetThunderImpactEffect )
		pFnGetThunderImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 215899 ];

	ATGMechaWeapAttachment_Thunder_execGetThunderImpactEffect_Parms GetThunderImpactEffect_Parms;
	GetThunderImpactEffect_Parms.HitActor = HitActor;

	this->ProcessEvent ( pFnGetThunderImpactEffect, &GetThunderImpactEffect_Parms, NULL );

	return GetThunderImpactEffect_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeapAttachment_Thunder.GetCurrEffectSocketAndMesh
// [0x00420102] 
// Parameters infos:
// struct FName                   CurrSocketName                 ( CPF_Parm | CPF_OutParm )
// class USkeletalMeshComponent*  CurrMesh                       ( CPF_Parm | CPF_OutParm | CPF_EditInline )

void ATGMechaWeapAttachment_Thunder::GetCurrEffectSocketAndMesh ( struct FName* CurrSocketName, class USkeletalMeshComponent** CurrMesh )
{
	static UFunction* pFnGetCurrEffectSocketAndMesh = NULL;

	if ( ! pFnGetCurrEffectSocketAndMesh )
		pFnGetCurrEffectSocketAndMesh = (UFunction*) UObject::GObjObjects()->Data[ 215896 ];

	ATGMechaWeapAttachment_Thunder_execGetCurrEffectSocketAndMesh_Parms GetCurrEffectSocketAndMesh_Parms;

	this->ProcessEvent ( pFnGetCurrEffectSocketAndMesh, &GetCurrEffectSocketAndMesh_Parms, NULL );

	if ( CurrSocketName )
		memcpy ( CurrSocketName, &GetCurrEffectSocketAndMesh_Parms.CurrSocketName, 0x8 );

	if ( CurrMesh )
		*CurrMesh = GetCurrEffectSocketAndMesh_Parms.CurrMesh;
};

// Function MechaGame.TGMechaWeapAttachment_Thunder.SpawnTracerEffect
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGMechaWeapAttachment_Thunder::SpawnTracerEffect ( struct FVector HitLocation )
{
	static UFunction* pFnSpawnTracerEffect = NULL;

	if ( ! pFnSpawnTracerEffect )
		pFnSpawnTracerEffect = (UFunction*) UObject::GObjObjects()->Data[ 215894 ];

	ATGMechaWeapAttachment_Thunder_execSpawnTracerEffect_Parms SpawnTracerEffect_Parms;
	memcpy ( &SpawnTracerEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnTracerEffect, &SpawnTracerEffect_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_Thunder.DeactiveCritFireEffect
// [0x00020102] 
// Parameters infos:

void ATGMechaWeapAttachment_Thunder::DeactiveCritFireEffect ( )
{
	static UFunction* pFnDeactiveCritFireEffect = NULL;

	if ( ! pFnDeactiveCritFireEffect )
		pFnDeactiveCritFireEffect = (UFunction*) UObject::GObjObjects()->Data[ 215893 ];

	ATGMechaWeapAttachment_Thunder_execDeactiveCritFireEffect_Parms DeactiveCritFireEffect_Parms;

	this->ProcessEvent ( pFnDeactiveCritFireEffect, &DeactiveCritFireEffect_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_Thunder.ActiveCritFireEffect
// [0x00020102] 
// Parameters infos:

void ATGMechaWeapAttachment_Thunder::ActiveCritFireEffect ( )
{
	static UFunction* pFnActiveCritFireEffect = NULL;

	if ( ! pFnActiveCritFireEffect )
		pFnActiveCritFireEffect = (UFunction*) UObject::GObjObjects()->Data[ 215892 ];

	ATGMechaWeapAttachment_Thunder_execActiveCritFireEffect_Parms ActiveCritFireEffect_Parms;

	this->ProcessEvent ( pFnActiveCritFireEffect, &ActiveCritFireEffect_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_Thunder.SetThunderAttachmentCritEffect
// [0x00020102] 
// Parameters infos:
// unsigned long                  bCritShot                      ( CPF_Parm )

void ATGMechaWeapAttachment_Thunder::SetThunderAttachmentCritEffect ( unsigned long bCritShot )
{
	static UFunction* pFnSetThunderAttachmentCritEffect = NULL;

	if ( ! pFnSetThunderAttachmentCritEffect )
		pFnSetThunderAttachmentCritEffect = (UFunction*) UObject::GObjObjects()->Data[ 215890 ];

	ATGMechaWeapAttachment_Thunder_execSetThunderAttachmentCritEffect_Parms SetThunderAttachmentCritEffect_Parms;
	SetThunderAttachmentCritEffect_Parms.bCritShot = bCritShot;

	this->ProcessEvent ( pFnSetThunderAttachmentCritEffect, &SetThunderAttachmentCritEffect_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_Thunder.DetachFrom
// [0x00020102] 
// Parameters infos:
// class USkeletalMeshComponent*  MeshCpnt                       ( CPF_Parm | CPF_EditInline )

void ATGMechaWeapAttachment_Thunder::DetachFrom ( class USkeletalMeshComponent* MeshCpnt )
{
	static UFunction* pFnDetachFrom = NULL;

	if ( ! pFnDetachFrom )
		pFnDetachFrom = (UFunction*) UObject::GObjObjects()->Data[ 215888 ];

	ATGMechaWeapAttachment_Thunder_execDetachFrom_Parms DetachFrom_Parms;
	DetachFrom_Parms.MeshCpnt = MeshCpnt;

	this->ProcessEvent ( pFnDetachFrom, &DetachFrom_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_Thunder.AttachToMecha
// [0x00020102] 
// Parameters infos:
// class ATGRealMechaBase*        AttachOwnerMecha               ( CPF_Parm )

void ATGMechaWeapAttachment_Thunder::AttachToMecha ( class ATGRealMechaBase* AttachOwnerMecha )
{
	static UFunction* pFnAttachToMecha = NULL;

	if ( ! pFnAttachToMecha )
		pFnAttachToMecha = (UFunction*) UObject::GObjObjects()->Data[ 215886 ];

	ATGMechaWeapAttachment_Thunder_execAttachToMecha_Parms AttachToMecha_Parms;
	AttachToMecha_Parms.AttachOwnerMecha = AttachOwnerMecha;

	this->ProcessEvent ( pFnAttachToMecha, &AttachToMecha_Parms, NULL );
};

// Function MechaGame.TGMecha_Havok.OnKeyDown_Space
// [0x00020002] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGMecha_Havok::OnKeyDown_Space ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyDown_Space = NULL;

	if ( ! pFnOnKeyDown_Space )
		pFnOnKeyDown_Space = (UFunction*) UObject::GObjObjects()->Data[ 210927 ];

	ATGMecha_Havok_execOnKeyDown_Space_Parms OnKeyDown_Space_Parms;
	OnKeyDown_Space_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyDown_Space, &OnKeyDown_Space_Parms, NULL );
};

// Function MechaGame.TGMecha_Havok.OnKeyDown_F
// [0x00020002] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGMecha_Havok::OnKeyDown_F ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyDown_F = NULL;

	if ( ! pFnOnKeyDown_F )
		pFnOnKeyDown_F = (UFunction*) UObject::GObjObjects()->Data[ 210925 ];

	ATGMecha_Havok_execOnKeyDown_F_Parms OnKeyDown_F_Parms;
	OnKeyDown_F_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyDown_F, &OnKeyDown_F_Parms, NULL );
};

// Function MechaGame.TGMecha_HulkBuster.OnKeyDown_Space
// [0x00020002] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGMecha_HulkBuster::OnKeyDown_Space ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyDown_Space = NULL;

	if ( ! pFnOnKeyDown_Space )
		pFnOnKeyDown_Space = (UFunction*) UObject::GObjObjects()->Data[ 210965 ];

	ATGMecha_HulkBuster_execOnKeyDown_Space_Parms OnKeyDown_Space_Parms;
	OnKeyDown_Space_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyDown_Space, &OnKeyDown_Space_Parms, NULL );
};

// Function MechaGame.TGMecha_HulkBuster.OnKeyDown_F
// [0x00020002] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGMecha_HulkBuster::OnKeyDown_F ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyDown_F = NULL;

	if ( ! pFnOnKeyDown_F )
		pFnOnKeyDown_F = (UFunction*) UObject::GObjObjects()->Data[ 210963 ];

	ATGMecha_HulkBuster_execOnKeyDown_F_Parms OnKeyDown_F_Parms;
	OnKeyDown_F_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyDown_F, &OnKeyDown_F_Parms, NULL );
};

// Function MechaGame.TGMecha_HulkBuster.NotifySkillStateChanged
// [0x00020102] 
// Parameters infos:
// class UClass*                  SkillCompClass                 ( CPF_Parm )
// unsigned long                  bActive                        ( CPF_Parm )

void ATGMecha_HulkBuster::NotifySkillStateChanged ( class UClass* SkillCompClass, unsigned long bActive )
{
	static UFunction* pFnNotifySkillStateChanged = NULL;

	if ( ! pFnNotifySkillStateChanged )
		pFnNotifySkillStateChanged = (UFunction*) UObject::GObjObjects()->Data[ 210960 ];

	ATGMecha_HulkBuster_execNotifySkillStateChanged_Parms NotifySkillStateChanged_Parms;
	NotifySkillStateChanged_Parms.SkillCompClass = SkillCompClass;
	NotifySkillStateChanged_Parms.bActive = bActive;

	this->ProcessEvent ( pFnNotifySkillStateChanged, &NotifySkillStateChanged_Parms, NULL );
};

// Function MechaGame.TGMecha_HulkBuster.PlayShieldAnimation
// [0x00020102] 
// Parameters infos:
// unsigned long                  bShieldActive                  ( CPF_Parm )

void ATGMecha_HulkBuster::PlayShieldAnimation ( unsigned long bShieldActive )
{
	static UFunction* pFnPlayShieldAnimation = NULL;

	if ( ! pFnPlayShieldAnimation )
		pFnPlayShieldAnimation = (UFunction*) UObject::GObjObjects()->Data[ 210954 ];

	ATGMecha_HulkBuster_execPlayShieldAnimation_Parms PlayShieldAnimation_Parms;
	PlayShieldAnimation_Parms.bShieldActive = bShieldActive;

	this->ProcessEvent ( pFnPlayShieldAnimation, &PlayShieldAnimation_Parms, NULL );
};

// Function MechaGame.TGMecha_HulkBuster.AttachShieldItem
// [0x00020102] 
// Parameters infos:

void ATGMecha_HulkBuster::AttachShieldItem ( )
{
	static UFunction* pFnAttachShieldItem = NULL;

	if ( ! pFnAttachShieldItem )
		pFnAttachShieldItem = (UFunction*) UObject::GObjObjects()->Data[ 210952 ];

	ATGMecha_HulkBuster_execAttachShieldItem_Parms AttachShieldItem_Parms;

	this->ProcessEvent ( pFnAttachShieldItem, &AttachShieldItem_Parms, NULL );
};

// Function MechaGame.TGMecha_HulkBuster.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMecha_HulkBuster::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 210951 ];

	ATGMecha_HulkBuster_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMecha_Punisher.OnKeyDown_Space
// [0x00020002] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGMecha_Punisher::OnKeyDown_Space ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyDown_Space = NULL;

	if ( ! pFnOnKeyDown_Space )
		pFnOnKeyDown_Space = (UFunction*) UObject::GObjObjects()->Data[ 210982 ];

	ATGMecha_Punisher_execOnKeyDown_Space_Parms OnKeyDown_Space_Parms;
	OnKeyDown_Space_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyDown_Space, &OnKeyDown_Space_Parms, NULL );
};

// Function MechaGame.TGMecha_Punisher.OnKeyDown_F
// [0x00020002] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGMecha_Punisher::OnKeyDown_F ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyDown_F = NULL;

	if ( ! pFnOnKeyDown_F )
		pFnOnKeyDown_F = (UFunction*) UObject::GObjObjects()->Data[ 210980 ];

	ATGMecha_Punisher_execOnKeyDown_F_Parms OnKeyDown_F_Parms;
	OnKeyDown_F_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyDown_F, &OnKeyDown_F_Parms, NULL );
};

// Function MechaGame.TGMecha_Punisher.PlayeDyingEffect
// [0x00020102] 
// Parameters infos:

void ATGMecha_Punisher::PlayeDyingEffect ( )
{
	static UFunction* pFnPlayeDyingEffect = NULL;

	if ( ! pFnPlayeDyingEffect )
		pFnPlayeDyingEffect = (UFunction*) UObject::GObjObjects()->Data[ 210976 ];

	ATGMecha_Punisher_execPlayeDyingEffect_Parms PlayeDyingEffect_Parms;

	this->ProcessEvent ( pFnPlayeDyingEffect, &PlayeDyingEffect_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_HPFDetector.DrawWeaponZoomInHUD
// [0x00020102] 
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )

void ATGMechaWeap_HPFDetector::DrawWeaponZoomInHUD ( class ATGHUD* HUD )
{
	static UFunction* pFnDrawWeaponZoomInHUD = NULL;

	if ( ! pFnDrawWeaponZoomInHUD )
		pFnDrawWeaponZoomInHUD = (UFunction*) UObject::GObjObjects()->Data[ 215313 ];

	ATGMechaWeap_HPFDetector_execDrawWeaponZoomInHUD_Parms DrawWeaponZoomInHUD_Parms;
	DrawWeaponZoomInHUD_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponZoomInHUD, &DrawWeaponZoomInHUD_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_HPFDetector.DrawWeaponCrosshair
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGMechaWeap_HPFDetector::DrawWeaponCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshair = NULL;

	if ( ! pFnDrawWeaponCrosshair )
		pFnDrawWeaponCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 215305 ];

	ATGMechaWeap_HPFDetector_execDrawWeaponCrosshair_Parms DrawWeaponCrosshair_Parms;
	DrawWeaponCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshair, &DrawWeaponCrosshair_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_HPFDetector.SpecialFire
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_HPFDetector::SpecialFire ( )
{
	static UFunction* pFnSpecialFire = NULL;

	if ( ! pFnSpecialFire )
		pFnSpecialFire = (UFunction*) UObject::GObjObjects()->Data[ 215303 ];

	ATGMechaWeap_HPFDetector_execSpecialFire_Parms SpecialFire_Parms;

	this->ProcessEvent ( pFnSpecialFire, &SpecialFire_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_HPFDetector.HolderDied
// [0x00020002] 
// Parameters infos:

void ATGMechaWeap_HPFDetector::HolderDied ( )
{
	static UFunction* pFnHolderDied = NULL;

	if ( ! pFnHolderDied )
		pFnHolderDied = (UFunction*) UObject::GObjObjects()->Data[ 215302 ];

	ATGMechaWeap_HPFDetector_execHolderDied_Parms HolderDied_Parms;

	this->ProcessEvent ( pFnHolderDied, &HolderDied_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_HPFDetector.ServerSetLockingTarget
// [0x002200C2] 
// Parameters infos:
// class ATGRealMecha*            NewMecha                       ( CPF_Parm )

void ATGMechaWeap_HPFDetector::ServerSetLockingTarget ( class ATGRealMecha* NewMecha )
{
	static UFunction* pFnServerSetLockingTarget = NULL;

	if ( ! pFnServerSetLockingTarget )
		pFnServerSetLockingTarget = (UFunction*) UObject::GObjObjects()->Data[ 215299 ];

	ATGMechaWeap_HPFDetector_execServerSetLockingTarget_Parms ServerSetLockingTarget_Parms;
	ServerSetLockingTarget_Parms.NewMecha = NewMecha;

	this->ProcessEvent ( pFnServerSetLockingTarget, &ServerSetLockingTarget_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_HPFDetector.SetLockingTarget
// [0x00020102] 
// Parameters infos:
// class ATGRealMecha*            NewMecha                       ( CPF_Parm )

void ATGMechaWeap_HPFDetector::SetLockingTarget ( class ATGRealMecha* NewMecha )
{
	static UFunction* pFnSetLockingTarget = NULL;

	if ( ! pFnSetLockingTarget )
		pFnSetLockingTarget = (UFunction*) UObject::GObjObjects()->Data[ 215297 ];

	ATGMechaWeap_HPFDetector_execSetLockingTarget_Parms SetLockingTarget_Parms;
	SetLockingTarget_Parms.NewMecha = NewMecha;

	this->ProcessEvent ( pFnSetLockingTarget, &SetLockingTarget_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_HPFDetector.CheckLockingTarget
// [0x00820102] 
// Parameters infos:

void ATGMechaWeap_HPFDetector::CheckLockingTarget ( )
{
	static UFunction* pFnCheckLockingTarget = NULL;

	if ( ! pFnCheckLockingTarget )
		pFnCheckLockingTarget = (UFunction*) UObject::GObjObjects()->Data[ 215287 ];

	ATGMechaWeap_HPFDetector_execCheckLockingTarget_Parms CheckLockingTarget_Parms;

	this->ProcessEvent ( pFnCheckLockingTarget, &CheckLockingTarget_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_HPFDetector.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGMechaWeap_HPFDetector::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 215285 ];

	ATGMechaWeap_HPFDetector_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_HPFDetector.ServerSwitchZoom
// [0x002200C2] 
// Parameters infos:

void ATGMechaWeap_HPFDetector::ServerSwitchZoom ( )
{
	static UFunction* pFnServerSwitchZoom = NULL;

	if ( ! pFnServerSwitchZoom )
		pFnServerSwitchZoom = (UFunction*) UObject::GObjObjects()->Data[ 215284 ];

	ATGMechaWeap_HPFDetector_execServerSwitchZoom_Parms ServerSwitchZoom_Parms;

	this->ProcessEvent ( pFnServerSwitchZoom, &ServerSwitchZoom_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_HPFDetector.StartFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGMechaWeap_HPFDetector::StartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 215282 ];

	ATGMechaWeap_HPFDetector_execStartFire_Parms StartFire_Parms;
	StartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_HPFDetector.SwitchZoom
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_HPFDetector::SwitchZoom ( )
{
	static UFunction* pFnSwitchZoom = NULL;

	if ( ! pFnSwitchZoom )
		pFnSwitchZoom = (UFunction*) UObject::GObjObjects()->Data[ 215277 ];

	ATGMechaWeap_HPFDetector_execSwitchZoom_Parms SwitchZoom_Parms;

	this->ProcessEvent ( pFnSwitchZoom, &SwitchZoom_Parms, NULL );
};

// Function MechaGame.TGMecha_SpiderSence.StartFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGMecha_SpiderSence::StartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 211006 ];

	ATGMecha_SpiderSence_execStartFire_Parms StartFire_Parms;
	StartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function MechaGame.TGMecha_SpiderSence.TimerStartAirBoost
// [0x00020002] 
// Parameters infos:

void ATGMecha_SpiderSence::TimerStartAirBoost ( )
{
	static UFunction* pFnTimerStartAirBoost = NULL;

	if ( ! pFnTimerStartAirBoost )
		pFnTimerStartAirBoost = (UFunction*) UObject::GObjObjects()->Data[ 211005 ];

	ATGMecha_SpiderSence_execTimerStartAirBoost_Parms TimerStartAirBoost_Parms;

	this->ProcessEvent ( pFnTimerStartAirBoost, &TimerStartAirBoost_Parms, NULL );
};

// Function MechaGame.TGMecha_SpiderSence.OnKeyUp_Space
// [0x00020002] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGMecha_SpiderSence::OnKeyUp_Space ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyUp_Space = NULL;

	if ( ! pFnOnKeyUp_Space )
		pFnOnKeyUp_Space = (UFunction*) UObject::GObjObjects()->Data[ 211003 ];

	ATGMecha_SpiderSence_execOnKeyUp_Space_Parms OnKeyUp_Space_Parms;
	OnKeyUp_Space_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyUp_Space, &OnKeyUp_Space_Parms, NULL );
};

// Function MechaGame.TGMecha_SpiderSence.OnKeyDown_Space
// [0x00020002] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGMecha_SpiderSence::OnKeyDown_Space ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyDown_Space = NULL;

	if ( ! pFnOnKeyDown_Space )
		pFnOnKeyDown_Space = (UFunction*) UObject::GObjObjects()->Data[ 211001 ];

	ATGMecha_SpiderSence_execOnKeyDown_Space_Parms OnKeyDown_Space_Parms;
	OnKeyDown_Space_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyDown_Space, &OnKeyDown_Space_Parms, NULL );
};

// Function MechaGame.TGMecha_SpiderSence.OnKeyDown_F
// [0x00020002] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGMecha_SpiderSence::OnKeyDown_F ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyDown_F = NULL;

	if ( ! pFnOnKeyDown_F )
		pFnOnKeyDown_F = (UFunction*) UObject::GObjObjects()->Data[ 210999 ];

	ATGMecha_SpiderSence_execOnKeyDown_F_Parms OnKeyDown_F_Parms;
	OnKeyDown_F_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyDown_F, &OnKeyDown_F_Parms, NULL );
};

// Function MechaGame.TGMecha_SpiderSence.PlayWeapReplicatedEffects
// [0x00020102] 
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGMecha_SpiderSence::PlayWeapReplicatedEffects ( struct FName VarName )
{
	static UFunction* pFnPlayWeapReplicatedEffects = NULL;

	if ( ! pFnPlayWeapReplicatedEffects )
		pFnPlayWeapReplicatedEffects = (UFunction*) UObject::GObjObjects()->Data[ 210994 ];

	ATGMecha_SpiderSence_execPlayWeapReplicatedEffects_Parms PlayWeapReplicatedEffects_Parms;
	memcpy ( &PlayWeapReplicatedEffects_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnPlayWeapReplicatedEffects, &PlayWeapReplicatedEffects_Parms, NULL );
};

// Function MechaGame.TGMecha_SpiderSence.NotifyWeaponStartFire
// [0x00020002] 
// Parameters infos:
// unsigned long                  bStartFire                     ( CPF_Parm )
// class ATGMechaWeapon*          MechaWeapon                    ( CPF_Parm )

void ATGMecha_SpiderSence::NotifyWeaponStartFire ( unsigned long bStartFire, class ATGMechaWeapon* MechaWeapon )
{
	static UFunction* pFnNotifyWeaponStartFire = NULL;

	if ( ! pFnNotifyWeaponStartFire )
		pFnNotifyWeaponStartFire = (UFunction*) UObject::GObjObjects()->Data[ 210991 ];

	ATGMecha_SpiderSence_execNotifyWeaponStartFire_Parms NotifyWeaponStartFire_Parms;
	NotifyWeaponStartFire_Parms.bStartFire = bStartFire;
	NotifyWeaponStartFire_Parms.MechaWeapon = MechaWeapon;

	this->ProcessEvent ( pFnNotifyWeaponStartFire, &NotifyWeaponStartFire_Parms, NULL );
};

// Function MechaGame.TGMecha_TheOne.Destroyed
// [0x00020102] 
// Parameters infos:

void ATGMecha_TheOne::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 211031 ];

	ATGMecha_TheOne_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function MechaGame.TGMecha_TheOne.TimerStartAirBoost
// [0x00020002] 
// Parameters infos:

void ATGMecha_TheOne::TimerStartAirBoost ( )
{
	static UFunction* pFnTimerStartAirBoost = NULL;

	if ( ! pFnTimerStartAirBoost )
		pFnTimerStartAirBoost = (UFunction*) UObject::GObjObjects()->Data[ 211030 ];

	ATGMecha_TheOne_execTimerStartAirBoost_Parms TimerStartAirBoost_Parms;

	this->ProcessEvent ( pFnTimerStartAirBoost, &TimerStartAirBoost_Parms, NULL );
};

// Function MechaGame.TGMecha_TheOne.OnKeyUp_Space
// [0x00020002] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGMecha_TheOne::OnKeyUp_Space ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyUp_Space = NULL;

	if ( ! pFnOnKeyUp_Space )
		pFnOnKeyUp_Space = (UFunction*) UObject::GObjObjects()->Data[ 211028 ];

	ATGMecha_TheOne_execOnKeyUp_Space_Parms OnKeyUp_Space_Parms;
	OnKeyUp_Space_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyUp_Space, &OnKeyUp_Space_Parms, NULL );
};

// Function MechaGame.TGMecha_TheOne.OnKeyDown_Space
// [0x00020002] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGMecha_TheOne::OnKeyDown_Space ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyDown_Space = NULL;

	if ( ! pFnOnKeyDown_Space )
		pFnOnKeyDown_Space = (UFunction*) UObject::GObjObjects()->Data[ 211026 ];

	ATGMecha_TheOne_execOnKeyDown_Space_Parms OnKeyDown_Space_Parms;
	OnKeyDown_Space_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyDown_Space, &OnKeyDown_Space_Parms, NULL );
};

// Function MechaGame.TGMecha_TheOne.OnKeyDown_F
// [0x00020002] 
// Parameters infos:
// class UTGMechaPlayerInput*     Input                          ( CPF_Parm )

void ATGMecha_TheOne::OnKeyDown_F ( class UTGMechaPlayerInput* Input )
{
	static UFunction* pFnOnKeyDown_F = NULL;

	if ( ! pFnOnKeyDown_F )
		pFnOnKeyDown_F = (UFunction*) UObject::GObjObjects()->Data[ 211024 ];

	ATGMecha_TheOne_execOnKeyDown_F_Parms OnKeyDown_F_Parms;
	OnKeyDown_F_Parms.Input = Input;

	this->ProcessEvent ( pFnOnKeyDown_F, &OnKeyDown_F_Parms, NULL );
};

// Function MechaGame.TGMecha_TheOne.TimerPlayShellDropSound
// [0x00020102] 
// Parameters infos:

void ATGMecha_TheOne::TimerPlayShellDropSound ( )
{
	static UFunction* pFnTimerPlayShellDropSound = NULL;

	if ( ! pFnTimerPlayShellDropSound )
		pFnTimerPlayShellDropSound = (UFunction*) UObject::GObjObjects()->Data[ 211023 ];

	ATGMecha_TheOne_execTimerPlayShellDropSound_Parms TimerPlayShellDropSound_Parms;

	this->ProcessEvent ( pFnTimerPlayShellDropSound, &TimerPlayShellDropSound_Parms, NULL );
};

// Function MechaGame.TGMecha_TheOne.OnMachineGunStartFire
// [0x00020102] 
// Parameters infos:

void ATGMecha_TheOne::OnMachineGunStartFire ( )
{
	static UFunction* pFnOnMachineGunStartFire = NULL;

	if ( ! pFnOnMachineGunStartFire )
		pFnOnMachineGunStartFire = (UFunction*) UObject::GObjObjects()->Data[ 211022 ];

	ATGMecha_TheOne_execOnMachineGunStartFire_Parms OnMachineGunStartFire_Parms;

	this->ProcessEvent ( pFnOnMachineGunStartFire, &OnMachineGunStartFire_Parms, NULL );
};

// Function MechaGame.TGMecha_TheOne.NotifyWeaponStartFire
// [0x00020002] 
// Parameters infos:
// unsigned long                  bStartFire                     ( CPF_Parm )
// class ATGMechaWeapon*          MechaWeapon                    ( CPF_Parm )

void ATGMecha_TheOne::NotifyWeaponStartFire ( unsigned long bStartFire, class ATGMechaWeapon* MechaWeapon )
{
	static UFunction* pFnNotifyWeaponStartFire = NULL;

	if ( ! pFnNotifyWeaponStartFire )
		pFnNotifyWeaponStartFire = (UFunction*) UObject::GObjObjects()->Data[ 211017 ];

	ATGMecha_TheOne_execNotifyWeaponStartFire_Parms NotifyWeaponStartFire_Parms;
	NotifyWeaponStartFire_Parms.bStartFire = bStartFire;
	NotifyWeaponStartFire_Parms.MechaWeapon = MechaWeapon;

	this->ProcessEvent ( pFnNotifyWeaponStartFire, &NotifyWeaponStartFire_Parms, NULL );
};

// Function MechaGame.TGMecha_TheOne.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGMecha_TheOne::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 211015 ];

	ATGMecha_TheOne_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_MachineGun.DetachMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_MachineGun::DetachMuzzleFlash ( )
{
	static UFunction* pFnDetachMuzzleFlash = NULL;

	if ( ! pFnDetachMuzzleFlash )
		pFnDetachMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 215347 ];

	ATGMechaWeap_MachineGun_execDetachMuzzleFlash_Parms DetachMuzzleFlash_Parms;

	this->ProcessEvent ( pFnDetachMuzzleFlash, &DetachMuzzleFlash_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_MachineGun.StartFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGMechaWeap_MachineGun::StartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 215345 ];

	ATGMechaWeap_MachineGun_execStartFire_Parms StartFire_Parms;
	StartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function MechaGame.TGMechaAccurateGun.FallOffFactor
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          HitDistance                    ( CPF_Parm )

float ATGMechaAccurateGun::FallOffFactor ( float HitDistance )
{
	static UFunction* pFnFallOffFactor = NULL;

	if ( ! pFnFallOffFactor )
		pFnFallOffFactor = (UFunction*) UObject::GObjObjects()->Data[ 211557 ];

	ATGMechaAccurateGun_execFallOffFactor_Parms FallOffFactor_Parms;
	FallOffFactor_Parms.HitDistance = HitDistance;

	this->ProcessEvent ( pFnFallOffFactor, &FallOffFactor_Parms, NULL );

	return FallOffFactor_Parms.ReturnValue;
};

// Function MechaGame.TGMechaAccurateGun.WeaponCalcCamera
// [0x00420102] 
// Parameters infos:
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )

void ATGMechaAccurateGun::WeaponCalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot )
{
	static UFunction* pFnWeaponCalcCamera = NULL;

	if ( ! pFnWeaponCalcCamera )
		pFnWeaponCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 211553 ];

	ATGMechaAccurateGun_execWeaponCalcCamera_Parms WeaponCalcCamera_Parms;
	WeaponCalcCamera_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnWeaponCalcCamera, &WeaponCalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &WeaponCalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &WeaponCalcCamera_Parms.out_CamRot, 0xC );
};

// Function MechaGame.TGMechaAccurateGun.EndFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGMechaAccurateGun::EndFire ( unsigned char FireModeNum )
{
	static UFunction* pFnEndFire = NULL;

	if ( ! pFnEndFire )
		pFnEndFire = (UFunction*) UObject::GObjObjects()->Data[ 211551 ];

	ATGMechaAccurateGun_execEndFire_Parms EndFire_Parms;
	EndFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnEndFire, &EndFire_Parms, NULL );
};

// Function MechaGame.TGMechaAccurateGun.BeginFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGMechaAccurateGun::BeginFire ( unsigned char FireModeNum )
{
	static UFunction* pFnBeginFire = NULL;

	if ( ! pFnBeginFire )
		pFnBeginFire = (UFunction*) UObject::GObjObjects()->Data[ 211549 ];

	ATGMechaAccurateGun_execBeginFire_Parms BeginFire_Parms;
	BeginFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnBeginFire, &BeginFire_Parms, NULL );
};

// Function MechaGame.TGMechaAccurateGun.StartColdDown
// [0x00020102] 
// Parameters infos:

void ATGMechaAccurateGun::StartColdDown ( )
{
	static UFunction* pFnStartColdDown = NULL;

	if ( ! pFnStartColdDown )
		pFnStartColdDown = (UFunction*) UObject::GObjObjects()->Data[ 211548 ];

	ATGMechaAccurateGun_execStartColdDown_Parms StartColdDown_Parms;

	this->ProcessEvent ( pFnStartColdDown, &StartColdDown_Parms, NULL );
};

// Function MechaGame.TGMechaAccurateGun.GetCurrAimDisperseType
// [0x00020102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char ATGMechaAccurateGun::GetCurrAimDisperseType ( )
{
	static UFunction* pFnGetCurrAimDisperseType = NULL;

	if ( ! pFnGetCurrAimDisperseType )
		pFnGetCurrAimDisperseType = (UFunction*) UObject::GObjObjects()->Data[ 211544 ];

	ATGMechaAccurateGun_execGetCurrAimDisperseType_Parms GetCurrAimDisperseType_Parms;

	this->ProcessEvent ( pFnGetCurrAimDisperseType, &GetCurrAimDisperseType_Parms, NULL );

	return GetCurrAimDisperseType_Parms.ReturnValue;
};

// Function MechaGame.TGMechaAccurateGun.FireAmmunition
// [0x00020102] 
// Parameters infos:

void ATGMechaAccurateGun::FireAmmunition ( )
{
	static UFunction* pFnFireAmmunition = NULL;

	if ( ! pFnFireAmmunition )
		pFnFireAmmunition = (UFunction*) UObject::GObjObjects()->Data[ 211539 ];

	ATGMechaAccurateGun_execFireAmmunition_Parms FireAmmunition_Parms;

	this->ProcessEvent ( pFnFireAmmunition, &FireAmmunition_Parms, NULL );
};

// Function MechaGame.TGMechaAccurateGun.SetGunFlashLocation
// [0x00020102] 
// Parameters infos:
// TArray< struct FVector >       HitLocationTemp                ( CPF_Parm | CPF_NeedCtorLink )

void ATGMechaAccurateGun::SetGunFlashLocation ( TArray< struct FVector > HitLocationTemp )
{
	static UFunction* pFnSetGunFlashLocation = NULL;

	if ( ! pFnSetGunFlashLocation )
		pFnSetGunFlashLocation = (UFunction*) UObject::GObjObjects()->Data[ 211535 ];

	ATGMechaAccurateGun_execSetGunFlashLocation_Parms SetGunFlashLocation_Parms;
	memcpy ( &SetGunFlashLocation_Parms.HitLocationTemp, &HitLocationTemp, 0xC );

	this->ProcessEvent ( pFnSetGunFlashLocation, &SetGunFlashLocation_Parms, NULL );
};

// Function MechaGame.TGMechaAccurateGun.ServerDefenseDoorTakeDamage
// [0x002200C2] 
// Parameters infos:
// struct FImpactInfo             HitInfo                        ( CPF_Parm )

void ATGMechaAccurateGun::ServerDefenseDoorTakeDamage ( struct FImpactInfo HitInfo )
{
	static UFunction* pFnServerDefenseDoorTakeDamage = NULL;

	if ( ! pFnServerDefenseDoorTakeDamage )
		pFnServerDefenseDoorTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 211531 ];

	ATGMechaAccurateGun_execServerDefenseDoorTakeDamage_Parms ServerDefenseDoorTakeDamage_Parms;
	memcpy ( &ServerDefenseDoorTakeDamage_Parms.HitInfo, &HitInfo, 0x54 );

	this->ProcessEvent ( pFnServerDefenseDoorTakeDamage, &ServerDefenseDoorTakeDamage_Parms, NULL );
};

// Function MechaGame.TGMechaAccurateGun.InstantFire
// [0x00820102] 
// Parameters infos:

void ATGMechaAccurateGun::InstantFire ( )
{
	static UFunction* pFnInstantFire = NULL;

	if ( ! pFnInstantFire )
		pFnInstantFire = (UFunction*) UObject::GObjObjects()->Data[ 211518 ];

	ATGMechaAccurateGun_execInstantFire_Parms InstantFire_Parms;

	this->ProcessEvent ( pFnInstantFire, &InstantFire_Parms, NULL );
};

// Function MechaGame.TGMechaAccurateGun.Timer_StopHitTurnRed
// [0x00020102] 
// Parameters infos:

void ATGMechaAccurateGun::Timer_StopHitTurnRed ( )
{
	static UFunction* pFnTimer_StopHitTurnRed = NULL;

	if ( ! pFnTimer_StopHitTurnRed )
		pFnTimer_StopHitTurnRed = (UFunction*) UObject::GObjObjects()->Data[ 211517 ];

	ATGMechaAccurateGun_execTimer_StopHitTurnRed_Parms Timer_StopHitTurnRed_Parms;

	this->ProcessEvent ( pFnTimer_StopHitTurnRed, &Timer_StopHitTurnRed_Parms, NULL );
};

// Function MechaGame.TGMechaAccurateGun.GunServerTakeDamage
// [0x00A240C2] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   DamageActor                    ( CPF_Parm )
// unsigned char                  WallNum                        ( CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_Parm )
// int                            HitDamage                      ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitDir                         ( CPF_Parm )
// struct FVector                 DamagePawnLoc                  ( CPF_Parm )
// struct FName                   HitBoneName                    ( CPF_Parm )
// float                          SandCDis                       ( CPF_OptionalParm | CPF_Parm )

bool ATGMechaAccurateGun::GunServerTakeDamage ( class APawn* DamageActor, unsigned char WallNum, unsigned char HitGroup, int HitDamage, struct FVector HitLocation, struct FVector HitDir, struct FVector DamagePawnLoc, struct FName HitBoneName, float SandCDis )
{
	static UFunction* pFnGunServerTakeDamage = NULL;

	if ( ! pFnGunServerTakeDamage )
		pFnGunServerTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 211503 ];

	ATGMechaAccurateGun_execGunServerTakeDamage_Parms GunServerTakeDamage_Parms;
	GunServerTakeDamage_Parms.DamageActor = DamageActor;
	GunServerTakeDamage_Parms.WallNum = WallNum;
	GunServerTakeDamage_Parms.HitGroup = HitGroup;
	GunServerTakeDamage_Parms.HitDamage = HitDamage;
	memcpy ( &GunServerTakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &GunServerTakeDamage_Parms.HitDir, &HitDir, 0xC );
	memcpy ( &GunServerTakeDamage_Parms.DamagePawnLoc, &DamagePawnLoc, 0xC );
	memcpy ( &GunServerTakeDamage_Parms.HitBoneName, &HitBoneName, 0x8 );
	GunServerTakeDamage_Parms.SandCDis = SandCDis;

	this->ProcessEvent ( pFnGunServerTakeDamage, &GunServerTakeDamage_Parms, NULL );

	return GunServerTakeDamage_Parms.ReturnValue;
};

// Function MechaGame.TGMechaAccurateGun.CalcWeaponFireEX
// [0x00C24102] 
// Parameters infos:
// struct FImpactInfo             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartTrace                     ( CPF_Parm )
// struct FVector                 EndTrace                       ( CPF_Parm )
// TArray< struct FImpactInfo >   ImpactList                     ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FClientAttackPawnInfo > AttackPInfoList                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

struct FImpactInfo ATGMechaAccurateGun::CalcWeaponFireEX ( struct FVector StartTrace, struct FVector EndTrace, TArray< struct FImpactInfo >* ImpactList, TArray< struct FClientAttackPawnInfo >* AttackPInfoList )
{
	static UFunction* pFnCalcWeaponFireEX = NULL;

	if ( ! pFnCalcWeaponFireEX )
		pFnCalcWeaponFireEX = (UFunction*) UObject::GObjObjects()->Data[ 211477 ];

	ATGMechaAccurateGun_execCalcWeaponFireEX_Parms CalcWeaponFireEX_Parms;
	memcpy ( &CalcWeaponFireEX_Parms.StartTrace, &StartTrace, 0xC );
	memcpy ( &CalcWeaponFireEX_Parms.EndTrace, &EndTrace, 0xC );

	this->ProcessEvent ( pFnCalcWeaponFireEX, &CalcWeaponFireEX_Parms, NULL );

	if ( ImpactList )
		memcpy ( ImpactList, &CalcWeaponFireEX_Parms.ImpactList, 0xC );

	if ( AttackPInfoList )
		memcpy ( AttackPInfoList, &CalcWeaponFireEX_Parms.AttackPInfoList, 0xC );

	return CalcWeaponFireEX_Parms.ReturnValue;
};

// Function MechaGame.TGMechaAccurateGun.ServerFireAmmunition
// [0x00A240C2] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerP                    ( CPF_Parm )
// int                            ControllerR                    ( CPF_Parm )
// int                            ControllerY                    ( CPF_Parm )
// int                            PunchAnglePitch                ( CPF_Parm )
// int                            PunchAngleYaw                  ( CPF_Parm )
// struct FVectorNoCompress       FireStartLocation              ( CPF_Parm )
// int                            DeltaPunchAnglePitch           ( CPF_Parm )
// float                          ClientTime                     ( CPF_Parm )
// unsigned long                  HitAPawn                       ( CPF_Parm )
// struct FVector                 FireEndLocation                ( CPF_OptionalParm | CPF_Parm )
// struct FVectorNoCompress       ClientForwardDirection         ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocationTemp0               ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocationTemp1               ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocationTemp2               ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocationTemp3               ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocationTemp4               ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocationTemp5               ( CPF_OptionalParm | CPF_Parm )

bool ATGMechaAccurateGun::ServerFireAmmunition ( int ControllerP, int ControllerR, int ControllerY, int PunchAnglePitch, int PunchAngleYaw, struct FVectorNoCompress FireStartLocation, int DeltaPunchAnglePitch, float ClientTime, unsigned long HitAPawn, struct FVector FireEndLocation, struct FVectorNoCompress ClientForwardDirection, struct FVector HitLocationTemp0, struct FVector HitLocationTemp1, struct FVector HitLocationTemp2, struct FVector HitLocationTemp3, struct FVector HitLocationTemp4, struct FVector HitLocationTemp5 )
{
	static UFunction* pFnServerFireAmmunition = NULL;

	if ( ! pFnServerFireAmmunition )
		pFnServerFireAmmunition = (UFunction*) UObject::GObjObjects()->Data[ 211452 ];

	ATGMechaAccurateGun_execServerFireAmmunition_Parms ServerFireAmmunition_Parms;
	ServerFireAmmunition_Parms.ControllerP = ControllerP;
	ServerFireAmmunition_Parms.ControllerR = ControllerR;
	ServerFireAmmunition_Parms.ControllerY = ControllerY;
	ServerFireAmmunition_Parms.PunchAnglePitch = PunchAnglePitch;
	ServerFireAmmunition_Parms.PunchAngleYaw = PunchAngleYaw;
	memcpy ( &ServerFireAmmunition_Parms.FireStartLocation, &FireStartLocation, 0xC );
	ServerFireAmmunition_Parms.DeltaPunchAnglePitch = DeltaPunchAnglePitch;
	ServerFireAmmunition_Parms.ClientTime = ClientTime;
	ServerFireAmmunition_Parms.HitAPawn = HitAPawn;
	memcpy ( &ServerFireAmmunition_Parms.FireEndLocation, &FireEndLocation, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.ClientForwardDirection, &ClientForwardDirection, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.HitLocationTemp0, &HitLocationTemp0, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.HitLocationTemp1, &HitLocationTemp1, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.HitLocationTemp2, &HitLocationTemp2, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.HitLocationTemp3, &HitLocationTemp3, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.HitLocationTemp4, &HitLocationTemp4, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.HitLocationTemp5, &HitLocationTemp5, 0xC );

	this->ProcessEvent ( pFnServerFireAmmunition, &ServerFireAmmunition_Parms, NULL );

	return ServerFireAmmunition_Parms.ReturnValue;
};

// Function MechaGame.TGMechaAccurateGun.CheckForwardDirection
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 ClientForwardDirection         ( CPF_Parm )
// struct FRotator                AimAngle                       ( CPF_Parm )

bool ATGMechaAccurateGun::CheckForwardDirection ( struct FVector ClientForwardDirection, struct FRotator AimAngle )
{
	static UFunction* pFnCheckForwardDirection = NULL;

	if ( ! pFnCheckForwardDirection )
		pFnCheckForwardDirection = (UFunction*) UObject::GObjObjects()->Data[ 211442 ];

	ATGMechaAccurateGun_execCheckForwardDirection_Parms CheckForwardDirection_Parms;
	memcpy ( &CheckForwardDirection_Parms.ClientForwardDirection, &ClientForwardDirection, 0xC );
	memcpy ( &CheckForwardDirection_Parms.AimAngle, &AimAngle, 0xC );

	this->ProcessEvent ( pFnCheckForwardDirection, &CheckForwardDirection_Parms, NULL );

	return CheckForwardDirection_Parms.ReturnValue;
};

// Function MechaGame.TGMechaAccurateGun.ModifyForWardDirection
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                AimAngle                       ( CPF_Parm )

struct FVector ATGMechaAccurateGun::ModifyForWardDirection ( struct FRotator AimAngle )
{
	static UFunction* pFnModifyForWardDirection = NULL;

	if ( ! pFnModifyForWardDirection )
		pFnModifyForWardDirection = (UFunction*) UObject::GObjObjects()->Data[ 211434 ];

	ATGMechaAccurateGun_execModifyForWardDirection_Parms ModifyForWardDirection_Parms;
	memcpy ( &ModifyForWardDirection_Parms.AimAngle, &AimAngle, 0xC );

	this->ProcessEvent ( pFnModifyForWardDirection, &ModifyForWardDirection_Parms, NULL );

	return ModifyForWardDirection_Parms.ReturnValue;
};

// Function MechaGame.TGMechaAccurateGun.SetFireStartLocation
// [0x00020102] 
// Parameters infos:
// struct FVector                 FireStartLocation              ( CPF_Parm )

void ATGMechaAccurateGun::SetFireStartLocation ( struct FVector FireStartLocation )
{
	static UFunction* pFnSetFireStartLocation = NULL;

	if ( ! pFnSetFireStartLocation )
		pFnSetFireStartLocation = (UFunction*) UObject::GObjObjects()->Data[ 211432 ];

	ATGMechaAccurateGun_execSetFireStartLocation_Parms SetFireStartLocation_Parms;
	memcpy ( &SetFireStartLocation_Parms.FireStartLocation, &FireStartLocation, 0xC );

	this->ProcessEvent ( pFnSetFireStartLocation, &SetFireStartLocation_Parms, NULL );
};

// Function MechaGame.TGMechaAccurateGun.CheckFireStartLocation
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 FireStartLocation              ( CPF_Parm )
// float                          ClientTime                     ( CPF_Parm )

bool ATGMechaAccurateGun::CheckFireStartLocation ( struct FVector FireStartLocation, float ClientTime )
{
	static UFunction* pFnCheckFireStartLocation = NULL;

	if ( ! pFnCheckFireStartLocation )
		pFnCheckFireStartLocation = (UFunction*) UObject::GObjObjects()->Data[ 211428 ];

	ATGMechaAccurateGun_execCheckFireStartLocation_Parms CheckFireStartLocation_Parms;
	memcpy ( &CheckFireStartLocation_Parms.FireStartLocation, &FireStartLocation, 0xC );
	CheckFireStartLocation_Parms.ClientTime = ClientTime;

	this->ProcessEvent ( pFnCheckFireStartLocation, &CheckFireStartLocation_Parms, NULL );

	return CheckFireStartLocation_Parms.ReturnValue;
};

// Function MechaGame.TGMechaAccurateGun.SetFireRotator
// [0x00020102] 
// Parameters infos:
// struct FRotator                ControllerRotator              ( CPF_Parm )

void ATGMechaAccurateGun::SetFireRotator ( struct FRotator ControllerRotator )
{
	static UFunction* pFnSetFireRotator = NULL;

	if ( ! pFnSetFireRotator )
		pFnSetFireRotator = (UFunction*) UObject::GObjObjects()->Data[ 211426 ];

	ATGMechaAccurateGun_execSetFireRotator_Parms SetFireRotator_Parms;
	memcpy ( &SetFireRotator_Parms.ControllerRotator, &ControllerRotator, 0xC );

	this->ProcessEvent ( pFnSetFireRotator, &SetFireRotator_Parms, NULL );
};

// Function MechaGame.TGMechaAccurateGun.CheckFireRotator
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                ControllerRotator              ( CPF_Parm )
// float                          ClientTime                     ( CPF_Parm )

bool ATGMechaAccurateGun::CheckFireRotator ( struct FRotator ControllerRotator, float ClientTime )
{
	static UFunction* pFnCheckFireRotator = NULL;

	if ( ! pFnCheckFireRotator )
		pFnCheckFireRotator = (UFunction*) UObject::GObjObjects()->Data[ 211422 ];

	ATGMechaAccurateGun_execCheckFireRotator_Parms CheckFireRotator_Parms;
	memcpy ( &CheckFireRotator_Parms.ControllerRotator, &ControllerRotator, 0xC );
	CheckFireRotator_Parms.ClientTime = ClientTime;

	this->ProcessEvent ( pFnCheckFireRotator, &CheckFireRotator_Parms, NULL );

	return CheckFireRotator_Parms.ReturnValue;
};

// Function MechaGame.TGMechaAccurateGun.ServerFireAmmunition4P
// [0x00A240C2] 
// Parameters infos:
// int                            ControllerP                    ( CPF_Parm )
// int                            ControllerR                    ( CPF_Parm )
// int                            ControllerY                    ( CPF_Parm )
// int                            PunchAnglePitch                ( CPF_Parm )
// int                            PunchAngleYaw                  ( CPF_Parm )
// struct FVectorNoCompress       FireStartLocation              ( CPF_Parm )
// int                            DeltaPunchAnglePitch           ( CPF_Parm )
// float                          ClientTime                     ( CPF_Parm )
// class APawn*                   DamagePawn1                    ( CPF_Parm )
// unsigned char                  WallNum1                       ( CPF_Parm )
// unsigned char                  HitGroup1                      ( CPF_Parm )
// int                            HitDamage1                     ( CPF_Parm )
// struct FVector                 HitLocation1                   ( CPF_Parm )
// struct FVector                 HitDir1                        ( CPF_Parm )
// struct FVectorNoCompress       DamagePawnLoc1                 ( CPF_Parm )
// struct FName                   HitBoneName1                   ( CPF_Parm )
// class APawn*                   DamagePawn2                    ( CPF_Parm )
// unsigned char                  WallNum2                       ( CPF_Parm )
// unsigned char                  HitGroup2                      ( CPF_Parm )
// int                            HitDamage2                     ( CPF_Parm )
// struct FVector                 HitLocation2                   ( CPF_Parm )
// struct FVector                 HitDir2                        ( CPF_Parm )
// struct FVectorNoCompress       DamagePawnLoc2                 ( CPF_Parm )
// struct FName                   HitBoneName2                   ( CPF_Parm )
// class APawn*                   DamagePawn3                    ( CPF_Parm )
// unsigned char                  WallNum3                       ( CPF_Parm )
// unsigned char                  HitGroup3                      ( CPF_Parm )
// int                            HitDamage3                     ( CPF_Parm )
// struct FVector                 HitLocation3                   ( CPF_Parm )
// struct FVector                 HitDir3                        ( CPF_Parm )
// struct FVectorNoCompress       DamagePawnLoc3                 ( CPF_Parm )
// struct FName                   HitBoneName3                   ( CPF_Parm )
// class APawn*                   DamagePawn4                    ( CPF_Parm )
// unsigned char                  WallNum4                       ( CPF_Parm )
// unsigned char                  HitGroup4                      ( CPF_Parm )
// int                            HitDamage4                     ( CPF_Parm )
// struct FVector                 HitLocation4                   ( CPF_Parm )
// struct FVector                 HitDir4                        ( CPF_Parm )
// struct FVectorNoCompress       DamagePawnLoc4                 ( CPF_Parm )
// struct FName                   HitBoneName4                   ( CPF_Parm )
// struct FVector                 FireEndLocation                ( CPF_OptionalParm | CPF_Parm )
// float                          SandCDis1                      ( CPF_OptionalParm | CPF_Parm )
// float                          SandCDis2                      ( CPF_OptionalParm | CPF_Parm )
// float                          SandCDis3                      ( CPF_OptionalParm | CPF_Parm )
// float                          SandCDis4                      ( CPF_OptionalParm | CPF_Parm )
// struct FVectorNoCompress       ClientForwardDirection         ( CPF_OptionalParm | CPF_Parm )

void ATGMechaAccurateGun::ServerFireAmmunition4P ( int ControllerP, int ControllerR, int ControllerY, int PunchAnglePitch, int PunchAngleYaw, struct FVectorNoCompress FireStartLocation, int DeltaPunchAnglePitch, float ClientTime, class APawn* DamagePawn1, unsigned char WallNum1, unsigned char HitGroup1, int HitDamage1, struct FVector HitLocation1, struct FVector HitDir1, struct FVectorNoCompress DamagePawnLoc1, struct FName HitBoneName1, class APawn* DamagePawn2, unsigned char WallNum2, unsigned char HitGroup2, int HitDamage2, struct FVector HitLocation2, struct FVector HitDir2, struct FVectorNoCompress DamagePawnLoc2, struct FName HitBoneName2, class APawn* DamagePawn3, unsigned char WallNum3, unsigned char HitGroup3, int HitDamage3, struct FVector HitLocation3, struct FVector HitDir3, struct FVectorNoCompress DamagePawnLoc3, struct FName HitBoneName3, class APawn* DamagePawn4, unsigned char WallNum4, unsigned char HitGroup4, int HitDamage4, struct FVector HitLocation4, struct FVector HitDir4, struct FVectorNoCompress DamagePawnLoc4, struct FName HitBoneName4, struct FVector FireEndLocation, float SandCDis1, float SandCDis2, float SandCDis3, float SandCDis4, struct FVectorNoCompress ClientForwardDirection )
{
	static UFunction* pFnServerFireAmmunition4P = NULL;

	if ( ! pFnServerFireAmmunition4P )
		pFnServerFireAmmunition4P = (UFunction*) UObject::GObjObjects()->Data[ 211363 ];

	ATGMechaAccurateGun_execServerFireAmmunition4P_Parms ServerFireAmmunition4P_Parms;
	ServerFireAmmunition4P_Parms.ControllerP = ControllerP;
	ServerFireAmmunition4P_Parms.ControllerR = ControllerR;
	ServerFireAmmunition4P_Parms.ControllerY = ControllerY;
	ServerFireAmmunition4P_Parms.PunchAnglePitch = PunchAnglePitch;
	ServerFireAmmunition4P_Parms.PunchAngleYaw = PunchAngleYaw;
	memcpy ( &ServerFireAmmunition4P_Parms.FireStartLocation, &FireStartLocation, 0xC );
	ServerFireAmmunition4P_Parms.DeltaPunchAnglePitch = DeltaPunchAnglePitch;
	ServerFireAmmunition4P_Parms.ClientTime = ClientTime;
	ServerFireAmmunition4P_Parms.DamagePawn1 = DamagePawn1;
	ServerFireAmmunition4P_Parms.WallNum1 = WallNum1;
	ServerFireAmmunition4P_Parms.HitGroup1 = HitGroup1;
	ServerFireAmmunition4P_Parms.HitDamage1 = HitDamage1;
	memcpy ( &ServerFireAmmunition4P_Parms.HitLocation1, &HitLocation1, 0xC );
	memcpy ( &ServerFireAmmunition4P_Parms.HitDir1, &HitDir1, 0xC );
	memcpy ( &ServerFireAmmunition4P_Parms.DamagePawnLoc1, &DamagePawnLoc1, 0xC );
	memcpy ( &ServerFireAmmunition4P_Parms.HitBoneName1, &HitBoneName1, 0x8 );
	ServerFireAmmunition4P_Parms.DamagePawn2 = DamagePawn2;
	ServerFireAmmunition4P_Parms.WallNum2 = WallNum2;
	ServerFireAmmunition4P_Parms.HitGroup2 = HitGroup2;
	ServerFireAmmunition4P_Parms.HitDamage2 = HitDamage2;
	memcpy ( &ServerFireAmmunition4P_Parms.HitLocation2, &HitLocation2, 0xC );
	memcpy ( &ServerFireAmmunition4P_Parms.HitDir2, &HitDir2, 0xC );
	memcpy ( &ServerFireAmmunition4P_Parms.DamagePawnLoc2, &DamagePawnLoc2, 0xC );
	memcpy ( &ServerFireAmmunition4P_Parms.HitBoneName2, &HitBoneName2, 0x8 );
	ServerFireAmmunition4P_Parms.DamagePawn3 = DamagePawn3;
	ServerFireAmmunition4P_Parms.WallNum3 = WallNum3;
	ServerFireAmmunition4P_Parms.HitGroup3 = HitGroup3;
	ServerFireAmmunition4P_Parms.HitDamage3 = HitDamage3;
	memcpy ( &ServerFireAmmunition4P_Parms.HitLocation3, &HitLocation3, 0xC );
	memcpy ( &ServerFireAmmunition4P_Parms.HitDir3, &HitDir3, 0xC );
	memcpy ( &ServerFireAmmunition4P_Parms.DamagePawnLoc3, &DamagePawnLoc3, 0xC );
	memcpy ( &ServerFireAmmunition4P_Parms.HitBoneName3, &HitBoneName3, 0x8 );
	ServerFireAmmunition4P_Parms.DamagePawn4 = DamagePawn4;
	ServerFireAmmunition4P_Parms.WallNum4 = WallNum4;
	ServerFireAmmunition4P_Parms.HitGroup4 = HitGroup4;
	ServerFireAmmunition4P_Parms.HitDamage4 = HitDamage4;
	memcpy ( &ServerFireAmmunition4P_Parms.HitLocation4, &HitLocation4, 0xC );
	memcpy ( &ServerFireAmmunition4P_Parms.HitDir4, &HitDir4, 0xC );
	memcpy ( &ServerFireAmmunition4P_Parms.DamagePawnLoc4, &DamagePawnLoc4, 0xC );
	memcpy ( &ServerFireAmmunition4P_Parms.HitBoneName4, &HitBoneName4, 0x8 );
	memcpy ( &ServerFireAmmunition4P_Parms.FireEndLocation, &FireEndLocation, 0xC );
	ServerFireAmmunition4P_Parms.SandCDis1 = SandCDis1;
	ServerFireAmmunition4P_Parms.SandCDis2 = SandCDis2;
	ServerFireAmmunition4P_Parms.SandCDis3 = SandCDis3;
	ServerFireAmmunition4P_Parms.SandCDis4 = SandCDis4;
	memcpy ( &ServerFireAmmunition4P_Parms.ClientForwardDirection, &ClientForwardDirection, 0xC );

	this->ProcessEvent ( pFnServerFireAmmunition4P, &ServerFireAmmunition4P_Parms, NULL );
};

// Function MechaGame.TGMechaAccurateGun.ServerFireAmmunition3P
// [0x00A240C2] 
// Parameters infos:
// int                            ControllerP                    ( CPF_Parm )
// int                            ControllerR                    ( CPF_Parm )
// int                            ControllerY                    ( CPF_Parm )
// int                            PunchAnglePitch                ( CPF_Parm )
// int                            PunchAngleYaw                  ( CPF_Parm )
// struct FVectorNoCompress       FireStartLocation              ( CPF_Parm )
// int                            DeltaPunchAnglePitch           ( CPF_Parm )
// float                          ClientTime                     ( CPF_Parm )
// class APawn*                   DamagePawn1                    ( CPF_Parm )
// unsigned char                  WallNum1                       ( CPF_Parm )
// unsigned char                  HitGroup1                      ( CPF_Parm )
// int                            HitDamage1                     ( CPF_Parm )
// struct FVector                 HitLocation1                   ( CPF_Parm )
// struct FVector                 HitDir1                        ( CPF_Parm )
// struct FVectorNoCompress       DamagePawnLoc1                 ( CPF_Parm )
// struct FName                   HitBoneName1                   ( CPF_Parm )
// class APawn*                   DamagePawn2                    ( CPF_Parm )
// unsigned char                  WallNum2                       ( CPF_Parm )
// unsigned char                  HitGroup2                      ( CPF_Parm )
// int                            HitDamage2                     ( CPF_Parm )
// struct FVector                 HitLocation2                   ( CPF_Parm )
// struct FVector                 HitDir2                        ( CPF_Parm )
// struct FVectorNoCompress       DamagePawnLoc2                 ( CPF_Parm )
// struct FName                   HitBoneName2                   ( CPF_Parm )
// class APawn*                   DamagePawn3                    ( CPF_Parm )
// unsigned char                  WallNum3                       ( CPF_Parm )
// unsigned char                  HitGroup3                      ( CPF_Parm )
// int                            HitDamage3                     ( CPF_Parm )
// struct FVector                 HitLocation3                   ( CPF_Parm )
// struct FVector                 HitDir3                        ( CPF_Parm )
// struct FVectorNoCompress       DamagePawnLoc3                 ( CPF_Parm )
// struct FName                   HitBoneName3                   ( CPF_Parm )
// struct FVector                 FireEndLocation                ( CPF_OptionalParm | CPF_Parm )
// float                          SandCDis1                      ( CPF_OptionalParm | CPF_Parm )
// float                          SandCDis2                      ( CPF_OptionalParm | CPF_Parm )
// float                          SandCDis3                      ( CPF_OptionalParm | CPF_Parm )
// struct FVectorNoCompress       ClientForwardDirection         ( CPF_OptionalParm | CPF_Parm )

void ATGMechaAccurateGun::ServerFireAmmunition3P ( int ControllerP, int ControllerR, int ControllerY, int PunchAnglePitch, int PunchAngleYaw, struct FVectorNoCompress FireStartLocation, int DeltaPunchAnglePitch, float ClientTime, class APawn* DamagePawn1, unsigned char WallNum1, unsigned char HitGroup1, int HitDamage1, struct FVector HitLocation1, struct FVector HitDir1, struct FVectorNoCompress DamagePawnLoc1, struct FName HitBoneName1, class APawn* DamagePawn2, unsigned char WallNum2, unsigned char HitGroup2, int HitDamage2, struct FVector HitLocation2, struct FVector HitDir2, struct FVectorNoCompress DamagePawnLoc2, struct FName HitBoneName2, class APawn* DamagePawn3, unsigned char WallNum3, unsigned char HitGroup3, int HitDamage3, struct FVector HitLocation3, struct FVector HitDir3, struct FVectorNoCompress DamagePawnLoc3, struct FName HitBoneName3, struct FVector FireEndLocation, float SandCDis1, float SandCDis2, float SandCDis3, struct FVectorNoCompress ClientForwardDirection )
{
	static UFunction* pFnServerFireAmmunition3P = NULL;

	if ( ! pFnServerFireAmmunition3P )
		pFnServerFireAmmunition3P = (UFunction*) UObject::GObjObjects()->Data[ 211316 ];

	ATGMechaAccurateGun_execServerFireAmmunition3P_Parms ServerFireAmmunition3P_Parms;
	ServerFireAmmunition3P_Parms.ControllerP = ControllerP;
	ServerFireAmmunition3P_Parms.ControllerR = ControllerR;
	ServerFireAmmunition3P_Parms.ControllerY = ControllerY;
	ServerFireAmmunition3P_Parms.PunchAnglePitch = PunchAnglePitch;
	ServerFireAmmunition3P_Parms.PunchAngleYaw = PunchAngleYaw;
	memcpy ( &ServerFireAmmunition3P_Parms.FireStartLocation, &FireStartLocation, 0xC );
	ServerFireAmmunition3P_Parms.DeltaPunchAnglePitch = DeltaPunchAnglePitch;
	ServerFireAmmunition3P_Parms.ClientTime = ClientTime;
	ServerFireAmmunition3P_Parms.DamagePawn1 = DamagePawn1;
	ServerFireAmmunition3P_Parms.WallNum1 = WallNum1;
	ServerFireAmmunition3P_Parms.HitGroup1 = HitGroup1;
	ServerFireAmmunition3P_Parms.HitDamage1 = HitDamage1;
	memcpy ( &ServerFireAmmunition3P_Parms.HitLocation1, &HitLocation1, 0xC );
	memcpy ( &ServerFireAmmunition3P_Parms.HitDir1, &HitDir1, 0xC );
	memcpy ( &ServerFireAmmunition3P_Parms.DamagePawnLoc1, &DamagePawnLoc1, 0xC );
	memcpy ( &ServerFireAmmunition3P_Parms.HitBoneName1, &HitBoneName1, 0x8 );
	ServerFireAmmunition3P_Parms.DamagePawn2 = DamagePawn2;
	ServerFireAmmunition3P_Parms.WallNum2 = WallNum2;
	ServerFireAmmunition3P_Parms.HitGroup2 = HitGroup2;
	ServerFireAmmunition3P_Parms.HitDamage2 = HitDamage2;
	memcpy ( &ServerFireAmmunition3P_Parms.HitLocation2, &HitLocation2, 0xC );
	memcpy ( &ServerFireAmmunition3P_Parms.HitDir2, &HitDir2, 0xC );
	memcpy ( &ServerFireAmmunition3P_Parms.DamagePawnLoc2, &DamagePawnLoc2, 0xC );
	memcpy ( &ServerFireAmmunition3P_Parms.HitBoneName2, &HitBoneName2, 0x8 );
	ServerFireAmmunition3P_Parms.DamagePawn3 = DamagePawn3;
	ServerFireAmmunition3P_Parms.WallNum3 = WallNum3;
	ServerFireAmmunition3P_Parms.HitGroup3 = HitGroup3;
	ServerFireAmmunition3P_Parms.HitDamage3 = HitDamage3;
	memcpy ( &ServerFireAmmunition3P_Parms.HitLocation3, &HitLocation3, 0xC );
	memcpy ( &ServerFireAmmunition3P_Parms.HitDir3, &HitDir3, 0xC );
	memcpy ( &ServerFireAmmunition3P_Parms.DamagePawnLoc3, &DamagePawnLoc3, 0xC );
	memcpy ( &ServerFireAmmunition3P_Parms.HitBoneName3, &HitBoneName3, 0x8 );
	memcpy ( &ServerFireAmmunition3P_Parms.FireEndLocation, &FireEndLocation, 0xC );
	ServerFireAmmunition3P_Parms.SandCDis1 = SandCDis1;
	ServerFireAmmunition3P_Parms.SandCDis2 = SandCDis2;
	ServerFireAmmunition3P_Parms.SandCDis3 = SandCDis3;
	memcpy ( &ServerFireAmmunition3P_Parms.ClientForwardDirection, &ClientForwardDirection, 0xC );

	this->ProcessEvent ( pFnServerFireAmmunition3P, &ServerFireAmmunition3P_Parms, NULL );
};

// Function MechaGame.TGMechaAccurateGun.ServerFireAmmunition2P
// [0x00A240C2] 
// Parameters infos:
// int                            ControllerP                    ( CPF_Parm )
// int                            ControllerR                    ( CPF_Parm )
// int                            ControllerY                    ( CPF_Parm )
// int                            PunchAnglePitch                ( CPF_Parm )
// int                            PunchAngleYaw                  ( CPF_Parm )
// struct FVectorNoCompress       FireStartLocation              ( CPF_Parm )
// int                            DeltaPunchAnglePitch           ( CPF_Parm )
// float                          ClientTime                     ( CPF_Parm )
// class APawn*                   DamagePawn1                    ( CPF_Parm )
// unsigned char                  WallNum1                       ( CPF_Parm )
// unsigned char                  HitGroup1                      ( CPF_Parm )
// int                            HitDamage1                     ( CPF_Parm )
// struct FVector                 HitLocation1                   ( CPF_Parm )
// struct FVector                 HitDir1                        ( CPF_Parm )
// struct FVectorNoCompress       DamagePawnLoc1                 ( CPF_Parm )
// struct FName                   HitBoneName1                   ( CPF_Parm )
// class APawn*                   DamagePawn2                    ( CPF_Parm )
// unsigned char                  WallNum2                       ( CPF_Parm )
// unsigned char                  HitGroup2                      ( CPF_Parm )
// int                            HitDamage2                     ( CPF_Parm )
// struct FVector                 HitLocation2                   ( CPF_Parm )
// struct FVector                 HitDir2                        ( CPF_Parm )
// struct FVectorNoCompress       DamagePawnLoc2                 ( CPF_Parm )
// struct FName                   HitBoneName2                   ( CPF_Parm )
// struct FVector                 FireEndLocation                ( CPF_OptionalParm | CPF_Parm )
// float                          SandCDis1                      ( CPF_OptionalParm | CPF_Parm )
// float                          SandCDis2                      ( CPF_OptionalParm | CPF_Parm )
// struct FVectorNoCompress       ClientForwardDirection         ( CPF_OptionalParm | CPF_Parm )

void ATGMechaAccurateGun::ServerFireAmmunition2P ( int ControllerP, int ControllerR, int ControllerY, int PunchAnglePitch, int PunchAngleYaw, struct FVectorNoCompress FireStartLocation, int DeltaPunchAnglePitch, float ClientTime, class APawn* DamagePawn1, unsigned char WallNum1, unsigned char HitGroup1, int HitDamage1, struct FVector HitLocation1, struct FVector HitDir1, struct FVectorNoCompress DamagePawnLoc1, struct FName HitBoneName1, class APawn* DamagePawn2, unsigned char WallNum2, unsigned char HitGroup2, int HitDamage2, struct FVector HitLocation2, struct FVector HitDir2, struct FVectorNoCompress DamagePawnLoc2, struct FName HitBoneName2, struct FVector FireEndLocation, float SandCDis1, float SandCDis2, struct FVectorNoCompress ClientForwardDirection )
{
	static UFunction* pFnServerFireAmmunition2P = NULL;

	if ( ! pFnServerFireAmmunition2P )
		pFnServerFireAmmunition2P = (UFunction*) UObject::GObjObjects()->Data[ 211281 ];

	ATGMechaAccurateGun_execServerFireAmmunition2P_Parms ServerFireAmmunition2P_Parms;
	ServerFireAmmunition2P_Parms.ControllerP = ControllerP;
	ServerFireAmmunition2P_Parms.ControllerR = ControllerR;
	ServerFireAmmunition2P_Parms.ControllerY = ControllerY;
	ServerFireAmmunition2P_Parms.PunchAnglePitch = PunchAnglePitch;
	ServerFireAmmunition2P_Parms.PunchAngleYaw = PunchAngleYaw;
	memcpy ( &ServerFireAmmunition2P_Parms.FireStartLocation, &FireStartLocation, 0xC );
	ServerFireAmmunition2P_Parms.DeltaPunchAnglePitch = DeltaPunchAnglePitch;
	ServerFireAmmunition2P_Parms.ClientTime = ClientTime;
	ServerFireAmmunition2P_Parms.DamagePawn1 = DamagePawn1;
	ServerFireAmmunition2P_Parms.WallNum1 = WallNum1;
	ServerFireAmmunition2P_Parms.HitGroup1 = HitGroup1;
	ServerFireAmmunition2P_Parms.HitDamage1 = HitDamage1;
	memcpy ( &ServerFireAmmunition2P_Parms.HitLocation1, &HitLocation1, 0xC );
	memcpy ( &ServerFireAmmunition2P_Parms.HitDir1, &HitDir1, 0xC );
	memcpy ( &ServerFireAmmunition2P_Parms.DamagePawnLoc1, &DamagePawnLoc1, 0xC );
	memcpy ( &ServerFireAmmunition2P_Parms.HitBoneName1, &HitBoneName1, 0x8 );
	ServerFireAmmunition2P_Parms.DamagePawn2 = DamagePawn2;
	ServerFireAmmunition2P_Parms.WallNum2 = WallNum2;
	ServerFireAmmunition2P_Parms.HitGroup2 = HitGroup2;
	ServerFireAmmunition2P_Parms.HitDamage2 = HitDamage2;
	memcpy ( &ServerFireAmmunition2P_Parms.HitLocation2, &HitLocation2, 0xC );
	memcpy ( &ServerFireAmmunition2P_Parms.HitDir2, &HitDir2, 0xC );
	memcpy ( &ServerFireAmmunition2P_Parms.DamagePawnLoc2, &DamagePawnLoc2, 0xC );
	memcpy ( &ServerFireAmmunition2P_Parms.HitBoneName2, &HitBoneName2, 0x8 );
	memcpy ( &ServerFireAmmunition2P_Parms.FireEndLocation, &FireEndLocation, 0xC );
	ServerFireAmmunition2P_Parms.SandCDis1 = SandCDis1;
	ServerFireAmmunition2P_Parms.SandCDis2 = SandCDis2;
	memcpy ( &ServerFireAmmunition2P_Parms.ClientForwardDirection, &ClientForwardDirection, 0xC );

	this->ProcessEvent ( pFnServerFireAmmunition2P, &ServerFireAmmunition2P_Parms, NULL );
};

// Function MechaGame.TGMechaAccurateGun.ServerFireAmmunition1P
// [0x00A240C2] 
// Parameters infos:
// int                            ControllerP                    ( CPF_Parm )
// int                            ControllerR                    ( CPF_Parm )
// int                            ControllerY                    ( CPF_Parm )
// int                            PunchAnglePitch                ( CPF_Parm )
// int                            PunchAngleYaw                  ( CPF_Parm )
// struct FVectorNoCompress       FireStartLocation              ( CPF_Parm )
// int                            DeltaPunchAnglePitch           ( CPF_Parm )
// float                          ClientTime                     ( CPF_Parm )
// class APawn*                   DamagePawn                     ( CPF_Parm )
// unsigned char                  WallNum                        ( CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_Parm )
// int                            HitDamage                      ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitDir                         ( CPF_Parm )
// struct FVectorNoCompress       DamagePawnLoc                  ( CPF_Parm )
// struct FName                   HitBoneName                    ( CPF_Parm )
// struct FVector                 FireEndLocation                ( CPF_OptionalParm | CPF_Parm )
// float                          SandCDis                       ( CPF_OptionalParm | CPF_Parm )
// struct FVectorNoCompress       ClientForwardDirection         ( CPF_OptionalParm | CPF_Parm )

void ATGMechaAccurateGun::ServerFireAmmunition1P ( int ControllerP, int ControllerR, int ControllerY, int PunchAnglePitch, int PunchAngleYaw, struct FVectorNoCompress FireStartLocation, int DeltaPunchAnglePitch, float ClientTime, class APawn* DamagePawn, unsigned char WallNum, unsigned char HitGroup, int HitDamage, struct FVector HitLocation, struct FVector HitDir, struct FVectorNoCompress DamagePawnLoc, struct FName HitBoneName, struct FVector FireEndLocation, float SandCDis, struct FVectorNoCompress ClientForwardDirection )
{
	static UFunction* pFnServerFireAmmunition1P = NULL;

	if ( ! pFnServerFireAmmunition1P )
		pFnServerFireAmmunition1P = (UFunction*) UObject::GObjObjects()->Data[ 211258 ];

	ATGMechaAccurateGun_execServerFireAmmunition1P_Parms ServerFireAmmunition1P_Parms;
	ServerFireAmmunition1P_Parms.ControllerP = ControllerP;
	ServerFireAmmunition1P_Parms.ControllerR = ControllerR;
	ServerFireAmmunition1P_Parms.ControllerY = ControllerY;
	ServerFireAmmunition1P_Parms.PunchAnglePitch = PunchAnglePitch;
	ServerFireAmmunition1P_Parms.PunchAngleYaw = PunchAngleYaw;
	memcpy ( &ServerFireAmmunition1P_Parms.FireStartLocation, &FireStartLocation, 0xC );
	ServerFireAmmunition1P_Parms.DeltaPunchAnglePitch = DeltaPunchAnglePitch;
	ServerFireAmmunition1P_Parms.ClientTime = ClientTime;
	ServerFireAmmunition1P_Parms.DamagePawn = DamagePawn;
	ServerFireAmmunition1P_Parms.WallNum = WallNum;
	ServerFireAmmunition1P_Parms.HitGroup = HitGroup;
	ServerFireAmmunition1P_Parms.HitDamage = HitDamage;
	memcpy ( &ServerFireAmmunition1P_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ServerFireAmmunition1P_Parms.HitDir, &HitDir, 0xC );
	memcpy ( &ServerFireAmmunition1P_Parms.DamagePawnLoc, &DamagePawnLoc, 0xC );
	memcpy ( &ServerFireAmmunition1P_Parms.HitBoneName, &HitBoneName, 0x8 );
	memcpy ( &ServerFireAmmunition1P_Parms.FireEndLocation, &FireEndLocation, 0xC );
	ServerFireAmmunition1P_Parms.SandCDis = SandCDis;
	memcpy ( &ServerFireAmmunition1P_Parms.ClientForwardDirection, &ClientForwardDirection, 0xC );

	this->ProcessEvent ( pFnServerFireAmmunition1P, &ServerFireAmmunition1P_Parms, NULL );
};

// Function MechaGame.TGMechaAccurateGun.InstantFireEndTrace
// [0x00020102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartTrace                     ( CPF_Parm )

struct FVector ATGMechaAccurateGun::InstantFireEndTrace ( struct FVector StartTrace )
{
	static UFunction* pFnInstantFireEndTrace = NULL;

	if ( ! pFnInstantFireEndTrace )
		pFnInstantFireEndTrace = (UFunction*) UObject::GObjObjects()->Data[ 211255 ];

	ATGMechaAccurateGun_execInstantFireEndTrace_Parms InstantFireEndTrace_Parms;
	memcpy ( &InstantFireEndTrace_Parms.StartTrace, &StartTrace, 0xC );

	this->ProcessEvent ( pFnInstantFireEndTrace, &InstantFireEndTrace_Parms, NULL );

	return InstantFireEndTrace_Parms.ReturnValue;
};

// Function MechaGame.TGMechaAnimNotify_ViewShake.Notify
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Owner                          ( CPF_Parm )
// class UAnimNodeSequence*       AnimSeqInstigator              ( CPF_Parm )

void UTGMechaAnimNotify_ViewShake::eventNotify ( class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator )
{
	static UFunction* pFnNotify = NULL;

	if ( ! pFnNotify )
		pFnNotify = (UFunction*) UObject::GObjObjects()->Data[ 211587 ];

	UTGMechaAnimNotify_ViewShake_eventNotify_Parms Notify_Parms;
	Notify_Parms.Owner = Owner;
	Notify_Parms.AnimSeqInstigator = AnimSeqInstigator;

	this->ProcessEvent ( pFnNotify, &Notify_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.Killed_CalcAchi
// [0x00020002] 
// Parameters infos:
// class ATGMechaDMPlayerController* Killer                         ( CPF_Parm )
// class ATGMechaDMPlayerController* Killed                         ( CPF_Parm )
// class ATGPawn*                 KilledPawn                     ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void ATGMechaDoomMatch::Killed_CalcAchi ( class ATGMechaDMPlayerController* Killer, class ATGMechaDMPlayerController* Killed, class ATGPawn* KilledPawn, class UClass* DamageType )
{
	static UFunction* pFnKilled_CalcAchi = NULL;

	if ( ! pFnKilled_CalcAchi )
		pFnKilled_CalcAchi = (UFunction*) UObject::GObjObjects()->Data[ 211736 ];

	ATGMechaDoomMatch_execKilled_CalcAchi_Parms Killed_CalcAchi_Parms;
	Killed_CalcAchi_Parms.Killer = Killer;
	Killed_CalcAchi_Parms.Killed = Killed;
	Killed_CalcAchi_Parms.KilledPawn = KilledPawn;
	Killed_CalcAchi_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnKilled_CalcAchi, &Killed_CalcAchi_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.NotifyDoorSwitchStateChanged
// [0x00020002] 
// Parameters infos:
// unsigned char                  DoorState                      ( CPF_Parm )

void ATGMechaDoomMatch::NotifyDoorSwitchStateChanged ( unsigned char DoorState )
{
	static UFunction* pFnNotifyDoorSwitchStateChanged = NULL;

	if ( ! pFnNotifyDoorSwitchStateChanged )
		pFnNotifyDoorSwitchStateChanged = (UFunction*) UObject::GObjObjects()->Data[ 211732 ];

	ATGMechaDoomMatch_execNotifyDoorSwitchStateChanged_Parms NotifyDoorSwitchStateChanged_Parms;
	NotifyDoorSwitchStateChanged_Parms.DoorState = DoorState;

	this->ProcessEvent ( pFnNotifyDoorSwitchStateChanged, &NotifyDoorSwitchStateChanged_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.SetDoorOpenSpeedState
// [0x00020002] 
// Parameters infos:
// unsigned char                  NewState                       ( CPF_Parm )

void ATGMechaDoomMatch::SetDoorOpenSpeedState ( unsigned char NewState )
{
	static UFunction* pFnSetDoorOpenSpeedState = NULL;

	if ( ! pFnSetDoorOpenSpeedState )
		pFnSetDoorOpenSpeedState = (UFunction*) UObject::GObjObjects()->Data[ 211723 ];

	ATGMechaDoomMatch_execSetDoorOpenSpeedState_Parms SetDoorOpenSpeedState_Parms;
	SetDoorOpenSpeedState_Parms.NewState = NewState;

	this->ProcessEvent ( pFnSetDoorOpenSpeedState, &SetDoorOpenSpeedState_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.SetDoorOpenSpeedScale
// [0x00020002] 
// Parameters infos:
// float                          SpeedScale                     ( CPF_Parm )

void ATGMechaDoomMatch::SetDoorOpenSpeedScale ( float SpeedScale )
{
	static UFunction* pFnSetDoorOpenSpeedScale = NULL;

	if ( ! pFnSetDoorOpenSpeedScale )
		pFnSetDoorOpenSpeedScale = (UFunction*) UObject::GObjObjects()->Data[ 211721 ];

	ATGMechaDoomMatch_execSetDoorOpenSpeedScale_Parms SetDoorOpenSpeedScale_Parms;
	SetDoorOpenSpeedScale_Parms.SpeedScale = SpeedScale;

	this->ProcessEvent ( pFnSetDoorOpenSpeedScale, &SetDoorOpenSpeedScale_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.SetDoorOpenProgress
// [0x00020002] 
// Parameters infos:
// float                          Progress                       ( CPF_Parm )

void ATGMechaDoomMatch::SetDoorOpenProgress ( float Progress )
{
	static UFunction* pFnSetDoorOpenProgress = NULL;

	if ( ! pFnSetDoorOpenProgress )
		pFnSetDoorOpenProgress = (UFunction*) UObject::GObjObjects()->Data[ 211717 ];

	ATGMechaDoomMatch_execSetDoorOpenProgress_Parms SetDoorOpenProgress_Parms;
	SetDoorOpenProgress_Parms.Progress = Progress;

	this->ProcessEvent ( pFnSetDoorOpenProgress, &SetDoorOpenProgress_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.SetDoorOpenProgressStarted
// [0x00020002] 
// Parameters infos:
// unsigned long                  bStart                         ( CPF_Parm )

void ATGMechaDoomMatch::SetDoorOpenProgressStarted ( unsigned long bStart )
{
	static UFunction* pFnSetDoorOpenProgressStarted = NULL;

	if ( ! pFnSetDoorOpenProgressStarted )
		pFnSetDoorOpenProgressStarted = (UFunction*) UObject::GObjObjects()->Data[ 211712 ];

	ATGMechaDoomMatch_execSetDoorOpenProgressStarted_Parms SetDoorOpenProgressStarted_Parms;
	SetDoorOpenProgressStarted_Parms.bStart = bStart;

	this->ProcessEvent ( pFnSetDoorOpenProgressStarted, &SetDoorOpenProgressStarted_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.TimerDoorOpenProgress
// [0x00020002] 
// Parameters infos:

void ATGMechaDoomMatch::TimerDoorOpenProgress ( )
{
	static UFunction* pFnTimerDoorOpenProgress = NULL;

	if ( ! pFnTimerDoorOpenProgress )
		pFnTimerDoorOpenProgress = (UFunction*) UObject::GObjObjects()->Data[ 211704 ];

	ATGMechaDoomMatch_execTimerDoorOpenProgress_Parms TimerDoorOpenProgress_Parms;

	this->ProcessEvent ( pFnTimerDoorOpenProgress, &TimerDoorOpenProgress_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.StopDoorOpenProgress
// [0x00020002] 
// Parameters infos:

void ATGMechaDoomMatch::StopDoorOpenProgress ( )
{
	static UFunction* pFnStopDoorOpenProgress = NULL;

	if ( ! pFnStopDoorOpenProgress )
		pFnStopDoorOpenProgress = (UFunction*) UObject::GObjObjects()->Data[ 211703 ];

	ATGMechaDoomMatch_execStopDoorOpenProgress_Parms StopDoorOpenProgress_Parms;

	this->ProcessEvent ( pFnStopDoorOpenProgress, &StopDoorOpenProgress_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.TimerStartDoorOpenProgress
// [0x00020002] 
// Parameters infos:

void ATGMechaDoomMatch::TimerStartDoorOpenProgress ( )
{
	static UFunction* pFnTimerStartDoorOpenProgress = NULL;

	if ( ! pFnTimerStartDoorOpenProgress )
		pFnTimerStartDoorOpenProgress = (UFunction*) UObject::GObjObjects()->Data[ 211701 ];

	ATGMechaDoomMatch_execTimerStartDoorOpenProgress_Parms TimerStartDoorOpenProgress_Parms;

	this->ProcessEvent ( pFnTimerStartDoorOpenProgress, &TimerStartDoorOpenProgress_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.BroadcastRoundMessage
// [0x00024002] 
// Parameters infos:
// unsigned long                  bRoundStart                    ( CPF_Parm )
// unsigned long                  bGameOver                      ( CPF_OptionalParm | CPF_Parm )

void ATGMechaDoomMatch::BroadcastRoundMessage ( unsigned long bRoundStart, unsigned long bGameOver )
{
	static UFunction* pFnBroadcastRoundMessage = NULL;

	if ( ! pFnBroadcastRoundMessage )
		pFnBroadcastRoundMessage = (UFunction*) UObject::GObjObjects()->Data[ 211696 ];

	ATGMechaDoomMatch_execBroadcastRoundMessage_Parms BroadcastRoundMessage_Parms;
	BroadcastRoundMessage_Parms.bRoundStart = bRoundStart;
	BroadcastRoundMessage_Parms.bGameOver = bGameOver;

	this->ProcessEvent ( pFnBroadcastRoundMessage, &BroadcastRoundMessage_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.GenericEndRound
// [0x00820002] 
// Parameters infos:
// int                            TeamIndex                      ( CPF_Parm )
// struct FString                 Reason                         ( CPF_Parm | CPF_NeedCtorLink )
// class AActor*                  EndRoundFocus                  ( CPF_Parm )

void ATGMechaDoomMatch::GenericEndRound ( int TeamIndex, struct FString Reason, class AActor* EndRoundFocus )
{
	static UFunction* pFnGenericEndRound = NULL;

	if ( ! pFnGenericEndRound )
		pFnGenericEndRound = (UFunction*) UObject::GObjObjects()->Data[ 211686 ];

	ATGMechaDoomMatch_execGenericEndRound_Parms GenericEndRound_Parms;
	GenericEndRound_Parms.TeamIndex = TeamIndex;
	memcpy ( &GenericEndRound_Parms.Reason, &Reason, 0xC );
	GenericEndRound_Parms.EndRoundFocus = EndRoundFocus;

	this->ProcessEvent ( pFnGenericEndRound, &GenericEndRound_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.NotifyItemDestroyed
// [0x00020002] 
// Parameters infos:
// class AMechaDestructibleItem*  Item                           ( CPF_Parm )
// class AMechaGamePlayerController* InstigatorPC                   ( CPF_Parm )

void ATGMechaDoomMatch::NotifyItemDestroyed ( class AMechaDestructibleItem* Item, class AMechaGamePlayerController* InstigatorPC )
{
	static UFunction* pFnNotifyItemDestroyed = NULL;

	if ( ! pFnNotifyItemDestroyed )
		pFnNotifyItemDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 211679 ];

	ATGMechaDoomMatch_execNotifyItemDestroyed_Parms NotifyItemDestroyed_Parms;
	NotifyItemDestroyed_Parms.Item = Item;
	NotifyItemDestroyed_Parms.InstigatorPC = InstigatorPC;

	this->ProcessEvent ( pFnNotifyItemDestroyed, &NotifyItemDestroyed_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.SetTarget
// [0x00020002] 
// Parameters infos:
// class AMechaDestructibleItem*  Item                           ( CPF_Parm )
// unsigned long                  bEnabled                       ( CPF_Parm )

void ATGMechaDoomMatch::SetTarget ( class AMechaDestructibleItem* Item, unsigned long bEnabled )
{
	static UFunction* pFnSetTarget = NULL;

	if ( ! pFnSetTarget )
		pFnSetTarget = (UFunction*) UObject::GObjObjects()->Data[ 211675 ];

	ATGMechaDoomMatch_execSetTarget_Parms SetTarget_Parms;
	SetTarget_Parms.Item = Item;
	SetTarget_Parms.bEnabled = bEnabled;

	this->ProcessEvent ( pFnSetTarget, &SetTarget_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.AddTeamScore
// [0x00020002] 
// Parameters infos:
// int                            TeamIndex                      ( CPF_Parm )

void ATGMechaDoomMatch::AddTeamScore ( int TeamIndex )
{
	static UFunction* pFnAddTeamScore = NULL;

	if ( ! pFnAddTeamScore )
		pFnAddTeamScore = (UFunction*) UObject::GObjObjects()->Data[ 211671 ];

	ATGMechaDoomMatch_execAddTeamScore_Parms AddTeamScore_Parms;
	AddTeamScore_Parms.TeamIndex = TeamIndex;

	this->ProcessEvent ( pFnAddTeamScore, &AddTeamScore_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.ScoreKill
// [0x00020002] 
// Parameters infos:
// class AController*             Killer                         ( CPF_Parm )
// class AController*             Other                          ( CPF_Parm )

void ATGMechaDoomMatch::ScoreKill ( class AController* Killer, class AController* Other )
{
	static UFunction* pFnScoreKill = NULL;

	if ( ! pFnScoreKill )
		pFnScoreKill = (UFunction*) UObject::GObjObjects()->Data[ 211666 ];

	ATGMechaDoomMatch_execScoreKill_Parms ScoreKill_Parms;
	ScoreKill_Parms.Killer = Killer;
	ScoreKill_Parms.Other = Other;

	this->ProcessEvent ( pFnScoreKill, &ScoreKill_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.Killed
// [0x00020002] 
// Parameters infos:
// class AController*             Killer                         ( CPF_Parm )
// class AController*             KilledPlayer                   ( CPF_Parm )
// class APawn*                   KilledPawn                     ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void ATGMechaDoomMatch::Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType )
{
	static UFunction* pFnKilled = NULL;

	if ( ! pFnKilled )
		pFnKilled = (UFunction*) UObject::GObjObjects()->Data[ 211661 ];

	ATGMechaDoomMatch_execKilled_Parms Killed_Parms;
	Killed_Parms.Killer = Killer;
	Killed_Parms.KilledPlayer = KilledPlayer;
	Killed_Parms.KilledPawn = KilledPawn;
	Killed_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnKilled, &Killed_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.SpawnDefaultPawnFor
// [0x00020002] 
// Parameters infos:
// class APawn*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             NewPlayer                      ( CPF_Parm )
// class ANavigationPoint*        StartSpot                      ( CPF_Parm )

class APawn* ATGMechaDoomMatch::SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot )
{
	static UFunction* pFnSpawnDefaultPawnFor = NULL;

	if ( ! pFnSpawnDefaultPawnFor )
		pFnSpawnDefaultPawnFor = (UFunction*) UObject::GObjObjects()->Data[ 211657 ];

	ATGMechaDoomMatch_execSpawnDefaultPawnFor_Parms SpawnDefaultPawnFor_Parms;
	SpawnDefaultPawnFor_Parms.NewPlayer = NewPlayer;
	SpawnDefaultPawnFor_Parms.StartSpot = StartSpot;

	this->ProcessEvent ( pFnSpawnDefaultPawnFor, &SpawnDefaultPawnFor_Parms, NULL );

	return SpawnDefaultPawnFor_Parms.ReturnValue;
};

// Function MechaGame.TGMechaDoomMatch.Bombing
// [0x00020002] 
// Parameters infos:
// float                          DamageHealthPercent            ( CPF_Parm )

void ATGMechaDoomMatch::Bombing ( float DamageHealthPercent )
{
	static UFunction* pFnBombing = NULL;

	if ( ! pFnBombing )
		pFnBombing = (UFunction*) UObject::GObjObjects()->Data[ 211653 ];

	ATGMechaDoomMatch_execBombing_Parms Bombing_Parms;
	Bombing_Parms.DamageHealthPercent = DamageHealthPercent;

	this->ProcessEvent ( pFnBombing, &Bombing_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.RestartAllPlayers
// [0x00020002] 
// Parameters infos:

void ATGMechaDoomMatch::RestartAllPlayers ( )
{
	static UFunction* pFnRestartAllPlayers = NULL;

	if ( ! pFnRestartAllPlayers )
		pFnRestartAllPlayers = (UFunction*) UObject::GObjObjects()->Data[ 211649 ];

	ATGMechaDoomMatch_execRestartAllPlayers_Parms RestartAllPlayers_Parms;

	this->ProcessEvent ( pFnRestartAllPlayers, &RestartAllPlayers_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.RestartPlayer
// [0x00020002] 
// Parameters infos:
// class AController*             NewPlayer                      ( CPF_Parm )

void ATGMechaDoomMatch::RestartPlayer ( class AController* NewPlayer )
{
	static UFunction* pFnRestartPlayer = NULL;

	if ( ! pFnRestartPlayer )
		pFnRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 211646 ];

	ATGMechaDoomMatch_execRestartPlayer_Parms RestartPlayer_Parms;
	RestartPlayer_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnRestartPlayer, &RestartPlayer_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.ChangeSides
// [0x00020002] 
// Parameters infos:

void ATGMechaDoomMatch::ChangeSides ( )
{
	static UFunction* pFnChangeSides = NULL;

	if ( ! pFnChangeSides )
		pFnChangeSides = (UFunction*) UObject::GObjObjects()->Data[ 211640 ];

	ATGMechaDoomMatch_execChangeSides_Parms ChangeSides_Parms;

	this->ProcessEvent ( pFnChangeSides, &ChangeSides_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.ShouldChangeSides
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaDoomMatch::ShouldChangeSides ( )
{
	static UFunction* pFnShouldChangeSides = NULL;

	if ( ! pFnShouldChangeSides )
		pFnShouldChangeSides = (UFunction*) UObject::GObjObjects()->Data[ 211638 ];

	ATGMechaDoomMatch_execShouldChangeSides_Parms ShouldChangeSides_Parms;

	this->ProcessEvent ( pFnShouldChangeSides, &ShouldChangeSides_Parms, NULL );

	return ShouldChangeSides_Parms.ReturnValue;
};

// Function MechaGame.TGMechaDoomMatch.SwitchCamp
// [0x00020002] 
// Parameters infos:

void ATGMechaDoomMatch::SwitchCamp ( )
{
	static UFunction* pFnSwitchCamp = NULL;

	if ( ! pFnSwitchCamp )
		pFnSwitchCamp = (UFunction*) UObject::GObjObjects()->Data[ 211634 ];

	ATGMechaDoomMatch_execSwitchCamp_Parms SwitchCamp_Parms;

	this->ProcessEvent ( pFnSwitchCamp, &SwitchCamp_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.RoundEnded
// [0x00020002] 
// Parameters infos:
// unsigned long                  bGameOver                      ( CPF_Parm )

void ATGMechaDoomMatch::RoundEnded ( unsigned long bGameOver )
{
	static UFunction* pFnRoundEnded = NULL;

	if ( ! pFnRoundEnded )
		pFnRoundEnded = (UFunction*) UObject::GObjObjects()->Data[ 211632 ];

	ATGMechaDoomMatch_execRoundEnded_Parms RoundEnded_Parms;
	RoundEnded_Parms.bGameOver = bGameOver;

	this->ProcessEvent ( pFnRoundEnded, &RoundEnded_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.ResetRoundLevel
// [0x00020002] 
// Parameters infos:

void ATGMechaDoomMatch::ResetRoundLevel ( )
{
	static UFunction* pFnResetRoundLevel = NULL;

	if ( ! pFnResetRoundLevel )
		pFnResetRoundLevel = (UFunction*) UObject::GObjObjects()->Data[ 211631 ];

	ATGMechaDoomMatch_execResetRoundLevel_Parms ResetRoundLevel_Parms;

	this->ProcessEvent ( pFnResetRoundLevel, &ResetRoundLevel_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.AddInventoryFor
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class APawn*                   PlayerPawn                     ( CPF_Parm )

void ATGMechaDoomMatch::eventAddInventoryFor ( class APawn* PlayerPawn )
{
	static UFunction* pFnAddInventoryFor = NULL;

	if ( ! pFnAddInventoryFor )
		pFnAddInventoryFor = (UFunction*) UObject::GObjObjects()->Data[ 211629 ];

	ATGMechaDoomMatch_eventAddInventoryFor_Parms AddInventoryFor_Parms;
	AddInventoryFor_Parms.PlayerPawn = PlayerPawn;

	this->ProcessEvent ( pFnAddInventoryFor, &AddInventoryFor_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.SetupPlayerStart
// [0x00020002] 
// Parameters infos:
// unsigned char                  Type                           ( CPF_Parm )

void ATGMechaDoomMatch::SetupPlayerStart ( unsigned char Type )
{
	static UFunction* pFnSetupPlayerStart = NULL;

	if ( ! pFnSetupPlayerStart )
		pFnSetupPlayerStart = (UFunction*) UObject::GObjObjects()->Data[ 211624 ];

	ATGMechaDoomMatch_execSetupPlayerStart_Parms SetupPlayerStart_Parms;
	SetupPlayerStart_Parms.Type = Type;

	this->ProcessEvent ( pFnSetupPlayerStart, &SetupPlayerStart_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.TimerEnableCheckBalance
// [0x00020002] 
// Parameters infos:

void ATGMechaDoomMatch::TimerEnableCheckBalance ( )
{
	static UFunction* pFnTimerEnableCheckBalance = NULL;

	if ( ! pFnTimerEnableCheckBalance )
		pFnTimerEnableCheckBalance = (UFunction*) UObject::GObjObjects()->Data[ 211622 ];

	ATGMechaDoomMatch_execTimerEnableCheckBalance_Parms TimerEnableCheckBalance_Parms;

	this->ProcessEvent ( pFnTimerEnableCheckBalance, &TimerEnableCheckBalance_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.StartMatch
// [0x00020002] 
// Parameters infos:

void ATGMechaDoomMatch::StartMatch ( )
{
	static UFunction* pFnStartMatch = NULL;

	if ( ! pFnStartMatch )
		pFnStartMatch = (UFunction*) UObject::GObjObjects()->Data[ 211620 ];

	ATGMechaDoomMatch_execStartMatch_Parms StartMatch_Parms;

	this->ProcessEvent ( pFnStartMatch, &StartMatch_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.InitRound
// [0x00020002] 
// Parameters infos:

void ATGMechaDoomMatch::InitRound ( )
{
	static UFunction* pFnInitRound = NULL;

	if ( ! pFnInitRound )
		pFnInitRound = (UFunction*) UObject::GObjObjects()->Data[ 211619 ];

	ATGMechaDoomMatch_execInitRound_Parms InitRound_Parms;

	this->ProcessEvent ( pFnInitRound, &InitRound_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.Reset
// [0x00020002] 
// Parameters infos:

void ATGMechaDoomMatch::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 211617 ];

	ATGMechaDoomMatch_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.RoundStarted
// [0x00020002] 
// Parameters infos:

void ATGMechaDoomMatch::RoundStarted ( )
{
	static UFunction* pFnRoundStarted = NULL;

	if ( ! pFnRoundStarted )
		pFnRoundStarted = (UFunction*) UObject::GObjObjects()->Data[ 211612 ];

	ATGMechaDoomMatch_execRoundStarted_Parms RoundStarted_Parms;

	this->ProcessEvent ( pFnRoundStarted, &RoundStarted_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.InitGameReplicationInfo
// [0x00020002] 
// Parameters infos:

void ATGMechaDoomMatch::InitGameReplicationInfo ( )
{
	static UFunction* pFnInitGameReplicationInfo = NULL;

	if ( ! pFnInitGameReplicationInfo )
		pFnInitGameReplicationInfo = (UFunction*) UObject::GObjObjects()->Data[ 211609 ];

	ATGMechaDoomMatch_execInitGameReplicationInfo_Parms InitGameReplicationInfo_Parms;

	this->ProcessEvent ( pFnInitGameReplicationInfo, &InitGameReplicationInfo_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.UpdateGameSpecificSettings
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FGameSpecificSettings   Settings                       ( CPF_Parm )

void ATGMechaDoomMatch::eventUpdateGameSpecificSettings ( struct FGameSpecificSettings Settings )
{
	static UFunction* pFnUpdateGameSpecificSettings = NULL;

	if ( ! pFnUpdateGameSpecificSettings )
		pFnUpdateGameSpecificSettings = (UFunction*) UObject::GObjObjects()->Data[ 211606 ];

	ATGMechaDoomMatch_eventUpdateGameSpecificSettings_Parms UpdateGameSpecificSettings_Parms;
	memcpy ( &UpdateGameSpecificSettings_Parms.Settings, &Settings, 0x28 );

	this->ProcessEvent ( pFnUpdateGameSpecificSettings, &UpdateGameSpecificSettings_Parms, NULL );
};

// Function MechaGame.TGMechaDoomMatch.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void ATGMechaDoomMatch::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 211605 ];

	ATGMechaDoomMatch_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerStart.IsBlockedBy
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  BaseClass                      ( CPF_Parm )
// float                          Radius                         ( CPF_Parm )

bool ATGMechaPlayerStart::IsBlockedBy ( class UClass* BaseClass, float Radius )
{
	static UFunction* pFnIsBlockedBy = NULL;

	if ( ! pFnIsBlockedBy )
		pFnIsBlockedBy = (UFunction*) UObject::GObjObjects()->Data[ 212851 ];

	ATGMechaPlayerStart_execIsBlockedBy_Parms IsBlockedBy_Parms;
	IsBlockedBy_Parms.BaseClass = BaseClass;
	IsBlockedBy_Parms.Radius = Radius;

	this->ProcessEvent ( pFnIsBlockedBy, &IsBlockedBy_Parms, NULL );

	return IsBlockedBy_Parms.ReturnValue;
};

// Function MechaGame.TGMechaDMMessage.GetLifeTime
// [0x00022002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Switch                         ( CPF_Parm )

float UTGMechaDMMessage::GetLifeTime ( int Switch )
{
	static UFunction* pFnGetLifeTime = NULL;

	if ( ! pFnGetLifeTime )
		pFnGetLifeTime = (UFunction*) UObject::GObjObjects()->Data[ 212240 ];

	UTGMechaDMMessage_execGetLifeTime_Parms GetLifeTime_Parms;
	GetLifeTime_Parms.Switch = Switch;

	this->ProcessEvent ( pFnGetLifeTime, &GetLifeTime_Parms, NULL );

	return GetLifeTime_Parms.ReturnValue;
};

// Function MechaGame.TGMechaDMMessage.GetPos
// [0x00022002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Switch                         ( CPF_Parm )
// class AHUD*                    myHUD                          ( CPF_Parm )

float UTGMechaDMMessage::GetPos ( int Switch, class AHUD* myHUD )
{
	static UFunction* pFnGetPos = NULL;

	if ( ! pFnGetPos )
		pFnGetPos = (UFunction*) UObject::GObjObjects()->Data[ 212236 ];

	UTGMechaDMMessage_execGetPos_Parms GetPos_Parms;
	GetPos_Parms.Switch = Switch;
	GetPos_Parms.myHUD = myHUD;

	this->ProcessEvent ( pFnGetPos, &GetPos_Parms, NULL );

	return GetPos_Parms.ReturnValue;
};

// Function MechaGame.TGMechaDMMessage.GetFontSize
// [0x00022002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Switch                         ( CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI1                    ( CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI2                    ( CPF_Parm )
// class APlayerReplicationInfo*  LocalPlayer                    ( CPF_Parm )

int UTGMechaDMMessage::GetFontSize ( int Switch, class APlayerReplicationInfo* RelatedPRI1, class APlayerReplicationInfo* RelatedPRI2, class APlayerReplicationInfo* LocalPlayer )
{
	static UFunction* pFnGetFontSize = NULL;

	if ( ! pFnGetFontSize )
		pFnGetFontSize = (UFunction*) UObject::GObjObjects()->Data[ 212230 ];

	UTGMechaDMMessage_execGetFontSize_Parms GetFontSize_Parms;
	GetFontSize_Parms.Switch = Switch;
	GetFontSize_Parms.RelatedPRI1 = RelatedPRI1;
	GetFontSize_Parms.RelatedPRI2 = RelatedPRI2;
	GetFontSize_Parms.LocalPlayer = LocalPlayer;

	this->ProcessEvent ( pFnGetFontSize, &GetFontSize_Parms, NULL );

	return GetFontSize_Parms.ReturnValue;
};

// Function MechaGame.TGMechaDMMessage.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGMechaDMMessage::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 212222 ];

	UTGMechaDMMessage_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function MechaGame.TGSeqEvent_DoorSwitchStateChanged.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGSeqEvent_DoorSwitchStateChanged::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 215962 ];

	UTGSeqEvent_DoorSwitchStateChanged_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function MechaGame.TGMechaGamePawn.NotifyTeamChanged
// [0x00020100] 
// Parameters infos:

void ATGMechaGamePawn::NotifyTeamChanged ( )
{
	static UFunction* pFnNotifyTeamChanged = NULL;

	if ( ! pFnNotifyTeamChanged )
		pFnNotifyTeamChanged = (UFunction*) UObject::GObjObjects()->Data[ 212252 ];

	ATGMechaGamePawn_execNotifyTeamChanged_Parms NotifyTeamChanged_Parms;

	this->ProcessEvent ( pFnNotifyTeamChanged, &NotifyTeamChanged_Parms, NULL );
};

// Function MechaGame.TGMechaGamePawn.PostRenderFor
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void ATGMechaGamePawn::eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnPostRenderFor = NULL;

	if ( ! pFnPostRenderFor )
		pFnPostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 212247 ];

	ATGMechaGamePawn_eventPostRenderFor_Parms PostRenderFor_Parms;
	PostRenderFor_Parms.PC = PC;
	PostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &PostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &PostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	this->ProcessEvent ( pFnPostRenderFor, &PostRenderFor_Parms, NULL );
};

// Function MechaGame.TGMechaDMHUD.InternalCheckCrosshairOnFriendly
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   CheckPawn                      ( CPF_Parm )
// struct FRotator                TraceRot                       ( CPF_Parm )

bool ATGMechaDMHUD::InternalCheckCrosshairOnFriendly ( class APawn* CheckPawn, struct FRotator TraceRot )
{
	static UFunction* pFnInternalCheckCrosshairOnFriendly = NULL;

	if ( ! pFnInternalCheckCrosshairOnFriendly )
		pFnInternalCheckCrosshairOnFriendly = (UFunction*) UObject::GObjObjects()->Data[ 212213 ];

	ATGMechaDMHUD_execInternalCheckCrosshairOnFriendly_Parms InternalCheckCrosshairOnFriendly_Parms;
	InternalCheckCrosshairOnFriendly_Parms.CheckPawn = CheckPawn;
	memcpy ( &InternalCheckCrosshairOnFriendly_Parms.TraceRot, &TraceRot, 0xC );

	this->ProcessEvent ( pFnInternalCheckCrosshairOnFriendly, &InternalCheckCrosshairOnFriendly_Parms, NULL );

	return InternalCheckCrosshairOnFriendly_Parms.ReturnValue;
};

// Function MechaGame.TGMechaDMHUD.GetAngle
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 PointB                         ( CPF_Parm )
// struct FVector                 PointC                         ( CPF_Parm )

float ATGMechaDMHUD::GetAngle ( struct FVector PointB, struct FVector PointC )
{
	static UFunction* pFnGetAngle = NULL;

	if ( ! pFnGetAngle )
		pFnGetAngle = (UFunction*) UObject::GObjObjects()->Data[ 212209 ];

	ATGMechaDMHUD_execGetAngle_Parms GetAngle_Parms;
	memcpy ( &GetAngle_Parms.PointB, &PointB, 0xC );
	memcpy ( &GetAngle_Parms.PointC, &PointC, 0xC );

	this->ProcessEvent ( pFnGetAngle, &GetAngle_Parms, NULL );

	return GetAngle_Parms.ReturnValue;
};

// Function MechaGame.TGMechaDMHUD.DrawIndicator
// [0x00820002] 
// Parameters infos:

void ATGMechaDMHUD::DrawIndicator ( )
{
	static UFunction* pFnDrawIndicator = NULL;

	if ( ! pFnDrawIndicator )
		pFnDrawIndicator = (UFunction*) UObject::GObjObjects()->Data[ 212193 ];

	ATGMechaDMHUD_execDrawIndicator_Parms DrawIndicator_Parms;

	this->ProcessEvent ( pFnDrawIndicator, &DrawIndicator_Parms, NULL );
};

// Function MechaGame.TGMechaDMHUD.PostRender
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATGMechaDMHUD::eventPostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 212192 ];

	ATGMechaDMHUD_eventPostRender_Parms PostRender_Parms;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function MechaGame.TGMechaDMHUD.DrawBaseHitMessage
// [0x00020002] 
// Parameters infos:

void ATGMechaDMHUD::DrawBaseHitMessage ( )
{
	static UFunction* pFnDrawBaseHitMessage = NULL;

	if ( ! pFnDrawBaseHitMessage )
		pFnDrawBaseHitMessage = (UFunction*) UObject::GObjObjects()->Data[ 212186 ];

	ATGMechaDMHUD_execDrawBaseHitMessage_Parms DrawBaseHitMessage_Parms;

	this->ProcessEvent ( pFnDrawBaseHitMessage, &DrawBaseHitMessage_Parms, NULL );
};

// Function MechaGame.TGMechaDMHUD.NotifyDefenceLevelUp
// [0x00020002] 
// Parameters infos:

void ATGMechaDMHUD::NotifyDefenceLevelUp ( )
{
	static UFunction* pFnNotifyDefenceLevelUp = NULL;

	if ( ! pFnNotifyDefenceLevelUp )
		pFnNotifyDefenceLevelUp = (UFunction*) UObject::GObjObjects()->Data[ 212185 ];

	ATGMechaDMHUD_execNotifyDefenceLevelUp_Parms NotifyDefenceLevelUp_Parms;

	this->ProcessEvent ( pFnNotifyDefenceLevelUp, &NotifyDefenceLevelUp_Parms, NULL );
};

// Function MechaGame.TGMechaDMHUD.DrawDefenceLevel
// [0x00820002] 
// Parameters infos:

void ATGMechaDMHUD::DrawDefenceLevel ( )
{
	static UFunction* pFnDrawDefenceLevel = NULL;

	if ( ! pFnDrawDefenceLevel )
		pFnDrawDefenceLevel = (UFunction*) UObject::GObjObjects()->Data[ 212174 ];

	ATGMechaDMHUD_execDrawDefenceLevel_Parms DrawDefenceLevel_Parms;

	this->ProcessEvent ( pFnDrawDefenceLevel, &DrawDefenceLevel_Parms, NULL );
};

// Function MechaGame.TGMechaDMHUD.DrawShadowedText
// [0x00824002] 
// Parameters infos:
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          Scale                          ( CPF_OptionalParm | CPF_Parm )

void ATGMechaDMHUD::DrawShadowedText ( struct FString Text, float X, float Y, float Scale )
{
	static UFunction* pFnDrawShadowedText = NULL;

	if ( ! pFnDrawShadowedText )
		pFnDrawShadowedText = (UFunction*) UObject::GObjObjects()->Data[ 212168 ];

	ATGMechaDMHUD_execDrawShadowedText_Parms DrawShadowedText_Parms;
	memcpy ( &DrawShadowedText_Parms.Text, &Text, 0xC );
	DrawShadowedText_Parms.X = X;
	DrawShadowedText_Parms.Y = Y;
	DrawShadowedText_Parms.Scale = Scale;

	this->ProcessEvent ( pFnDrawShadowedText, &DrawShadowedText_Parms, NULL );
};

// Function MechaGame.TGMechaDMHUD.DrawBaseInfo
// [0x00820002] 
// Parameters infos:

void ATGMechaDMHUD::DrawBaseInfo ( )
{
	static UFunction* pFnDrawBaseInfo = NULL;

	if ( ! pFnDrawBaseInfo )
		pFnDrawBaseInfo = (UFunction*) UObject::GObjObjects()->Data[ 212155 ];

	ATGMechaDMHUD_execDrawBaseInfo_Parms DrawBaseInfo_Parms;

	this->ProcessEvent ( pFnDrawBaseInfo, &DrawBaseInfo_Parms, NULL );
};

// Function MechaGame.TGMechaDMHUD.DisplayTeamScore
// [0x00820002] 
// Parameters infos:

void ATGMechaDMHUD::DisplayTeamScore ( )
{
	static UFunction* pFnDisplayTeamScore = NULL;

	if ( ! pFnDisplayTeamScore )
		pFnDisplayTeamScore = (UFunction*) UObject::GObjObjects()->Data[ 212143 ];

	ATGMechaDMHUD_execDisplayTeamScore_Parms DisplayTeamScore_Parms;

	this->ProcessEvent ( pFnDisplayTeamScore, &DisplayTeamScore_Parms, NULL );
};

// Function MechaGame.TGMechaDMHUD.DrawOverlays
// [0x00820002] 
// Parameters infos:

void ATGMechaDMHUD::DrawOverlays ( )
{
	static UFunction* pFnDrawOverlays = NULL;

	if ( ! pFnDrawOverlays )
		pFnDrawOverlays = (UFunction*) UObject::GObjObjects()->Data[ 212140 ];

	ATGMechaDMHUD_execDrawOverlays_Parms DrawOverlays_Parms;

	this->ProcessEvent ( pFnDrawOverlays, &DrawOverlays_Parms, NULL );
};

// Function MechaGame.TGMechaDMHUD.DrawLivingHud
// [0x00020002] 
// Parameters infos:

void ATGMechaDMHUD::DrawLivingHud ( )
{
	static UFunction* pFnDrawLivingHud = NULL;

	if ( ! pFnDrawLivingHud )
		pFnDrawLivingHud = (UFunction*) UObject::GObjObjects()->Data[ 212139 ];

	ATGMechaDMHUD_execDrawLivingHud_Parms DrawLivingHud_Parms;

	this->ProcessEvent ( pFnDrawLivingHud, &DrawLivingHud_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Aerogun.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaWeap_Aerogun::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 214539 ];

	ATGMechaWeap_Aerogun_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Aerogun.DrawWeaponCrosshair
// [0x00820102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGMechaWeap_Aerogun::DrawWeaponCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshair = NULL;

	if ( ! pFnDrawWeaponCrosshair )
		pFnDrawWeaponCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 214527 ];

	ATGMechaWeap_Aerogun_execDrawWeaponCrosshair_Parms DrawWeaponCrosshair_Parms;
	DrawWeaponCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshair, &DrawWeaponCrosshair_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Aerogun.AerogunServerStopFire
// [0x002200C2] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )
// unsigned long                  bClientAbleToFire              ( CPF_Parm )

void ATGMechaWeap_Aerogun::AerogunServerStopFire ( unsigned char FireModeNum, unsigned long bClientAbleToFire )
{
	static UFunction* pFnAerogunServerStopFire = NULL;

	if ( ! pFnAerogunServerStopFire )
		pFnAerogunServerStopFire = (UFunction*) UObject::GObjObjects()->Data[ 214513 ];

	ATGMechaWeap_Aerogun_execAerogunServerStopFire_Parms AerogunServerStopFire_Parms;
	AerogunServerStopFire_Parms.FireModeNum = FireModeNum;
	AerogunServerStopFire_Parms.bClientAbleToFire = bClientAbleToFire;

	this->ProcessEvent ( pFnAerogunServerStopFire, &AerogunServerStopFire_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Aerogun.ProjectileFire
// [0x00020102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGMechaWeap_Aerogun::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 214499 ];

	ATGMechaWeap_Aerogun_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_Aerogun.GetRandomProjTargetLoc
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 LocalTargetLoc                 ( CPF_Parm )
// unsigned long                  bRightSide                     ( CPF_Parm )
// struct FMatrix                 TransMatrix                    ( CPF_Parm )

struct FVector ATGMechaWeap_Aerogun::GetRandomProjTargetLoc ( struct FVector LocalTargetLoc, unsigned long bRightSide, struct FMatrix TransMatrix )
{
	static UFunction* pFnGetRandomProjTargetLoc = NULL;

	if ( ! pFnGetRandomProjTargetLoc )
		pFnGetRandomProjTargetLoc = (UFunction*) UObject::GObjObjects()->Data[ 214490 ];

	ATGMechaWeap_Aerogun_execGetRandomProjTargetLoc_Parms GetRandomProjTargetLoc_Parms;
	memcpy ( &GetRandomProjTargetLoc_Parms.LocalTargetLoc, &LocalTargetLoc, 0xC );
	GetRandomProjTargetLoc_Parms.bRightSide = bRightSide;
	memcpy ( &GetRandomProjTargetLoc_Parms.TransMatrix, &TransMatrix, 0x40 );

	this->ProcessEvent ( pFnGetRandomProjTargetLoc, &GetRandomProjTargetLoc_Parms, NULL );

	return GetRandomProjTargetLoc_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_Aerogun.ServerProjectileFire
// [0x00A200C2] 
// Parameters infos:
// struct FVectorNoCompress       TargetLoc                      ( CPF_Parm )

void ATGMechaWeap_Aerogun::ServerProjectileFire ( struct FVectorNoCompress TargetLoc )
{
	static UFunction* pFnServerProjectileFire = NULL;

	if ( ! pFnServerProjectileFire )
		pFnServerProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 214473 ];

	ATGMechaWeap_Aerogun_execServerProjectileFire_Parms ServerProjectileFire_Parms;
	memcpy ( &ServerProjectileFire_Parms.TargetLoc, &TargetLoc, 0xC );

	this->ProcessEvent ( pFnServerProjectileFire, &ServerProjectileFire_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Aerogun.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaWeap_Aerogun::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 214472 ];

	ATGMechaWeap_Aerogun_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaProjectiveWeapon.FireAmmunition
// [0x00020102] 
// Parameters infos:

void ATGMechaProjectiveWeapon::FireAmmunition ( )
{
	static UFunction* pFnFireAmmunition = NULL;

	if ( ! pFnFireAmmunition )
		pFnFireAmmunition = (UFunction*) UObject::GObjObjects()->Data[ 214100 ];

	ATGMechaProjectiveWeapon_execFireAmmunition_Parms FireAmmunition_Parms;

	this->ProcessEvent ( pFnFireAmmunition, &FireAmmunition_Parms, NULL );
};

// Function MechaGame.TGMechaProjectiveWeapon.SetProjectileParms
// [0x00420102] 
// Parameters infos:
// class ATGMechaProjectile*      NewProj                        ( CPF_Parm | CPF_OutParm )

void ATGMechaProjectiveWeapon::SetProjectileParms ( class ATGMechaProjectile** NewProj )
{
	static UFunction* pFnSetProjectileParms = NULL;

	if ( ! pFnSetProjectileParms )
		pFnSetProjectileParms = (UFunction*) UObject::GObjObjects()->Data[ 214098 ];

	ATGMechaProjectiveWeapon_execSetProjectileParms_Parms SetProjectileParms_Parms;

	this->ProcessEvent ( pFnSetProjectileParms, &SetProjectileParms_Parms, NULL );

	if ( NewProj )
		*NewProj = SetProjectileParms_Parms.NewProj;
};

// Function MechaGame.TGMechaProjectiveWeapon.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* ATGMechaProjectiveWeapon::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 214093 ];

	ATGMechaProjectiveWeapon_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProjectiveWeapon.IncrementFlashCount
// [0x00020102] 
// Parameters infos:

void ATGMechaProjectiveWeapon::IncrementFlashCount ( )
{
	static UFunction* pFnIncrementFlashCount = NULL;

	if ( ! pFnIncrementFlashCount )
		pFnIncrementFlashCount = (UFunction*) UObject::GObjObjects()->Data[ 214088 ];

	ATGMechaProjectiveWeapon_execIncrementFlashCount_Parms IncrementFlashCount_Parms;

	this->ProcessEvent ( pFnIncrementFlashCount, &IncrementFlashCount_Parms, NULL );
};

// Function MechaGame.TGMechaProjectiveWeapon.GetProjectileAim
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartFireLoc                   ( CPF_Parm )

struct FVector ATGMechaProjectiveWeapon::GetProjectileAim ( struct FVector StartFireLoc )
{
	static UFunction* pFnGetProjectileAim = NULL;

	if ( ! pFnGetProjectileAim )
		pFnGetProjectileAim = (UFunction*) UObject::GObjObjects()->Data[ 214071 ];

	ATGMechaProjectiveWeapon_execGetProjectileAim_Parms GetProjectileAim_Parms;
	memcpy ( &GetProjectileAim_Parms.StartFireLoc, &StartFireLoc, 0xC );

	this->ProcessEvent ( pFnGetProjectileAim, &GetProjectileAim_Parms, NULL );

	return GetProjectileAim_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProjectiveWeapon.ModifyAimDirection
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                AimRotation                    ( CPF_Parm )

struct FVector ATGMechaProjectiveWeapon::ModifyAimDirection ( struct FRotator AimRotation )
{
	static UFunction* pFnModifyAimDirection = NULL;

	if ( ! pFnModifyAimDirection )
		pFnModifyAimDirection = (UFunction*) UObject::GObjObjects()->Data[ 214061 ];

	ATGMechaProjectiveWeapon_execModifyAimDirection_Parms ModifyAimDirection_Parms;
	memcpy ( &ModifyAimDirection_Parms.AimRotation, &AimRotation, 0xC );

	this->ProcessEvent ( pFnModifyAimDirection, &ModifyAimDirection_Parms, NULL );

	return ModifyAimDirection_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProjectiveWeapon.GetAllProjFireInfo
// [0x00020102] 
// Parameters infos:
// TArray< struct FMechaAeroProjFireInfo > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FMechaAeroProjFireInfo > ATGMechaProjectiveWeapon::GetAllProjFireInfo ( )
{
	static UFunction* pFnGetAllProjFireInfo = NULL;

	if ( ! pFnGetAllProjFireInfo )
		pFnGetAllProjFireInfo = (UFunction*) UObject::GObjObjects()->Data[ 214053 ];

	ATGMechaProjectiveWeapon_execGetAllProjFireInfo_Parms GetAllProjFireInfo_Parms;

	this->ProcessEvent ( pFnGetAllProjFireInfo, &GetAllProjFireInfo_Parms, NULL );

	return GetAllProjFireInfo_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProjectiveWeapon.GetPhysicalFireStartLoc
// [0x00024102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 AimDir                         ( CPF_OptionalParm | CPF_Parm )

struct FVector ATGMechaProjectiveWeapon::GetPhysicalFireStartLoc ( struct FVector AimDir )
{
	static UFunction* pFnGetPhysicalFireStartLoc = NULL;

	if ( ! pFnGetPhysicalFireStartLoc )
		pFnGetPhysicalFireStartLoc = (UFunction*) UObject::GObjObjects()->Data[ 214048 ];

	ATGMechaProjectiveWeapon_execGetPhysicalFireStartLoc_Parms GetPhysicalFireStartLoc_Parms;
	memcpy ( &GetPhysicalFireStartLoc_Parms.AimDir, &AimDir, 0xC );

	this->ProcessEvent ( pFnGetPhysicalFireStartLoc, &GetPhysicalFireStartLoc_Parms, NULL );

	return GetPhysicalFireStartLoc_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_Electrowelding.DrawWeaponCrosshair
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGMechaWeap_Electrowelding::DrawWeaponCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshair = NULL;

	if ( ! pFnDrawWeaponCrosshair )
		pFnDrawWeaponCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 214644 ];

	ATGMechaWeap_Electrowelding_execDrawWeaponCrosshair_Parms DrawWeaponCrosshair_Parms;
	DrawWeaponCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshair, &DrawWeaponCrosshair_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Electrowelding.StillFiring
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  FireMode                       ( CPF_Parm )

bool ATGMechaWeap_Electrowelding::StillFiring ( unsigned char FireMode )
{
	static UFunction* pFnStillFiring = NULL;

	if ( ! pFnStillFiring )
		pFnStillFiring = (UFunction*) UObject::GObjObjects()->Data[ 214641 ];

	ATGMechaWeap_Electrowelding_execStillFiring_Parms StillFiring_Parms;
	StillFiring_Parms.FireMode = FireMode;

	this->ProcessEvent ( pFnStillFiring, &StillFiring_Parms, NULL );

	return StillFiring_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_Electrowelding.CustomFire
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_Electrowelding::CustomFire ( )
{
	static UFunction* pFnCustomFire = NULL;

	if ( ! pFnCustomFire )
		pFnCustomFire = (UFunction*) UObject::GObjObjects()->Data[ 214633 ];

	ATGMechaWeap_Electrowelding_execCustomFire_Parms CustomFire_Parms;

	this->ProcessEvent ( pFnCustomFire, &CustomFire_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Electrowelding.Tick
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGMechaWeap_Electrowelding::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 214622 ];

	ATGMechaWeap_Electrowelding_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Electrowelding.SetOverheatingParms
// [0x00020102] 
// Parameters infos:
// class AActor*                  CurrFixingActor                ( CPF_Parm )

void ATGMechaWeap_Electrowelding::SetOverheatingParms ( class AActor* CurrFixingActor )
{
	static UFunction* pFnSetOverheatingParms = NULL;

	if ( ! pFnSetOverheatingParms )
		pFnSetOverheatingParms = (UFunction*) UObject::GObjObjects()->Data[ 214620 ];

	ATGMechaWeap_Electrowelding_execSetOverheatingParms_Parms SetOverheatingParms_Parms;
	SetOverheatingParms_Parms.CurrFixingActor = CurrFixingActor;

	this->ProcessEvent ( pFnSetOverheatingParms, &SetOverheatingParms_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Electrowelding.PlayFixingMechaEffect
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_Electrowelding::PlayFixingMechaEffect ( )
{
	static UFunction* pFnPlayFixingMechaEffect = NULL;

	if ( ! pFnPlayFixingMechaEffect )
		pFnPlayFixingMechaEffect = (UFunction*) UObject::GObjObjects()->Data[ 214617 ];

	ATGMechaWeap_Electrowelding_execPlayFixingMechaEffect_Parms PlayFixingMechaEffect_Parms;

	this->ProcessEvent ( pFnPlayFixingMechaEffect, &PlayFixingMechaEffect_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Electrowelding.ServerSetFixingEffect
// [0x00220042] 
// Parameters infos:
// class AActor*                  CurrFixingActor                ( CPF_Parm )
// struct FVector                 CurrHitLocation                ( CPF_Parm )

void ATGMechaWeap_Electrowelding::ServerSetFixingEffect ( class AActor* CurrFixingActor, struct FVector CurrHitLocation )
{
	static UFunction* pFnServerSetFixingEffect = NULL;

	if ( ! pFnServerSetFixingEffect )
		pFnServerSetFixingEffect = (UFunction*) UObject::GObjObjects()->Data[ 214612 ];

	ATGMechaWeap_Electrowelding_execServerSetFixingEffect_Parms ServerSetFixingEffect_Parms;
	ServerSetFixingEffect_Parms.CurrFixingActor = CurrFixingActor;
	memcpy ( &ServerSetFixingEffect_Parms.CurrHitLocation, &CurrHitLocation, 0xC );

	this->ProcessEvent ( pFnServerSetFixingEffect, &ServerSetFixingEffect_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Electrowelding.ServerSetFixingActor
// [0x002200C2] 
// Parameters infos:
// class AActor*                  CurrFixingActor                ( CPF_Parm )
// struct FVector                 CurrHitLocation                ( CPF_Parm )

void ATGMechaWeap_Electrowelding::ServerSetFixingActor ( class AActor* CurrFixingActor, struct FVector CurrHitLocation )
{
	static UFunction* pFnServerSetFixingActor = NULL;

	if ( ! pFnServerSetFixingActor )
		pFnServerSetFixingActor = (UFunction*) UObject::GObjObjects()->Data[ 214609 ];

	ATGMechaWeap_Electrowelding_execServerSetFixingActor_Parms ServerSetFixingActor_Parms;
	ServerSetFixingActor_Parms.CurrFixingActor = CurrFixingActor;
	memcpy ( &ServerSetFixingActor_Parms.CurrHitLocation, &CurrHitLocation, 0xC );

	this->ProcessEvent ( pFnServerSetFixingActor, &ServerSetFixingActor_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Electrowelding.ServerCheckFixingActor
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  CurrFixingActor                ( CPF_Parm )

bool ATGMechaWeap_Electrowelding::ServerCheckFixingActor ( class AActor* CurrFixingActor )
{
	static UFunction* pFnServerCheckFixingActor = NULL;

	if ( ! pFnServerCheckFixingActor )
		pFnServerCheckFixingActor = (UFunction*) UObject::GObjObjects()->Data[ 214606 ];

	ATGMechaWeap_Electrowelding_execServerCheckFixingActor_Parms ServerCheckFixingActor_Parms;
	ServerCheckFixingActor_Parms.CurrFixingActor = CurrFixingActor;

	this->ProcessEvent ( pFnServerCheckFixingActor, &ServerCheckFixingActor_Parms, NULL );

	return ServerCheckFixingActor_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_Electrowelding.ConsumeAmmo
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGMechaWeap_Electrowelding::ConsumeAmmo ( unsigned char FireModeNum )
{
	static UFunction* pFnConsumeAmmo = NULL;

	if ( ! pFnConsumeAmmo )
		pFnConsumeAmmo = (UFunction*) UObject::GObjObjects()->Data[ 214604 ];

	ATGMechaWeap_Electrowelding_execConsumeAmmo_Parms ConsumeAmmo_Parms;
	ConsumeAmmo_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnConsumeAmmo, &ConsumeAmmo_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Electrowelding.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaWeap_Electrowelding::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 214567 ];

	ATGMechaWeap_Electrowelding_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.FlameThrowerServerTakeDamage
// [0x002200C2] 
// Parameters infos:
// class AActor*                  DamageActor                    ( CPF_Parm )
// int                            HitDamage                      ( CPF_Parm )
// int                            HitEnergyDamage                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  MyDamageType                   ( CPF_Parm )

void ATGMechaWeap_FlameThrower::FlameThrowerServerTakeDamage ( class AActor* DamageActor, int HitDamage, int HitEnergyDamage, struct FVector HitLocation, struct FVector Momentum, class UClass* MyDamageType )
{
	static UFunction* pFnFlameThrowerServerTakeDamage = NULL;

	if ( ! pFnFlameThrowerServerTakeDamage )
		pFnFlameThrowerServerTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 214914 ];

	ATGMechaWeap_FlameThrower_execFlameThrowerServerTakeDamage_Parms FlameThrowerServerTakeDamage_Parms;
	FlameThrowerServerTakeDamage_Parms.DamageActor = DamageActor;
	FlameThrowerServerTakeDamage_Parms.HitDamage = HitDamage;
	FlameThrowerServerTakeDamage_Parms.HitEnergyDamage = HitEnergyDamage;
	memcpy ( &FlameThrowerServerTakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &FlameThrowerServerTakeDamage_Parms.Momentum, &Momentum, 0xC );
	FlameThrowerServerTakeDamage_Parms.MyDamageType = MyDamageType;

	this->ProcessEvent ( pFnFlameThrowerServerTakeDamage, &FlameThrowerServerTakeDamage_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.DrawWeaponCrosshair
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGMechaWeap_FlameThrower::DrawWeaponCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshair = NULL;

	if ( ! pFnDrawWeaponCrosshair )
		pFnDrawWeaponCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 214912 ];

	ATGMechaWeap_FlameThrower_execDrawWeaponCrosshair_Parms DrawWeaponCrosshair_Parms;
	DrawWeaponCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshair, &DrawWeaponCrosshair_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.TurnOffFireSprayInFirstPersonSpectate
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_FlameThrower::TurnOffFireSprayInFirstPersonSpectate ( )
{
	static UFunction* pFnTurnOffFireSprayInFirstPersonSpectate = NULL;

	if ( ! pFnTurnOffFireSprayInFirstPersonSpectate )
		pFnTurnOffFireSprayInFirstPersonSpectate = (UFunction*) UObject::GObjObjects()->Data[ 214911 ];

	ATGMechaWeap_FlameThrower_execTurnOffFireSprayInFirstPersonSpectate_Parms TurnOffFireSprayInFirstPersonSpectate_Parms;

	this->ProcessEvent ( pFnTurnOffFireSprayInFirstPersonSpectate, &TurnOffFireSprayInFirstPersonSpectate_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.TurnOnFireSprayInFirstPersonSpectate
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_FlameThrower::TurnOnFireSprayInFirstPersonSpectate ( )
{
	static UFunction* pFnTurnOnFireSprayInFirstPersonSpectate = NULL;

	if ( ! pFnTurnOnFireSprayInFirstPersonSpectate )
		pFnTurnOnFireSprayInFirstPersonSpectate = (UFunction*) UObject::GObjObjects()->Data[ 214910 ];

	ATGMechaWeap_FlameThrower_execTurnOnFireSprayInFirstPersonSpectate_Parms TurnOnFireSprayInFirstPersonSpectate_Parms;

	this->ProcessEvent ( pFnTurnOnFireSprayInFirstPersonSpectate, &TurnOnFireSprayInFirstPersonSpectate_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.AttachPliotLight
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_FlameThrower::AttachPliotLight ( )
{
	static UFunction* pFnAttachPliotLight = NULL;

	if ( ! pFnAttachPliotLight )
		pFnAttachPliotLight = (UFunction*) UObject::GObjObjects()->Data[ 214909 ];

	ATGMechaWeap_FlameThrower_execAttachPliotLight_Parms AttachPliotLight_Parms;

	this->ProcessEvent ( pFnAttachPliotLight, &AttachPliotLight_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.PlayFireEffects
// [0x00024102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void ATGMechaWeap_FlameThrower::PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation )
{
	static UFunction* pFnPlayFireEffects = NULL;

	if ( ! pFnPlayFireEffects )
		pFnPlayFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 214906 ];

	ATGMechaWeap_FlameThrower_execPlayFireEffects_Parms PlayFireEffects_Parms;
	PlayFireEffects_Parms.FireModeNum = FireModeNum;
	memcpy ( &PlayFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayFireEffects, &PlayFireEffects_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.EndOfBurstDelay
// [0x00020100] 
// Parameters infos:

void ATGMechaWeap_FlameThrower::EndOfBurstDelay ( )
{
	static UFunction* pFnEndOfBurstDelay = NULL;

	if ( ! pFnEndOfBurstDelay )
		pFnEndOfBurstDelay = (UFunction*) UObject::GObjObjects()->Data[ 214905 ];

	ATGMechaWeap_FlameThrower_execEndOfBurstDelay_Parms EndOfBurstDelay_Parms;

	this->ProcessEvent ( pFnEndOfBurstDelay, &EndOfBurstDelay_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.CanDoSpecialMeleeAttack
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaWeap_FlameThrower::CanDoSpecialMeleeAttack ( )
{
	static UFunction* pFnCanDoSpecialMeleeAttack = NULL;

	if ( ! pFnCanDoSpecialMeleeAttack )
		pFnCanDoSpecialMeleeAttack = (UFunction*) UObject::GObjObjects()->Data[ 214903 ];

	ATGMechaWeap_FlameThrower_execCanDoSpecialMeleeAttack_Parms CanDoSpecialMeleeAttack_Parms;

	this->ProcessEvent ( pFnCanDoSpecialMeleeAttack, &CanDoSpecialMeleeAttack_Parms, NULL );

	return CanDoSpecialMeleeAttack_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_FlameThrower.GetWeaponDistanceForEnemyTrace
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGMechaWeap_FlameThrower::GetWeaponDistanceForEnemyTrace ( )
{
	static UFunction* pFnGetWeaponDistanceForEnemyTrace = NULL;

	if ( ! pFnGetWeaponDistanceForEnemyTrace )
		pFnGetWeaponDistanceForEnemyTrace = (UFunction*) UObject::GObjObjects()->Data[ 214900 ];

	ATGMechaWeap_FlameThrower_execGetWeaponDistanceForEnemyTrace_Parms GetWeaponDistanceForEnemyTrace_Parms;

	this->ProcessEvent ( pFnGetWeaponDistanceForEnemyTrace, &GetWeaponDistanceForEnemyTrace_Parms, NULL );

	return GetWeaponDistanceForEnemyTrace_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_FlameThrower.IsActiveReloadActive
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATGPawn*                 TPawn                          ( CPF_Parm )

bool ATGMechaWeap_FlameThrower::IsActiveReloadActive ( class ATGPawn* TPawn )
{
	static UFunction* pFnIsActiveReloadActive = NULL;

	if ( ! pFnIsActiveReloadActive )
		pFnIsActiveReloadActive = (UFunction*) UObject::GObjObjects()->Data[ 214897 ];

	ATGMechaWeap_FlameThrower_execIsActiveReloadActive_Parms IsActiveReloadActive_Parms;
	IsActiveReloadActive_Parms.TPawn = TPawn;

	this->ProcessEvent ( pFnIsActiveReloadActive, &IsActiveReloadActive_Parms, NULL );

	return IsActiveReloadActive_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_FlameThrower.GetCrossHairScale
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGMechaWeap_FlameThrower::GetCrossHairScale ( )
{
	static UFunction* pFnGetCrossHairScale = NULL;

	if ( ! pFnGetCrossHairScale )
		pFnGetCrossHairScale = (UFunction*) UObject::GObjObjects()->Data[ 214891 ];

	ATGMechaWeap_FlameThrower_execGetCrossHairScale_Parms GetCrossHairScale_Parms;

	this->ProcessEvent ( pFnGetCrossHairScale, &GetCrossHairScale_Parms, NULL );

	return GetCrossHairScale_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_FlameThrower.GetRotationControlScale
// [0x00420102] 
// Parameters infos:
// float                          TurnScale                      ( CPF_Parm | CPF_OutParm )
// float                          LookUpScale                    ( CPF_Parm | CPF_OutParm )

void ATGMechaWeap_FlameThrower::GetRotationControlScale ( float* TurnScale, float* LookUpScale )
{
	static UFunction* pFnGetRotationControlScale = NULL;

	if ( ! pFnGetRotationControlScale )
		pFnGetRotationControlScale = (UFunction*) UObject::GObjObjects()->Data[ 214888 ];

	ATGMechaWeap_FlameThrower_execGetRotationControlScale_Parms GetRotationControlScale_Parms;

	this->ProcessEvent ( pFnGetRotationControlScale, &GetRotationControlScale_Parms, NULL );

	if ( TurnScale )
		*TurnScale = GetRotationControlScale_Parms.TurnScale;

	if ( LookUpScale )
		*LookUpScale = GetRotationControlScale_Parms.LookUpScale;
};

// Function MechaGame.TGMechaWeap_FlameThrower.GetHumanAimRotationAdjustment
// [0x00820102] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FRotator ATGMechaWeap_FlameThrower::GetHumanAimRotationAdjustment ( )
{
	static UFunction* pFnGetHumanAimRotationAdjustment = NULL;

	if ( ! pFnGetHumanAimRotationAdjustment )
		pFnGetHumanAimRotationAdjustment = (UFunction*) UObject::GObjObjects()->Data[ 214884 ];

	ATGMechaWeap_FlameThrower_execGetHumanAimRotationAdjustment_Parms GetHumanAimRotationAdjustment_Parms;

	this->ProcessEvent ( pFnGetHumanAimRotationAdjustment, &GetHumanAimRotationAdjustment_Parms, NULL );

	return GetHumanAimRotationAdjustment_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_FlameThrower.Destroyed
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_FlameThrower::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 214877 ];

	ATGMechaWeap_FlameThrower_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.CustomFire
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_FlameThrower::CustomFire ( )
{
	static UFunction* pFnCustomFire = NULL;

	if ( ! pFnCustomFire )
		pFnCustomFire = (UFunction*) UObject::GObjObjects()->Data[ 214876 ];

	ATGMechaWeap_FlameThrower_execCustomFire_Parms CustomFire_Parms;

	this->ProcessEvent ( pFnCustomFire, &CustomFire_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.GetBurstsToFire
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ATGMechaWeap_FlameThrower::GetBurstsToFire ( )
{
	static UFunction* pFnGetBurstsToFire = NULL;

	if ( ! pFnGetBurstsToFire )
		pFnGetBurstsToFire = (UFunction*) UObject::GObjObjects()->Data[ 214874 ];

	ATGMechaWeap_FlameThrower_execGetBurstsToFire_Parms GetBurstsToFire_Parms;

	this->ProcessEvent ( pFnGetBurstsToFire, &GetBurstsToFire_Parms, NULL );

	return GetBurstsToFire_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_FlameThrower.GetBurstFireCount
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ATGMechaWeap_FlameThrower::GetBurstFireCount ( )
{
	static UFunction* pFnGetBurstFireCount = NULL;

	if ( ! pFnGetBurstFireCount )
		pFnGetBurstFireCount = (UFunction*) UObject::GObjObjects()->Data[ 214872 ];

	ATGMechaWeap_FlameThrower_execGetBurstFireCount_Parms GetBurstFireCount_Parms;

	this->ProcessEvent ( pFnGetBurstFireCount, &GetBurstFireCount_Parms, NULL );

	return GetBurstFireCount_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_FlameThrower.FireAmmunition
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_FlameThrower::FireAmmunition ( )
{
	static UFunction* pFnFireAmmunition = NULL;

	if ( ! pFnFireAmmunition )
		pFnFireAmmunition = (UFunction*) UObject::GObjObjects()->Data[ 214870 ];

	ATGMechaWeap_FlameThrower_execFireAmmunition_Parms FireAmmunition_Parms;

	this->ProcessEvent ( pFnFireAmmunition, &FireAmmunition_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.StartFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGMechaWeap_FlameThrower::StartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 214868 ];

	ATGMechaWeap_FlameThrower_execStartFire_Parms StartFire_Parms;
	StartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.DoDelayedEndFire
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_FlameThrower::DoDelayedEndFire ( )
{
	static UFunction* pFnDoDelayedEndFire = NULL;

	if ( ! pFnDoDelayedEndFire )
		pFnDoDelayedEndFire = (UFunction*) UObject::GObjObjects()->Data[ 214856 ];

	ATGMechaWeap_FlameThrower_execDoDelayedEndFire_Parms DoDelayedEndFire_Parms;

	this->ProcessEvent ( pFnDoDelayedEndFire, &DoDelayedEndFire_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.GetWeaponRating
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGMechaWeap_FlameThrower::GetWeaponRating ( )
{
	static UFunction* pFnGetWeaponRating = NULL;

	if ( ! pFnGetWeaponRating )
		pFnGetWeaponRating = (UFunction*) UObject::GObjObjects()->Data[ 214854 ];

	ATGMechaWeap_FlameThrower_execGetWeaponRating_Parms GetWeaponRating_Parms;

	this->ProcessEvent ( pFnGetWeaponRating, &GetWeaponRating_Parms, NULL );

	return GetWeaponRating_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_FlameThrower.WeaponStoppedFiring
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// unsigned char                  FiringMode                     ( CPF_Parm )

void ATGMechaWeap_FlameThrower::eventWeaponStoppedFiring ( unsigned char FiringMode )
{
	static UFunction* pFnWeaponStoppedFiring = NULL;

	if ( ! pFnWeaponStoppedFiring )
		pFnWeaponStoppedFiring = (UFunction*) UObject::GObjObjects()->Data[ 214852 ];

	ATGMechaWeap_FlameThrower_eventWeaponStoppedFiring_Parms WeaponStoppedFiring_Parms;
	WeaponStoppedFiring_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnWeaponStoppedFiring, &WeaponStoppedFiring_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.TurnOffFireSpray
// [0x00080102] 
// Parameters infos:

void ATGMechaWeap_FlameThrower::TurnOffFireSpray ( )
{
	static UFunction* pFnTurnOffFireSpray = NULL;

	if ( ! pFnTurnOffFireSpray )
		pFnTurnOffFireSpray = (UFunction*) UObject::GObjObjects()->Data[ 214851 ];

	ATGMechaWeap_FlameThrower_execTurnOffFireSpray_Parms TurnOffFireSpray_Parms;

	this->ProcessEvent ( pFnTurnOffFireSpray, &TurnOffFireSpray_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.TurnOnFireSpray
// [0x00080102] 
// Parameters infos:

void ATGMechaWeap_FlameThrower::TurnOnFireSpray ( )
{
	static UFunction* pFnTurnOnFireSpray = NULL;

	if ( ! pFnTurnOnFireSpray )
		pFnTurnOnFireSpray = (UFunction*) UObject::GObjObjects()->Data[ 214850 ];

	ATGMechaWeap_FlameThrower_execTurnOnFireSpray_Parms TurnOnFireSpray_Parms;

	this->ProcessEvent ( pFnTurnOnFireSpray, &TurnOnFireSpray_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.CheckFlamePool
// [0x00820102] 
// Parameters infos:

void ATGMechaWeap_FlameThrower::CheckFlamePool ( )
{
	static UFunction* pFnCheckFlamePool = NULL;

	if ( ! pFnCheckFlamePool )
		pFnCheckFlamePool = (UFunction*) UObject::GObjObjects()->Data[ 214847 ];

	ATGMechaWeap_FlameThrower_execCheckFlamePool_Parms CheckFlamePool_Parms;

	this->ProcessEvent ( pFnCheckFlamePool, &CheckFlamePool_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.GetActualMuzzleLocationAndRotation
// [0x00420102] 
// Parameters infos:
// struct FVector                 Out_Loc                        ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_Rot                        ( CPF_Parm | CPF_OutParm )

void ATGMechaWeap_FlameThrower::GetActualMuzzleLocationAndRotation ( struct FVector* Out_Loc, struct FRotator* out_Rot )
{
	static UFunction* pFnGetActualMuzzleLocationAndRotation = NULL;

	if ( ! pFnGetActualMuzzleLocationAndRotation )
		pFnGetActualMuzzleLocationAndRotation = (UFunction*) UObject::GObjObjects()->Data[ 214844 ];

	ATGMechaWeap_FlameThrower_execGetActualMuzzleLocationAndRotation_Parms GetActualMuzzleLocationAndRotation_Parms;

	this->ProcessEvent ( pFnGetActualMuzzleLocationAndRotation, &GetActualMuzzleLocationAndRotation_Parms, NULL );

	if ( Out_Loc )
		memcpy ( Out_Loc, &GetActualMuzzleLocationAndRotation_Parms.Out_Loc, 0xC );

	if ( out_Rot )
		memcpy ( out_Rot, &GetActualMuzzleLocationAndRotation_Parms.out_Rot, 0xC );
};

// Function MechaGame.TGMechaWeap_FlameThrower.GetFlameSprayFromPool
// [0x00080102] 
// Parameters infos:
// class ATGMechaWeap_FlameThrowerSprayBase* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ATGMechaWeap_FlameThrowerSprayBase* ATGMechaWeap_FlameThrower::GetFlameSprayFromPool ( )
{
	static UFunction* pFnGetFlameSprayFromPool = NULL;

	if ( ! pFnGetFlameSprayFromPool )
		pFnGetFlameSprayFromPool = (UFunction*) UObject::GObjObjects()->Data[ 214841 ];

	ATGMechaWeap_FlameThrower_execGetFlameSprayFromPool_Parms GetFlameSprayFromPool_Parms;

	this->ProcessEvent ( pFnGetFlameSprayFromPool, &GetFlameSprayFromPool_Parms, NULL );

	return GetFlameSprayFromPool_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_FlameThrower.TurnOffPilot
// [0x00080102] 
// Parameters infos:

void ATGMechaWeap_FlameThrower::TurnOffPilot ( )
{
	static UFunction* pFnTurnOffPilot = NULL;

	if ( ! pFnTurnOffPilot )
		pFnTurnOffPilot = (UFunction*) UObject::GObjObjects()->Data[ 214840 ];

	ATGMechaWeap_FlameThrower_execTurnOffPilot_Parms TurnOffPilot_Parms;

	this->ProcessEvent ( pFnTurnOffPilot, &TurnOffPilot_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.TurnOnPilot
// [0x00080102] 
// Parameters infos:

void ATGMechaWeap_FlameThrower::TurnOnPilot ( )
{
	static UFunction* pFnTurnOnPilot = NULL;

	if ( ! pFnTurnOnPilot )
		pFnTurnOnPilot = (UFunction*) UObject::GObjObjects()->Data[ 214839 ];

	ATGMechaWeap_FlameThrower_execTurnOnPilot_Parms TurnOnPilot_Parms;

	this->ProcessEvent ( pFnTurnOnPilot, &TurnOnPilot_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.SetWeaponAttachment
// [0x00020102] 
// Parameters infos:
// class ATGMechaWeaponAttachment* WeapAttach                     ( CPF_Parm )
// struct FName                   SocketName                     ( CPF_Parm )

void ATGMechaWeap_FlameThrower::SetWeaponAttachment ( class ATGMechaWeaponAttachment* WeapAttach, struct FName SocketName )
{
	static UFunction* pFnSetWeaponAttachment = NULL;

	if ( ! pFnSetWeaponAttachment )
		pFnSetWeaponAttachment = (UFunction*) UObject::GObjObjects()->Data[ 214836 ];

	ATGMechaWeap_FlameThrower_execSetWeaponAttachment_Parms SetWeaponAttachment_Parms;
	SetWeaponAttachment_Parms.WeapAttach = WeapAttach;
	memcpy ( &SetWeaponAttachment_Parms.SocketName, &SocketName, 0x8 );

	this->ProcessEvent ( pFnSetWeaponAttachment, &SetWeaponAttachment_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaWeap_FlameThrower::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 214835 ];

	ATGMechaWeap_FlameThrower_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_FlameThrower.WeaponFired
// [0x00024902] ( FUNC_Event )
// Parameters infos:
// unsigned char                  FiringMode                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void ATGMechaWeap_FlameThrower::eventWeaponFired ( unsigned char FiringMode, struct FVector HitLocation )
{
	static UFunction* pFnWeaponFired = NULL;

	if ( ! pFnWeaponFired )
		pFnWeaponFired = (UFunction*) UObject::GObjObjects()->Data[ 214832 ];

	ATGMechaWeap_FlameThrower_eventWeaponFired_Parms WeaponFired_Parms;
	WeaponFired_Parms.FiringMode = FiringMode;
	memcpy ( &WeaponFired_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnWeaponFired, &WeaponFired_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_RocketLauncher.SetProjectileParms
// [0x00420102] 
// Parameters infos:
// class ATGMechaProjectile*      NewProj                        ( CPF_Parm | CPF_OutParm )

void ATGMechaWeap_RocketLauncher::SetProjectileParms ( class ATGMechaProjectile** NewProj )
{
	static UFunction* pFnSetProjectileParms = NULL;

	if ( ! pFnSetProjectileParms )
		pFnSetProjectileParms = (UFunction*) UObject::GObjObjects()->Data[ 215487 ];

	ATGMechaWeap_RocketLauncher_execSetProjectileParms_Parms SetProjectileParms_Parms;

	this->ProcessEvent ( pFnSetProjectileParms, &SetProjectileParms_Parms, NULL );

	if ( NewProj )
		*NewProj = SetProjectileParms_Parms.NewProj;
};

// Function MechaGame.TGMechaWeap_FrozenGrenade.SetProjectileParms
// [0x00420102] 
// Parameters infos:
// class ATGMechaProjectile*      NewProj                        ( CPF_Parm | CPF_OutParm )

void ATGMechaWeap_FrozenGrenade::SetProjectileParms ( class ATGMechaProjectile** NewProj )
{
	static UFunction* pFnSetProjectileParms = NULL;

	if ( ! pFnSetProjectileParms )
		pFnSetProjectileParms = (UFunction*) UObject::GObjObjects()->Data[ 215211 ];

	ATGMechaWeap_FrozenGrenade_execSetProjectileParms_Parms SetProjectileParms_Parms;

	this->ProcessEvent ( pFnSetProjectileParms, &SetProjectileParms_Parms, NULL );

	if ( NewProj )
		*NewProj = SetProjectileParms_Parms.NewProj;
};

// Function MechaGame.TGMechaWeap_Howitzer.SetProjectileParms
// [0x00420102] 
// Parameters infos:
// class ATGMechaProjectile*      NewProj                        ( CPF_Parm | CPF_OutParm )

void ATGMechaWeap_Howitzer::SetProjectileParms ( class ATGMechaProjectile** NewProj )
{
	static UFunction* pFnSetProjectileParms = NULL;

	if ( ! pFnSetProjectileParms )
		pFnSetProjectileParms = (UFunction*) UObject::GObjObjects()->Data[ 215242 ];

	ATGMechaWeap_Howitzer_execSetProjectileParms_Parms SetProjectileParms_Parms;

	this->ProcessEvent ( pFnSetProjectileParms, &SetProjectileParms_Parms, NULL );

	if ( NewProj )
		*NewProj = SetProjectileParms_Parms.NewProj;
};

// Function MechaGame.TGMechaWeap_Howitzer.GetSimFireStartLoc
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ATGMechaWeap_Howitzer::GetSimFireStartLoc ( )
{
	static UFunction* pFnGetSimFireStartLoc = NULL;

	if ( ! pFnGetSimFireStartLoc )
		pFnGetSimFireStartLoc = (UFunction*) UObject::GObjObjects()->Data[ 215238 ];

	ATGMechaWeap_Howitzer_execGetSimFireStartLoc_Parms GetSimFireStartLoc_Parms;

	this->ProcessEvent ( pFnGetSimFireStartLoc, &GetSimFireStartLoc_Parms, NULL );

	return GetSimFireStartLoc_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_Howitzer.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaWeap_Howitzer::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 215236 ];

	ATGMechaWeap_Howitzer_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Howitzer.GetProjectileAim
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartFireLoc                   ( CPF_Parm )

struct FVector ATGMechaWeap_Howitzer::GetProjectileAim ( struct FVector StartFireLoc )
{
	static UFunction* pFnGetProjectileAim = NULL;

	if ( ! pFnGetProjectileAim )
		pFnGetProjectileAim = (UFunction*) UObject::GObjObjects()->Data[ 215229 ];

	ATGMechaWeap_Howitzer_execGetProjectileAim_Parms GetProjectileAim_Parms;
	memcpy ( &GetProjectileAim_Parms.StartFireLoc, &StartFireLoc, 0xC );

	this->ProcessEvent ( pFnGetProjectileAim, &GetProjectileAim_Parms, NULL );

	return GetProjectileAim_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_Howitzer.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaWeap_Howitzer::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 215228 ];

	ATGMechaWeap_Howitzer_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_LaserBlade.HasAnyAmmo
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaWeap_LaserBlade::HasAnyAmmo ( )
{
	static UFunction* pFnHasAnyAmmo = NULL;

	if ( ! pFnHasAnyAmmo )
		pFnHasAnyAmmo = (UFunction*) UObject::GObjObjects()->Data[ 215336 ];

	ATGMechaWeap_LaserBlade_execHasAnyAmmo_Parms HasAnyAmmo_Parms;

	this->ProcessEvent ( pFnHasAnyAmmo, &HasAnyAmmo_Parms, NULL );

	return HasAnyAmmo_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_LaserBlade.HasAmmo
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  FireModeNum                    ( CPF_Parm )
// int                            Amount                         ( CPF_OptionalParm | CPF_Parm )

bool ATGMechaWeap_LaserBlade::HasAmmo ( unsigned char FireModeNum, int Amount )
{
	static UFunction* pFnHasAmmo = NULL;

	if ( ! pFnHasAmmo )
		pFnHasAmmo = (UFunction*) UObject::GObjObjects()->Data[ 215332 ];

	ATGMechaWeap_LaserBlade_execHasAmmo_Parms HasAmmo_Parms;
	HasAmmo_Parms.FireModeNum = FireModeNum;
	HasAmmo_Parms.Amount = Amount;

	this->ProcessEvent ( pFnHasAmmo, &HasAmmo_Parms, NULL );

	return HasAmmo_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_LaserBlade.ConsumeAmmo
// [0x00020100] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGMechaWeap_LaserBlade::ConsumeAmmo ( unsigned char FireModeNum )
{
	static UFunction* pFnConsumeAmmo = NULL;

	if ( ! pFnConsumeAmmo )
		pFnConsumeAmmo = (UFunction*) UObject::GObjObjects()->Data[ 215330 ];

	ATGMechaWeap_LaserBlade_execConsumeAmmo_Parms ConsumeAmmo_Parms;
	ConsumeAmmo_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnConsumeAmmo, &ConsumeAmmo_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.PlayMeleeHitCameraShake
// [0x00020102] 
// Parameters infos:

void ATGMechaMeleeWeapon::PlayMeleeHitCameraShake ( )
{
	static UFunction* pFnPlayMeleeHitCameraShake = NULL;

	if ( ! pFnPlayMeleeHitCameraShake )
		pFnPlayMeleeHitCameraShake = (UFunction*) UObject::GObjObjects()->Data[ 213377 ];

	ATGMechaMeleeWeapon_execPlayMeleeHitCameraShake_Parms PlayMeleeHitCameraShake_Parms;

	this->ProcessEvent ( pFnPlayMeleeHitCameraShake, &PlayMeleeHitCameraShake_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.CheckFireStartLocation
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 ServerStartLocation            ( CPF_Parm )
// struct FVector                 FireStartLocation              ( CPF_Parm )

bool ATGMechaMeleeWeapon::CheckFireStartLocation ( struct FVector ServerStartLocation, struct FVector FireStartLocation )
{
	static UFunction* pFnCheckFireStartLocation = NULL;

	if ( ! pFnCheckFireStartLocation )
		pFnCheckFireStartLocation = (UFunction*) UObject::GObjObjects()->Data[ 213372 ];

	ATGMechaMeleeWeapon_execCheckFireStartLocation_Parms CheckFireStartLocation_Parms;
	memcpy ( &CheckFireStartLocation_Parms.ServerStartLocation, &ServerStartLocation, 0xC );
	memcpy ( &CheckFireStartLocation_Parms.FireStartLocation, &FireStartLocation, 0xC );

	this->ProcessEvent ( pFnCheckFireStartLocation, &CheckFireStartLocation_Parms, NULL );

	return CheckFireStartLocation_Parms.ReturnValue;
};

// Function MechaGame.TGMechaMeleeWeapon.OnPlayMeleeRecoverSound
// [0x00020102] 
// Parameters infos:

void ATGMechaMeleeWeapon::OnPlayMeleeRecoverSound ( )
{
	static UFunction* pFnOnPlayMeleeRecoverSound = NULL;

	if ( ! pFnOnPlayMeleeRecoverSound )
		pFnOnPlayMeleeRecoverSound = (UFunction*) UObject::GObjObjects()->Data[ 213371 ];

	ATGMechaMeleeWeapon_execOnPlayMeleeRecoverSound_Parms OnPlayMeleeRecoverSound_Parms;

	this->ProcessEvent ( pFnOnPlayMeleeRecoverSound, &OnPlayMeleeRecoverSound_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.PlayRecoverSwingAnim
// [0x00020102] 
// Parameters infos:

void ATGMechaMeleeWeapon::PlayRecoverSwingAnim ( )
{
	static UFunction* pFnPlayRecoverSwingAnim = NULL;

	if ( ! pFnPlayRecoverSwingAnim )
		pFnPlayRecoverSwingAnim = (UFunction*) UObject::GObjObjects()->Data[ 213367 ];

	ATGMechaMeleeWeapon_execPlayRecoverSwingAnim_Parms PlayRecoverSwingAnim_Parms;

	this->ProcessEvent ( pFnPlayRecoverSwingAnim, &PlayRecoverSwingAnim_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.PlayHeavySwingAnim
// [0x00020102] 
// Parameters infos:

void ATGMechaMeleeWeapon::PlayHeavySwingAnim ( )
{
	static UFunction* pFnPlayHeavySwingAnim = NULL;

	if ( ! pFnPlayHeavySwingAnim )
		pFnPlayHeavySwingAnim = (UFunction*) UObject::GObjObjects()->Data[ 213363 ];

	ATGMechaMeleeWeapon_execPlayHeavySwingAnim_Parms PlayHeavySwingAnim_Parms;

	this->ProcessEvent ( pFnPlayHeavySwingAnim, &PlayHeavySwingAnim_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.PlaySecondSwingAnim
// [0x00020102] 
// Parameters infos:

void ATGMechaMeleeWeapon::PlaySecondSwingAnim ( )
{
	static UFunction* pFnPlaySecondSwingAnim = NULL;

	if ( ! pFnPlaySecondSwingAnim )
		pFnPlaySecondSwingAnim = (UFunction*) UObject::GObjObjects()->Data[ 213359 ];

	ATGMechaMeleeWeapon_execPlaySecondSwingAnim_Parms PlaySecondSwingAnim_Parms;

	this->ProcessEvent ( pFnPlaySecondSwingAnim, &PlaySecondSwingAnim_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.PlayFirstSwingAnim
// [0x00020102] 
// Parameters infos:

void ATGMechaMeleeWeapon::PlayFirstSwingAnim ( )
{
	static UFunction* pFnPlayFirstSwingAnim = NULL;

	if ( ! pFnPlayFirstSwingAnim )
		pFnPlayFirstSwingAnim = (UFunction*) UObject::GObjObjects()->Data[ 213355 ];

	ATGMechaMeleeWeapon_execPlayFirstSwingAnim_Parms PlayFirstSwingAnim_Parms;

	this->ProcessEvent ( pFnPlayFirstSwingAnim, &PlayFirstSwingAnim_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.PlayMeleeFireAnim
// [0x00020102] 
// Parameters infos:

void ATGMechaMeleeWeapon::PlayMeleeFireAnim ( )
{
	static UFunction* pFnPlayMeleeFireAnim = NULL;

	if ( ! pFnPlayMeleeFireAnim )
		pFnPlayMeleeFireAnim = (UFunction*) UObject::GObjObjects()->Data[ 213353 ];

	ATGMechaMeleeWeapon_execPlayMeleeFireAnim_Parms PlayMeleeFireAnim_Parms;

	this->ProcessEvent ( pFnPlayMeleeFireAnim, &PlayMeleeFireAnim_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.CalcWeaponFire
// [0x00C24102] 
// Parameters infos:
// struct FImpactInfo             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartTrace                     ( CPF_Parm )
// struct FVector                 EndTrace                       ( CPF_Parm )
// struct FVector                 Extent                         ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FImpactInfo >   ImpactList                     ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

struct FImpactInfo ATGMechaMeleeWeapon::CalcWeaponFire ( struct FVector StartTrace, struct FVector EndTrace, struct FVector Extent, TArray< struct FImpactInfo >* ImpactList )
{
	static UFunction* pFnCalcWeaponFire = NULL;

	if ( ! pFnCalcWeaponFire )
		pFnCalcWeaponFire = (UFunction*) UObject::GObjObjects()->Data[ 213340 ];

	ATGMechaMeleeWeapon_execCalcWeaponFire_Parms CalcWeaponFire_Parms;
	memcpy ( &CalcWeaponFire_Parms.StartTrace, &StartTrace, 0xC );
	memcpy ( &CalcWeaponFire_Parms.EndTrace, &EndTrace, 0xC );
	memcpy ( &CalcWeaponFire_Parms.Extent, &Extent, 0xC );

	this->ProcessEvent ( pFnCalcWeaponFire, &CalcWeaponFire_Parms, NULL );

	if ( ImpactList )
		memcpy ( ImpactList, &CalcWeaponFire_Parms.ImpactList, 0xC );

	return CalcWeaponFire_Parms.ReturnValue;
};

// Function MechaGame.TGMechaMeleeWeapon.KnifeServerTakeDamage
// [0x00824002] 
// Parameters infos:
// class APawn*                   DamagePawn                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitDir                         ( CPF_Parm )
// struct FVector                 StartTraceLoc                  ( CPF_Parm )
// struct FVector                 DamagePawnLoc                  ( CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_Parm )
// struct FName                   HitBoneName                    ( CPF_Parm )
// float                          ClientTime                     ( CPF_Parm )
// int                            NumHits                        ( CPF_OptionalParm | CPF_Parm )
// float                          ClientAttackSectorAngle        ( CPF_OptionalParm | CPF_Parm )
// float                          SandCDis                       ( CPF_OptionalParm | CPF_Parm )

void ATGMechaMeleeWeapon::KnifeServerTakeDamage ( class APawn* DamagePawn, struct FVector HitLocation, struct FVector HitDir, struct FVector StartTraceLoc, struct FVector DamagePawnLoc, unsigned char HitGroup, struct FName HitBoneName, float ClientTime, int NumHits, float ClientAttackSectorAngle, float SandCDis )
{
	static UFunction* pFnKnifeServerTakeDamage = NULL;

	if ( ! pFnKnifeServerTakeDamage )
		pFnKnifeServerTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 213326 ];

	ATGMechaMeleeWeapon_execKnifeServerTakeDamage_Parms KnifeServerTakeDamage_Parms;
	KnifeServerTakeDamage_Parms.DamagePawn = DamagePawn;
	memcpy ( &KnifeServerTakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &KnifeServerTakeDamage_Parms.HitDir, &HitDir, 0xC );
	memcpy ( &KnifeServerTakeDamage_Parms.StartTraceLoc, &StartTraceLoc, 0xC );
	memcpy ( &KnifeServerTakeDamage_Parms.DamagePawnLoc, &DamagePawnLoc, 0xC );
	KnifeServerTakeDamage_Parms.HitGroup = HitGroup;
	memcpy ( &KnifeServerTakeDamage_Parms.HitBoneName, &HitBoneName, 0x8 );
	KnifeServerTakeDamage_Parms.ClientTime = ClientTime;
	KnifeServerTakeDamage_Parms.NumHits = NumHits;
	KnifeServerTakeDamage_Parms.ClientAttackSectorAngle = ClientAttackSectorAngle;
	KnifeServerTakeDamage_Parms.SandCDis = SandCDis;

	this->ProcessEvent ( pFnKnifeServerTakeDamage, &KnifeServerTakeDamage_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.CheckTraceDir
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          ClientAttackSectorAngle        ( CPF_Parm )

bool ATGMechaMeleeWeapon::CheckTraceDir ( float ClientAttackSectorAngle )
{
	static UFunction* pFnCheckTraceDir = NULL;

	if ( ! pFnCheckTraceDir )
		pFnCheckTraceDir = (UFunction*) UObject::GObjObjects()->Data[ 213323 ];

	ATGMechaMeleeWeapon_execCheckTraceDir_Parms CheckTraceDir_Parms;
	CheckTraceDir_Parms.ClientAttackSectorAngle = ClientAttackSectorAngle;

	this->ProcessEvent ( pFnCheckTraceDir, &CheckTraceDir_Parms, NULL );

	return CheckTraceDir_Parms.ReturnValue;
};

// Function MechaGame.TGMechaMeleeWeapon.CheckHitGroup
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaMeleeWeapon::CheckHitGroup ( )
{
	static UFunction* pFnCheckHitGroup = NULL;

	if ( ! pFnCheckHitGroup )
		pFnCheckHitGroup = (UFunction*) UObject::GObjObjects()->Data[ 213321 ];

	ATGMechaMeleeWeapon_execCheckHitGroup_Parms CheckHitGroup_Parms;

	this->ProcessEvent ( pFnCheckHitGroup, &CheckHitGroup_Parms, NULL );

	return CheckHitGroup_Parms.ReturnValue;
};

// Function MechaGame.TGMechaMeleeWeapon.KnifeServerCheckFire
// [0x00824002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   DamagePawn                     ( CPF_Parm )
// struct FVectorNoCompress       TraceDir                       ( CPF_Parm )
// struct FVectorNoCompress       StartTraceLoc                  ( CPF_Parm )
// struct FVector                 DamagePawnLoc                  ( CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_Parm )
// struct FName                   HitBoneName                    ( CPF_Parm )
// float                          ClientTime                     ( CPF_Parm )
// float                          ClientAttackSectorAngle        ( CPF_Parm )
// float                          SandCDis                       ( CPF_OptionalParm | CPF_Parm )

bool ATGMechaMeleeWeapon::KnifeServerCheckFire ( class APawn* DamagePawn, struct FVectorNoCompress TraceDir, struct FVectorNoCompress StartTraceLoc, struct FVector DamagePawnLoc, unsigned char HitGroup, struct FName HitBoneName, float ClientTime, float ClientAttackSectorAngle, float SandCDis )
{
	static UFunction* pFnKnifeServerCheckFire = NULL;

	if ( ! pFnKnifeServerCheckFire )
		pFnKnifeServerCheckFire = (UFunction*) UObject::GObjObjects()->Data[ 213302 ];

	ATGMechaMeleeWeapon_execKnifeServerCheckFire_Parms KnifeServerCheckFire_Parms;
	KnifeServerCheckFire_Parms.DamagePawn = DamagePawn;
	memcpy ( &KnifeServerCheckFire_Parms.TraceDir, &TraceDir, 0xC );
	memcpy ( &KnifeServerCheckFire_Parms.StartTraceLoc, &StartTraceLoc, 0xC );
	memcpy ( &KnifeServerCheckFire_Parms.DamagePawnLoc, &DamagePawnLoc, 0xC );
	KnifeServerCheckFire_Parms.HitGroup = HitGroup;
	memcpy ( &KnifeServerCheckFire_Parms.HitBoneName, &HitBoneName, 0x8 );
	KnifeServerCheckFire_Parms.ClientTime = ClientTime;
	KnifeServerCheckFire_Parms.ClientAttackSectorAngle = ClientAttackSectorAngle;
	KnifeServerCheckFire_Parms.SandCDis = SandCDis;

	this->ProcessEvent ( pFnKnifeServerCheckFire, &KnifeServerCheckFire_Parms, NULL );

	return KnifeServerCheckFire_Parms.ReturnValue;
};

// Function MechaGame.TGMechaMeleeWeapon.ProcessInstantHitMeleeWeapon
// [0x00024102] 
// Parameters infos:
// unsigned char                  FiringMode                     ( CPF_Parm )
// struct FImpactInfo             Impact                         ( CPF_Parm )
// struct FVectorNoCompress       TraceDir                       ( CPF_OptionalParm | CPF_Parm )
// struct FVectorNoCompress       StartTraceLoc                  ( CPF_OptionalParm | CPF_Parm )
// float                          ClientTime                     ( CPF_OptionalParm | CPF_Parm )
// int                            NumHits                        ( CPF_OptionalParm | CPF_Parm )
// float                          ClientAttackSectorAngle        ( CPF_OptionalParm | CPF_Parm )
// struct FVectorNoCompress       HitPawnLoc                     ( CPF_OptionalParm | CPF_Parm )
// float                          SandCDis                       ( CPF_OptionalParm | CPF_Parm )

void ATGMechaMeleeWeapon::ProcessInstantHitMeleeWeapon ( unsigned char FiringMode, struct FImpactInfo Impact, struct FVectorNoCompress TraceDir, struct FVectorNoCompress StartTraceLoc, float ClientTime, int NumHits, float ClientAttackSectorAngle, struct FVectorNoCompress HitPawnLoc, float SandCDis )
{
	static UFunction* pFnProcessInstantHitMeleeWeapon = NULL;

	if ( ! pFnProcessInstantHitMeleeWeapon )
		pFnProcessInstantHitMeleeWeapon = (UFunction*) UObject::GObjObjects()->Data[ 213290 ];

	ATGMechaMeleeWeapon_execProcessInstantHitMeleeWeapon_Parms ProcessInstantHitMeleeWeapon_Parms;
	ProcessInstantHitMeleeWeapon_Parms.FiringMode = FiringMode;
	memcpy ( &ProcessInstantHitMeleeWeapon_Parms.Impact, &Impact, 0x54 );
	memcpy ( &ProcessInstantHitMeleeWeapon_Parms.TraceDir, &TraceDir, 0xC );
	memcpy ( &ProcessInstantHitMeleeWeapon_Parms.StartTraceLoc, &StartTraceLoc, 0xC );
	ProcessInstantHitMeleeWeapon_Parms.ClientTime = ClientTime;
	ProcessInstantHitMeleeWeapon_Parms.NumHits = NumHits;
	ProcessInstantHitMeleeWeapon_Parms.ClientAttackSectorAngle = ClientAttackSectorAngle;
	memcpy ( &ProcessInstantHitMeleeWeapon_Parms.HitPawnLoc, &HitPawnLoc, 0xC );
	ProcessInstantHitMeleeWeapon_Parms.SandCDis = SandCDis;

	this->ProcessEvent ( pFnProcessInstantHitMeleeWeapon, &ProcessInstantHitMeleeWeapon_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.ProcessInstantHit
// [0x00024102] 
// Parameters infos:
// unsigned char                  FiringMode                     ( CPF_Parm )
// struct FImpactInfo             Impact                         ( CPF_Parm )
// int                            NumHits                        ( CPF_OptionalParm | CPF_Parm )

void ATGMechaMeleeWeapon::ProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, int NumHits )
{
	static UFunction* pFnProcessInstantHit = NULL;

	if ( ! pFnProcessInstantHit )
		pFnProcessInstantHit = (UFunction*) UObject::GObjObjects()->Data[ 213286 ];

	ATGMechaMeleeWeapon_execProcessInstantHit_Parms ProcessInstantHit_Parms;
	ProcessInstantHit_Parms.FiringMode = FiringMode;
	memcpy ( &ProcessInstantHit_Parms.Impact, &Impact, 0x54 );
	ProcessInstantHit_Parms.NumHits = NumHits;

	this->ProcessEvent ( pFnProcessInstantHit, &ProcessInstantHit_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.MeleeWeaponGetAdjustedAim
// [0x00820102] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartFireLoc                   ( CPF_Parm )
// int                            SectorAngleOffset              ( CPF_Parm )

struct FRotator ATGMechaMeleeWeapon::MeleeWeaponGetAdjustedAim ( struct FVector StartFireLoc, int SectorAngleOffset )
{
	static UFunction* pFnMeleeWeaponGetAdjustedAim = NULL;

	if ( ! pFnMeleeWeaponGetAdjustedAim )
		pFnMeleeWeaponGetAdjustedAim = (UFunction*) UObject::GObjObjects()->Data[ 213281 ];

	ATGMechaMeleeWeapon_execMeleeWeaponGetAdjustedAim_Parms MeleeWeaponGetAdjustedAim_Parms;
	memcpy ( &MeleeWeaponGetAdjustedAim_Parms.StartFireLoc, &StartFireLoc, 0xC );
	MeleeWeaponGetAdjustedAim_Parms.SectorAngleOffset = SectorAngleOffset;

	this->ProcessEvent ( pFnMeleeWeaponGetAdjustedAim, &MeleeWeaponGetAdjustedAim_Parms, NULL );

	return MeleeWeaponGetAdjustedAim_Parms.ReturnValue;
};

// Function MechaGame.TGMechaMeleeWeapon.MeleeWeaponInstantFireEndTrace
// [0x00020102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartTrace                     ( CPF_Parm )
// int                            SectorAngleOffset              ( CPF_Parm )

struct FVector ATGMechaMeleeWeapon::MeleeWeaponInstantFireEndTrace ( struct FVector StartTrace, int SectorAngleOffset )
{
	static UFunction* pFnMeleeWeaponInstantFireEndTrace = NULL;

	if ( ! pFnMeleeWeaponInstantFireEndTrace )
		pFnMeleeWeaponInstantFireEndTrace = (UFunction*) UObject::GObjObjects()->Data[ 213277 ];

	ATGMechaMeleeWeapon_execMeleeWeaponInstantFireEndTrace_Parms MeleeWeaponInstantFireEndTrace_Parms;
	memcpy ( &MeleeWeaponInstantFireEndTrace_Parms.StartTrace, &StartTrace, 0xC );
	MeleeWeaponInstantFireEndTrace_Parms.SectorAngleOffset = SectorAngleOffset;

	this->ProcessEvent ( pFnMeleeWeaponInstantFireEndTrace, &MeleeWeaponInstantFireEndTrace_Parms, NULL );

	return MeleeWeaponInstantFireEndTrace_Parms.ReturnValue;
};

// Function MechaGame.TGMechaMeleeWeapon.ServerProcessMeleeWeaponInstantHit
// [0x002240C2] 
// Parameters infos:
// unsigned char                  FiringMode                     ( CPF_Parm )
// struct FImpactInfo             Impact                         ( CPF_Parm )
// float                          ClientTime                     ( CPF_Parm )
// struct FVectorNoCompress       TraceDir                       ( CPF_OptionalParm | CPF_Parm )
// int                            NumHits                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldServerCheck             ( CPF_OptionalParm | CPF_Parm )
// struct FVectorNoCompress       StartTraceLoc                  ( CPF_OptionalParm | CPF_Parm )
// float                          ClientAttackSectorAngle        ( CPF_OptionalParm | CPF_Parm )
// struct FVectorNoCompress       HitPawnLoc                     ( CPF_OptionalParm | CPF_Parm )
// float                          SandCDis                       ( CPF_OptionalParm | CPF_Parm )

void ATGMechaMeleeWeapon::ServerProcessMeleeWeaponInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, float ClientTime, struct FVectorNoCompress TraceDir, int NumHits, unsigned long bShouldServerCheck, struct FVectorNoCompress StartTraceLoc, float ClientAttackSectorAngle, struct FVectorNoCompress HitPawnLoc, float SandCDis )
{
	static UFunction* pFnServerProcessMeleeWeaponInstantHit = NULL;

	if ( ! pFnServerProcessMeleeWeaponInstantHit )
		pFnServerProcessMeleeWeaponInstantHit = (UFunction*) UObject::GObjObjects()->Data[ 213265 ];

	ATGMechaMeleeWeapon_execServerProcessMeleeWeaponInstantHit_Parms ServerProcessMeleeWeaponInstantHit_Parms;
	ServerProcessMeleeWeaponInstantHit_Parms.FiringMode = FiringMode;
	memcpy ( &ServerProcessMeleeWeaponInstantHit_Parms.Impact, &Impact, 0x54 );
	ServerProcessMeleeWeaponInstantHit_Parms.ClientTime = ClientTime;
	memcpy ( &ServerProcessMeleeWeaponInstantHit_Parms.TraceDir, &TraceDir, 0xC );
	ServerProcessMeleeWeaponInstantHit_Parms.NumHits = NumHits;
	ServerProcessMeleeWeaponInstantHit_Parms.bShouldServerCheck = bShouldServerCheck;
	memcpy ( &ServerProcessMeleeWeaponInstantHit_Parms.StartTraceLoc, &StartTraceLoc, 0xC );
	ServerProcessMeleeWeaponInstantHit_Parms.ClientAttackSectorAngle = ClientAttackSectorAngle;
	memcpy ( &ServerProcessMeleeWeaponInstantHit_Parms.HitPawnLoc, &HitPawnLoc, 0xC );
	ServerProcessMeleeWeaponInstantHit_Parms.SandCDis = SandCDis;

	this->ProcessEvent ( pFnServerProcessMeleeWeaponInstantHit, &ServerProcessMeleeWeaponInstantHit_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.TurnBackCrossHairColor
// [0x00020102] 
// Parameters infos:

void ATGMechaMeleeWeapon::TurnBackCrossHairColor ( )
{
	static UFunction* pFnTurnBackCrossHairColor = NULL;

	if ( ! pFnTurnBackCrossHairColor )
		pFnTurnBackCrossHairColor = (UFunction*) UObject::GObjObjects()->Data[ 213264 ];

	ATGMechaMeleeWeapon_execTurnBackCrossHairColor_Parms TurnBackCrossHairColor_Parms;

	this->ProcessEvent ( pFnTurnBackCrossHairColor, &TurnBackCrossHairColor_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.T2MeleeWeaponInstantFireEndTrace
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartTrace                     ( CPF_Parm )
// struct FVector                 TraceDirection                 ( CPF_Parm )

struct FVector ATGMechaMeleeWeapon::T2MeleeWeaponInstantFireEndTrace ( struct FVector StartTrace, struct FVector TraceDirection )
{
	static UFunction* pFnT2MeleeWeaponInstantFireEndTrace = NULL;

	if ( ! pFnT2MeleeWeaponInstantFireEndTrace )
		pFnT2MeleeWeaponInstantFireEndTrace = (UFunction*) UObject::GObjObjects()->Data[ 213259 ];

	ATGMechaMeleeWeapon_execT2MeleeWeaponInstantFireEndTrace_Parms T2MeleeWeaponInstantFireEndTrace_Parms;
	memcpy ( &T2MeleeWeaponInstantFireEndTrace_Parms.StartTrace, &StartTrace, 0xC );
	memcpy ( &T2MeleeWeaponInstantFireEndTrace_Parms.TraceDirection, &TraceDirection, 0xC );

	this->ProcessEvent ( pFnT2MeleeWeaponInstantFireEndTrace, &T2MeleeWeaponInstantFireEndTrace_Parms, NULL );

	return T2MeleeWeaponInstantFireEndTrace_Parms.ReturnValue;
};

// Function MechaGame.TGMechaMeleeWeapon.SetMeleeImpactEffectInfo
// [0x00020102] 
// Parameters infos:

void ATGMechaMeleeWeapon::SetMeleeImpactEffectInfo ( )
{
	static UFunction* pFnSetMeleeImpactEffectInfo = NULL;

	if ( ! pFnSetMeleeImpactEffectInfo )
		pFnSetMeleeImpactEffectInfo = (UFunction*) UObject::GObjObjects()->Data[ 213252 ];

	ATGMechaMeleeWeapon_execSetMeleeImpactEffectInfo_Parms SetMeleeImpactEffectInfo_Parms;

	this->ProcessEvent ( pFnSetMeleeImpactEffectInfo, &SetMeleeImpactEffectInfo_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.InstantFire
// [0x00820102] 
// Parameters infos:

void ATGMechaMeleeWeapon::InstantFire ( )
{
	static UFunction* pFnInstantFire = NULL;

	if ( ! pFnInstantFire )
		pFnInstantFire = (UFunction*) UObject::GObjObjects()->Data[ 213226 ];

	ATGMechaMeleeWeapon_execInstantFire_Parms InstantFire_Parms;

	this->ProcessEvent ( pFnInstantFire, &InstantFire_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.GetMeleeFireStartTrace
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ATGMechaMeleeWeapon::GetMeleeFireStartTrace ( )
{
	static UFunction* pFnGetMeleeFireStartTrace = NULL;

	if ( ! pFnGetMeleeFireStartTrace )
		pFnGetMeleeFireStartTrace = (UFunction*) UObject::GObjObjects()->Data[ 213222 ];

	ATGMechaMeleeWeapon_execGetMeleeFireStartTrace_Parms GetMeleeFireStartTrace_Parms;

	this->ProcessEvent ( pFnGetMeleeFireStartTrace, &GetMeleeFireStartTrace_Parms, NULL );

	return GetMeleeFireStartTrace_Parms.ReturnValue;
};

// Function MechaGame.TGMechaMeleeWeapon.SetMeleeDamageCheckingParms
// [0x00020102] 
// Parameters infos:

void ATGMechaMeleeWeapon::SetMeleeDamageCheckingParms ( )
{
	static UFunction* pFnSetMeleeDamageCheckingParms = NULL;

	if ( ! pFnSetMeleeDamageCheckingParms )
		pFnSetMeleeDamageCheckingParms = (UFunction*) UObject::GObjObjects()->Data[ 213221 ];

	ATGMechaMeleeWeapon_execSetMeleeDamageCheckingParms_Parms SetMeleeDamageCheckingParms_Parms;

	this->ProcessEvent ( pFnSetMeleeDamageCheckingParms, &SetMeleeDamageCheckingParms_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.PlayImpactEffect
// [0x00020102] 
// Parameters infos:
// unsigned char                  FiringMode                     ( CPF_Parm )
// struct FImpactInfo             Impact                         ( CPF_Parm )

void ATGMechaMeleeWeapon::PlayImpactEffect ( unsigned char FiringMode, struct FImpactInfo Impact )
{
	static UFunction* pFnPlayImpactEffect = NULL;

	if ( ! pFnPlayImpactEffect )
		pFnPlayImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 213217 ];

	ATGMechaMeleeWeapon_execPlayImpactEffect_Parms PlayImpactEffect_Parms;
	PlayImpactEffect_Parms.FiringMode = FiringMode;
	memcpy ( &PlayImpactEffect_Parms.Impact, &Impact, 0x54 );

	this->ProcessEvent ( pFnPlayImpactEffect, &PlayImpactEffect_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.OnAnimEnd
// [0x00024900] ( FUNC_Event )
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_OptionalParm | CPF_Parm )
// float                          PlayedTime                     ( CPF_OptionalParm | CPF_Parm )
// float                          ExcessTime                     ( CPF_OptionalParm | CPF_Parm )

void ATGMechaMeleeWeapon::eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnOnAnimEnd = NULL;

	if ( ! pFnOnAnimEnd )
		pFnOnAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 213213 ];

	ATGMechaMeleeWeapon_eventOnAnimEnd_Parms OnAnimEnd_Parms;
	OnAnimEnd_Parms.SeqNode = SeqNode;
	OnAnimEnd_Parms.PlayedTime = PlayedTime;
	OnAnimEnd_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnOnAnimEnd, &OnAnimEnd_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.FullyCooled
// [0x00020100] 
// Parameters infos:

void ATGMechaMeleeWeapon::FullyCooled ( )
{
	static UFunction* pFnFullyCooled = NULL;

	if ( ! pFnFullyCooled )
		pFnFullyCooled = (UFunction*) UObject::GObjObjects()->Data[ 213192 ];

	ATGMechaMeleeWeapon_execFullyCooled_Parms FullyCooled_Parms;

	this->ProcessEvent ( pFnFullyCooled, &FullyCooled_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.FireAmmunition
// [0x00020102] 
// Parameters infos:

void ATGMechaMeleeWeapon::FireAmmunition ( )
{
	static UFunction* pFnFireAmmunition = NULL;

	if ( ! pFnFireAmmunition )
		pFnFireAmmunition = (UFunction*) UObject::GObjObjects()->Data[ 213191 ];

	ATGMechaMeleeWeapon_execFireAmmunition_Parms FireAmmunition_Parms;

	this->ProcessEvent ( pFnFireAmmunition, &FireAmmunition_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.SetTimerInstantFire
// [0x00020102] 
// Parameters infos:

void ATGMechaMeleeWeapon::SetTimerInstantFire ( )
{
	static UFunction* pFnSetTimerInstantFire = NULL;

	if ( ! pFnSetTimerInstantFire )
		pFnSetTimerInstantFire = (UFunction*) UObject::GObjObjects()->Data[ 213190 ];

	ATGMechaMeleeWeapon_execSetTimerInstantFire_Parms SetTimerInstantFire_Parms;

	this->ProcessEvent ( pFnSetTimerInstantFire, &SetTimerInstantFire_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.ServerHandleFinishedFiring
// [0x002200C2] 
// Parameters infos:

void ATGMechaMeleeWeapon::ServerHandleFinishedFiring ( )
{
	static UFunction* pFnServerHandleFinishedFiring = NULL;

	if ( ! pFnServerHandleFinishedFiring )
		pFnServerHandleFinishedFiring = (UFunction*) UObject::GObjObjects()->Data[ 213186 ];

	ATGMechaMeleeWeapon_execServerHandleFinishedFiring_Parms ServerHandleFinishedFiring_Parms;

	this->ProcessEvent ( pFnServerHandleFinishedFiring, &ServerHandleFinishedFiring_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.HandleFinishedFiring
// [0x00020102] 
// Parameters infos:

void ATGMechaMeleeWeapon::HandleFinishedFiring ( )
{
	static UFunction* pFnHandleFinishedFiring = NULL;

	if ( ! pFnHandleFinishedFiring )
		pFnHandleFinishedFiring = (UFunction*) UObject::GObjObjects()->Data[ 213185 ];

	ATGMechaMeleeWeapon_execHandleFinishedFiring_Parms HandleFinishedFiring_Parms;

	this->ProcessEvent ( pFnHandleFinishedFiring, &HandleFinishedFiring_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.OnComboTimer
// [0x00020102] 
// Parameters infos:

void ATGMechaMeleeWeapon::OnComboTimer ( )
{
	static UFunction* pFnOnComboTimer = NULL;

	if ( ! pFnOnComboTimer )
		pFnOnComboTimer = (UFunction*) UObject::GObjObjects()->Data[ 213176 ];

	ATGMechaMeleeWeapon_execOnComboTimer_Parms OnComboTimer_Parms;

	this->ProcessEvent ( pFnOnComboTimer, &OnComboTimer_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.HasAnyAmmo
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaMeleeWeapon::HasAnyAmmo ( )
{
	static UFunction* pFnHasAnyAmmo = NULL;

	if ( ! pFnHasAnyAmmo )
		pFnHasAnyAmmo = (UFunction*) UObject::GObjObjects()->Data[ 213170 ];

	ATGMechaMeleeWeapon_execHasAnyAmmo_Parms HasAnyAmmo_Parms;

	this->ProcessEvent ( pFnHasAnyAmmo, &HasAnyAmmo_Parms, NULL );

	return HasAnyAmmo_Parms.ReturnValue;
};

// Function MechaGame.TGMechaMeleeWeapon.PlayWeaponPutDown
// [0x00020102] 
// Parameters infos:

void ATGMechaMeleeWeapon::PlayWeaponPutDown ( )
{
	static UFunction* pFnPlayWeaponPutDown = NULL;

	if ( ! pFnPlayWeaponPutDown )
		pFnPlayWeaponPutDown = (UFunction*) UObject::GObjObjects()->Data[ 213169 ];

	ATGMechaMeleeWeapon_execPlayWeaponPutDown_Parms PlayWeaponPutDown_Parms;

	this->ProcessEvent ( pFnPlayWeaponPutDown, &PlayWeaponPutDown_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.PlayWeaponEquip
// [0x00020100] 
// Parameters infos:

void ATGMechaMeleeWeapon::PlayWeaponEquip ( )
{
	static UFunction* pFnPlayWeaponEquip = NULL;

	if ( ! pFnPlayWeaponEquip )
		pFnPlayWeaponEquip = (UFunction*) UObject::GObjObjects()->Data[ 213168 ];

	ATGMechaMeleeWeapon_execPlayWeaponEquip_Parms PlayWeaponEquip_Parms;

	this->ProcessEvent ( pFnPlayWeaponEquip, &PlayWeaponEquip_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.PlayFireEffects
// [0x00024102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void ATGMechaMeleeWeapon::PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation )
{
	static UFunction* pFnPlayFireEffects = NULL;

	if ( ! pFnPlayFireEffects )
		pFnPlayFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 213165 ];

	ATGMechaMeleeWeapon_execPlayFireEffects_Parms PlayFireEffects_Parms;
	PlayFireEffects_Parms.FireModeNum = FireModeNum;
	memcpy ( &PlayFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayFireEffects, &PlayFireEffects_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.GetFireAnim
// [0x00020102] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            FireModeNum                    ( CPF_Parm )

struct FName ATGMechaMeleeWeapon::GetFireAnim ( int FireModeNum )
{
	static UFunction* pFnGetFireAnim = NULL;

	if ( ! pFnGetFireAnim )
		pFnGetFireAnim = (UFunction*) UObject::GObjObjects()->Data[ 213162 ];

	ATGMechaMeleeWeapon_execGetFireAnim_Parms GetFireAnim_Parms;
	GetFireAnim_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnGetFireAnim, &GetFireAnim_Parms, NULL );

	return GetFireAnim_Parms.ReturnValue;
};

// Function MechaGame.TGMechaMeleeWeapon.TrackShotCount
// [0x00020102] 
// Parameters infos:

void ATGMechaMeleeWeapon::TrackShotCount ( )
{
	static UFunction* pFnTrackShotCount = NULL;

	if ( ! pFnTrackShotCount )
		pFnTrackShotCount = (UFunction*) UObject::GObjObjects()->Data[ 213161 ];

	ATGMechaMeleeWeapon_execTrackShotCount_Parms TrackShotCount_Parms;

	this->ProcessEvent ( pFnTrackShotCount, &TrackShotCount_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.BestMode
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char ATGMechaMeleeWeapon::BestMode ( )
{
	static UFunction* pFnBestMode = NULL;

	if ( ! pFnBestMode )
		pFnBestMode = (UFunction*) UObject::GObjObjects()->Data[ 213158 ];

	ATGMechaMeleeWeapon_execBestMode_Parms BestMode_Parms;

	this->ProcessEvent ( pFnBestMode, &BestMode_Parms, NULL );

	return BestMode_Parms.ReturnValue;
};

// Function MechaGame.TGMechaMeleeWeapon.AddSpread
// [0x00020102] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                BaseAim                        ( CPF_Parm )

struct FRotator ATGMechaMeleeWeapon::AddSpread ( struct FRotator BaseAim )
{
	static UFunction* pFnAddSpread = NULL;

	if ( ! pFnAddSpread )
		pFnAddSpread = (UFunction*) UObject::GObjObjects()->Data[ 213154 ];

	ATGMechaMeleeWeapon_execAddSpread_Parms AddSpread_Parms;
	memcpy ( &AddSpread_Parms.BaseAim, &BaseAim, 0xC );

	this->ProcessEvent ( pFnAddSpread, &AddSpread_Parms, NULL );

	return AddSpread_Parms.ReturnValue;
};

// Function MechaGame.TGMechaMeleeWeapon.GetFireInterval
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  FireModeNum                    ( CPF_Parm )

float ATGMechaMeleeWeapon::GetFireInterval ( unsigned char FireModeNum )
{
	static UFunction* pFnGetFireInterval = NULL;

	if ( ! pFnGetFireInterval )
		pFnGetFireInterval = (UFunction*) UObject::GObjObjects()->Data[ 213150 ];

	ATGMechaMeleeWeapon_execGetFireInterval_Parms GetFireInterval_Parms;
	GetFireInterval_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnGetFireInterval, &GetFireInterval_Parms, NULL );

	return GetFireInterval_Parms.ReturnValue;
};

// Function MechaGame.TGMechaMeleeWeapon.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGMechaMeleeWeapon::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 213148 ];

	ATGMechaMeleeWeapon_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.StopMuzzleFlash
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaMeleeWeapon::eventStopMuzzleFlash ( )
{
	static UFunction* pFnStopMuzzleFlash = NULL;

	if ( ! pFnStopMuzzleFlash )
		pFnStopMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 213147 ];

	ATGMechaMeleeWeapon_eventStopMuzzleFlash_Parms StopMuzzleFlash_Parms;

	this->ProcessEvent ( pFnStopMuzzleFlash, &StopMuzzleFlash_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.CauseMuzzleFlash
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void ATGMechaMeleeWeapon::eventCauseMuzzleFlash ( )
{
	static UFunction* pFnCauseMuzzleFlash = NULL;

	if ( ! pFnCauseMuzzleFlash )
		pFnCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 213146 ];

	ATGMechaMeleeWeapon_eventCauseMuzzleFlash_Parms CauseMuzzleFlash_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlash, &CauseMuzzleFlash_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.CauseMuzzleFlashLight
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void ATGMechaMeleeWeapon::eventCauseMuzzleFlashLight ( )
{
	static UFunction* pFnCauseMuzzleFlashLight = NULL;

	if ( ! pFnCauseMuzzleFlashLight )
		pFnCauseMuzzleFlashLight = (UFunction*) UObject::GObjObjects()->Data[ 213145 ];

	ATGMechaMeleeWeapon_eventCauseMuzzleFlashLight_Parms CauseMuzzleFlashLight_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlashLight, &CauseMuzzleFlashLight_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.MuzzleFlashTimerRight
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaMeleeWeapon::eventMuzzleFlashTimerRight ( )
{
	static UFunction* pFnMuzzleFlashTimerRight = NULL;

	if ( ! pFnMuzzleFlashTimerRight )
		pFnMuzzleFlashTimerRight = (UFunction*) UObject::GObjObjects()->Data[ 213144 ];

	ATGMechaMeleeWeapon_eventMuzzleFlashTimerRight_Parms MuzzleFlashTimerRight_Parms;

	this->ProcessEvent ( pFnMuzzleFlashTimerRight, &MuzzleFlashTimerRight_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.MuzzleFlashTimerLeft
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaMeleeWeapon::eventMuzzleFlashTimerLeft ( )
{
	static UFunction* pFnMuzzleFlashTimerLeft = NULL;

	if ( ! pFnMuzzleFlashTimerLeft )
		pFnMuzzleFlashTimerLeft = (UFunction*) UObject::GObjObjects()->Data[ 213143 ];

	ATGMechaMeleeWeapon_eventMuzzleFlashTimerLeft_Parms MuzzleFlashTimerLeft_Parms;

	this->ProcessEvent ( pFnMuzzleFlashTimerLeft, &MuzzleFlashTimerLeft_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.MuzzleFlashOff
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void ATGMechaMeleeWeapon::eventMuzzleFlashOff ( int Index )
{
	static UFunction* pFnMuzzleFlashOff = NULL;

	if ( ! pFnMuzzleFlashOff )
		pFnMuzzleFlashOff = (UFunction*) UObject::GObjObjects()->Data[ 213141 ];

	ATGMechaMeleeWeapon_eventMuzzleFlashOff_Parms MuzzleFlashOff_Parms;
	MuzzleFlashOff_Parms.Index = Index;

	this->ProcessEvent ( pFnMuzzleFlashOff, &MuzzleFlashOff_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.DetachMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGMechaMeleeWeapon::DetachMuzzleFlash ( )
{
	static UFunction* pFnDetachMuzzleFlash = NULL;

	if ( ! pFnDetachMuzzleFlash )
		pFnDetachMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 213140 ];

	ATGMechaMeleeWeapon_execDetachMuzzleFlash_Parms DetachMuzzleFlash_Parms;

	this->ProcessEvent ( pFnDetachMuzzleFlash, &DetachMuzzleFlash_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.AttachMuzzleFlash
// [0x00020100] 
// Parameters infos:

void ATGMechaMeleeWeapon::AttachMuzzleFlash ( )
{
	static UFunction* pFnAttachMuzzleFlash = NULL;

	if ( ! pFnAttachMuzzleFlash )
		pFnAttachMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 213139 ];

	ATGMechaMeleeWeapon_execAttachMuzzleFlash_Parms AttachMuzzleFlash_Parms;

	this->ProcessEvent ( pFnAttachMuzzleFlash, &AttachMuzzleFlash_Parms, NULL );
};

// Function MechaGame.TGMechaMeleeWeapon.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaMeleeWeapon::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 213138 ];

	ATGMechaMeleeWeapon_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_PenetrativeCannon.StartFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGMechaWeap_PenetrativeCannon::StartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 215474 ];

	ATGMechaWeap_PenetrativeCannon_execStartFire_Parms StartFire_Parms;
	StartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_PenetrativeCannon.ServerSpecialFire
// [0x002200C2] 
// Parameters infos:
// class ATGRealMecha*            TargetMecha                    ( CPF_Parm )
// struct FVectorNoCompress       HitLocation                    ( CPF_Parm )
// struct FVectorNoCompress       HitDir                         ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm )

void ATGMechaWeap_PenetrativeCannon::ServerSpecialFire ( class ATGRealMecha* TargetMecha, struct FVectorNoCompress HitLocation, struct FVectorNoCompress HitDir, struct FTraceHitInfo HitInfo )
{
	static UFunction* pFnServerSpecialFire = NULL;

	if ( ! pFnServerSpecialFire )
		pFnServerSpecialFire = (UFunction*) UObject::GObjObjects()->Data[ 215466 ];

	ATGMechaWeap_PenetrativeCannon_execServerSpecialFire_Parms ServerSpecialFire_Parms;
	ServerSpecialFire_Parms.TargetMecha = TargetMecha;
	memcpy ( &ServerSpecialFire_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ServerSpecialFire_Parms.HitDir, &HitDir, 0xC );
	memcpy ( &ServerSpecialFire_Parms.HitInfo, &HitInfo, 0x20 );

	this->ProcessEvent ( pFnServerSpecialFire, &ServerSpecialFire_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_PenetrativeCannon.ServerFireAmmunition1P
// [0x00A240C2] 
// Parameters infos:
// int                            ControllerP                    ( CPF_Parm )
// int                            ControllerR                    ( CPF_Parm )
// int                            ControllerY                    ( CPF_Parm )
// int                            PunchAnglePitch                ( CPF_Parm )
// int                            PunchAngleYaw                  ( CPF_Parm )
// struct FVectorNoCompress       FireStartLocation              ( CPF_Parm )
// int                            DeltaPunchAnglePitch           ( CPF_Parm )
// float                          ClientTime                     ( CPF_Parm )
// class APawn*                   DamagePawn                     ( CPF_Parm )
// unsigned char                  WallNum                        ( CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_Parm )
// int                            HitDamage                      ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitDir                         ( CPF_Parm )
// struct FVectorNoCompress       DamagePawnLoc                  ( CPF_Parm )
// struct FName                   HitBoneName                    ( CPF_Parm )
// struct FVector                 FireEndLocation                ( CPF_OptionalParm | CPF_Parm )
// float                          SandCDis                       ( CPF_OptionalParm | CPF_Parm )
// struct FVectorNoCompress       ClientForwardDirection         ( CPF_OptionalParm | CPF_Parm )

void ATGMechaWeap_PenetrativeCannon::ServerFireAmmunition1P ( int ControllerP, int ControllerR, int ControllerY, int PunchAnglePitch, int PunchAngleYaw, struct FVectorNoCompress FireStartLocation, int DeltaPunchAnglePitch, float ClientTime, class APawn* DamagePawn, unsigned char WallNum, unsigned char HitGroup, int HitDamage, struct FVector HitLocation, struct FVector HitDir, struct FVectorNoCompress DamagePawnLoc, struct FName HitBoneName, struct FVector FireEndLocation, float SandCDis, struct FVectorNoCompress ClientForwardDirection )
{
	static UFunction* pFnServerFireAmmunition1P = NULL;

	if ( ! pFnServerFireAmmunition1P )
		pFnServerFireAmmunition1P = (UFunction*) UObject::GObjObjects()->Data[ 215443 ];

	ATGMechaWeap_PenetrativeCannon_execServerFireAmmunition1P_Parms ServerFireAmmunition1P_Parms;
	ServerFireAmmunition1P_Parms.ControllerP = ControllerP;
	ServerFireAmmunition1P_Parms.ControllerR = ControllerR;
	ServerFireAmmunition1P_Parms.ControllerY = ControllerY;
	ServerFireAmmunition1P_Parms.PunchAnglePitch = PunchAnglePitch;
	ServerFireAmmunition1P_Parms.PunchAngleYaw = PunchAngleYaw;
	memcpy ( &ServerFireAmmunition1P_Parms.FireStartLocation, &FireStartLocation, 0xC );
	ServerFireAmmunition1P_Parms.DeltaPunchAnglePitch = DeltaPunchAnglePitch;
	ServerFireAmmunition1P_Parms.ClientTime = ClientTime;
	ServerFireAmmunition1P_Parms.DamagePawn = DamagePawn;
	ServerFireAmmunition1P_Parms.WallNum = WallNum;
	ServerFireAmmunition1P_Parms.HitGroup = HitGroup;
	ServerFireAmmunition1P_Parms.HitDamage = HitDamage;
	memcpy ( &ServerFireAmmunition1P_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ServerFireAmmunition1P_Parms.HitDir, &HitDir, 0xC );
	memcpy ( &ServerFireAmmunition1P_Parms.DamagePawnLoc, &DamagePawnLoc, 0xC );
	memcpy ( &ServerFireAmmunition1P_Parms.HitBoneName, &HitBoneName, 0x8 );
	memcpy ( &ServerFireAmmunition1P_Parms.FireEndLocation, &FireEndLocation, 0xC );
	ServerFireAmmunition1P_Parms.SandCDis = SandCDis;
	memcpy ( &ServerFireAmmunition1P_Parms.ClientForwardDirection, &ClientForwardDirection, 0xC );

	this->ProcessEvent ( pFnServerFireAmmunition1P, &ServerFireAmmunition1P_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_PenetrativeCannon.SpecialFire
// [0x00820102] 
// Parameters infos:
// class ATGRealMecha*            TargetMecha                    ( CPF_Parm )

void ATGMechaWeap_PenetrativeCannon::SpecialFire ( class ATGRealMecha* TargetMecha )
{
	static UFunction* pFnSpecialFire = NULL;

	if ( ! pFnSpecialFire )
		pFnSpecialFire = (UFunction*) UObject::GObjObjects()->Data[ 215434 ];

	ATGMechaWeap_PenetrativeCannon_execSpecialFire_Parms SpecialFire_Parms;
	SpecialFire_Parms.TargetMecha = TargetMecha;

	this->ProcessEvent ( pFnSpecialFire, &SpecialFire_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_PenetrativeCannon.SetFlashLocation
// [0x00020002] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGMechaWeap_PenetrativeCannon::SetFlashLocation ( struct FVector HitLocation )
{
	static UFunction* pFnSetFlashLocation = NULL;

	if ( ! pFnSetFlashLocation )
		pFnSetFlashLocation = (UFunction*) UObject::GObjObjects()->Data[ 215432 ];

	ATGMechaWeap_PenetrativeCannon_execSetFlashLocation_Parms SetFlashLocation_Parms;
	memcpy ( &SetFlashLocation_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSetFlashLocation, &SetFlashLocation_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_PenetrativeCannon.ServerFireAmmunition
// [0x00A240C2] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerP                    ( CPF_Parm )
// int                            ControllerR                    ( CPF_Parm )
// int                            ControllerY                    ( CPF_Parm )
// int                            PunchAnglePitch                ( CPF_Parm )
// int                            PunchAngleYaw                  ( CPF_Parm )
// struct FVectorNoCompress       FireStartLocation              ( CPF_Parm )
// int                            DeltaPunchAnglePitch           ( CPF_Parm )
// float                          ClientTime                     ( CPF_Parm )
// unsigned long                  HitAPawn                       ( CPF_Parm )
// struct FVector                 FireEndLocation                ( CPF_OptionalParm | CPF_Parm )
// struct FVectorNoCompress       ClientForwardDirection         ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocationTemp0               ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocationTemp1               ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocationTemp2               ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocationTemp3               ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocationTemp4               ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocationTemp5               ( CPF_OptionalParm | CPF_Parm )

bool ATGMechaWeap_PenetrativeCannon::ServerFireAmmunition ( int ControllerP, int ControllerR, int ControllerY, int PunchAnglePitch, int PunchAngleYaw, struct FVectorNoCompress FireStartLocation, int DeltaPunchAnglePitch, float ClientTime, unsigned long HitAPawn, struct FVector FireEndLocation, struct FVectorNoCompress ClientForwardDirection, struct FVector HitLocationTemp0, struct FVector HitLocationTemp1, struct FVector HitLocationTemp2, struct FVector HitLocationTemp3, struct FVector HitLocationTemp4, struct FVector HitLocationTemp5 )
{
	static UFunction* pFnServerFireAmmunition = NULL;

	if ( ! pFnServerFireAmmunition )
		pFnServerFireAmmunition = (UFunction*) UObject::GObjObjects()->Data[ 215407 ];

	ATGMechaWeap_PenetrativeCannon_execServerFireAmmunition_Parms ServerFireAmmunition_Parms;
	ServerFireAmmunition_Parms.ControllerP = ControllerP;
	ServerFireAmmunition_Parms.ControllerR = ControllerR;
	ServerFireAmmunition_Parms.ControllerY = ControllerY;
	ServerFireAmmunition_Parms.PunchAnglePitch = PunchAnglePitch;
	ServerFireAmmunition_Parms.PunchAngleYaw = PunchAngleYaw;
	memcpy ( &ServerFireAmmunition_Parms.FireStartLocation, &FireStartLocation, 0xC );
	ServerFireAmmunition_Parms.DeltaPunchAnglePitch = DeltaPunchAnglePitch;
	ServerFireAmmunition_Parms.ClientTime = ClientTime;
	ServerFireAmmunition_Parms.HitAPawn = HitAPawn;
	memcpy ( &ServerFireAmmunition_Parms.FireEndLocation, &FireEndLocation, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.ClientForwardDirection, &ClientForwardDirection, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.HitLocationTemp0, &HitLocationTemp0, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.HitLocationTemp1, &HitLocationTemp1, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.HitLocationTemp2, &HitLocationTemp2, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.HitLocationTemp3, &HitLocationTemp3, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.HitLocationTemp4, &HitLocationTemp4, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.HitLocationTemp5, &HitLocationTemp5, 0xC );

	this->ProcessEvent ( pFnServerFireAmmunition, &ServerFireAmmunition_Parms, NULL );

	return ServerFireAmmunition_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_PenetrativeCannon.InstantFire
// [0x00820102] 
// Parameters infos:

void ATGMechaWeap_PenetrativeCannon::InstantFire ( )
{
	static UFunction* pFnInstantFire = NULL;

	if ( ! pFnInstantFire )
		pFnInstantFire = (UFunction*) UObject::GObjObjects()->Data[ 215394 ];

	ATGMechaWeap_PenetrativeCannon_execInstantFire_Parms InstantFire_Parms;

	this->ProcessEvent ( pFnInstantFire, &InstantFire_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_PenetrativeCannon.FireAmmunition
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_PenetrativeCannon::FireAmmunition ( )
{
	static UFunction* pFnFireAmmunition = NULL;

	if ( ! pFnFireAmmunition )
		pFnFireAmmunition = (UFunction*) UObject::GObjObjects()->Data[ 215376 ];

	ATGMechaWeap_PenetrativeCannon_execFireAmmunition_Parms FireAmmunition_Parms;

	this->ProcessEvent ( pFnFireAmmunition, &FireAmmunition_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_PenetrativeCannon.ModifyForWardDirection
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                AimAngle                       ( CPF_Parm )

struct FVector ATGMechaWeap_PenetrativeCannon::ModifyForWardDirection ( struct FRotator AimAngle )
{
	static UFunction* pFnModifyForWardDirection = NULL;

	if ( ! pFnModifyForWardDirection )
		pFnModifyForWardDirection = (UFunction*) UObject::GObjObjects()->Data[ 215368 ];

	ATGMechaWeap_PenetrativeCannon_execModifyForWardDirection_Parms ModifyForWardDirection_Parms;
	memcpy ( &ModifyForWardDirection_Parms.AimAngle, &AimAngle, 0xC );

	this->ProcessEvent ( pFnModifyForWardDirection, &ModifyForWardDirection_Parms, NULL );

	return ModifyForWardDirection_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_ShockCannon.ServerStartFire
// [0x002200C2] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGMechaWeap_ShockCannon::ServerStartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnServerStartFire = NULL;

	if ( ! pFnServerStartFire )
		pFnServerStartFire = (UFunction*) UObject::GObjObjects()->Data[ 215513 ];

	ATGMechaWeap_ShockCannon_execServerStartFire_Parms ServerStartFire_Parms;
	ServerStartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnServerStartFire, &ServerStartFire_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_ShockCannon.ConsumeAmmo
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGMechaWeap_ShockCannon::ConsumeAmmo ( unsigned char FireModeNum )
{
	static UFunction* pFnConsumeAmmo = NULL;

	if ( ! pFnConsumeAmmo )
		pFnConsumeAmmo = (UFunction*) UObject::GObjObjects()->Data[ 215501 ];

	ATGMechaWeap_ShockCannon_execConsumeAmmo_Parms ConsumeAmmo_Parms;
	ConsumeAmmo_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnConsumeAmmo, &ConsumeAmmo_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_ShockCannon.ServerStopFire
// [0x002200C2] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ATGMechaWeap_ShockCannon::ServerStopFire ( unsigned char FireModeNum )
{
	static UFunction* pFnServerStopFire = NULL;

	if ( ! pFnServerStopFire )
		pFnServerStopFire = (UFunction*) UObject::GObjObjects()->Data[ 215499 ];

	ATGMechaWeap_ShockCannon_execServerStopFire_Parms ServerStopFire_Parms;
	ServerStopFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnServerStopFire, &ServerStopFire_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_ShockCannon.SetProjectileParms
// [0x00420102] 
// Parameters infos:
// class ATGMechaProjectile*      NewProj                        ( CPF_Parm | CPF_OutParm )

void ATGMechaWeap_ShockCannon::SetProjectileParms ( class ATGMechaProjectile** NewProj )
{
	static UFunction* pFnSetProjectileParms = NULL;

	if ( ! pFnSetProjectileParms )
		pFnSetProjectileParms = (UFunction*) UObject::GObjObjects()->Data[ 215496 ];

	ATGMechaWeap_ShockCannon_execSetProjectileParms_Parms SetProjectileParms_Parms;

	this->ProcessEvent ( pFnSetProjectileParms, &SetProjectileParms_Parms, NULL );

	if ( NewProj )
		*NewProj = SetProjectileParms_Parms.NewProj;
};

// Function MechaGame.TGMechaWeap_ShotGun.TurnBackCrossHairColor
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_ShotGun::TurnBackCrossHairColor ( )
{
	static UFunction* pFnTurnBackCrossHairColor = NULL;

	if ( ! pFnTurnBackCrossHairColor )
		pFnTurnBackCrossHairColor = (UFunction*) UObject::GObjObjects()->Data[ 215537 ];

	ATGMechaWeap_ShotGun_execTurnBackCrossHairColor_Parms TurnBackCrossHairColor_Parms;

	this->ProcessEvent ( pFnTurnBackCrossHairColor, &TurnBackCrossHairColor_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_ShotGun.InstantFire
// [0x00820102] 
// Parameters infos:

void ATGMechaWeap_ShotGun::InstantFire ( )
{
	static UFunction* pFnInstantFire = NULL;

	if ( ! pFnInstantFire )
		pFnInstantFire = (UFunction*) UObject::GObjObjects()->Data[ 215523 ];

	ATGMechaWeap_ShotGun_execInstantFire_Parms InstantFire_Parms;

	this->ProcessEvent ( pFnInstantFire, &InstantFire_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Thunder.DrawCritInfo
// [0x00820102] 
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )
// int                            BaseOffsetX                    ( CPF_Parm )
// int                            DynamicOffsetX                 ( CPF_Parm )

void ATGMechaWeap_Thunder::DrawCritInfo ( class ATGHUD* HUD, int BaseOffsetX, int DynamicOffsetX )
{
	static UFunction* pFnDrawCritInfo = NULL;

	if ( ! pFnDrawCritInfo )
		pFnDrawCritInfo = (UFunction*) UObject::GObjObjects()->Data[ 215652 ];

	ATGMechaWeap_Thunder_execDrawCritInfo_Parms DrawCritInfo_Parms;
	DrawCritInfo_Parms.HUD = HUD;
	DrawCritInfo_Parms.BaseOffsetX = BaseOffsetX;
	DrawCritInfo_Parms.DynamicOffsetX = DynamicOffsetX;

	this->ProcessEvent ( pFnDrawCritInfo, &DrawCritInfo_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Thunder.GunServerTakeDamage
// [0x00A240C2] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   DamageActor                    ( CPF_Parm )
// unsigned char                  WallNum                        ( CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_Parm )
// int                            HitDamage                      ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitDir                         ( CPF_Parm )
// struct FVector                 DamagePawnLoc                  ( CPF_Parm )
// struct FName                   HitBoneName                    ( CPF_Parm )
// float                          SandCDis                       ( CPF_OptionalParm | CPF_Parm )

bool ATGMechaWeap_Thunder::GunServerTakeDamage ( class APawn* DamageActor, unsigned char WallNum, unsigned char HitGroup, int HitDamage, struct FVector HitLocation, struct FVector HitDir, struct FVector DamagePawnLoc, struct FName HitBoneName, float SandCDis )
{
	static UFunction* pFnGunServerTakeDamage = NULL;

	if ( ! pFnGunServerTakeDamage )
		pFnGunServerTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 215638 ];

	ATGMechaWeap_Thunder_execGunServerTakeDamage_Parms GunServerTakeDamage_Parms;
	GunServerTakeDamage_Parms.DamageActor = DamageActor;
	GunServerTakeDamage_Parms.WallNum = WallNum;
	GunServerTakeDamage_Parms.HitGroup = HitGroup;
	GunServerTakeDamage_Parms.HitDamage = HitDamage;
	memcpy ( &GunServerTakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &GunServerTakeDamage_Parms.HitDir, &HitDir, 0xC );
	memcpy ( &GunServerTakeDamage_Parms.DamagePawnLoc, &DamagePawnLoc, 0xC );
	memcpy ( &GunServerTakeDamage_Parms.HitBoneName, &HitBoneName, 0x8 );
	GunServerTakeDamage_Parms.SandCDis = SandCDis;

	this->ProcessEvent ( pFnGunServerTakeDamage, &GunServerTakeDamage_Parms, NULL );

	return GunServerTakeDamage_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_Thunder.ServerFireAmmunition1P
// [0x00A240C2] 
// Parameters infos:
// int                            ControllerP                    ( CPF_Parm )
// int                            ControllerR                    ( CPF_Parm )
// int                            ControllerY                    ( CPF_Parm )
// int                            PunchAnglePitch                ( CPF_Parm )
// int                            PunchAngleYaw                  ( CPF_Parm )
// struct FVectorNoCompress       FireStartLocation              ( CPF_Parm )
// int                            DeltaPunchAnglePitch           ( CPF_Parm )
// float                          ClientTime                     ( CPF_Parm )
// class APawn*                   DamagePawn                     ( CPF_Parm )
// unsigned char                  WallNum                        ( CPF_Parm )
// unsigned char                  HitGroup                       ( CPF_Parm )
// int                            HitDamage                      ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitDir                         ( CPF_Parm )
// struct FVectorNoCompress       DamagePawnLoc                  ( CPF_Parm )
// struct FName                   HitBoneName                    ( CPF_Parm )
// struct FVector                 FireEndLocation                ( CPF_OptionalParm | CPF_Parm )
// float                          SandCDis                       ( CPF_OptionalParm | CPF_Parm )
// struct FVectorNoCompress       ClientForwardDirection         ( CPF_OptionalParm | CPF_Parm )

void ATGMechaWeap_Thunder::ServerFireAmmunition1P ( int ControllerP, int ControllerR, int ControllerY, int PunchAnglePitch, int PunchAngleYaw, struct FVectorNoCompress FireStartLocation, int DeltaPunchAnglePitch, float ClientTime, class APawn* DamagePawn, unsigned char WallNum, unsigned char HitGroup, int HitDamage, struct FVector HitLocation, struct FVector HitDir, struct FVectorNoCompress DamagePawnLoc, struct FName HitBoneName, struct FVector FireEndLocation, float SandCDis, struct FVectorNoCompress ClientForwardDirection )
{
	static UFunction* pFnServerFireAmmunition1P = NULL;

	if ( ! pFnServerFireAmmunition1P )
		pFnServerFireAmmunition1P = (UFunction*) UObject::GObjObjects()->Data[ 215615 ];

	ATGMechaWeap_Thunder_execServerFireAmmunition1P_Parms ServerFireAmmunition1P_Parms;
	ServerFireAmmunition1P_Parms.ControllerP = ControllerP;
	ServerFireAmmunition1P_Parms.ControllerR = ControllerR;
	ServerFireAmmunition1P_Parms.ControllerY = ControllerY;
	ServerFireAmmunition1P_Parms.PunchAnglePitch = PunchAnglePitch;
	ServerFireAmmunition1P_Parms.PunchAngleYaw = PunchAngleYaw;
	memcpy ( &ServerFireAmmunition1P_Parms.FireStartLocation, &FireStartLocation, 0xC );
	ServerFireAmmunition1P_Parms.DeltaPunchAnglePitch = DeltaPunchAnglePitch;
	ServerFireAmmunition1P_Parms.ClientTime = ClientTime;
	ServerFireAmmunition1P_Parms.DamagePawn = DamagePawn;
	ServerFireAmmunition1P_Parms.WallNum = WallNum;
	ServerFireAmmunition1P_Parms.HitGroup = HitGroup;
	ServerFireAmmunition1P_Parms.HitDamage = HitDamage;
	memcpy ( &ServerFireAmmunition1P_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ServerFireAmmunition1P_Parms.HitDir, &HitDir, 0xC );
	memcpy ( &ServerFireAmmunition1P_Parms.DamagePawnLoc, &DamagePawnLoc, 0xC );
	memcpy ( &ServerFireAmmunition1P_Parms.HitBoneName, &HitBoneName, 0x8 );
	memcpy ( &ServerFireAmmunition1P_Parms.FireEndLocation, &FireEndLocation, 0xC );
	ServerFireAmmunition1P_Parms.SandCDis = SandCDis;
	memcpy ( &ServerFireAmmunition1P_Parms.ClientForwardDirection, &ClientForwardDirection, 0xC );

	this->ProcessEvent ( pFnServerFireAmmunition1P, &ServerFireAmmunition1P_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Thunder.SetFlashLocation
// [0x00020002] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGMechaWeap_Thunder::SetFlashLocation ( struct FVector HitLocation )
{
	static UFunction* pFnSetFlashLocation = NULL;

	if ( ! pFnSetFlashLocation )
		pFnSetFlashLocation = (UFunction*) UObject::GObjObjects()->Data[ 215613 ];

	ATGMechaWeap_Thunder_execSetFlashLocation_Parms SetFlashLocation_Parms;
	memcpy ( &SetFlashLocation_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSetFlashLocation, &SetFlashLocation_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Thunder.ServerFireAmmunition
// [0x00A240C2] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerP                    ( CPF_Parm )
// int                            ControllerR                    ( CPF_Parm )
// int                            ControllerY                    ( CPF_Parm )
// int                            PunchAnglePitch                ( CPF_Parm )
// int                            PunchAngleYaw                  ( CPF_Parm )
// struct FVectorNoCompress       FireStartLocation              ( CPF_Parm )
// int                            DeltaPunchAnglePitch           ( CPF_Parm )
// float                          ClientTime                     ( CPF_Parm )
// unsigned long                  HitAPawn                       ( CPF_Parm )
// struct FVector                 FireEndLocation                ( CPF_OptionalParm | CPF_Parm )
// struct FVectorNoCompress       ClientForwardDirection         ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocationTemp0               ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocationTemp1               ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocationTemp2               ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocationTemp3               ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocationTemp4               ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocationTemp5               ( CPF_OptionalParm | CPF_Parm )

bool ATGMechaWeap_Thunder::ServerFireAmmunition ( int ControllerP, int ControllerR, int ControllerY, int PunchAnglePitch, int PunchAngleYaw, struct FVectorNoCompress FireStartLocation, int DeltaPunchAnglePitch, float ClientTime, unsigned long HitAPawn, struct FVector FireEndLocation, struct FVectorNoCompress ClientForwardDirection, struct FVector HitLocationTemp0, struct FVector HitLocationTemp1, struct FVector HitLocationTemp2, struct FVector HitLocationTemp3, struct FVector HitLocationTemp4, struct FVector HitLocationTemp5 )
{
	static UFunction* pFnServerFireAmmunition = NULL;

	if ( ! pFnServerFireAmmunition )
		pFnServerFireAmmunition = (UFunction*) UObject::GObjObjects()->Data[ 215588 ];

	ATGMechaWeap_Thunder_execServerFireAmmunition_Parms ServerFireAmmunition_Parms;
	ServerFireAmmunition_Parms.ControllerP = ControllerP;
	ServerFireAmmunition_Parms.ControllerR = ControllerR;
	ServerFireAmmunition_Parms.ControllerY = ControllerY;
	ServerFireAmmunition_Parms.PunchAnglePitch = PunchAnglePitch;
	ServerFireAmmunition_Parms.PunchAngleYaw = PunchAngleYaw;
	memcpy ( &ServerFireAmmunition_Parms.FireStartLocation, &FireStartLocation, 0xC );
	ServerFireAmmunition_Parms.DeltaPunchAnglePitch = DeltaPunchAnglePitch;
	ServerFireAmmunition_Parms.ClientTime = ClientTime;
	ServerFireAmmunition_Parms.HitAPawn = HitAPawn;
	memcpy ( &ServerFireAmmunition_Parms.FireEndLocation, &FireEndLocation, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.ClientForwardDirection, &ClientForwardDirection, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.HitLocationTemp0, &HitLocationTemp0, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.HitLocationTemp1, &HitLocationTemp1, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.HitLocationTemp2, &HitLocationTemp2, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.HitLocationTemp3, &HitLocationTemp3, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.HitLocationTemp4, &HitLocationTemp4, 0xC );
	memcpy ( &ServerFireAmmunition_Parms.HitLocationTemp5, &HitLocationTemp5, 0xC );

	this->ProcessEvent ( pFnServerFireAmmunition, &ServerFireAmmunition_Parms, NULL );

	return ServerFireAmmunition_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_Thunder.InstantFire
// [0x00820102] 
// Parameters infos:

void ATGMechaWeap_Thunder::InstantFire ( )
{
	static UFunction* pFnInstantFire = NULL;

	if ( ! pFnInstantFire )
		pFnInstantFire = (UFunction*) UObject::GObjObjects()->Data[ 215575 ];

	ATGMechaWeap_Thunder_execInstantFire_Parms InstantFire_Parms;

	this->ProcessEvent ( pFnInstantFire, &InstantFire_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Thunder.FireAmmunition
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_Thunder::FireAmmunition ( )
{
	static UFunction* pFnFireAmmunition = NULL;

	if ( ! pFnFireAmmunition )
		pFnFireAmmunition = (UFunction*) UObject::GObjObjects()->Data[ 215574 ];

	ATGMechaWeap_Thunder_execFireAmmunition_Parms FireAmmunition_Parms;

	this->ProcessEvent ( pFnFireAmmunition, &FireAmmunition_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Thunder.ModifyForWardDirection
// [0x00020102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                AimAngle                       ( CPF_Parm )

struct FVector ATGMechaWeap_Thunder::ModifyForWardDirection ( struct FRotator AimAngle )
{
	static UFunction* pFnModifyForWardDirection = NULL;

	if ( ! pFnModifyForWardDirection )
		pFnModifyForWardDirection = (UFunction*) UObject::GObjObjects()->Data[ 215571 ];

	ATGMechaWeap_Thunder_execModifyForWardDirection_Parms ModifyForWardDirection_Parms;
	memcpy ( &ModifyForWardDirection_Parms.AimAngle, &AimAngle, 0xC );

	this->ProcessEvent ( pFnModifyForWardDirection, &ModifyForWardDirection_Parms, NULL );

	return ModifyForWardDirection_Parms.ReturnValue;
};

// Function MechaGame.TGMechaGameHUD_ProgressBar.UpdateRespawnTimeBar
// [0x00020002] 
// Parameters infos:

void UTGMechaGameHUD_ProgressBar::UpdateRespawnTimeBar ( )
{
	static UFunction* pFnUpdateRespawnTimeBar = NULL;

	if ( ! pFnUpdateRespawnTimeBar )
		pFnUpdateRespawnTimeBar = (UFunction*) UObject::GObjObjects()->Data[ 212864 ];

	UTGMechaGameHUD_ProgressBar_execUpdateRespawnTimeBar_Parms UpdateRespawnTimeBar_Parms;

	this->ProcessEvent ( pFnUpdateRespawnTimeBar, &UpdateRespawnTimeBar_Parms, NULL );
};

// Function MechaGame.TGMechaDMScoreBoard.DrawItemText
// [0x00420002] 
// Parameters infos:
// int                            PosX                           ( CPF_Parm )
// int                            PosY                           ( CPF_Parm )
// class ATGPlayerReplicationInfo* PRI                            ( CPF_Parm )
// struct FColor                  TextColor                      ( CPF_Parm | CPF_OutParm )

void UTGMechaDMScoreBoard::DrawItemText ( int PosX, int PosY, class ATGPlayerReplicationInfo* PRI, struct FColor* TextColor )
{
	static UFunction* pFnDrawItemText = NULL;

	if ( ! pFnDrawItemText )
		pFnDrawItemText = (UFunction*) UObject::GObjObjects()->Data[ 212677 ];

	UTGMechaDMScoreBoard_execDrawItemText_Parms DrawItemText_Parms;
	DrawItemText_Parms.PosX = PosX;
	DrawItemText_Parms.PosY = PosY;
	DrawItemText_Parms.PRI = PRI;

	this->ProcessEvent ( pFnDrawItemText, &DrawItemText_Parms, NULL );

	if ( TextColor )
		memcpy ( TextColor, &DrawItemText_Parms.TextColor, 0x4 );
};

// Function MechaGame.TGMechaDMScoreBoard.DrawItemTextSelf
// [0x00420002] 
// Parameters infos:
// int                            PosX                           ( CPF_Parm )
// int                            PosY                           ( CPF_Parm )
// class ATGPlayerReplicationInfo* PRI                            ( CPF_Parm )
// struct FColor                  TextColor                      ( CPF_Parm | CPF_OutParm )

void UTGMechaDMScoreBoard::DrawItemTextSelf ( int PosX, int PosY, class ATGPlayerReplicationInfo* PRI, struct FColor* TextColor )
{
	static UFunction* pFnDrawItemTextSelf = NULL;

	if ( ! pFnDrawItemTextSelf )
		pFnDrawItemTextSelf = (UFunction*) UObject::GObjObjects()->Data[ 212670 ];

	UTGMechaDMScoreBoard_execDrawItemTextSelf_Parms DrawItemTextSelf_Parms;
	DrawItemTextSelf_Parms.PosX = PosX;
	DrawItemTextSelf_Parms.PosY = PosY;
	DrawItemTextSelf_Parms.PRI = PRI;

	this->ProcessEvent ( pFnDrawItemTextSelf, &DrawItemTextSelf_Parms, NULL );

	if ( TextColor )
		memcpy ( TextColor, &DrawItemTextSelf_Parms.TextColor, 0x4 );
};

// Function MechaGame.TGMechaDMScoreBoard.DrawScoreBoardBG
// [0x00020002] 
// Parameters infos:

void UTGMechaDMScoreBoard::DrawScoreBoardBG ( )
{
	static UFunction* pFnDrawScoreBoardBG = NULL;

	if ( ! pFnDrawScoreBoardBG )
		pFnDrawScoreBoardBG = (UFunction*) UObject::GObjObjects()->Data[ 212668 ];

	UTGMechaDMScoreBoard_execDrawScoreBoardBG_Parms DrawScoreBoardBG_Parms;

	this->ProcessEvent ( pFnDrawScoreBoardBG, &DrawScoreBoardBG_Parms, NULL );
};

// Function MechaGame.TGMechaPlayerInventoryManager.AddAllFunctionalItem
// [0x00020002] 
// Parameters infos:
// class ATGPlayerReplicationInfo* PRI                            ( CPF_Parm )

void ATGMechaPlayerInventoryManager::AddAllFunctionalItem ( class ATGPlayerReplicationInfo* PRI )
{
	static UFunction* pFnAddAllFunctionalItem = NULL;

	if ( ! pFnAddAllFunctionalItem )
		pFnAddAllFunctionalItem = (UFunction*) UObject::GObjObjects()->Data[ 213442 ];

	ATGMechaPlayerInventoryManager_execAddAllFunctionalItem_Parms AddAllFunctionalItem_Parms;
	AddAllFunctionalItem_Parms.PRI = PRI;

	this->ProcessEvent ( pFnAddAllFunctionalItem, &AddAllFunctionalItem_Parms, NULL );
};

// Function MechaGame.TGMechaFactory.GetVehicleClassPath
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ATGMechaFactory::GetVehicleClassPath ( )
{
	static UFunction* pFnGetVehicleClassPath = NULL;

	if ( ! pFnGetVehicleClassPath )
		pFnGetVehicleClassPath = (UFunction*) UObject::GObjObjects()->Data[ 212853 ];

	ATGMechaFactory_execGetVehicleClassPath_Parms GetVehicleClassPath_Parms;

	this->ProcessEvent ( pFnGetVehicleClassPath, &GetVehicleClassPath_Parms, NULL );

	return GetVehicleClassPath_Parms.ReturnValue;
};

// Function MechaGame.TGMechaFactory.GetSpawnPosition
// [0x00420002] 
// Parameters infos:
// class UClass*                  MechaClass                     ( CPF_Parm )
// struct FVector                 SpawnLoc                       ( CPF_Parm | CPF_OutParm )
// struct FRotator                SpawnRot                       ( CPF_Parm | CPF_OutParm )

void ATGMechaFactory::GetSpawnPosition ( class UClass* MechaClass, struct FVector* SpawnLoc, struct FRotator* SpawnRot )
{
	static UFunction* pFnGetSpawnPosition = NULL;

	if ( ! pFnGetSpawnPosition )
		pFnGetSpawnPosition = (UFunction*) UObject::GObjObjects()->Data[ 212845 ];

	ATGMechaFactory_execGetSpawnPosition_Parms GetSpawnPosition_Parms;
	GetSpawnPosition_Parms.MechaClass = MechaClass;

	this->ProcessEvent ( pFnGetSpawnPosition, &GetSpawnPosition_Parms, NULL );

	if ( SpawnLoc )
		memcpy ( SpawnLoc, &GetSpawnPosition_Parms.SpawnLoc, 0xC );

	if ( SpawnRot )
		memcpy ( SpawnRot, &GetSpawnPosition_Parms.SpawnRot, 0xC );
};

// Function MechaGame.TGMechaDMRoundMessage.GetPos
// [0x00022002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Switch                         ( CPF_Parm )
// class AHUD*                    myHUD                          ( CPF_Parm )

float UTGMechaDMRoundMessage::GetPos ( int Switch, class AHUD* myHUD )
{
	static UFunction* pFnGetPos = NULL;

	if ( ! pFnGetPos )
		pFnGetPos = (UFunction*) UObject::GObjObjects()->Data[ 212663 ];

	UTGMechaDMRoundMessage_execGetPos_Parms GetPos_Parms;
	GetPos_Parms.Switch = Switch;
	GetPos_Parms.myHUD = myHUD;

	this->ProcessEvent ( pFnGetPos, &GetPos_Parms, NULL );

	return GetPos_Parms.ReturnValue;
};

// Function MechaGame.TGMechaDMRoundMessage.GetFontSize
// [0x00022002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Switch                         ( CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI1                    ( CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI2                    ( CPF_Parm )
// class APlayerReplicationInfo*  LocalPlayer                    ( CPF_Parm )

int UTGMechaDMRoundMessage::GetFontSize ( int Switch, class APlayerReplicationInfo* RelatedPRI1, class APlayerReplicationInfo* RelatedPRI2, class APlayerReplicationInfo* LocalPlayer )
{
	static UFunction* pFnGetFontSize = NULL;

	if ( ! pFnGetFontSize )
		pFnGetFontSize = (UFunction*) UObject::GObjObjects()->Data[ 212657 ];

	UTGMechaDMRoundMessage_execGetFontSize_Parms GetFontSize_Parms;
	GetFontSize_Parms.Switch = Switch;
	GetFontSize_Parms.RelatedPRI1 = RelatedPRI1;
	GetFontSize_Parms.RelatedPRI2 = RelatedPRI2;
	GetFontSize_Parms.LocalPlayer = LocalPlayer;

	this->ProcessEvent ( pFnGetFontSize, &GetFontSize_Parms, NULL );

	return GetFontSize_Parms.ReturnValue;
};

// Function MechaGame.TGMechaDMRoundMessage.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGMechaDMRoundMessage::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 212650 ];

	UTGMechaDMRoundMessage_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function MechaGame.TGMechaHUD_HulkBuster.DisplayWeaponBar
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// class ATGHUD*                  HUD                            ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UTGMechaHUD_HulkBuster::eventDisplayWeaponBar ( class ATGHUD* HUD, class UCanvas* Canvas )
{
	static UFunction* pFnDisplayWeaponBar = NULL;

	if ( ! pFnDisplayWeaponBar )
		pFnDisplayWeaponBar = (UFunction*) UObject::GObjObjects()->Data[ 213059 ];

	UTGMechaHUD_HulkBuster_eventDisplayWeaponBar_Parms DisplayWeaponBar_Parms;
	DisplayWeaponBar_Parms.HUD = HUD;
	DisplayWeaponBar_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDisplayWeaponBar, &DisplayWeaponBar_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_LaserBlade.PlayImpactEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGMechaWeapAttachment_LaserBlade::PlayImpactEffects ( struct FVector HitLocation )
{
	static UFunction* pFnPlayImpactEffects = NULL;

	if ( ! pFnPlayImpactEffects )
		pFnPlayImpactEffects = (UFunction*) UObject::GObjObjects()->Data[ 215787 ];

	ATGMechaWeapAttachment_LaserBlade_execPlayImpactEffects_Parms PlayImpactEffects_Parms;
	memcpy ( &PlayImpactEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayImpactEffects, &PlayImpactEffects_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_LaserBlade.DetachFrom
// [0x00020102] 
// Parameters infos:
// class USkeletalMeshComponent*  MeshCpnt                       ( CPF_Parm | CPF_EditInline )

void ATGMechaWeapAttachment_LaserBlade::DetachFrom ( class USkeletalMeshComponent* MeshCpnt )
{
	static UFunction* pFnDetachFrom = NULL;

	if ( ! pFnDetachFrom )
		pFnDetachFrom = (UFunction*) UObject::GObjObjects()->Data[ 215785 ];

	ATGMechaWeapAttachment_LaserBlade_execDetachFrom_Parms DetachFrom_Parms;
	DetachFrom_Parms.MeshCpnt = MeshCpnt;

	this->ProcessEvent ( pFnDetachFrom, &DetachFrom_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_LaserBlade.AttachToMecha
// [0x00020102] 
// Parameters infos:
// class ATGRealMechaBase*        AttachOwnerMecha               ( CPF_Parm )

void ATGMechaWeapAttachment_LaserBlade::AttachToMecha ( class ATGRealMechaBase* AttachOwnerMecha )
{
	static UFunction* pFnAttachToMecha = NULL;

	if ( ! pFnAttachToMecha )
		pFnAttachToMecha = (UFunction*) UObject::GObjObjects()->Data[ 215783 ];

	ATGMechaWeapAttachment_LaserBlade_execAttachToMecha_Parms AttachToMecha_Parms;
	AttachToMecha_Parms.AttachOwnerMecha = AttachOwnerMecha;

	this->ProcessEvent ( pFnAttachToMecha, &AttachToMecha_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_LaserBlade.DetachLaserBladeEffects
// [0x00020102] 
// Parameters infos:

void ATGMechaWeapAttachment_LaserBlade::DetachLaserBladeEffects ( )
{
	static UFunction* pFnDetachLaserBladeEffects = NULL;

	if ( ! pFnDetachLaserBladeEffects )
		pFnDetachLaserBladeEffects = (UFunction*) UObject::GObjObjects()->Data[ 215782 ];

	ATGMechaWeapAttachment_LaserBlade_execDetachLaserBladeEffects_Parms DetachLaserBladeEffects_Parms;

	this->ProcessEvent ( pFnDetachLaserBladeEffects, &DetachLaserBladeEffects_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_LaserBlade.AttachLaserBladeEffects
// [0x00020102] 
// Parameters infos:

void ATGMechaWeapAttachment_LaserBlade::AttachLaserBladeEffects ( )
{
	static UFunction* pFnAttachLaserBladeEffects = NULL;

	if ( ! pFnAttachLaserBladeEffects )
		pFnAttachLaserBladeEffects = (UFunction*) UObject::GObjObjects()->Data[ 215781 ];

	ATGMechaWeapAttachment_LaserBlade_execAttachLaserBladeEffects_Parms AttachLaserBladeEffects_Parms;

	this->ProcessEvent ( pFnAttachLaserBladeEffects, &AttachLaserBladeEffects_Parms, NULL );
};

// Function MechaGame.TGMechaPickupMessage.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UTGMechaPickupMessage::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 213419 ];

	UTGMechaPickupMessage_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProj_Tracer.Tick
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGMechaProj_Tracer::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 213741 ];

	ATGMechaProj_Tracer_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function MechaGame.TGMechaProj_Tracer.ScaleUpFinishedNotify
// [0x00020102] 
// Parameters infos:

void ATGMechaProj_Tracer::ScaleUpFinishedNotify ( )
{
	static UFunction* pFnScaleUpFinishedNotify = NULL;

	if ( ! pFnScaleUpFinishedNotify )
		pFnScaleUpFinishedNotify = (UFunction*) UObject::GObjObjects()->Data[ 213740 ];

	ATGMechaProj_Tracer_execScaleUpFinishedNotify_Parms ScaleUpFinishedNotify_Parms;

	this->ProcessEvent ( pFnScaleUpFinishedNotify, &ScaleUpFinishedNotify_Parms, NULL );
};

// Function MechaGame.TGMechaProj_Tracer.ScaleDownFinishedNotify
// [0x00020102] 
// Parameters infos:

void ATGMechaProj_Tracer::ScaleDownFinishedNotify ( )
{
	static UFunction* pFnScaleDownFinishedNotify = NULL;

	if ( ! pFnScaleDownFinishedNotify )
		pFnScaleDownFinishedNotify = (UFunction*) UObject::GObjObjects()->Data[ 213739 ];

	ATGMechaProj_Tracer_execScaleDownFinishedNotify_Parms ScaleDownFinishedNotify_Parms;

	this->ProcessEvent ( pFnScaleDownFinishedNotify, &ScaleDownFinishedNotify_Parms, NULL );
};

// Function MechaGame.TGMechaProj_Tracer.SpawnImpactEffect
// [0x00020100] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGMechaProj_Tracer::SpawnImpactEffect ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnImpactEffect = NULL;

	if ( ! pFnSpawnImpactEffect )
		pFnSpawnImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 213736 ];

	ATGMechaProj_Tracer_execSpawnImpactEffect_Parms SpawnImpactEffect_Parms;
	memcpy ( &SpawnImpactEffect_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnImpactEffect_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnImpactEffect, &SpawnImpactEffect_Parms, NULL );
};

// Function MechaGame.TGMechaProj_Tracer.Explode
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGMechaProj_Tracer::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 213733 ];

	ATGMechaProj_Tracer_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function MechaGame.TGMechaProj_Tracer.KillProjectile
// [0x00020102] 
// Parameters infos:

void ATGMechaProj_Tracer::KillProjectile ( )
{
	static UFunction* pFnKillProjectile = NULL;

	if ( ! pFnKillProjectile )
		pFnKillProjectile = (UFunction*) UObject::GObjObjects()->Data[ 213731 ];

	ATGMechaProj_Tracer_execKillProjectile_Parms KillProjectile_Parms;

	this->ProcessEvent ( pFnKillProjectile, &KillProjectile_Parms, NULL );
};

// Function MechaGame.TGMechaProj_Tracer.Init
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )

void ATGMechaProj_Tracer::Init ( struct FVector Direction )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 213729 ];

	ATGMechaProj_Tracer_execInit_Parms Init_Parms;
	memcpy ( &Init_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function MechaGame.TGMechaProj_Tracer.CalcTraceAccel
// [0x00880102] 
// Parameters infos:

void ATGMechaProj_Tracer::CalcTraceAccel ( )
{
	static UFunction* pFnCalcTraceAccel = NULL;

	if ( ! pFnCalcTraceAccel )
		pFnCalcTraceAccel = (UFunction*) UObject::GObjObjects()->Data[ 213727 ];

	ATGMechaProj_Tracer_execCalcTraceAccel_Parms CalcTraceAccel_Parms;

	this->ProcessEvent ( pFnCalcTraceAccel, &CalcTraceAccel_Parms, NULL );
};

// Function MechaGame.TGMechaProj_Tracer.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGMechaProj_Tracer::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 213725 ];

	ATGMechaProj_Tracer_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function MechaGame.TGMechaProj_BulletTracer.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGMechaProj_BulletTracer::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 213766 ];

	ATGMechaProj_BulletTracer_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function MechaGame.TGMechaProj_BulletTracer.OutsideWorldBounds
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaProj_BulletTracer::eventOutsideWorldBounds ( )
{
	static UFunction* pFnOutsideWorldBounds = NULL;

	if ( ! pFnOutsideWorldBounds )
		pFnOutsideWorldBounds = (UFunction*) UObject::GObjObjects()->Data[ 213765 ];

	ATGMechaProj_BulletTracer_eventOutsideWorldBounds_Parms OutsideWorldBounds_Parms;

	this->ProcessEvent ( pFnOutsideWorldBounds, &OutsideWorldBounds_Parms, NULL );
};

// Function MechaGame.TGMechaProj_BulletTracer.ScaleUpFinishedNotify
// [0x00020102] 
// Parameters infos:

void ATGMechaProj_BulletTracer::ScaleUpFinishedNotify ( )
{
	static UFunction* pFnScaleUpFinishedNotify = NULL;

	if ( ! pFnScaleUpFinishedNotify )
		pFnScaleUpFinishedNotify = (UFunction*) UObject::GObjObjects()->Data[ 213764 ];

	ATGMechaProj_BulletTracer_execScaleUpFinishedNotify_Parms ScaleUpFinishedNotify_Parms;

	this->ProcessEvent ( pFnScaleUpFinishedNotify, &ScaleUpFinishedNotify_Parms, NULL );
};

// Function MechaGame.TGMechaProj_BulletTracer.ScaleDownFinishedNotify
// [0x00020102] 
// Parameters infos:

void ATGMechaProj_BulletTracer::ScaleDownFinishedNotify ( )
{
	static UFunction* pFnScaleDownFinishedNotify = NULL;

	if ( ! pFnScaleDownFinishedNotify )
		pFnScaleDownFinishedNotify = (UFunction*) UObject::GObjObjects()->Data[ 213763 ];

	ATGMechaProj_BulletTracer_execScaleDownFinishedNotify_Parms ScaleDownFinishedNotify_Parms;

	this->ProcessEvent ( pFnScaleDownFinishedNotify, &ScaleDownFinishedNotify_Parms, NULL );
};

// Function MechaGame.TGMechaProj_BulletTracer.KillProjectile
// [0x00020102] 
// Parameters infos:

void ATGMechaProj_BulletTracer::KillProjectile ( )
{
	static UFunction* pFnKillProjectile = NULL;

	if ( ! pFnKillProjectile )
		pFnKillProjectile = (UFunction*) UObject::GObjObjects()->Data[ 213762 ];

	ATGMechaProj_BulletTracer_execKillProjectile_Parms KillProjectile_Parms;

	this->ProcessEvent ( pFnKillProjectile, &KillProjectile_Parms, NULL );
};

// Function MechaGame.TGMechaProj_BulletTracer.Tick
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGMechaProj_BulletTracer::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 213759 ];

	ATGMechaProj_BulletTracer_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function MechaGame.TGMechaProj_BulletTracer.WakeProjectile
// [0x00020102] 
// Parameters infos:

void ATGMechaProj_BulletTracer::WakeProjectile ( )
{
	static UFunction* pFnWakeProjectile = NULL;

	if ( ! pFnWakeProjectile )
		pFnWakeProjectile = (UFunction*) UObject::GObjObjects()->Data[ 213758 ];

	ATGMechaProj_BulletTracer_execWakeProjectile_Parms WakeProjectile_Parms;

	this->ProcessEvent ( pFnWakeProjectile, &WakeProjectile_Parms, NULL );
};

// Function MechaGame.TGMechaProj_BulletTracer.Reset
// [0x00020002] 
// Parameters infos:

void ATGMechaProj_BulletTracer::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 213757 ];

	ATGMechaProj_BulletTracer_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function MechaGame.TGMechaProj_BulletTracer.Recycle
// [0x00020002] 
// Parameters infos:

void ATGMechaProj_BulletTracer::Recycle ( )
{
	static UFunction* pFnRecycle = NULL;

	if ( ! pFnRecycle )
		pFnRecycle = (UFunction*) UObject::GObjObjects()->Data[ 213756 ];

	ATGMechaProj_BulletTracer_execRecycle_Parms Recycle_Parms;

	this->ProcessEvent ( pFnRecycle, &Recycle_Parms, NULL );
};

// Function MechaGame.TGMechaProj_BulletTracer.InitTracer
// [0x00820002] 
// Parameters infos:
// struct FVector                 Start                          ( CPF_Parm )
// struct FVector                 End                            ( CPF_Parm )

void ATGMechaProj_BulletTracer::InitTracer ( struct FVector Start, struct FVector End )
{
	static UFunction* pFnInitTracer = NULL;

	if ( ! pFnInitTracer )
		pFnInitTracer = (UFunction*) UObject::GObjObjects()->Data[ 213750 ];

	ATGMechaProj_BulletTracer_execInitTracer_Parms InitTracer_Parms;
	memcpy ( &InitTracer_Parms.Start, &Start, 0xC );
	memcpy ( &InitTracer_Parms.End, &End, 0xC );

	this->ProcessEvent ( pFnInitTracer, &InitTracer_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FlameBeam.HurtBeam
// [0x00820102] 
// Parameters infos:
// float                          BaseDamage                     ( CPF_Parm )
// struct FVector                 CylinderEndPt1                 ( CPF_Parm )
// struct FVector                 CylinderEndPt2                 ( CPF_Parm )
// float                          CylinderRadius                 ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void ATGMechaProj_FlameBeam::HurtBeam ( float BaseDamage, struct FVector CylinderEndPt1, struct FVector CylinderEndPt2, float CylinderRadius, class UClass* DamageType )
{
	static UFunction* pFnHurtBeam = NULL;

	if ( ! pFnHurtBeam )
		pFnHurtBeam = (UFunction*) UObject::GObjObjects()->Data[ 213912 ];

	ATGMechaProj_FlameBeam_execHurtBeam_Parms HurtBeam_Parms;
	HurtBeam_Parms.BaseDamage = BaseDamage;
	memcpy ( &HurtBeam_Parms.CylinderEndPt1, &CylinderEndPt1, 0xC );
	memcpy ( &HurtBeam_Parms.CylinderEndPt2, &CylinderEndPt2, 0xC );
	HurtBeam_Parms.CylinderRadius = CylinderRadius;
	HurtBeam_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnHurtBeam, &HurtBeam_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FlameBeam.IsWarmingUp
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaProj_FlameBeam::IsWarmingUp ( )
{
	static UFunction* pFnIsWarmingUp = NULL;

	if ( ! pFnIsWarmingUp )
		pFnIsWarmingUp = (UFunction*) UObject::GObjObjects()->Data[ 213910 ];

	ATGMechaProj_FlameBeam_execIsWarmingUp_Parms IsWarmingUp_Parms;

	this->ProcessEvent ( pFnIsWarmingUp, &IsWarmingUp_Parms, NULL );

	return IsWarmingUp_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProj_FlameBeam.Destroyed
// [0x00020102] 
// Parameters infos:

void ATGMechaProj_FlameBeam::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 213909 ];

	ATGMechaProj_FlameBeam_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FlameBeam.DoHODFireEffects
// [0x00020102] 
// Parameters infos:

void ATGMechaProj_FlameBeam::DoHODFireEffects ( )
{
	static UFunction* pFnDoHODFireEffects = NULL;

	if ( ! pFnDoHODFireEffects )
		pFnDoHODFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 213908 ];

	ATGMechaProj_FlameBeam_execDoHODFireEffects_Parms DoHODFireEffects_Parms;

	this->ProcessEvent ( pFnDoHODFireEffects, &DoHODFireEffects_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FlameBeam.NotifyWarmupFinished
// [0x00020102] 
// Parameters infos:

void ATGMechaProj_FlameBeam::NotifyWarmupFinished ( )
{
	static UFunction* pFnNotifyWarmupFinished = NULL;

	if ( ! pFnNotifyWarmupFinished )
		pFnNotifyWarmupFinished = (UFunction*) UObject::GObjObjects()->Data[ 213906 ];

	ATGMechaProj_FlameBeam_execNotifyWarmupFinished_Parms NotifyWarmupFinished_Parms;

	this->ProcessEvent ( pFnNotifyWarmupFinished, &NotifyWarmupFinished_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FlameBeam.IsReadyToFire
// [0x00080102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaProj_FlameBeam::IsReadyToFire ( )
{
	static UFunction* pFnIsReadyToFire = NULL;

	if ( ! pFnIsReadyToFire )
		pFnIsReadyToFire = (UFunction*) UObject::GObjObjects()->Data[ 213904 ];

	ATGMechaProj_FlameBeam_execIsReadyToFire_Parms IsReadyToFire_Parms;

	this->ProcessEvent ( pFnIsReadyToFire, &IsReadyToFire_Parms, NULL );

	return IsReadyToFire_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProj_FlameBeam.DoInitialExplosion
// [0x00820102] 
// Parameters infos:

void ATGMechaProj_FlameBeam::DoInitialExplosion ( )
{
	static UFunction* pFnDoInitialExplosion = NULL;

	if ( ! pFnDoInitialExplosion )
		pFnDoInitialExplosion = (UFunction*) UObject::GObjObjects()->Data[ 213901 ];

	ATGMechaProj_FlameBeam_execDoInitialExplosion_Parms DoInitialExplosion_Parms;

	this->ProcessEvent ( pFnDoInitialExplosion, &DoInitialExplosion_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FlameBeam.Fire
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaProj_FlameBeam::Fire ( )
{
	static UFunction* pFnFire = NULL;

	if ( ! pFnFire )
		pFnFire = (UFunction*) UObject::GObjObjects()->Data[ 213899 ];

	ATGMechaProj_FlameBeam_execFire_Parms Fire_Parms;

	this->ProcessEvent ( pFnFire, &Fire_Parms, NULL );

	return Fire_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProj_FlameBeam.DoHODCooldownEffects
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGMechaProj_FlameBeam::DoHODCooldownEffects ( )
{
	static UFunction* pFnDoHODCooldownEffects = NULL;

	if ( ! pFnDoHODCooldownEffects )
		pFnDoHODCooldownEffects = (UFunction*) UObject::GObjObjects()->Data[ 213897 ];

	ATGMechaProj_FlameBeam_execDoHODCooldownEffects_Parms DoHODCooldownEffects_Parms;

	this->ProcessEvent ( pFnDoHODCooldownEffects, &DoHODCooldownEffects_Parms, NULL );

	return DoHODCooldownEffects_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProj_FlameBeam.NotifyFireFinished
// [0x00020102] 
// Parameters infos:

void ATGMechaProj_FlameBeam::NotifyFireFinished ( )
{
	static UFunction* pFnNotifyFireFinished = NULL;

	if ( ! pFnNotifyFireFinished )
		pFnNotifyFireFinished = (UFunction*) UObject::GObjObjects()->Data[ 213895 ];

	ATGMechaProj_FlameBeam_execNotifyFireFinished_Parms NotifyFireFinished_Parms;

	this->ProcessEvent ( pFnNotifyFireFinished, &NotifyFireFinished_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FlameBeam.BeginWarmup
// [0x00824102] 
// Parameters infos:
// struct FVector                 TargetLoc                      ( CPF_Parm )
// unsigned long                  bShouldAutoFire                ( CPF_OptionalParm | CPF_Parm )

void ATGMechaProj_FlameBeam::BeginWarmup ( struct FVector TargetLoc, unsigned long bShouldAutoFire )
{
	static UFunction* pFnBeginWarmup = NULL;

	if ( ! pFnBeginWarmup )
		pFnBeginWarmup = (UFunction*) UObject::GObjObjects()->Data[ 213890 ];

	ATGMechaProj_FlameBeam_execBeginWarmup_Parms BeginWarmup_Parms;
	memcpy ( &BeginWarmup_Parms.TargetLoc, &TargetLoc, 0xC );
	BeginWarmup_Parms.bShouldAutoFire = bShouldAutoFire;

	this->ProcessEvent ( pFnBeginWarmup, &BeginWarmup_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FlameBeam.DoHODWarmupEffects
// [0x00020102] 
// Parameters infos:

void ATGMechaProj_FlameBeam::DoHODWarmupEffects ( )
{
	static UFunction* pFnDoHODWarmupEffects = NULL;

	if ( ! pFnDoHODWarmupEffects )
		pFnDoHODWarmupEffects = (UFunction*) UObject::GObjObjects()->Data[ 213888 ];

	ATGMechaProj_FlameBeam_execDoHODWarmupEffects_Parms DoHODWarmupEffects_Parms;

	this->ProcessEvent ( pFnDoHODWarmupEffects, &DoHODWarmupEffects_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FlameBeam.SpawnTendrilBeam
// [0x00880102] 
// Parameters infos:
// int                            BeamIdx                        ( CPF_Parm )

void ATGMechaProj_FlameBeam::SpawnTendrilBeam ( int BeamIdx )
{
	static UFunction* pFnSpawnTendrilBeam = NULL;

	if ( ! pFnSpawnTendrilBeam )
		pFnSpawnTendrilBeam = (UFunction*) UObject::GObjObjects()->Data[ 213885 ];

	ATGMechaProj_FlameBeam_execSpawnTendrilBeam_Parms SpawnTendrilBeam_Parms;
	SpawnTendrilBeam_Parms.BeamIdx = BeamIdx;

	this->ProcessEvent ( pFnSpawnTendrilBeam, &SpawnTendrilBeam_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FlameBeam.ActivateTendrilBeam
// [0x00080102] 
// Parameters infos:
// int                            BeamIdx                        ( CPF_Parm )

void ATGMechaProj_FlameBeam::ActivateTendrilBeam ( int BeamIdx )
{
	static UFunction* pFnActivateTendrilBeam = NULL;

	if ( ! pFnActivateTendrilBeam )
		pFnActivateTendrilBeam = (UFunction*) UObject::GObjObjects()->Data[ 213883 ];

	ATGMechaProj_FlameBeam_execActivateTendrilBeam_Parms ActivateTendrilBeam_Parms;
	ActivateTendrilBeam_Parms.BeamIdx = BeamIdx;

	this->ProcessEvent ( pFnActivateTendrilBeam, &ActivateTendrilBeam_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FlameBeam.DestroyTendrilBeams
// [0x00020102] 
// Parameters infos:

void ATGMechaProj_FlameBeam::DestroyTendrilBeams ( )
{
	static UFunction* pFnDestroyTendrilBeams = NULL;

	if ( ! pFnDestroyTendrilBeams )
		pFnDestroyTendrilBeams = (UFunction*) UObject::GObjObjects()->Data[ 213881 ];

	ATGMechaProj_FlameBeam_execDestroyTendrilBeams_Parms DestroyTendrilBeams_Parms;

	this->ProcessEvent ( pFnDestroyTendrilBeams, &DestroyTendrilBeams_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FlameBeam.NotifyPreWarmupFinished
// [0x00020102] 
// Parameters infos:

void ATGMechaProj_FlameBeam::NotifyPreWarmupFinished ( )
{
	static UFunction* pFnNotifyPreWarmupFinished = NULL;

	if ( ! pFnNotifyPreWarmupFinished )
		pFnNotifyPreWarmupFinished = (UFunction*) UObject::GObjObjects()->Data[ 213880 ];

	ATGMechaProj_FlameBeam_execNotifyPreWarmupFinished_Parms NotifyPreWarmupFinished_Parms;

	this->ProcessEvent ( pFnNotifyPreWarmupFinished, &NotifyPreWarmupFinished_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FlameBeam.DoNearbyActorEffects
// [0x00020102] 
// Parameters infos:

void ATGMechaProj_FlameBeam::DoNearbyActorEffects ( )
{
	static UFunction* pFnDoNearbyActorEffects = NULL;

	if ( ! pFnDoNearbyActorEffects )
		pFnDoNearbyActorEffects = (UFunction*) UObject::GObjObjects()->Data[ 213877 ];

	ATGMechaProj_FlameBeam_execDoNearbyActorEffects_Parms DoNearbyActorEffects_Parms;

	this->ProcessEvent ( pFnDoNearbyActorEffects, &DoNearbyActorEffects_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FlameBeam.Tick
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGMechaProj_FlameBeam::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 213860 ];

	ATGMechaProj_FlameBeam_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FlameBeam.TimeSince
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Time                           ( CPF_Parm )

float ATGMechaProj_FlameBeam::TimeSince ( float Time )
{
	static UFunction* pFnTimeSince = NULL;

	if ( ! pFnTimeSince )
		pFnTimeSince = (UFunction*) UObject::GObjObjects()->Data[ 213857 ];

	ATGMechaProj_FlameBeam_execTimeSince_Parms TimeSince_Parms;
	TimeSince_Parms.Time = Time;

	this->ProcessEvent ( pFnTimeSince, &TimeSince_Parms, NULL );

	return TimeSince_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProj_FlameBeam.GetBeamLength
// [0x00080102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ATGMechaProj_FlameBeam::GetBeamLength ( )
{
	static UFunction* pFnGetBeamLength = NULL;

	if ( ! pFnGetBeamLength )
		pFnGetBeamLength = (UFunction*) UObject::GObjObjects()->Data[ 213855 ];

	ATGMechaProj_FlameBeam_execGetBeamLength_Parms GetBeamLength_Parms;

	this->ProcessEvent ( pFnGetBeamLength, &GetBeamLength_Parms, NULL );

	return GetBeamLength_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProj_FlameBeam.GetBeamDirection
// [0x00080102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ATGMechaProj_FlameBeam::GetBeamDirection ( )
{
	static UFunction* pFnGetBeamDirection = NULL;

	if ( ! pFnGetBeamDirection )
		pFnGetBeamDirection = (UFunction*) UObject::GObjObjects()->Data[ 213853 ];

	ATGMechaProj_FlameBeam_execGetBeamDirection_Parms GetBeamDirection_Parms;

	this->ProcessEvent ( pFnGetBeamDirection, &GetBeamDirection_Parms, NULL );

	return GetBeamDirection_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProj_FlameBeam.StickToGround
// [0x00C80102] 
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm | CPF_OutParm )
// class AActor*                  HitActor                       ( CPF_Parm | CPF_OutParm )

void ATGMechaProj_FlameBeam::StickToGround ( struct FVector* HitNormal, class AActor** HitActor )
{
	static UFunction* pFnStickToGround = NULL;

	if ( ! pFnStickToGround )
		pFnStickToGround = (UFunction*) UObject::GObjObjects()->Data[ 213849 ];

	ATGMechaProj_FlameBeam_execStickToGround_Parms StickToGround_Parms;

	this->ProcessEvent ( pFnStickToGround, &StickToGround_Parms, NULL );

	if ( HitNormal )
		memcpy ( HitNormal, &StickToGround_Parms.HitNormal, 0xC );

	if ( HitActor )
		*HitActor = StickToGround_Parms.HitActor;
};

// Function MechaGame.TGMechaProj_FlameBeam.FindGround
// [0x00C80102] 
// Parameters infos:
// struct FVector                 BaseLoc                        ( CPF_Parm )
// float                          TraceDist                      ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm | CPF_OutParm )
// struct FVector                 HitNormal                      ( CPF_Parm | CPF_OutParm )
// class AActor*                  HitActor                       ( CPF_Parm | CPF_OutParm )

void ATGMechaProj_FlameBeam::FindGround ( struct FVector BaseLoc, float TraceDist, struct FVector* HitLocation, struct FVector* HitNormal, class AActor** HitActor )
{
	static UFunction* pFnFindGround = NULL;

	if ( ! pFnFindGround )
		pFnFindGround = (UFunction*) UObject::GObjObjects()->Data[ 213837 ];

	ATGMechaProj_FlameBeam_execFindGround_Parms FindGround_Parms;
	memcpy ( &FindGround_Parms.BaseLoc, &BaseLoc, 0xC );
	FindGround_Parms.TraceDist = TraceDist;

	this->ProcessEvent ( pFnFindGround, &FindGround_Parms, NULL );

	if ( HitLocation )
		memcpy ( HitLocation, &FindGround_Parms.HitLocation, 0xC );

	if ( HitNormal )
		memcpy ( HitNormal, &FindGround_Parms.HitNormal, 0xC );

	if ( HitActor )
		*HitActor = FindGround_Parms.HitActor;
};

// Function MechaGame.TGMechaProj_FlameBeam.Init
// [0x00020102] 
// Parameters infos:
// class APawn*                   ShotInstigator                 ( CPF_Parm )

void ATGMechaProj_FlameBeam::Init ( class APawn* ShotInstigator )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 213835 ];

	ATGMechaProj_FlameBeam_execInit_Parms Init_Parms;
	Init_Parms.ShotInstigator = ShotInstigator;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FlameBeam.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaProj_FlameBeam::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 213834 ];

	ATGMechaProj_FlameBeam_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FlameBeam.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGMechaProj_FlameBeam::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 213832 ];

	ATGMechaProj_FlameBeam_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Flame.ChangeVisibility
// [0x00020102] 
// Parameters infos:
// unsigned long                  bIsVisible                     ( CPF_Parm )

void ATGMechaWeap_Flame::ChangeVisibility ( unsigned long bIsVisible )
{
	static UFunction* pFnChangeVisibility = NULL;

	if ( ! pFnChangeVisibility )
		pFnChangeVisibility = (UFunction*) UObject::GObjObjects()->Data[ 214783 ];

	ATGMechaWeap_Flame_execChangeVisibility_Parms ChangeVisibility_Parms;
	ChangeVisibility_Parms.bIsVisible = bIsVisible;

	this->ProcessEvent ( pFnChangeVisibility, &ChangeVisibility_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Flame.SetLockPawnRotation
// [0x00020100] 
// Parameters infos:
// unsigned long                  bLock                          ( CPF_Parm )

void ATGMechaWeap_Flame::SetLockPawnRotation ( unsigned long bLock )
{
	static UFunction* pFnSetLockPawnRotation = NULL;

	if ( ! pFnSetLockPawnRotation )
		pFnSetLockPawnRotation = (UFunction*) UObject::GObjObjects()->Data[ 214781 ];

	ATGMechaWeap_Flame_execSetLockPawnRotation_Parms SetLockPawnRotation_Parms;
	SetLockPawnRotation_Parms.bLock = bLock;

	this->ProcessEvent ( pFnSetLockPawnRotation, &SetLockPawnRotation_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Flame.SetMovementLock
// [0x00020100] 
// Parameters infos:
// unsigned long                  bEnable                        ( CPF_Parm )

void ATGMechaWeap_Flame::SetMovementLock ( unsigned long bEnable )
{
	static UFunction* pFnSetMovementLock = NULL;

	if ( ! pFnSetMovementLock )
		pFnSetMovementLock = (UFunction*) UObject::GObjObjects()->Data[ 214779 ];

	ATGMechaWeap_Flame_execSetMovementLock_Parms SetMovementLock_Parms;
	SetMovementLock_Parms.bEnable = bEnable;

	this->ProcessEvent ( pFnSetMovementLock, &SetMovementLock_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Flame.KillLocationPS
// [0x00024102] 
// Parameters infos:
// unsigned long                  bKill                          ( CPF_OptionalParm | CPF_Parm )

void ATGMechaWeap_Flame::KillLocationPS ( unsigned long bKill )
{
	static UFunction* pFnKillLocationPS = NULL;

	if ( ! pFnKillLocationPS )
		pFnKillLocationPS = (UFunction*) UObject::GObjObjects()->Data[ 214774 ];

	ATGMechaWeap_Flame_execKillLocationPS_Parms KillLocationPS_Parms;
	KillLocationPS_Parms.bKill = bKill;

	this->ProcessEvent ( pFnKillLocationPS, &KillLocationPS_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Flame.ActivateFireAtSpotPS
// [0x00020102] 
// Parameters infos:
// unsigned long                  bCanFire                       ( CPF_Parm )
// unsigned long                  bLock                          ( CPF_Parm )
// class AActor*                  AimActor                       ( CPF_Parm )
// struct FVector                 AimSpot                        ( CPF_Parm )
// struct FVector                 AimSpotNormal                  ( CPF_Parm )
// struct FVector                 FireAtSpot                     ( CPF_Parm )
// struct FVector                 FireAtSpotNormal               ( CPF_Parm )

void ATGMechaWeap_Flame::ActivateFireAtSpotPS ( unsigned long bCanFire, unsigned long bLock, class AActor* AimActor, struct FVector AimSpot, struct FVector AimSpotNormal, struct FVector FireAtSpot, struct FVector FireAtSpotNormal )
{
	static UFunction* pFnActivateFireAtSpotPS = NULL;

	if ( ! pFnActivateFireAtSpotPS )
		pFnActivateFireAtSpotPS = (UFunction*) UObject::GObjObjects()->Data[ 214766 ];

	ATGMechaWeap_Flame_execActivateFireAtSpotPS_Parms ActivateFireAtSpotPS_Parms;
	ActivateFireAtSpotPS_Parms.bCanFire = bCanFire;
	ActivateFireAtSpotPS_Parms.bLock = bLock;
	ActivateFireAtSpotPS_Parms.AimActor = AimActor;
	memcpy ( &ActivateFireAtSpotPS_Parms.AimSpot, &AimSpot, 0xC );
	memcpy ( &ActivateFireAtSpotPS_Parms.AimSpotNormal, &AimSpotNormal, 0xC );
	memcpy ( &ActivateFireAtSpotPS_Parms.FireAtSpot, &FireAtSpot, 0xC );
	memcpy ( &ActivateFireAtSpotPS_Parms.FireAtSpotNormal, &FireAtSpotNormal, 0xC );

	this->ProcessEvent ( pFnActivateFireAtSpotPS, &ActivateFireAtSpotPS_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Flame.DrawWeaponCrosshair
// [0x00820102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ATGMechaWeap_Flame::DrawWeaponCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshair = NULL;

	if ( ! pFnDrawWeaponCrosshair )
		pFnDrawWeaponCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 214755 ];

	ATGMechaWeap_Flame_execDrawWeaponCrosshair_Parms DrawWeaponCrosshair_Parms;
	DrawWeaponCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshair, &DrawWeaponCrosshair_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Flame.TestCanFire
// [0x00C20102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  AimActor                       ( CPF_Parm | CPF_OutParm )
// struct FVector                 AimSpot                        ( CPF_Parm | CPF_OutParm )
// struct FVector                 AimNormal                      ( CPF_Parm | CPF_OutParm )
// struct FVector                 FireSpot                       ( CPF_Parm | CPF_OutParm )
// struct FVector                 FireSpotNormal                 ( CPF_Parm | CPF_OutParm )

bool ATGMechaWeap_Flame::TestCanFire ( class AActor** AimActor, struct FVector* AimSpot, struct FVector* AimNormal, struct FVector* FireSpot, struct FVector* FireSpotNormal )
{
	static UFunction* pFnTestCanFire = NULL;

	if ( ! pFnTestCanFire )
		pFnTestCanFire = (UFunction*) UObject::GObjObjects()->Data[ 214739 ];

	ATGMechaWeap_Flame_execTestCanFire_Parms TestCanFire_Parms;

	this->ProcessEvent ( pFnTestCanFire, &TestCanFire_Parms, NULL );

	if ( AimActor )
		*AimActor = TestCanFire_Parms.AimActor;

	if ( AimSpot )
		memcpy ( AimSpot, &TestCanFire_Parms.AimSpot, 0xC );

	if ( AimNormal )
		memcpy ( AimNormal, &TestCanFire_Parms.AimNormal, 0xC );

	if ( FireSpot )
		memcpy ( FireSpot, &TestCanFire_Parms.FireSpot, 0xC );

	if ( FireSpotNormal )
		memcpy ( FireSpotNormal, &TestCanFire_Parms.FireSpotNormal, 0xC );

	return TestCanFire_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_Flame.CustomFire
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_Flame::CustomFire ( )
{
	static UFunction* pFnCustomFire = NULL;

	if ( ! pFnCustomFire )
		pFnCustomFire = (UFunction*) UObject::GObjObjects()->Data[ 214737 ];

	ATGMechaWeap_Flame_execCustomFire_Parms CustomFire_Parms;

	this->ProcessEvent ( pFnCustomFire, &CustomFire_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Flame.PlayFireEffects
// [0x00024100] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void ATGMechaWeap_Flame::PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation )
{
	static UFunction* pFnPlayFireEffects = NULL;

	if ( ! pFnPlayFireEffects )
		pFnPlayFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 214734 ];

	ATGMechaWeap_Flame_execPlayFireEffects_Parms PlayFireEffects_Parms;
	PlayFireEffects_Parms.FireModeNum = FireModeNum;
	memcpy ( &PlayFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayFireEffects, &PlayFireEffects_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Flame.NotifyBeamFireFinished
// [0x00020100] 
// Parameters infos:

void ATGMechaWeap_Flame::NotifyBeamFireFinished ( )
{
	static UFunction* pFnNotifyBeamFireFinished = NULL;

	if ( ! pFnNotifyBeamFireFinished )
		pFnNotifyBeamFireFinished = (UFunction*) UObject::GObjObjects()->Data[ 214729 ];

	ATGMechaWeap_Flame_execNotifyBeamFireFinished_Parms NotifyBeamFireFinished_Parms;

	this->ProcessEvent ( pFnNotifyBeamFireFinished, &NotifyBeamFireFinished_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Flame.ClientPlantBeam
// [0x010201C2] 
// Parameters infos:

void ATGMechaWeap_Flame::ClientPlantBeam ( )
{
	static UFunction* pFnClientPlantBeam = NULL;

	if ( ! pFnClientPlantBeam )
		pFnClientPlantBeam = (UFunction*) UObject::GObjObjects()->Data[ 214728 ];

	ATGMechaWeap_Flame_execClientPlantBeam_Parms ClientPlantBeam_Parms;

	this->ProcessEvent ( pFnClientPlantBeam, &ClientPlantBeam_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Flame.PlayBombPlantEffect
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_Flame::PlayBombPlantEffect ( )
{
	static UFunction* pFnPlayBombPlantEffect = NULL;

	if ( ! pFnPlayBombPlantEffect )
		pFnPlayBombPlantEffect = (UFunction*) UObject::GObjObjects()->Data[ 214727 ];

	ATGMechaWeap_Flame_execPlayBombPlantEffect_Parms PlayBombPlantEffect_Parms;

	this->ProcessEvent ( pFnPlayBombPlantEffect, &PlayBombPlantEffect_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Flame.PlayStartPlantingEffect
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_Flame::PlayStartPlantingEffect ( )
{
	static UFunction* pFnPlayStartPlantingEffect = NULL;

	if ( ! pFnPlayStartPlantingEffect )
		pFnPlayStartPlantingEffect = (UFunction*) UObject::GObjObjects()->Data[ 214726 ];

	ATGMechaWeap_Flame_execPlayStartPlantingEffect_Parms PlayStartPlantingEffect_Parms;

	this->ProcessEvent ( pFnPlayStartPlantingEffect, &PlayStartPlantingEffect_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Flame.ReBombCheckTimer
// [0x00020100] 
// Parameters infos:

void ATGMechaWeap_Flame::ReBombCheckTimer ( )
{
	static UFunction* pFnReBombCheckTimer = NULL;

	if ( ! pFnReBombCheckTimer )
		pFnReBombCheckTimer = (UFunction*) UObject::GObjObjects()->Data[ 214701 ];

	ATGMechaWeap_Flame_execReBombCheckTimer_Parms ReBombCheckTimer_Parms;

	this->ProcessEvent ( pFnReBombCheckTimer, &ReBombCheckTimer_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Flame.TimePlanting
// [0x00020102] 
// Parameters infos:

void ATGMechaWeap_Flame::TimePlanting ( )
{
	static UFunction* pFnTimePlanting = NULL;

	if ( ! pFnTimePlanting )
		pFnTimePlanting = (UFunction*) UObject::GObjObjects()->Data[ 214700 ];

	ATGMechaWeap_Flame_execTimePlanting_Parms TimePlanting_Parms;

	this->ProcessEvent ( pFnTimePlanting, &TimePlanting_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Flame.EndPlanting
// [0x00020100] 
// Parameters infos:

void ATGMechaWeap_Flame::EndPlanting ( )
{
	static UFunction* pFnEndPlanting = NULL;

	if ( ! pFnEndPlanting )
		pFnEndPlanting = (UFunction*) UObject::GObjObjects()->Data[ 214699 ];

	ATGMechaWeap_Flame_execEndPlanting_Parms EndPlanting_Parms;

	this->ProcessEvent ( pFnEndPlanting, &EndPlanting_Parms, NULL );
};

// Function MechaGame.TGMechaWeap_Flame.IsPlanting
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaWeap_Flame::IsPlanting ( )
{
	static UFunction* pFnIsPlanting = NULL;

	if ( ! pFnIsPlanting )
		pFnIsPlanting = (UFunction*) UObject::GObjObjects()->Data[ 214697 ];

	ATGMechaWeap_Flame_execIsPlanting_Parms IsPlanting_Parms;

	this->ProcessEvent ( pFnIsPlanting, &IsPlanting_Parms, NULL );

	return IsPlanting_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeap_Flame.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaWeap_Flame::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 214693 ];

	ATGMechaWeap_Flame_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FrostMissile.ProjectileHurtRadius
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGMechaProj_FrostMissile::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 213930 ];

	ATGMechaProj_FrostMissile_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProj_Grenade.PhysicsVolumeChange
// [0x00020102] 
// Parameters infos:
// class APhysicsVolume*          NewVolume                      ( CPF_Parm )

void ATGMechaProj_Grenade::PhysicsVolumeChange ( class APhysicsVolume* NewVolume )
{
	static UFunction* pFnPhysicsVolumeChange = NULL;

	if ( ! pFnPhysicsVolumeChange )
		pFnPhysicsVolumeChange = (UFunction*) UObject::GObjObjects()->Data[ 213949 ];

	ATGMechaProj_Grenade_execPhysicsVolumeChange_Parms PhysicsVolumeChange_Parms;
	PhysicsVolumeChange_Parms.NewVolume = NewVolume;

	this->ProcessEvent ( pFnPhysicsVolumeChange, &PhysicsVolumeChange_Parms, NULL );
};

// Function MechaGame.TGMechaProj_Grenade.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGMechaProj_Grenade::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 213945 ];

	ATGMechaProj_Grenade_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function MechaGame.TGMechaProj_Grenade.Timer
// [0x00020102] 
// Parameters infos:

void ATGMechaProj_Grenade::Timer ( )
{
	static UFunction* pFnTimer = NULL;

	if ( ! pFnTimer )
		pFnTimer = (UFunction*) UObject::GObjObjects()->Data[ 213944 ];

	ATGMechaProj_Grenade_execTimer_Parms Timer_Parms;

	this->ProcessEvent ( pFnTimer, &Timer_Parms, NULL );
};

// Function MechaGame.TGMechaProj_Grenade.Init
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )

void ATGMechaProj_Grenade::Init ( struct FVector Direction )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 213942 ];

	ATGMechaProj_Grenade_execInit_Parms Init_Parms;
	memcpy ( &Init_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function MechaGame.TGMechaProj_Grenade.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGMechaProj_Grenade::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 213941 ];

	ATGMechaProj_Grenade_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FrozenShell.ProjectileHurtRadius
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGMechaProj_FrozenShell::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 213970 ];

	ATGMechaProj_FrozenShell_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProj_FrozenShell.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGMechaProj_FrozenShell::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 213966 ];

	ATGMechaProj_FrozenShell_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FrozenShell.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ATGMechaProj_FrozenShell::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 213962 ];

	ATGMechaProj_FrozenShell_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FrozenShell.Init
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )

void ATGMechaProj_FrozenShell::Init ( struct FVector Direction )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 213960 ];

	ATGMechaProj_FrozenShell_execInit_Parms Init_Parms;
	memcpy ( &Init_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function MechaGame.TGMechaProj_FrozenShell.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATGMechaProj_FrozenShell::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 213959 ];

	ATGMechaProj_FrozenShell_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaProj_ShockShell.ProjectileHurtRadius
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGMechaProj_ShockShell::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 214003 ];

	ATGMechaProj_ShockShell_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProj_ShockShell.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGMechaProj_ShockShell::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 213998 ];

	ATGMechaProj_ShockShell_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function MechaGame.TGMechaProj_ShockShell.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGMechaProj_ShockShell::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 213996 ];

	ATGMechaProj_ShockShell_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function MechaGame.TGMechaProj_Thunder.ProjectileHurtRadius
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ATGMechaProj_Thunder::ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
{
	static UFunction* pFnProjectileHurtRadius = NULL;

	if ( ! pFnProjectileHurtRadius )
		pFnProjectileHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 214024 ];

	ATGMechaProj_Thunder_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
	memcpy ( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	memcpy ( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

	return ProjectileHurtRadius_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProj_Thunder.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ATGMechaProj_Thunder::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 214019 ];

	ATGMechaProj_Thunder_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function MechaGame.TGMechaProjWeapAttachment.PlayImpactEffects
// [0x00020100] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGMechaProjWeapAttachment::PlayImpactEffects ( struct FVector HitLocation )
{
	static UFunction* pFnPlayImpactEffects = NULL;

	if ( ! pFnPlayImpactEffects )
		pFnPlayImpactEffects = (UFunction*) UObject::GObjObjects()->Data[ 214255 ];

	ATGMechaProjWeapAttachment_execPlayImpactEffects_Parms PlayImpactEffects_Parms;
	memcpy ( &PlayImpactEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayImpactEffects, &PlayImpactEffects_Parms, NULL );
};

// Function MechaGame.TGMechaProjWeapAttachment.GetAllProjFireInfo
// [0x00820102] 
// Parameters infos:
// TArray< struct FMechaAeroProjFireInfo > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FMechaAeroProjFireInfo > ATGMechaProjWeapAttachment::GetAllProjFireInfo ( )
{
	static UFunction* pFnGetAllProjFireInfo = NULL;

	if ( ! pFnGetAllProjFireInfo )
		pFnGetAllProjFireInfo = (UFunction*) UObject::GObjObjects()->Data[ 214059 ];

	ATGMechaProjWeapAttachment_execGetAllProjFireInfo_Parms GetAllProjFireInfo_Parms;

	this->ProcessEvent ( pFnGetAllProjFireInfo, &GetAllProjFireInfo_Parms, NULL );

	return GetAllProjFireInfo_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProjWeapAttachment.GetPhysicalFireStartLoc
// [0x00824102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_OptionalParm | CPF_Parm )

struct FVector ATGMechaProjWeapAttachment::GetPhysicalFireStartLoc ( int Index )
{
	static UFunction* pFnGetPhysicalFireStartLoc = NULL;

	if ( ! pFnGetPhysicalFireStartLoc )
		pFnGetPhysicalFireStartLoc = (UFunction*) UObject::GObjObjects()->Data[ 214242 ];

	ATGMechaProjWeapAttachment_execGetPhysicalFireStartLoc_Parms GetPhysicalFireStartLoc_Parms;
	GetPhysicalFireStartLoc_Parms.Index = Index;

	this->ProcessEvent ( pFnGetPhysicalFireStartLoc, &GetPhysicalFireStartLoc_Parms, NULL );

	return GetPhysicalFireStartLoc_Parms.ReturnValue;
};

// Function MechaGame.TGMechaProjWeapAttachment.PlayMechaProjWeaponFireAnim
// [0x00020102] 
// Parameters infos:
// struct FReplicatedEffectsInfo  InProjWeapEffectsInfo          ( CPF_Parm )

void ATGMechaProjWeapAttachment::PlayMechaProjWeaponFireAnim ( struct FReplicatedEffectsInfo InProjWeapEffectsInfo )
{
	static UFunction* pFnPlayMechaProjWeaponFireAnim = NULL;

	if ( ! pFnPlayMechaProjWeaponFireAnim )
		pFnPlayMechaProjWeaponFireAnim = (UFunction*) UObject::GObjObjects()->Data[ 214240 ];

	ATGMechaProjWeapAttachment_execPlayMechaProjWeaponFireAnim_Parms PlayMechaProjWeaponFireAnim_Parms;
	memcpy ( &PlayMechaProjWeaponFireAnim_Parms.InProjWeapEffectsInfo, &InProjWeapEffectsInfo, 0x10 );

	this->ProcessEvent ( pFnPlayMechaProjWeaponFireAnim, &PlayMechaProjWeaponFireAnim_Parms, NULL );
};

// Function MechaGame.TGMechaProjWeapAttachment.ProjWeapCauseMuzzleFlash
// [0x00020102] 
// Parameters infos:
// struct FReplicatedEffectsInfo  RepEffectsInfo                 ( CPF_Parm )

void ATGMechaProjWeapAttachment::ProjWeapCauseMuzzleFlash ( struct FReplicatedEffectsInfo RepEffectsInfo )
{
	static UFunction* pFnProjWeapCauseMuzzleFlash = NULL;

	if ( ! pFnProjWeapCauseMuzzleFlash )
		pFnProjWeapCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 214236 ];

	ATGMechaProjWeapAttachment_execProjWeapCauseMuzzleFlash_Parms ProjWeapCauseMuzzleFlash_Parms;
	memcpy ( &ProjWeapCauseMuzzleFlash_Parms.RepEffectsInfo, &RepEffectsInfo, 0x10 );

	this->ProcessEvent ( pFnProjWeapCauseMuzzleFlash, &ProjWeapCauseMuzzleFlash_Parms, NULL );
};

// Function MechaGame.TGMechaProjWeapAttachment.ThirdPersonProjFireEffects
// [0x00020102] 
// Parameters infos:
// struct FReplicatedEffectsInfo  InProjWeapEffectsInfo          ( CPF_Parm )

void ATGMechaProjWeapAttachment::ThirdPersonProjFireEffects ( struct FReplicatedEffectsInfo InProjWeapEffectsInfo )
{
	static UFunction* pFnThirdPersonProjFireEffects = NULL;

	if ( ! pFnThirdPersonProjFireEffects )
		pFnThirdPersonProjFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 214234 ];

	ATGMechaProjWeapAttachment_execThirdPersonProjFireEffects_Parms ThirdPersonProjFireEffects_Parms;
	memcpy ( &ThirdPersonProjFireEffects_Parms.InProjWeapEffectsInfo, &InProjWeapEffectsInfo, 0x10 );

	this->ProcessEvent ( pFnThirdPersonProjFireEffects, &ThirdPersonProjFireEffects_Parms, NULL );
};

// Function MechaGame.TGMechaProjWeapAttachment.DetachMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGMechaProjWeapAttachment::DetachMuzzleFlash ( )
{
	static UFunction* pFnDetachMuzzleFlash = NULL;

	if ( ! pFnDetachMuzzleFlash )
		pFnDetachMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 214232 ];

	ATGMechaProjWeapAttachment_execDetachMuzzleFlash_Parms DetachMuzzleFlash_Parms;

	this->ProcessEvent ( pFnDetachMuzzleFlash, &DetachMuzzleFlash_Parms, NULL );
};

// Function MechaGame.TGMechaProjWeapAttachment.AttachMuzzleFlash
// [0x00020102] 
// Parameters infos:

void ATGMechaProjWeapAttachment::AttachMuzzleFlash ( )
{
	static UFunction* pFnAttachMuzzleFlash = NULL;

	if ( ! pFnAttachMuzzleFlash )
		pFnAttachMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 214229 ];

	ATGMechaProjWeapAttachment_execAttachMuzzleFlash_Parms AttachMuzzleFlash_Parms;

	this->ProcessEvent ( pFnAttachMuzzleFlash, &AttachMuzzleFlash_Parms, NULL );
};

// Function MechaGame.TGMechaShip.HideAttackEffect
// [0x00020102] 
// Parameters infos:

void ATGMechaShip::HideAttackEffect ( )
{
	static UFunction* pFnHideAttackEffect = NULL;

	if ( ! pFnHideAttackEffect )
		pFnHideAttackEffect = (UFunction*) UObject::GObjObjects()->Data[ 214336 ];

	ATGMechaShip_execHideAttackEffect_Parms HideAttackEffect_Parms;

	this->ProcessEvent ( pFnHideAttackEffect, &HideAttackEffect_Parms, NULL );
};

// Function MechaGame.TGMechaShip.PlayAttackEffect
// [0x00820102] 
// Parameters infos:

void ATGMechaShip::PlayAttackEffect ( )
{
	static UFunction* pFnPlayAttackEffect = NULL;

	if ( ! pFnPlayAttackEffect )
		pFnPlayAttackEffect = (UFunction*) UObject::GObjObjects()->Data[ 214330 ];

	ATGMechaShip_execPlayAttackEffect_Parms PlayAttackEffect_Parms;

	this->ProcessEvent ( pFnPlayAttackEffect, &PlayAttackEffect_Parms, NULL );
};

// Function MechaGame.TGMechaShip.OnAttackNotification
// [0x00020102] 
// Parameters infos:

void ATGMechaShip::OnAttackNotification ( )
{
	static UFunction* pFnOnAttackNotification = NULL;

	if ( ! pFnOnAttackNotification )
		pFnOnAttackNotification = (UFunction*) UObject::GObjObjects()->Data[ 214329 ];

	ATGMechaShip_execOnAttackNotification_Parms OnAttackNotification_Parms;

	this->ProcessEvent ( pFnOnAttackNotification, &OnAttackNotification_Parms, NULL );
};

// Function MechaGame.TGMechaShip.NotifyAttack
// [0x00020002] 
// Parameters infos:

void ATGMechaShip::NotifyAttack ( )
{
	static UFunction* pFnNotifyAttack = NULL;

	if ( ! pFnNotifyAttack )
		pFnNotifyAttack = (UFunction*) UObject::GObjObjects()->Data[ 214328 ];

	ATGMechaShip_execNotifyAttack_Parms NotifyAttack_Parms;

	this->ProcessEvent ( pFnNotifyAttack, &NotifyAttack_Parms, NULL );
};

// Function MechaGame.TGMechaShip.Tick
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGMechaShip::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 214322 ];

	ATGMechaShip_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function MechaGame.TGMechaShip.ScriptGetTeamNum
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char ATGMechaShip::eventScriptGetTeamNum ( )
{
	static UFunction* pFnScriptGetTeamNum = NULL;

	if ( ! pFnScriptGetTeamNum )
		pFnScriptGetTeamNum = (UFunction*) UObject::GObjObjects()->Data[ 214320 ];

	ATGMechaShip_eventScriptGetTeamNum_Parms ScriptGetTeamNum_Parms;

	this->ProcessEvent ( pFnScriptGetTeamNum, &ScriptGetTeamNum_Parms, NULL );

	return ScriptGetTeamNum_Parms.ReturnValue;
};

// Function MechaGame.TGMechaShip.SetAttackTarget
// [0x00020002] 
// Parameters infos:
// unsigned long                  bAttack                        ( CPF_Parm )

void ATGMechaShip::SetAttackTarget ( unsigned long bAttack )
{
	static UFunction* pFnSetAttackTarget = NULL;

	if ( ! pFnSetAttackTarget )
		pFnSetAttackTarget = (UFunction*) UObject::GObjObjects()->Data[ 214318 ];

	ATGMechaShip_execSetAttackTarget_Parms SetAttackTarget_Parms;
	SetAttackTarget_Parms.bAttack = bAttack;

	this->ProcessEvent ( pFnSetAttackTarget, &SetAttackTarget_Parms, NULL );
};

// Function MechaGame.TGMechaShip.SetTarget
// [0x00020002] 
// Parameters infos:
// class AMechaDestructibleItem*  Item                           ( CPF_Parm )

void ATGMechaShip::SetTarget ( class AMechaDestructibleItem* Item )
{
	static UFunction* pFnSetTarget = NULL;

	if ( ! pFnSetTarget )
		pFnSetTarget = (UFunction*) UObject::GObjObjects()->Data[ 214315 ];

	ATGMechaShip_execSetTarget_Parms SetTarget_Parms;
	SetTarget_Parms.Item = Item;

	this->ProcessEvent ( pFnSetTarget, &SetTarget_Parms, NULL );
};

// Function MechaGame.TGMechaShip.UpdateTarget
// [0x00020002] 
// Parameters infos:

void ATGMechaShip::UpdateTarget ( )
{
	static UFunction* pFnUpdateTarget = NULL;

	if ( ! pFnUpdateTarget )
		pFnUpdateTarget = (UFunction*) UObject::GObjObjects()->Data[ 214314 ];

	ATGMechaShip_execUpdateTarget_Parms UpdateTarget_Parms;

	this->ProcessEvent ( pFnUpdateTarget, &UpdateTarget_Parms, NULL );
};

// Function MechaGame.TGMechaShip.GetDamage
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ATGMechaShip::GetDamage ( )
{
	static UFunction* pFnGetDamage = NULL;

	if ( ! pFnGetDamage )
		pFnGetDamage = (UFunction*) UObject::GObjObjects()->Data[ 214309 ];

	ATGMechaShip_execGetDamage_Parms GetDamage_Parms;

	this->ProcessEvent ( pFnGetDamage, &GetDamage_Parms, NULL );

	return GetDamage_Parms.ReturnValue;
};

// Function MechaGame.TGMechaShip.TimerDamage
// [0x00020002] 
// Parameters infos:

void ATGMechaShip::TimerDamage ( )
{
	static UFunction* pFnTimerDamage = NULL;

	if ( ! pFnTimerDamage )
		pFnTimerDamage = (UFunction*) UObject::GObjObjects()->Data[ 214308 ];

	ATGMechaShip_execTimerDamage_Parms TimerDamage_Parms;

	this->ProcessEvent ( pFnTimerDamage, &TimerDamage_Parms, NULL );
};

// Function MechaGame.TGMechaShip.TimerHeal
// [0x00020002] 
// Parameters infos:

void ATGMechaShip::TimerHeal ( )
{
	static UFunction* pFnTimerHeal = NULL;

	if ( ! pFnTimerHeal )
		pFnTimerHeal = (UFunction*) UObject::GObjObjects()->Data[ 214306 ];

	ATGMechaShip_execTimerHeal_Parms TimerHeal_Parms;

	this->ProcessEvent ( pFnTimerHeal, &TimerHeal_Parms, NULL );
};

// Function MechaGame.TGMechaShip.SetMove
// [0x00020002] 
// Parameters infos:
// unsigned long                  bMove                          ( CPF_Parm )

void ATGMechaShip::SetMove ( unsigned long bMove )
{
	static UFunction* pFnSetMove = NULL;

	if ( ! pFnSetMove )
		pFnSetMove = (UFunction*) UObject::GObjObjects()->Data[ 214304 ];

	ATGMechaShip_execSetMove_Parms SetMove_Parms;
	SetMove_Parms.bMove = bMove;

	this->ProcessEvent ( pFnSetMove, &SetMove_Parms, NULL );
};

// Function MechaGame.TGMechaShip.Reset
// [0x00020002] 
// Parameters infos:

void ATGMechaShip::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 214303 ];

	ATGMechaShip_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function MechaGame.TGMechaShip.SetupMovement
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATGMechaShip::SetupMovement ( )
{
	static UFunction* pFnSetupMovement = NULL;

	if ( ! pFnSetupMovement )
		pFnSetupMovement = (UFunction*) UObject::GObjObjects()->Data[ 214299 ];

	ATGMechaShip_execSetupMovement_Parms SetupMovement_Parms;

	this->ProcessEvent ( pFnSetupMovement, &SetupMovement_Parms, NULL );

	return SetupMovement_Parms.ReturnValue;
};

// Function MechaGame.TGMechaShip.Initialize
// [0x00820002] 
// Parameters infos:

void ATGMechaShip::Initialize ( )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 214295 ];

	ATGMechaShip_execInitialize_Parms Initialize_Parms;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};

// Function MechaGame.TGMechaShip.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaShip::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 214294 ];

	ATGMechaShip_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaShip.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGMechaShip::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 214292 ];

	ATGMechaShip_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function MechaGame.TGMechaTeamMatch.CheckEndGame
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerReplicationInfo*  Winner                         ( CPF_Parm )
// struct FString                 Reason                         ( CPF_Parm | CPF_NeedCtorLink )

bool ATGMechaTeamMatch::CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
{
	static UFunction* pFnCheckEndGame = NULL;

	if ( ! pFnCheckEndGame )
		pFnCheckEndGame = (UFunction*) UObject::GObjObjects()->Data[ 214377 ];

	ATGMechaTeamMatch_execCheckEndGame_Parms CheckEndGame_Parms;
	CheckEndGame_Parms.Winner = Winner;
	memcpy ( &CheckEndGame_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCheckEndGame, &CheckEndGame_Parms, NULL );

	return CheckEndGame_Parms.ReturnValue;
};

// Function MechaGame.TGMechaTeamMatch.SpawnDefaultPawnFor
// [0x00020002] 
// Parameters infos:
// class APawn*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             NewPlayer                      ( CPF_Parm )
// class ANavigationPoint*        StartSpot                      ( CPF_Parm )

class APawn* ATGMechaTeamMatch::SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot )
{
	static UFunction* pFnSpawnDefaultPawnFor = NULL;

	if ( ! pFnSpawnDefaultPawnFor )
		pFnSpawnDefaultPawnFor = (UFunction*) UObject::GObjObjects()->Data[ 214373 ];

	ATGMechaTeamMatch_execSpawnDefaultPawnFor_Parms SpawnDefaultPawnFor_Parms;
	SpawnDefaultPawnFor_Parms.NewPlayer = NewPlayer;
	SpawnDefaultPawnFor_Parms.StartSpot = StartSpot;

	this->ProcessEvent ( pFnSpawnDefaultPawnFor, &SpawnDefaultPawnFor_Parms, NULL );

	return SpawnDefaultPawnFor_Parms.ReturnValue;
};

// Function MechaGame.TGMechaTeamMatch.RestartPlayer
// [0x00020002] 
// Parameters infos:
// class AController*             NewPlayer                      ( CPF_Parm )

void ATGMechaTeamMatch::RestartPlayer ( class AController* NewPlayer )
{
	static UFunction* pFnRestartPlayer = NULL;

	if ( ! pFnRestartPlayer )
		pFnRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 214369 ];

	ATGMechaTeamMatch_execRestartPlayer_Parms RestartPlayer_Parms;
	RestartPlayer_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnRestartPlayer, &RestartPlayer_Parms, NULL );
};

// Function MechaGame.TGMechaTeamMatch.AddInventoryFor
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class APawn*                   PlayerPawn                     ( CPF_Parm )

void ATGMechaTeamMatch::eventAddInventoryFor ( class APawn* PlayerPawn )
{
	static UFunction* pFnAddInventoryFor = NULL;

	if ( ! pFnAddInventoryFor )
		pFnAddInventoryFor = (UFunction*) UObject::GObjObjects()->Data[ 214367 ];

	ATGMechaTeamMatch_eventAddInventoryFor_Parms AddInventoryFor_Parms;
	AddInventoryFor_Parms.PlayerPawn = PlayerPawn;

	this->ProcessEvent ( pFnAddInventoryFor, &AddInventoryFor_Parms, NULL );
};

// Function MechaGame.TGMechaTeamMatch.StartMatch
// [0x00020002] 
// Parameters infos:

void ATGMechaTeamMatch::StartMatch ( )
{
	static UFunction* pFnStartMatch = NULL;

	if ( ! pFnStartMatch )
		pFnStartMatch = (UFunction*) UObject::GObjObjects()->Data[ 214365 ];

	ATGMechaTeamMatch_execStartMatch_Parms StartMatch_Parms;

	this->ProcessEvent ( pFnStartMatch, &StartMatch_Parms, NULL );
};

// Function MechaGame.TGMechaTeamMatch.UpdateGameSpecificSettings
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FGameSpecificSettings   Settings                       ( CPF_Parm )

void ATGMechaTeamMatch::eventUpdateGameSpecificSettings ( struct FGameSpecificSettings Settings )
{
	static UFunction* pFnUpdateGameSpecificSettings = NULL;

	if ( ! pFnUpdateGameSpecificSettings )
		pFnUpdateGameSpecificSettings = (UFunction*) UObject::GObjObjects()->Data[ 214363 ];

	ATGMechaTeamMatch_eventUpdateGameSpecificSettings_Parms UpdateGameSpecificSettings_Parms;
	memcpy ( &UpdateGameSpecificSettings_Parms.Settings, &Settings, 0x28 );

	this->ProcessEvent ( pFnUpdateGameSpecificSettings, &UpdateGameSpecificSettings_Parms, NULL );
};

// Function MechaGame.TGMechaTMPlayerController.UseXPSkill
// [0x00020002] 
// Parameters infos:

void ATGMechaTMPlayerController::UseXPSkill ( )
{
	static UFunction* pFnUseXPSkill = NULL;

	if ( ! pFnUseXPSkill )
		pFnUseXPSkill = (UFunction*) UObject::GObjObjects()->Data[ 214422 ];

	ATGMechaTMPlayerController_execUseXPSkill_Parms UseXPSkill_Parms;

	this->ProcessEvent ( pFnUseXPSkill, &UseXPSkill_Parms, NULL );
};

// Function MechaGame.TGMechaTMGameReplicationInfo.ProcessCharacterData
// [0x00024120] 
// Parameters infos:
// class ATGPlayerReplicationInfo* PRI                            ( CPF_Parm )
// unsigned long                  bTeamChange                    ( CPF_OptionalParm | CPF_Parm )

void ATGMechaTMGameReplicationInfo::ProcessCharacterData ( class ATGPlayerReplicationInfo* PRI, unsigned long bTeamChange )
{
	static UFunction* pFnProcessCharacterData = NULL;

	if ( ! pFnProcessCharacterData )
		pFnProcessCharacterData = (UFunction*) UObject::GObjObjects()->Data[ 214391 ];

	ATGMechaTMGameReplicationInfo_execProcessCharacterData_Parms ProcessCharacterData_Parms;
	ProcessCharacterData_Parms.PRI = PRI;
	ProcessCharacterData_Parms.bTeamChange = bTeamChange;

	this->ProcessEvent ( pFnProcessCharacterData, &ProcessCharacterData_Parms, NULL );
};

// Function MechaGame.TGMechaTMGameReplicationInfo.BeginProcessCharacterData
// [0x00024100] 
// Parameters infos:
// class ATGPlayerReplicationInfo* PRI                            ( CPF_Parm )
// unsigned long                  bTeamChange                    ( CPF_OptionalParm | CPF_Parm )

void ATGMechaTMGameReplicationInfo::BeginProcessCharacterData ( class ATGPlayerReplicationInfo* PRI, unsigned long bTeamChange )
{
	static UFunction* pFnBeginProcessCharacterData = NULL;

	if ( ! pFnBeginProcessCharacterData )
		pFnBeginProcessCharacterData = (UFunction*) UObject::GObjObjects()->Data[ 214388 ];

	ATGMechaTMGameReplicationInfo_execBeginProcessCharacterData_Parms BeginProcessCharacterData_Parms;
	BeginProcessCharacterData_Parms.PRI = PRI;
	BeginProcessCharacterData_Parms.bTeamChange = bTeamChange;

	this->ProcessEvent ( pFnBeginProcessCharacterData, &BeginProcessCharacterData_Parms, NULL );
};

// Function MechaGame.TGMechaTMGameReplicationInfo.StartProcessingCharacterData
// [0x00020100] 
// Parameters infos:

void ATGMechaTMGameReplicationInfo::StartProcessingCharacterData ( )
{
	static UFunction* pFnStartProcessingCharacterData = NULL;

	if ( ! pFnStartProcessingCharacterData )
		pFnStartProcessingCharacterData = (UFunction*) UObject::GObjObjects()->Data[ 214387 ];

	ATGMechaTMGameReplicationInfo_execStartProcessingCharacterData_Parms StartProcessingCharacterData_Parms;

	this->ProcessEvent ( pFnStartProcessingCharacterData, &StartProcessingCharacterData_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_Electrowelding.PlayImpactEffects
// [0x00020100] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGMechaWeapAttachment_Electrowelding::PlayImpactEffects ( struct FVector HitLocation )
{
	static UFunction* pFnPlayImpactEffects = NULL;

	if ( ! pFnPlayImpactEffects )
		pFnPlayImpactEffects = (UFunction*) UObject::GObjObjects()->Data[ 215720 ];

	ATGMechaWeapAttachment_Electrowelding_execPlayImpactEffects_Parms PlayImpactEffects_Parms;
	memcpy ( &PlayImpactEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayImpactEffects, &PlayImpactEffects_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_Electrowelding.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGMechaWeapAttachment_Electrowelding::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 215718 ];

	ATGMechaWeapAttachment_Electrowelding_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_Electrowelding.PlayReplicatedEffects
// [0x00020102] 
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGMechaWeapAttachment_Electrowelding::PlayReplicatedEffects ( struct FName VarName )
{
	static UFunction* pFnPlayReplicatedEffects = NULL;

	if ( ! pFnPlayReplicatedEffects )
		pFnPlayReplicatedEffects = (UFunction*) UObject::GObjObjects()->Data[ 215716 ];

	ATGMechaWeapAttachment_Electrowelding_execPlayReplicatedEffects_Parms PlayReplicatedEffects_Parms;
	memcpy ( &PlayReplicatedEffects_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnPlayReplicatedEffects, &PlayReplicatedEffects_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_Electrowelding.SetFixingMechaEffect
// [0x00820102] 
// Parameters infos:

void ATGMechaWeapAttachment_Electrowelding::SetFixingMechaEffect ( )
{
	static UFunction* pFnSetFixingMechaEffect = NULL;

	if ( ! pFnSetFixingMechaEffect )
		pFnSetFixingMechaEffect = (UFunction*) UObject::GObjObjects()->Data[ 215712 ];

	ATGMechaWeapAttachment_Electrowelding_execSetFixingMechaEffect_Parms SetFixingMechaEffect_Parms;

	this->ProcessEvent ( pFnSetFixingMechaEffect, &SetFixingMechaEffect_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_Electrowelding.PlayFixingMechaEffect
// [0x00820102] 
// Parameters infos:

void ATGMechaWeapAttachment_Electrowelding::PlayFixingMechaEffect ( )
{
	static UFunction* pFnPlayFixingMechaEffect = NULL;

	if ( ! pFnPlayFixingMechaEffect )
		pFnPlayFixingMechaEffect = (UFunction*) UObject::GObjObjects()->Data[ 215707 ];

	ATGMechaWeapAttachment_Electrowelding_execPlayFixingMechaEffect_Parms PlayFixingMechaEffect_Parms;

	this->ProcessEvent ( pFnPlayFixingMechaEffect, &PlayFixingMechaEffect_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_Electrowelding.AttachToMecha
// [0x00020102] 
// Parameters infos:
// class ATGRealMechaBase*        AttachOwnerMecha               ( CPF_Parm )

void ATGMechaWeapAttachment_Electrowelding::AttachToMecha ( class ATGRealMechaBase* AttachOwnerMecha )
{
	static UFunction* pFnAttachToMecha = NULL;

	if ( ! pFnAttachToMecha )
		pFnAttachToMecha = (UFunction*) UObject::GObjObjects()->Data[ 215705 ];

	ATGMechaWeapAttachment_Electrowelding_execAttachToMecha_Parms AttachToMecha_Parms;
	AttachToMecha_Parms.AttachOwnerMecha = AttachOwnerMecha;

	this->ProcessEvent ( pFnAttachToMecha, &AttachToMecha_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_Electrowelding.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaWeapAttachment_Electrowelding::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 215704 ];

	ATGMechaWeapAttachment_Electrowelding_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_Aerogun.GetAllProjFireInfo
// [0x00820102] 
// Parameters infos:
// TArray< struct FMechaAeroProjFireInfo > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FMechaAeroProjFireInfo > ATGMechaWeapAttachment_Aerogun::GetAllProjFireInfo ( )
{
	static UFunction* pFnGetAllProjFireInfo = NULL;

	if ( ! pFnGetAllProjFireInfo )
		pFnGetAllProjFireInfo = (UFunction*) UObject::GObjObjects()->Data[ 215683 ];

	ATGMechaWeapAttachment_Aerogun_execGetAllProjFireInfo_Parms GetAllProjFireInfo_Parms;

	this->ProcessEvent ( pFnGetAllProjFireInfo, &GetAllProjFireInfo_Parms, NULL );

	return GetAllProjFireInfo_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeapAttachment_Aerogun.ProjWeapCauseMuzzleFlash
// [0x00020102] 
// Parameters infos:
// struct FReplicatedEffectsInfo  RepEffectsInfo                 ( CPF_Parm )

void ATGMechaWeapAttachment_Aerogun::ProjWeapCauseMuzzleFlash ( struct FReplicatedEffectsInfo RepEffectsInfo )
{
	static UFunction* pFnProjWeapCauseMuzzleFlash = NULL;

	if ( ! pFnProjWeapCauseMuzzleFlash )
		pFnProjWeapCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 215678 ];

	ATGMechaWeapAttachment_Aerogun_execProjWeapCauseMuzzleFlash_Parms ProjWeapCauseMuzzleFlash_Parms;
	memcpy ( &ProjWeapCauseMuzzleFlash_Parms.RepEffectsInfo, &RepEffectsInfo, 0x10 );

	this->ProcessEvent ( pFnProjWeapCauseMuzzleFlash, &ProjWeapCauseMuzzleFlash_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_FlameThrower.CauseFlashEffect
// [0x00020100] 
// Parameters infos:
// unsigned long                  bBeginSprayFlame               ( CPF_Parm )

void ATGMechaWeapAttachment_FlameThrower::CauseFlashEffect ( unsigned long bBeginSprayFlame )
{
	static UFunction* pFnCauseFlashEffect = NULL;

	if ( ! pFnCauseFlashEffect )
		pFnCauseFlashEffect = (UFunction*) UObject::GObjObjects()->Data[ 215750 ];

	ATGMechaWeapAttachment_FlameThrower_execCauseFlashEffect_Parms CauseFlashEffect_Parms;
	CauseFlashEffect_Parms.bBeginSprayFlame = bBeginSprayFlame;

	this->ProcessEvent ( pFnCauseFlashEffect, &CauseFlashEffect_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_FlameThrower.TGAttachmentSoundLocalEx
// [0x00084102] 
// Parameters infos:
// class UAudioComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USoundCue*               Sound                          ( CPF_Parm )
// class USoundCue*               AltLocalSound                  ( CPF_OptionalParm | CPF_Parm )
// class UAudioComponent*         AC                             ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )
// float                          FadeInTime                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAllowSpatialization           ( CPF_OptionalParm | CPF_Parm )

class UAudioComponent* ATGMechaWeapAttachment_FlameThrower::TGAttachmentSoundLocalEx ( class USoundCue* Sound, class USoundCue* AltLocalSound, class UAudioComponent* AC, float FadeInTime, unsigned long bAllowSpatialization )
{
	static UFunction* pFnTGAttachmentSoundLocalEx = NULL;

	if ( ! pFnTGAttachmentSoundLocalEx )
		pFnTGAttachmentSoundLocalEx = (UFunction*) UObject::GObjObjects()->Data[ 215741 ];

	ATGMechaWeapAttachment_FlameThrower_execTGAttachmentSoundLocalEx_Parms TGAttachmentSoundLocalEx_Parms;
	TGAttachmentSoundLocalEx_Parms.Sound = Sound;
	TGAttachmentSoundLocalEx_Parms.AltLocalSound = AltLocalSound;
	TGAttachmentSoundLocalEx_Parms.AC = AC;
	TGAttachmentSoundLocalEx_Parms.FadeInTime = FadeInTime;
	TGAttachmentSoundLocalEx_Parms.bAllowSpatialization = bAllowSpatialization;

	this->ProcessEvent ( pFnTGAttachmentSoundLocalEx, &TGAttachmentSoundLocalEx_Parms, NULL );

	return TGAttachmentSoundLocalEx_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeapAttachment_FlameThrower.ThirdPersonFireEffects
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGMechaWeapAttachment_FlameThrower::ThirdPersonFireEffects ( struct FVector HitLocation )
{
	static UFunction* pFnThirdPersonFireEffects = NULL;

	if ( ! pFnThirdPersonFireEffects )
		pFnThirdPersonFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 215739 ];

	ATGMechaWeapAttachment_FlameThrower_execThirdPersonFireEffects_Parms ThirdPersonFireEffects_Parms;
	memcpy ( &ThirdPersonFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnThirdPersonFireEffects, &ThirdPersonFireEffects_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_FlameThrower.AttachToMecha
// [0x00020102] 
// Parameters infos:
// class ATGRealMechaBase*        AttachOwnerMecha               ( CPF_Parm )

void ATGMechaWeapAttachment_FlameThrower::AttachToMecha ( class ATGRealMechaBase* AttachOwnerMecha )
{
	static UFunction* pFnAttachToMecha = NULL;

	if ( ! pFnAttachToMecha )
		pFnAttachToMecha = (UFunction*) UObject::GObjObjects()->Data[ 215736 ];

	ATGMechaWeapAttachment_FlameThrower_execAttachToMecha_Parms AttachToMecha_Parms;
	AttachToMecha_Parms.AttachOwnerMecha = AttachOwnerMecha;

	this->ProcessEvent ( pFnAttachToMecha, &AttachToMecha_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_HPFDetector.DetachFrom
// [0x00020102] 
// Parameters infos:
// class USkeletalMeshComponent*  MeshCpnt                       ( CPF_Parm | CPF_EditInline )

void ATGMechaWeapAttachment_HPFDetector::DetachFrom ( class USkeletalMeshComponent* MeshCpnt )
{
	static UFunction* pFnDetachFrom = NULL;

	if ( ! pFnDetachFrom )
		pFnDetachFrom = (UFunction*) UObject::GObjObjects()->Data[ 215770 ];

	ATGMechaWeapAttachment_HPFDetector_execDetachFrom_Parms DetachFrom_Parms;
	DetachFrom_Parms.MeshCpnt = MeshCpnt;

	this->ProcessEvent ( pFnDetachFrom, &DetachFrom_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_MachineGun.GetImpactEffect
// [0x00020102] 
// Parameters infos:
// struct FMaterialImpactEffect   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class UPhysicalMaterial*       HitMaterial                    ( CPF_Parm )

struct FMaterialImpactEffect ATGMechaWeapAttachment_MachineGun::GetImpactEffect ( class UPhysicalMaterial* HitMaterial )
{
	static UFunction* pFnGetImpactEffect = NULL;

	if ( ! pFnGetImpactEffect )
		pFnGetImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 215810 ];

	ATGMechaWeapAttachment_MachineGun_execGetImpactEffect_Parms GetImpactEffect_Parms;
	GetImpactEffect_Parms.HitMaterial = HitMaterial;

	this->ProcessEvent ( pFnGetImpactEffect, &GetImpactEffect_Parms, NULL );

	return GetImpactEffect_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeapAttachment_PenetrativeCannon.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATGMechaWeapAttachment_PenetrativeCannon::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 215841 ];

	ATGMechaWeapAttachment_PenetrativeCannon_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_PenetrativeCannon.PlayReplicatedEffects
// [0x00020102] 
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ATGMechaWeapAttachment_PenetrativeCannon::PlayReplicatedEffects ( struct FName VarName )
{
	static UFunction* pFnPlayReplicatedEffects = NULL;

	if ( ! pFnPlayReplicatedEffects )
		pFnPlayReplicatedEffects = (UFunction*) UObject::GObjObjects()->Data[ 215839 ];

	ATGMechaWeapAttachment_PenetrativeCannon_execPlayReplicatedEffects_Parms PlayReplicatedEffects_Parms;
	memcpy ( &PlayReplicatedEffects_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnPlayReplicatedEffects, &PlayReplicatedEffects_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_PenetrativeCannon.PlayLockingMechaEffect
// [0x00020102] 
// Parameters infos:

void ATGMechaWeapAttachment_PenetrativeCannon::PlayLockingMechaEffect ( )
{
	static UFunction* pFnPlayLockingMechaEffect = NULL;

	if ( ! pFnPlayLockingMechaEffect )
		pFnPlayLockingMechaEffect = (UFunction*) UObject::GObjObjects()->Data[ 215837 ];

	ATGMechaWeapAttachment_PenetrativeCannon_execPlayLockingMechaEffect_Parms PlayLockingMechaEffect_Parms;

	this->ProcessEvent ( pFnPlayLockingMechaEffect, &PlayLockingMechaEffect_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_PenetrativeCannon.PlayImpactEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGMechaWeapAttachment_PenetrativeCannon::PlayImpactEffects ( struct FVector HitLocation )
{
	static UFunction* pFnPlayImpactEffects = NULL;

	if ( ! pFnPlayImpactEffects )
		pFnPlayImpactEffects = (UFunction*) UObject::GObjObjects()->Data[ 215830 ];

	ATGMechaWeapAttachment_PenetrativeCannon_execPlayImpactEffects_Parms PlayImpactEffects_Parms;
	memcpy ( &PlayImpactEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayImpactEffects, &PlayImpactEffects_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_PenetrativeCannon.GetImpactEffect
// [0x00020102] 
// Parameters infos:
// struct FMaterialImpactEffect   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class UPhysicalMaterial*       HitMaterial                    ( CPF_Parm )

struct FMaterialImpactEffect ATGMechaWeapAttachment_PenetrativeCannon::GetImpactEffect ( class UPhysicalMaterial* HitMaterial )
{
	static UFunction* pFnGetImpactEffect = NULL;

	if ( ! pFnGetImpactEffect )
		pFnGetImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 215827 ];

	ATGMechaWeapAttachment_PenetrativeCannon_execGetImpactEffect_Parms GetImpactEffect_Parms;
	GetImpactEffect_Parms.HitMaterial = HitMaterial;

	this->ProcessEvent ( pFnGetImpactEffect, &GetImpactEffect_Parms, NULL );

	return GetImpactEffect_Parms.ReturnValue;
};

// Function MechaGame.TGMechaWeapAttachment_PenetrativeCannon.SpawnTracerEffect
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ATGMechaWeapAttachment_PenetrativeCannon::SpawnTracerEffect ( struct FVector HitLocation )
{
	static UFunction* pFnSpawnTracerEffect = NULL;

	if ( ! pFnSpawnTracerEffect )
		pFnSpawnTracerEffect = (UFunction*) UObject::GObjObjects()->Data[ 215825 ];

	ATGMechaWeapAttachment_PenetrativeCannon_execSpawnTracerEffect_Parms SpawnTracerEffect_Parms;
	memcpy ( &SpawnTracerEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnTracerEffect, &SpawnTracerEffect_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_PenetrativeCannon.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATGMechaWeapAttachment_PenetrativeCannon::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 215824 ];

	ATGMechaWeapAttachment_PenetrativeCannon_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_ShockCannon.ProjWeapCauseMuzzleFlash
// [0x00020100] 
// Parameters infos:
// struct FReplicatedEffectsInfo  RepEffectsInfo                 ( CPF_Parm )

void ATGMechaWeapAttachment_ShockCannon::ProjWeapCauseMuzzleFlash ( struct FReplicatedEffectsInfo RepEffectsInfo )
{
	static UFunction* pFnProjWeapCauseMuzzleFlash = NULL;

	if ( ! pFnProjWeapCauseMuzzleFlash )
		pFnProjWeapCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 215862 ];

	ATGMechaWeapAttachment_ShockCannon_execProjWeapCauseMuzzleFlash_Parms ProjWeapCauseMuzzleFlash_Parms;
	memcpy ( &ProjWeapCauseMuzzleFlash_Parms.RepEffectsInfo, &RepEffectsInfo, 0x10 );

	this->ProcessEvent ( pFnProjWeapCauseMuzzleFlash, &ProjWeapCauseMuzzleFlash_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_ShockCannon.AttachMuzzleFlash
// [0x00020100] 
// Parameters infos:

void ATGMechaWeapAttachment_ShockCannon::AttachMuzzleFlash ( )
{
	static UFunction* pFnAttachMuzzleFlash = NULL;

	if ( ! pFnAttachMuzzleFlash )
		pFnAttachMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 215861 ];

	ATGMechaWeapAttachment_ShockCannon_execAttachMuzzleFlash_Parms AttachMuzzleFlash_Parms;

	this->ProcessEvent ( pFnAttachMuzzleFlash, &AttachMuzzleFlash_Parms, NULL );
};

// Function MechaGame.TGMechaWeapAttachment_ShockCannon.GetPhysicalFireStartLoc
// [0x00824102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_OptionalParm | CPF_Parm )

struct FVector ATGMechaWeapAttachment_ShockCannon::GetPhysicalFireStartLoc ( int Index )
{
	static UFunction* pFnGetPhysicalFireStartLoc = NULL;

	if ( ! pFnGetPhysicalFireStartLoc )
		pFnGetPhysicalFireStartLoc = (UFunction*) UObject::GObjObjects()->Data[ 215856 ];

	ATGMechaWeapAttachment_ShockCannon_execGetPhysicalFireStartLoc_Parms GetPhysicalFireStartLoc_Parms;
	GetPhysicalFireStartLoc_Parms.Index = Index;

	this->ProcessEvent ( pFnGetPhysicalFireStartLoc, &GetPhysicalFireStartLoc_Parms, NULL );

	return GetPhysicalFireStartLoc_Parms.ReturnValue;
};

// Function MechaGame.TGSeqAct_Bombing.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGSeqAct_Bombing::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 215927 ];

	UTGSeqAct_Bombing_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function MechaGame.TGSeqAct_ResetAllPlayers.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGSeqAct_ResetAllPlayers::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 215931 ];

	UTGSeqAct_ResetAllPlayers_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function MechaGame.TGSeqAct_SetKeyTarget.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGSeqAct_SetKeyTarget::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 215937 ];

	UTGSeqAct_SetKeyTarget_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function MechaGame.TGSeqAct_SetMechaMaxFlyHeight.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGSeqAct_SetMechaMaxFlyHeight::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 215941 ];

	UTGSeqAct_SetMechaMaxFlyHeight_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function MechaGame.TGSeqAct_SetStopCountDown.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGSeqAct_SetStopCountDown::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 215946 ];

	UTGSeqAct_SetStopCountDown_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function MechaGame.TGSeqAct_SetTarget.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGSeqAct_SetTarget::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 215952 ];

	UTGSeqAct_SetTarget_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function MechaGame.TGSeqAct_SetupPlayerStart.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTGSeqAct_SetupPlayerStart::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 215957 ];

	UTGSeqAct_SetupPlayerStart_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif