/*
#############################################################################################
# Assault Fire (1.0.0.26) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TGTankGame_structs.h
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

// ScriptStruct TGTankGame.TGRealTankBase.TankState
// 0x0044
struct FTankState
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

// ScriptStruct TGTankGame.TGTankTypes.TankTarget
// 0x0011
struct FTankTarget
{
	float                                              HealthDamageReduction;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              ArmorDamageReduction;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       RelativeBoneName;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned char                                      HitGroup;                                         		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TGTankGame.TGTankTypes.TankTargetHitInfo
// 0x0009
struct FTankTargetHitInfo
{
	int                                                HealthDamage;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ArmorDamage;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      HitGroup;                                         		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TGTankGame.TGRealTank.AssistInfo
// 0x0008
struct ATGRealTank_FAssistInfo
{
	class ATGTankTMPlayerReplicationInfo*              PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGTankGame.TGRealTank.MovementCheckInfo
// 0x0028
struct FMovementCheckInfo
{
	float                                              LastServerFuncCallTime;                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              LastClientTimeStamp;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              DeltaClientStampSum;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                CheckFrameCount;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              LastCheckInfoClearTime;                           		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FVector                                     Position;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	unsigned long                                      bCheating : 1;                                    		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsCheckInfoClearFrame : 1;                       		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                RemoveExceptionCount;                             		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGTankGame.TGTankAmmoBox.TGTankAmmoInfo
// 0x0010
struct FTGTankAmmoInfo
{
	class UClass*                                      TankShellClass;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TankShellCount;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TankShellMaxCount;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TankShellPriority;                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGTankGame.TGTankTeamMatch.GroupedPickup
// 0x0010
struct FGroupedPickup
{
	unsigned char                                      GroupIndex;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< class ATGTankPickupFactory* >              FactoryArray;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGTankGame.TGTankTMPlayerController.SeeObjective
// 0x0008
struct FSeeObjective
{
	class ATGRealTank*                                 Objective;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              LastSeeTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGTankGame.TGTankDestructibleBase.InstigatorInfo
// 0x0008
struct ATGTankDestructibleBase_FInstigatorInfo
{
	class ATGRealTank*                                 Tank;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              InstigateTime;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGTankGame.TGTankHUD.AmmoReloadHUDInfo
// 0x0020
struct FAmmoReloadHUDInfo
{
	class UTexture2D*                                  AmmoReloadReb;                                    		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  AmmoReloadGov;                                    		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  AmmoReloadBG;                                     		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  AmmoReloadBar;                                    		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         AmmoReloadBarCoords;                              		// 0x0010 (0x0010) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct TGTankGame.TGTankHUD.CrossHairShock
// 0x0024
struct FCrossHairShock
{
	unsigned long                                      bReachExtreme : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                CurrValue;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                InitialValue;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ExtremeValue;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              InitialChangeFactor;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              ExtremeChangeFactor;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              InitialValueTime;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              ExtremeValueTime;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnable : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TGTankGame.TGTankProj_HEShell.SplashDamageLevel
// 0x0010
struct FSplashDamageLevel
{
	int                                                Level;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              RadiusPercentMin;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              RadiusPercentMax;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Damage;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif