/*
#############################################################################################
# Assault Fire (1.0.0.26) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TGameGfxUI_structs.h
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

// ScriptStruct TGameGfxUI.GfxMovie_TGBase.InputInfo
// 0x0014
struct FInputInfo
{
	unsigned char                                      InputType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                InputLen;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            CharSetArray;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_AddTeammate.InvitedPlayerInfo
// 0x0010
struct FInvitedPlayerInfo
{
	struct FString                                     PlayerUin;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ErrorCode;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.GfxMovie_AllRank.TGRankInfo
// 0x002C
struct FTGRankInfo
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Exp;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     Node;                                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Skill;                                            		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.GfxMovie_Avatar.CharacterListElement
// 0x0018
struct FCharacterListElement
{
	struct FUniquePropId                               RoleID;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                RoleItemId;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	class UTexture*                                    RoleIcon;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.GfxMovie_Avatar.ShopCharacterListElement
// 0x0010
struct FShopCharacterListElement
{
	int                                                RoleItemId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RoleCommodityID;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTexture*                                    RoleIcon;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHadBuy : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TGameGfxUI.TGUI_ItemList.AvatarCommonItemInfo
// 0x00C8
struct FAvatarCommonItemInfo
{
	int                                                IndexInList;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FUniquePropId                               ItemId;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	int                                                IconID;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                RepairType;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                ConsumeType;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                CurRepairPrice;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nRepairPrice;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nRepairPrice1;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nRepairNeedCost;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bGiftPack : 1;                                    		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPlayerPropInfo                             CurrentPropInfo;                                  		// 0x0034 (0x0068) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemContent;                                      		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sRepairNeedCost;                                  		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nAvaiableHours;                                   		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                StackNum;                                         		// 0x00C4 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.TGUI_ItemList.SingleSkillInfo
// 0x0024
struct FSingleSkillInfo
{
	struct FUniquePropId                               ItemId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned char                                      ItemGridNum;                                      		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned long                                      bEquiped : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasOwned : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bActiveSkill : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                RepairType;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                ConsumeType;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nRepairPrice;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.TGUI_EquipmentsContent.EquipmentContentElement
// 0x0018
struct FEquipmentContentElement
{
	struct FUniquePropId                               EquipmentID;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned char                                      ResBindType;                                      		// 0x0010 (0x0001) [0x0000000000000000]              
	int                                                LocationInEquipments;                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.TGUI_BagContent.BagContentElement
// 0x0044
struct FBagContentElement
{
	struct FUniquePropId                               WeaponID;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                LocationInBag;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                RepairType;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                ConsumeType;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                CurRepairPrice;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nRepairPrice;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nRepairPrice1;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nRepairNeedCost;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sRepairNeedCost;                                  		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_BagList.BagWeaponInfo
// 0x003C
struct FBagWeaponInfo
{
	struct FUniquePropId                               WeaponPropId;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                WeaponItemId;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                WeaponSubID;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                LocationInConfig;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nNeedCost;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned char                                      WeaponRepairType;                                 		// 0x0020 (0x0001) [0x0000000000000000]              
	unsigned char                                      WeaponSubType;                                    		// 0x0021 (0x0001) [0x0000000000000000]              
	unsigned char                                      WeaponExpertType;                                 		// 0x0022 (0x0001) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sNeedCost;                                        		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_ChanelList.MatchSubModeInfo
// 0x0040
struct FMatchSubModeInfo
{
	int                                                SubModeTypeId;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     SubModeName;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           MapList;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      MapIdList;                                        		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            MapStatus;                                        		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      MapPicIndex;                                      		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_ChanelList.MatchModeInfo
// 0x0028
struct FMatchModeInfo
{
	unsigned long                                      IsPve : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ModeTypeId;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ModeId;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     ModeName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ShowStatus;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	TArray< struct FMatchSubModeInfo >                 SubModeList;                                      		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_ChanelList.GuideModeInfo
// 0x0018
struct FGuideModeInfo
{
	struct FString                                     ModeName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ModeId;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                MapId;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                SubModeId;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.GfxMovie_ChanelList.GuideModeData
// 0x0018
struct FGuideModeData
{
	struct FString                                     ModeDescribe;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FGuideModeInfo >                    ModeTypeList;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_ChanelList.MatchModeGame
// 0x002C
struct FMatchModeGame
{
	unsigned long                                      HasInitialized : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     ModeType;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ModeDescribe;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsOpenMode : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FMatchModeInfo >                    ModeInfoList;                                     		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_Chat.SpeakerMessage
// 0x0034
struct FSpeakerMessage
{
	struct FString                                     From;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Content;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              RecvTime;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	TArray< int >                                      AchievIds;                                        		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           AchievNames;                                      		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_ExpiredList.ShowExpireCommodityInfo
// 0x0029
struct FShowExpireCommodityInfo
{
	struct FExpireCommodityInfo                        ExpireInfo;                                       		// 0x0000 (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      PriceSelected;                                    		// 0x0028 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.GfxMovie_GeneralPlayerList.InviteFriendTimerObject
// 0x0010
struct FInviteFriendTimerObject
{
	struct FString                                     FriendName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TimerCount;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.TGUI_InvitePlayerList.InvitePlayerData
// 0x0024
struct FInvitePlayerData
{
	struct FString                                     Uin;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NickName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Rank;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsFriend : 1;                                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsTeamMate : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsIdelPlayer : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                Priority;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.GfxMovie_LevelUp.LevelUpGiftContent
// 0x0010
struct FLevelUpGiftContent
{
	int                                                LevelLimit;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     GiftContent;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.TGUI_ShopItemList.ItemCommodityInfo
// 0x0018
struct FItemCommodityInfo
{
	int                                                CommodityIndex;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ItemCommodityID;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasCommodity : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanAddTime : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     ItemName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.TGUI_ShoppingCart.CartCommodityInfo
// 0x000C
struct FCartCommodityInfo
{
	int                                                CommodityIndex;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CartCommodityID;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PriceSelected;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.GfxMovie_MultiPlayerRoom.PVENZPropInfo
// 0x0020
struct FPVENZPropInfo
{
	int                                                CommodityID;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ItemId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHadProp : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bStackProp : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                RepairType;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	struct FUniquePropId                               ItemPropId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.GfxMovie_PlayerDetailInfo.AchiCardData
// 0x0018
struct FAchiCardData
{
	int                                                AchiID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AchiLevel;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CardID;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     CardPath;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_PlayerDetailInfo.PVEModeAndMapInfo
// 0x0010
struct FPVEModeAndMapInfo
{
	int                                                CurPVEModeId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      CurMapIdArray;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_PlayerDetailInfo.FriendImpression
// 0x0014
struct FFriendImpression
{
	int                                                ImpType;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ImpId;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     ImpNick;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_PlayerDetailInfo.PVEMapIds
// 0x000C
struct FPVEMapIds
{
	TArray< int >                                      MapCollection;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_PlayerDetailInfo.Impression
// 0x0010
struct FImpression
{
	struct FString                                     ImpNick;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ImpCount;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.GfxMovie_PVECryptWeaponBoxDisplay.PVECryptWeaponBoxItem
// 0x001C
struct FPVECryptWeaponBoxItem
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              GainRate;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              FirstGainRate;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                TimeLimit;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.GfxMovie_PVEEncouragement.FinishGameData
// 0x000C
struct FFinishGameData
{
	int                                                ThingsId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                costTicket;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                UseTime;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.GfxMovie_PVEEncouragement.FinishGameDataList
// 0x000C
struct FFinishGameDataList
{
	TArray< struct FFinishGameData >                   FG_Item;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_PVEEncouragement.ThingsListData
// 0x000C
struct UGfxMovie_PVEEncouragement_FThingsListData
{
	TArray< int >                                      Items;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_PVEEncouragement.ThingsItem
// 0x001C
struct UGfxMovie_PVEEncouragement_FThingsItem
{
	int                                                nScoreValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     strSourcePath;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     strSourceName;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_PVETopRank.PVEMapInfo_RankList
// 0x003C
struct FPVEMapInfo_RankList
{
	int                                                ModeId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MapId;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FPVESubModeTypeMappings                     CurrentSubMode;                                   		// 0x0008 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned long >                            bHadPlayerRankList;                               		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPVETopRankInfo >                   PVERankList;                                      		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bGetData : 1;                                     		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TGameGfxUI.GfxMovie_QTalkPanel.MyTeamQTalk
// 0x0024
struct FMyTeamQTalk
{
	struct FString                                     strRoomID;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     strSubRoomID;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     strLastRoomID;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_RecommandWeapon.InnerIntArray
// 0x000C
struct FInnerIntArray
{
	TArray< int >                                      InnerArray;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_RecommandWeapon.InnerStringArray
// 0x000C
struct FInnerStringArray
{
	TArray< struct FString >                           InnerArray;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_RecommandWeapon.InnerFloatArray
// 0x000C
struct FInnerFloatArray
{
	TArray< float >                                    InnerArray;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_RecommandWeapon.ServerDataType
// 0x0024
struct FServerDataType
{
	TArray< int >                                      UserPercentageArray;                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      BuyButtonTypeArray;                               		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      WeaponIDArray;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_ShopBuySingle.DiscountItemInfo
// 0x0008
struct FDiscountItemInfo
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.GfxMovie_SpectatorHUD.PlayerInfo
// 0x0020
struct FPlayerInfo
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                SideIndex;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      Side;                                             		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned long                                      bDead : 1;                                        		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                PRIIndex;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.GfxMovie_TechnicalMatch.TTMatchInfo
// 0x001C
struct FTTMatchInfo
{
	int                                                GameMode;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     TypeName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NZPoint;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Enable;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.GfxMovie_TechnicalMatch.DataObject
// 0x0008
struct FDataObject
{
	int                                                nData;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nIndex;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.GfxMovie_TMPrizeIntroduce.ThingsInfo
// 0x0008
struct FThingsInfo
{
	int                                                TItem;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                tTime;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.GfxMovie_TMPrizeIntroduce.ThingsListData
// 0x0010
struct UGfxMovie_TMPrizeIntroduce_FThingsListData
{
	int                                                NZPoint;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FThingsInfo >                       Items;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_TMPrizeIntroduce.ThingsItem
// 0x001C
struct UGfxMovie_TMPrizeIntroduce_FThingsItem
{
	int                                                nScoreValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     strSourcePath;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     strSourceName;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.GfxMovie_UIContainer.ChatFaceStringConfigInfo
// 0x0018
struct FChatFaceStringConfigInfo
{
	struct FString                                     Key;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     InputString;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.TGDataStore_RoomList.RoomData
// 0x0034
struct FRoomData
{
	class USurface*                                    MapIcon;                                          		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bLocked : 1;                                      		// 0x0004 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bCanJoin : 1;                                     		// 0x0004 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bObserver : 1;                                    		// 0x0004 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	struct FString                                     RoomID;                                           		// 0x0008 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     RoomName;                                         		// 0x0014 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                CurrentPlayer;                                    		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MaxPlayer;                                        		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     GameType;                                         		// 0x0028 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct TGameGfxUI.TGGfxUISceneClient.MessageBoxParam
// 0x0060
struct FMessageBoxParam
{
	int                                                Style;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Title;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnOk;                                             		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnCancel;                                         		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnOkWithParameter;                                		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              CloseTime;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FString                                     OkText;                                           		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CancelText;                                       		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bShouldNotAutoClosed : 1;                         		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSet : 1;                                         		// 0x005C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TGameGfxUI.TGLobbyMoviesManager.InviteToGameInfo
// 0x0018
struct FInviteToGameInfo
{
	unsigned long                                      bNeedRequist : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      GameType;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FString                                     RequistUin;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                InviteId;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.TGUI_ItemList.AvatarItemSampleInfo
// 0x0014
struct FAvatarItemSampleInfo
{
	struct FUniquePropId                               PropId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                SortValue;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.TGUI_ShopRoleList.PreviewItem
// 0x000C
struct FPreviewItem
{
	int                                                ComIndex;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ItemId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Location;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.TGUI_LittleShopItemList.CommodityInList
// 0x00E8
struct FCommodityInList
{
	struct FFCommodityDataRaw                          CommodityData;                                    		// 0x0000 (0x00E4) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHadOwn : 1;                                      		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanRenew : 1;                                    		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TGameGfxUI.TGUI_TeamMemberList.ComplaintPlayerInfo
// 0x001C
struct FComplaintPlayerInfo
{
	struct FString                                     MemberName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MemberUin;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ComplaintTimes;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TGameGfxUI.TGUI_TeamTopRankList.TeamRankInfo_UI
// 0x0038
struct FTeamRankInfo_UI
{
	struct FUniquePropId                               TeamID;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FRankTeamQTInfo                             BindQTInfo;                                       		// 0x0010 (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif