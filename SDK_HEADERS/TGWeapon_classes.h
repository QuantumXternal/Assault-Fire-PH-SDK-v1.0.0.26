/*
#############################################################################################
# Assault Fire (1.0.0.26) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TGWeapon_classes.h
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


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class TGWeapon.Interface_TGNewWeapon
// 0x0000 (0x003C - 0x003C)
class UInterface_TGNewWeapon : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166100 ];

		return pClassPointer;
	};

	void SetExtraPower ( int InPower );
};

UClass* UInterface_TGNewWeapon::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_ACE
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_ACE : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166104 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_ACE::pClassPointer = NULL;

// Class TGWeapon.TGWeap_ACE
// 0x000C (0x0B24 - 0x0B18)
class ATGWeap_ACE : public ATGRealGun
{
public:
	int                                                DisplayAmmoMatOrder;                              		// 0x0B18 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   LeftHandAmmoCountMIC;                             		// 0x0B1C (0x0004) [0x0000000000000000]              
	float                                              EquipRecordTime;                                  		// 0x0B20 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166112 ];

		return pClassPointer;
	};

	void MirrorUpdateNotify ( );
	void DelayActivateAmmoDisplayComp ( );
	void TimeWeaponEquipping ( );
	void DetachWeapon ( );
	void FullAmmo ( );
	int AddAmmo ( int Amount );
	void PostBeginPlay ( );
	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_ACE::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_ACEHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_ACEHeadShot : public UTGDmgType_ACE
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166115 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_ACEHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AEK999
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AEK999 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166119 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AEK999::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AEK999
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_AEK999 : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166127 ];

		return pClassPointer;
	};

	void eventDrawAmmo ( class UCanvas* CanvasTemp, int CurrentAmmo, int CarriedAmmo );
	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AEK999::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AEK999HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AEK999HeadShot : public UTGDmgType_AEK999
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166130 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AEK999HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AEKunlimited
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AEKunlimited : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166134 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AEKunlimited::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AEKunlimited
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_AEKunlimited : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166142 ];

		return pClassPointer;
	};

	void eventDrawAmmo ( class UCanvas* CanvasTemp, int CurrentAmmo, int CarriedAmmo );
	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AEKunlimited::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AEKunlimitedHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AEKunlimitedHeadShot : public UTGDmgType_AEKunlimited
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166145 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AEKunlimitedHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK12
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK12 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166149 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AK12::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AK12
// 0x0018 (0x0B30 - 0x0B18)
class ATGWeap_AK12 : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              
	float                                              MaxRotatorPitch;                                  		// 0x0B1C (0x0004) [0x0000000000000000]              
	float                                              RecordMaxRotatorPitch;                            		// 0x0B20 (0x0004) [0x0000000000000000]              
	int                                                ReachMaxFireShots;                                		// 0x0B24 (0x0004) [0x0000000000000000]              
	int                                                StableFireShots;                                  		// 0x0B28 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLastRecoverPunchAngle : 1;                       		// 0x0B2C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInFallingRecord : 1;                             		// 0x0B2C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166157 ];

		return pClassPointer;
	};

	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
	void WeaponCalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot );
	void KickBackTheView ( float KickBackUpBase, float KickBackLateralBase, float KickBackUpModifier, float KickBackLateralModifier, float KickBackUpMax, float KickBackLateralMax );
	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AK12::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK12HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK12HeadShot : public UTGDmgType_AK12
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166160 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AK12HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166164 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AK47::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AK47
// 0x0018 (0x0B30 - 0x0B18)
class ATGWeap_AK47 : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              
	float                                              MaxRotatorPitch;                                  		// 0x0B1C (0x0004) [0x0000000000000000]              
	float                                              RecordMaxRotatorPitch;                            		// 0x0B20 (0x0004) [0x0000000000000000]              
	int                                                ReachMaxFireShots;                                		// 0x0B24 (0x0004) [0x0000000000000000]              
	int                                                StableFireShots;                                  		// 0x0B28 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLastRecoverPunchAngle : 1;                       		// 0x0B2C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInFallingRecord : 1;                             		// 0x0B2C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166172 ];

		return pClassPointer;
	};

	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
	void WeaponCalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot );
	void KickBackTheView ( float KickBackUpBase, float KickBackLateralBase, float KickBackUpModifier, float KickBackLateralModifier, float KickBackUpMax, float KickBackLateralMax );
	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AK47::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47_B
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47_B : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166175 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AK47_B::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AK47_B
// 0x0018 (0x0B30 - 0x0B18)
class ATGWeap_AK47_B : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              
	float                                              MaxRotatorPitch;                                  		// 0x0B1C (0x0004) [0x0000000000000000]              
	float                                              RecordMaxRotatorPitch;                            		// 0x0B20 (0x0004) [0x0000000000000000]              
	int                                                ReachMaxFireShots;                                		// 0x0B24 (0x0004) [0x0000000000000000]              
	int                                                StableFireShots;                                  		// 0x0B28 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLastRecoverPunchAngle : 1;                       		// 0x0B2C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInFallingRecord : 1;                             		// 0x0B2C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166183 ];

		return pClassPointer;
	};

	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
	void WeaponCalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot );
	void KickBackTheView ( float KickBackUpBase, float KickBackLateralBase, float KickBackUpModifier, float KickBackLateralModifier, float KickBackUpMax, float KickBackLateralMax );
	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AK47_B::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47_BHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47_BHeadShot : public UTGDmgType_AK47_B
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166186 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AK47_BHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_Ak47_old
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_Ak47_old : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166190 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_Ak47_old::pClassPointer = NULL;

// Class TGWeapon.TGWeap_Ak47_old
// 0x0004 (0x0C8C - 0x0C88)
class ATGWeap_Ak47_old : public ATGRealT2Gun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0C88 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166198 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_Ak47_old::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_Ak47_oldHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_Ak47_oldHeadShot : public UTGDmgType_Ak47_old
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166201 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_Ak47_oldHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47Diamond
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47Diamond : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166205 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AK47Diamond::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AK47Diamond
// 0x0004 (0x0C8C - 0x0C88)
class ATGWeap_AK47Diamond : public ATGRealT2Gun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0C88 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166213 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AK47Diamond::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47DiamondHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47DiamondHeadShot : public UTGDmgType_AK47Diamond
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166216 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AK47DiamondHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47GAI
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47GAI : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166220 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AK47GAI::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AK47GAI
// 0x0018 (0x0B30 - 0x0B18)
class ATGWeap_AK47GAI : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              
	float                                              MaxRotatorPitch;                                  		// 0x0B1C (0x0004) [0x0000000000000000]              
	float                                              RecordMaxRotatorPitch;                            		// 0x0B20 (0x0004) [0x0000000000000000]              
	int                                                ReachMaxFireShots;                                		// 0x0B24 (0x0004) [0x0000000000000000]              
	int                                                StableFireShots;                                  		// 0x0B28 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLastRecoverPunchAngle : 1;                       		// 0x0B2C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInFallingRecord : 1;                             		// 0x0B2C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166228 ];

		return pClassPointer;
	};

	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
	void WeaponCalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot );
	void KickBackTheView ( float KickBackUpBase, float KickBackLateralBase, float KickBackUpModifier, float KickBackLateralModifier, float KickBackUpMax, float KickBackLateralMax );
	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AK47GAI::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47GAIHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47GAIHeadShot : public UTGDmgType_AK47GAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166231 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AK47GAIHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47GOLD
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47GOLD : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166235 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AK47GOLD::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AK47GOLD
// 0x0004 (0x0C8C - 0x0C88)
class ATGWeap_AK47GOLD : public ATGRealT2Gun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0C88 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166243 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AK47GOLD::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47GOLDHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47GOLDHeadShot : public UTGDmgType_AK47GOLD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166246 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AK47GOLDHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47GoldSword
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47GoldSword : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166250 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AK47GoldSword::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AK47GoldSword
// 0x0018 (0x0CD8 - 0x0CC0)
class ATGWeap_AK47GoldSword : public ATGRealMultiFunctionGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0CC0 (0x0004) [0x0000000000000000]              
	float                                              MaxRotatorPitch;                                  		// 0x0CC4 (0x0004) [0x0000000000000000]              
	float                                              RecordMaxRotatorPitch;                            		// 0x0CC8 (0x0004) [0x0000000000000000]              
	int                                                ReachMaxFireShots;                                		// 0x0CCC (0x0004) [0x0000000000000000]              
	int                                                StableFireShots;                                  		// 0x0CD0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLastRecoverPunchAngle : 1;                       		// 0x0CD4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInFallingRecord : 1;                             		// 0x0CD4 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166258 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AK47GoldSword::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47GoldSword2
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47GoldSword2 : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166261 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AK47GoldSword2::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47GoldSword2HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47GoldSword2HeadShot : public UTGDmgType_AK47GoldSword2
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166271 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AK47GoldSword2HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47GoldSwordHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47GoldSwordHeadShot : public UTGDmgType_AK47GoldSword
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166275 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AK47GoldSwordHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47HeadShot : public UTGDmgType_AK47
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166279 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AK47HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47Member
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47Member : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166283 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AK47Member::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AK47Member
// 0x0018 (0x0CD8 - 0x0CC0)
class ATGWeap_AK47Member : public ATGRealMultiFunctionGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0CC0 (0x0004) [0x0000000000000000]              
	float                                              MaxRotatorPitch;                                  		// 0x0CC4 (0x0004) [0x0000000000000000]              
	float                                              RecordMaxRotatorPitch;                            		// 0x0CC8 (0x0004) [0x0000000000000000]              
	int                                                ReachMaxFireShots;                                		// 0x0CCC (0x0004) [0x0000000000000000]              
	int                                                StableFireShots;                                  		// 0x0CD0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLastRecoverPunchAngle : 1;                       		// 0x0CD4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInFallingRecord : 1;                             		// 0x0CD4 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166291 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AK47Member::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47Member2
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47Member2 : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166294 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AK47Member2::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47Member2HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47Member2HeadShot : public UTGDmgType_AK47Member2
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166304 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AK47Member2HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47MemberHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47MemberHeadShot : public UTGDmgType_AK47Member
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166308 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AK47MemberHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47OET
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47OET : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166312 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AK47OET::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AK47OET
// 0x0018 (0x0B30 - 0x0B18)
class ATGWeap_AK47OET : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              
	float                                              MaxRotatorPitch;                                  		// 0x0B1C (0x0004) [0x0000000000000000]              
	float                                              RecordMaxRotatorPitch;                            		// 0x0B20 (0x0004) [0x0000000000000000]              
	int                                                ReachMaxFireShots;                                		// 0x0B24 (0x0004) [0x0000000000000000]              
	int                                                StableFireShots;                                  		// 0x0B28 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLastRecoverPunchAngle : 1;                       		// 0x0B2C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInFallingRecord : 1;                             		// 0x0B2C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166320 ];

		return pClassPointer;
	};

	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
	void WeaponCalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot );
	void KickBackTheView ( float KickBackUpBase, float KickBackLateralBase, float KickBackUpModifier, float KickBackLateralModifier, float KickBackUpMax, float KickBackLateralMax );
	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AK47OET::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47OETHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47OETHeadShot : public UTGDmgType_AK47OET
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166323 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AK47OETHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47Rail
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47Rail : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166327 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AK47Rail::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AK47Rail
// 0x0018 (0x0B30 - 0x0B18)
class ATGWeap_AK47Rail : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              
	float                                              MaxRotatorPitch;                                  		// 0x0B1C (0x0004) [0x0000000000000000]              
	float                                              RecordMaxRotatorPitch;                            		// 0x0B20 (0x0004) [0x0000000000000000]              
	int                                                ReachMaxFireShots;                                		// 0x0B24 (0x0004) [0x0000000000000000]              
	int                                                StableFireShots;                                  		// 0x0B28 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLastRecoverPunchAngle : 1;                       		// 0x0B2C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInFallingRecord : 1;                             		// 0x0B2C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166335 ];

		return pClassPointer;
	};

	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
	void WeaponCalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot );
	void KickBackTheView ( float KickBackUpBase, float KickBackLateralBase, float KickBackUpModifier, float KickBackLateralModifier, float KickBackUpMax, float KickBackLateralMax );
	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AK47Rail::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47RailHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47RailHeadShot : public UTGDmgType_AK47Rail
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166338 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AK47RailHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47Sword
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47Sword : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166342 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AK47Sword::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AK47Sword
// 0x0018 (0x0CD8 - 0x0CC0)
class ATGWeap_AK47Sword : public ATGRealMultiFunctionGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0CC0 (0x0004) [0x0000000000000000]              
	float                                              MaxRotatorPitch;                                  		// 0x0CC4 (0x0004) [0x0000000000000000]              
	float                                              RecordMaxRotatorPitch;                            		// 0x0CC8 (0x0004) [0x0000000000000000]              
	int                                                ReachMaxFireShots;                                		// 0x0CCC (0x0004) [0x0000000000000000]              
	int                                                StableFireShots;                                  		// 0x0CD0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLastRecoverPunchAngle : 1;                       		// 0x0CD4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInFallingRecord : 1;                             		// 0x0CD4 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166350 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AK47Sword::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47Sword2
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47Sword2 : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166353 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AK47Sword2::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47Sword2HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47Sword2HeadShot : public UTGDmgType_AK47Sword2
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166363 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AK47Sword2HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47SwordHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47SwordHeadShot : public UTGDmgType_AK47Sword
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166367 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AK47SwordHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47SwordII
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47SwordII : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166371 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AK47SwordII::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AK47SwordII
// 0x0018 (0x0CD8 - 0x0CC0)
class ATGWeap_AK47SwordII : public ATGRealMultiFunctionGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0CC0 (0x0004) [0x0000000000000000]              
	float                                              MaxRotatorPitch;                                  		// 0x0CC4 (0x0004) [0x0000000000000000]              
	float                                              RecordMaxRotatorPitch;                            		// 0x0CC8 (0x0004) [0x0000000000000000]              
	int                                                ReachMaxFireShots;                                		// 0x0CCC (0x0004) [0x0000000000000000]              
	int                                                StableFireShots;                                  		// 0x0CD0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLastRecoverPunchAngle : 1;                       		// 0x0CD4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInFallingRecord : 1;                             		// 0x0CD4 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166379 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AK47SwordII::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47SwordII2
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47SwordII2 : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166382 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AK47SwordII2::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47SwordII2HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47SwordII2HeadShot : public UTGDmgType_AK47SwordII2
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166392 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AK47SwordII2HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK47SwordIIHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK47SwordIIHeadShot : public UTGDmgType_AK47SwordII
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166396 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AK47SwordIIHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK74
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK74 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166400 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AK74::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AK74
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_AK74 : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166408 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AK74::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK74HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK74HeadShot : public UTGDmgType_AK74
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166411 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AK74HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK74U
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK74U : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166415 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AK74U::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AK74U
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_AK74U : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166423 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AK74U::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK74U_KOS
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK74U_KOS : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166426 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AK74U_KOS::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AK74U_KOS
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_AK74U_KOS : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166434 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AK74U_KOS::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK74U_KOSHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK74U_KOSHeadShot : public UTGDmgType_AK74U_KOS
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166437 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AK74U_KOSHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK74Udust
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK74Udust : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166441 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AK74Udust::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AK74Udust
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_AK74Udust : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166449 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AK74Udust::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK74UdustHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK74UdustHeadShot : public UTGDmgType_AK74Udust
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166452 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AK74UdustHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AK74UHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AK74UHeadShot : public UTGDmgType_AK74U
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166456 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AK74UHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AN94
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AN94 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166460 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AN94::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AN94
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_AN94 : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166468 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AN94::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AN94HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AN94HeadShot : public UTGDmgType_AN94
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166471 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AN94HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AR15
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AR15 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166475 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AR15::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AR15
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_AR15 : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166483 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AR15::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AR15_KOS
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AR15_KOS : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166486 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AR15_KOS::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AR15_KOS
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_AR15_KOS : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166494 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AR15_KOS::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AR15_KOSHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AR15_KOSHeadShot : public UTGDmgType_AR15_KOS
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166497 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AR15_KOSHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AR15_mend
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AR15_mend : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166501 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AR15_mend::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AR15_mend
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_AR15_mend : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166509 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AR15_mend::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AR15_mendHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AR15_mendHeadShot : public UTGDmgType_AR15_mend
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166512 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AR15_mendHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AR15_mendSilver
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AR15_mendSilver : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166516 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AR15_mendSilver::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AR15_mendSilver
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_AR15_mendSilver : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166524 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AR15_mendSilver::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AR15_mendSilverHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AR15_mendSilverHeadShot : public UTGDmgType_AR15_mendSilver
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166527 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AR15_mendSilverHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AR15_Xmas
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AR15_Xmas : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166531 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AR15_Xmas::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AR15_Xmas
// 0x0000 (0x0BD8 - 0x0BD8)
class ATGWeap_AR15_Xmas : public ATGRealSecondaryAimGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166539 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AR15_Xmas::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AR15_XmasHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AR15_XmasHeadShot : public UTGDmgType_AR15_Xmas
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166542 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AR15_XmasHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AR15GAI
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AR15GAI : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166546 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AR15GAI::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AR15GAI
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_AR15GAI : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166554 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AR15GAI::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AR15GAIHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AR15GAIHeadShot : public UTGDmgType_AR15GAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166557 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AR15GAIHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AR15gold
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AR15gold : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166561 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AR15gold::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AR15gold
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_AR15gold : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166569 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AR15gold::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AR15goldHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AR15goldHeadShot : public UTGDmgType_AR15gold
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166572 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AR15goldHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AR15HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AR15HeadShot : public UTGDmgType_AR15
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166576 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AR15HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AR15OET
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AR15OET : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166580 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AR15OET::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AR15OET
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_AR15OET : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166588 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AR15OET::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AR15OETHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AR15OETHeadShot : public UTGDmgType_AR15OET
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166591 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AR15OETHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AR15QT
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AR15QT : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166595 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AR15QT::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AR15QT
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_AR15QT : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166603 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AR15QT::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AR15QTHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AR15QTHeadShot : public UTGDmgType_AR15QT
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166606 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AR15QTHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AR15Snake
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AR15Snake : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166610 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AR15Snake::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AR15Snake
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_AR15Snake : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166618 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AR15Snake::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AR15SnakeHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AR15SnakeHeadShot : public UTGDmgType_AR15Snake
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166621 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AR15SnakeHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_ArrowExplosion
// 0x0004 (0x063C - 0x0638)
class UTGDmgType_ArrowExplosion : public UTGDmgType_ExplodeGrenade
{
public:
	float                                              CustomVehicleDamageScaling;                       		// 0x0638 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166625 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
	float VehicleDamageScalingFor ( class AVehicle* V );
};

UClass* UTGDmgType_ArrowExplosion::pClassPointer = NULL;

// Class TGWeapon.TGWeap_Bow
// 0x00B4 (0x0BCC - 0x0B18)
class ATGWeap_Bow : public ATGRealGun
{
public:
	float                                              ArrowBaseSpeed;                                   		// 0x0B18 (0x0004) [0x0000000000000000]              
	float                                              ArrowBaseSpeed01;                                 		// 0x0B1C (0x0004) [0x0000000000000000]              
	float                                              ArrowDamageMin;                                   		// 0x0B20 (0x0004) [0x0000000000000000]              
	float                                              ArrowDamageMax;                                   		// 0x0B24 (0x0004) [0x0000000000000000]              
	float                                              ArrowMomentumTransferMin;                         		// 0x0B28 (0x0004) [0x0000000000000000]              
	float                                              ArrowMomentumTransferMax;                         		// 0x0B2C (0x0004) [0x0000000000000000]              
	float                                              ArrowExplosionDamageCount;                        		// 0x0B30 (0x0004) [0x0000000000000000]              
	float                                              ArrowExplosionDamageRadius;                       		// 0x0B34 (0x0004) [0x0000000000000000]              
	float                                              ArrowTimeToExplosion;                             		// 0x0B38 (0x0004) [0x0000000000000000]              
	float                                              ArrowGravityScaling;                              		// 0x0B3C (0x0004) [0x0000000000000000]              
	float                                              BentBowSwitchInterval;                            		// 0x0B40 (0x0004) [0x0000000000000000]              
	float                                              FullBowDuration;                                  		// 0x0B44 (0x0004) [0x0000000000000000]              
	float                                              m_fBowAttackDuckMaxSpeed;                         		// 0x0B48 (0x0004) [0x0000000000000000]              
	float                                              m_fBowAttackSnakeMaxSpeed;                        		// 0x0B4C (0x0004) [0x0000000000000000]              
	float                                              m_fBowAttackWalkMaxSpeed;                         		// 0x0B50 (0x0004) [0x0000000000000000]              
	float                                              WeaponBentingFrequencyScale;                      		// 0x0B54 (0x0004) [0x0000000000000000]              
	float                                              BentingBowVelocityPenalty;                        		// 0x0B58 (0x0004) [0x0000000000000000]              
	struct FName                                       EmptyEquipAnim;                                   		// 0x0B5C (0x0008) [0x0000000000000000]              
	struct FName                                       EmptyIdleAnim;                                    		// 0x0B64 (0x0008) [0x0000000000000000]              
	struct FName                                       NormalEquipAnim;                                  		// 0x0B6C (0x0008) [0x0000000000000000]              
	struct FName                                       NormalIdleAnim;                                   		// 0x0B74 (0x0008) [0x0000000000000000]              
	struct FName                                       NormalFireAnim;                                   		// 0x0B7C (0x0008) [0x0000000000000000]              
	struct FName                                       FullIdleAnim;                                     		// 0x0B84 (0x0008) [0x0000000000000000]              
	struct FName                                       FullFireAnim;                                     		// 0x0B8C (0x0008) [0x0000000000000000]              
	struct FName                                       BentBowAnim;                                      		// 0x0B94 (0x0008) [0x0000000000000000]              
	struct FName                                       FireToEmptyAnim;                                  		// 0x0B9C (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  BentPercentIcon;                                  		// 0x0BA4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              BowBentPercent;                                   		// 0x0BA8 (0x0004) [0x0000000000000000]              
	float                                              BeginBentTime;                                    		// 0x0BAC (0x0004) [0x0000000000000000]              
	unsigned long                                      bStartBenting : 1;                                		// 0x0BB0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseSpecialCrossHair : 1;                         		// 0x0BB0 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< class UClass* >                            AlternateBows;                                    		// 0x0BB4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              DamageScale2;                                     		// 0x0BC0 (0x0004) [0x0000000000000000]              
	struct FName                                       CurrentArrowName;                                 		// 0x0BC4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166637 ];

		return pClassPointer;
	};

	void SetDamageScale ( float InDamageScale, unsigned long bIsSpecial );
	void LimitGroundSpeed ( );
	void DrawSpeicalBowCrosshair ( class AHUD* HUD );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	void DisplaySpecial ( class UCanvas* LocalCavas );
	void ClientFullAmmo ( );
	struct FVector GetPhysicalFireStartLoc ( struct FVector AimDir );
	bool ProjectileFireValidation ( float LocalClientTime );
	void ServerThrowGrenade ( float LocalClientTime, float BentRate, struct FName InputName );
	class AProjectile* SpawnAnArrow ( );
	class AProjectile* ProjectileFire ( );
	void PlayArrowShootingEffect ( );
	void ServerQuitChargingState ( );
	void ServerEnterChargingState ( );
	void TimeWeaponClipChanging ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_Bow::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_ArrowShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_ArrowShot : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166640 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_ArrowShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_ArrowHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_ArrowHeadShot : public UTGDmgType_ArrowShot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166644 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_ArrowHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_Arx160
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_Arx160 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166648 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_Arx160::pClassPointer = NULL;

// Class TGWeapon.TGWeap_Arx160
// 0x0000 (0x0B18 - 0x0B18)
class ATGWeap_Arx160 : public ATGRealGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166656 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_Arx160::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_Arx160HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_Arx160HeadShot : public UTGDmgType_Arx160
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166659 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_Arx160HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_ASW338lm
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_ASW338lm : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166663 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_ASW338lm::pClassPointer = NULL;

// Class TGWeapon.TGWeap_ASW338lm
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_ASW338lm : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166671 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_ASW338lm::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_ASW338lmHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_ASW338lmHeadShot : public UTGDmgType_ASW338lm
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166674 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_ASW338lmHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AUG
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AUG : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166678 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AUG::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AUG
// 0x0000 (0x0BD8 - 0x0BD8)
class ATGWeap_AUG : public ATGRealSecondaryAimGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166686 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AUG::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AUGA3
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AUGA3 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166689 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AUGA3::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AUGA3
// 0x0000 (0x0C18 - 0x0C18)
class ATGWeap_AUGA3 : public ATGRealGrenadeGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166697 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_AUGA3::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AUGA3Grenade
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_AUGA3Grenade : public UTGDmgType_ExplodeGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166700 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AUGA3Grenade::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AUGA3HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AUGA3HeadShot : public UTGDmgType_AUGA3
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166704 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AUGA3HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AUGGAI
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AUGGAI : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166708 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AUGGAI::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AUGGAI
// 0x0000 (0x0BD8 - 0x0BD8)
class ATGWeap_AUGGAI : public ATGRealSecondaryAimGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166716 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_AUGGAI::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AUGGAIHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AUGGAIHeadShot : public UTGDmgType_AUGGAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166719 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AUGGAIHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AUGHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AUGHeadShot : public UTGDmgType_AUG
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166723 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AUGHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWM
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWM : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166727 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AWM::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AWM
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_AWM : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166735 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_AWM::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWM_AP
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWM_AP : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166738 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AWM_AP::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AWM_AP
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_AWM_AP : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166746 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_AWM_AP::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWM_APHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWM_APHeadShot : public UTGDmgType_AWM_AP
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166749 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AWM_APHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWM_Mag
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWM_Mag : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166753 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AWM_Mag::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AWM_Mag
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_AWM_Mag : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166761 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_AWM_Mag::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWM_MagHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWM_MagHeadShot : public UTGDmgType_AWM_Mag
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166764 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AWM_MagHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWM_old
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWM_old : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166768 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AWM_old::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AWM_old
// 0x0000 (0x0D68 - 0x0D68)
class ATGWeap_AWM_old : public ATGRealT2Sniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166776 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_AWM_old::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWM_oldHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWM_oldHeadShot : public UTGDmgType_AWM_old
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166779 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AWM_oldHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWM_SSM
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWM_SSM : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166783 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AWM_SSM::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AWM_SSM
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_AWM_SSM : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166791 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_AWM_SSM::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWM_SSMHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWM_SSMHeadShot : public UTGDmgType_AWM_SSM
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166794 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AWM_SSMHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWM_star
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWM_star : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166798 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AWM_star::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AWM_star
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_AWM_star : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166806 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_AWM_star::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWM_starHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWM_starHeadShot : public UTGDmgType_AWM_star
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166809 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AWM_starHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWM_TAM
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWM_TAM : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166813 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AWM_TAM::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AWM_TAM
// 0x0000 (0x0B70 - 0x0B70)
class ATGWeap_AWM_TAM : public ATGRealThermalSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166821 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_AWM_TAM::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWM_TAMHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWM_TAMHeadShot : public UTGDmgType_AWM_TAM
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166824 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AWM_TAMHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWM_TGAI
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWM_TGAI : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166828 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AWM_TGAI::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AWM_TGAI
// 0x0000 (0x0B70 - 0x0B70)
class ATGWeap_AWM_TGAI : public ATGRealThermalSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166836 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_AWM_TGAI::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWM_TGAIHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWM_TGAIHeadShot : public UTGDmgType_AWM_TGAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166839 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AWM_TGAIHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWM_Thermal
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWM_Thermal : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166843 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AWM_Thermal::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AWM_Thermal
// 0x0000 (0x0B70 - 0x0B70)
class ATGWeap_AWM_Thermal : public ATGRealThermalSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166851 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_AWM_Thermal::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWM_ThermalHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWM_ThermalHeadShot : public UTGDmgType_AWM_Thermal
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166854 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AWM_ThermalHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWMGAI
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWMGAI : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166858 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AWMGAI::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AWMGAI
// 0x0000 (0x0D68 - 0x0D68)
class ATGWeap_AWMGAI : public ATGRealT2Sniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166866 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_AWMGAI::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWMGAIHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWMGAIHeadShot : public UTGDmgType_AWMGAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166869 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AWMGAIHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWMGOLD
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWMGOLD : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166873 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AWMGOLD::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AWMGOLD
// 0x0000 (0x0D68 - 0x0D68)
class ATGWeap_AWMGOLD : public ATGRealT2Sniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166881 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_AWMGOLD::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWMGOLDHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWMGOLDHeadShot : public UTGDmgType_AWMGOLD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166884 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AWMGOLDHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWMHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWMHeadShot : public UTGDmgType_AWM
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166888 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AWMHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWMOET
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWMOET : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166892 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AWMOET::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AWMOET
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_AWMOET : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166900 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_AWMOET::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWMOETHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWMOETHeadShot : public UTGDmgType_AWMOET
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166903 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AWMOETHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWMs_Copper
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWMs_Copper : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166907 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AWMs_Copper::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AWMs_Copper
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_AWMs_Copper : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166915 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_AWMs_Copper::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWMs_CopperHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWMs_CopperHeadShot : public UTGDmgType_AWMs_Copper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166918 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AWMs_CopperHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWMs_Gold
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWMs_Gold : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166922 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AWMs_Gold::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AWMs_Gold
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_AWMs_Gold : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166930 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_AWMs_Gold::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWMs_GoldHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWMs_GoldHeadShot : public UTGDmgType_AWMs_Gold
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166933 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AWMs_GoldHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWMs_Silver
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWMs_Silver : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166937 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_AWMs_Silver::pClassPointer = NULL;

// Class TGWeapon.TGWeap_AWMs_Silver
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_AWMs_Silver : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166945 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_AWMs_Silver::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_AWMs_SilverHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_AWMs_SilverHeadShot : public UTGDmgType_AWMs_Silver
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166948 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_AWMs_SilverHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_BoxGlove
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_BoxGlove : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166952 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_BoxGlove::pClassPointer = NULL;

// Class TGWeapon.TGWeap_BoxGlove
// 0x0000 (0x0804 - 0x0804)
class ATGWeap_BoxGlove : public ATGRealMeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166960 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_BoxGlove::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_BoxGlove_PHL
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_BoxGlove_PHL : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166963 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_BoxGlove_PHL::pClassPointer = NULL;

// Class TGWeapon.TGWeap_BoxGlove_PHL
// 0x0000 (0x0804 - 0x0804)
class ATGWeap_BoxGlove_PHL : public ATGRealMeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166971 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_BoxGlove_PHL::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_BoxGlove_PHLHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_BoxGlove_PHLHeadShot : public UTGDmgType_BoxGlove_PHL
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166974 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_BoxGlove_PHLHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_BoxGlove_XD
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_BoxGlove_XD : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166978 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_BoxGlove_XD::pClassPointer = NULL;

// Class TGWeapon.TGWeap_BoxGlove_XD
// 0x0000 (0x0804 - 0x0804)
class ATGWeap_BoxGlove_XD : public ATGRealMeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166986 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_BoxGlove_XD::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_BoxGlove_XDHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_BoxGlove_XDHeadShot : public UTGDmgType_BoxGlove_XD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166989 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_BoxGlove_XDHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_BoxGloveHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_BoxGloveHeadShot : public UTGDmgType_BoxGlove
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166993 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_BoxGloveHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_Candy_Grenade
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_Candy_Grenade : public UTGDmgType_ExplodeGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166997 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_Candy_Grenade::pClassPointer = NULL;

// Class TGWeapon.TGWeap_Candy_Grenade
// 0x0000 (0x07C0 - 0x07C0)
class ATGWeap_Candy_Grenade : public ATGWeap_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 166999 ];

		return pClassPointer;
	};

	class AProjectile* ProjectileFire ( );
};

UClass* ATGWeap_Candy_Grenade::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_ChristGrenade
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_ChristGrenade : public UTGDmgType_ExplodeGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167002 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_ChristGrenade::pClassPointer = NULL;

// Class TGWeapon.TGWeap_ChristGrenade
// 0x0000 (0x07C0 - 0x07C0)
class ATGWeap_ChristGrenade : public ATGWeap_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167004 ];

		return pClassPointer;
	};

	class AProjectile* ProjectileFire ( );
};

UClass* ATGWeap_ChristGrenade::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_Colt1873
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_Colt1873 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167007 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_Colt1873::pClassPointer = NULL;

// Class TGWeapon.TGWeap_Colt1873
// 0x0020 (0x0B44 - 0x0B24)
class ATGWeap_Colt1873 : public ATGRealPistol
{
public:
	unsigned long                                      bIsReadyToFire : 1;                               		// 0x0B24 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       WeaponReadyFireAnim;                              		// 0x0B28 (0x0008) [0x0000000000000000]              
	struct FName                                       ArmReadyFireAnim;                                 		// 0x0B30 (0x0008) [0x0000000000000000]              
	struct FString                                     ReadyFireTip;                                     		// 0x0B38 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167015 ];

		return pClassPointer;
	};

	void DetachWeapon ( );
	void PlayReadyAnimation ( );
	struct FString GetWeaponModeReadableName ( );
	void StartFire ( unsigned char FireModeNum );
};

UClass* ATGWeap_Colt1873::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_Colt1873HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_Colt1873HeadShot : public UTGDmgType_Colt1873
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167018 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_Colt1873HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_CompoundBow
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_CompoundBow : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167022 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_CompoundBow::pClassPointer = NULL;

// Class TGWeapon.TGWeap_CompoundBow
// 0x0000 (0x0BCC - 0x0BCC)
class ATGWeap_CompoundBow : public ATGWeap_Bow
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167030 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_CompoundBow::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_CompoundBow_Explosion
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_CompoundBow_Explosion : public UTGDmgType_ExplodeGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167033 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_CompoundBow_Explosion::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_CompoundBowHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_CompoundBowHeadShot : public UTGDmgType_CompoundBow
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167037 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_CompoundBowHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_Cracker
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_Cracker : public UTGDmgType_ExplodeGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167041 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_Cracker::pClassPointer = NULL;

// Class TGWeapon.TGWeap_Cracker
// 0x0000 (0x07C0 - 0x07C0)
class ATGWeap_Cracker : public ATGWeap_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167043 ];

		return pClassPointer;
	};

	class AProjectile* ProjectileFire ( );
};

UClass* ATGWeap_Cracker::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_CrossBow
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_CrossBow : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167046 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_CrossBow::pClassPointer = NULL;

// Class TGWeapon.TGWeap_CrossBow
// 0x00A4 (0x0C0C - 0x0B68)
class ATGWeap_CrossBow : public ATGRealSniper
{
public:
	float                                              ArrowSpeed;                                       		// 0x0B68 (0x0004) [0x0000000000000000]              
	float                                              ArrowMaxSpeed;                                    		// 0x0B6C (0x0004) [0x0000000000000000]              
	float                                              ArrowAccelRate;                                   		// 0x0B70 (0x0004) [0x0000000000000000]              
	float                                              ArrowDamage;                                      		// 0x0B74 (0x0004) [0x0000000000000000]              
	float                                              ArrowMomentumTransfer;                            		// 0x0B78 (0x0004) [0x0000000000000000]              
	float                                              ArrowVelocityChangeInterval;                      		// 0x0B7C (0x0004) [0x0000000000000000]              
	float                                              ArrowVelocityChangeRateBase;                      		// 0x0B80 (0x0004) [0x0000000000000000]              
	float                                              ArrowVelocityChangeRateModified;                  		// 0x0B84 (0x0004) [0x0000000000000000]              
	float                                              ArrowCustomGravityScaling;                        		// 0x0B88 (0x0004) [0x0000000000000000]              
	float                                              ArrowZoomGravityScaling;                          		// 0x0B8C (0x0004) [0x0000000000000000]              
	float                                              ArrowExplosionDamageCount;                        		// 0x0B90 (0x0004) [0x0000000000000000]              
	float                                              ArrowExplosionDamageRadius;                       		// 0x0B94 (0x0004) [0x0000000000000000]              
	float                                              ArrowTimeToExplosion;                             		// 0x0B98 (0x0004) [0x0000000000000000]              
	float                                              ArrowDisperseCoff;                                		// 0x0B9C (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSize2;                             		// 0x0BA0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLength2;                       		// 0x0BA4 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifier2;                           		// 0x0BA8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifier2;                     		// 0x0BAC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeCrouching2;                    		// 0x0BB0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthCrouching2;              		// 0x0BB4 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierCrouching2;                  		// 0x0BB8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierCrouching2;            		// 0x0BBC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSlowMoving2;                   		// 0x0BC0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSlowMoving2;             		// 0x0BC4 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierSlowMoving2;                 		// 0x0BC8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierSlowMoving2;           		// 0x0BCC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeFastMoving2;                   		// 0x0BD0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthFastMoving2;             		// 0x0BD4 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierFastMoving2;                 		// 0x0BD8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierFastMoving2;           		// 0x0BDC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeJumping2;                      		// 0x0BE0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthJumping2;                		// 0x0BE4 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierJumping2;                    		// 0x0BE8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierJumping2;              		// 0x0BEC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLengthInaccuracyDecrement2;              		// 0x0BF0 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeInaccuracyDecrement2;                		// 0x0BF4 (0x0004) [0x0000000000000000]              
	struct FName                                       WeaponEquipEmptyAnim;                             		// 0x0BF8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ArmsEquipEmptyAnim;                               		// 0x0C00 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageScale2;                                     		// 0x0C08 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167048 ];

		return pClassPointer;
	};

	void FullAmmo ( );
	void SetDamageScale ( float InDamageScale, unsigned long bIsSpecial );
	void PlayWeaponEquip ( );
	void ClientStartZoom ( class AUTPlayerController* PC );
	void ServerStartZoom ( class AUTPlayerController* PC );
	void Gotozoom ( );
	void DrawBigCrossHair ( class AHUD* HUD );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	struct FVector CreateProjectileVelocityOffest ( );
	void ServerThrowGrenade ( float LocalClientTime );
	class AProjectile* ProjectileFire ( );
	void BackZoom ( );
	void InstantFire ( );
};

UClass* ATGWeap_CrossBow::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_CrossBowArrow
// 0x0004 (0x063C - 0x0638)
class UTGDmgType_CrossBowArrow : public UTGDmgType_ExplodeGrenade
{
public:
	float                                              CustomVehicleDamageScaling;                       		// 0x0638 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167051 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
	float VehicleDamageScalingFor ( class AVehicle* V );
};

UClass* UTGDmgType_CrossBowArrow::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_CSLR4
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_CSLR4 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167065 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_CSLR4::pClassPointer = NULL;

// Class TGWeapon.TGWeap_CSLR4
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_CSLR4 : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167073 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_CSLR4::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_CSLR4HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_CSLR4HeadShot : public UTGDmgType_CSLR4
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167076 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_CSLR4HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_DE_A
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_DE_A : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167080 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_DE_A::pClassPointer = NULL;

// Class TGWeapon.TGWeap_DE_A
// 0x0000 (0x0B24 - 0x0B24)
class ATGWeap_DE_A : public ATGRealPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167088 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_DE_A::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_DE_AHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_DE_AHeadShot : public UTGDmgType_DE_A
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167091 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_DE_AHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_DE_D
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_DE_D : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167095 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_DE_D::pClassPointer = NULL;

// Class TGWeapon.TGWeap_DE_D
// 0x0034 (0x0B58 - 0x0B24)
class ATGWeap_DE_D : public ATGRealPistol
{
public:
	struct FName                                       MuzzleFlashSocket02;                              		// 0x0B24 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             MuzzleFlashPSCTemplate02;                         		// 0x0B2C (0x0004) [0x0000000000000000]              
	class UUTParticleSystemComponent*                  MuzzleFlashPSC02;                                 		// 0x0B30 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FName >                             WeaponFireSingleAnim02;                           		// 0x0B34 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             ArmFireSingleAnim02;                              		// 0x0B40 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       ShellDropSocket02;                                		// 0x0B4C (0x0008) [0x0000000000000000]              
	unsigned long                                      bUsingChangeWeapon : 1;                           		// 0x0B54 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167103 ];

		return pClassPointer;
	};

	void CauseShellDrop ( );
	void eventCauseMuzzleFlashLight ( );
	void AttachMuzzleFlash ( );
	void eventMuzzleFlashTimer02 ( );
	void eventCauseMuzzleFlash ( );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
};

UClass* ATGWeap_DE_D::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_DE_DHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_DE_DHeadShot : public UTGDmgType_DE_D
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167106 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_DE_DHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_DE_G
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_DE_G : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167110 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_DE_G::pClassPointer = NULL;

// Class TGWeapon.TGWeap_DE_G
// 0x0000 (0x0B24 - 0x0B24)
class ATGWeap_DE_G : public ATGRealPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167118 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_DE_G::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_DE_GHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_DE_GHeadShot : public UTGDmgType_DE_G
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167121 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_DE_GHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_DEgame
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_DEgame : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167125 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_DEgame::pClassPointer = NULL;

// Class TGWeapon.TGWeap_DEgame
// 0x0000 (0x0B24 - 0x0B24)
class ATGWeap_DEgame : public ATGRealPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167133 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_DEgame::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_DEgameHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_DEgameHeadShot : public UTGDmgType_DEgame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167136 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_DEgameHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_DEgold
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_DEgold : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167140 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_DEgold::pClassPointer = NULL;

// Class TGWeapon.TGWeap_DEgold
// 0x0000 (0x0B24 - 0x0B24)
class ATGWeap_DEgold : public ATGRealPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167148 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_DEgold::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_DEgoldHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_DEgoldHeadShot : public UTGDmgType_DEgold
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167151 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_DEgoldHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_DEQT
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_DEQT : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167155 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_DEQT::pClassPointer = NULL;

// Class TGWeapon.TGWeap_DEQT
// 0x0000 (0x0B24 - 0x0B24)
class ATGWeap_DEQT : public ATGRealPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167163 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_DEQT::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_DEQTHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_DEQTHeadShot : public UTGDmgType_DEQT
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167166 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_DEQTHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_DesertEagle
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_DesertEagle : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167170 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_DesertEagle::pClassPointer = NULL;

// Class TGWeapon.TGWeap_DesertEagle
// 0x0000 (0x0B24 - 0x0B24)
class ATGWeap_DesertEagle : public ATGRealPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167178 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_DesertEagle::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_DesertEagleHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_DesertEagleHeadShot : public UTGDmgType_DesertEagle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167181 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_DesertEagleHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_DESnake
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_DESnake : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167185 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_DESnake::pClassPointer = NULL;

// Class TGWeapon.TGWeap_DESnake
// 0x0000 (0x0B24 - 0x0B24)
class ATGWeap_DESnake : public ATGRealPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167193 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_DESnake::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_DESnakeHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_DESnakeHeadShot : public UTGDmgType_DESnake
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167196 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_DESnakeHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_DSR1
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_DSR1 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167200 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_DSR1::pClassPointer = NULL;

// Class TGWeapon.TGWeap_DSR1
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_DSR1 : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167208 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_DSR1::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_DSR1HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_DSR1HeadShot : public UTGDmgType_DSR1
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167211 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_DSR1HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_F2000
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_F2000 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167215 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_F2000::pClassPointer = NULL;

// Class TGWeapon.TGWeap_F2000
// 0x0128 (0x0D00 - 0x0BD8)
class ATGWeap_F2000 : public ATGRealSecondaryAimGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0BD8 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  HudMaterial;                                      		// 0x0BDC (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  HudMaterialHit;                                   		// 0x0BE0 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             NormalModeWeaponIdleAnims;                        		// 0x0BE4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmIdleAnims;                           		// 0x0BF0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponIdleAnims;                  		// 0x0BFC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmIdleAnims;                     		// 0x0C08 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeWeaponFireSingleAnim;                   		// 0x0C14 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmFireSingleAnim;                      		// 0x0C20 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeWeaponFireContinousAnim;                		// 0x0C2C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmFireContinousAnim;                   		// 0x0C38 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponFireSingleAnim;             		// 0x0C44 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmFireSingleAnim;                		// 0x0C50 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponFireContinousAnim;          		// 0x0C5C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmFireContinousAnim;             		// 0x0C68 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FColor                                      MiddlePointColor;                                 		// 0x0C74 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLengthInaccuracyIncrementSA;             		// 0x0C78 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeInaccuracyIncrementSA;               		// 0x0C7C (0x0004) [0x0000000000000000]              
	float                                              CrossHairLengthInaccuracyDecrementSA;             		// 0x0C80 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeInaccuracyDecrementSA;               		// 0x0C84 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSA;                            		// 0x0C88 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSA;                      		// 0x0C8C (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierSA;                          		// 0x0C90 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierSA;                    		// 0x0C94 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeCrouchingSA;                   		// 0x0C98 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthCrouchingSA;             		// 0x0C9C (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierCrouchingSA;                 		// 0x0CA0 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierCrouchingSA;           		// 0x0CA4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSlowMovingSA;                  		// 0x0CA8 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSlowMovingSA;            		// 0x0CAC (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierSlowMovingSA;                		// 0x0CB0 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierSlowMovingSA;          		// 0x0CB4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeFastMovingSA;                  		// 0x0CB8 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthFastMovingSA;            		// 0x0CBC (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierFastMovingSA;                		// 0x0CC0 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierFastMovingSA;          		// 0x0CC4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeJumpingSA;                     		// 0x0CC8 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthJumpingSA;               		// 0x0CCC (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierJumpingSA;                   		// 0x0CD0 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierJumpingSA;             		// 0x0CD4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeJumpingWithPointSA;            		// 0x0CD8 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthJumpingWithPointSA;      		// 0x0CDC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeFastMovingWithPointSA;         		// 0x0CE0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthFastMovingWithPointSA;   		// 0x0CE4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSlowMovingWithPointSA;         		// 0x0CE8 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSlowMovingWithPointSA;   		// 0x0CEC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeCrouchingWithPointSA;          		// 0x0CF0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthCrouchingWithPointSA;    		// 0x0CF4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeWithPointSA;                   		// 0x0CF8 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthWithPointSA;             		// 0x0CFC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167223 ];

		return pClassPointer;
	};

	void DrawZoomedOverlay ( class AHUD* H );
	void DrawWeaponCrosshairEx ( class AHUD* HUD );
	void eventNotifySetCrossHair ( class UTexture2D* CrossHairHUD );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	void ReplayIdleAnim ( );
	void ToggleFireReference ( unsigned long bTurnSecondaryAimFireRate );
	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_F2000::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_F2000GAI
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_F2000GAI : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167226 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_F2000GAI::pClassPointer = NULL;

// Class TGWeapon.TGWeap_F2000GAI
// 0x0124 (0x0CFC - 0x0BD8)
class ATGWeap_F2000GAI : public ATGRealSecondaryAimGun
{
public:
	class UTexture2D*                                  HudMaterial;                                      		// 0x0BD8 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  HudMaterialHit;                                   		// 0x0BDC (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             NormalModeWeaponIdleAnims;                        		// 0x0BE0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmIdleAnims;                           		// 0x0BEC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponIdleAnims;                  		// 0x0BF8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmIdleAnims;                     		// 0x0C04 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeWeaponFireSingleAnim;                   		// 0x0C10 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmFireSingleAnim;                      		// 0x0C1C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeWeaponFireContinousAnim;                		// 0x0C28 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmFireContinousAnim;                   		// 0x0C34 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponFireSingleAnim;             		// 0x0C40 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmFireSingleAnim;                		// 0x0C4C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponFireContinousAnim;          		// 0x0C58 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmFireContinousAnim;             		// 0x0C64 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FColor                                      MiddlePointColor;                                 		// 0x0C70 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLengthInaccuracyIncrementSA;             		// 0x0C74 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeInaccuracyIncrementSA;               		// 0x0C78 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLengthInaccuracyDecrementSA;             		// 0x0C7C (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeInaccuracyDecrementSA;               		// 0x0C80 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSA;                            		// 0x0C84 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSA;                      		// 0x0C88 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierSA;                          		// 0x0C8C (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierSA;                    		// 0x0C90 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeCrouchingSA;                   		// 0x0C94 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthCrouchingSA;             		// 0x0C98 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierCrouchingSA;                 		// 0x0C9C (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierCrouchingSA;           		// 0x0CA0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSlowMovingSA;                  		// 0x0CA4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSlowMovingSA;            		// 0x0CA8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierSlowMovingSA;                		// 0x0CAC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierSlowMovingSA;          		// 0x0CB0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeFastMovingSA;                  		// 0x0CB4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthFastMovingSA;            		// 0x0CB8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierFastMovingSA;                		// 0x0CBC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierFastMovingSA;          		// 0x0CC0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeJumpingSA;                     		// 0x0CC4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthJumpingSA;               		// 0x0CC8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierJumpingSA;                   		// 0x0CCC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierJumpingSA;             		// 0x0CD0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeJumpingWithPointSA;            		// 0x0CD4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthJumpingWithPointSA;      		// 0x0CD8 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeFastMovingWithPointSA;         		// 0x0CDC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthFastMovingWithPointSA;   		// 0x0CE0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSlowMovingWithPointSA;         		// 0x0CE4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSlowMovingWithPointSA;   		// 0x0CE8 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeCrouchingWithPointSA;          		// 0x0CEC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthCrouchingWithPointSA;    		// 0x0CF0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeWithPointSA;                   		// 0x0CF4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthWithPointSA;             		// 0x0CF8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167234 ];

		return pClassPointer;
	};

	void DrawZoomedOverlay ( class AHUD* H );
	void DrawWeaponCrosshairEx ( class AHUD* HUD );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	void ReplayIdleAnim ( );
	void ToggleFireReference ( unsigned long bTurnSecondaryAimFireRate );
	void PlayWeaponPutDown ( );
	void eventNotifySetCrossHair ( class UTexture2D* CrossHairHUD );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_F2000GAI::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_F2000GAIHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_F2000GAIHeadShot : public UTGDmgType_F2000GAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167237 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_F2000GAIHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_F2000HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_F2000HeadShot : public UTGDmgType_F2000
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167241 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_F2000HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_FAL
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_FAL : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167245 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_FAL::pClassPointer = NULL;

// Class TGWeapon.TGWeap_FAL
// 0x0004 (0x0BF4 - 0x0BF0)
class ATGWeap_FAL : public ATGRealSpecialRifleGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0BF0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167253 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_FAL::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_FALdust
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_FALdust : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167256 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_FALdust::pClassPointer = NULL;

// Class TGWeapon.TGWeap_FALdust
// 0x0004 (0x0BF4 - 0x0BF0)
class ATGWeap_FALdust : public ATGRealSpecialRifleGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0BF0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167264 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_FALdust::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_FALdustHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_FALdustHeadShot : public UTGDmgType_FALdust
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167267 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_FALdustHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_FALHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_FALHeadShot : public UTGDmgType_FAL
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167271 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_FALHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_FAMAS
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_FAMAS : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167275 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_FAMAS::pClassPointer = NULL;

// Class TGWeapon.TGWeap_FAMAS
// 0x0004 (0x0BF4 - 0x0BF0)
class ATGWeap_FAMAS : public ATGRealSpecialRifleGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0BF0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167283 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_FAMAS::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_FAMASGAI
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_FAMASGAI : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167286 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_FAMASGAI::pClassPointer = NULL;

// Class TGWeapon.TGWeap_FAMASGAI
// 0x0004 (0x0BF4 - 0x0BF0)
class ATGWeap_FAMASGAI : public ATGRealSpecialRifleGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0BF0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167294 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_FAMASGAI::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_FAMASGAIHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_FAMASGAIHeadShot : public UTGDmgType_FAMASGAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167297 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_FAMASGAIHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_FAMASHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_FAMASHeadShot : public UTGDmgType_FAMAS
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167301 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_FAMASHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_FlashBang
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_FlashBang : public UUTDmgType_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167305 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_FlashBang::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_FMG
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_FMG : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167309 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_FMG::pClassPointer = NULL;

// Class TGWeapon.TGWeap_FMG
// 0x003C (0x0B54 - 0x0B18)
class ATGWeap_FMG : public ATGRealGun
{
public:
	struct FName                                       MuzzleFlashSocket02;                              		// 0x0B18 (0x0008) [0x0000000000000000]              
	struct FName                                       ShellDropSocket02;                                		// 0x0B20 (0x0008) [0x0000000000000000]              
	unsigned long                                      bUsedChangeWeapon : 1;                            		// 0x0B28 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FName >                             WeaponFireSingleAnim02;                           		// 0x0B2C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             ArmFireSingleAnim02;                              		// 0x0B38 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UParticleSystem*                             ShellDropPSCTemplate02;                           		// 0x0B44 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             MuzzleFlashPSCTemplate02;                         		// 0x0B48 (0x0004) [0x0000000000000000]              
	class UUTParticleSystemComponent*                  MuzzleFlashPSC02;                                 		// 0x0B4C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              EquipRecordTime;                                  		// 0x0B50 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167317 ];

		return pClassPointer;
	};

	void eventCauseMuzzleFlashLight ( );
	void CauseShellDrop ( );
	void AttachMuzzleFlash ( );
	void eventMuzzleFlashTimer02 ( );
	void eventCauseMuzzleFlash ( );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_FMG::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_FMGHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_FMGHeadShot : public UTGDmgType_FMG
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167320 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_FMGHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_FN57
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_FN57 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167324 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_FN57::pClassPointer = NULL;

// Class TGWeapon.TGWeap_FN57
// 0x0000 (0x0B24 - 0x0B24)
class ATGWeap_FN57 : public ATGRealPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167332 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_FN57::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_FN57HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_FN57HeadShot : public UTGDmgType_FN57
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167335 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_FN57HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_FoolGrenade
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_FoolGrenade : public UTGDmgType_ExplodeGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167339 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_FoolGrenade::pClassPointer = NULL;

// Class TGWeapon.TGWeap_FoolGrenade
// 0x0000 (0x07C0 - 0x07C0)
class ATGWeap_FoolGrenade : public ATGWeap_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167341 ];

		return pClassPointer;
	};

	class AProjectile* ProjectileFire ( );
};

UClass* ATGWeap_FoolGrenade::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_G36K
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_G36K : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167344 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_G36K::pClassPointer = NULL;

// Class TGWeapon.TGWeap_G36K
// 0x0124 (0x0CFC - 0x0BD8)
class ATGWeap_G36K : public ATGRealSecondaryAimGun
{
public:
	class UTexture2D*                                  HudMaterial;                                      		// 0x0BD8 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  HudMaterialHit;                                   		// 0x0BDC (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             NormalModeWeaponIdleAnims;                        		// 0x0BE0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmIdleAnims;                           		// 0x0BEC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponIdleAnims;                  		// 0x0BF8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmIdleAnims;                     		// 0x0C04 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeWeaponFireSingleAnim;                   		// 0x0C10 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmFireSingleAnim;                      		// 0x0C1C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeWeaponFireContinousAnim;                		// 0x0C28 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmFireContinousAnim;                   		// 0x0C34 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponFireSingleAnim;             		// 0x0C40 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmFireSingleAnim;                		// 0x0C4C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponFireContinousAnim;          		// 0x0C58 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmFireContinousAnim;             		// 0x0C64 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FColor                                      MiddlePointColor;                                 		// 0x0C70 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLengthInaccuracyIncrementSA;             		// 0x0C74 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeInaccuracyIncrementSA;               		// 0x0C78 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLengthInaccuracyDecrementSA;             		// 0x0C7C (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeInaccuracyDecrementSA;               		// 0x0C80 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSA;                            		// 0x0C84 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSA;                      		// 0x0C88 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierSA;                          		// 0x0C8C (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierSA;                    		// 0x0C90 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeCrouchingSA;                   		// 0x0C94 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthCrouchingSA;             		// 0x0C98 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierCrouchingSA;                 		// 0x0C9C (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierCrouchingSA;           		// 0x0CA0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSlowMovingSA;                  		// 0x0CA4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSlowMovingSA;            		// 0x0CA8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierSlowMovingSA;                		// 0x0CAC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierSlowMovingSA;          		// 0x0CB0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeFastMovingSA;                  		// 0x0CB4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthFastMovingSA;            		// 0x0CB8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierFastMovingSA;                		// 0x0CBC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierFastMovingSA;          		// 0x0CC0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeJumpingSA;                     		// 0x0CC4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthJumpingSA;               		// 0x0CC8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierJumpingSA;                   		// 0x0CCC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierJumpingSA;             		// 0x0CD0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeJumpingWithPointSA;            		// 0x0CD4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthJumpingWithPointSA;      		// 0x0CD8 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeFastMovingWithPointSA;         		// 0x0CDC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthFastMovingWithPointSA;   		// 0x0CE0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSlowMovingWithPointSA;         		// 0x0CE4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSlowMovingWithPointSA;   		// 0x0CE8 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeCrouchingWithPointSA;          		// 0x0CEC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthCrouchingWithPointSA;    		// 0x0CF0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeWithPointSA;                   		// 0x0CF4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthWithPointSA;             		// 0x0CF8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167352 ];

		return pClassPointer;
	};

	void DrawZoomedOverlay ( class AHUD* H );
	void DrawWeaponCrosshairEx ( class AHUD* HUD );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	void ReplayIdleAnim ( );
	void ToggleFireReference ( unsigned long bTurnSecondaryAimFireRate );
	void eventNotifySetCrossHair ( class UTexture2D* CrossHairHUD );
	void eventNotifySetCrossHairHit ( class UTexture2D* CrossHairHitHUD );
	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_G36K::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_G36KHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_G36KHeadShot : public UTGDmgType_G36K
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167355 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_G36KHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_G3SG2
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_G3SG2 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167359 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_G3SG2::pClassPointer = NULL;

// Class TGWeapon.TGWeap_G3SG2
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_G3SG2 : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167367 ];

		return pClassPointer;
	};

	void ServerGotoStateWeaponClipChanging ( );
	void ClientStartZoom ( class AUTPlayerController* PC );
	void InstantFire ( );
	void EndFire ( unsigned char FireModeNum );
	void FireAmmunition ( );
};

UClass* ATGWeap_G3SG2::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_G3SG2_Jungle
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_G3SG2_Jungle : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167370 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_G3SG2_Jungle::pClassPointer = NULL;

// Class TGWeapon.TGWeap_G3SG2_Jungle
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_G3SG2_Jungle : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167378 ];

		return pClassPointer;
	};

	void ServerGotoStateWeaponClipChanging ( );
	void ClientStartZoom ( class AUTPlayerController* PC );
	void InstantFire ( );
	void EndFire ( unsigned char FireModeNum );
	void FireAmmunition ( );
};

UClass* ATGWeap_G3SG2_Jungle::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_G3SG2_JungleHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_G3SG2_JungleHeadShot : public UTGDmgType_G3SG2_Jungle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167381 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_G3SG2_JungleHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_G3SG2HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_G3SG2HeadShot : public UTGDmgType_G3SG2
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167385 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_G3SG2HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_GILBOA
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_GILBOA : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167389 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_GILBOA::pClassPointer = NULL;

// Class TGWeapon.TGWeap_GILBOA
// 0x001C (0x0B34 - 0x0B18)
class ATGWeap_GILBOA : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              
	struct FName                                       MuzzleFlashSocket02;                              		// 0x0B1C (0x0008) [0x0000000000000000]              
	struct FName                                       ShellDropSocket02;                                		// 0x0B24 (0x0008) [0x0000000000000000]              
	class UUTParticleSystemComponent*                  MuzzleFlashPSC02;                                 		// 0x0B2C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bUseLeftBarrel : 1;                               		// 0x0B30 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167397 ];

		return pClassPointer;
	};

	void CauseShellDrop ( );
	void eventCauseMuzzleFlashLight ( );
	void AttachMuzzleFlash ( );
	void eventMuzzleFlashTimer02 ( );
	void eventCauseMuzzleFlash ( );
	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_GILBOA::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_GILBOAHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_GILBOAHeadShot : public UTGDmgType_GILBOA
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167400 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_GILBOAHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_GLOCK17
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_GLOCK17 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167404 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_GLOCK17::pClassPointer = NULL;

// Class TGWeapon.TGWeap_GLOCK17
// 0x0000 (0x0C24 - 0x0C24)
class ATGWeap_GLOCK17 : public ATGRealSpecialPistal
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167412 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_GLOCK17::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_GLOCK17HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_GLOCK17HeadShot : public UTGDmgType_GLOCK17
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167415 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_GLOCK17HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_HeartSeeker
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_HeartSeeker : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167419 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_HeartSeeker::pClassPointer = NULL;

// Class TGWeapon.TGWeap_HeartSeeker
// 0x0000 (0x0804 - 0x0804)
class ATGWeap_HeartSeeker : public ATGRealMeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167427 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_HeartSeeker::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_HeartSeekerHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_HeartSeekerHeadShot : public UTGDmgType_HeartSeeker
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167430 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_HeartSeekerHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_HEgame
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_HEgame : public UTGDmgType_ExplodeGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167434 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_HEgame::pClassPointer = NULL;

// Class TGWeapon.TGWeap_HEgame
// 0x0000 (0x07C0 - 0x07C0)
class ATGWeap_HEgame : public ATGWeap_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167436 ];

		return pClassPointer;
	};

	class AProjectile* ProjectileFire ( );
};

UClass* ATGWeap_HEgame::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_HEGrenade
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_HEGrenade : public UTGDmgType_ExplodeGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167439 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_HEGrenade::pClassPointer = NULL;

// Class TGWeapon.TGWeap_HEGrenade
// 0x0000 (0x07C0 - 0x07C0)
class ATGWeap_HEGrenade : public ATGWeap_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167441 ];

		return pClassPointer;
	};

	class AProjectile* ProjectileFire ( );
};

UClass* ATGWeap_HEGrenade::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_HK416
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_HK416 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167444 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_HK416::pClassPointer = NULL;

// Class TGWeapon.TGWeap_HK416
// 0x0014 (0x0B2C - 0x0B18)
class ATGWeap_HK416 : public ATGRealGun
{
public:
	class UUTParticleSystemComponent*                  WeaponAimingLinePSC;                              		// 0x0B18 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             AimingLineTemplate;                               		// 0x0B1C (0x0004) [0x0000000000000000]              
	struct FName                                       AimingLineSocketName;                             		// 0x0B20 (0x0008) [0x0000000000000000]              
	float                                              EquipRecordTime;                                  		// 0x0B28 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167452 ];

		return pClassPointer;
	};

	void MirrorUpdateNotify ( );
	void NotifyAimingLineEffect ( );
	void eventPostBeginPlay ( );
	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_HK416::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_HK416HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_HK416HeadShot : public UTGDmgType_HK416
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167455 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_HK416HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_HKG11
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_HKG11 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167459 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_HKG11::pClassPointer = NULL;

// Class TGWeapon.TGWeap_HKG11
// 0x0000 (0x0BD8 - 0x0BD8)
class ATGWeap_HKG11 : public ATGRealSecondaryAimGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167467 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_HKG11::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_HKG11HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_HKG11HeadShot : public UTGDmgType_HKG11
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167470 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_HKG11HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_IceAxe
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_IceAxe : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167474 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_IceAxe::pClassPointer = NULL;

// Class TGWeapon.TGWeap_IceAxe
// 0x0000 (0x0820 - 0x0820)
class ATGWeap_IceAxe : public ATGRealT2MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167482 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_IceAxe::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_IceAxeHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_IceAxeHeadShot : public UTGDmgType_IceAxe
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167485 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_IceAxeHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_JackHammer
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_JackHammer : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167489 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_JackHammer::pClassPointer = NULL;

// Class TGWeapon.TGWeap_JackHammer
// 0x0000 (0x0B50 - 0x0B50)
class ATGWeap_JackHammer : public ATGRealShotGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167497 ];

		return pClassPointer;
	};

	void ServerWeaponClipChanged ( );
	void TimeWeaponClipChanging ( );
};

UClass* ATGWeap_JackHammer::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_JackHammerHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_JackHammerHeadShot : public UTGDmgType_JackHammer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167500 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_JackHammerHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_JHammerACU
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_JHammerACU : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167504 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_JHammerACU::pClassPointer = NULL;

// Class TGWeapon.TGWeap_JHammerACU
// 0x0000 (0x0B50 - 0x0B50)
class ATGWeap_JHammerACU : public ATGRealShotGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167512 ];

		return pClassPointer;
	};

	void ServerWeaponClipChanged ( );
	void TimeWeaponClipChanging ( );
};

UClass* ATGWeap_JHammerACU::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_JHammerACUHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_JHammerACUHeadShot : public UTGDmgType_JHammerACU
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167515 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_JHammerACUHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_JHammergold
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_JHammergold : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167519 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_JHammergold::pClassPointer = NULL;

// Class TGWeapon.TGWeap_JHammergold
// 0x0000 (0x0B50 - 0x0B50)
class ATGWeap_JHammergold : public ATGRealShotGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167527 ];

		return pClassPointer;
	};

	void ServerWeaponClipChanged ( );
	void TimeWeaponClipChanging ( );
};

UClass* ATGWeap_JHammergold::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_JHammergoldHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_JHammergoldHeadShot : public UTGDmgType_JHammergold
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167530 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_JHammergoldHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_Jian
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_Jian : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167534 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_Jian::pClassPointer = NULL;

// Class TGWeapon.TGWeap_Jian
// 0x0000 (0x0804 - 0x0804)
class ATGWeap_Jian : public ATGRealMeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167542 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_Jian::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_JianHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_JianHeadShot : public UTGDmgType_Jian
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167545 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_JianHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_JS_SMG
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_JS_SMG : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167549 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_JS_SMG::pClassPointer = NULL;

// Class TGWeapon.TGWeap_JS_SMG
// 0x0000 (0x0B18 - 0x0B18)
class ATGWeap_JS_SMG : public ATGRealGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167557 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_JS_SMG::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_JS_SMGHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_JS_SMGHeadShot : public UTGDmgType_JS_SMG
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167560 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_JS_SMGHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_K92F
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_K92F : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167564 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_K92F::pClassPointer = NULL;

// Class TGWeapon.TGWeap_K92F
// 0x0000 (0x0B24 - 0x0B24)
class ATGWeap_K92F : public ATGRealPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167572 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_K92F::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_K92FHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_K92FHeadShot : public UTGDmgType_K92F
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167575 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_K92FHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_KACSAW
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_KACSAW : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167579 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_KACSAW::pClassPointer = NULL;

// Class TGWeapon.TGWeap_KACSAW
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_KACSAW : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167587 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_KACSAW::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_KACSAW_dust
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_KACSAW_dust : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167590 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_KACSAW_dust::pClassPointer = NULL;

// Class TGWeapon.TGWeap_KACSAW_dust
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_KACSAW_dust : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167598 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_KACSAW_dust::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_KACSAW_dustHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_KACSAW_dustHeadShot : public UTGDmgType_KACSAW_dust
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167601 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_KACSAW_dustHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_KACSAWHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_KACSAWHeadShot : public UTGDmgType_KACSAW
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167605 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_KACSAWHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_Knuckle
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_Knuckle : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167609 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_Knuckle::pClassPointer = NULL;

// Class TGWeapon.TGWeap_Knuckle
// 0x0000 (0x0820 - 0x0820)
class ATGWeap_Knuckle : public ATGRealT2MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167617 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_Knuckle::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_KnuckleHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_KnuckleHeadShot : public UTGDmgType_Knuckle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167620 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_KnuckleHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_KukriT
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_KukriT : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167624 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_KukriT::pClassPointer = NULL;

// Class TGWeapon.TGWeap_KukriT
// 0x0000 (0x0820 - 0x0820)
class ATGWeap_KukriT : public ATGRealT2MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167632 ];

		return pClassPointer;
	};

	void PlayFirstPersonAnim ( );
};

UClass* ATGWeap_KukriT::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_KukriTGold
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_KukriTGold : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167635 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_KukriTGold::pClassPointer = NULL;

// Class TGWeapon.TGWeap_KukriTGold
// 0x0000 (0x0820 - 0x0820)
class ATGWeap_KukriTGold : public ATGRealT2MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167643 ];

		return pClassPointer;
	};

	void PlayFirstPersonAnim ( );
};

UClass* ATGWeap_KukriTGold::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_KukriTGoldHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_KukriTGoldHeadShot : public UTGDmgType_KukriTGold
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167646 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_KukriTGoldHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_KukriTHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_KukriTHeadShot : public UTGDmgType_KukriT
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167650 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_KukriTHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_L85
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_L85 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167654 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_L85::pClassPointer = NULL;

// Class TGWeapon.TGWeap_L85
// 0x0000 (0x0B18 - 0x0B18)
class ATGWeap_L85 : public ATGRealGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167662 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_L85::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_L85HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_L85HeadShot : public UTGDmgType_L85
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167665 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_L85HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_LSAT
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_LSAT : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167669 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_LSAT::pClassPointer = NULL;

// Class TGWeapon.TGWeap_LSAT
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_LSAT : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167677 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_LSAT::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_LSATHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_LSATHeadShot : public UTGDmgType_LSAT
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167680 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_LSATHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M1014
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M1014 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167684 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M1014::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M1014
// 0x0000 (0x0B50 - 0x0B50)
class ATGWeap_M1014 : public ATGRealShotGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167692 ];

		return pClassPointer;
	};

	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
};

UClass* ATGWeap_M1014::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M1014GAI
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M1014GAI : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167695 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M1014GAI::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M1014GAI
// 0x0000 (0x0B50 - 0x0B50)
class ATGWeap_M1014GAI : public ATGRealShotGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167703 ];

		return pClassPointer;
	};

	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
};

UClass* ATGWeap_M1014GAI::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M1014GAIHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M1014GAIHeadShot : public UTGDmgType_M1014GAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167706 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M1014GAIHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M1014HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M1014HeadShot : public UTGDmgType_M1014
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167710 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M1014HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M107
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M107 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167714 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M107::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M107
// 0x000C (0x0B74 - 0x0B68)
class ATGWeap_M107 : public ATGRealSniper
{
public:
	int                                                DisplayAmmoMatOrder;                              		// 0x0B68 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   LeftHandAmmoCountMIC;                             		// 0x0B6C (0x0004) [0x0000000000000000]              
	float                                              WaitingRefeshSpecialGunMirror;                    		// 0x0B70 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167722 ];

		return pClassPointer;
	};

	void RefeshSpecialGunMirror ( );
	bool IsSpecialGun ( );
	void DelayActivateAmmoDisplayComp ( );
	void TimeWeaponEquipping ( );
	void DetachWeapon ( );
	void PostBeginPlay ( );
};

UClass* ATGWeap_M107::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M107HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M107HeadShot : public UTGDmgType_M107
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167725 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M107HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M14JAE100
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M14JAE100 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167729 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M14JAE100::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M14JAE100
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_M14JAE100 : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167737 ];

		return pClassPointer;
	};

	void ServerGotoStateWeaponClipChanging ( );
	void ClientStartZoom ( class AUTPlayerController* PC );
	void InstantFire ( );
	void EndFire ( unsigned char FireModeNum );
	void FireAmmunition ( );
};

UClass* ATGWeap_M14JAE100::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M14JAE100HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M14JAE100HeadShot : public UTGDmgType_M14JAE100
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167740 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M14JAE100HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M16
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M16 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167744 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M16::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M16
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_M16 : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167752 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M16::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M16HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M16HeadShot : public UTGDmgType_M16
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167755 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M16HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M1911
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M1911 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167759 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M1911::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M1911
// 0x0000 (0x0B24 - 0x0B24)
class ATGWeap_M1911 : public ATGRealPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167767 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_M1911::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M1911HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M1911HeadShot : public UTGDmgType_M1911
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167770 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M1911HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M240LW
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M240LW : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167774 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M240LW::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M240LW
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_M240LW : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167782 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M240LW::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M240LWHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M240LWHeadShot : public UTGDmgType_M240LW
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167785 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M240LWHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M249
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M249 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167789 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M249::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M249
// 0x0000 (0x0B18 - 0x0B18)
class ATGWeap_M249 : public ATGRealGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167797 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M249::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M249D
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M249D : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167800 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M249D::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M249D
// 0x003C (0x0B54 - 0x0B18)
class ATGWeap_M249D : public ATGRealGun
{
public:
	struct FName                                       MuzzleFlashSocket02;                              		// 0x0B18 (0x0008) [0x0000000000000000]              
	struct FName                                       ShellDropSocket02;                                		// 0x0B20 (0x0008) [0x0000000000000000]              
	unsigned long                                      bUsedChangeWeapon : 1;                            		// 0x0B28 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FName >                             WeaponFireSingleAnim02;                           		// 0x0B2C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             ArmFireSingleAnim02;                              		// 0x0B38 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UParticleSystem*                             ShellDropPSCTemplate02;                           		// 0x0B44 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             MuzzleFlashPSCTemplate02;                         		// 0x0B48 (0x0004) [0x0000000000000000]              
	class UUTParticleSystemComponent*                  MuzzleFlashPSC02;                                 		// 0x0B4C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              EquipRecordTime;                                  		// 0x0B50 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167808 ];

		return pClassPointer;
	};

	void eventCauseMuzzleFlashLight ( );
	void CauseShellDrop ( );
	void AttachMuzzleFlash ( );
	void eventMuzzleFlashTimer02 ( );
	void eventCauseMuzzleFlash ( );
	void PlayFireEffects2 ( unsigned char FireModeNum, struct FVector HitLocation );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M249D::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M249DHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M249DHeadShot : public UTGDmgType_M249D
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167811 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M249DHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M249Fire
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M249Fire : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167815 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M249Fire::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M249Fire
// 0x0000 (0x0C08 - 0x0C08)
class ATGWeap_M249Fire : public ATGRealMultiFunctionalFlame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167823 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_M249Fire::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M249Fire_Ice
// 0x0000 (0x0624 - 0x0624)
class UTGDmgType_M249Fire_Ice : public UTGDmgType_Freezing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167826 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M249Fire_Ice::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M249FireHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M249FireHeadShot : public UTGDmgType_M249Fire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167830 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M249FireHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M249GAI
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M249GAI : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167834 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M249GAI::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M249GAI
// 0x0000 (0x0B18 - 0x0B18)
class ATGWeap_M249GAI : public ATGRealGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167842 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M249GAI::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M249GAIHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M249GAIHeadShot : public UTGDmgType_M249GAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167845 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M249GAIHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M249HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M249HeadShot : public UTGDmgType_M249
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167849 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M249HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M26Grenade
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_M26Grenade : public UTGDmgType_ExplodeGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167853 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M26Grenade::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M26Grenade
// 0x0000 (0x07C0 - 0x07C0)
class ATGWeap_M26Grenade : public ATGWeap_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167855 ];

		return pClassPointer;
	};

	class AProjectile* ProjectileFire ( );
};

UClass* ATGWeap_M26Grenade::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M48Gold
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M48Gold : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167858 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M48Gold::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M48Gold
// 0x0000 (0x0804 - 0x0804)
class ATGWeap_M48Gold : public ATGRealMeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167866 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_M48Gold::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M48GoldHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M48GoldHeadShot : public UTGDmgType_M48Gold
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167869 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M48GoldHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M48HAWK
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M48HAWK : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167873 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M48HAWK::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M48HAWK
// 0x0000 (0x0804 - 0x0804)
class ATGWeap_M48HAWK : public ATGRealMeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167881 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_M48HAWK::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M48HAWKHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M48HAWKHeadShot : public UTGDmgType_M48HAWK
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167884 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M48HAWKHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167888 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_M4A1 : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167896 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_ACU
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_ACU : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167899 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1_ACU::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1_ACU
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_M4A1_ACU : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167907 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1_ACU::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_ACUHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_ACUHeadShot : public UTGDmgType_M4A1_ACU
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167910 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1_ACUHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_AFM
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_AFM : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167914 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1_AFM::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1_AFM
// 0x0004 (0x0C8C - 0x0C88)
class ATGWeap_M4A1_AFM : public ATGRealT2Gun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0C88 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167922 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1_AFM::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_AFMHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_AFMHeadShot : public UTGDmgType_M4A1_AFM
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167925 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1_AFMHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_G
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_G : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167929 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1_G::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1_G
// 0x0004 (0x0C8C - 0x0C88)
class ATGWeap_M4A1_G : public ATGRealT2Gun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0C88 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167937 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1_G::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_GHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_GHeadShot : public UTGDmgType_M4A1_G
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167940 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1_GHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_Long_Range
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_Long_Range : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167944 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1_Long_Range::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1_Long_Range
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_M4A1_Long_Range : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167952 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1_Long_Range::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_Long_RangeHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_Long_RangeHeadShot : public UTGDmgType_M4A1_Long_Range
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167955 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1_Long_RangeHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_mend
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_mend : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167959 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1_mend::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1_mend
// 0x0004 (0x0C8C - 0x0C88)
class ATGWeap_M4A1_mend : public ATGRealT2Gun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0C88 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167967 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1_mend::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_mendHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_mendHeadShot : public UTGDmgType_M4A1_mend
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167970 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1_mendHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_NZ
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_NZ : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167974 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1_NZ::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1_NZ
// 0x0124 (0x0CFC - 0x0BD8)
class ATGWeap_M4A1_NZ : public ATGRealSecondaryAimGun
{
public:
	class UTexture2D*                                  HudMaterial;                                      		// 0x0BD8 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  HudMaterialHit;                                   		// 0x0BDC (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             NormalModeWeaponIdleAnims;                        		// 0x0BE0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmIdleAnims;                           		// 0x0BEC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponIdleAnims;                  		// 0x0BF8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmIdleAnims;                     		// 0x0C04 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeWeaponFireSingleAnim;                   		// 0x0C10 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmFireSingleAnim;                      		// 0x0C1C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeWeaponFireContinousAnim;                		// 0x0C28 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmFireContinousAnim;                   		// 0x0C34 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponFireSingleAnim;             		// 0x0C40 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmFireSingleAnim;                		// 0x0C4C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponFireContinousAnim;          		// 0x0C58 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmFireContinousAnim;             		// 0x0C64 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FColor                                      MiddlePointColor;                                 		// 0x0C70 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLengthInaccuracyIncrementSA;             		// 0x0C74 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeInaccuracyIncrementSA;               		// 0x0C78 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLengthInaccuracyDecrementSA;             		// 0x0C7C (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeInaccuracyDecrementSA;               		// 0x0C80 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSA;                            		// 0x0C84 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSA;                      		// 0x0C88 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierSA;                          		// 0x0C8C (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierSA;                    		// 0x0C90 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeCrouchingSA;                   		// 0x0C94 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthCrouchingSA;             		// 0x0C98 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierCrouchingSA;                 		// 0x0C9C (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierCrouchingSA;           		// 0x0CA0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSlowMovingSA;                  		// 0x0CA4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSlowMovingSA;            		// 0x0CA8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierSlowMovingSA;                		// 0x0CAC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierSlowMovingSA;          		// 0x0CB0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeFastMovingSA;                  		// 0x0CB4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthFastMovingSA;            		// 0x0CB8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierFastMovingSA;                		// 0x0CBC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierFastMovingSA;          		// 0x0CC0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeJumpingSA;                     		// 0x0CC4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthJumpingSA;               		// 0x0CC8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierJumpingSA;                   		// 0x0CCC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierJumpingSA;             		// 0x0CD0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeJumpingWithPointSA;            		// 0x0CD4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthJumpingWithPointSA;      		// 0x0CD8 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeFastMovingWithPointSA;         		// 0x0CDC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthFastMovingWithPointSA;   		// 0x0CE0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSlowMovingWithPointSA;         		// 0x0CE4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSlowMovingWithPointSA;   		// 0x0CE8 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeCrouchingWithPointSA;          		// 0x0CEC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthCrouchingWithPointSA;    		// 0x0CF0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeWithPointSA;                   		// 0x0CF4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthWithPointSA;             		// 0x0CF8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167982 ];

		return pClassPointer;
	};

	void DrawZoomedOverlay ( class AHUD* H );
	void DrawWeaponCrosshairEx ( class AHUD* HUD );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	void ReplayIdleAnim ( );
	void ToggleFireReference ( unsigned long bTurnSecondaryAimFireRate );
	void PlayWeaponPutDown ( );
	void eventNotifySetCrossHair ( class UTexture2D* CrossHairHUD );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1_NZ::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_NZHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_NZHeadShot : public UTGDmgType_M4A1_NZ
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167985 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1_NZHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_old
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_old : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167989 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1_old::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1_old
// 0x0004 (0x0C8C - 0x0C88)
class ATGWeap_M4A1_old : public ATGRealT2Gun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0C88 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 167997 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1_old::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_oldHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_oldHeadShot : public UTGDmgType_M4A1_old
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168000 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1_oldHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_Pircing
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_Pircing : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168004 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1_Pircing::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1_Pircing
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_M4A1_Pircing : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168012 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1_Pircing::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_PircingHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_PircingHeadShot : public UTGDmgType_M4A1_Pircing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168015 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1_PircingHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_SCM
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_SCM : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168019 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1_SCM::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1_SCM
// 0x0004 (0x0C8C - 0x0C88)
class ATGWeap_M4A1_SCM : public ATGRealT2Gun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0C88 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168027 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1_SCM::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_SCMHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_SCMHeadShot : public UTGDmgType_M4A1_SCM
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168030 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1_SCMHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_Spe_Rel
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_Spe_Rel : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168034 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1_Spe_Rel::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1_Spe_Rel
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_M4A1_Spe_Rel : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168042 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1_Spe_Rel::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_Spe_RelHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_Spe_RelHeadShot : public UTGDmgType_M4A1_Spe_Rel
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168045 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1_Spe_RelHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_SPM
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_SPM : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168049 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1_SPM::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1_SPM
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_M4A1_SPM : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168057 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1_SPM::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1_SPMHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1_SPMHeadShot : public UTGDmgType_M4A1_SPM
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168060 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1_SPMHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1Diamond
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1Diamond : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168064 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1Diamond::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1Diamond
// 0x0004 (0x0C8C - 0x0C88)
class ATGWeap_M4A1Diamond : public ATGRealT2Gun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0C88 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168072 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1Diamond::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1DiamondHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1DiamondHeadShot : public UTGDmgType_M4A1Diamond
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168075 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1DiamondHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1Dragon
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1Dragon : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168079 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1Dragon::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1Dragon
// 0x0010 (0x0C74 - 0x0C64)
class ATGWeap_M4A1Dragon : public ATGRealSilencerGun
{
public:
	class UMaterialInstanceConstant*                   DragonMIC;                                        		// 0x0C64 (0x0004) [0x0000000000000000]              
	float                                              HeadshotEmissiveDuration;                         		// 0x0C68 (0x0004) [0x0000000000000000]              
	float                                              EmissiveLeftTime;                                 		// 0x0C6C (0x0004) [0x0000000000000000]              
	float                                              EquipRecordTime;                                  		// 0x0C70 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168087 ];

		return pClassPointer;
	};

	void NotifyWeaponHeadShot ( );
	void eventTick ( float DeltaTime );
	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1Dragon::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1DragonHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1DragonHeadShot : public UTGDmgType_M4A1Dragon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168100 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1DragonHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1game
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1game : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168108 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1game::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1game
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_M4A1game : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168116 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1game::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1gameHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1gameHeadShot : public UTGDmgType_M4A1game
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168119 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1gameHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1GOLD
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1GOLD : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168123 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1GOLD::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1GOLD
// 0x0004 (0x0C8C - 0x0C88)
class ATGWeap_M4A1GOLD : public ATGRealT2Gun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0C88 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168131 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1GOLD::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1GOLDHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1GOLDHeadShot : public UTGDmgType_M4A1GOLD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168134 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1GOLDHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1HeadShot : public UTGDmgType_M4A1
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168138 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1Member
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1Member : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168142 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1Member::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1Member
// 0x0004 (0x0C8C - 0x0C88)
class ATGWeap_M4A1Member : public ATGRealT2Gun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0C88 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168150 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1Member::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1MemberHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1MemberHeadShot : public UTGDmgType_M4A1Member
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168153 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1MemberHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1OET
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1OET : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168157 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1OET::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1OET
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_M4A1OET : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168165 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1OET::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1OETHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1OETHeadShot : public UTGDmgType_M4A1OET
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168168 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1OETHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1P_Gold
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1P_Gold : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168172 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1P_Gold::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1P_Gold
// 0x0004 (0x0C8C - 0x0C88)
class ATGWeap_M4A1P_Gold : public ATGRealT2Gun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0C88 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168180 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1P_Gold::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1P_GoldHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1P_GoldHeadShot : public UTGDmgType_M4A1P_Gold
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168183 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1P_GoldHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1Surpr
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1Surpr : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168187 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1Surpr::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1Surpr
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_M4A1Surpr : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168195 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1Surpr::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1SurprHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1SurprHeadShot : public UTGDmgType_M4A1Surpr
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168198 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1SurprHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1X
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1X : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168202 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4A1X::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4A1X
// 0x0004 (0x0C68 - 0x0C64)
class ATGWeap_M4A1X : public ATGRealSilencerGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0C64 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168210 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4A1X::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4A1XHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4A1XHeadShot : public UTGDmgType_M4A1X
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168223 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4A1XHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4fr_Copper
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4fr_Copper : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168231 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4fr_Copper::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4fr_Copper
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_M4fr_Copper : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168239 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4fr_Copper::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4fr_CopperHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4fr_CopperHeadShot : public UTGDmgType_M4fr_Copper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168242 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4fr_CopperHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4fr_Gold
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4fr_Gold : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168246 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4fr_Gold::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4fr_Gold
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_M4fr_Gold : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168254 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4fr_Gold::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4fr_GoldHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4fr_GoldHeadShot : public UTGDmgType_M4fr_Gold
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168257 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4fr_GoldHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4fr_Silver
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4fr_Silver : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168261 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M4fr_Silver::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M4fr_Silver
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_M4fr_Silver : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168269 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M4fr_Silver::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M4fr_SilverHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M4fr_SilverHeadShot : public UTGDmgType_M4fr_Silver
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168272 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M4fr_SilverHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M60
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M60 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168276 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M60::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M60
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_M60 : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168284 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M60::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M608
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M608 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168287 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M608::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M608
// 0x0000 (0x0B24 - 0x0B24)
class ATGWeap_M608 : public ATGRealPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168295 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_M608::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M608HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M608HeadShot : public UTGDmgType_M608
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168298 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M608HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M60_cloud
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M60_cloud : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168302 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M60_cloud::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M60_cloud
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_M60_cloud : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168310 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M60_cloud::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M60_cloudHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M60_cloudHeadShot : public UTGDmgType_M60_cloud
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168313 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M60_cloudHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M60Child
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M60Child : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168317 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M60Child::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M60Child
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_M60Child : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168325 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M60Child::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M60ChildHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M60ChildHeadShot : public UTGDmgType_M60Child
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168328 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M60ChildHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M60HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M60HeadShot : public UTGDmgType_M60
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168332 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M60HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M60oet
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M60oet : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168336 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M60oet::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M60oet
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_M60oet : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168344 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_M60oet::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M60oetHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M60oetHeadShot : public UTGDmgType_M60oet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168347 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M60oetHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M95
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M95 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168351 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M95::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M95
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_M95 : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168359 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_M95::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M95GAI
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M95GAI : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168362 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M95GAI::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M95GAI
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_M95GAI : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168370 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_M95GAI::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M95GAIHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M95GAIHeadShot : public UTGDmgType_M95GAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168373 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M95GAIHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M95gold
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M95gold : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168377 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M95gold::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M95gold
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_M95gold : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168385 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_M95gold::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M95goldHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M95goldHeadShot : public UTGDmgType_M95gold
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168388 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M95goldHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M95HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M95HeadShot : public UTGDmgType_M95
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168392 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M95HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M95Snake
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M95Snake : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168396 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M95Snake::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M95Snake
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_M95Snake : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168404 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_M95Snake::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M95SnakeHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M95SnakeHeadShot : public UTGDmgType_M95Snake
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168407 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M95SnakeHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M98b
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M98b : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168411 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_M98b::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M98b
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_M98b : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168419 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_M98b::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_M98bHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_M98bHeadShot : public UTGDmgType_M98b
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168422 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_M98bHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MG3
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MG3 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168426 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_MG3::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MG3
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_MG3 : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168434 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_MG3::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MG3HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MG3HeadShot : public UTGDmgType_MG3
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168437 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MG3HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MidAutumn
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_MidAutumn : public UTGDmgType_ExplodeGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168441 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MidAutumn::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MidAutumn
// 0x0000 (0x07C0 - 0x07C0)
class ATGWeap_MidAutumn : public ATGWeap_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168443 ];

		return pClassPointer;
	};

	class AProjectile* ProjectileFire ( );
};

UClass* ATGWeap_MidAutumn::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MINI14
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MINI14 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168446 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_MINI14::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MINI14
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_MINI14 : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168454 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_MINI14::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MINI14HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MINI14HeadShot : public UTGDmgType_MINI14
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168457 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MINI14HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MiniGun
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MiniGun : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168461 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_MiniGun::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MiniGun
// 0x0000 (0x0B78 - 0x0B78)
class ATGWeap_MiniGun : public ATGWeap_MiniGunBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168469 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_MiniGun::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MinigunGAI
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MinigunGAI : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168472 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_MinigunGAI::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MinigunGAI
// 0x0000 (0x0B78 - 0x0B78)
class ATGWeap_MinigunGAI : public ATGWeap_MiniGunBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168480 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_MinigunGAI::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MinigunGAIHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MinigunGAIHeadShot : public UTGDmgType_MinigunGAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168483 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MinigunGAIHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MinigunGold
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MinigunGold : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168487 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_MinigunGold::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MinigunGold
// 0x0000 (0x0B78 - 0x0B78)
class ATGWeap_MinigunGold : public ATGWeap_MiniGunBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168495 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_MinigunGold::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MinigunGoldHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MinigunGoldHeadShot : public UTGDmgType_MinigunGold
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168498 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MinigunGoldHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MiniGunHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MiniGunHeadShot : public UTGDmgType_MiniGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168502 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MiniGunHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MinigunSnake
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MinigunSnake : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168506 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_MinigunSnake::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MinigunSnake
// 0x0034 (0x0BAC - 0x0B78)
class ATGWeap_MinigunSnake : public ATGWeap_MiniGunBase
{
public:
	class UUTParticleSystemComponent*                  LeftSmokeDimPSC;                                  		// 0x0B78 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UUTParticleSystemComponent*                  RightSmokeDimPSC;                                 		// 0x0B7C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             SmokeDimTemplate;                                 		// 0x0B80 (0x0004) [0x0000000000000000]              
	struct FName                                       LeftSmokeSocketName;                              		// 0x0B84 (0x0008) [0x0000000000000000]              
	struct FName                                       RightSmokeSocketName;                             		// 0x0B8C (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   WeaponFiringSmokeMI;                              		// 0x0B94 (0x0004) [0x0000000000000000]              
	int                                                FiringSmokeMatOrder;                              		// 0x0B98 (0x0004) [0x0000000000000000]              
	float                                              SmokeMatLightening;                               		// 0x0B9C (0x0004) [0x0000000000000000]              
	int                                                DisplayAmmoMatOrder;                              		// 0x0BA0 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   LeftHandAmmoCountMIC;                             		// 0x0BA4 (0x0004) [0x0000000000000000]              
	float                                              WaitingRefeshSpecialGunMirror;                    		// 0x0BA8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168514 ];

		return pClassPointer;
	};

	void RefeshSpecialGunMirror ( );
	bool IsSpecialGun ( );
	void DelayActivateAmmoDisplayComp ( );
	void TimeWeaponEquipping ( );
	void DetachWeapon ( );
	void ModifyFiringSmokeGeer ( );
	void NotifySmokeEffectInitialization ( );
	void eventPostBeginPlay ( );
};

UClass* ATGWeap_MinigunSnake::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MinigunSnakeHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MinigunSnakeHeadShot : public UTGDmgType_MinigunSnake
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168517 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MinigunSnakeHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_Minimi
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_Minimi : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168521 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_Minimi::pClassPointer = NULL;

// Class TGWeapon.TGWeap_Minimi
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_Minimi : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168529 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_Minimi::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MinimiGAI
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MinimiGAI : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168532 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_MinimiGAI::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MinimiGAI
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_MinimiGAI : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168540 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_MinimiGAI::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MinimiGAIHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MinimiGAIHeadShot : public UTGDmgType_MinimiGAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168543 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MinimiGAIHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MinimiHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MinimiHeadShot : public UTGDmgType_Minimi
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168547 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MinimiHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MinimiOET
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MinimiOET : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168551 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_MinimiOET::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MinimiOET
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_MinimiOET : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168559 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_MinimiOET::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MinimiOETHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MinimiOETHeadShot : public UTGDmgType_MinimiOET
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168562 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MinimiOETHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MK2
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MK2 : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168566 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_MK2::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MK2
// 0x0000 (0x0804 - 0x0804)
class ATGWeap_MK2 : public ATGRealMeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168574 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_MK2::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MK2game
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MK2game : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168577 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_MK2game::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MK2game
// 0x0000 (0x0804 - 0x0804)
class ATGWeap_MK2game : public ATGRealMeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168585 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_MK2game::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MK2gameHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MK2gameHeadShot : public UTGDmgType_MK2game
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168588 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MK2gameHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MK2HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MK2HeadShot : public UTGDmgType_MK2
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168592 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MK2HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MK4
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MK4 : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168596 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_MK4::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MK4
// 0x0000 (0x0820 - 0x0820)
class ATGWeap_MK4 : public ATGRealT2MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168604 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_MK4::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MK4gold
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MK4gold : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168607 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_MK4gold::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MK4gold
// 0x0000 (0x0820 - 0x0820)
class ATGWeap_MK4gold : public ATGRealT2MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168615 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_MK4gold::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MK4goldHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MK4goldHeadShot : public UTGDmgType_MK4gold
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168618 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MK4goldHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MK4HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MK4HeadShot : public UTGDmgType_MK4
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168622 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MK4HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MK4QT
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MK4QT : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168626 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_MK4QT::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MK4QT
// 0x0000 (0x0820 - 0x0820)
class ATGWeap_MK4QT : public ATGRealT2MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168634 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_MK4QT::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MK4QTHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MK4QTHeadShot : public UTGDmgType_MK4QT
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168637 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MK4QTHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MK4Snake
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MK4Snake : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168641 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_MK4Snake::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MK4Snake
// 0x0000 (0x0820 - 0x0820)
class ATGWeap_MK4Snake : public ATGRealT2MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168649 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_MK4Snake::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MK4SnakeHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MK4SnakeHeadShot : public UTGDmgType_MK4Snake
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168652 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MK4SnakeHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MP5
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MP5 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168656 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_MP5::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MP5
// 0x0000 (0x0B18 - 0x0B18)
class ATGWeap_MP5 : public ATGRealGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168664 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_MP5::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MP5_fire
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MP5_fire : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168667 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_MP5_fire::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MP5_fire
// 0x0000 (0x0B18 - 0x0B18)
class ATGWeap_MP5_fire : public ATGRealGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168675 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_MP5_fire::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MP5_fireHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MP5_fireHeadShot : public UTGDmgType_MP5_fire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168678 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MP5_fireHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MP5HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MP5HeadShot : public UTGDmgType_MP5
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168682 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MP5HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_mp5SD10
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_mp5SD10 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168686 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_mp5SD10::pClassPointer = NULL;

// Class TGWeapon.TGWeap_mp5SD10
// 0x0000 (0x0B18 - 0x0B18)
class ATGWeap_mp5SD10 : public ATGRealGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168694 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_mp5SD10::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_mp5SD10HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_mp5SD10HeadShot : public UTGDmgType_mp5SD10
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168697 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_mp5SD10HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MSR_G
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MSR_G : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168701 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_MSR_G::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MSR_G
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_MSR_G : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168709 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_MSR_G::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MSR_GHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MSR_GHeadShot : public UTGDmgType_MSR_G
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168712 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MSR_GHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MSRacu
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MSRacu : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168716 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_MSRacu::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MSRacu
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_MSRacu : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168724 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_MSRacu::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MSRacuHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MSRacuHeadShot : public UTGDmgType_MSRacu
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168727 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MSRacuHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MSRgame
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MSRgame : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168731 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_MSRgame::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MSRgame
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_MSRgame : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168739 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_MSRgame::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MSRgameHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MSRgameHeadShot : public UTGDmgType_MSRgame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168742 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MSRgameHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MUAL
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MUAL : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168746 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_MUAL::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MUAL
// 0x0014 (0x0B64 - 0x0B50)
class ATGWeap_MUAL : public ATGRealShotGun
{
public:
	struct FName                                       MuzzleFlashSocket02;                              		// 0x0B50 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             MuzzleFlashPSCTemplate02;                         		// 0x0B58 (0x0004) [0x0000000000000000]              
	class UUTParticleSystemComponent*                  MuzzleFlashPSC02;                                 		// 0x0B5C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UUDKExplosionLight*                          MuzzleFlashLight02;                               		// 0x0B60 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168754 ];

		return pClassPointer;
	};

	void ServerWeaponClipChanged ( );
	void TimeWeaponClipChanging ( );
	void eventCauseMuzzleFlashLight ( );
	void CauseShellDrop ( );
	void AttachMuzzleFlash ( );
	void eventMuzzleFlashTimer02 ( );
	void eventCauseMuzzleFlash ( );
};

UClass* ATGWeap_MUAL::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_MUALHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_MUALHeadShot : public UTGDmgType_MUAL
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168757 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_MUALHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_nailbat
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_nailbat : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168761 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_nailbat::pClassPointer = NULL;

// Class TGWeapon.TGWeap_nailbat
// 0x0000 (0x0820 - 0x0820)
class ATGWeap_nailbat : public ATGRealT2MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168769 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_nailbat::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_nailbatHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_nailbatHeadShot : public UTGDmgType_nailbat
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168772 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_nailbatHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_OTS14
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_OTS14 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168776 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_OTS14::pClassPointer = NULL;

// Class TGWeapon.TGWeap_OTS14
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_OTS14 : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168784 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_OTS14::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_OTS14HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_OTS14HeadShot : public UTGDmgType_OTS14
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168787 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_OTS14HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_P90
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_P90 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168791 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_P90::pClassPointer = NULL;

// Class TGWeapon.TGWeap_P90
// 0x0000 (0x0B18 - 0x0B18)
class ATGWeap_P90 : public ATGRealGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168799 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_P90::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_P90HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_P90HeadShot : public UTGDmgType_P90
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168802 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_P90HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_Pumpkin
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_Pumpkin : public UTGDmgType_ExplodeGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168806 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_Pumpkin::pClassPointer = NULL;

// Class TGWeapon.TGWeap_Pumpkin
// 0x0000 (0x07C0 - 0x07C0)
class ATGWeap_Pumpkin : public ATGWeap_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168808 ];

		return pClassPointer;
	};

	class AProjectile* ProjectileFire ( );
};

UClass* ATGWeap_Pumpkin::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_PVE03
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_PVE03 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168811 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_PVE03::pClassPointer = NULL;

// Class TGWeapon.TGWeap_PVE03
// 0x0000 (0x0B24 - 0x0B24)
class ATGWeap_PVE03 : public ATGRealPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168819 ];

		return pClassPointer;
	};

	void InstantFire ( );
	void eventCauseMuzzleFlash ( );
};

UClass* ATGWeap_PVE03::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_PVE03HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_PVE03HeadShot : public UTGDmgType_PVE03
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168822 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_PVE03HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_PX4
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_PX4 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168826 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_PX4::pClassPointer = NULL;

// Class TGWeapon.TGWeap_PX4
// 0x0000 (0x0B24 - 0x0B24)
class ATGWeap_PX4 : public ATGRealPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168834 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_PX4::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_PX4HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_PX4HeadShot : public UTGDmgType_PX4
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168837 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_PX4HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QBS09
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QBS09 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168841 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_QBS09::pClassPointer = NULL;

// Class TGWeapon.TGWeap_QBS09
// 0x0000 (0x0B50 - 0x0B50)
class ATGWeap_QBS09 : public ATGRealShotGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168849 ];

		return pClassPointer;
	};

	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
};

UClass* ATGWeap_QBS09::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QBS09HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QBS09HeadShot : public UTGDmgType_QBS09
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168852 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_QBS09HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QBU10
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QBU10 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168856 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_QBU10::pClassPointer = NULL;

// Class TGWeapon.TGWeap_QBU10
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_QBU10 : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168864 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_QBU10::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QBU10HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QBU10HeadShot : public UTGDmgType_QBU10
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168867 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_QBU10HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QBU88
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QBU88 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168871 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_QBU88::pClassPointer = NULL;

// Class TGWeapon.TGWeap_QBU88
// 0x000C (0x0B74 - 0x0B68)
class ATGWeap_QBU88 : public ATGRealSniper
{
public:
	float                                              FireIntervalAccumulateTime;                       		// 0x0B68 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  BulletFrame;                                      		// 0x0B6C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  BulletProgress;                                   		// 0x0B70 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168879 ];

		return pClassPointer;
	};

	void InstantFire ( );
	void EndFire ( unsigned char FireModeNum );
	void ServerGotoStateWeaponClipChanging ( );
	void eventTick ( float DeltaTime );
	void DisplaySpecial ( class UCanvas* LocalCavas );
	void FireAmmunition ( );
};

UClass* ATGWeap_QBU88::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QBU88HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QBU88HeadShot : public UTGDmgType_QBU88
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168882 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_QBU88HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QBZ03
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QBZ03 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168886 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_QBZ03::pClassPointer = NULL;

// Class TGWeapon.TGWeap_QBZ03
// 0x0000 (0x0BD8 - 0x0BD8)
class ATGWeap_QBZ03 : public ATGRealSecondaryAimGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168894 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_QBZ03::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QBZ03HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QBZ03HeadShot : public UTGDmgType_QBZ03
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168897 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_QBZ03HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QBZ95
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QBZ95 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168901 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_QBZ95::pClassPointer = NULL;

// Class TGWeapon.TGWeap_QBZ95
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_QBZ95 : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168909 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_QBZ95::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QBZ95_mend
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QBZ95_mend : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168912 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_QBZ95_mend::pClassPointer = NULL;

// Class TGWeapon.TGWeap_QBZ95_mend
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_QBZ95_mend : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168920 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_QBZ95_mend::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QBZ95_mendHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QBZ95_mendHeadShot : public UTGDmgType_QBZ95_mend
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168923 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_QBZ95_mendHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QBZ95cp
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QBZ95cp : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168927 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_QBZ95cp::pClassPointer = NULL;

// Class TGWeapon.TGWeap_QBZ95cp
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_QBZ95cp : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168935 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_QBZ95cp::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QBZ95cpHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QBZ95cpHeadShot : public UTGDmgType_QBZ95cp
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168938 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_QBZ95cpHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QBZ95gold
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QBZ95gold : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168942 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_QBZ95gold::pClassPointer = NULL;

// Class TGWeapon.TGWeap_QBZ95gold
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_QBZ95gold : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168950 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_QBZ95gold::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QBZ95goldHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QBZ95goldHeadShot : public UTGDmgType_QBZ95gold
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168953 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_QBZ95goldHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QBZ95HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QBZ95HeadShot : public UTGDmgType_QBZ95
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168957 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_QBZ95HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QBZ95OET
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QBZ95OET : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168961 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_QBZ95OET::pClassPointer = NULL;

// Class TGWeapon.TGWeap_QBZ95OET
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_QBZ95OET : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168969 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_QBZ95OET::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QBZ95OETHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QBZ95OETHeadShot : public UTGDmgType_QBZ95OET
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168972 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_QBZ95OETHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QBZ95Sil
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QBZ95Sil : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168976 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_QBZ95Sil::pClassPointer = NULL;

// Class TGWeapon.TGWeap_QBZ95Sil
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_QBZ95Sil : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168984 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_QBZ95Sil::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QBZ95SilHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QBZ95SilHeadShot : public UTGDmgType_QBZ95Sil
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168987 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_QBZ95SilHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QJY88
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QJY88 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168991 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_QJY88::pClassPointer = NULL;

// Class TGWeapon.TGWeap_QJY88
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_QJY88 : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 168999 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_QJY88::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QJY88HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QJY88HeadShot : public UTGDmgType_QJY88
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169002 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_QJY88HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QJY88oet
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QJY88oet : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169006 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_QJY88oet::pClassPointer = NULL;

// Class TGWeapon.TGWeap_QJY88oet
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_QJY88oet : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169014 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_QJY88oet::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QJY88oetHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QJY88oetHeadShot : public UTGDmgType_QJY88oet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169017 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_QJY88oetHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QSZ92
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QSZ92 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169021 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_QSZ92::pClassPointer = NULL;

// Class TGWeapon.TGWeap_QSZ92
// 0x0000 (0x0B24 - 0x0B24)
class ATGWeap_QSZ92 : public ATGRealPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169029 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_QSZ92::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_QSZ92HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_QSZ92HeadShot : public UTGDmgType_QSZ92
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169032 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_QSZ92HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_R700
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_R700 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169036 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_R700::pClassPointer = NULL;

// Class TGWeapon.TGWeap_R700
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_R700 : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169044 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_R700::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_R700GAI
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_R700GAI : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169047 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_R700GAI::pClassPointer = NULL;

// Class TGWeapon.TGWeap_R700GAI
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_R700GAI : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169055 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_R700GAI::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_R700GAIHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_R700GAIHeadShot : public UTGDmgType_R700GAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169058 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_R700GAIHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_R700HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_R700HeadShot : public UTGDmgType_R700
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169062 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_R700HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_Remington_MSR
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_Remington_MSR : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169066 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_Remington_MSR::pClassPointer = NULL;

// Class TGWeapon.TGWeap_Remington_MSR
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_Remington_MSR : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169074 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_Remington_MSR::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_Remington_MSRHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_Remington_MSRHeadShot : public UTGDmgType_Remington_MSR
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169077 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_Remington_MSRHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_RPK
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_RPK : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169081 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_RPK::pClassPointer = NULL;

// Class TGWeapon.TGWeap_RPK
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_RPK : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169089 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_RPK::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_RPKGAI
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_RPKGAI : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169092 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_RPKGAI::pClassPointer = NULL;

// Class TGWeapon.TGWeap_RPKGAI
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_RPKGAI : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169100 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_RPKGAI::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_RPKGAIHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_RPKGAIHeadShot : public UTGDmgType_RPKGAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169103 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_RPKGAIHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_RPKgold
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_RPKgold : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169107 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_RPKgold::pClassPointer = NULL;

// Class TGWeapon.TGWeap_RPKgold
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_RPKgold : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169115 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_RPKgold::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_RPKgoldHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_RPKgoldHeadShot : public UTGDmgType_RPKgold
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169118 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_RPKgoldHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_RPKHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_RPKHeadShot : public UTGDmgType_RPK
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169122 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_RPKHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_RPKM
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_RPKM : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169126 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_RPKM::pClassPointer = NULL;

// Class TGWeapon.TGWeap_RPKM
// 0x001C (0x0C34 - 0x0C18)
class ATGWeap_RPKM : public ATGRealGrenadeGun
{
public:
	float                                              PoisonRange;                                      		// 0x0C18 (0x0004) [0x0000000000000000]              
	float                                              PoisonLastTime;                                   		// 0x0C1C (0x0004) [0x0000000000000000]              
	float                                              PoisonDamageInterval;                             		// 0x0C20 (0x0004) [0x0000000000000000]              
	float                                              PoisonDamagePerSecond;                            		// 0x0C24 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   WeaponPoisonTubeMI;                               		// 0x0C28 (0x0004) [0x0000000000000000]              
	float                                              MinGrenadeClipChangeInterval;                     		// 0x0C2C (0x0004) [0x0000000000000000]              
	float                                              EquipRecordTime;                                  		// 0x0C30 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169134 ];

		return pClassPointer;
	};

	void DelayResetPoisonTubeColorGreen ( );
	void SetPoisionTubeColor ( );
	void FullAmmo ( );
	void TimeWeaponClipChanging ( );
	void DetachWeapon ( );
	void TimeWeaponEquipping ( );
	void PlayGrenadeThrowEffect ( );
	void SetDamageScale ( float InDamageScale, unsigned long bIsSpecial );
	void SetAmmoCountScale ( float ClipAmmoCountScale, float CarriedAmmoCountScale, unsigned long bIsSpecialWeapon );
	class AProjectile* ProjectileFire ( );
	float GetClipChangeTime ( );
	void ModifyWeaponSpecificProperty ( struct FName PropertyName, float PropertyValue );
	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_RPKM::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_RPKMHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_RPKMHeadShot : public UTGDmgType_RPKM
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169137 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_RPKMHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_RPKMPoison
// 0x0000 (0x0624 - 0x0624)
class UTGDmgType_RPKMPoison : public UTGDmgType_Freezing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169141 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_RPKMPoison::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SA58
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SA58 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169145 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_SA58::pClassPointer = NULL;

// Class TGWeapon.TGWeap_SA58
// 0x0124 (0x0CFC - 0x0BD8)
class ATGWeap_SA58 : public ATGRealSecondaryAimGun
{
public:
	class UTexture2D*                                  HudMaterial;                                      		// 0x0BD8 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  HudMaterialHit;                                   		// 0x0BDC (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             NormalModeWeaponIdleAnims;                        		// 0x0BE0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmIdleAnims;                           		// 0x0BEC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponIdleAnims;                  		// 0x0BF8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmIdleAnims;                     		// 0x0C04 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeWeaponFireSingleAnim;                   		// 0x0C10 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmFireSingleAnim;                      		// 0x0C1C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeWeaponFireContinousAnim;                		// 0x0C28 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmFireContinousAnim;                   		// 0x0C34 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponFireSingleAnim;             		// 0x0C40 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmFireSingleAnim;                		// 0x0C4C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponFireContinousAnim;          		// 0x0C58 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmFireContinousAnim;             		// 0x0C64 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FColor                                      MiddlePointColor;                                 		// 0x0C70 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLengthInaccuracyIncrementSA;             		// 0x0C74 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeInaccuracyIncrementSA;               		// 0x0C78 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLengthInaccuracyDecrementSA;             		// 0x0C7C (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeInaccuracyDecrementSA;               		// 0x0C80 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSA;                            		// 0x0C84 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSA;                      		// 0x0C88 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierSA;                          		// 0x0C8C (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierSA;                    		// 0x0C90 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeCrouchingSA;                   		// 0x0C94 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthCrouchingSA;             		// 0x0C98 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierCrouchingSA;                 		// 0x0C9C (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierCrouchingSA;           		// 0x0CA0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSlowMovingSA;                  		// 0x0CA4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSlowMovingSA;            		// 0x0CA8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierSlowMovingSA;                		// 0x0CAC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierSlowMovingSA;          		// 0x0CB0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeFastMovingSA;                  		// 0x0CB4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthFastMovingSA;            		// 0x0CB8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierFastMovingSA;                		// 0x0CBC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierFastMovingSA;          		// 0x0CC0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeJumpingSA;                     		// 0x0CC4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthJumpingSA;               		// 0x0CC8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierJumpingSA;                   		// 0x0CCC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierJumpingSA;             		// 0x0CD0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeJumpingWithPointSA;            		// 0x0CD4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthJumpingWithPointSA;      		// 0x0CD8 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeFastMovingWithPointSA;         		// 0x0CDC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthFastMovingWithPointSA;   		// 0x0CE0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSlowMovingWithPointSA;         		// 0x0CE4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSlowMovingWithPointSA;   		// 0x0CE8 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeCrouchingWithPointSA;          		// 0x0CEC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthCrouchingWithPointSA;    		// 0x0CF0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeWithPointSA;                   		// 0x0CF4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthWithPointSA;             		// 0x0CF8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169153 ];

		return pClassPointer;
	};

	void DrawZoomedOverlay ( class AHUD* H );
	void DrawWeaponCrosshairEx ( class AHUD* HUD );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	void ReplayIdleAnim ( );
	void ToggleFireReference ( unsigned long bTurnSecondaryAimFireRate );
	void PlayWeaponPutDown ( );
	void eventNotifySetCrossHair ( class UTexture2D* CrossHairHUD );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_SA58::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SA58HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SA58HeadShot : public UTGDmgType_SA58
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169156 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_SA58HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SCAR
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SCAR : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169160 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_SCAR::pClassPointer = NULL;

// Class TGWeapon.TGWeap_SCAR
// 0x0000 (0x0B18 - 0x0B18)
class ATGWeap_SCAR : public ATGRealGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169168 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_SCAR::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SCAR_PHL
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SCAR_PHL : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169171 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_SCAR_PHL::pClassPointer = NULL;

// Class TGWeapon.TGWeap_SCAR_PHL
// 0x0000 (0x0B18 - 0x0B18)
class ATGWeap_SCAR_PHL : public ATGRealGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169179 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_SCAR_PHL::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SCAR_PHLHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SCAR_PHLHeadShot : public UTGDmgType_SCAR_PHL
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169182 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_SCAR_PHLHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SCAR_RAZER
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SCAR_RAZER : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169186 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_SCAR_RAZER::pClassPointer = NULL;

// Class TGWeapon.TGWeap_SCAR_RAZER
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_SCAR_RAZER : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169194 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_SCAR_RAZER::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SCAR_RAZERHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SCAR_RAZERHeadShot : public UTGDmgType_SCAR_RAZER
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169197 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_SCAR_RAZERHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SCARDJ
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SCARDJ : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169201 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_SCARDJ::pClassPointer = NULL;

// Class TGWeapon.TGWeap_SCARDJ
// 0x0000 (0x0BD8 - 0x0BD8)
class ATGWeap_SCARDJ : public ATGRealChainSawGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169209 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
	void DisplaySpecial ( class UCanvas* LocalCavas );
};

UClass* ATGWeap_SCARDJ::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SCARDJ2
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SCARDJ2 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169212 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_SCARDJ2::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SCARDJ2HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SCARDJ2HeadShot : public UTGDmgType_SCARDJ2
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169222 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_SCARDJ2HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SCARDJHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SCARDJHeadShot : public UTGDmgType_SCARDJ
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169226 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_SCARDJHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SCARGAI
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SCARGAI : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169230 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_SCARGAI::pClassPointer = NULL;

// Class TGWeapon.TGWeap_SCARGAI
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_SCARGAI : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169238 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_SCARGAI::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SCARGAIHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SCARGAIHeadShot : public UTGDmgType_SCARGAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169241 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_SCARGAIHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SCARHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SCARHeadShot : public UTGDmgType_SCAR
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169245 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_SCARHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SCARSnake
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SCARSnake : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169249 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_SCARSnake::pClassPointer = NULL;

// Class TGWeapon.TGWeap_SCARSnake
// 0x0000 (0x0B18 - 0x0B18)
class ATGWeap_SCARSnake : public ATGRealGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169257 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_SCARSnake::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SCARSnakeHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SCARSnakeHeadShot : public UTGDmgType_SCARSnake
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169260 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_SCARSnakeHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SG551
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SG551 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169264 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_SG551::pClassPointer = NULL;

// Class TGWeapon.TGWeap_SG551
// 0x0000 (0x0BD8 - 0x0BD8)
class ATGWeap_SG551 : public ATGRealSecondaryAimGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169272 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_SG551::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SG551GAI
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SG551GAI : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169275 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_SG551GAI::pClassPointer = NULL;

// Class TGWeapon.TGWeap_SG551GAI
// 0x0000 (0x0BD8 - 0x0BD8)
class ATGWeap_SG551GAI : public ATGRealSecondaryAimGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169283 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_SG551GAI::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SG551GAIHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SG551GAIHeadShot : public UTGDmgType_SG551GAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169286 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_SG551GAIHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SG551HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SG551HeadShot : public UTGDmgType_SG551
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169290 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_SG551HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_ShotGun
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_ShotGun : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169294 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_ShotGun::pClassPointer = NULL;

// Class TGWeapon.TGWeap_ShotGun
// 0x0000 (0x0B50 - 0x0B50)
class ATGWeap_ShotGun : public ATGRealShotGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169302 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_ShotGun::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_ShotgunFour
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_ShotgunFour : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169305 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_ShotgunFour::pClassPointer = NULL;

// Class TGWeapon.TGWeap_ShotgunFour
// 0x0000 (0x0B50 - 0x0B50)
class ATGWeap_ShotgunFour : public ATGRealShotGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169313 ];

		return pClassPointer;
	};

	void ServerWeaponClipChanged ( );
	void TimeWeaponClipChanging ( );
};

UClass* ATGWeap_ShotgunFour::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_ShotgunFourHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_ShotgunFourHeadShot : public UTGDmgType_ShotgunFour
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169316 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_ShotgunFourHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_ShotGunHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_ShotGunHeadShot : public UTGDmgType_ShotGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169320 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_ShotGunHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_sigACP
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_sigACP : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169324 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_sigACP::pClassPointer = NULL;

// Class TGWeapon.TGWeap_sigACP
// 0x003C (0x0B54 - 0x0B18)
class ATGWeap_sigACP : public ATGRealGun
{
public:
	struct FName                                       MuzzleFlashSocket02;                              		// 0x0B18 (0x0008) [0x0000000000000000]              
	struct FName                                       ShellDropSocket02;                                		// 0x0B20 (0x0008) [0x0000000000000000]              
	unsigned long                                      bUsedChangeWeapon : 1;                            		// 0x0B28 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FName >                             WeaponFireSingleAnim02;                           		// 0x0B2C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             ArmFireSingleAnim02;                              		// 0x0B38 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UParticleSystem*                             ShellDropPSCTemplate02;                           		// 0x0B44 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             MuzzleFlashPSCTemplate02;                         		// 0x0B48 (0x0004) [0x0000000000000000]              
	class UUTParticleSystemComponent*                  MuzzleFlashPSC02;                                 		// 0x0B4C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              EquipRecordTime;                                  		// 0x0B50 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169332 ];

		return pClassPointer;
	};

	void eventCauseMuzzleFlashLight ( );
	void CauseShellDrop ( );
	void AttachMuzzleFlash ( );
	void eventMuzzleFlashTimer02 ( );
	void eventCauseMuzzleFlash ( );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_sigACP::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_sigACPHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_sigACPHeadShot : public UTGDmgType_sigACP
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169335 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_sigACPHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SnakeSword
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SnakeSword : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169339 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_SnakeSword::pClassPointer = NULL;

// Class TGWeapon.TGWeap_SnakeSword
// 0x0000 (0x0820 - 0x0820)
class ATGWeap_SnakeSword : public ATGRealT2MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169347 ];

		return pClassPointer;
	};

	void PlayFirstPersonAnim ( );
};

UClass* ATGWeap_SnakeSword::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SnakeSwordHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SnakeSwordHeadShot : public UTGDmgType_SnakeSword
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169350 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_SnakeSwordHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SnowBall
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_SnowBall : public UTGDmgType_ExplodeGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169354 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_SnowBall::pClassPointer = NULL;

// Class TGWeapon.TGWeap_SnowBall
// 0x0000 (0x07C0 - 0x07C0)
class ATGWeap_SnowBall : public ATGWeap_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169356 ];

		return pClassPointer;
	};

	class AProjectile* ProjectileFire ( );
};

UClass* ATGWeap_SnowBall::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SPAS12
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SPAS12 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169359 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_SPAS12::pClassPointer = NULL;

// Class TGWeapon.TGWeap_SPAS12
// 0x0000 (0x0B50 - 0x0B50)
class ATGWeap_SPAS12 : public ATGRealShotGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169367 ];

		return pClassPointer;
	};

	struct FImpactInfo CalcWeaponFireEX ( struct FVector StartTrace, struct FVector EndTrace, TArray< struct FImpactInfo >* ImpactList, TArray< struct FClientAttackPawnInfo >* AttackPInfoList );
};

UClass* ATGWeap_SPAS12::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SPAS12_dust
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SPAS12_dust : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169370 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_SPAS12_dust::pClassPointer = NULL;

// Class TGWeapon.TGWeap_SPAS12_dust
// 0x0000 (0x0B50 - 0x0B50)
class ATGWeap_SPAS12_dust : public ATGRealShotGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169378 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_SPAS12_dust::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SPAS12_dustHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SPAS12_dustHeadShot : public UTGDmgType_SPAS12_dust
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169381 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_SPAS12_dustHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SPAS12HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SPAS12HeadShot : public UTGDmgType_SPAS12
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169385 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_SPAS12HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SuckGrenade
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_SuckGrenade : public UTGDmgType_ExplodeGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169389 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_SuckGrenade::pClassPointer = NULL;

// Class TGWeapon.TGWeap_SuckGrenade
// 0x0000 (0x07C0 - 0x07C0)
class ATGWeap_SuckGrenade : public ATGWeap_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169391 ];

		return pClassPointer;
	};

	class AProjectile* ProjectileFire ( );
};

UClass* ATGWeap_SuckGrenade::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SVD
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SVD : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169394 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_SVD::pClassPointer = NULL;

// Class TGWeapon.TGWeap_SVD
// 0x000C (0x0B74 - 0x0B68)
class ATGWeap_SVD : public ATGRealSniper
{
public:
	float                                              FireIntervalAccumulateTime;                       		// 0x0B68 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  BulletFrame;                                      		// 0x0B6C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  BulletProgress;                                   		// 0x0B70 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169402 ];

		return pClassPointer;
	};

	void InstantFire ( );
	void EndFire ( unsigned char FireModeNum );
	void ServerGotoStateWeaponClipChanging ( );
	void eventTick ( float DeltaTime );
	void DisplaySpecial ( class UCanvas* LocalCavas );
	void FireAmmunition ( );
};

UClass* ATGWeap_SVD::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SVDGAI
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SVDGAI : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169405 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_SVDGAI::pClassPointer = NULL;

// Class TGWeapon.TGWeap_SVDGAI
// 0x000C (0x0B74 - 0x0B68)
class ATGWeap_SVDGAI : public ATGRealSniper
{
public:
	float                                              FireIntervalAccumulateTime;                       		// 0x0B68 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  BulletFrame;                                      		// 0x0B6C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  BulletProgress;                                   		// 0x0B70 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169413 ];

		return pClassPointer;
	};

	void InstantFire ( );
	void EndFire ( unsigned char FireModeNum );
	void ServerGotoStateWeaponClipChanging ( );
	void eventTick ( float DeltaTime );
	void DisplaySpecial ( class UCanvas* LocalCavas );
	void FireAmmunition ( );
};

UClass* ATGWeap_SVDGAI::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SVDGAIHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SVDGAIHeadShot : public UTGDmgType_SVDGAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169416 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_SVDGAIHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SVDHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SVDHeadShot : public UTGDmgType_SVD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169420 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_SVDHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SWM500
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SWM500 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169424 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_SWM500::pClassPointer = NULL;

// Class TGWeapon.TGWeap_SWM500
// 0x0000 (0x0B24 - 0x0B24)
class ATGWeap_SWM500 : public ATGRealPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169432 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_SWM500::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_SWM500HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_SWM500HeadShot : public UTGDmgType_SWM500
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169435 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_SWM500HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_T2MK5
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_T2MK5 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169439 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_T2MK5::pClassPointer = NULL;

// Class TGWeapon.TGWeap_T2MK5
// 0x0124 (0x0CFC - 0x0BD8)
class ATGWeap_T2MK5 : public ATGRealSecondaryAimGun
{
public:
	class UTexture2D*                                  HudMaterial;                                      		// 0x0BD8 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  HudMaterialHit;                                   		// 0x0BDC (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             NormalModeWeaponIdleAnims;                        		// 0x0BE0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmIdleAnims;                           		// 0x0BEC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponIdleAnims;                  		// 0x0BF8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmIdleAnims;                     		// 0x0C04 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeWeaponFireSingleAnim;                   		// 0x0C10 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmFireSingleAnim;                      		// 0x0C1C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeWeaponFireContinousAnim;                		// 0x0C28 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmFireContinousAnim;                   		// 0x0C34 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponFireSingleAnim;             		// 0x0C40 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmFireSingleAnim;                		// 0x0C4C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponFireContinousAnim;          		// 0x0C58 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmFireContinousAnim;             		// 0x0C64 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FColor                                      MiddlePointColor;                                 		// 0x0C70 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLengthInaccuracyIncrementSA;             		// 0x0C74 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeInaccuracyIncrementSA;               		// 0x0C78 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLengthInaccuracyDecrementSA;             		// 0x0C7C (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeInaccuracyDecrementSA;               		// 0x0C80 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSA;                            		// 0x0C84 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSA;                      		// 0x0C88 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierSA;                          		// 0x0C8C (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierSA;                    		// 0x0C90 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeCrouchingSA;                   		// 0x0C94 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthCrouchingSA;             		// 0x0C98 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierCrouchingSA;                 		// 0x0C9C (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierCrouchingSA;           		// 0x0CA0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSlowMovingSA;                  		// 0x0CA4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSlowMovingSA;            		// 0x0CA8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierSlowMovingSA;                		// 0x0CAC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierSlowMovingSA;          		// 0x0CB0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeFastMovingSA;                  		// 0x0CB4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthFastMovingSA;            		// 0x0CB8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierFastMovingSA;                		// 0x0CBC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierFastMovingSA;          		// 0x0CC0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeJumpingSA;                     		// 0x0CC4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthJumpingSA;               		// 0x0CC8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierJumpingSA;                   		// 0x0CCC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierJumpingSA;             		// 0x0CD0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeJumpingWithPointSA;            		// 0x0CD4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthJumpingWithPointSA;      		// 0x0CD8 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeFastMovingWithPointSA;         		// 0x0CDC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthFastMovingWithPointSA;   		// 0x0CE0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSlowMovingWithPointSA;         		// 0x0CE4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSlowMovingWithPointSA;   		// 0x0CE8 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeCrouchingWithPointSA;          		// 0x0CEC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthCrouchingWithPointSA;    		// 0x0CF0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeWithPointSA;                   		// 0x0CF4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthWithPointSA;             		// 0x0CF8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169447 ];

		return pClassPointer;
	};

	void DrawZoomedOverlay ( class AHUD* H );
	void DrawWeaponCrosshairEx ( class AHUD* HUD );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	void ReplayIdleAnim ( );
	void ToggleFireReference ( unsigned long bTurnSecondaryAimFireRate );
	void eventNotifySetCrossHair ( class UTexture2D* CrossHairHUD );
	void eventNotifySetCrossHairHit ( class UTexture2D* CrossHairHitHUD );
	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_T2MK5::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_T2MK5HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_T2MK5HeadShot : public UTGDmgType_T2MK5
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169450 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_T2MK5HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_TAR21
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_TAR21 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169454 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_TAR21::pClassPointer = NULL;

// Class TGWeapon.TGWeap_TAR21
// 0x0004 (0x0BDC - 0x0BD8)
class ATGWeap_TAR21 : public ATGRealSecondaryAimGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0BD8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169462 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_TAR21::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_TAR21HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_TAR21HeadShot : public UTGDmgType_TAR21
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169465 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_TAR21HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_TMP
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_TMP : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169469 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_TMP::pClassPointer = NULL;

// Class TGWeapon.TGWeap_TMP
// 0x0000 (0x0B18 - 0x0B18)
class ATGWeap_TMP : public ATGRealGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169477 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_TMP::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_TMPHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_TMPHeadShot : public UTGDmgType_TMP
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169480 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_TMPHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_TPG1
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_TPG1 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169484 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_TPG1::pClassPointer = NULL;

// Class TGWeapon.TGWeap_TPG1
// 0x0000 (0x0B84 - 0x0B84)
class ATGWeap_TPG1 : public ATGRealAdjustableSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169492 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_TPG1::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_TPG1HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_TPG1HeadShot : public UTGDmgType_TPG1
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169495 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_TPG1HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_ULTIMAX100
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_ULTIMAX100 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169499 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_ULTIMAX100::pClassPointer = NULL;

// Class TGWeapon.TGWeap_ULTIMAX100
// 0x0004 (0x0B1C - 0x0B18)
class ATGWeap_ULTIMAX100 : public ATGRealGun
{
public:
	float                                              EquipRecordTime;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169507 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_ULTIMAX100::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_ULTIMAX100HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_ULTIMAX100HeadShot : public UTGDmgType_ULTIMAX100
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169510 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_ULTIMAX100HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_UMP
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_UMP : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169514 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_UMP::pClassPointer = NULL;

// Class TGWeapon.TGWeap_UMP
// 0x0000 (0x0B18 - 0x0B18)
class ATGWeap_UMP : public ATGRealGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169522 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_UMP::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_UMP45dust
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_UMP45dust : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169525 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_UMP45dust::pClassPointer = NULL;

// Class TGWeapon.TGWeap_UMP45dust
// 0x0000 (0x0B18 - 0x0B18)
class ATGWeap_UMP45dust : public ATGRealGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169533 ];

		return pClassPointer;
	};

	void PlayWeaponPutDown ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_UMP45dust::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_UMP45dustHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_UMP45dustHeadShot : public UTGDmgType_UMP45dust
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169536 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_UMP45dustHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_UMPHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_UMPHeadShot : public UTGDmgType_UMP
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169540 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_UMPHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_USP
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_USP : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169544 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_USP::pClassPointer = NULL;

// Class TGWeapon.TGWeap_USP
// 0x0000 (0x0B24 - 0x0B24)
class ATGWeap_USP : public ATGRealPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169552 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_USP::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_USPHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_USPHeadShot : public UTGDmgType_USP
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169555 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_USPHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_UZI
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_UZI : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169559 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_UZI::pClassPointer = NULL;

// Class TGWeapon.TGWeap_UZI
// 0x003C (0x0B54 - 0x0B18)
class ATGWeap_UZI : public ATGRealGun
{
public:
	struct FName                                       MuzzleFlashSocket02;                              		// 0x0B18 (0x0008) [0x0000000000000000]              
	struct FName                                       ShellDropSocket02;                                		// 0x0B20 (0x0008) [0x0000000000000000]              
	unsigned long                                      bUsedChangeWeapon : 1;                            		// 0x0B28 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FName >                             WeaponFireSingleAnim02;                           		// 0x0B2C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             ArmFireSingleAnim02;                              		// 0x0B38 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UParticleSystem*                             ShellDropPSCTemplate02;                           		// 0x0B44 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             MuzzleFlashPSCTemplate02;                         		// 0x0B48 (0x0004) [0x0000000000000000]              
	class UUTParticleSystemComponent*                  MuzzleFlashPSC02;                                 		// 0x0B4C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              EquipRecordTime;                                  		// 0x0B50 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169567 ];

		return pClassPointer;
	};

	void eventCauseMuzzleFlashLight ( );
	void CauseShellDrop ( );
	void AttachMuzzleFlash ( );
	void eventMuzzleFlashTimer02 ( );
	void eventCauseMuzzleFlash ( );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_UZI::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_UZI77
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_UZI77 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169570 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_UZI77::pClassPointer = NULL;

// Class TGWeapon.TGWeap_UZI77
// 0x003C (0x0B54 - 0x0B18)
class ATGWeap_UZI77 : public ATGRealGun
{
public:
	struct FName                                       MuzzleFlashSocket02;                              		// 0x0B18 (0x0008) [0x0000000000000000]              
	struct FName                                       ShellDropSocket02;                                		// 0x0B20 (0x0008) [0x0000000000000000]              
	unsigned long                                      bUsedChangeWeapon : 1;                            		// 0x0B28 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FName >                             WeaponFireSingleAnim02;                           		// 0x0B2C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             ArmFireSingleAnim02;                              		// 0x0B38 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UParticleSystem*                             ShellDropPSCTemplate02;                           		// 0x0B44 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             MuzzleFlashPSCTemplate02;                         		// 0x0B48 (0x0004) [0x0000000000000000]              
	class UUTParticleSystemComponent*                  MuzzleFlashPSC02;                                 		// 0x0B4C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              EquipRecordTime;                                  		// 0x0B50 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169578 ];

		return pClassPointer;
	};

	void eventCauseMuzzleFlashLight ( );
	void CauseShellDrop ( );
	void AttachMuzzleFlash ( );
	void eventMuzzleFlashTimer02 ( );
	void eventCauseMuzzleFlash ( );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_UZI77::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_UZI77HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_UZI77HeadShot : public UTGDmgType_UZI77
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169581 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_UZI77HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_UZIacu
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_UZIacu : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169585 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_UZIacu::pClassPointer = NULL;

// Class TGWeapon.TGWeap_UZIacu
// 0x003C (0x0B54 - 0x0B18)
class ATGWeap_UZIacu : public ATGRealGun
{
public:
	struct FName                                       MuzzleFlashSocket02;                              		// 0x0B18 (0x0008) [0x0000000000000000]              
	struct FName                                       ShellDropSocket02;                                		// 0x0B20 (0x0008) [0x0000000000000000]              
	unsigned long                                      bUsedChangeWeapon : 1;                            		// 0x0B28 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FName >                             WeaponFireSingleAnim02;                           		// 0x0B2C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             ArmFireSingleAnim02;                              		// 0x0B38 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UParticleSystem*                             ShellDropPSCTemplate02;                           		// 0x0B44 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             MuzzleFlashPSCTemplate02;                         		// 0x0B48 (0x0004) [0x0000000000000000]              
	class UUTParticleSystemComponent*                  MuzzleFlashPSC02;                                 		// 0x0B4C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              EquipRecordTime;                                  		// 0x0B50 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169593 ];

		return pClassPointer;
	};

	void eventCauseMuzzleFlashLight ( );
	void CauseShellDrop ( );
	void AttachMuzzleFlash ( );
	void eventMuzzleFlashTimer02 ( );
	void eventCauseMuzzleFlash ( );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	void PlayWeaponPutDown ( );
	void ViewTargetReady ( );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_UZIacu::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_UZIacuHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_UZIacuHeadShot : public UTGDmgType_UZIacu
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169596 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_UZIacuHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_UZIHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_UZIHeadShot : public UTGDmgType_UZI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169600 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_UZIHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_WA2000
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_WA2000 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169604 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_WA2000::pClassPointer = NULL;

// Class TGWeapon.TGWeap_WA2000
// 0x0000 (0x0B68 - 0x0B68)
class ATGWeap_WA2000 : public ATGRealSniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169612 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_WA2000::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_WA2000HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_WA2000HeadShot : public UTGDmgType_WA2000
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169615 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_WA2000HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_WJQ
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_WJQ : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169619 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_WJQ::pClassPointer = NULL;

// Class TGWeapon.TGWeap_WJQ
// 0x0000 (0x0804 - 0x0804)
class ATGWeap_WJQ : public ATGRealMeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169627 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_WJQ::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_WJQHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_WJQHeadShot : public UTGDmgType_WJQ
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169630 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_WJQHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_WJQworker
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_WJQworker : public UTGDmgType_MeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169634 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_WJQworker::pClassPointer = NULL;

// Class TGWeapon.TGWeap_WJQworker
// 0x0000 (0x0804 - 0x0804)
class ATGWeap_WJQworker : public ATGRealMeleeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169642 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_WJQworker::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_WJQworkerHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_WJQworkerHeadShot : public UTGDmgType_WJQworker
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169645 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_WJQworkerHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_XM25
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_XM25 : public UTGDmgType_ExplodeGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169649 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_XM25::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_XM25HeadShot
// 0x0000 (0x0638 - 0x0638)
class UTGDmgType_XM25HeadShot : public UTGDmgType_XM25
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169653 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_XM25HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_XM8
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_XM8 : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169657 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_XM8::pClassPointer = NULL;

// Class TGWeapon.TGWeap_XM8
// 0x0124 (0x0CFC - 0x0BD8)
class ATGWeap_XM8 : public ATGRealSecondaryAimGun
{
public:
	class UTexture2D*                                  HudMaterial;                                      		// 0x0BD8 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  HudMaterialHit;                                   		// 0x0BDC (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             NormalModeWeaponIdleAnims;                        		// 0x0BE0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmIdleAnims;                           		// 0x0BEC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponIdleAnims;                  		// 0x0BF8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmIdleAnims;                     		// 0x0C04 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeWeaponFireSingleAnim;                   		// 0x0C10 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmFireSingleAnim;                      		// 0x0C1C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeWeaponFireContinousAnim;                		// 0x0C28 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmFireContinousAnim;                   		// 0x0C34 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponFireSingleAnim;             		// 0x0C40 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmFireSingleAnim;                		// 0x0C4C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponFireContinousAnim;          		// 0x0C58 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmFireContinousAnim;             		// 0x0C64 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FColor                                      MiddlePointColor;                                 		// 0x0C70 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLengthInaccuracyIncrementSA;             		// 0x0C74 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeInaccuracyIncrementSA;               		// 0x0C78 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLengthInaccuracyDecrementSA;             		// 0x0C7C (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeInaccuracyDecrementSA;               		// 0x0C80 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSA;                            		// 0x0C84 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSA;                      		// 0x0C88 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierSA;                          		// 0x0C8C (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierSA;                    		// 0x0C90 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeCrouchingSA;                   		// 0x0C94 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthCrouchingSA;             		// 0x0C98 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierCrouchingSA;                 		// 0x0C9C (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierCrouchingSA;           		// 0x0CA0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSlowMovingSA;                  		// 0x0CA4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSlowMovingSA;            		// 0x0CA8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierSlowMovingSA;                		// 0x0CAC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierSlowMovingSA;          		// 0x0CB0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeFastMovingSA;                  		// 0x0CB4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthFastMovingSA;            		// 0x0CB8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierFastMovingSA;                		// 0x0CBC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierFastMovingSA;          		// 0x0CC0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeJumpingSA;                     		// 0x0CC4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthJumpingSA;               		// 0x0CC8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierJumpingSA;                   		// 0x0CCC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierJumpingSA;             		// 0x0CD0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeJumpingWithPointSA;            		// 0x0CD4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthJumpingWithPointSA;      		// 0x0CD8 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeFastMovingWithPointSA;         		// 0x0CDC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthFastMovingWithPointSA;   		// 0x0CE0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSlowMovingWithPointSA;         		// 0x0CE4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSlowMovingWithPointSA;   		// 0x0CE8 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeCrouchingWithPointSA;          		// 0x0CEC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthCrouchingWithPointSA;    		// 0x0CF0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeWithPointSA;                   		// 0x0CF4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthWithPointSA;             		// 0x0CF8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169665 ];

		return pClassPointer;
	};

	void DrawZoomedOverlay ( class AHUD* H );
	void DrawWeaponCrosshairEx ( class AHUD* HUD );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	void ReplayIdleAnim ( );
	void ToggleFireReference ( unsigned long bTurnSecondaryAimFireRate );
	void PlayWeaponPutDown ( );
	void eventNotifySetCrossHair ( class UTexture2D* CrossHairHUD );
	void eventNotifySetCrossHairHit ( class UTexture2D* CrossHairHitHUD );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_XM8::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_XM8GAI
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_XM8GAI : public UTGDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169668 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UTGDmgType_XM8GAI::pClassPointer = NULL;

// Class TGWeapon.TGWeap_XM8GAI
// 0x0124 (0x0CFC - 0x0BD8)
class ATGWeap_XM8GAI : public ATGRealSecondaryAimGun
{
public:
	class UTexture2D*                                  HudMaterial;                                      		// 0x0BD8 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  HudMaterialHit;                                   		// 0x0BDC (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             NormalModeWeaponIdleAnims;                        		// 0x0BE0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmIdleAnims;                           		// 0x0BEC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponIdleAnims;                  		// 0x0BF8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmIdleAnims;                     		// 0x0C04 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeWeaponFireSingleAnim;                   		// 0x0C10 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmFireSingleAnim;                      		// 0x0C1C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeWeaponFireContinousAnim;                		// 0x0C28 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NormalModeArmFireContinousAnim;                   		// 0x0C34 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponFireSingleAnim;             		// 0x0C40 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmFireSingleAnim;                		// 0x0C4C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeWeaponFireContinousAnim;          		// 0x0C58 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             SecondaryAimModeArmFireContinousAnim;             		// 0x0C64 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FColor                                      MiddlePointColor;                                 		// 0x0C70 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLengthInaccuracyIncrementSA;             		// 0x0C74 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeInaccuracyIncrementSA;               		// 0x0C78 (0x0004) [0x0000000000000000]              
	float                                              CrossHairLengthInaccuracyDecrementSA;             		// 0x0C7C (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeInaccuracyDecrementSA;               		// 0x0C80 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSA;                            		// 0x0C84 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSA;                      		// 0x0C88 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierSA;                          		// 0x0C8C (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierSA;                    		// 0x0C90 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeCrouchingSA;                   		// 0x0C94 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthCrouchingSA;             		// 0x0C98 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierCrouchingSA;                 		// 0x0C9C (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierCrouchingSA;           		// 0x0CA0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSlowMovingSA;                  		// 0x0CA4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSlowMovingSA;            		// 0x0CA8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierSlowMovingSA;                		// 0x0CAC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierSlowMovingSA;          		// 0x0CB0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeFastMovingSA;                  		// 0x0CB4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthFastMovingSA;            		// 0x0CB8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierFastMovingSA;                		// 0x0CBC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierFastMovingSA;          		// 0x0CC0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeJumpingSA;                     		// 0x0CC4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthJumpingSA;               		// 0x0CC8 (0x0004) [0x0000000000000000]              
	float                                              CrossHairSizeModifierJumpingSA;                   		// 0x0CCC (0x0004) [0x0000000000000000]              
	float                                              CrossHairLineLengthModifierJumpingSA;             		// 0x0CD0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeJumpingWithPointSA;            		// 0x0CD4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthJumpingWithPointSA;      		// 0x0CD8 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeFastMovingWithPointSA;         		// 0x0CDC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthFastMovingWithPointSA;   		// 0x0CE0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeSlowMovingWithPointSA;         		// 0x0CE4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthSlowMovingWithPointSA;   		// 0x0CE8 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeCrouchingWithPointSA;          		// 0x0CEC (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthCrouchingWithPointSA;    		// 0x0CF0 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairSizeWithPointSA;                   		// 0x0CF4 (0x0004) [0x0000000000000000]              
	float                                              OriginCrossHairLineLengthWithPointSA;             		// 0x0CF8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169676 ];

		return pClassPointer;
	};

	void DrawZoomedOverlay ( class AHUD* H );
	void DrawWeaponCrosshairEx ( class AHUD* HUD );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	void ReplayIdleAnim ( );
	void ToggleFireReference ( unsigned long bTurnSecondaryAimFireRate );
	void PlayWeaponPutDown ( );
	void eventNotifySetCrossHair ( class UTexture2D* CrossHairHUD );
	void eventNotifySetCrossHairHit ( class UTexture2D* CrossHairHitHUD );
	void PlayWeaponEquip ( );
};

UClass* ATGWeap_XM8GAI::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_XM8GAIHeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_XM8GAIHeadShot : public UTGDmgType_XM8GAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169679 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_XM8GAIHeadShot::pClassPointer = NULL;

// Class TGWeapon.TGDmgType_XM8HeadShot
// 0x0000 (0x0610 - 0x0610)
class UTGDmgType_XM8HeadShot : public UTGDmgType_XM8
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169683 ];

		return pClassPointer;
	};

};

UClass* UTGDmgType_XM8HeadShot::pClassPointer = NULL;

// Class TGWeapon.TGNewRealGun
// 0x0004 (0x0B1C - 0x0B18)
class ATGNewRealGun : public ATGRealGun
{
public:
	class ATGRealGun*                                  RealWeapon;                                       		// 0x0B18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169687 ];

		return pClassPointer;
	};

	void PlayWeaponEquip ( );
	void SetExtraPower ( int InPower );
};

UClass* ATGNewRealGun::pClassPointer = NULL;

// Class TGWeapon.TGNewWeaponLogicHelper
// 0x0000 (0x003C - 0x003C)
class UTGNewWeaponLogicHelper : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169696 ];

		return pClassPointer;
	};

	void CopyTGRealGunProperty ( class ATGRealGun* InDest, class ATGRealGun* InSrc );
	void CopyTGRealWeaponProperty ( class ATGRealWeapon* InDest, class ATGRealWeapon* InSrc );
};

UClass* UTGNewWeaponLogicHelper::pClassPointer = NULL;

// Class TGWeapon.TGProj_Candy_Grenade
// 0x000C (0x02C4 - 0x02B8)
class ATGProj_Candy_Grenade : public AUTProj_Grenade
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169704 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity );
	void PostBeginPlay ( );
};

UClass* ATGProj_Candy_Grenade::pClassPointer = NULL;

// Class TGWeapon.TGProj_ChristGrenade
// 0x000C (0x02C4 - 0x02B8)
class ATGProj_ChristGrenade : public AUTProj_Grenade
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169761 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity );
	void PostBeginPlay ( );
};

UClass* ATGProj_ChristGrenade::pClassPointer = NULL;

// Class TGWeapon.TGProj_CompoundBow
// 0x0018 (0x033C - 0x0324)
class ATGProj_CompoundBow : public ATGProj_Arrow
{
public:
	float                                              BeginProjectileTime;                              		// 0x0324 (0x0004) [0x0000000000000000]              
	struct FVector                                     InitVelocity;                                     		// 0x0328 (0x000C) [0x0000000000000000]              
	class UParticleSystem*                             ProjTailTemplate;                                 		// 0x0334 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    ProjTailEffects;                                  		// 0x0338 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169818 ];

		return pClassPointer;
	};

	void DelayAttachTargetToWall ( );
	void CreateSpikeToTarget ( );
	void AttachArrowToTarget ( );
	void UpdateHitPawnDetails ( class APawn* Victim, unsigned char HitGroup, struct FName BoneName, struct FVector HitLocation, struct FRotator HitRotation );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void Destroyed ( );
	void ShutDown ( );
	void SpawnFlightEffects ( );
	void eventTick ( float DeltaTime );
	void Init ( struct FVector Direction );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGProj_CompoundBow::pClassPointer = NULL;

// Class TGWeapon.TGProj_SpikeArrow
// 0x0020 (0x02C0 - 0x02A0)
class ATGProj_SpikeArrow : public AUTProjectile
{
public:
	class UStaticMeshComponent*                        MyMesh;                                           		// 0x02A0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ARB_ConstraintActor*                         ShardVictimConstraint;                            		// 0x02A4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSpiked : 1;                                      		// 0x02A8 (0x0004) [0x0000000000000000] [0x00000001] 
	class AActor*                                      BaseActor;                                        		// 0x02AC (0x0004) [0x0000000000000000]              
	struct FVector                                     OldLocation;                                      		// 0x02B0 (0x000C) [0x0000000000000000]              
	float                                              SpikeVictimVelFactor;                             		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169857 ];

		return pClassPointer;
	};

	void AdjustPhysicsForHit ( );
	void ShutDown ( );
	void SpikeVictim ( class AUTPawn* Victim, struct FName VictimBone );
	void HitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void eventDestroyed ( );
};

UClass* ATGProj_SpikeArrow::pClassPointer = NULL;

// Class TGWeapon.TGProj_Cracker
// 0x0010 (0x02C8 - 0x02B8)
class ATGProj_Cracker : public AUTProj_Grenade
{
public:
	float                                              WallBounceRate;                                   		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GroundBounceRate;                                 		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExplodeTime;                                      		// 0x02C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFirstHit : 1;                                    		// 0x02C4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169861 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity );
	void PostBeginPlay ( );
};

UClass* ATGProj_Cracker::pClassPointer = NULL;

// Class TGWeapon.TGProj_CrossBow
// 0x0000 (0x0324 - 0x0324)
class ATGProj_CrossBow : public ATGProj_Arrow
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169919 ];

		return pClassPointer;
	};

};

UClass* ATGProj_CrossBow::pClassPointer = NULL;

// Class TGWeapon.TGProj_ExplosionArrow
// 0x0000 (0x0324 - 0x0324)
class ATGProj_ExplosionArrow : public ATGProj_Arrow
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169922 ];

		return pClassPointer;
	};

};

UClass* ATGProj_ExplosionArrow::pClassPointer = NULL;

// Class TGWeapon.TGProj_FastSmoke
// 0x000C (0x02C4 - 0x02B8)
class ATGProj_FastSmoke : public AUTProj_Grenade
{
public:
	float                                              WallBounceRate;                                   		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GroundBounceRate;                                 		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bBegin : 1;                                       		// 0x02C0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReleaseFastSmoke : 1;                            		// 0x02C0 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169925 ];

		return pClassPointer;
	};

	void RemoveFromList ( );
	void AddToList ( );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void ReleaseFastSmoke ( );
	void eventTick ( float DeltaTime );
	void PostBeginPlay ( );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGProj_FastSmoke::pClassPointer = NULL;

// Class TGWeapon.TGWeap_FastSmoke
// 0x0000 (0x07C0 - 0x07C0)
class ATGWeap_FastSmoke : public ATGWeap_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169941 ];

		return pClassPointer;
	};

	class AProjectile* ProjectileFire ( );
};

UClass* ATGWeap_FastSmoke::pClassPointer = NULL;

// Class TGWeapon.TGProj_FlashBang
// 0x0024 (0x02DC - 0x02B8)
class ATGProj_FlashBang : public AUTProj_Grenade
{
public:
	float                                              WallBounceRate;                                   		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GroundBounceRate;                                 		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExplodeTime;                                      		// 0x02C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RecordHitLocation;                                		// 0x02C4 (0x000C) [0x0000000000000000]              
	struct FVector                                     RecordHitNormal;                                  		// 0x02D0 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169970 ];

		return pClassPointer;
	};

	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void eventDelaySpawnExplosionEffect ( );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity );
	void PostBeginPlay ( );
};

UClass* ATGProj_FlashBang::pClassPointer = NULL;

// Class TGWeapon.TGWeap_FlashBang
// 0x0000 (0x07C0 - 0x07C0)
class ATGWeap_FlashBang : public ATGWeap_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 169986 ];

		return pClassPointer;
	};

	class AProjectile* ProjectileFire ( );
};

UClass* ATGWeap_FlashBang::pClassPointer = NULL;

// Class TGWeapon.TGProj_FoolGrenade
// 0x000C (0x02C4 - 0x02B8)
class ATGProj_FoolGrenade : public AUTProj_Grenade
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 172352 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity );
	void PostBeginPlay ( );
};

UClass* ATGProj_FoolGrenade::pClassPointer = NULL;

// Class TGWeapon.TGProj_HEgame
// 0x000C (0x02C4 - 0x02B8)
class ATGProj_HEgame : public AUTProj_Grenade
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 172409 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity );
	void PostBeginPlay ( );
};

UClass* ATGProj_HEgame::pClassPointer = NULL;

// Class TGWeapon.TGProj_HEGrenade
// 0x000C (0x02C4 - 0x02B8)
class ATGProj_HEGrenade : public AUTProj_Grenade
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 172466 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity );
	void PostBeginPlay ( );
};

UClass* ATGProj_HEGrenade::pClassPointer = NULL;

// Class TGWeapon.TGProj_M26Grenade
// 0x000C (0x02C4 - 0x02B8)
class ATGProj_M26Grenade : public AUTProj_Grenade
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 172523 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity );
	void PostBeginPlay ( );
};

UClass* ATGProj_M26Grenade::pClassPointer = NULL;

// Class TGWeapon.TGProj_MidAutumn
// 0x000C (0x02C4 - 0x02B8)
class ATGProj_MidAutumn : public AUTProj_Grenade
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 172580 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity );
	void PostBeginPlay ( );
};

UClass* ATGProj_MidAutumn::pClassPointer = NULL;

// Class TGWeapon.TGProj_Pumpkin
// 0x000C (0x02C4 - 0x02B8)
class ATGProj_Pumpkin : public AUTProj_Grenade
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 172637 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity );
	void PostBeginPlay ( );
};

UClass* ATGProj_Pumpkin::pClassPointer = NULL;

// Class TGWeapon.TGProj_RPKMPoison
// 0x0014 (0x02D8 - 0x02C4)
class ATGProj_RPKMPoison : public ATGProj_GrenadeGun
{
public:
	unsigned long                                      bHasExploded : 1;                                 		// 0x02C4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bServerExplode : 1;                               		// 0x02C4 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	float                                              PoisonRange;                                      		// 0x02C8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              PoisonLastTime;                                   		// 0x02CC (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              PoisonDamageInterval;                             		// 0x02D0 (0x0004) [0x0000000000000000]              
	float                                              PoisonDamagePerSecond;                            		// 0x02D4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 172694 ];

		return pClassPointer;
	};

	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void BeginPoisonDetaction ( );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGProj_RPKMPoison::pClassPointer = NULL;

// Class TGWeapon.TGProj_Smoke
// 0x000C (0x02C4 - 0x02B8)
class ATGProj_Smoke : public AUTProj_Grenade
{
public:
	float                                              WallBounceRate;                                   		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GroundBounceRate;                                 		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bBegin : 1;                                       		// 0x02C0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReleaseSmoke : 1;                                		// 0x02C0 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 172740 ];

		return pClassPointer;
	};

	void RemoveFromList ( );
	void AddToList ( );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void ReleaseSmoke ( );
	void eventTick ( float DeltaTime );
	void PostBeginPlay ( );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ATGProj_Smoke::pClassPointer = NULL;

// Class TGWeapon.TGWeap_Smoke
// 0x0000 (0x07C0 - 0x07C0)
class ATGWeap_Smoke : public ATGWeap_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 172756 ];

		return pClassPointer;
	};

	class AProjectile* ProjectileFire ( );
};

UClass* ATGWeap_Smoke::pClassPointer = NULL;

// Class TGWeapon.TGProj_SnowBall
// 0x000C (0x02C4 - 0x02B8)
class ATGProj_SnowBall : public AUTProj_Grenade
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 172785 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity );
	void PostBeginPlay ( );
};

UClass* ATGProj_SnowBall::pClassPointer = NULL;

// Class TGWeapon.TGProj_SuckGrenade
// 0x000C (0x02C4 - 0x02B8)
class ATGProj_SuckGrenade : public AUTProj_Grenade
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 172862 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity );
	void PostBeginPlay ( );
};

UClass* ATGProj_SuckGrenade::pClassPointer = NULL;

// Class TGWeapon.TGProj_XM25
// 0x000C (0x02C4 - 0x02B8)
class ATGProj_XM25 : public AUTProj_Grenade
{
public:
	float                                              ExplodeTime;                                      		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   FlyingSound;                                      		// 0x02BC (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             FlyingAC;                                         		// 0x02C0 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 172913 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	class UAudioComponent* PlayFlyingSound ( class USoundCue* Sound, class UAudioComponent* AC, float FadeInTime );
	void InitWithBaseVelocity ( struct FVector Direction, struct FVector BaseVelocity );
	void PostBeginPlay ( );
};

UClass* ATGProj_XM25::pClassPointer = NULL;

// Class TGWeapon.TGWeapFeedBack_ShowAmmo
// 0x0008 (0x01E0 - 0x01D8)
class ATGWeapFeedBack_ShowAmmo : public ATGWeapFeedBackComponent
{
public:
	class UMaterialInstanceConstant*                   WeaponAmmoDisplayMI;                              		// 0x01D8 (0x0004) [0x0000000000000000]              
	int                                                ShowAmmoMaterialOrder;                            		// 0x01DC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 172992 ];

		return pClassPointer;
	};

	bool UpdateAmmoCountDisplay ( );
	bool DeactivateComponent ( );
	bool ActivateComponent ( );
	void SetMaterialOrder ( int MatOrder );
};

UClass* ATGWeapFeedBack_ShowAmmo::pClassPointer = NULL;

// Class TGWeapon.TGWeapFeedBack_AddAmmo
// 0x0020 (0x01F8 - 0x01D8)
class ATGWeapFeedBack_AddAmmo : public ATGWeapFeedBackComponent
{
public:
	int                                                AddAmmoCount;                                     		// 0x01D8 (0x0004) [0x0000000000000000]              
	int                                                MaxAddedAmmoCount;                                		// 0x01DC (0x0004) [0x0000000000000000]              
	TArray< struct FWeaponAddAmmoProperty >            AddAmmoProperties;                                		// 0x01E0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< class UParticleSystem* >                   AddAmmoFeedbackPS;                                		// 0x01EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 173006 ];

		return pClassPointer;
	};

	bool ActivateComponent ( );
	void InitFeedBackComponent ( class ATGRealWeapon* InputWeapon );
};

UClass* ATGWeapFeedBack_AddAmmo::pClassPointer = NULL;

// Class TGWeapon.TGWeap_ExplosionBow
// 0x0000 (0x0BCC - 0x0BCC)
class ATGWeap_ExplosionBow : public ATGWeap_Bow
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 174298 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_ExplosionBow::pClassPointer = NULL;

// Class TGWeapon.TGWeap_M1014Crazy
// 0x0000 (0x0B50 - 0x0B50)
class ATGWeap_M1014Crazy : public ATGRealShotGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 175125 ];

		return pClassPointer;
	};

	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
};

UClass* ATGWeap_M1014Crazy::pClassPointer = NULL;

// Class TGWeapon.TGWeap_MiniGunCrazy
// 0x0000 (0x0B78 - 0x0B78)
class ATGWeap_MiniGunCrazy : public ATGWeap_MiniGunBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 176043 ];

		return pClassPointer;
	};

};

UClass* ATGWeap_MiniGunCrazy::pClassPointer = NULL;

// Class TGWeapon.TGWeap_XM25
// 0x0064 (0x0B7C - 0x0B18)
class ATGWeap_XM25 : public ATGRealGun
{
public:
	struct FName                                       ConstantThunderSocketName;                        		// 0x0B18 (0x0008) [0x0000000000000000]              
	struct FName                                       WeaponClipChangeStart;                            		// 0x0B20 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponClipChangeReady;                            		// 0x0B28 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ArmClipChangeStart;                               		// 0x0B30 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ArmClipChangeReady;                               		// 0x0B38 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   ActiveLoopSound;                                  		// 0x0B40 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UAudioComponent*                             AC_Active;                                        		// 0x0B44 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	unsigned long                                      ClipFireFlag : 1;                                 		// 0x0B48 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DamageRadius;                                     		// 0x0B4C (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x0B50 (0x0004) [0x0000000000000000]              
	float                                              ExplodeTime;                                      		// 0x0B54 (0x0004) [0x0000000000000000]              
	float                                              CustomGravityScaling;                             		// 0x0B58 (0x0004) [0x0000000000000000]              
	float                                              ThrowMaxSpeed;                                    		// 0x0B5C (0x0004) [0x0000000000000000]              
	struct FVector                                     ThrowVector;                                      		// 0x0B60 (0x000C) [0x0000000000000000]              
	float                                              GrenadeAccelerate;                                		// 0x0B6C (0x0004) [0x0000000000000000]              
	float                                              ThrowAngleOffSet;                                 		// 0x0B70 (0x0004) [0x0000000000000000]              
	float                                              InitSpeedScale;                                   		// 0x0B74 (0x0004) [0x0000000000000000]              
	float                                              ClipChangeReadyTime;                              		// 0x0B78 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 177452 ];

		return pClassPointer;
	};

	void ServerThrowGrenade ( float LocalClientTime );
	class AProjectile* ProjectileFire ( );
	struct FVector GetProVelocity ( struct FVector StartLoc );
	void GetAimVector ( struct FVector StartLoc, struct FVector* vForward, struct FVector* vRight, struct FVector* vUp );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
};

UClass* ATGWeap_XM25::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif