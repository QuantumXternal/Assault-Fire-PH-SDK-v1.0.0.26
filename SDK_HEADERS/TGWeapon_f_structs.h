/*
#############################################################################################
# Assault Fire (1.0.0.26) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TGWeapon_f_structs.h
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

// Function TGWeapon.Interface_TGNewWeapon.SetExtraPower
// [0x00020000] 
struct UInterface_TGNewWeapon_execSetExtraPower_Parms
{
	int                                                InPower;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_ACE.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_ACE_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_ACE.MirrorUpdateNotify
// [0x00020102] 
struct ATGWeap_ACE_execMirrorUpdateNotify_Parms
{
};

// Function TGWeapon.TGWeap_ACE.DelayActivateAmmoDisplayComp
// [0x00020102] 
struct ATGWeap_ACE_execDelayActivateAmmoDisplayComp_Parms
{
};

// Function TGWeapon.TGWeap_ACE.TimeWeaponEquipping
// [0x00020102] 
struct ATGWeap_ACE_execTimeWeaponEquipping_Parms
{
};

// Function TGWeapon.TGWeap_ACE.DetachWeapon
// [0x00020102] 
struct ATGWeap_ACE_execDetachWeapon_Parms
{
};

// Function TGWeapon.TGWeap_ACE.FullAmmo
// [0x00020102] 
struct ATGWeap_ACE_execFullAmmo_Parms
{
};

// Function TGWeapon.TGWeap_ACE.AddAmmo
// [0x00020102] 
struct ATGWeap_ACE_execAddAmmo_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGPawn*                                  TPawn;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             OldAmountCount;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_ACE.PostBeginPlay
// [0x00020102] 
struct ATGWeap_ACE_execPostBeginPlay_Parms
{
};

// Function TGWeapon.TGWeap_ACE.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_ACE_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_ACE.ViewTargetReady
// [0x00020102] 
struct ATGWeap_ACE_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_ACE.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_ACE_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AEK999.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AEK999_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AEK999.DrawAmmo
// [0x00020902] ( FUNC_Event )
struct ATGWeap_AEK999_eventDrawAmmo_Parms
{
	class UCanvas*                                     CanvasTemp;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                CurrentAmmo;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                CarriedAmmo;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AEK999.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AEK999_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AEK999.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AEK999_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AEK999.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AEK999_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AEKunlimited.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AEKunlimited_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AEKunlimited.DrawAmmo
// [0x00020902] ( FUNC_Event )
struct ATGWeap_AEKunlimited_eventDrawAmmo_Parms
{
	class UCanvas*                                     CanvasTemp;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                CurrentAmmo;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                CarriedAmmo;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AEKunlimited.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AEKunlimited_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AEKunlimited.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AEKunlimited_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AEKunlimited.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AEKunlimited_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AK12.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AK12_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AK12.GetAdjustedAim
// [0x00820102] 
struct ATGWeap_AK12_execGetAdjustedAim_Parms
{
	struct FVector                                     StartFireLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 R;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
	// int                                             RealPunchAnglePitch;                              		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             aaaa;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK12.WeaponCalcCamera
// [0x00C20102] 
struct ATGWeap_AK12_execWeaponCalcCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FRotator                                 InitPunchAngle;                                   		// 0x001C (0x000C) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             iTemp;                                            		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK12.KickBackTheView
// [0x00820102] 
struct ATGWeap_AK12_execKickBackTheView_Parms
{
	float                                              KickBackUpBase;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackLateralBase;                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackUpModifier;                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackLateralModifier;                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackUpMax;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackLateralMax;                               		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           kickUp;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           kickLateral;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  newPunchAngle;                                    		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 weapon_rotator;                                   		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  weapon_location;                                  		// 0x0038 (0x000C) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x004C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bRecord : 1;                                      		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGWeapon.TGWeap_AK12.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AK12_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK12.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AK12_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK12.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AK12_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AK47.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AK47_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AK47.GetAdjustedAim
// [0x00820102] 
struct ATGWeap_AK47_execGetAdjustedAim_Parms
{
	struct FVector                                     StartFireLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 R;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
	// int                                             RealPunchAnglePitch;                              		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             aaaa;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47.WeaponCalcCamera
// [0x00C20102] 
struct ATGWeap_AK47_execWeaponCalcCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FRotator                                 InitPunchAngle;                                   		// 0x001C (0x000C) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             iTemp;                                            		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47.KickBackTheView
// [0x00820102] 
struct ATGWeap_AK47_execKickBackTheView_Parms
{
	float                                              KickBackUpBase;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackLateralBase;                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackUpModifier;                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackLateralModifier;                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackUpMax;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackLateralMax;                               		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           kickUp;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           kickLateral;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  newPunchAngle;                                    		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 weapon_rotator;                                   		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  weapon_location;                                  		// 0x0038 (0x000C) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x004C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bRecord : 1;                                      		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGWeapon.TGWeap_AK47.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AK47_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AK47_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AK47_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AK47_B.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AK47_B_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AK47_B.GetAdjustedAim
// [0x00820102] 
struct ATGWeap_AK47_B_execGetAdjustedAim_Parms
{
	struct FVector                                     StartFireLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 R;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
	// int                                             RealPunchAnglePitch;                              		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             aaaa;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47_B.WeaponCalcCamera
// [0x00C20102] 
struct ATGWeap_AK47_B_execWeaponCalcCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FRotator                                 InitPunchAngle;                                   		// 0x001C (0x000C) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             iTemp;                                            		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47_B.KickBackTheView
// [0x00820102] 
struct ATGWeap_AK47_B_execKickBackTheView_Parms
{
	float                                              KickBackUpBase;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackLateralBase;                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackUpModifier;                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackLateralModifier;                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackUpMax;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackLateralMax;                               		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           kickUp;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           kickLateral;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  newPunchAngle;                                    		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 weapon_rotator;                                   		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  weapon_location;                                  		// 0x0038 (0x000C) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x004C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bRecord : 1;                                      		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGWeapon.TGWeap_AK47_B.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AK47_B_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47_B.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AK47_B_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47_B.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AK47_B_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_Ak47_old.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_Ak47_old_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_Ak47_old.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_Ak47_old_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_Ak47_old.ViewTargetReady
// [0x00020102] 
struct ATGWeap_Ak47_old_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_Ak47_old.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_Ak47_old_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AK47Diamond.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AK47Diamond_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AK47Diamond.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AK47Diamond_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47Diamond.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AK47Diamond_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47Diamond.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AK47Diamond_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AK47GAI.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AK47GAI_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AK47GAI.GetAdjustedAim
// [0x00820102] 
struct ATGWeap_AK47GAI_execGetAdjustedAim_Parms
{
	struct FVector                                     StartFireLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 R;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
	// int                                             RealPunchAnglePitch;                              		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             aaaa;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47GAI.WeaponCalcCamera
// [0x00C20102] 
struct ATGWeap_AK47GAI_execWeaponCalcCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FRotator                                 InitPunchAngle;                                   		// 0x001C (0x000C) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             iTemp;                                            		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47GAI.KickBackTheView
// [0x00820102] 
struct ATGWeap_AK47GAI_execKickBackTheView_Parms
{
	float                                              KickBackUpBase;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackLateralBase;                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackUpModifier;                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackLateralModifier;                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackUpMax;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackLateralMax;                               		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           kickUp;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           kickLateral;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  newPunchAngle;                                    		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 weapon_rotator;                                   		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  weapon_location;                                  		// 0x0038 (0x000C) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x004C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bRecord : 1;                                      		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGWeapon.TGWeap_AK47GAI.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AK47GAI_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47GAI.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AK47GAI_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47GAI.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AK47GAI_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AK47GOLD.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AK47GOLD_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AK47GOLD.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AK47GOLD_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47GOLD.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AK47GOLD_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47GOLD.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AK47GOLD_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AK47GoldSword.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AK47GoldSword_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AK47GoldSword.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AK47GoldSword_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47GoldSword.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AK47GoldSword_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47GoldSword.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AK47GoldSword_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AK47GoldSword2.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AK47GoldSword2_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_AK47Member.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AK47Member_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AK47Member.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AK47Member_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47Member.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AK47Member_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47Member.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AK47Member_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AK47Member2.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AK47Member2_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_AK47OET.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AK47OET_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AK47OET.GetAdjustedAim
// [0x00820102] 
struct ATGWeap_AK47OET_execGetAdjustedAim_Parms
{
	struct FVector                                     StartFireLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 R;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
	// int                                             RealPunchAnglePitch;                              		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             aaaa;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47OET.WeaponCalcCamera
// [0x00C20102] 
struct ATGWeap_AK47OET_execWeaponCalcCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FRotator                                 InitPunchAngle;                                   		// 0x001C (0x000C) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             iTemp;                                            		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47OET.KickBackTheView
// [0x00820102] 
struct ATGWeap_AK47OET_execKickBackTheView_Parms
{
	float                                              KickBackUpBase;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackLateralBase;                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackUpModifier;                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackLateralModifier;                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackUpMax;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackLateralMax;                               		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           kickUp;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           kickLateral;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  newPunchAngle;                                    		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 weapon_rotator;                                   		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  weapon_location;                                  		// 0x0038 (0x000C) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x004C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bRecord : 1;                                      		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGWeapon.TGWeap_AK47OET.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AK47OET_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47OET.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AK47OET_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47OET.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AK47OET_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AK47Rail.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AK47Rail_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AK47Rail.GetAdjustedAim
// [0x00820102] 
struct ATGWeap_AK47Rail_execGetAdjustedAim_Parms
{
	struct FVector                                     StartFireLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 R;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
	// int                                             RealPunchAnglePitch;                              		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             aaaa;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47Rail.WeaponCalcCamera
// [0x00C20102] 
struct ATGWeap_AK47Rail_execWeaponCalcCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FRotator                                 InitPunchAngle;                                   		// 0x001C (0x000C) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             iTemp;                                            		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47Rail.KickBackTheView
// [0x00820102] 
struct ATGWeap_AK47Rail_execKickBackTheView_Parms
{
	float                                              KickBackUpBase;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackLateralBase;                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackUpModifier;                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackLateralModifier;                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackUpMax;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              KickBackLateralMax;                               		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           kickUp;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           kickLateral;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  newPunchAngle;                                    		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 weapon_rotator;                                   		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  weapon_location;                                  		// 0x0038 (0x000C) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x004C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bRecord : 1;                                      		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGWeapon.TGWeap_AK47Rail.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AK47Rail_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47Rail.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AK47Rail_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47Rail.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AK47Rail_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AK47Sword.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AK47Sword_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AK47Sword.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AK47Sword_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47Sword.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AK47Sword_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47Sword.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AK47Sword_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AK47Sword2.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AK47Sword2_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_AK47SwordII.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AK47SwordII_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AK47SwordII.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AK47SwordII_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47SwordII.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AK47SwordII_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK47SwordII.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AK47SwordII_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AK47SwordII2.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AK47SwordII2_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_AK74.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AK74_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AK74.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AK74_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK74.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AK74_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK74.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AK74_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AK74U.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AK74U_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AK74U.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AK74U_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK74U.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AK74U_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK74U.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AK74U_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AK74U_KOS.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AK74U_KOS_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AK74U_KOS.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AK74U_KOS_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK74U_KOS.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AK74U_KOS_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK74U_KOS.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AK74U_KOS_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AK74Udust.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AK74Udust_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AK74Udust.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AK74Udust_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK74Udust.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AK74Udust_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AK74Udust.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AK74Udust_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AN94.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AN94_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AN94.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AN94_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AN94.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AN94_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AN94.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AN94_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AR15.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AR15_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AR15.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AR15_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AR15.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AR15_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AR15.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AR15_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AR15_KOS.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AR15_KOS_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AR15_KOS.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AR15_KOS_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AR15_KOS.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AR15_KOS_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AR15_KOS.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AR15_KOS_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AR15_mend.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AR15_mend_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AR15_mend.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AR15_mend_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AR15_mend.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AR15_mend_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AR15_mend.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AR15_mend_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AR15_mendSilver.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AR15_mendSilver_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AR15_mendSilver.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AR15_mendSilver_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AR15_mendSilver.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AR15_mendSilver_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AR15_mendSilver.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AR15_mendSilver_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AR15_Xmas.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AR15_Xmas_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AR15_Xmas.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AR15_Xmas_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AR15_Xmas.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AR15_Xmas_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AR15GAI.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AR15GAI_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AR15GAI.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AR15GAI_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AR15GAI.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AR15GAI_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AR15GAI.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AR15GAI_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AR15gold.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AR15gold_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AR15gold.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AR15gold_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AR15gold.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AR15gold_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AR15gold.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AR15gold_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AR15OET.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AR15OET_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AR15OET.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AR15OET_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AR15OET.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AR15OET_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AR15OET.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AR15OET_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AR15QT.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AR15QT_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AR15QT.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AR15QT_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AR15QT.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AR15QT_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AR15QT.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AR15QT_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AR15Snake.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AR15Snake_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AR15Snake.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AR15Snake_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AR15Snake.ViewTargetReady
// [0x00020102] 
struct ATGWeap_AR15Snake_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AR15Snake.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AR15Snake_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_ArrowExplosion.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_ArrowExplosion_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_ArrowExplosion.VehicleDamageScalingFor
// [0x00022002] 
struct UTGDmgType_ArrowExplosion_execVehicleDamageScalingFor_Parms
{
	class AVehicle*                                    V;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGWeapon.TGWeap_Bow.SetDamageScale
// [0x00024002] 
struct ATGWeap_Bow_execSetDamageScale_Parms
{
	float                                              InDamageScale;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsSpecial : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TGWeapon.TGWeap_Bow.LimitGroundSpeed
// [0x00020102] 
struct ATGWeap_Bow_execLimitGroundSpeed_Parms
{
	// class ATGPawn*                                  TPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_Bow.DrawSpeicalBowCrosshair
// [0x00020102] 
struct ATGWeap_Bow_execDrawSpeicalBowCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             X;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Y;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             ScreenX;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             ScreenY;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// class AUTHUD*                                   H;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_Bow.DrawWeaponCrosshair
// [0x00020102] 
struct ATGWeap_Bow_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_Bow.DisplaySpecial
// [0x00820102] 
struct ATGWeap_Bow_execDisplaySpecial_Parms
{
	class UCanvas*                                     LocalCavas;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FColor                                   CurrentColor;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector2D                                pos;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_Bow.ClientFullAmmo
// [0x010201C2] 
struct ATGWeap_Bow_execClientFullAmmo_Parms
{
};

// Function TGWeapon.TGWeap_Bow.GetPhysicalFireStartLoc
// [0x00824102] 
struct ATGWeap_Bow_execGetPhysicalFireStartLoc_Parms
{
	struct FVector                                     AimDir;                                           		// 0x0000 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTPlayerController*                      PC;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  FireStartLoc;                                     		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FireDir;                                          		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FireEnd;                                          		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ProjBox;                                          		// 0x0058 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0064 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 FireRot;                                          		// 0x0068 (0x000C) [0x0000000000000000]              
	// class UClass*                                   FiredProjectileClass;                             		// 0x0074 (0x0004) [0x0000000000000000]              
	// int                                             TraceFlags;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_Bow.ProjectileFireValidation
// [0x00020002] 
struct ATGWeap_Bow_execProjectileFireValidation_Parms
{
	float                                              LocalClientTime;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGWeapon.TGWeap_Bow.ServerThrowGrenade
// [0x002200C2] 
struct ATGWeap_Bow_execServerThrowGrenade_Parms
{
	float                                              LocalClientTime;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BentRate;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       InputName;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_Bow.SpawnAnArrow
// [0x00820102] 
struct ATGWeap_Bow_execSpawnAnArrow_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGProj_CompoundBow*                      SpawnedArrow;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  RealStartLoc;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_Bow.ProjectileFire
// [0x00020102] 
struct ATGWeap_Bow_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGProj_Arrow*                            SpawnedProjectile;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATGPlayerReplicationInfo*                 PRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_Bow.PlayArrowShootingEffect
// [0x00020102] 
struct ATGWeap_Bow_execPlayArrowShootingEffect_Parms
{
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_Bow.ServerQuitChargingState
// [0x002200C2] 
struct ATGWeap_Bow_execServerQuitChargingState_Parms
{
};

// Function TGWeapon.TGWeap_Bow.ServerEnterChargingState
// [0x002200C2] 
struct ATGWeap_Bow_execServerEnterChargingState_Parms
{
};

// Function TGWeapon.TGWeap_Bow.TimeWeaponClipChanging
// [0x00020102] 
struct ATGWeap_Bow_execTimeWeaponClipChanging_Parms
{
};

// Function TGWeapon.TGWeap_Bow.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_Bow_execPlayWeaponEquip_Parms
{
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             CurrentAmmoCount;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_Arx160.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_Arx160_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_Arx160.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_Arx160_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_Arx160.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_Arx160_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_ASW338lm.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_ASW338lm_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_AUG.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AUG_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AUG.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AUG_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AUG.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AUG_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AUGA3.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AUGA3_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_AUGGAI.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AUGGAI_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_AUGGAI.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_AUGGAI_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_AUGGAI.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_AUGGAI_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_AWM.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AWM_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_AWM_AP.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AWM_AP_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_AWM_Mag.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AWM_Mag_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_AWM_old.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AWM_old_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_AWM_SSM.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AWM_SSM_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_AWM_star.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AWM_star_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_AWM_TAM.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AWM_TAM_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_AWM_TGAI.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AWM_TGAI_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_AWM_Thermal.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AWM_Thermal_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_AWMGAI.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AWMGAI_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_AWMGOLD.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AWMGOLD_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_AWMOET.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AWMOET_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_AWMs_Copper.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AWMs_Copper_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_AWMs_Gold.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AWMs_Gold_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_AWMs_Silver.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_AWMs_Silver_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_BoxGlove.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_BoxGlove_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_BoxGlove_PHL.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_BoxGlove_PHL_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_BoxGlove_XD.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_BoxGlove_XD_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_Candy_Grenade.ProjectileFire
// [0x00820102] 
struct ATGWeap_Candy_Grenade_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGProj_Candy_Grenade*                    SpawnedGrenade;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_ChristGrenade.ProjectileFire
// [0x00820102] 
struct ATGWeap_ChristGrenade_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGProj_ChristGrenade*                    SpawnedGrenade;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_Colt1873.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_Colt1873_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_Colt1873.DetachWeapon
// [0x00020102] 
struct ATGWeap_Colt1873_execDetachWeapon_Parms
{
};

// Function TGWeapon.TGWeap_Colt1873.PlayReadyAnimation
// [0x00020102] 
struct ATGWeap_Colt1873_execPlayReadyAnimation_Parms
{
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_Colt1873.GetWeaponModeReadableName
// [0x00020102] 
struct ATGWeap_Colt1873_execGetWeaponModeReadableName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TGWeapon.TGWeap_Colt1873.StartFire
// [0x00020102] 
struct ATGWeap_Colt1873_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_CompoundBow.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_CompoundBow_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_Cracker.ProjectileFire
// [0x00820102] 
struct ATGWeap_Cracker_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGProj_Cracker*                          SpawnedGrenade;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_CrossBow.FullAmmo
// [0x00020102] 
struct ATGWeap_CrossBow_execFullAmmo_Parms
{
};

// Function TGWeapon.TGWeap_CrossBow.SetDamageScale
// [0x00024002] 
struct ATGWeap_CrossBow_execSetDamageScale_Parms
{
	float                                              InDamageScale;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsSpecial : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TGWeapon.TGWeap_CrossBow.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_CrossBow_execPlayWeaponEquip_Parms
{
	// int                                             CurrentAmmoCount;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_CrossBow.ClientStartZoom
// [0x00020102] 
struct ATGWeap_CrossBow_execClientStartZoom_Parms
{
	class AUTPlayerController*                         PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_CrossBow.ServerStartZoom
// [0x002200C2] 
struct ATGWeap_CrossBow_execServerStartZoom_Parms
{
	class AUTPlayerController*                         PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_CrossBow.Gotozoom
// [0x00020102] 
struct ATGWeap_CrossBow_execGotozoom_Parms
{
	// class ATGPlayerController*                      PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATGPawn*                                  TGInstigator;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_CrossBow.DrawBigCrossHair
// [0x00820102] 
struct ATGWeap_CrossBow_execDrawBigCrossHair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTHUD*                                   H;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           X;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           ScreenX;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           ScreenY;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           CrossHairSizeTemp;                                		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           CrossHairLineLengthTemp;                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           LastStateCrossHairSize;                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           LastStateCrossHairLineLength;                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FColor                                   TempShadowColor;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           RealCrossHairSizeInaccuracy;                      		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           RealCrossHairLengthInaccuracy;                    		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           ScaleCrosshair;                                   		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           LocalOriginCrossHairSizeJumping;                  		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           LocalOriginCrossHairLineLengthJumping;            		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           LocalOriginCrossHairSizeFastMoving;               		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           LocalOriginCrossHairLineLengthFastMoving;         		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           LocalOriginCrossHairSizeSlowMoving;               		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           LocalOriginCrossHairLineLengthSlowMoving;         		// 0x0050 (0x0004) [0x0000000000000000]              
	// float                                           LocalOriginCrossHairSizeCrouching;                		// 0x0054 (0x0004) [0x0000000000000000]              
	// float                                           LocalOriginCrossHairLineLengthCrouching;          		// 0x0058 (0x0004) [0x0000000000000000]              
	// float                                           LocalOriginCrossHairSize;                         		// 0x005C (0x0004) [0x0000000000000000]              
	// float                                           LocalOriginCrossHairLineLength;                   		// 0x0060 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x0064 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x0068 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_CrossBow.DrawWeaponCrosshair
// [0x00020102] 
struct ATGWeap_CrossBow_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATGPlayerController*                      PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_CrossBow.CreateProjectileVelocityOffest
// [0x00820102] 
struct ATGWeap_CrossBow_execCreateProjectileVelocityOffest_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  VelocityOffSet;                                   		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_CrossBow.ServerThrowGrenade
// [0x002200C2] 
struct ATGWeap_CrossBow_execServerThrowGrenade_Parms
{
	float                                              LocalClientTime;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_CrossBow.ProjectileFire
// [0x00820102] 
struct ATGWeap_CrossBow_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGProj_CrossBow*                         SpawnedArrow;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
	// class ATGPlayerReplicationInfo*                 PRI;                                              		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_CrossBow.BackZoom
// [0x00020100] 
struct ATGWeap_CrossBow_execBackZoom_Parms
{
};

// Function TGWeapon.TGWeap_CrossBow.InstantFire
// [0x00020102] 
struct ATGWeap_CrossBow_execInstantFire_Parms
{
	// float                                           KickBackUpBase;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           KickBackLateralBase;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           KickBackUpModifier;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           KickBackLateralModifier;                          		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           KickBackUpMax;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           KickBackLateralMax;                               		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_CrossBowArrow.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_CrossBowArrow_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_CrossBowArrow.VehicleDamageScalingFor
// [0x00022002] 
struct UTGDmgType_CrossBowArrow_execVehicleDamageScalingFor_Parms
{
	class AVehicle*                                    V;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGWeapon.TGDmgType_CSLR4.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_CSLR4_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_DE_A.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_DE_A_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_DE_D.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_DE_D_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_DE_D.CauseShellDrop
// [0x00820102] 
struct ATGWeap_DE_D_execCauseShellDrop_Parms
{
	// class AUTPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 RealStartRotation;                                		// 0x0010 (0x000C) [0x0000000000000000]              
	// class UUDKSkeletalMeshComponent*                SKMesh;                                           		// 0x001C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGWeapon.TGWeap_DE_D.CauseMuzzleFlashLight
// [0x00020902] ( FUNC_Event )
struct ATGWeap_DE_D_eventCauseMuzzleFlashLight_Parms
{
};

// Function TGWeapon.TGWeap_DE_D.AttachMuzzleFlash
// [0x00020102] 
struct ATGWeap_DE_D_execAttachMuzzleFlash_Parms
{
	// class USkeletalMeshComponent*                   SKMesh;                                           		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGWeapon.TGWeap_DE_D.MuzzleFlashTimer02
// [0x00020902] ( FUNC_Event )
struct ATGWeap_DE_D_eventMuzzleFlashTimer02_Parms
{
};

// Function TGWeapon.TGWeap_DE_D.CauseMuzzleFlash
// [0x00020902] ( FUNC_Event )
struct ATGWeap_DE_D_eventCauseMuzzleFlash_Parms
{
	// class AUTPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          MuzzleTemplate;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_DE_D.PlayFireEffects
// [0x00024102] 
struct ATGWeap_DE_D_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_DE_G.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_DE_G_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_DEgame.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_DEgame_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_DEgold.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_DEgold_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_DEQT.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_DEQT_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_DesertEagle.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_DesertEagle_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_DESnake.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_DESnake_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_DSR1.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_DSR1_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_F2000.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_F2000_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_F2000.DrawZoomedOverlay
// [0x00020102] 
struct ATGWeap_F2000_execDrawZoomedOverlay_Parms
{
	class AHUD*                                        H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           ScaleX;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           ScaleY;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           StartX;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           OldOrgX;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           OldOrgY;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           OldClipX;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           OldClipY;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_F2000.DrawWeaponCrosshairEx
// [0x00020102] 
struct ATGWeap_F2000_execDrawWeaponCrosshairEx_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTHUD*                                   H;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           X;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           ScreenX;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           ScreenY;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           CrossHairSizeTemp;                                		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           CrossHairLineLengthTemp;                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           LastStateCrossHairSize;                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           LastStateCrossHairLineLength;                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_F2000.NotifySetCrossHair
// [0x00020902] ( FUNC_Event )
struct ATGWeap_F2000_eventNotifySetCrossHair_Parms
{
	class UTexture2D*                                  CrossHairHUD;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_F2000.DrawWeaponCrosshair
// [0x00020102] 
struct ATGWeap_F2000_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_F2000.ReplayIdleAnim
// [0x00020102] 
struct ATGWeap_F2000_execReplayIdleAnim_Parms
{
	// class ATGPawn*                                  UTP;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_F2000.ToggleFireReference
// [0x00020102] 
struct ATGWeap_F2000_execToggleFireReference_Parms
{
	unsigned long                                      bTurnSecondaryAimFireRate : 1;                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGPawn*                                  TPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_F2000.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_F2000_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_F2000.ViewTargetReady
// [0x00020102] 
struct ATGWeap_F2000_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_F2000.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_F2000_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_F2000GAI.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_F2000GAI_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_F2000GAI.DrawZoomedOverlay
// [0x00020102] 
struct ATGWeap_F2000GAI_execDrawZoomedOverlay_Parms
{
	class AHUD*                                        H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           ScaleX;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           ScaleY;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           StartX;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           OldOrgX;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           OldOrgY;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           OldClipX;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           OldClipY;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_F2000GAI.DrawWeaponCrosshairEx
// [0x00020102] 
struct ATGWeap_F2000GAI_execDrawWeaponCrosshairEx_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTHUD*                                   H;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           X;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           ScreenX;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           ScreenY;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           CrossHairSizeTemp;                                		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           CrossHairLineLengthTemp;                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           LastStateCrossHairSize;                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           LastStateCrossHairLineLength;                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_F2000GAI.DrawWeaponCrosshair
// [0x00020102] 
struct ATGWeap_F2000GAI_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_F2000GAI.ReplayIdleAnim
// [0x00020102] 
struct ATGWeap_F2000GAI_execReplayIdleAnim_Parms
{
	// class ATGPawn*                                  UTP;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_F2000GAI.ToggleFireReference
// [0x00020102] 
struct ATGWeap_F2000GAI_execToggleFireReference_Parms
{
	unsigned long                                      bTurnSecondaryAimFireRate : 1;                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGPawn*                                  TPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_F2000GAI.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_F2000GAI_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_F2000GAI.NotifySetCrossHair
// [0x00020902] ( FUNC_Event )
struct ATGWeap_F2000GAI_eventNotifySetCrossHair_Parms
{
	class UTexture2D*                                  CrossHairHUD;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_F2000GAI.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_F2000GAI_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_FAL.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_FAL_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_FAL.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_FAL_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_FAL.ViewTargetReady
// [0x00020102] 
struct ATGWeap_FAL_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_FAL.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_FAL_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_FALdust.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_FALdust_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_FALdust.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_FALdust_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_FALdust.ViewTargetReady
// [0x00020102] 
struct ATGWeap_FALdust_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_FALdust.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_FALdust_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_FAMAS.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_FAMAS_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_FAMAS.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_FAMAS_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_FAMAS.ViewTargetReady
// [0x00020102] 
struct ATGWeap_FAMAS_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_FAMAS.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_FAMAS_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_FAMASGAI.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_FAMASGAI_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_FAMASGAI.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_FAMASGAI_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_FAMASGAI.ViewTargetReady
// [0x00020102] 
struct ATGWeap_FAMASGAI_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_FAMASGAI.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_FAMASGAI_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_FMG.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_FMG_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_FMG.CauseMuzzleFlashLight
// [0x00020902] ( FUNC_Event )
struct ATGWeap_FMG_eventCauseMuzzleFlashLight_Parms
{
};

// Function TGWeapon.TGWeap_FMG.CauseShellDrop
// [0x00820102] 
struct ATGWeap_FMG_execCauseShellDrop_Parms
{
	// class AUTPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 RealStartRotation;                                		// 0x0010 (0x000C) [0x0000000000000000]              
	// class UUDKSkeletalMeshComponent*                SKMesh;                                           		// 0x001C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGWeapon.TGWeap_FMG.AttachMuzzleFlash
// [0x00020102] 
struct ATGWeap_FMG_execAttachMuzzleFlash_Parms
{
	// class USkeletalMeshComponent*                   SKMesh;                                           		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGWeapon.TGWeap_FMG.MuzzleFlashTimer02
// [0x00020902] ( FUNC_Event )
struct ATGWeap_FMG_eventMuzzleFlashTimer02_Parms
{
};

// Function TGWeapon.TGWeap_FMG.CauseMuzzleFlash
// [0x00020902] ( FUNC_Event )
struct ATGWeap_FMG_eventCauseMuzzleFlash_Parms
{
	// class AUTPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          MuzzleTemplate;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_FMG.PlayFireEffects
// [0x00024102] 
struct ATGWeap_FMG_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_FMG.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_FMG_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_FMG.ViewTargetReady
// [0x00020102] 
struct ATGWeap_FMG_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_FMG.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_FMG_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_FN57.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_FN57_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_FoolGrenade.ProjectileFire
// [0x00820102] 
struct ATGWeap_FoolGrenade_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGProj_FoolGrenade*                      SpawnedGrenade;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_G36K.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_G36K_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_G36K.DrawZoomedOverlay
// [0x00020102] 
struct ATGWeap_G36K_execDrawZoomedOverlay_Parms
{
	class AHUD*                                        H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           ScaleX;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           ScaleY;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           StartX;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           OldOrgX;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           OldOrgY;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           OldClipX;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           OldClipY;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_G36K.DrawWeaponCrosshairEx
// [0x00020102] 
struct ATGWeap_G36K_execDrawWeaponCrosshairEx_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTHUD*                                   H;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           X;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           ScreenX;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           ScreenY;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           CrossHairSizeTemp;                                		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           CrossHairLineLengthTemp;                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           LastStateCrossHairSize;                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           LastStateCrossHairLineLength;                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_G36K.DrawWeaponCrosshair
// [0x00020102] 
struct ATGWeap_G36K_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_G36K.ReplayIdleAnim
// [0x00020102] 
struct ATGWeap_G36K_execReplayIdleAnim_Parms
{
	// class ATGPawn*                                  UTP;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_G36K.ToggleFireReference
// [0x00020102] 
struct ATGWeap_G36K_execToggleFireReference_Parms
{
	unsigned long                                      bTurnSecondaryAimFireRate : 1;                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGPawn*                                  TPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_G36K.NotifySetCrossHair
// [0x00020902] ( FUNC_Event )
struct ATGWeap_G36K_eventNotifySetCrossHair_Parms
{
	class UTexture2D*                                  CrossHairHUD;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_G36K.NotifySetCrossHairHit
// [0x00020902] ( FUNC_Event )
struct ATGWeap_G36K_eventNotifySetCrossHairHit_Parms
{
	class UTexture2D*                                  CrossHairHitHUD;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_G36K.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_G36K_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_G36K.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_G36K_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_G3SG2.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_G3SG2_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_G3SG2.ServerGotoStateWeaponClipChanging
// [0x002200C2] 
struct ATGWeap_G3SG2_execServerGotoStateWeaponClipChanging_Parms
{
	// class ATGPawn*                                  TPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_G3SG2.ClientStartZoom
// [0x00020102] 
struct ATGWeap_G3SG2_execClientStartZoom_Parms
{
	class AUTPlayerController*                         PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_G3SG2.InstantFire
// [0x00020102] 
struct ATGWeap_G3SG2_execInstantFire_Parms
{
};

// Function TGWeapon.TGWeap_G3SG2.EndFire
// [0x00020102] 
struct ATGWeap_G3SG2_execEndFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_G3SG2.FireAmmunition
// [0x00020102] 
struct ATGWeap_G3SG2_execFireAmmunition_Parms
{
	// class ATGPawn*                                  TPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           ShotFiredMul;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_G3SG2_Jungle.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_G3SG2_Jungle_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_G3SG2_Jungle.ServerGotoStateWeaponClipChanging
// [0x002200C2] 
struct ATGWeap_G3SG2_Jungle_execServerGotoStateWeaponClipChanging_Parms
{
	// class ATGPawn*                                  TPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_G3SG2_Jungle.ClientStartZoom
// [0x00020102] 
struct ATGWeap_G3SG2_Jungle_execClientStartZoom_Parms
{
	class AUTPlayerController*                         PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_G3SG2_Jungle.InstantFire
// [0x00020102] 
struct ATGWeap_G3SG2_Jungle_execInstantFire_Parms
{
};

// Function TGWeapon.TGWeap_G3SG2_Jungle.EndFire
// [0x00020102] 
struct ATGWeap_G3SG2_Jungle_execEndFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_G3SG2_Jungle.FireAmmunition
// [0x00020102] 
struct ATGWeap_G3SG2_Jungle_execFireAmmunition_Parms
{
	// class ATGPawn*                                  TPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           ShotFiredMul;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_GILBOA.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_GILBOA_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_GILBOA.CauseShellDrop
// [0x00820102] 
struct ATGWeap_GILBOA_execCauseShellDrop_Parms
{
	// class AUTPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 RealStartRotation;                                		// 0x0010 (0x000C) [0x0000000000000000]              
	// class UUDKSkeletalMeshComponent*                SKMesh;                                           		// 0x001C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGWeapon.TGWeap_GILBOA.CauseMuzzleFlashLight
// [0x00020902] ( FUNC_Event )
struct ATGWeap_GILBOA_eventCauseMuzzleFlashLight_Parms
{
};

// Function TGWeapon.TGWeap_GILBOA.AttachMuzzleFlash
// [0x00020102] 
struct ATGWeap_GILBOA_execAttachMuzzleFlash_Parms
{
	// class USkeletalMeshComponent*                   SKMesh;                                           		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGWeapon.TGWeap_GILBOA.MuzzleFlashTimer02
// [0x00020902] ( FUNC_Event )
struct ATGWeap_GILBOA_eventMuzzleFlashTimer02_Parms
{
};

// Function TGWeapon.TGWeap_GILBOA.CauseMuzzleFlash
// [0x00020902] ( FUNC_Event )
struct ATGWeap_GILBOA_eventCauseMuzzleFlash_Parms
{
	// class AUTPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          MuzzleTemplate;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_GILBOA.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_GILBOA_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_GILBOA.ViewTargetReady
// [0x00020102] 
struct ATGWeap_GILBOA_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_GILBOA.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_GILBOA_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_GLOCK17.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_GLOCK17_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_HeartSeeker.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_HeartSeeker_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_HEgame.ProjectileFire
// [0x00820102] 
struct ATGWeap_HEgame_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGProj_HEgame*                           SpawnedGrenade;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_HEGrenade.ProjectileFire
// [0x00820102] 
struct ATGWeap_HEGrenade_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGProj_HEGrenade*                        SpawnedGrenade;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_HK416.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_HK416_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_HK416.MirrorUpdateNotify
// [0x00020102] 
struct ATGWeap_HK416_execMirrorUpdateNotify_Parms
{
};

// Function TGWeapon.TGWeap_HK416.NotifyAimingLineEffect
// [0x00020102] 
struct ATGWeap_HK416_execNotifyAimingLineEffect_Parms
{
};

// Function TGWeapon.TGWeap_HK416.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGWeap_HK416_eventPostBeginPlay_Parms
{
};

// Function TGWeapon.TGWeap_HK416.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_HK416_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_HK416.ViewTargetReady
// [0x00020102] 
struct ATGWeap_HK416_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_HK416.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_HK416_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_HKG11.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_HKG11_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_HKG11.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_HKG11_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_HKG11.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_HKG11_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_IceAxe.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_IceAxe_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_JackHammer.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_JackHammer_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_JackHammer.ServerWeaponClipChanged
// [0x002200C2] 
struct ATGWeap_JackHammer_execServerWeaponClipChanged_Parms
{
};

// Function TGWeapon.TGWeap_JackHammer.TimeWeaponClipChanging
// [0x00020102] 
struct ATGWeap_JackHammer_execTimeWeaponClipChanging_Parms
{
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_JHammerACU.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_JHammerACU_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_JHammerACU.ServerWeaponClipChanged
// [0x002200C2] 
struct ATGWeap_JHammerACU_execServerWeaponClipChanged_Parms
{
};

// Function TGWeapon.TGWeap_JHammerACU.TimeWeaponClipChanging
// [0x00020102] 
struct ATGWeap_JHammerACU_execTimeWeaponClipChanging_Parms
{
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_JHammergold.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_JHammergold_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_JHammergold.ServerWeaponClipChanged
// [0x002200C2] 
struct ATGWeap_JHammergold_execServerWeaponClipChanged_Parms
{
};

// Function TGWeapon.TGWeap_JHammergold.TimeWeaponClipChanging
// [0x00020102] 
struct ATGWeap_JHammergold_execTimeWeaponClipChanging_Parms
{
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_Jian.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_Jian_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_JS_SMG.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_JS_SMG_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_JS_SMG.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_JS_SMG_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_JS_SMG.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_JS_SMG_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_K92F.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_K92F_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_KACSAW.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_KACSAW_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_KACSAW.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_KACSAW_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_KACSAW.ViewTargetReady
// [0x00020102] 
struct ATGWeap_KACSAW_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_KACSAW.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_KACSAW_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_KACSAW_dust.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_KACSAW_dust_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_KACSAW_dust.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_KACSAW_dust_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_KACSAW_dust.ViewTargetReady
// [0x00020102] 
struct ATGWeap_KACSAW_dust_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_KACSAW_dust.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_KACSAW_dust_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_Knuckle.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_Knuckle_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_KukriT.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_KukriT_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_KukriT.PlayFirstPersonAnim
// [0x00020102] 
struct ATGWeap_KukriT_execPlayFirstPersonAnim_Parms
{
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_KukriTGold.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_KukriTGold_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_KukriTGold.PlayFirstPersonAnim
// [0x00020102] 
struct ATGWeap_KukriTGold_execPlayFirstPersonAnim_Parms
{
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_L85.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_L85_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_L85.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_L85_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_L85.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_L85_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_LSAT.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_LSAT_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_LSAT.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_LSAT_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_LSAT.ViewTargetReady
// [0x00020102] 
struct ATGWeap_LSAT_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_LSAT.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_LSAT_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M1014.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M1014_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M1014.PlayFireEffects
// [0x00024102] 
struct ATGWeap_M1014_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M1014GAI.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M1014GAI_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M1014GAI.PlayFireEffects
// [0x00024102] 
struct ATGWeap_M1014GAI_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M107.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M107_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M107.RefeshSpecialGunMirror
// [0x00020102] 
struct ATGWeap_M107_execRefeshSpecialGunMirror_Parms
{
};

// Function TGWeapon.TGWeap_M107.IsSpecialGun
// [0x00020102] 
struct ATGWeap_M107_execIsSpecialGun_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGWeapon.TGWeap_M107.DelayActivateAmmoDisplayComp
// [0x00020102] 
struct ATGWeap_M107_execDelayActivateAmmoDisplayComp_Parms
{
};

// Function TGWeapon.TGWeap_M107.TimeWeaponEquipping
// [0x00020102] 
struct ATGWeap_M107_execTimeWeaponEquipping_Parms
{
};

// Function TGWeapon.TGWeap_M107.DetachWeapon
// [0x00020102] 
struct ATGWeap_M107_execDetachWeapon_Parms
{
};

// Function TGWeapon.TGWeap_M107.PostBeginPlay
// [0x00020102] 
struct ATGWeap_M107_execPostBeginPlay_Parms
{
};

// Function TGWeapon.TGDmgType_M14JAE100.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M14JAE100_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M14JAE100.ServerGotoStateWeaponClipChanging
// [0x002200C2] 
struct ATGWeap_M14JAE100_execServerGotoStateWeaponClipChanging_Parms
{
	// class ATGPawn*                                  TPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M14JAE100.ClientStartZoom
// [0x00020102] 
struct ATGWeap_M14JAE100_execClientStartZoom_Parms
{
	class AUTPlayerController*                         PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M14JAE100.InstantFire
// [0x00020102] 
struct ATGWeap_M14JAE100_execInstantFire_Parms
{
};

// Function TGWeapon.TGWeap_M14JAE100.EndFire
// [0x00020102] 
struct ATGWeap_M14JAE100_execEndFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M14JAE100.FireAmmunition
// [0x00020102] 
struct ATGWeap_M14JAE100_execFireAmmunition_Parms
{
	// class ATGPawn*                                  TPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           ShotFiredMul;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M16.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M16_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M16.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M16_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M16.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M16_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M16.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M16_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M1911.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M1911_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_M240LW.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M240LW_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M240LW.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M240LW_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M240LW.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M240LW_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M240LW.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M240LW_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M249.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M249_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M249.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M249_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M249.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M249_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M249D.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M249D_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M249D.CauseMuzzleFlashLight
// [0x00020902] ( FUNC_Event )
struct ATGWeap_M249D_eventCauseMuzzleFlashLight_Parms
{
};

// Function TGWeapon.TGWeap_M249D.CauseShellDrop
// [0x00820102] 
struct ATGWeap_M249D_execCauseShellDrop_Parms
{
	// class AUTPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 RealStartRotation;                                		// 0x0010 (0x000C) [0x0000000000000000]              
	// class UUDKSkeletalMeshComponent*                SKMesh;                                           		// 0x001C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGWeapon.TGWeap_M249D.AttachMuzzleFlash
// [0x00020102] 
struct ATGWeap_M249D_execAttachMuzzleFlash_Parms
{
	// class USkeletalMeshComponent*                   SKMesh;                                           		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGWeapon.TGWeap_M249D.MuzzleFlashTimer02
// [0x00020902] ( FUNC_Event )
struct ATGWeap_M249D_eventMuzzleFlashTimer02_Parms
{
};

// Function TGWeapon.TGWeap_M249D.CauseMuzzleFlash
// [0x00020902] ( FUNC_Event )
struct ATGWeap_M249D_eventCauseMuzzleFlash_Parms
{
	// class AUTPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          MuzzleTemplate;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M249D.PlayFireEffects2
// [0x00024102] 
struct ATGWeap_M249D_execPlayFireEffects2_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           DesiredDuration;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M249D.PlayFireEffects
// [0x00024102] 
struct ATGWeap_M249D_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M249D.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M249D_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M249D.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M249D_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M249D.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M249D_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M249Fire.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M249Fire_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_M249GAI.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M249GAI_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M249GAI.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M249GAI_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M249GAI.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M249GAI_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M26Grenade.ProjectileFire
// [0x00820102] 
struct ATGWeap_M26Grenade_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGProj_M26Grenade*                       SpawnedGrenade;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M48Gold.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M48Gold_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_M48HAWK.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M48HAWK_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_M4A1.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4A1_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1_ACU.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1_ACU_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1_ACU.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1_ACU_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_ACU.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4A1_ACU_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_ACU.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1_ACU_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1_AFM.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1_AFM_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1_AFM.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1_AFM_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_AFM.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4A1_AFM_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_AFM.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1_AFM_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1_G.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1_G_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1_G.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1_G_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_G.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4A1_G_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_G.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1_G_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1_Long_Range.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1_Long_Range_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1_Long_Range.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1_Long_Range_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_Long_Range.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4A1_Long_Range_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_Long_Range.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1_Long_Range_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1_mend.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1_mend_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1_mend.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1_mend_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_mend.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4A1_mend_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_mend.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1_mend_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1_NZ.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1_NZ_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1_NZ.DrawZoomedOverlay
// [0x00020102] 
struct ATGWeap_M4A1_NZ_execDrawZoomedOverlay_Parms
{
	class AHUD*                                        H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           ScaleX;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           ScaleY;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           StartX;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           OldOrgX;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           OldOrgY;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           OldClipX;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           OldClipY;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_NZ.DrawWeaponCrosshairEx
// [0x00020102] 
struct ATGWeap_M4A1_NZ_execDrawWeaponCrosshairEx_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTHUD*                                   H;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           X;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           ScreenX;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           ScreenY;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           CrossHairSizeTemp;                                		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           CrossHairLineLengthTemp;                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           LastStateCrossHairSize;                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           LastStateCrossHairLineLength;                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_NZ.DrawWeaponCrosshair
// [0x00020102] 
struct ATGWeap_M4A1_NZ_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1_NZ.ReplayIdleAnim
// [0x00020102] 
struct ATGWeap_M4A1_NZ_execReplayIdleAnim_Parms
{
	// class ATGPawn*                                  UTP;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_NZ.ToggleFireReference
// [0x00020102] 
struct ATGWeap_M4A1_NZ_execToggleFireReference_Parms
{
	unsigned long                                      bTurnSecondaryAimFireRate : 1;                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGPawn*                                  TPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_NZ.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1_NZ_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_NZ.NotifySetCrossHair
// [0x00020902] ( FUNC_Event )
struct ATGWeap_M4A1_NZ_eventNotifySetCrossHair_Parms
{
	class UTexture2D*                                  CrossHairHUD;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1_NZ.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1_NZ_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1_old.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1_old_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1_old.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1_old_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_old.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4A1_old_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_old.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1_old_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1_Pircing.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1_Pircing_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1_Pircing.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1_Pircing_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_Pircing.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4A1_Pircing_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_Pircing.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1_Pircing_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1_SCM.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1_SCM_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1_SCM.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1_SCM_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_SCM.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4A1_SCM_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_SCM.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1_SCM_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1_Spe_Rel.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1_Spe_Rel_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1_Spe_Rel.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1_Spe_Rel_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_Spe_Rel.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4A1_Spe_Rel_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_Spe_Rel.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1_Spe_Rel_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1_SPM.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1_SPM_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1_SPM.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1_SPM_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_SPM.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4A1_SPM_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1_SPM.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1_SPM_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1Diamond.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1Diamond_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1Diamond.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1Diamond_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1Diamond.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4A1Diamond_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1Diamond.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1Diamond_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1Dragon.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1Dragon_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1Dragon.NotifyWeaponHeadShot
// [0x00020102] 
struct ATGWeap_M4A1Dragon_execNotifyWeaponHeadShot_Parms
{
};

// Function TGWeapon.TGWeap_M4A1Dragon.Tick
// [0x00820902] ( FUNC_Event )
struct ATGWeap_M4A1Dragon_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FLinearColor                             LinearColor1;                                     		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1Dragon.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1Dragon_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1Dragon.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4A1Dragon_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1Dragon.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1Dragon_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1Dragon.SpawnHitEffect
// [0x00022002] 
//struct UTGDmgType_M4A1Dragon_execSpawnHitEffect_Parms
//{
//	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
//	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
//	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
//	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
//	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
//};

// Function TGWeapon.TGDmgType_M4A1game.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1game_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1game.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1game_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1game.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4A1game_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1game.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1game_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1GOLD.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1GOLD_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1GOLD.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1GOLD_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1GOLD.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4A1GOLD_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1GOLD.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1GOLD_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1Member.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1Member_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1Member.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1Member_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1Member.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4A1Member_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1Member.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1Member_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1OET.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1OET_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1OET.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1OET_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1OET.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4A1OET_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1OET.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1OET_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1P_Gold.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1P_Gold_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1P_Gold.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1P_Gold_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1P_Gold.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4A1P_Gold_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1P_Gold.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1P_Gold_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1Surpr.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1Surpr_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1Surpr.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1Surpr_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1Surpr.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4A1Surpr_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1Surpr.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1Surpr_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1X.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4A1X_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4A1X.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4A1X_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1X.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4A1X_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4A1X.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4A1X_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4A1X.SpawnHitEffect
// [0x00022002] 
//struct UTGDmgType_M4A1X_execSpawnHitEffect_Parms
//{
//	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
//	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
//	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
//	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
//	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
//};

// Function TGWeapon.TGDmgType_M4fr_Copper.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4fr_Copper_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4fr_Copper.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4fr_Copper_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4fr_Copper.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4fr_Copper_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4fr_Copper.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4fr_Copper_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4fr_Gold.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4fr_Gold_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4fr_Gold.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4fr_Gold_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4fr_Gold.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4fr_Gold_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4fr_Gold.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4fr_Gold_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M4fr_Silver.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M4fr_Silver_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M4fr_Silver.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M4fr_Silver_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4fr_Silver.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M4fr_Silver_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M4fr_Silver.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M4fr_Silver_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M60.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M60_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M60.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M60_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M60.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M60_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M60.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M60_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M608.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M608_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_M60_cloud.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M60_cloud_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M60_cloud.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M60_cloud_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M60_cloud.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M60_cloud_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M60_cloud.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M60_cloud_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M60Child.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M60Child_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M60Child.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M60Child_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M60Child.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M60Child_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M60Child.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M60Child_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M60oet.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M60oet_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_M60oet.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_M60oet_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M60oet.ViewTargetReady
// [0x00020102] 
struct ATGWeap_M60oet_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M60oet.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_M60oet_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_M95.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M95_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_M95GAI.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M95GAI_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_M95gold.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M95gold_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_M95Snake.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M95Snake_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_M98b.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_M98b_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_MG3.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_MG3_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_MG3.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_MG3_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_MG3.ViewTargetReady
// [0x00020102] 
struct ATGWeap_MG3_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_MG3.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_MG3_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_MidAutumn.ProjectileFire
// [0x00820102] 
struct ATGWeap_MidAutumn_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGProj_MidAutumn*                        SpawnedGrenade;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_MINI14.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_MINI14_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_MINI14.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_MINI14_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_MINI14.ViewTargetReady
// [0x00020102] 
struct ATGWeap_MINI14_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_MINI14.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_MINI14_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_MiniGun.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_MiniGun_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_MinigunGAI.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_MinigunGAI_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_MinigunGold.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_MinigunGold_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_MinigunSnake.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_MinigunSnake_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_MinigunSnake.RefeshSpecialGunMirror
// [0x00020102] 
struct ATGWeap_MinigunSnake_execRefeshSpecialGunMirror_Parms
{
};

// Function TGWeapon.TGWeap_MinigunSnake.IsSpecialGun
// [0x00020102] 
struct ATGWeap_MinigunSnake_execIsSpecialGun_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGWeapon.TGWeap_MinigunSnake.DelayActivateAmmoDisplayComp
// [0x00020102] 
struct ATGWeap_MinigunSnake_execDelayActivateAmmoDisplayComp_Parms
{
};

// Function TGWeapon.TGWeap_MinigunSnake.TimeWeaponEquipping
// [0x00020102] 
struct ATGWeap_MinigunSnake_execTimeWeaponEquipping_Parms
{
};

// Function TGWeapon.TGWeap_MinigunSnake.DetachWeapon
// [0x00020102] 
struct ATGWeap_MinigunSnake_execDetachWeapon_Parms
{
};

// Function TGWeapon.TGWeap_MinigunSnake.ModifyFiringSmokeGeer
// [0x00020102] 
struct ATGWeap_MinigunSnake_execModifyFiringSmokeGeer_Parms
{
};

// Function TGWeapon.TGWeap_MinigunSnake.NotifySmokeEffectInitialization
// [0x00020102] 
struct ATGWeap_MinigunSnake_execNotifySmokeEffectInitialization_Parms
{
};

// Function TGWeapon.TGWeap_MinigunSnake.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATGWeap_MinigunSnake_eventPostBeginPlay_Parms
{
};

// Function TGWeapon.TGDmgType_Minimi.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_Minimi_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_Minimi.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_Minimi_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_Minimi.ViewTargetReady
// [0x00020102] 
struct ATGWeap_Minimi_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_Minimi.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_Minimi_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_MinimiGAI.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_MinimiGAI_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_MinimiGAI.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_MinimiGAI_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_MinimiGAI.ViewTargetReady
// [0x00020102] 
struct ATGWeap_MinimiGAI_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_MinimiGAI.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_MinimiGAI_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_MinimiOET.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_MinimiOET_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_MinimiOET.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_MinimiOET_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_MinimiOET.ViewTargetReady
// [0x00020102] 
struct ATGWeap_MinimiOET_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_MinimiOET.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_MinimiOET_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_MK2.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_MK2_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_MK2game.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_MK2game_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_MK4.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_MK4_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_MK4gold.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_MK4gold_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_MK4QT.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_MK4QT_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_MK4Snake.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_MK4Snake_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_MP5.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_MP5_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_MP5.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_MP5_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_MP5.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_MP5_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_MP5_fire.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_MP5_fire_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_MP5_fire.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_MP5_fire_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_MP5_fire.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_MP5_fire_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_mp5SD10.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_mp5SD10_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_mp5SD10.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_mp5SD10_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_mp5SD10.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_mp5SD10_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_MSR_G.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_MSR_G_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_MSRacu.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_MSRacu_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_MSRgame.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_MSRgame_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_MUAL.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_MUAL_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_MUAL.ServerWeaponClipChanged
// [0x002200C2] 
struct ATGWeap_MUAL_execServerWeaponClipChanged_Parms
{
};

// Function TGWeapon.TGWeap_MUAL.TimeWeaponClipChanging
// [0x00020102] 
struct ATGWeap_MUAL_execTimeWeaponClipChanging_Parms
{
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_MUAL.CauseMuzzleFlashLight
// [0x00020902] ( FUNC_Event )
struct ATGWeap_MUAL_eventCauseMuzzleFlashLight_Parms
{
};

// Function TGWeapon.TGWeap_MUAL.CauseShellDrop
// [0x00020102] 
struct ATGWeap_MUAL_execCauseShellDrop_Parms
{
};

// Function TGWeapon.TGWeap_MUAL.AttachMuzzleFlash
// [0x00020102] 
struct ATGWeap_MUAL_execAttachMuzzleFlash_Parms
{
	// class USkeletalMeshComponent*                   SKMesh;                                           		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGWeapon.TGWeap_MUAL.MuzzleFlashTimer02
// [0x00020902] ( FUNC_Event )
struct ATGWeap_MUAL_eventMuzzleFlashTimer02_Parms
{
};

// Function TGWeapon.TGWeap_MUAL.CauseMuzzleFlash
// [0x00020902] ( FUNC_Event )
struct ATGWeap_MUAL_eventCauseMuzzleFlash_Parms
{
	// class AUTPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          MuzzleTemplate;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_nailbat.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_nailbat_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_OTS14.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_OTS14_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_OTS14.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_OTS14_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_OTS14.ViewTargetReady
// [0x00020102] 
struct ATGWeap_OTS14_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_OTS14.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_OTS14_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_P90.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_P90_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_P90.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_P90_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_P90.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_P90_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_Pumpkin.ProjectileFire
// [0x00820102] 
struct ATGWeap_Pumpkin_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGProj_Pumpkin*                          SpawnedGrenade;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_PVE03.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_PVE03_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_PVE03.InstantFire
// [0x00820102] 
struct ATGWeap_PVE03_execInstantFire_Parms
{
	// struct FVector                                  EndTrace;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< struct FImpactInfo >                    ImpactList;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FVector >                        HitLocationTemp;                                  		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FVectorNoCompress                        repStartLoc;                                      		// 0x002C (0x000C) [0x0000000000000000]              
	// TArray< struct FClientAttackPawnInfo >          AttackPInfoList;                                  		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bHitVehicle : 1;                                  		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FRotator                                 CurrentViewRotator;                               		// 0x0048 (0x000C) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_PVE03.CauseMuzzleFlash
// [0x00820902] ( FUNC_Event )
struct ATGWeap_PVE03_eventCauseMuzzleFlash_Parms
{
	// class AUTPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  EndLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	// class USkeletalMeshComponent*                   SKMesh;                                           		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UParticleSystemComponent*                 PSC;                                              		// 0x0014 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// struct FVector                                  SpawnLocation;                                    		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotation;                                    		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_PX4.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_PX4_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_QBS09.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_QBS09_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_QBS09.PlayFireEffects
// [0x00024102] 
struct ATGWeap_QBS09_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_QBU10.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_QBU10_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_QBU88.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_QBU88_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_QBU88.InstantFire
// [0x00020102] 
struct ATGWeap_QBU88_execInstantFire_Parms
{
};

// Function TGWeapon.TGWeap_QBU88.EndFire
// [0x00020102] 
struct ATGWeap_QBU88_execEndFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_QBU88.ServerGotoStateWeaponClipChanging
// [0x002200C2] 
struct ATGWeap_QBU88_execServerGotoStateWeaponClipChanging_Parms
{
	// class ATGPawn*                                  TPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_QBU88.Tick
// [0x00020902] ( FUNC_Event )
struct ATGWeap_QBU88_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_QBU88.DisplaySpecial
// [0x00820102] 
struct ATGWeap_QBU88_execDisplaySpecial_Parms
{
	class UCanvas*                                     LocalCavas;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector2D                                pos;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           DrawRate;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_QBU88.FireAmmunition
// [0x00020102] 
struct ATGWeap_QBU88_execFireAmmunition_Parms
{
	// class ATGPawn*                                  TPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           ShotFiredMul;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_QBZ03.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_QBZ03_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_QBZ03.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_QBZ03_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_QBZ03.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_QBZ03_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_QBZ95.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_QBZ95_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_QBZ95.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_QBZ95_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_QBZ95.ViewTargetReady
// [0x00020102] 
struct ATGWeap_QBZ95_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_QBZ95.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_QBZ95_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_QBZ95_mend.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_QBZ95_mend_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_QBZ95_mend.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_QBZ95_mend_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_QBZ95_mend.ViewTargetReady
// [0x00020102] 
struct ATGWeap_QBZ95_mend_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_QBZ95_mend.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_QBZ95_mend_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_QBZ95cp.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_QBZ95cp_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_QBZ95cp.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_QBZ95cp_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_QBZ95cp.ViewTargetReady
// [0x00020102] 
struct ATGWeap_QBZ95cp_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_QBZ95cp.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_QBZ95cp_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_QBZ95gold.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_QBZ95gold_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_QBZ95gold.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_QBZ95gold_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_QBZ95gold.ViewTargetReady
// [0x00020102] 
struct ATGWeap_QBZ95gold_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_QBZ95gold.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_QBZ95gold_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_QBZ95OET.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_QBZ95OET_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_QBZ95OET.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_QBZ95OET_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_QBZ95OET.ViewTargetReady
// [0x00020102] 
struct ATGWeap_QBZ95OET_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_QBZ95OET.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_QBZ95OET_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_QBZ95Sil.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_QBZ95Sil_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_QBZ95Sil.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_QBZ95Sil_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_QBZ95Sil.ViewTargetReady
// [0x00020102] 
struct ATGWeap_QBZ95Sil_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_QBZ95Sil.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_QBZ95Sil_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_QJY88.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_QJY88_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_QJY88.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_QJY88_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_QJY88.ViewTargetReady
// [0x00020102] 
struct ATGWeap_QJY88_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_QJY88.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_QJY88_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_QJY88oet.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_QJY88oet_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_QJY88oet.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_QJY88oet_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_QJY88oet.ViewTargetReady
// [0x00020102] 
struct ATGWeap_QJY88oet_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_QJY88oet.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_QJY88oet_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_QSZ92.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_QSZ92_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_R700.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_R700_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_R700GAI.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_R700GAI_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_Remington_MSR.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_Remington_MSR_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_RPK.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_RPK_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_RPK.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_RPK_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_RPK.ViewTargetReady
// [0x00020102] 
struct ATGWeap_RPK_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_RPK.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_RPK_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_RPKGAI.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_RPKGAI_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_RPKGAI.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_RPKGAI_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_RPKGAI.ViewTargetReady
// [0x00020102] 
struct ATGWeap_RPKGAI_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_RPKGAI.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_RPKGAI_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_RPKgold.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_RPKgold_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_RPKgold.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_RPKgold_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_RPKgold.ViewTargetReady
// [0x00020102] 
struct ATGWeap_RPKgold_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_RPKgold.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_RPKgold_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_RPKM.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_RPKM_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_RPKM.DelayResetPoisonTubeColorGreen
// [0x00820102] 
struct ATGWeap_RPKM_execDelayResetPoisonTubeColorGreen_Parms
{
	// struct FLinearColor                             LinearColor1;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_RPKM.SetPoisionTubeColor
// [0x00820102] 
struct ATGWeap_RPKM_execSetPoisionTubeColor_Parms
{
	// struct FLinearColor                             LinearColor1;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_RPKM.FullAmmo
// [0x00020102] 
struct ATGWeap_RPKM_execFullAmmo_Parms
{
};

// Function TGWeapon.TGWeap_RPKM.TimeWeaponClipChanging
// [0x00020102] 
struct ATGWeap_RPKM_execTimeWeaponClipChanging_Parms
{
};

// Function TGWeapon.TGWeap_RPKM.DetachWeapon
// [0x00020102] 
struct ATGWeap_RPKM_execDetachWeapon_Parms
{
};

// Function TGWeapon.TGWeap_RPKM.TimeWeaponEquipping
// [0x00020102] 
struct ATGWeap_RPKM_execTimeWeaponEquipping_Parms
{
};

// Function TGWeapon.TGWeap_RPKM.PlayGrenadeThrowEffect
// [0x00820102] 
struct ATGWeap_RPKM_execPlayGrenadeThrowEffect_Parms
{
	// struct FLinearColor                             LinearColor1;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_RPKM.SetDamageScale
// [0x00024002] 
struct ATGWeap_RPKM_execSetDamageScale_Parms
{
	float                                              InDamageScale;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsSpecial : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TGWeapon.TGWeap_RPKM.SetAmmoCountScale
// [0x00024002] 
struct ATGWeap_RPKM_execSetAmmoCountScale_Parms
{
	float                                              ClipAmmoCountScale;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              CarriedAmmoCountScale;                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsSpecialWeapon : 1;                             		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TGWeapon.TGWeap_RPKM.ProjectileFire
// [0x00820102] 
struct ATGWeap_RPKM_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGProj_RPKMPoison*                       SpawnedGrenade;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGPlayerController*                      TGP;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ATGPlayerReplicationInfo*                 PRI;                                              		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_RPKM.GetClipChangeTime
// [0x00020102] 
struct ATGWeap_RPKM_execGetClipChangeTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           RealClipChangeTime;                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_RPKM.ModifyWeaponSpecificProperty
// [0x00020102] 
struct ATGWeap_RPKM_execModifyWeaponSpecificProperty_Parms
{
	struct FName                                       PropertyName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              PropertyValue;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_RPKM.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_RPKM_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_RPKM.ViewTargetReady
// [0x00020102] 
struct ATGWeap_RPKM_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_RPKM.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_RPKM_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_SA58.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_SA58_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_SA58.DrawZoomedOverlay
// [0x00020102] 
struct ATGWeap_SA58_execDrawZoomedOverlay_Parms
{
	class AHUD*                                        H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           ScaleX;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           ScaleY;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           StartX;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           OldOrgX;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           OldOrgY;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           OldClipX;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           OldClipY;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SA58.DrawWeaponCrosshairEx
// [0x00020102] 
struct ATGWeap_SA58_execDrawWeaponCrosshairEx_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTHUD*                                   H;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           X;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           ScreenX;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           ScreenY;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           CrossHairSizeTemp;                                		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           CrossHairLineLengthTemp;                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           LastStateCrossHairSize;                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           LastStateCrossHairLineLength;                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SA58.DrawWeaponCrosshair
// [0x00020102] 
struct ATGWeap_SA58_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_SA58.ReplayIdleAnim
// [0x00020102] 
struct ATGWeap_SA58_execReplayIdleAnim_Parms
{
	// class ATGPawn*                                  UTP;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SA58.ToggleFireReference
// [0x00020102] 
struct ATGWeap_SA58_execToggleFireReference_Parms
{
	unsigned long                                      bTurnSecondaryAimFireRate : 1;                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGPawn*                                  TPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SA58.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_SA58_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SA58.NotifySetCrossHair
// [0x00020902] ( FUNC_Event )
struct ATGWeap_SA58_eventNotifySetCrossHair_Parms
{
	class UTexture2D*                                  CrossHairHUD;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_SA58.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_SA58_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_SCAR.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_SCAR_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_SCAR.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_SCAR_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SCAR.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_SCAR_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_SCAR_PHL.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_SCAR_PHL_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_SCAR_PHL.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_SCAR_PHL_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SCAR_PHL.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_SCAR_PHL_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_SCAR_RAZER.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_SCAR_RAZER_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_SCAR_RAZER.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_SCAR_RAZER_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SCAR_RAZER.ViewTargetReady
// [0x00020102] 
struct ATGWeap_SCAR_RAZER_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SCAR_RAZER.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_SCAR_RAZER_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_SCARDJ.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_SCARDJ_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_SCARDJ.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_SCARDJ_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SCARDJ.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_SCARDJ_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SCARDJ.DisplaySpecial
// [0x00820102] 
struct ATGWeap_SCARDJ_execDisplaySpecial_Parms
{
	class UCanvas*                                     LocalCavas;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FColor                                   CurrentColor;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector2D                                pos;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_SCARDJ2.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_SCARDJ2_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_SCARGAI.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_SCARGAI_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_SCARGAI.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_SCARGAI_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SCARGAI.ViewTargetReady
// [0x00020102] 
struct ATGWeap_SCARGAI_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SCARGAI.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_SCARGAI_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_SCARSnake.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_SCARSnake_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_SCARSnake.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_SCARSnake_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SCARSnake.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_SCARSnake_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_SG551.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_SG551_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_SG551.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_SG551_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SG551.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_SG551_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_SG551GAI.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_SG551GAI_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_SG551GAI.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_SG551GAI_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SG551GAI.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_SG551GAI_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_ShotGun.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_ShotGun_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_ShotgunFour.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_ShotgunFour_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_ShotgunFour.ServerWeaponClipChanged
// [0x002200C2] 
struct ATGWeap_ShotgunFour_execServerWeaponClipChanged_Parms
{
};

// Function TGWeapon.TGWeap_ShotgunFour.TimeWeaponClipChanging
// [0x00020102] 
struct ATGWeap_ShotgunFour_execTimeWeaponClipChanging_Parms
{
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_sigACP.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_sigACP_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_sigACP.CauseMuzzleFlashLight
// [0x00020902] ( FUNC_Event )
struct ATGWeap_sigACP_eventCauseMuzzleFlashLight_Parms
{
};

// Function TGWeapon.TGWeap_sigACP.CauseShellDrop
// [0x00820102] 
struct ATGWeap_sigACP_execCauseShellDrop_Parms
{
	// class AUTPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 RealStartRotation;                                		// 0x0010 (0x000C) [0x0000000000000000]              
	// class UUDKSkeletalMeshComponent*                SKMesh;                                           		// 0x001C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGWeapon.TGWeap_sigACP.AttachMuzzleFlash
// [0x00020102] 
struct ATGWeap_sigACP_execAttachMuzzleFlash_Parms
{
	// class USkeletalMeshComponent*                   SKMesh;                                           		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGWeapon.TGWeap_sigACP.MuzzleFlashTimer02
// [0x00020902] ( FUNC_Event )
struct ATGWeap_sigACP_eventMuzzleFlashTimer02_Parms
{
};

// Function TGWeapon.TGWeap_sigACP.CauseMuzzleFlash
// [0x00020902] ( FUNC_Event )
struct ATGWeap_sigACP_eventCauseMuzzleFlash_Parms
{
	// class AUTPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          MuzzleTemplate;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_sigACP.PlayFireEffects
// [0x00024102] 
struct ATGWeap_sigACP_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_sigACP.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_sigACP_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_sigACP.ViewTargetReady
// [0x00020102] 
struct ATGWeap_sigACP_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_sigACP.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_sigACP_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_SnakeSword.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_SnakeSword_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_SnakeSword.PlayFirstPersonAnim
// [0x00020102] 
struct ATGWeap_SnakeSword_execPlayFirstPersonAnim_Parms
{
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SnowBall.ProjectileFire
// [0x00820102] 
struct ATGWeap_SnowBall_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGProj_SnowBall*                         SpawnedGrenade;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_SPAS12.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_SPAS12_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_SPAS12.CalcWeaponFireEX
// [0x00C24102] 
struct ATGWeap_SPAS12_execCalcWeaponFireEX_Parms
{
	struct FVector                                     StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     EndTrace;                                         		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FImpactInfo >                       ImpactList;                                       		// 0x0018 (0x000C) [0x0000000000400190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FClientAttackPawnInfo >             AttackPInfoList;                                  		// 0x0024 (0x000C) [0x0000000000400190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FImpactInfo                                 ReturnValue;                                      		// 0x0030 (0x0054) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FImpactInfo                              CurrentImpact;                                    		// 0x0084 (0x0054) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_SPAS12_dust.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_SPAS12_dust_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_SuckGrenade.ProjectileFire
// [0x00820102] 
struct ATGWeap_SuckGrenade_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGProj_SuckGrenade*                      SpawnedGrenade;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_SVD.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_SVD_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_SVD.InstantFire
// [0x00020102] 
struct ATGWeap_SVD_execInstantFire_Parms
{
};

// Function TGWeapon.TGWeap_SVD.EndFire
// [0x00020102] 
struct ATGWeap_SVD_execEndFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_SVD.ServerGotoStateWeaponClipChanging
// [0x002200C2] 
struct ATGWeap_SVD_execServerGotoStateWeaponClipChanging_Parms
{
	// class ATGPawn*                                  TPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SVD.Tick
// [0x00020902] ( FUNC_Event )
struct ATGWeap_SVD_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_SVD.DisplaySpecial
// [0x00820102] 
struct ATGWeap_SVD_execDisplaySpecial_Parms
{
	class UCanvas*                                     LocalCavas;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector2D                                pos;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           DrawRate;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SVD.FireAmmunition
// [0x00020102] 
struct ATGWeap_SVD_execFireAmmunition_Parms
{
	// class ATGPawn*                                  TPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           ShotFiredMul;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_SVDGAI.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_SVDGAI_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_SVDGAI.InstantFire
// [0x00020102] 
struct ATGWeap_SVDGAI_execInstantFire_Parms
{
};

// Function TGWeapon.TGWeap_SVDGAI.EndFire
// [0x00020102] 
struct ATGWeap_SVDGAI_execEndFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_SVDGAI.ServerGotoStateWeaponClipChanging
// [0x002200C2] 
struct ATGWeap_SVDGAI_execServerGotoStateWeaponClipChanging_Parms
{
	// class ATGPawn*                                  TPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SVDGAI.Tick
// [0x00020902] ( FUNC_Event )
struct ATGWeap_SVDGAI_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_SVDGAI.DisplaySpecial
// [0x00820102] 
struct ATGWeap_SVDGAI_execDisplaySpecial_Parms
{
	class UCanvas*                                     LocalCavas;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector2D                                pos;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           DrawRate;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_SVDGAI.FireAmmunition
// [0x00020102] 
struct ATGWeap_SVDGAI_execFireAmmunition_Parms
{
	// class ATGPawn*                                  TPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           ShotFiredMul;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_SWM500.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_SWM500_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_T2MK5.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_T2MK5_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_T2MK5.DrawZoomedOverlay
// [0x00020102] 
struct ATGWeap_T2MK5_execDrawZoomedOverlay_Parms
{
	class AHUD*                                        H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           ScaleX;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           ScaleY;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           StartX;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           OldOrgX;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           OldOrgY;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           OldClipX;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           OldClipY;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_T2MK5.DrawWeaponCrosshairEx
// [0x00020102] 
struct ATGWeap_T2MK5_execDrawWeaponCrosshairEx_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTHUD*                                   H;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           X;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           ScreenX;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           ScreenY;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           CrossHairSizeTemp;                                		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           CrossHairLineLengthTemp;                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           LastStateCrossHairSize;                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           LastStateCrossHairLineLength;                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_T2MK5.DrawWeaponCrosshair
// [0x00020102] 
struct ATGWeap_T2MK5_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_T2MK5.ReplayIdleAnim
// [0x00020102] 
struct ATGWeap_T2MK5_execReplayIdleAnim_Parms
{
	// class ATGPawn*                                  UTP;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_T2MK5.ToggleFireReference
// [0x00020102] 
struct ATGWeap_T2MK5_execToggleFireReference_Parms
{
	unsigned long                                      bTurnSecondaryAimFireRate : 1;                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGPawn*                                  TPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_T2MK5.NotifySetCrossHair
// [0x00020902] ( FUNC_Event )
struct ATGWeap_T2MK5_eventNotifySetCrossHair_Parms
{
	class UTexture2D*                                  CrossHairHUD;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_T2MK5.NotifySetCrossHairHit
// [0x00020902] ( FUNC_Event )
struct ATGWeap_T2MK5_eventNotifySetCrossHairHit_Parms
{
	class UTexture2D*                                  CrossHairHitHUD;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_T2MK5.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_T2MK5_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_T2MK5.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_T2MK5_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_TAR21.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_TAR21_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_TAR21.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_TAR21_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_TAR21.ViewTargetReady
// [0x00020102] 
struct ATGWeap_TAR21_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_TAR21.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_TAR21_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_TMP.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_TMP_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_TMP.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_TMP_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_TMP.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_TMP_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_TPG1.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_TPG1_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_ULTIMAX100.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_ULTIMAX100_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_ULTIMAX100.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_ULTIMAX100_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_ULTIMAX100.ViewTargetReady
// [0x00020102] 
struct ATGWeap_ULTIMAX100_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_ULTIMAX100.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_ULTIMAX100_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_UMP.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_UMP_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_UMP.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_UMP_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_UMP.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_UMP_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_UMP45dust.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_UMP45dust_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_UMP45dust.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_UMP45dust_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_UMP45dust.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_UMP45dust_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_USP.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_USP_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_UZI.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_UZI_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_UZI.CauseMuzzleFlashLight
// [0x00020902] ( FUNC_Event )
struct ATGWeap_UZI_eventCauseMuzzleFlashLight_Parms
{
};

// Function TGWeapon.TGWeap_UZI.CauseShellDrop
// [0x00820102] 
struct ATGWeap_UZI_execCauseShellDrop_Parms
{
	// class AUTPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 RealStartRotation;                                		// 0x0010 (0x000C) [0x0000000000000000]              
	// class UUDKSkeletalMeshComponent*                SKMesh;                                           		// 0x001C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGWeapon.TGWeap_UZI.AttachMuzzleFlash
// [0x00020102] 
struct ATGWeap_UZI_execAttachMuzzleFlash_Parms
{
	// class USkeletalMeshComponent*                   SKMesh;                                           		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGWeapon.TGWeap_UZI.MuzzleFlashTimer02
// [0x00020902] ( FUNC_Event )
struct ATGWeap_UZI_eventMuzzleFlashTimer02_Parms
{
};

// Function TGWeapon.TGWeap_UZI.CauseMuzzleFlash
// [0x00020902] ( FUNC_Event )
struct ATGWeap_UZI_eventCauseMuzzleFlash_Parms
{
	// class AUTPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          MuzzleTemplate;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_UZI.PlayFireEffects
// [0x00024102] 
struct ATGWeap_UZI_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_UZI.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_UZI_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_UZI.ViewTargetReady
// [0x00020102] 
struct ATGWeap_UZI_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_UZI.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_UZI_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_UZI77.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_UZI77_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_UZI77.CauseMuzzleFlashLight
// [0x00020902] ( FUNC_Event )
struct ATGWeap_UZI77_eventCauseMuzzleFlashLight_Parms
{
};

// Function TGWeapon.TGWeap_UZI77.CauseShellDrop
// [0x00820102] 
struct ATGWeap_UZI77_execCauseShellDrop_Parms
{
	// class AUTPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 RealStartRotation;                                		// 0x0010 (0x000C) [0x0000000000000000]              
	// class UUDKSkeletalMeshComponent*                SKMesh;                                           		// 0x001C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGWeapon.TGWeap_UZI77.AttachMuzzleFlash
// [0x00020102] 
struct ATGWeap_UZI77_execAttachMuzzleFlash_Parms
{
	// class USkeletalMeshComponent*                   SKMesh;                                           		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGWeapon.TGWeap_UZI77.MuzzleFlashTimer02
// [0x00020902] ( FUNC_Event )
struct ATGWeap_UZI77_eventMuzzleFlashTimer02_Parms
{
};

// Function TGWeapon.TGWeap_UZI77.CauseMuzzleFlash
// [0x00020902] ( FUNC_Event )
struct ATGWeap_UZI77_eventCauseMuzzleFlash_Parms
{
	// class AUTPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          MuzzleTemplate;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_UZI77.PlayFireEffects
// [0x00024102] 
struct ATGWeap_UZI77_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_UZI77.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_UZI77_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_UZI77.ViewTargetReady
// [0x00020102] 
struct ATGWeap_UZI77_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_UZI77.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_UZI77_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_UZIacu.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_UZIacu_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_UZIacu.CauseMuzzleFlashLight
// [0x00020902] ( FUNC_Event )
struct ATGWeap_UZIacu_eventCauseMuzzleFlashLight_Parms
{
};

// Function TGWeapon.TGWeap_UZIacu.CauseShellDrop
// [0x00820102] 
struct ATGWeap_UZIacu_execCauseShellDrop_Parms
{
	// class AUTPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 RealStartRotation;                                		// 0x0010 (0x000C) [0x0000000000000000]              
	// class UUDKSkeletalMeshComponent*                SKMesh;                                           		// 0x001C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGWeapon.TGWeap_UZIacu.AttachMuzzleFlash
// [0x00020102] 
struct ATGWeap_UZIacu_execAttachMuzzleFlash_Parms
{
	// class USkeletalMeshComponent*                   SKMesh;                                           		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function TGWeapon.TGWeap_UZIacu.MuzzleFlashTimer02
// [0x00020902] ( FUNC_Event )
struct ATGWeap_UZIacu_eventMuzzleFlashTimer02_Parms
{
};

// Function TGWeapon.TGWeap_UZIacu.CauseMuzzleFlash
// [0x00020902] ( FUNC_Event )
struct ATGWeap_UZIacu_eventCauseMuzzleFlash_Parms
{
	// class AUTPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          MuzzleTemplate;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_UZIacu.PlayFireEffects
// [0x00024102] 
struct ATGWeap_UZIacu_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_UZIacu.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_UZIacu_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_UZIacu.ViewTargetReady
// [0x00020102] 
struct ATGWeap_UZIacu_execViewTargetReady_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_UZIacu.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_UZIacu_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_WA2000.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_WA2000_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_WJQ.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_WJQ_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_WJQworker.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_WJQworker_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGDmgType_XM8.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_XM8_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_XM8.DrawZoomedOverlay
// [0x00020102] 
struct ATGWeap_XM8_execDrawZoomedOverlay_Parms
{
	class AHUD*                                        H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           ScaleX;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           ScaleY;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           StartX;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           OldOrgX;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           OldOrgY;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           OldClipX;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           OldClipY;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_XM8.DrawWeaponCrosshairEx
// [0x00020102] 
struct ATGWeap_XM8_execDrawWeaponCrosshairEx_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTHUD*                                   H;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           X;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           ScreenX;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           ScreenY;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           CrossHairSizeTemp;                                		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           CrossHairLineLengthTemp;                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           LastStateCrossHairSize;                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           LastStateCrossHairLineLength;                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_XM8.DrawWeaponCrosshair
// [0x00020102] 
struct ATGWeap_XM8_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_XM8.ReplayIdleAnim
// [0x00020102] 
struct ATGWeap_XM8_execReplayIdleAnim_Parms
{
	// class ATGPawn*                                  UTP;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_XM8.ToggleFireReference
// [0x00020102] 
struct ATGWeap_XM8_execToggleFireReference_Parms
{
	unsigned long                                      bTurnSecondaryAimFireRate : 1;                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGPawn*                                  TPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_XM8.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_XM8_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_XM8.NotifySetCrossHair
// [0x00020902] ( FUNC_Event )
struct ATGWeap_XM8_eventNotifySetCrossHair_Parms
{
	class UTexture2D*                                  CrossHairHUD;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_XM8.NotifySetCrossHairHit
// [0x00020902] ( FUNC_Event )
struct ATGWeap_XM8_eventNotifySetCrossHairHit_Parms
{
	class UTexture2D*                                  CrossHairHitHUD;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_XM8.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_XM8_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGDmgType_XM8GAI.SpawnHitEffect
// [0x00022002] 
struct UTGDmgType_XM8GAI_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_XM8GAI.DrawZoomedOverlay
// [0x00020102] 
struct ATGWeap_XM8GAI_execDrawZoomedOverlay_Parms
{
	class AHUD*                                        H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           ScaleX;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           ScaleY;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           StartX;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           OldOrgX;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           OldOrgY;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           OldClipX;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           OldClipY;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_XM8GAI.DrawWeaponCrosshairEx
// [0x00020102] 
struct ATGWeap_XM8GAI_execDrawWeaponCrosshairEx_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTHUD*                                   H;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           X;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           ScreenX;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           ScreenY;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           CrossHairSizeTemp;                                		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           CrossHairLineLengthTemp;                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           LastStateCrossHairSize;                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           LastStateCrossHairLineLength;                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           LocalVelFastThreshold;                            		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           LocalVelSlowThreshold;                            		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_XM8GAI.DrawWeaponCrosshair
// [0x00020102] 
struct ATGWeap_XM8GAI_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_XM8GAI.ReplayIdleAnim
// [0x00020102] 
struct ATGWeap_XM8GAI_execReplayIdleAnim_Parms
{
	// class ATGPawn*                                  UTP;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_XM8GAI.ToggleFireReference
// [0x00020102] 
struct ATGWeap_XM8GAI_execToggleFireReference_Parms
{
	unsigned long                                      bTurnSecondaryAimFireRate : 1;                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATGPawn*                                  TPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_XM8GAI.PlayWeaponPutDown
// [0x00020102] 
struct ATGWeap_XM8GAI_execPlayWeaponPutDown_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_XM8GAI.NotifySetCrossHair
// [0x00020902] ( FUNC_Event )
struct ATGWeap_XM8GAI_eventNotifySetCrossHair_Parms
{
	class UTexture2D*                                  CrossHairHUD;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_XM8GAI.NotifySetCrossHairHit
// [0x00020902] ( FUNC_Event )
struct ATGWeap_XM8GAI_eventNotifySetCrossHairHit_Parms
{
	class UTexture2D*                                  CrossHairHitHUD;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_XM8GAI.PlayWeaponEquip
// [0x00020102] 
struct ATGWeap_XM8GAI_execPlayWeaponEquip_Parms
{
	// class ATGPawn*                                  P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGNewRealGun.PlayWeaponEquip
// [0x00020102] 
struct ATGNewRealGun_execPlayWeaponEquip_Parms
{
};

// Function TGWeapon.TGNewRealGun.SetExtraPower
// [0x00020002] 
struct ATGNewRealGun_execSetExtraPower_Parms
{
	int                                                InPower;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGNewWeaponLogicHelper.CopyTGRealGunProperty
// [0x00022102] 
struct UTGNewWeaponLogicHelper_execCopyTGRealGunProperty_Parms
{
	class ATGRealGun*                                  InDest;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGRealGun*                                  InSrc;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGNewWeaponLogicHelper.CopyTGRealWeaponProperty
// [0x00022102] 
struct UTGNewWeaponLogicHelper_execCopyTGRealWeaponProperty_Parms
{
	class ATGRealWeapon*                               InDest;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATGRealWeapon*                               InSrc;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_Candy_Grenade.ProjectileHurtRadius
// [0x00820102] 
struct ATGProj_Candy_Grenade_execProjectileHurtRadius_Parms
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

// Function TGWeapon.TGProj_Candy_Grenade.SpawnExplosionEffects
// [0x00820102] 
struct ATGProj_Candy_Grenade_execSpawnExplosionEffects_Parms
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

// Function TGWeapon.TGProj_Candy_Grenade.ProcessTouch
// [0x00020102] 
struct ATGProj_Candy_Grenade_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_Candy_Grenade.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGProj_Candy_Grenade_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           Angel;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           BounceRate;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_Candy_Grenade.InitWithBaseVelocity
// [0x00020002] 
struct ATGProj_Candy_Grenade_execInitWithBaseVelocity_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BaseVelocity;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_Candy_Grenade.PostBeginPlay
// [0x00020102] 
struct ATGProj_Candy_Grenade_execPostBeginPlay_Parms
{
};

// Function TGWeapon.TGProj_ChristGrenade.ProjectileHurtRadius
// [0x00820102] 
struct ATGProj_ChristGrenade_execProjectileHurtRadius_Parms
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

// Function TGWeapon.TGProj_ChristGrenade.SpawnExplosionEffects
// [0x00820102] 
struct ATGProj_ChristGrenade_execSpawnExplosionEffects_Parms
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

// Function TGWeapon.TGProj_ChristGrenade.ProcessTouch
// [0x00020102] 
struct ATGProj_ChristGrenade_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_ChristGrenade.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGProj_ChristGrenade_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           Angel;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           BounceRate;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_ChristGrenade.InitWithBaseVelocity
// [0x00020002] 
struct ATGProj_ChristGrenade_execInitWithBaseVelocity_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BaseVelocity;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_ChristGrenade.PostBeginPlay
// [0x00020102] 
struct ATGProj_ChristGrenade_execPostBeginPlay_Parms
{
};

// Function TGWeapon.TGProj_CompoundBow.DelayAttachTargetToWall
// [0x00020102] 
struct ATGProj_CompoundBow_execDelayAttachTargetToWall_Parms
{
};

// Function TGWeapon.TGProj_CompoundBow.CreateSpikeToTarget
// [0x00820102] 
struct ATGProj_CompoundBow_execCreateSpikeToTarget_Parms
{
	// class ATGProj_SpikeArrow*                       Shard;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  BoneLocation;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_CompoundBow.AttachArrowToTarget
// [0x00020102] 
struct ATGProj_CompoundBow_execAttachArrowToTarget_Parms
{
};

// Function TGWeapon.TGProj_CompoundBow.UpdateHitPawnDetails
// [0x00020102] 
struct ATGProj_CompoundBow_execUpdateHitPawnDetails_Parms
{
	class APawn*                                       Victim;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      HitGroup;                                         		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    HitRotation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_CompoundBow.ProcessTouch
// [0x00820102] 
struct ATGProj_CompoundBow_execProcessTouch_Parms
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
	// int                                             InDamage;                                         		// 0x007C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bKillTarget : 1;                                  		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TGWeapon.TGProj_CompoundBow.Destroyed
// [0x00020102] 
struct ATGProj_CompoundBow_execDestroyed_Parms
{
};

// Function TGWeapon.TGProj_CompoundBow.ShutDown
// [0x00020102] 
struct ATGProj_CompoundBow_execShutDown_Parms
{
};

// Function TGWeapon.TGProj_CompoundBow.SpawnFlightEffects
// [0x00020102] 
struct ATGProj_CompoundBow_execSpawnFlightEffects_Parms
{
};

// Function TGWeapon.TGProj_CompoundBow.Tick
// [0x00820902] ( FUNC_Event )
struct ATGProj_CompoundBow_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           ElapsedTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  DefinedGravity;                                   		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_CompoundBow.Init
// [0x00020002] 
struct ATGProj_CompoundBow_execInit_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_CompoundBow.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGProj_CompoundBow_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_SpikeArrow.AdjustPhysicsForHit
// [0x00020102] 
struct ATGProj_SpikeArrow_execAdjustPhysicsForHit_Parms
{
};

// Function TGWeapon.TGProj_SpikeArrow.ShutDown
// [0x00020102] 
struct ATGProj_SpikeArrow_execShutDown_Parms
{
};

// Function TGWeapon.TGProj_SpikeArrow.SpikeVictim
// [0x00020102] 
struct ATGProj_SpikeArrow_execSpikeVictim_Parms
{
	class AUTPawn*                                     Victim;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       VictimBone;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ATGProj_SpikeArrow*                       OtherShard;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_SpikeArrow.HitWall
// [0x00020122] 
struct ATGProj_SpikeArrow_execHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function TGWeapon.TGProj_SpikeArrow.Destroyed
// [0x00020902] ( FUNC_Event )
struct ATGProj_SpikeArrow_eventDestroyed_Parms
{
};

// Function TGWeapon.TGProj_Cracker.ProjectileHurtRadius
// [0x00820102] 
struct ATGProj_Cracker_execProjectileHurtRadius_Parms
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

// Function TGWeapon.TGProj_Cracker.SpawnExplosionEffects
// [0x00820102] 
struct ATGProj_Cracker_execSpawnExplosionEffects_Parms
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

// Function TGWeapon.TGProj_Cracker.ProcessTouch
// [0x00020102] 
struct ATGProj_Cracker_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_Cracker.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGProj_Cracker_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           Angel;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           BounceRate;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_Cracker.InitWithBaseVelocity
// [0x00020002] 
struct ATGProj_Cracker_execInitWithBaseVelocity_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BaseVelocity;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_Cracker.PostBeginPlay
// [0x00020102] 
struct ATGProj_Cracker_execPostBeginPlay_Parms
{
};

// Function TGWeapon.TGProj_FastSmoke.RemoveFromList
// [0x00020002] 
struct ATGProj_FastSmoke_execRemoveFromList_Parms
{
	// class ATGPVPGame*                               Game;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_FastSmoke.AddToList
// [0x00020002] 
struct ATGProj_FastSmoke_execAddToList_Parms
{
	// class ATGPVPGame*                               Game;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_FastSmoke.SpawnExplosionEffects
// [0x00820102] 
struct ATGProj_FastSmoke_execSpawnExplosionEffects_Parms
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
	// class ATGPlayerController*                      PC;                                               		// 0x0054 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_FastSmoke.ReleaseFastSmoke
// [0x00820102] 
struct ATGProj_FastSmoke_execReleaseFastSmoke_Parms
{
	// struct FVector                                  X;                                                		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_FastSmoke.Tick
// [0x00020802] ( FUNC_Event )
struct ATGProj_FastSmoke_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_FastSmoke.PostBeginPlay
// [0x00020102] 
struct ATGProj_FastSmoke_execPostBeginPlay_Parms
{
};

// Function TGWeapon.TGProj_FastSmoke.ProcessTouch
// [0x00020102] 
struct ATGProj_FastSmoke_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_FastSmoke.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGProj_FastSmoke_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           Angel;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           BounceRate;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_FastSmoke.InitWithBaseVelocity
// [0x00020002] 
struct ATGProj_FastSmoke_execInitWithBaseVelocity_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BaseVelocity;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_FastSmoke.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGProj_FastSmoke_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_FastSmoke.ProjectileFire
// [0x00820102] 
struct ATGWeap_FastSmoke_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGProj_FastSmoke*                        SpawnedGrenade;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_FlashBang.SpawnExplosionEffects
// [0x00820102] 
struct ATGProj_FlashBang_execSpawnExplosionEffects_Parms
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

// Function TGWeapon.TGProj_FlashBang.ProjectileHurtRadius
// [0x00820102] 
struct ATGProj_FlashBang_execProjectileHurtRadius_Parms
{
	struct FVector                                     HurtOrigin;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bCausedDamage : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bInitializedAltOrigin : 1;                        		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bFailedAltOrigin : 1;                             		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AActor*                                   Victim;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FVector                                  AltOrigin;                                        		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  VictimLocation;                                   		// 0x0038 (0x000C) [0x0000000000000000]              
	// class ATGPawn*                                  TPawn;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 ViewRotator;                                      		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0060 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x006C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HurtRay;                                          		// 0x0078 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bUsingFullFlashing : 1;                           		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           DamageAmount;                                     		// 0x0088 (0x0004) [0x0000000000000000]              
	// float                                           InDamageRadius;                                   		// 0x008C (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0090 (0x0004) [0x0000000000000000]              
	// float                                           Momentum;                                         		// 0x0094 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_FlashBang.DelaySpawnExplosionEffect
// [0x00020902] ( FUNC_Event )
struct ATGProj_FlashBang_eventDelaySpawnExplosionEffect_Parms
{
};

// Function TGWeapon.TGProj_FlashBang.Explode
// [0x00020102] 
struct ATGProj_FlashBang_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_FlashBang.ProcessTouch
// [0x00020102] 
struct ATGProj_FlashBang_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_FlashBang.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGProj_FlashBang_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           Angel;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           BounceRate;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_FlashBang.InitWithBaseVelocity
// [0x00020002] 
struct ATGProj_FlashBang_execInitWithBaseVelocity_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BaseVelocity;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_FlashBang.PostBeginPlay
// [0x00020102] 
struct ATGProj_FlashBang_execPostBeginPlay_Parms
{
};

// Function TGWeapon.TGWeap_FlashBang.ProjectileFire
// [0x00820102] 
struct ATGWeap_FlashBang_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGProj_FlashBang*                        SpawnedGrenade;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_FoolGrenade.ProjectileHurtRadius
// [0x00820102] 
struct ATGProj_FoolGrenade_execProjectileHurtRadius_Parms
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

// Function TGWeapon.TGProj_FoolGrenade.SpawnExplosionEffects
// [0x00820102] 
struct ATGProj_FoolGrenade_execSpawnExplosionEffects_Parms
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

// Function TGWeapon.TGProj_FoolGrenade.ProcessTouch
// [0x00020102] 
struct ATGProj_FoolGrenade_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_FoolGrenade.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGProj_FoolGrenade_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           Angel;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           BounceRate;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_FoolGrenade.InitWithBaseVelocity
// [0x00020002] 
struct ATGProj_FoolGrenade_execInitWithBaseVelocity_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BaseVelocity;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_FoolGrenade.PostBeginPlay
// [0x00020102] 
struct ATGProj_FoolGrenade_execPostBeginPlay_Parms
{
};

// Function TGWeapon.TGProj_HEgame.ProjectileHurtRadius
// [0x00820102] 
struct ATGProj_HEgame_execProjectileHurtRadius_Parms
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

// Function TGWeapon.TGProj_HEgame.SpawnExplosionEffects
// [0x00820102] 
struct ATGProj_HEgame_execSpawnExplosionEffects_Parms
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

// Function TGWeapon.TGProj_HEgame.ProcessTouch
// [0x00020102] 
struct ATGProj_HEgame_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_HEgame.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGProj_HEgame_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           Angel;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           BounceRate;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_HEgame.InitWithBaseVelocity
// [0x00020002] 
struct ATGProj_HEgame_execInitWithBaseVelocity_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BaseVelocity;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_HEgame.PostBeginPlay
// [0x00020102] 
struct ATGProj_HEgame_execPostBeginPlay_Parms
{
};

// Function TGWeapon.TGProj_HEGrenade.ProjectileHurtRadius
// [0x00820102] 
struct ATGProj_HEGrenade_execProjectileHurtRadius_Parms
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

// Function TGWeapon.TGProj_HEGrenade.SpawnExplosionEffects
// [0x00820102] 
struct ATGProj_HEGrenade_execSpawnExplosionEffects_Parms
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

// Function TGWeapon.TGProj_HEGrenade.ProcessTouch
// [0x00020102] 
struct ATGProj_HEGrenade_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_HEGrenade.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGProj_HEGrenade_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           Angel;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           BounceRate;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_HEGrenade.InitWithBaseVelocity
// [0x00020002] 
struct ATGProj_HEGrenade_execInitWithBaseVelocity_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BaseVelocity;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_HEGrenade.PostBeginPlay
// [0x00020102] 
struct ATGProj_HEGrenade_execPostBeginPlay_Parms
{
};

// Function TGWeapon.TGProj_M26Grenade.ProjectileHurtRadius
// [0x00820102] 
struct ATGProj_M26Grenade_execProjectileHurtRadius_Parms
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

// Function TGWeapon.TGProj_M26Grenade.SpawnExplosionEffects
// [0x00820102] 
struct ATGProj_M26Grenade_execSpawnExplosionEffects_Parms
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

// Function TGWeapon.TGProj_M26Grenade.ProcessTouch
// [0x00020102] 
struct ATGProj_M26Grenade_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_M26Grenade.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGProj_M26Grenade_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           Angel;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           BounceRate;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_M26Grenade.InitWithBaseVelocity
// [0x00020002] 
struct ATGProj_M26Grenade_execInitWithBaseVelocity_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BaseVelocity;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_M26Grenade.PostBeginPlay
// [0x00020102] 
struct ATGProj_M26Grenade_execPostBeginPlay_Parms
{
};

// Function TGWeapon.TGProj_MidAutumn.ProjectileHurtRadius
// [0x00820102] 
struct ATGProj_MidAutumn_execProjectileHurtRadius_Parms
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

// Function TGWeapon.TGProj_MidAutumn.SpawnExplosionEffects
// [0x00820102] 
struct ATGProj_MidAutumn_execSpawnExplosionEffects_Parms
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

// Function TGWeapon.TGProj_MidAutumn.ProcessTouch
// [0x00020102] 
struct ATGProj_MidAutumn_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_MidAutumn.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGProj_MidAutumn_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           Angel;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           BounceRate;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_MidAutumn.InitWithBaseVelocity
// [0x00020002] 
struct ATGProj_MidAutumn_execInitWithBaseVelocity_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BaseVelocity;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_MidAutumn.PostBeginPlay
// [0x00020102] 
struct ATGProj_MidAutumn_execPostBeginPlay_Parms
{
};

// Function TGWeapon.TGProj_Pumpkin.ProjectileHurtRadius
// [0x00820102] 
struct ATGProj_Pumpkin_execProjectileHurtRadius_Parms
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

// Function TGWeapon.TGProj_Pumpkin.SpawnExplosionEffects
// [0x00820102] 
struct ATGProj_Pumpkin_execSpawnExplosionEffects_Parms
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

// Function TGWeapon.TGProj_Pumpkin.ProcessTouch
// [0x00020102] 
struct ATGProj_Pumpkin_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_Pumpkin.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGProj_Pumpkin_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           Angel;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           BounceRate;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_Pumpkin.InitWithBaseVelocity
// [0x00020002] 
struct ATGProj_Pumpkin_execInitWithBaseVelocity_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BaseVelocity;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_Pumpkin.PostBeginPlay
// [0x00020102] 
struct ATGProj_Pumpkin_execPostBeginPlay_Parms
{
};

// Function TGWeapon.TGProj_RPKMPoison.SpawnExplosionEffects
// [0x00820102] 
struct ATGProj_RPKMPoison_execSpawnExplosionEffects_Parms
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
	// class AActor*                                   HitActor;                                         		// 0x0084 (0x0004) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0088 (0x0020) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_RPKMPoison.BeginPoisonDetaction
// [0x00820102] 
struct ATGProj_RPKMPoison_execBeginPoisonDetaction_Parms
{
	// class APawn*                                    Victim;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  StartTrace;                                       		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0038 (0x0020) [0x0000000000000000]              
	// struct FVector                                  ExplodePosition;                                  		// 0x0058 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetPosition;                                   		// 0x0064 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Dir;                                              		// 0x0070 (0x000C) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_RPKMPoison.Explode
// [0x00020102] 
struct ATGProj_RPKMPoison_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ATGPawn*                                  TPawn;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_RPKMPoison.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGProj_RPKMPoison_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function TGWeapon.TGProj_RPKMPoison.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGProj_RPKMPoison_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_Smoke.RemoveFromList
// [0x00020002] 
struct ATGProj_Smoke_execRemoveFromList_Parms
{
	// class ATGPVPGame*                               Game;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_Smoke.AddToList
// [0x00020002] 
struct ATGProj_Smoke_execAddToList_Parms
{
	// class ATGPVPGame*                               Game;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_Smoke.SpawnExplosionEffects
// [0x00820102] 
struct ATGProj_Smoke_execSpawnExplosionEffects_Parms
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
	// class ATGPlayerController*                      PC;                                               		// 0x0054 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_Smoke.ReleaseSmoke
// [0x00820102] 
struct ATGProj_Smoke_execReleaseSmoke_Parms
{
	// struct FVector                                  X;                                                		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_Smoke.Tick
// [0x00020802] ( FUNC_Event )
struct ATGProj_Smoke_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_Smoke.PostBeginPlay
// [0x00020102] 
struct ATGProj_Smoke_execPostBeginPlay_Parms
{
};

// Function TGWeapon.TGProj_Smoke.ProcessTouch
// [0x00020102] 
struct ATGProj_Smoke_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_Smoke.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGProj_Smoke_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           Angel;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           BounceRate;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_Smoke.InitWithBaseVelocity
// [0x00020002] 
struct ATGProj_Smoke_execInitWithBaseVelocity_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BaseVelocity;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_Smoke.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ATGProj_Smoke_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_Smoke.ProjectileFire
// [0x00820102] 
struct ATGWeap_Smoke_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGProj_Smoke*                            SpawnedGrenade;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_SnowBall.ProjectileHurtRadius
// [0x00820102] 
struct ATGProj_SnowBall_execProjectileHurtRadius_Parms
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

// Function TGWeapon.TGProj_SnowBall.SpawnExplosionEffects
// [0x00820102] 
struct ATGProj_SnowBall_execSpawnExplosionEffects_Parms
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

// Function TGWeapon.TGProj_SnowBall.ProcessTouch
// [0x00020102] 
struct ATGProj_SnowBall_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_SnowBall.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGProj_SnowBall_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           Angel;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           BounceRate;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_SnowBall.InitWithBaseVelocity
// [0x00020002] 
struct ATGProj_SnowBall_execInitWithBaseVelocity_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BaseVelocity;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_SnowBall.PostBeginPlay
// [0x00020102] 
struct ATGProj_SnowBall_execPostBeginPlay_Parms
{
};

// Function TGWeapon.TGProj_SuckGrenade.ProjectileHurtRadius
// [0x00820102] 
struct ATGProj_SuckGrenade_execProjectileHurtRadius_Parms
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

// Function TGWeapon.TGProj_SuckGrenade.SpawnExplosionEffects
// [0x00820102] 
struct ATGProj_SuckGrenade_execSpawnExplosionEffects_Parms
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

// Function TGWeapon.TGProj_SuckGrenade.ProcessTouch
// [0x00020102] 
struct ATGProj_SuckGrenade_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_SuckGrenade.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGProj_SuckGrenade_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           Angel;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           BounceRate;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_SuckGrenade.InitWithBaseVelocity
// [0x00020002] 
struct ATGProj_SuckGrenade_execInitWithBaseVelocity_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BaseVelocity;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_SuckGrenade.PostBeginPlay
// [0x00020102] 
struct ATGProj_SuckGrenade_execPostBeginPlay_Parms
{
};

// Function TGWeapon.TGProj_XM25.ProjectileHurtRadius
// [0x00820102] 
struct ATGProj_XM25_execProjectileHurtRadius_Parms
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

// Function TGWeapon.TGProj_XM25.SpawnExplosionEffects
// [0x00820102] 
struct ATGProj_XM25_execSpawnExplosionEffects_Parms
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

// Function TGWeapon.TGProj_XM25.ProcessTouch
// [0x00020102] 
struct ATGProj_XM25_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_XM25.HitWall
// [0x00020902] ( FUNC_Event )
struct ATGProj_XM25_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function TGWeapon.TGProj_XM25.PlayFlyingSound
// [0x00084102] 
struct ATGProj_XM25_execPlayFlyingSound_Parms
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UAudioComponent*                             AC;                                               		// 0x0004 (0x0004) [0x0000000004000090]              ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )
	float                                              FadeInTime;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UAudioComponent*                             ReturnValue;                                      		// 0x000C (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// class AActor*                                   SoundOwner;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGProj_XM25.InitWithBaseVelocity
// [0x00020002] 
struct ATGProj_XM25_execInitWithBaseVelocity_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BaseVelocity;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGProj_XM25.PostBeginPlay
// [0x00020102] 
struct ATGProj_XM25_execPostBeginPlay_Parms
{
};

// Function TGWeapon.TGWeapFeedBack_ShowAmmo.UpdateAmmoCountDisplay
// [0x00020102] 
struct ATGWeapFeedBack_ShowAmmo_execUpdateAmmoCountDisplay_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             CurrentAmmoCount;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeapFeedBack_ShowAmmo.DeactivateComponent
// [0x00020102] 
struct ATGWeapFeedBack_ShowAmmo_execDeactivateComponent_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TGWeapon.TGWeapFeedBack_ShowAmmo.ActivateComponent
// [0x00820102] 
struct ATGWeapFeedBack_ShowAmmo_execActivateComponent_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FLinearColor                             BlackColor;                                       		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function TGWeapon.TGWeapFeedBack_ShowAmmo.SetMaterialOrder
// [0x00020102] 
struct ATGWeapFeedBack_ShowAmmo_execSetMaterialOrder_Parms
{
	int                                                MatOrder;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeapFeedBack_AddAmmo.ActivateComponent
// [0x00020102] 
struct ATGWeapFeedBack_AddAmmo_execActivateComponent_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATGHUD*                                   LocalHUD;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeapFeedBack_AddAmmo.InitFeedBackComponent
// [0x00020102] 
struct ATGWeapFeedBack_AddAmmo_execInitFeedBackComponent_Parms
{
	class ATGRealWeapon*                               InputWeapon;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UClass*                                   CurrentClass;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_M1014Crazy.PlayFireEffects
// [0x00024102] 
struct ATGWeap_M1014Crazy_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USkeletalMeshComponent*                   LocalSkelMesh;                                    		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        LocalAnimNode;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_XM25.ServerThrowGrenade
// [0x002200C2] 
struct ATGWeap_XM25_execServerThrowGrenade_Parms
{
	float                                              LocalClientTime;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TGWeapon.TGWeap_XM25.ProjectileFire
// [0x00820102] 
struct ATGWeap_XM25_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  RealStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AProjectile*                              SpawnedProjectile;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ATGProj_XM25*                             SpawnedGrenade;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_XM25.GetProVelocity
// [0x00820102] 
struct ATGWeap_XM25_execGetProVelocity_Parms
{
	struct FVector                                     StartLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FQuat                                    RotatorUse;                                       		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FVector                                  vForward;                                         		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vRight;                                           		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  vUp;                                              		// 0x0048 (0x000C) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_XM25.GetAimVector
// [0x00C20102] 
struct ATGWeap_XM25_execGetAimVector_Parms
{
	struct FVector                                     StartLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vForward;                                         		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     vRight;                                           		// 0x0018 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     vUp;                                              		// 0x0024 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FRotator                                 AimRotator;                                       		// 0x0030 (0x000C) [0x0000000000000000]              
};

// Function TGWeapon.TGWeap_XM25.PlayFireEffects
// [0x00024102] 
struct ATGWeap_XM25_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif