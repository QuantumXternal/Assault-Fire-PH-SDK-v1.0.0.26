/*
#############################################################################################
# Assault Fire (1.0.0.26) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TGWeapon_structs.h
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

// ScriptStruct TGWeapon.TGWeapFeedBack_AddAmmo.WeaponAddAmmoProperty
// 0x0014
struct FWeaponAddAmmoProperty
{
	struct FString                                     WeaponClassName;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                WeaponAddAmmoCount;                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                WeaponMaxAmmoCount;                               		// 0x0010 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif